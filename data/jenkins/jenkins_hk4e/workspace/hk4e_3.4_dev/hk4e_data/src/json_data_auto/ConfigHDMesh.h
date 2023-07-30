// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigHDMesh.h

// Line 32: range 0000000012140DB0-0000000012140E42
void __cdecl data::ConfigHDMeshArea::ConfigHDMeshArea(data::ConfigHDMeshArea *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->scene_id = 0;
  std::vector<unsigned int>::vector(&this->world_area_ids);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 32: range 00000000127481B2-00000000127482C0
void __cdecl data::ConfigHDMeshArea::ConfigHDMeshArea(
        data::ConfigHDMeshArea *const this,
        const data::ConfigHDMeshArea *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  data::UInt32List *p_world_area_ids; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigHDMeshArea *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->scene_id = scene_id;
  p_world_area_ids = &v7->world_area_ids;
  std::vector<unsigned int>::vector(&this->world_area_ids, &v7->world_area_ids);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_world_area_ids, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_world_area_ids) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_world_area_ids, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 32: range 0000000012309036-0000000012309144
void __cdecl data::ConfigHDMeshArea::ConfigHDMeshArea(data::ConfigHDMeshArea *const this, data::ConfigHDMeshArea *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  data::UInt32List *p_world_area_ids; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigHDMeshArea *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->scene_id = scene_id;
  p_world_area_ids = &v7->world_area_ids;
  std::vector<unsigned int>::vector(&this->world_area_ids, &v7->world_area_ids);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_world_area_ids, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_world_area_ids) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_world_area_ids, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 32: range 0000000012140E44-0000000012140E62
void __cdecl data::ConfigHDMeshArea::~ConfigHDMeshArea(data::ConfigHDMeshArea *const this)
{
  std::vector<unsigned int>::~vector(&this->world_area_ids);
};

// Line 61: range 0000000012140EB8-0000000012140F4A
void __cdecl data::ConfigHDMesh::ConfigHDMesh(data::ConfigHDMesh *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->surface_type = Invalid;
  std::vector<data::ConfigHDMeshArea>::vector(&this->area);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 61: range 00000000126121AE-00000000126122BC
void __cdecl data::ConfigHDMesh::ConfigHDMesh(data::ConfigHDMesh *const this, const data::ConfigHDMesh *a2)
{
  data::SceneSurfaceType surface_type; // ecx
  char v3; // al
  data::ConfigHDMeshAreaArray *p_area; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigHDMesh *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  surface_type = a2->surface_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->surface_type = surface_type;
  p_area = &v7->area;
  std::vector<data::ConfigHDMeshArea>::vector(&this->area, &v7->area);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_area, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_area) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_area, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 61: range 0000000012140F4C-0000000012140F6A
void __cdecl data::ConfigHDMesh::~ConfigHDMesh(data::ConfigHDMesh *const this)
{
  std::vector<data::ConfigHDMeshArea>::~vector(&this->area);
};
