// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/WorldAreaExcelConfig.gen.h

// Line 151: range 000000000CE2C066-000000000CE2C37F
void __cdecl data::WorldAreaConfig::WorldAreaConfig(data::WorldAreaConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_type, v3);
  }
  this->area_type = LEVEL_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id_1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id_1, v4);
  }
  this->area_id_1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id_2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id_2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id_2, v4);
  }
  this->area_id_2 = 0;
  v5 = ((_BYTE)this + 28) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->area_default_lock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->area_default_lock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->area_default_lock, v5, v6);
  this->area_default_lock = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tower_point_id, v5);
  }
  this->tower_point_id = 0;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type, v7);
  }
  this->element_type = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->terrain_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->terrain_type, v7);
  }
  this->terrain_type = AREA_TERRAIN_NONE;
  v8 = ((_BYTE)this + 44) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->show_tips >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->show_tips >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->show_tips, v8, v9);
  this->show_tips = 0;
  std::vector<unsigned int>::vector(&this->area_offset);
  if ( *(_BYTE *)(((unsigned __int64)&this->minimap_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minimap_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->minimap_scale, v8);
  }
  this->minimap_scale = 0.0;
};

// Line 151: range 000000000D388142-000000000D3886F2
void __cdecl data::WorldAreaConfig::WorldAreaConfig(data::WorldAreaConfig *const this, const data::WorldAreaConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_id; // ecx
  char v7; // dl
  data::WorldAreaType area_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t area_id_1; // ecx
  char v12; // dl
  uint32_t area_id_2; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool area_default_lock; // cl
  char v18; // dl
  __int64 v19; // rdx
  uint32_t tower_point_id; // ecx
  char v21; // al
  __int64 v22; // rsi
  data::ElementType element_type; // ecx
  char v24; // dl
  data::AreaTerrainType terrain_type; // ecx
  char v26; // al
  __int64 v27; // rsi
  __int64 v28; // rdx
  bool show_tips; // cl
  char v30; // dl
  __int64 v31; // rdx
  float minimap_scale; // xmm0_4
  const data::WorldAreaConfig *v33; // [rsp+0h] [rbp-10h]

  v33 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WorldAreaConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WorldAreaConfig = v2;
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
  v5 = (((_BYTE)v33 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->scene_id);
  }
  scene_id = v33->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->area_type);
  }
  area_type = v33->area_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->area_type, v5);
  }
  this->area_type = area_type;
  v10 = (((_BYTE)v33 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->area_id_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->area_id_1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->area_id_1);
  }
  area_id_1 = v33->area_id_1;
  v12 = *(_BYTE *)(((unsigned __int64)&this->area_id_1 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->area_id_1, v10);
  }
  this->area_id_1 = area_id_1;
  if ( *(_BYTE *)(((unsigned __int64)&v33->area_id_2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->area_id_2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->area_id_2);
  }
  area_id_2 = v33->area_id_2;
  v14 = *(_BYTE *)(((unsigned __int64)&this->area_id_2 >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->area_id_2, v10);
  }
  this->area_id_2 = area_id_2;
  v15 = ((_BYTE)v33 + 28) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v33->area_default_lock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v33->area_default_lock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v33->area_default_lock, v15, v16);
  area_default_lock = v33->area_default_lock;
  v18 = *(_BYTE *)(((unsigned __int64)&this->area_default_lock >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->area_default_lock, v15, v19);
  this->area_default_lock = area_default_lock;
  if ( *(_BYTE *)(((unsigned __int64)&v33->tower_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->tower_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->tower_point_id);
  }
  tower_point_id = v33->tower_point_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->tower_point_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v15) = v21 != 0;
    __asan_report_store4(&this->tower_point_id, v15);
  }
  this->tower_point_id = tower_point_id;
  v22 = (((_BYTE)v33 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->element_type);
  }
  element_type = v33->element_type;
  v24 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v24 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v24 )
  {
    LOBYTE(v22) = v24 != 0;
    __asan_report_store4(&this->element_type, v22);
  }
  this->element_type = element_type;
  if ( *(_BYTE *)(((unsigned __int64)&v33->terrain_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->terrain_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->terrain_type);
  }
  terrain_type = v33->terrain_type;
  v26 = *(_BYTE *)(((unsigned __int64)&this->terrain_type >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(v22) = v26 != 0;
    __asan_report_store4(&this->terrain_type, v22);
  }
  this->terrain_type = terrain_type;
  v27 = ((_BYTE)v33 + 44) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&v33->show_tips >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&v33->show_tips >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_load1(&v33->show_tips, v27, v28);
  show_tips = v33->show_tips;
  v30 = *(_BYTE *)(((unsigned __int64)&this->show_tips >> 3) + 0x7FFF8000);
  LOBYTE(v27) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store1(&this->show_tips, v27, v31);
  this->show_tips = show_tips;
  std::vector<unsigned int>::vector(&this->area_offset, &v33->area_offset);
  if ( *(_BYTE *)(((unsigned __int64)&v33->minimap_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->minimap_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->minimap_scale);
  }
  minimap_scale = v33->minimap_scale;
  if ( *(_BYTE *)(((unsigned __int64)&this->minimap_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minimap_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->minimap_scale, &v33->area_offset);
  }
  this->minimap_scale = minimap_scale;
};

// Line 154: range 000000000D4931BE-000000000D4931E8
void __cdecl data::WorldAreaConfig::~WorldAreaConfig(data::WorldAreaConfig *const this)
{
  data::WorldAreaConfig::~WorldAreaConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 154: range 000000000D49316C-000000000D4931BD
void __cdecl data::WorldAreaConfig::~WorldAreaConfig(data::WorldAreaConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaConfig = v2;
  std::vector<unsigned int>::~vector(&this->area_offset);
};

// Line 176: range 000000000CE2C380-000000000CE2C4E9
void __cdecl data::MapAreaConfig::MapAreaConfig(data::MapAreaConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MapAreaConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MapAreaConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  std::string::basic_string(&this->name);
  std::vector<unsigned int>::vector(&this->area_id_1);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_point_id, v3);
  }
  this->scene_point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_area_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->map_area_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->map_area_state, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->map_area_state = MistClose;
};

// Line 176: range 000000000D388834-000000000D388ACA
void __cdecl data::MapAreaConfig::MapAreaConfig(data::MapAreaConfig *const this, const data::MapAreaConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_area_id_1; // rsi
  uint32_t scene_point_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  data::MapAreaState map_area_state; // ecx
  char v13; // dl
  const data::MapAreaConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MapAreaConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MapAreaConfig = v2;
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
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->scene_id);
  }
  scene_id = v14->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  std::string::basic_string(&this->name, &v14->name);
  p_area_id_1 = &v14->area_id_1;
  std::vector<unsigned int>::vector(&this->area_id_1, &v14->area_id_1);
  if ( *(_BYTE *)(((unsigned __int64)&v14->scene_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->scene_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->scene_point_id);
  }
  scene_point_id = v14->scene_point_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->scene_point_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_area_id_1) = v10 != 0;
    __asan_report_store4(&this->scene_point_id, p_area_id_1);
  }
  this->scene_point_id = scene_point_id;
  v11 = (((_BYTE)v14 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->map_area_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->map_area_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->map_area_state);
  }
  map_area_state = v14->map_area_state;
  v13 = *(_BYTE *)(((unsigned __int64)&this->map_area_state >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->map_area_state, v11);
  }
  this->map_area_state = map_area_state;
};

