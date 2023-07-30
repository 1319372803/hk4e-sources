// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigHomeWorld.h

// Line 121: range 0000000012141758-00000000121418DC
void __cdecl data::ConfigHomeworldBlockDefaultSave::ConfigHomeworldBlockDefaultSave(
        data::ConfigHomeworldBlockDefaultSave *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->block_id = 0;
  std::vector<data::ConfigHomeworldFurnitureDefaultSave>::vector(&this->persistent_furniture_list);
  std::vector<data::ConfigHomeworldFurnitureDefaultSave>::vector(&this->deploy_furniure_list);
  std::vector<unsigned int>::vector(&this->deploy_npc_list);
  std::vector<unsigned int>::vector(&this->furniture_suite_list);
  std::vector<unsigned int>::vector(&this->deploy_animal_list);
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unlocked, v1, &this->is_unlocked);
  this->is_unlocked = 0;
  v2 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->comfort_value, v2);
  }
  this->comfort_value = 0;
  std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>::vector(&this->weekend_djinn_info_list);
  std::vector<unsigned int>::vector(&this->dot_pattern_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 121: range 000000001230B5A4-000000001230B873
void __cdecl data::ConfigHomeworldBlockDefaultSave::ConfigHomeworldBlockDefaultSave(
        data::ConfigHomeworldBlockDefaultSave *const this,
        data::ConfigHomeworldBlockDefaultSave *a2)
{
  int32_t block_id; // ecx
  char v3; // al
  data::UInt32List *p_deploy_animal_list; // rsi
  bool is_unlocked; // cl
  char v6; // al
  __int64 v7; // rsi
  uint32_t comfort_value; // ecx
  char v9; // dl
  data::UInt32List *p_dot_pattern_list; // rsi
  bool is_json_loaded; // cl
  char v12; // al
  data::ConfigHomeworldBlockDefaultSave *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
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
  std::vector<data::ConfigHomeworldFurnitureDefaultSave>::vector(
    &this->persistent_furniture_list,
    &v13->persistent_furniture_list);
  std::vector<data::ConfigHomeworldFurnitureDefaultSave>::vector(
    &this->deploy_furniure_list,
    &v13->deploy_furniure_list);
  std::vector<unsigned int>::vector(&this->deploy_npc_list, &v13->deploy_npc_list);
  std::vector<unsigned int>::vector(&this->furniture_suite_list, &v13->furniture_suite_list);
  p_deploy_animal_list = &v13->deploy_animal_list;
  std::vector<unsigned int>::vector(&this->deploy_animal_list, &v13->deploy_animal_list);
  if ( *(char *)(((unsigned __int64)&v13->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_unlocked, p_deploy_animal_list, &v13->is_unlocked);
  is_unlocked = v13->is_unlocked;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_deploy_animal_list) = v6 != 0;
    __asan_report_store1(&this->is_unlocked, p_deploy_animal_list, &this->is_unlocked);
  }
  this->is_unlocked = is_unlocked;
  v7 = (((_BYTE)v13 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->comfort_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->comfort_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->comfort_value);
  }
  comfort_value = v13->comfort_value;
  v9 = *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->comfort_value, v7);
  }
  this->comfort_value = comfort_value;
  std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>::vector(
    &this->weekend_djinn_info_list,
    &v13->weekend_djinn_info_list);
  p_dot_pattern_list = &v13->dot_pattern_list;
  std::vector<unsigned int>::vector(&this->dot_pattern_list, &v13->dot_pattern_list);
  if ( *(char *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_json_loaded, p_dot_pattern_list, &v13->is_json_loaded);
  is_json_loaded = v13->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_dot_pattern_list) = v12 != 0;
    __asan_report_store1(&this->is_json_loaded, p_dot_pattern_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 121: range 00000000121418DE-0000000012141960
void __cdecl data::ConfigHomeworldBlockDefaultSave::~ConfigHomeworldBlockDefaultSave(
        data::ConfigHomeworldBlockDefaultSave *const this)
{
  std::vector<unsigned int>::~vector(&this->dot_pattern_list);
  std::vector<data::ConfigHomeworldDjinnInfoDefaultSave>::~vector(&this->weekend_djinn_info_list);
  std::vector<unsigned int>::~vector(&this->deploy_animal_list);
  std::vector<unsigned int>::~vector(&this->furniture_suite_list);
  std::vector<unsigned int>::~vector(&this->deploy_npc_list);
  std::vector<data::ConfigHomeworldFurnitureDefaultSave>::~vector(&this->deploy_furniure_list);
  std::vector<data::ConfigHomeworldFurnitureDefaultSave>::~vector(&this->persistent_furniture_list);
};

// Line 251: range 000000000F78513C-000000000F785228
void __cdecl data::ConfigHomeworldFurnitureSet::ConfigHomeworldFurnitureSet(
        data::ConfigHomeworldFurnitureSet *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->radius = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v2);
  }
  this->height = 0.0;
  std::vector<data::ConfigHomeworldFurnitureUnit>::vector(&this->furniture_units);
  std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>::vector(&this->npc_spawn_points);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 251: range 000000000F78522A-000000000F785258
