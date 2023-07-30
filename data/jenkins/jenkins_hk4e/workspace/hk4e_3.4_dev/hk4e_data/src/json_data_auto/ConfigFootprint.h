// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigFootprint.h

// Line 19: range 000000001213DC06-000000001213DC6B
void __cdecl data::ConfigFootprintEffect::ConfigFootprintEffect(data::ConfigFootprintEffect *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->deformation);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000000EDA2308-000000000EDA23E1
void __cdecl data::ConfigFootprintEffect::ConfigFootprintEffect(
        data::ConfigFootprintEffect *const this,
        const data::ConfigFootprintEffect *a2)
{
  std::string *p_deformation; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_deformation = &a2->deformation;
  std::string::basic_string(&this->deformation, p_deformation);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_deformation, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_deformation) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_deformation, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 000000000EDA23E2-000000000EDA240C
void __cdecl data::ConfigFootprintEffect::~ConfigFootprintEffect(data::ConfigFootprintEffect *const this)
{
  std::string::~string(&this->deformation);
  std::string::~string(this);
};

// Line 76: range 000000000ED979D6-000000000ED97A3B
void __cdecl data::ConfigFootprint::ConfigFootprint(data::ConfigFootprint *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::unordered_map<data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::unordered_map(&this->special_surfaces);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 76: range 000000000E82F2EA-000000000E82F3C3
void __cdecl data::ConfigFootprint::ConfigFootprint(data::ConfigFootprint *const this, const data::ConfigFootprint *a2)
{
  data::SurfaceTypeStringMap *p_special_surfaces; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_special_surfaces = &a2->special_surfaces;
  std::unordered_map<data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::unordered_map(
    &this->special_surfaces,
    p_special_surfaces);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_special_surfaces, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_special_surfaces) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_special_surfaces, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 76: range 000000000E82F3C4-000000000E82F3EE
void __cdecl data::ConfigFootprint::~ConfigFootprint(data::ConfigFootprint *const this)
{
  std::unordered_map<data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::~unordered_map(&this->special_surfaces);
  std::string::~string(this);
};

// Line 121: range 000000001213E380-000000001213E46E
void __cdecl data::ConfigFootprintZoneEffect::ConfigFootprintZoneEffect(data::ConfigFootprintZoneEffect *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->surface_type = Invalid;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_water_height, v2);
  }
  this->max_water_height = 0.2;
  std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::unordered_map(&this->default_config);
  std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::unordered_map(&this->special_body_types);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 121: range 0000000012747E2A-0000000012748002
void __cdecl data::ConfigFootprintZoneEffect::ConfigFootprintZoneEffect(
        data::ConfigFootprintZoneEffect *const this,
        const data::ConfigFootprintZoneEffect *a2)
{
  data::SceneSurfaceType surface_type; // ecx
  char v3; // al
  float max_water_height; // xmm0_4
  data::BodyTypeFootprintZoneStringMap *p_special_body_types; // rsi
  bool is_json_loaded; // cl
  char v7; // al
  const data::ConfigFootprintZoneEffect *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->max_water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->max_water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->max_water_height);
  }
  max_water_height = v8->max_water_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_water_height, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->max_water_height = max_water_height;
  std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::unordered_map(
    &this->default_config,
    &v8->default_config);
  p_special_body_types = &v8->special_body_types;
  std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::unordered_map(
    &this->special_body_types,
    &v8->special_body_types);
  if ( *(char *)(((unsigned __int64)&v8->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_json_loaded, p_special_body_types, &v8->is_json_loaded);
  is_json_loaded = v8->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_special_body_types) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_special_body_types, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 121: range 00000000123033A4-0000000012303555
void __cdecl data::ConfigFootprintZoneEffect::ConfigFootprintZoneEffect(
        data::ConfigFootprintZoneEffect *const this,
        data::ConfigFootprintZoneEffect *a2)
{
  data::SceneSurfaceType surface_type; // ecx
  char v3; // al
  float max_water_height; // xmm0_4
  data::BodyTypeFootprintZoneStringMap *p_special_body_types; // rsi
  bool is_json_loaded; // cl
  char v7; // al
  data::ConfigFootprintZoneEffect *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->max_water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->max_water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->max_water_height);
  }
  max_water_height = v8->max_water_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_water_height, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->max_water_height = max_water_height;
  std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::unordered_map(
    &this->default_config,
    &v8->default_config);
  p_special_body_types = &v8->special_body_types;
  std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::unordered_map(
    &this->special_body_types,
    &v8->special_body_types);
  if ( *(char *)(((unsigned __int64)&v8->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_json_loaded, p_special_body_types, &v8->is_json_loaded);
  is_json_loaded = v8->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_special_body_types) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_special_body_types, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 121: range 000000001213E470-000000001213E49E
void __cdecl data::ConfigFootprintZoneEffect::~ConfigFootprintZoneEffect(data::ConfigFootprintZoneEffect *const this)
{
  std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::~unordered_map(&this->special_body_types);
  std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::~unordered_map(&this->default_config);
};