// Line 179: range 000000000D4930DE-000000000D49313F
void __cdecl data::MapAreaConfig::~MapAreaConfig(data::MapAreaConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MapAreaConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MapAreaConfig = v2;
  std::vector<unsigned int>::~vector(&this->area_id_1);
  std::string::~string(&this->name);
};

// Line 179: range 000000000D493140-000000000D49316A
void __cdecl data::MapAreaConfig::~MapAreaConfig(data::MapAreaConfig *const this)
{
  data::MapAreaConfig::~MapAreaConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 195: range 000000000D388C0C-000000000D388DC0
void __cdecl data::LevelTagMapAreaConfig::LevelTagMapAreaConfig(
        data::LevelTagMapAreaConfig *const this,
        const data::LevelTagMapAreaConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_tag_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t map_area_id; // ecx
  char v7; // dl
  int32_t index; // ecx
  char v9; // al
  const data::LevelTagMapAreaConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LevelTagMapAreaConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LevelTagMapAreaConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_tag_id);
  }
  level_tag_id = a2->level_tag_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_tag_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_tag_id, a2);
  }
  this->level_tag_id = level_tag_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->map_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->map_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->map_area_id);
  }
  map_area_id = v10->map_area_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->map_area_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->map_area_id, v5);
  }
  this->map_area_id = map_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->index);
  }
  index = v10->index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->index, v5);
  }
  this->index = index;
};