void __cdecl data::ConfigHomeworldFurnitureSet::~ConfigHomeworldFurnitureSet(
        data::ConfigHomeworldFurnitureSet *const this)
{
  std::vector<data::ConfigHomeworldSuiteNpcSpawnPoint>::~vector(&this->npc_spawn_points);
  std::vector<data::ConfigHomeworldFurnitureUnit>::~vector(&this->furniture_units);
};

// Line 306: range 0000000012141962-00000000121419F4
void __cdecl data::ConfigHomeFishpond::ConfigHomeFishpond(data::ConfigHomeFishpond *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->max_fish_count = 0;
  std::vector<data::ConfigHomeCommonPos>::vector(&this->fish_born_pos_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 306: range 0000000012612902-0000000012612A10
void __cdecl data::ConfigHomeFishpond::ConfigHomeFishpond(
        data::ConfigHomeFishpond *const this,
        const data::ConfigHomeFishpond *a2)
{
  uint32_t max_fish_count; // ecx
  char v3; // al
  data::ConfigHomeCommonPosList *p_fish_born_pos_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigHomeFishpond *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  max_fish_count = a2->max_fish_count;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->max_fish_count = max_fish_count;
  p_fish_born_pos_list = &v7->fish_born_pos_list;
  std::vector<data::ConfigHomeCommonPos>::vector(&this->fish_born_pos_list, &v7->fish_born_pos_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_fish_born_pos_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_fish_born_pos_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fish_born_pos_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 306: range 00000000121419F6-0000000012141A14
void __cdecl data::ConfigHomeFishpond::~ConfigHomeFishpond(data::ConfigHomeFishpond *const this)
{
  std::vector<data::ConfigHomeCommonPos>::~vector(&this->fish_born_pos_list);
};

// Line 392: range 000000000F7852E2-000000000F7853CE
void __cdecl data::ConfigHomeworldGroup::ConfigHomeworldGroup(data::ConfigHomeworldGroup *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->radius = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height, v2);
  }
  this->height = 0.0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->scene_group_map);
  std::vector<data::ConfigHomeworldGroupUnit>::vector(&this->group_units);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 392: range 000000000F7853D0-000000000F7853FE
void __cdecl data::ConfigHomeworldGroup::~ConfigHomeworldGroup(data::ConfigHomeworldGroup *const this)
{
  std::vector<data::ConfigHomeworldGroupUnit>::~vector(&this->group_units);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->scene_group_map);
};

// Line 448: range 000000000F78547E-000000000F785510
void __cdecl data::ConfigHomeworldSceneAutoGen::ConfigHomeworldSceneAutoGen(
        data::ConfigHomeworldSceneAutoGen *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->scene_id = 0;
  std::vector<data::ConfigHomeworldBlockAutoGen>::vector(&this->block_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 448: range 000000000F9AC552-000000000F9AC660
void __cdecl data::ConfigHomeworldSceneAutoGen::ConfigHomeworldSceneAutoGen(
        data::ConfigHomeworldSceneAutoGen *const this,
        data::ConfigHomeworldSceneAutoGen *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  data::ConfigHomeworldBlockAutoGenList *p_block_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigHomeworldSceneAutoGen *v7; // [rsp+0h] [rbp-10h]

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
  p_block_list = &v7->block_list;
  std::vector<data::ConfigHomeworldBlockAutoGen>::vector(&this->block_list, &v7->block_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_block_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_block_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_block_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 448: range 000000000F785512-000000000F785530
void __cdecl data::ConfigHomeworldSceneAutoGen::~ConfigHomeworldSceneAutoGen(
        data::ConfigHomeworldSceneAutoGen *const this)
{
  std::vector<data::ConfigHomeworldBlockAutoGen>::~vector(&this->block_list);
};

// Line 479: range 0000000012141BC4-0000000012141D64
void __cdecl data::ConfigHomeFishtank::ConfigHomeFishtank(data::ConfigHomeFishtank *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->max_fish_count = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->water_height, v2);
  }
  this->water_height = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_min_height_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_min_height_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_min_height_limit, v2);
  }
  this->fish_min_height_limit = 0.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_pose >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_pose >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_pose, v3);
  }
  this->initial_pose = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_scale, v3);
  }
  this->fish_scale = 0.0;
  std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::unordered_map(&this->fish_born_pos_map);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 479: range 0000000012612F74-000000001261327F
