// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLevelNavmeshPolygon.h

// Line 19: range 0000000012165012-0000000012165150
void __cdecl data::ConfigLevelNavmeshPolygon::ConfigLevelNavmeshPolygon(data::ConfigLevelNavmeshPolygon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->polygon_id = 0;
  std::vector<data::Vector>::vector(&this->polygon);
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_min_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->polygon_min_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->polygon_min_y, v1);
  }
  this->polygon_min_y = 0.0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_max_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polygon_max_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->polygon_max_y, v2);
  }
  this->polygon_max_y = 512.0;
  std::vector<unsigned int>::vector(&this->all_scene_tag_ids);
  std::vector<unsigned int>::vector(&this->scene_tags_hash_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 0000000012350A4C-0000000012350C90
void __cdecl data::ConfigLevelNavmeshPolygon::ConfigLevelNavmeshPolygon(
        data::ConfigLevelNavmeshPolygon *const this,
        data::ConfigLevelNavmeshPolygon *a2)
{
  uint32_t polygon_id; // ecx
  char v3; // al
  float polygon_min_y; // xmm0_4
  float polygon_max_y; // xmm0_4
  data::UInt32List *p_scene_tags_hash_list; // rsi
  bool is_json_loaded; // cl
  char v8; // al
  data::ConfigLevelNavmeshPolygon *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  polygon_id = a2->polygon_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->polygon_id = polygon_id;
  std::vector<data::Vector>::vector(&this->polygon, &v9->polygon);
  if ( *(_BYTE *)(((unsigned __int64)&v9->polygon_min_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->polygon_min_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->polygon_min_y);
  }
  polygon_min_y = v9->polygon_min_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_min_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->polygon_min_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->polygon_min_y, &v9->polygon);
  }
  this->polygon_min_y = polygon_min_y;
  if ( *(_BYTE *)(((unsigned __int64)&v9->polygon_max_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->polygon_max_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->polygon_max_y);
  }
  polygon_max_y = v9->polygon_max_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_max_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polygon_max_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->polygon_max_y, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->polygon_max_y = polygon_max_y;
  std::vector<unsigned int>::vector(&this->all_scene_tag_ids, &v9->all_scene_tag_ids);
  p_scene_tags_hash_list = &v9->scene_tags_hash_list;
  std::vector<unsigned int>::vector(&this->scene_tags_hash_list, &v9->scene_tags_hash_list);
  if ( *(char *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v9->is_json_loaded, p_scene_tags_hash_list, &v9->is_json_loaded);
  is_json_loaded = v9->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_scene_tags_hash_list) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_scene_tags_hash_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 0000000012165152-0000000012165190
void __cdecl data::ConfigLevelNavmeshPolygon::~ConfigLevelNavmeshPolygon(data::ConfigLevelNavmeshPolygon *const this)
{
  std::vector<unsigned int>::~vector(&this->scene_tags_hash_list);
  std::vector<unsigned int>::~vector(&this->all_scene_tag_ids);
  std::vector<data::Vector>::~vector(&this->polygon);
};
