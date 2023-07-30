// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/HuntingExcelConfig.gen.h

// Line 163: range 0000000014D3CDA2-0000000014D3D050
void __cdecl data::HuntingRefreshExcelConfig::HuntingRefreshExcelConfig(
        data::HuntingRefreshExcelConfig *const this,
        const data::HuntingRefreshExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  data::HuntingOfferDifficultyType difficulty; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t region_id; // ecx
  char v12; // dl
  uint32_t finish_reward_id; // ecx
  char v14; // al
  const data::HuntingRefreshExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HuntingRefreshExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HuntingRefreshExcelConfig = v2;
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
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->city_id);
  }
  city_id = v15->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->difficulty);
  }
  difficulty = v15->difficulty;
  v9 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->difficulty, v5);
  }
  this->difficulty = difficulty;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->region_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->region_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->region_id);
  }
  region_id = v15->region_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->region_id, v10);
  }
  this->region_id = region_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->finish_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->finish_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->finish_reward_id);
  }
  finish_reward_id = v15->finish_reward_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->finish_reward_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->finish_reward_id, v10);
  }
  this->finish_reward_id = finish_reward_id;
};

// Line 166: range 0000000014DE99C4-0000000014DE99EE
void __cdecl data::HuntingRefreshExcelConfig::~HuntingRefreshExcelConfig(data::HuntingRefreshExcelConfig *const this)
{
  data::HuntingRefreshExcelConfig::~HuntingRefreshExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 166: range 0000000014DE9982-0000000014DE99C3
void __cdecl data::HuntingRefreshExcelConfig::~HuntingRefreshExcelConfig(data::HuntingRefreshExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingRefreshExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingRefreshExcelConfig = v2;
};

// Line 181: range 000000001475E4A0-000000001475E5BF
void __cdecl data::HuntingRegionExcelConfig::HuntingRegionExcelConfig(data::HuntingRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingRegionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<float>::vector(&this->center_pos_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->center_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_radius, v1);
  }
  this->center_radius = 0;
  std::vector<unsigned int>::vector(&this->safe_clue_group);
  std::vector<unsigned int>::vector(&this->clue_group);
  std::vector<unsigned int>::vector(&this->safe_destination_group);
  std::vector<unsigned int>::vector(&this->destination_group);
  std::vector<unsigned int>::vector(&this->certain_final_monster_id);
};

// Line 181: range 0000000014D3D192-0000000014D3D3E3
void __cdecl data::HuntingRegionExcelConfig::HuntingRegionExcelConfig(
        data::HuntingRegionExcelConfig *const this,
        const data::HuntingRegionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<float> *p_center_pos_list; // rsi
  uint32_t center_radius; // ecx
  char v7; // al
  const data::HuntingRegionExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HuntingRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HuntingRegionExcelConfig = v2;
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
  p_center_pos_list = &v8->center_pos_list;
  std::vector<float>::vector(&this->center_pos_list, &v8->center_pos_list);
  if ( *(_BYTE *)(((unsigned __int64)&v8->center_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->center_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->center_radius);
  }
  center_radius = v8->center_radius;
  v7 = *(_BYTE *)(((unsigned __int64)&this->center_radius >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_center_pos_list) = v7 != 0;
    __asan_report_store4(&this->center_radius, p_center_pos_list);
  }
  this->center_radius = center_radius;
  std::vector<unsigned int>::vector(&this->safe_clue_group, &v8->safe_clue_group);
  std::vector<unsigned int>::vector(&this->clue_group, &v8->clue_group);
  std::vector<unsigned int>::vector(&this->safe_destination_group, &v8->safe_destination_group);
  std::vector<unsigned int>::vector(&this->destination_group, &v8->destination_group);
  std::vector<unsigned int>::vector(&this->certain_final_monster_id, &v8->certain_final_monster_id);
};

// Line 184: range 0000000014DE9956-0000000014DE9980
void __cdecl data::HuntingRegionExcelConfig::~HuntingRegionExcelConfig(data::HuntingRegionExcelConfig *const this)
{
  data::HuntingRegionExcelConfig::~HuntingRegionExcelConfig(this);
  operator delete(this, 0xA8uLL);
};

// Line 184: range 0000000014DE98B2-0000000014DE9955
void __cdecl data::HuntingRegionExcelConfig::~HuntingRegionExcelConfig(data::HuntingRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingRegionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->certain_final_monster_id);
  std::vector<unsigned int>::~vector(&this->destination_group);
  std::vector<unsigned int>::~vector(&this->safe_destination_group);
  std::vector<unsigned int>::~vector(&this->clue_group);
  std::vector<unsigned int>::~vector(&this->safe_clue_group);
  std::vector<float>::~vector(&this->center_pos_list);
};