// Line 198: range 000000000D493070-000000000D4930B1
void __cdecl data::LevelTagMapAreaConfig::~LevelTagMapAreaConfig(data::LevelTagMapAreaConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelTagMapAreaConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelTagMapAreaConfig = v2;
};

// Line 198: range 000000000D4930B2-000000000D4930DC
void __cdecl data::LevelTagMapAreaConfig::~LevelTagMapAreaConfig(data::LevelTagMapAreaConfig *const this)
{
  data::LevelTagMapAreaConfig::~LevelTagMapAreaConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 211: range 000000000CE2C4EA-000000000CE2C6C7
void __cdecl data::WorldAreaExploreEventConfig::WorldAreaExploreEventConfig(
        data::WorldAreaExploreEventConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaExploreEventConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaExploreEventConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->event_id, v1);
  }
  this->event_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->event_type, v4);
  }
  this->event_type = EXPLORE_EVENT_NONE;
  std::vector<std::string>::vector(&this->param);
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explore_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->explore_weight, v4);
  }
  this->explore_weight = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->reward_id = 0;
};

// Line 211: range 000000000D388F02-000000000D389250
void __cdecl data::WorldAreaExploreEventConfig::WorldAreaExploreEventConfig(
        data::WorldAreaExploreEventConfig *const this,
        const data::WorldAreaExploreEventConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t event_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_id; // ecx
  char v7; // dl
  uint32_t area_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::ExploreEventType event_type; // ecx
  char v12; // dl
  std::vector<std::string> *p_param; // rsi
  uint32_t explore_weight; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t reward_id; // ecx
  char v18; // dl
  const data::WorldAreaExploreEventConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WorldAreaExploreEventConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WorldAreaExploreEventConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->event_id);
  }
  event_id = a2->event_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->event_id, a2);
  }
  this->event_id = event_id;
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->scene_id);
  }
  scene_id = v19->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->area_id);
  }
  area_id = v19->area_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->area_id, v5);
  }
  this->area_id = area_id;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->event_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->event_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->event_type);
  }
  event_type = v19->event_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->event_type, v10);
  }
  this->event_type = event_type;
  p_param = &v19->param;
  std::vector<std::string>::vector(&this->param, &v19->param);
  if ( *(_BYTE *)(((unsigned __int64)&v19->explore_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->explore_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->explore_weight);
  }
  explore_weight = v19->explore_weight;
  v15 = *(_BYTE *)(((unsigned __int64)&this->explore_weight >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_param) = v15 != 0;
    __asan_report_store4(&this->explore_weight, p_param);
  }
  this->explore_weight = explore_weight;
  v16 = (((_BYTE)v19 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->reward_id);
  }
  reward_id = v19->reward_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->reward_id, v16);
  }
  this->reward_id = reward_id;
};

