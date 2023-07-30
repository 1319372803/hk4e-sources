// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLevelMeta.h

// Line 19: range 000000001214A886-000000001214A9EA
void __cdecl data::ConfigLevelBlockMeta::ConfigLevelBlockMeta(data::ConfigLevelBlockMeta *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->block_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_ignore_block_position >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_block_position >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_ignore_block_position, v2, v3);
  this->is_ignore_block_position = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_center_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->block_center_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->block_center_x);
  }
  this->block_center_x = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_center_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_center_z >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->block_center_z);
  }
  this->block_center_z = 0;
  std::string::basic_string(&this->block_level_monster_data_path);
  std::string::basic_string(&this->block_level_route_data_path);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, (((_BYTE)this + 6) & 7u) + 1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001274878A-0000000012748A58
void __cdecl data::ConfigLevelBlockMeta::ConfigLevelBlockMeta(
        data::ConfigLevelBlockMeta *const this,
        const data::ConfigLevelBlockMeta *a2)
{
  uint32_t block_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_ignore_block_position; // cl
  char v7; // dl
  __int64 v8; // rdx
  int16_t block_center_x; // cx
  int16_t block_center_z; // cx
  std::string *p_block_level_route_data_path; // rsi
  bool is_json_loaded; // cl
  char v13; // al
  const data::ConfigLevelBlockMeta *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  block_id = a2->block_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->block_id = block_id;
  v4 = ((_BYTE)v14 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v14->is_ignore_block_position >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v14->is_ignore_block_position >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v14->is_ignore_block_position, v4, v5);
  is_ignore_block_position = v14->is_ignore_block_position;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_ignore_block_position >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_ignore_block_position, v4, v8);
  this->is_ignore_block_position = is_ignore_block_position;
  if ( *(_BYTE *)(((unsigned __int64)&v14->block_center_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&v14->block_center_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&v14->block_center_x);
  }
  block_center_x = v14->block_center_x;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_center_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->block_center_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->block_center_x);
  }
  this->block_center_x = block_center_x;
  if ( *(_BYTE *)(((unsigned __int64)&v14->block_center_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->block_center_z >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&v14->block_center_z);
  }
  block_center_z = v14->block_center_z;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_center_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_center_z >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->block_center_z);
  }
  this->block_center_z = block_center_z;
  std::string::basic_string(&this->block_level_monster_data_path, &v14->block_level_monster_data_path);
  p_block_level_route_data_path = &v14->block_level_route_data_path;
  std::string::basic_string(&this->block_level_route_data_path, &v14->block_level_route_data_path);
  if ( *(char *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_json_loaded, p_block_level_route_data_path, &v14->is_json_loaded);
  is_json_loaded = v14->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_block_level_route_data_path) = v13 != 0;
    __asan_report_store1(&this->is_json_loaded, p_block_level_route_data_path, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 000000001231BB70-000000001231BE17
void __cdecl data::ConfigLevelBlockMeta::ConfigLevelBlockMeta(
        data::ConfigLevelBlockMeta *const this,
        data::ConfigLevelBlockMeta *a2)
{
  uint32_t block_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_ignore_block_position; // cl
  char v7; // dl
  __int64 v8; // rdx
  int16_t block_center_x; // cx
  int16_t block_center_z; // cx
  std::string *p_block_level_route_data_path; // rsi
  bool is_json_loaded; // cl
  char v13; // al
  data::ConfigLevelBlockMeta *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  block_id = a2->block_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->block_id = block_id;
  v4 = ((_BYTE)v14 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v14->is_ignore_block_position >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v14->is_ignore_block_position >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v14->is_ignore_block_position, v4, v5);
  is_ignore_block_position = v14->is_ignore_block_position;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_ignore_block_position >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_ignore_block_position, v4, v8);
  this->is_ignore_block_position = is_ignore_block_position;
  if ( *(_BYTE *)(((unsigned __int64)&v14->block_center_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&v14->block_center_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&v14->block_center_x);
  }
  block_center_x = v14->block_center_x;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_center_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->block_center_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->block_center_x);
  }
  this->block_center_x = block_center_x;
  if ( *(_BYTE *)(((unsigned __int64)&v14->block_center_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->block_center_z >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&v14->block_center_z);
  }
  block_center_z = v14->block_center_z;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_center_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_center_z >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->block_center_z);
  }
  this->block_center_z = block_center_z;
  std::string::basic_string(&this->block_level_monster_data_path, &v14->block_level_monster_data_path);
  p_block_level_route_data_path = &v14->block_level_route_data_path;
  std::string::basic_string(&this->block_level_route_data_path, &v14->block_level_route_data_path);
  if ( *(char *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_json_loaded, p_block_level_route_data_path, &v14->is_json_loaded);
  is_json_loaded = v14->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_block_level_route_data_path) = v13 != 0;
    __asan_report_store1(&this->is_json_loaded, p_block_level_route_data_path, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 000000001214A9EC-000000001214AA1A
void __cdecl data::ConfigLevelBlockMeta::~ConfigLevelBlockMeta(data::ConfigLevelBlockMeta *const this)
{
  std::string::~string(&this->block_level_route_data_path);
  std::string::~string(&this->block_level_monster_data_path);
};

// Line 52: range 000000001214AA70-000000001214AAD5
void __cdecl data::ConfigSceneMeta::ConfigSceneMeta(data::ConfigSceneMeta *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigLevelBlockMeta>::vector(&this->block_info);
  std::string::basic_string(&this->navmesh_polygon_data_path);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 52: range 000000001261C82E-000000001261C907
void __cdecl data::ConfigSceneMeta::ConfigSceneMeta(data::ConfigSceneMeta *const this, const data::ConfigSceneMeta *a2)
{
  std::string *p_navmesh_polygon_data_path; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::ConfigLevelBlockMeta>::vector(&this->block_info, &a2->block_info);
  p_navmesh_polygon_data_path = &a2->navmesh_polygon_data_path;
  std::string::basic_string(&this->navmesh_polygon_data_path, p_navmesh_polygon_data_path);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_navmesh_polygon_data_path, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_navmesh_polygon_data_path) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_navmesh_polygon_data_path, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 52: range 000000001214AAD6-000000001214AB00
void __cdecl data::ConfigSceneMeta::~ConfigSceneMeta(data::ConfigSceneMeta *const this)
{
  std::string::~string(&this->navmesh_polygon_data_path);
  std::vector<data::ConfigLevelBlockMeta>::~vector(&this->block_info);
};