// Line 202: range 000000001475E5C0-000000001475E711
void __cdecl data::HuntingGroupInfoExcelConfig::HuntingGroupInfoExcelConfig(
        data::HuntingGroupInfoExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HuntingGroupInfoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingGroupInfoExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v1);
  }
  this->group_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->region_id, v3);
  }
  this->region_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_type, v3);
  }
  this->point_type = HUNTING_CLUE_ITERACT;
  std::vector<unsigned int>::vector(&this->ref_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pos_type, v3);
  }
  this->pos_type = HUNTING_POS_NONE;
};

// Line 202: range 0000000014D3D524-0000000014D3D768
void __cdecl data::HuntingGroupInfoExcelConfig::HuntingGroupInfoExcelConfig(
        data::HuntingGroupInfoExcelConfig *const this,
        const data::HuntingGroupInfoExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t group_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t region_id; // ecx
  char v7; // dl
  data::HuntingCluePointType point_type; // ecx
  char v9; // al
  std::vector<unsigned int> *p_ref_index; // rsi
  data::HuntingMonsterCreatePosType pos_type; // ecx
  char v12; // al
  const data::HuntingGroupInfoExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HuntingGroupInfoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HuntingGroupInfoExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->group_id);
  }
  group_id = a2->group_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->group_id, a2);
  }
  this->group_id = group_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->region_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->region_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->region_id);
  }
  region_id = v13->region_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->region_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->region_id, v5);
  }
  this->region_id = region_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->point_type);
  }
  point_type = v13->point_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->point_type, v5);
  }
  this->point_type = point_type;
  p_ref_index = &v13->ref_index;
  std::vector<unsigned int>::vector(&this->ref_index, &v13->ref_index);
  if ( *(_BYTE *)(((unsigned __int64)&v13->pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->pos_type);
  }
  pos_type = v13->pos_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->pos_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_ref_index) = v12 != 0;
    __asan_report_store4(&this->pos_type, p_ref_index);
  }
  this->pos_type = pos_type;
};

// Line 205: range 0000000014DE9886-0000000014DE98B0
void __cdecl data::HuntingGroupInfoExcelConfig::~HuntingGroupInfoExcelConfig(
        data::HuntingGroupInfoExcelConfig *const this)
{
  data::HuntingGroupInfoExcelConfig::~HuntingGroupInfoExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 205: range 0000000014DE9834-0000000014DE9885
void __cdecl data::HuntingGroupInfoExcelConfig::~HuntingGroupInfoExcelConfig(
        data::HuntingGroupInfoExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingGroupInfoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingGroupInfoExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->ref_index);
};

// Line 220: range 0000000014D3D8AA-0000000014D3DC53
void __cdecl data::HuntingClueMonsterExcelConfig::HuntingClueMonsterExcelConfig(
        data::HuntingClueMonsterExcelConfig *const this,
        const data::HuntingClueMonsterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t monster_id; // ecx
  char v7; // dl
  uint32_t revise_level_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::HuntingMonsterGroupType group_type; // ecx
  char v12; // dl
  uint32_t monster_group_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t level; // ecx
  char v17; // dl
  bool is_clue_monster; // cl
  char v19; // al
  const data::HuntingClueMonsterExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HuntingClueMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HuntingClueMonsterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  v5 = (((_BYTE)v20 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->monster_id);
  }
  monster_id = v20->monster_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->monster_id, v5);
  }
  this->monster_id = monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->revise_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->revise_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->revise_level_id);
  }
  revise_level_id = v20->revise_level_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->revise_level_id, v5);
  }
  this->revise_level_id = revise_level_id;
  v10 = (((_BYTE)v20 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->group_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->group_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->group_type);
  }
  group_type = v20->group_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_type, v10);
  }
  this->group_type = group_type;
  if ( *(_BYTE *)(((unsigned __int64)&v20->monster_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->monster_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->monster_group_id);
  }
  monster_group_id = v20->monster_group_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->monster_group_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->monster_group_id, v10);
  }
  this->monster_group_id = monster_group_id;
  v15 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->level);
  }
  level = v20->level;
  v17 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
    __asan_report_store4(&this->level, v15);
  this->level = level;
  if ( *(char *)(((unsigned __int64)&v20->is_clue_monster >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->is_clue_monster, v15, &v20->is_clue_monster);
  is_clue_monster = v20->is_clue_monster;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_clue_monster >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store1(&this->is_clue_monster, v15, &this->is_clue_monster);
  }
  this->is_clue_monster = is_clue_monster;
};