// Line 214: range 000000000D493044-000000000D49306E
void __cdecl data::WorldAreaExploreEventConfig::~WorldAreaExploreEventConfig(
        data::WorldAreaExploreEventConfig *const this)
{
  data::WorldAreaExploreEventConfig::~WorldAreaExploreEventConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 214: range 000000000D492FF2-000000000D493043
void __cdecl data::WorldAreaExploreEventConfig::~WorldAreaExploreEventConfig(
        data::WorldAreaExploreEventConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaExploreEventConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaExploreEventConfig = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 231: range 000000000D4131AA-000000000D41326A
data::WorldAreaLevelupAction *__cdecl data::WorldAreaLevelupAction::operator=(
        data::WorldAreaLevelupAction *const this,
        const data::WorldAreaLevelupAction *a2)
{
  data::WorldAreaLevelupActionType type; // ecx
  char v3; // al
  const data::WorldAreaLevelupAction *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<unsigned int>::operator=(&this->param1_vec, &v5->param1_vec);
  std::vector<unsigned int>::operator=(&this->param2_vec, &v5->param2_vec);
  return this;
};

// Line 231: range 000000000D306C2E-000000000D306CCD
void __cdecl data::WorldAreaLevelupAction::WorldAreaLevelupAction(data::WorldAreaLevelupAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaLevelupAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = WORLD_AREA_ACTION_NONE;
  std::vector<unsigned int>::vector(&this->param1_vec);
  std::vector<unsigned int>::vector(&this->param2_vec);
};

// Line 231: range 000000000D387FA8-000000000D3880BF
void __cdecl data::WorldAreaLevelupAction::WorldAreaLevelupAction(
        data::WorldAreaLevelupAction *const this,
        const data::WorldAreaLevelupAction *a2)
{
  int (**v2)(...); // rdx
  data::WorldAreaLevelupActionType type; // ecx
  char v4; // al
  const data::WorldAreaLevelupAction *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WorldAreaLevelupAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<unsigned int>::vector(&this->param1_vec, &v5->param1_vec);
  std::vector<unsigned int>::vector(&this->param2_vec, &v5->param2_vec);
};

// Line 234: range 000000000D2731D4-000000000D273235
void __cdecl data::WorldAreaLevelupAction::~WorldAreaLevelupAction(data::WorldAreaLevelupAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaLevelupAction = v2;
  std::vector<unsigned int>::~vector(&this->param2_vec);
  std::vector<unsigned int>::~vector(&this->param1_vec);
};

// Line 234: range 000000000D273236-000000000D273260
void __cdecl data::WorldAreaLevelupAction::~WorldAreaLevelupAction(data::WorldAreaLevelupAction *const this)
{
  data::WorldAreaLevelupAction::~WorldAreaLevelupAction(this);
  operator delete(this, 0x40uLL);
};

// Line 245: range 000000000D15E8EE-000000000D15E9FD
data::WorldAreaLevelupConsumeItem *__cdecl data::WorldAreaLevelupConsumeItem::operator=(
        data::WorldAreaLevelupConsumeItem *const this,
        const data::WorldAreaLevelupConsumeItem *a2)
{
  uint32_t item_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t item_num; // ecx
  char v6; // dl
  const data::WorldAreaLevelupConsumeItem *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->item_num);
  }
  item_num = v8->item_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->item_num, v4);
  }
  this->item_num = item_num;
  return this;
};

// Line 245: range 000000000CE2C6C8-000000000CE2C78D
void __cdecl data::WorldAreaLevelupConsumeItem::WorldAreaLevelupConsumeItem(
        data::WorldAreaLevelupConsumeItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupConsumeItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaLevelupConsumeItem = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v1);
  }
  this->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_num, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->item_num = 0;
};

// Line 245: range 000000000D05467C-000000000D0547BB
void __cdecl data::WorldAreaLevelupConsumeItem::WorldAreaLevelupConsumeItem(
        data::WorldAreaLevelupConsumeItem *const this,
        const data::WorldAreaLevelupConsumeItem *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_num; // ecx
  char v7; // dl
  const data::WorldAreaLevelupConsumeItem *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupConsumeItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WorldAreaLevelupConsumeItem = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->item_num);
  }
  item_num = v8->item_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_num, v5);
  }
  this->item_num = item_num;
};

// Line 248: range 000000000D492F84-000000000D492FC5
void __cdecl data::WorldAreaLevelupConsumeItem::~WorldAreaLevelupConsumeItem(
        data::WorldAreaLevelupConsumeItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupConsumeItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaLevelupConsumeItem = v2;
};

// Line 248: range 000000000D492FC6-000000000D492FF0
void __cdecl data::WorldAreaLevelupConsumeItem::~WorldAreaLevelupConsumeItem(
        data::WorldAreaLevelupConsumeItem *const this)
{
  data::WorldAreaLevelupConsumeItem::~WorldAreaLevelupConsumeItem(this);
  operator delete(this, 0x10uLL);
};

// Line 258: range 000000000CE2C7E2-000000000CE2C943
void __cdecl data::WorldAreaLevelupConfig::WorldAreaLevelupConfig(data::WorldAreaLevelupConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaLevelupConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  data::WorldAreaLevelupConsumeItem::WorldAreaLevelupConsumeItem(&this->consume_item);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  std::vector<data::WorldAreaLevelupAction>::vector(&this->action_vec);
};

