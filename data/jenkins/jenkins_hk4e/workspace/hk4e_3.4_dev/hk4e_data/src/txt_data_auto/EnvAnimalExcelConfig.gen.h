// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/EnvAnimalExcelConfig.gen.h

// Line 19: range 0000000014736B62-0000000014736D47
void __cdecl data::EnvAnimalGatherExcelConfig::EnvAnimalGatherExcelConfig(data::EnvAnimalGatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::EnvAnimalGatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EnvAnimalGatherExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->animal_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->animal_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->animal_id, v1);
  }
  this->animal_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_type, v3);
  }
  this->entity_type = None_10;
  std::vector<data::IdCountConfig>::vector(&this->gather_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->escape_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->escape_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->escape_radius, v3);
  }
  this->escape_radius = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->escape_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escape_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->escape_time, v4);
  }
  this->escape_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->alive_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->alive_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->alive_time, v4);
  }
  this->alive_time = 0;
  std::string::basic_string(&this->exclude_weathers);
};

// Line 19: range 00000000141CD362-00000000141CD6E2
void __cdecl data::EnvAnimalGatherExcelConfig::EnvAnimalGatherExcelConfig(
        data::EnvAnimalGatherExcelConfig *const this,
        const data::EnvAnimalGatherExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t animal_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t area_id; // ecx
  char v7; // dl
  data::EntityType entity_type; // ecx
  char v9; // al
  std::vector<data::IdCountConfig> *p_gather_item_list; // rsi
  uint32_t escape_radius; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t escape_time; // ecx
  char v15; // dl
  uint32_t alive_time; // ecx
  char v17; // al
  const data::EnvAnimalGatherExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EnvAnimalGatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EnvAnimalGatherExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->animal_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->animal_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->animal_id);
  }
  animal_id = a2->animal_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->animal_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->animal_id, a2);
  }
  this->animal_id = animal_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->area_id);
  }
  area_id = v18->area_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->area_id, v5);
  }
  this->area_id = area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->entity_type);
  }
  entity_type = v18->entity_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->entity_type, v5);
  }
  this->entity_type = entity_type;
  p_gather_item_list = &v18->gather_item_list;
  std::vector<data::IdCountConfig>::vector(&this->gather_item_list, &v18->gather_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&v18->escape_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->escape_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->escape_radius);
  }
  escape_radius = v18->escape_radius;
  v12 = *(_BYTE *)(((unsigned __int64)&this->escape_radius >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_gather_item_list) = v12 != 0;
    __asan_report_store4(&this->escape_radius, p_gather_item_list);
  }
  this->escape_radius = escape_radius;
  v13 = (((_BYTE)v18 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->escape_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->escape_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->escape_time);
  }
  escape_time = v18->escape_time;
  v15 = *(_BYTE *)(((unsigned __int64)&this->escape_time >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->escape_time, v13);
  }
  this->escape_time = escape_time;
  if ( *(_BYTE *)(((unsigned __int64)&v18->alive_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->alive_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->alive_time);
  }
  alive_time = v18->alive_time;
  v17 = *(_BYTE *)(((unsigned __int64)&this->alive_time >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->alive_time, v13);
  }
  this->alive_time = alive_time;
  std::string::basic_string(&this->exclude_weathers, &v18->exclude_weathers);
};

// Line 22: range 0000000013FCD172-0000000013FCD1D3
void __cdecl data::EnvAnimalGatherExcelConfig::~EnvAnimalGatherExcelConfig(
        data::EnvAnimalGatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EnvAnimalGatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EnvAnimalGatherExcelConfig = v2;
  std::string::~string(&this->exclude_weathers);
  std::vector<data::IdCountConfig>::~vector(&this->gather_item_list);
};