// Line 223: range 0000000014DE9808-0000000014DE9832
void __cdecl data::HuntingClueMonsterExcelConfig::~HuntingClueMonsterExcelConfig(
        data::HuntingClueMonsterExcelConfig *const this)
{
  data::HuntingClueMonsterExcelConfig::~HuntingClueMonsterExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 223: range 0000000014DE97C6-0000000014DE9807
void __cdecl data::HuntingClueMonsterExcelConfig::~HuntingClueMonsterExcelConfig(
        data::HuntingClueMonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingClueMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingClueMonsterExcelConfig = v2;
};

// Line 240: range 0000000014D3DD94-0000000014D3DFC8
void __cdecl data::HuntingClueGatherExcelConfig::HuntingClueGatherExcelConfig(
        data::HuntingClueGatherExcelConfig *const this,
        const data::HuntingClueGatherExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gather_id; // ecx
  char v7; // dl
  uint32_t gather_group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_clue_gather; // cl
  char v13; // dl
  __int64 v14; // rdx
  const data::HuntingClueGatherExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HuntingClueGatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HuntingClueGatherExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->gather_id);
  }
  gather_id = v15->gather_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gather_id, v5);
  }
  this->gather_id = gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gather_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->gather_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->gather_group_id);
  }
  gather_group_id = v15->gather_group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gather_group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gather_group_id, v5);
  }
  this->gather_group_id = gather_group_id;
  v10 = ((_BYTE)v15 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v15->is_clue_gather >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v15->is_clue_gather >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v15->is_clue_gather, v10, v11);
  is_clue_gather = v15->is_clue_gather;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_clue_gather >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_clue_gather, v10, v14);
  this->is_clue_gather = is_clue_gather;
};

// Line 243: range 0000000014DE9758-0000000014DE9799
void __cdecl data::HuntingClueGatherExcelConfig::~HuntingClueGatherExcelConfig(
        data::HuntingClueGatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingClueGatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingClueGatherExcelConfig = v2;
};

// Line 243: range 0000000014DE979A-0000000014DE97C4
void __cdecl data::HuntingClueGatherExcelConfig::~HuntingClueGatherExcelConfig(
        data::HuntingClueGatherExcelConfig *const this)
{
  data::HuntingClueGatherExcelConfig::~HuntingClueGatherExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 257: range 0000000014CAFFF8-0000000014CB0087
void __cdecl data::HuntingRefreshCond::HuntingRefreshCond(data::HuntingRefreshCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingRefreshCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingRefreshCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = HUNTING_REFRESH_COND_NONE;
  std::vector<unsigned int>::vector(&this->param);
};

// Line 257: range 0000000014D3CC4A-0000000014D3CD1F
void __cdecl data::HuntingRefreshCond::HuntingRefreshCond(
        data::HuntingRefreshCond *const this,
        const data::HuntingRefreshCond *a2)
{
  int (**v2)(...); // rdx
  data::HuntingRefreshCondType cond_type; // ecx
  char v4; // al
  const data::HuntingRefreshCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HuntingRefreshCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HuntingRefreshCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->cond_type, a2);
  }
  this->cond_type = cond_type;
  std::vector<unsigned int>::vector(&this->param, &v5->param);
};

// Line 260: range 0000000014BED82C-0000000014BED856
void __cdecl data::HuntingRefreshCond::~HuntingRefreshCond(data::HuntingRefreshCond *const this)
{
  data::HuntingRefreshCond::~HuntingRefreshCond(this);
  operator delete(this, 0x28uLL);
};