// Line 258: range 000000000D08D2F6-000000000D08D57C
void __cdecl data::WorldAreaLevelupConfig::WorldAreaLevelupConfig(
        data::WorldAreaLevelupConfig *const this,
        const data::WorldAreaLevelupConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t scene_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t area_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  data::WorldAreaLevelupConsumeItem *p_consume_item; // rsi
  uint32_t reward_id; // ecx
  char v12; // al
  const data::WorldAreaLevelupConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WorldAreaLevelupConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->scene_id, a2);
  }
  this->scene_id = scene_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->area_id);
  }
  area_id = v13->area_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->area_id, v5);
  }
  this->area_id = area_id;
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
  p_consume_item = &v13->consume_item;
  data::WorldAreaLevelupConsumeItem::WorldAreaLevelupConsumeItem(&this->consume_item, &v13->consume_item);
  if ( *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->reward_id);
  }
  reward_id = v13->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_consume_item) = v12 != 0;
    __asan_report_store4(&this->reward_id, p_consume_item);
  }
  this->reward_id = reward_id;
  std::vector<data::WorldAreaLevelupAction>::vector(&this->action_vec, &v13->action_vec);
};

// Line 261: range 000000000D492EF6-000000000D492F57
void __cdecl data::WorldAreaLevelupConfig::~WorldAreaLevelupConfig(data::WorldAreaLevelupConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldAreaLevelupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldAreaLevelupConfig = v2;
  std::vector<data::WorldAreaLevelupAction>::~vector(&this->action_vec);
  data::WorldAreaLevelupConsumeItem::~WorldAreaLevelupConsumeItem(&this->consume_item);
};

// Line 261: range 000000000D492F58-000000000D492F82
void __cdecl data::WorldAreaLevelupConfig::~WorldAreaLevelupConfig(data::WorldAreaLevelupConfig *const this)
{
  data::WorldAreaLevelupConfig::~WorldAreaLevelupConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 277: range 000000000D15E9FE-000000000D15EC2D
data::CityLevelupConfig *__cdecl data::CityLevelupConfig::operator=(
        data::CityLevelupConfig *const this,
        const data::CityLevelupConfig *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t city_id; // ecx
  char v6; // dl
  uint32_t level; // ecx
  char v8; // al
  data::WorldAreaLevelupConsumeItem *p_consume_item; // rsi
  uint32_t reward_id; // ecx
  char v11; // al
  const data::CityLevelupConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->scene_id, a2);
  }
  this->scene_id = scene_id;
  v4 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->city_id);
  }
  city_id = v13->city_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->city_id, v4);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->level);
  }
  level = v13->level;
  v8 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->level, v4);
  }
  this->level = level;
  p_consume_item = &v13->consume_item;
  data::WorldAreaLevelupConsumeItem::operator=(&this->consume_item, &v13->consume_item);
  if ( *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->reward_id);
  }
  reward_id = v13->reward_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_consume_item) = v11 != 0;
    __asan_report_store4(&this->reward_id, p_consume_item);
  }
  this->reward_id = reward_id;
  std::vector<data::WorldAreaLevelupAction>::operator=(&this->action_vec, &v13->action_vec);
  return this;
};

// Line 277: range 000000000CE2C944-000000000CE2CAA5
void __cdecl data::CityLevelupConfig::CityLevelupConfig(data::CityLevelupConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CityLevelupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CityLevelupConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  data::WorldAreaLevelupConsumeItem::WorldAreaLevelupConsumeItem(&this->consume_item);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  std::vector<data::WorldAreaLevelupAction>::vector(&this->action_vec);
};

// Line 277: range 000000000D0547BC-000000000D054A42
void __cdecl data::CityLevelupConfig::CityLevelupConfig(
        data::CityLevelupConfig *const this,
        const data::CityLevelupConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t scene_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  data::WorldAreaLevelupConsumeItem *p_consume_item; // rsi
  uint32_t reward_id; // ecx
  char v12; // al
  const data::CityLevelupConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CityLevelupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CityLevelupConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->scene_id, a2);
  }
  this->scene_id = scene_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->city_id);
  }
  city_id = v13->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
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
  p_consume_item = &v13->consume_item;
  data::WorldAreaLevelupConsumeItem::WorldAreaLevelupConsumeItem(&this->consume_item, &v13->consume_item);
  if ( *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->reward_id);
  }
  reward_id = v13->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_consume_item) = v12 != 0;
    __asan_report_store4(&this->reward_id, p_consume_item);
  }
  this->reward_id = reward_id;
  std::vector<data::WorldAreaLevelupAction>::vector(&this->action_vec, &v13->action_vec);
};

// Line 280: range 000000000D492E68-000000000D492EC9
void __cdecl data::CityLevelupConfig::~CityLevelupConfig(data::CityLevelupConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CityLevelupConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CityLevelupConfig = v2;
  std::vector<data::WorldAreaLevelupAction>::~vector(&this->action_vec);
  data::WorldAreaLevelupConsumeItem::~WorldAreaLevelupConsumeItem(&this->consume_item);
};

