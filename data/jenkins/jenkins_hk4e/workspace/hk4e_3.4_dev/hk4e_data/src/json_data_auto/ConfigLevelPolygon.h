// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLevelPolygon.h

// Line 41: range 00000000121658F6-0000000012165A20
void __cdecl data::ConfigLevelPolygon::ConfigLevelPolygon(data::ConfigLevelPolygon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->local_polygon_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ymax, v2);
  }
  this->ymax = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ymin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ymin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ymin, v2);
  }
  this->ymin = 0.0;
  std::vector<data::Vector>::vector(&this->vertices);
  std::vector<data::ConfigLevelPolygonTag>::vector(&this->tags);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 41: range 000000001235216A-0000000012352393
void __cdecl data::ConfigLevelPolygon::ConfigLevelPolygon(
        data::ConfigLevelPolygon *const this,
        data::ConfigLevelPolygon *a2)
{
  uint32_t local_polygon_id; // ecx
  char v3; // al
  float ymax; // xmm0_4
  __int64 v5; // rsi
  float ymin; // xmm0_4
  data::ConfigLevelPolygonTagList *p_tags; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  data::ConfigLevelPolygon *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  local_polygon_id = a2->local_polygon_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->local_polygon_id = local_polygon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->ymax);
  }
  ymax = v10->ymax;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ymax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ymax, v5);
  }
  this->ymax = ymax;
  if ( *(_BYTE *)(((unsigned __int64)&v10->ymin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->ymin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->ymin);
  }
  ymin = v10->ymin;
  if ( *(_BYTE *)(((unsigned __int64)&this->ymin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ymin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ymin, v5);
  }
  this->ymin = ymin;
  std::vector<data::Vector>::vector(&this->vertices, &v10->vertices);
  p_tags = &v10->tags;
  std::vector<data::ConfigLevelPolygonTag>::vector(&this->tags, &v10->tags);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_tags, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_tags) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_tags, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 41: range 0000000012165A22-0000000012165A50
void __cdecl data::ConfigLevelPolygon::~ConfigLevelPolygon(data::ConfigLevelPolygon *const this)
{
  std::vector<data::ConfigLevelPolygonTag>::~vector(&this->tags);
  std::vector<data::Vector>::~vector(&this->vertices);
};