// Line 260: range 0000000014BED7DA-0000000014BED82B
void __cdecl data::HuntingRefreshCond::~HuntingRefreshCond(data::HuntingRefreshCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingRefreshCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingRefreshCond = v2;
  std::vector<unsigned int>::~vector(&this->param);
};

// Line 270: range 000000001475E766-000000001475EB58
void __cdecl data::HuntingMonsterExcelConfig::HuntingMonsterExcelConfig(data::HuntingMonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::HuntingMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingMonsterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_id, v3);
  }
  this->monster_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->associated_monster_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->associated_monster_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->associated_monster_group_id, v3);
  }
  this->associated_monster_group_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hunting_finish_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hunting_finish_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hunting_finish_type, v4);
  }
  this->hunting_finish_type = HUNTING_FINISH_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->affix);
  std::string::basic_string(&this->ability_group);
  if ( *(_BYTE *)(((unsigned __int64)&this->create_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_pos_type, v4);
  }
  this->create_pos_type = HUNTING_POS_NONE;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v5);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_level_id, v5);
  }
  this->revise_level_id = 0;
  std::vector<unsigned int>::vector(&this->city_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty, v5);
  }
  this->difficulty = HUNTING_DIFFICULTY_EASY;
  v6 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_time, v6);
  }
  this->limit_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->search_point_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->search_point_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->search_point_num, v6);
  }
  this->search_point_num = 0;
  std::vector<data::HuntingRefreshCond>::vector(&this->refresh_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->initial_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->initial_pose, v6);
  }
  this->initial_pose = 0;
  std::vector<unsigned int>::vector(&this->suite_id);
  if ( *(char *)(((unsigned __int64)&this->is_disable_wandering >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_disable_wandering, v6, &this->is_disable_wandering);
  this->is_disable_wandering = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->route_id, (((_BYTE)this - 60) & 7u) + 3);
  }
  this->route_id = 0;
};