// Line 280: range 000000000D492ECA-000000000D492EF4
void __cdecl data::CityLevelupConfig::~CityLevelupConfig(data::CityLevelupConfig *const this)
{
  data::CityLevelupConfig::~CityLevelupConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 296: range 000000000CE2CAA6-000000000CE2CBC9
void __cdecl data::TransPointRewardConfig::TransPointRewardConfig(data::TransPointRewardConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TransPointRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TransPointRewardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_id, v3);
  }
  this->point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  std::vector<unsigned int>::vector(&this->group_id_vec);
  std::vector<unsigned int>::vector(&this->unlock_area_id_vec);
};

// Line 296: range 000000000D08DCE8-000000000D08DEF9
void __cdecl data::TransPointRewardConfig::TransPointRewardConfig(
        data::TransPointRewardConfig *const this,
        const data::TransPointRewardConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t scene_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t point_id; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  const data::TransPointRewardConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TransPointRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TransPointRewardConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->scene_id, a2);
  }
  this->scene_id = scene_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->point_id);
  }
  point_id = v10->point_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->point_id, v5);
  }
  this->point_id = point_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
  std::vector<unsigned int>::vector(&this->group_id_vec, &v10->group_id_vec);
  std::vector<unsigned int>::vector(&this->unlock_area_id_vec, &v10->unlock_area_id_vec);
};

// Line 299: range 000000000D492DDA-000000000D492E3B
void __cdecl data::TransPointRewardConfig::~TransPointRewardConfig(data::TransPointRewardConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TransPointRewardConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TransPointRewardConfig = v2;
  std::vector<unsigned int>::~vector(&this->unlock_area_id_vec);
  std::vector<unsigned int>::~vector(&this->group_id_vec);
};

// Line 299: range 000000000D492E3C-000000000D492E66
void __cdecl data::TransPointRewardConfig::~TransPointRewardConfig(data::TransPointRewardConfig *const this)
{
  data::TransPointRewardConfig::~TransPointRewardConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 314: range 000000000CE2CBCA-000000000CE2CD0D
void __cdecl data::CityConfig::CityConfig(data::CityConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CityConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CityConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v1);
  }
  this->city_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  std::vector<unsigned int>::vector(&this->area_id_vec);
  std::string::basic_string(&this->city_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_state, v3);
  }
  this->open_state = OPEN_STATE_NONE;
  std::string::basic_string(&this->city_goddness_name);
  std::string::basic_string(&this->city_goddness_desc);
};

// Line 314: range 000000000D08E45C-000000000D08E6CD
void __cdecl data::CityConfig::CityConfig(data::CityConfig *const this, const data::CityConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t city_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_id; // ecx
  char v7; // dl
  std::string *p_city_name; // rsi
  data::OpenStateType open_state; // ecx
  char v10; // al
  const data::CityConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CityConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CityConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->city_id);
  }
  city_id = a2->city_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->city_id, a2);
  }
  this->city_id = city_id;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->scene_id);
  }
  scene_id = v11->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  std::vector<unsigned int>::vector(&this->area_id_vec, &v11->area_id_vec);
  p_city_name = &v11->city_name;
  std::string::basic_string(&this->city_name, &v11->city_name);
  if ( *(_BYTE *)(((unsigned __int64)&v11->open_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->open_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->open_state);
  }
  open_state = v11->open_state;
  v10 = *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_city_name) = v10 != 0;
    __asan_report_store4(&this->open_state, p_city_name);
  }
  this->open_state = open_state;
  std::string::basic_string(&this->city_goddness_name, &v11->city_goddness_name);
  std::string::basic_string(&this->city_goddness_desc, &v11->city_goddness_desc);
};

// Line 317: range 000000000D492D2C-000000000D492DAD
void __cdecl data::CityConfig::~CityConfig(data::CityConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CityConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CityConfig = v2;
  std::string::~string(&this->city_goddness_desc);
  std::string::~string(&this->city_goddness_name);
  std::string::~string(&this->city_name);
  std::vector<unsigned int>::~vector(&this->area_id_vec);
};

// Line 317: range 000000000D492DAE-000000000D492DD8
void __cdecl data::CityConfig::~CityConfig(data::CityConfig *const this)
{
  data::CityConfig::~CityConfig(this);
  operator delete(this, 0x90uLL);
};