void __cdecl data::ConfigHomeFishtank::ConfigHomeFishtank(
        data::ConfigHomeFishtank *const this,
        const data::ConfigHomeFishtank *a2)
{
  uint32_t max_fish_count; // ecx
  char v3; // al
  float water_height; // xmm0_4
  __int64 v5; // rsi
  float fish_min_height_limit; // xmm0_4
  __int64 v7; // rsi
  uint32_t initial_pose; // ecx
  char v9; // dl
  float fish_scale; // xmm0_4
  data::ConfigHomeFishtankPosMap *p_fish_born_pos_map; // rsi
  bool is_json_loaded; // cl
  char v13; // al
  const data::ConfigHomeFishtank *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  max_fish_count = a2->max_fish_count;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->max_fish_count = max_fish_count;
  if ( *(_BYTE *)(((unsigned __int64)&v14->water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->water_height);
  }
  water_height = v14->water_height;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->water_height, v5);
  }
  this->water_height = water_height;
  if ( *(_BYTE *)(((unsigned __int64)&v14->fish_min_height_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->fish_min_height_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->fish_min_height_limit);
  }
  fish_min_height_limit = v14->fish_min_height_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_min_height_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_min_height_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_min_height_limit, v5);
  }
  this->fish_min_height_limit = fish_min_height_limit;
  v7 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->initial_pose >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->initial_pose >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->initial_pose);
  }
  initial_pose = v14->initial_pose;
  v9 = *(_BYTE *)(((unsigned __int64)&this->initial_pose >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  if ( v9 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v9 )
    __asan_report_store4(&this->initial_pose, v7);
  this->initial_pose = initial_pose;
  if ( *(_BYTE *)(((unsigned __int64)&v14->fish_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->fish_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->fish_scale);
  }
  fish_scale = v14->fish_scale;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_scale, v7);
  }
  this->fish_scale = fish_scale;
  p_fish_born_pos_map = &v14->fish_born_pos_map;
  std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::unordered_map(
    &this->fish_born_pos_map,
    &v14->fish_born_pos_map);
  if ( *(char *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_json_loaded, p_fish_born_pos_map, &v14->is_json_loaded);
  is_json_loaded = v14->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_fish_born_pos_map) = v13 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fish_born_pos_map, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 479: range 0000000012141D66-0000000012141D84
void __cdecl data::ConfigHomeFishtank::~ConfigHomeFishtank(data::ConfigHomeFishtank *const this)
{
  std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::~unordered_map(&this->fish_born_pos_map);
};