// Line 270: range 0000000014D3E10A-0000000014D3E8AE
void __cdecl data::HuntingMonsterExcelConfig::HuntingMonsterExcelConfig(
        data::HuntingMonsterExcelConfig *const this,
        const data::HuntingMonsterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t config_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t monster_id; // ecx
  char v7; // dl
  uint32_t associated_monster_group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::HuntingMonsterFinishType hunting_finish_type; // ecx
  char v12; // dl
  std::string *p_ability_group; // rsi
  data::HuntingMonsterCreatePosType create_pos_type; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t level; // ecx
  char v18; // dl
  uint32_t revise_level_id; // ecx
  char v20; // al
  std::vector<unsigned int> *p_city_list; // rsi
  data::HuntingOfferDifficultyType difficulty; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t limit_time; // ecx
  char v26; // dl
  uint32_t search_point_num; // ecx
  char v28; // al
  std::vector<data::HuntingRefreshCond> *p_refresh_cond; // rsi
  uint32_t initial_pose; // ecx
  char v31; // al
  std::vector<unsigned int> *p_suite_id; // rsi
  bool is_disable_wandering; // cl
  char v34; // al
  __int64 v35; // rsi
  uint32_t route_id; // ecx
  char v37; // dl
  const data::HuntingMonsterExcelConfig *v38; // [rsp+0h] [rbp-20h]

  v38 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HuntingMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HuntingMonsterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  v5 = (((_BYTE)v38 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->monster_id);
  }
  monster_id = v38->monster_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->monster_id, v5);
  }
  this->monster_id = monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&v38->associated_monster_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->associated_monster_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->associated_monster_group_id);
  }
  associated_monster_group_id = v38->associated_monster_group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->associated_monster_group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->associated_monster_group_id, v5);
  }
  this->associated_monster_group_id = associated_monster_group_id;
  v10 = (((_BYTE)v38 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->hunting_finish_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->hunting_finish_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->hunting_finish_type);
  }
  hunting_finish_type = v38->hunting_finish_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->hunting_finish_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->hunting_finish_type, v10);
  }
  this->hunting_finish_type = hunting_finish_type;
  std::vector<unsigned int>::vector(&this->affix, &v38->affix);
  p_ability_group = &v38->ability_group;
  std::string::basic_string(&this->ability_group, &v38->ability_group);
  if ( *(_BYTE *)(((unsigned __int64)&v38->create_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->create_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->create_pos_type);
  }
  create_pos_type = v38->create_pos_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->create_pos_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_ability_group) = v15 != 0;
    __asan_report_store4(&this->create_pos_type, p_ability_group);
  }
  this->create_pos_type = create_pos_type;
  v16 = (((_BYTE)v38 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->level);
  }
  level = v38->level;
  v18 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->level, v16);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v38->revise_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->revise_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->revise_level_id);
  }
  revise_level_id = v38->revise_level_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->revise_level_id, v16);
  }
  this->revise_level_id = revise_level_id;
  p_city_list = &v38->city_list;
  std::vector<unsigned int>::vector(&this->city_list, &v38->city_list);
  if ( *(_BYTE *)(((unsigned __int64)&v38->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->difficulty);
  }
  difficulty = v38->difficulty;
  v23 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_city_list) = v23 != 0;
    __asan_report_store4(&this->difficulty, p_city_list);
  }
  this->difficulty = difficulty;
  v24 = (((_BYTE)v38 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->limit_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->limit_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->limit_time);
  }
  limit_time = v38->limit_time;
  v26 = *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000);
  if ( v26 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v26 )
  {
    LOBYTE(v24) = v26 != 0;
    __asan_report_store4(&this->limit_time, v24);
  }
  this->limit_time = limit_time;
  if ( *(_BYTE *)(((unsigned __int64)&v38->search_point_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->search_point_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->search_point_num);
  }
  search_point_num = v38->search_point_num;
  v28 = *(_BYTE *)(((unsigned __int64)&this->search_point_num >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v24) = v28 != 0;
    __asan_report_store4(&this->search_point_num, v24);
  }
  this->search_point_num = search_point_num;
  p_refresh_cond = &v38->refresh_cond;
  std::vector<data::HuntingRefreshCond>::vector(&this->refresh_cond, &v38->refresh_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v38->initial_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->initial_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->initial_pose);
  }
  initial_pose = v38->initial_pose;
  v31 = *(_BYTE *)(((unsigned __int64)&this->initial_pose >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(p_refresh_cond) = v31 != 0;
    __asan_report_store4(&this->initial_pose, p_refresh_cond);
  }
  this->initial_pose = initial_pose;
  p_suite_id = &v38->suite_id;
  std::vector<unsigned int>::vector(&this->suite_id, &v38->suite_id);
  if ( *(char *)(((unsigned __int64)&v38->is_disable_wandering >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v38->is_disable_wandering, p_suite_id, &v38->is_disable_wandering);
  is_disable_wandering = v38->is_disable_wandering;
  v34 = *(_BYTE *)(((unsigned __int64)&this->is_disable_wandering >> 3) + 0x7FFF8000);
  if ( v34 < 0 )
  {
    LOBYTE(p_suite_id) = v34 != 0;
    __asan_report_store1(&this->is_disable_wandering, p_suite_id, &this->is_disable_wandering);
  }
  this->is_disable_wandering = is_disable_wandering;
  v35 = (((_BYTE)v38 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->route_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->route_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->route_id);
  }
  route_id = v38->route_id;
  v37 = *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000);
  if ( v37 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v37 )
  {
    LOBYTE(v35) = v37 != 0;
    __asan_report_store4(&this->route_id, v35);
  }
  this->route_id = route_id;
};

// Line 273: range 0000000014DE972C-0000000014DE9756
void __cdecl data::HuntingMonsterExcelConfig::~HuntingMonsterExcelConfig(data::HuntingMonsterExcelConfig *const this)
{
  data::HuntingMonsterExcelConfig::~HuntingMonsterExcelConfig(this);
  operator delete(this, 0xC8uLL);
};

// Line 273: range 0000000014DE9696-0000000014DE972B
void __cdecl data::HuntingMonsterExcelConfig::~HuntingMonsterExcelConfig(data::HuntingMonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HuntingMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HuntingMonsterExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->suite_id);
  std::vector<data::HuntingRefreshCond>::~vector(&this->refresh_cond);
  std::vector<unsigned int>::~vector(&this->city_list);
  std::string::~string(&this->ability_group);
  std::vector<unsigned int>::~vector(&this->affix);
};