// Line 22: range 0000000013FCD1D4-0000000013FCD1FE
void __cdecl data::EnvAnimalGatherExcelConfig::~EnvAnimalGatherExcelConfig(
        data::EnvAnimalGatherExcelConfig *const this)
{
  data::EnvAnimalGatherExcelConfig::~EnvAnimalGatherExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 40: range 0000000014C68E20-0000000014C68F33
void __cdecl data::EnvironmentWeightType::EnvironmentWeightType(data::EnvironmentWeightType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::EnvironmentWeightType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EnvironmentWeightType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->animal_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->animal_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->animal_id, v1);
  }
  this->animal_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_type, v3);
  }
  this->entity_type = None_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
  std::map<unsigned int,unsigned int>::map(&this->alive_hour_map);
};

// Line 43: range 0000000013F77A7E-0000000013F77ACF
void __cdecl data::EnvironmentWeightType::~EnvironmentWeightType(data::EnvironmentWeightType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EnvironmentWeightType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EnvironmentWeightType = v2;
  std::map<unsigned int,unsigned int>::~map(&this->alive_hour_map);
};

// Line 43: range 0000000013F77AD0-0000000013F77AFA
void __cdecl data::EnvironmentWeightType::~EnvironmentWeightType(data::EnvironmentWeightType *const this)
{
  data::EnvironmentWeightType::~EnvironmentWeightType(this);
  operator delete(this, 0x48uLL);
};

// Line 55: range 0000000014736D48-0000000014736DD7
void __cdecl data::EnvAnimalWeightExcelConfig::EnvAnimalWeightExcelConfig(data::EnvAnimalWeightExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EnvAnimalWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EnvAnimalWeightExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->env_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->env_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->env_type, v1);
  }
  this->env_type = ENVIRONMENT_NONE;
  std::vector<data::EnvironmentWeightType>::vector(&this->weight_vec);
};

// Line 55: range 0000000014D0FB5E-0000000014D0FC33
void __cdecl data::EnvAnimalWeightExcelConfig::EnvAnimalWeightExcelConfig(
        data::EnvAnimalWeightExcelConfig *const this,
        const data::EnvAnimalWeightExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::EnvironmentType env_type; // ecx
  char v4; // al
  const data::EnvAnimalWeightExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EnvAnimalWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EnvAnimalWeightExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->env_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->env_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->env_type);
  }
  env_type = a2->env_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->env_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->env_type, a2);
  }
  this->env_type = env_type;
  std::vector<data::EnvironmentWeightType>::vector(&this->weight_vec, &v5->weight_vec);
};

// Line 58: range 0000000014DEB2D2-0000000014DEB323
void __cdecl data::EnvAnimalWeightExcelConfig::~EnvAnimalWeightExcelConfig(
        data::EnvAnimalWeightExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EnvAnimalWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EnvAnimalWeightExcelConfig = v2;
  std::vector<data::EnvironmentWeightType>::~vector(&this->weight_vec);
};

// Line 58: range 0000000014DEB324-0000000014DEB34E
void __cdecl data::EnvAnimalWeightExcelConfig::~EnvAnimalWeightExcelConfig(
        data::EnvAnimalWeightExcelConfig *const this)
{
  data::EnvAnimalWeightExcelConfig::~EnvAnimalWeightExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 75: range 0000000013E44C4E-0000000013E44E1D
void __cdecl data::EnvironmentWeightType::EnvironmentWeightType(
        data::EnvironmentWeightType *const this,
        const data::EnvironmentWeightType *a2)
{
  int (**v2)(...); // rdx
  uint32_t animal_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::EntityType entity_type; // ecx
  char v7; // dl
  uint32_t weight; // ecx
  char v9; // al
  const data::EnvironmentWeightType *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EnvironmentWeightType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EnvironmentWeightType = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->animal_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->animal_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->animal_id);
  }
  animal_id = a2->animal_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->animal_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->animal_id, a2);
  }
  this->animal_id = animal_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->entity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->entity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->entity_type);
  }
  entity_type = v10->entity_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->entity_type, v5);
  }
  this->entity_type = entity_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->weight);
  }
  weight = v10->weight;
  v9 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
  std::map<unsigned int,unsigned int>::map(&this->alive_hour_map, &v10->alive_hour_map);
};
