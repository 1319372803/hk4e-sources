// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_fish_farming/home_fish_farming_data.h

// Line 28: range 0000000017D84400-0000000017D84602
HomeFishDataBase *__cdecl HomeFishDataBase::operator=(HomeFishDataBase *const this, HomeFishDataBase *a2)
{
  std::vector<unsigned int>::operator=(&this->fish_id_vec, &a2->fish_id_vec);
  if ( *(char *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->position, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->position, 12LL);
  }
  this->position = a2->position;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotation, 12LL);
  }
  if ( (((unsigned __int8)a2 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rotation, 12LL);
  }
  this->rotation = a2->rotation;
  return this;
};

// Line 28: range 00000000147D4450-00000000147D44A2
void __cdecl HomeFishDataBase::HomeFishDataBase(HomeFishDataBase *const this)
{
  std::vector<unsigned int>::vector(&this->fish_id_vec);
  Vector3::Vector3(&this->position, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rotation, 0.0, 0.0, 0.0);
};

// Line 28: range 000000001474534E-000000001474554D
void __cdecl HomeFishDataBase::HomeFishDataBase(HomeFishDataBase *const this, const HomeFishDataBase *a2)
{
  std::vector<unsigned int>::vector(&this->fish_id_vec, &a2->fish_id_vec);
  if ( *(char *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->position, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->position, 12LL);
  }
  this->position = a2->position;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotation, 12LL);
  }
  if ( (((unsigned __int8)a2 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rotation, 12LL);
  }
  this->rotation = a2->rotation;
};

// Line 28: range 000000001474554E-0000000014745568
void __cdecl HomeFishDataBase::~HomeFishDataBase(HomeFishDataBase *const this)
{
  std::vector<unsigned int>::~vector(&this->fish_id_vec);
};

// Line 39: range 00000000147D44A4-00000000147D4580
void __cdecl HomeFishFarmingData::HomeFishFarmingData(HomeFishFarmingData *const this)
{
  HomeFishDataBase::HomeFishDataBase(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fishpond_guid);
  }
  this->fishpond_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = 0;
};

// Line 39: range 000000001474556A-00000000147456FE
void __cdecl HomeFishFarmingData::HomeFishFarmingData(HomeFishFarmingData *const this, const HomeFishFarmingData *a2)
{
  uint32_t fishpond_guid; // ecx
  uint32_t furniture_id; // ecx
  uint32_t scene_id; // ecx

  HomeFishDataBase::HomeFishDataBase(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->fishpond_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fishpond_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  fishpond_guid = a2->fishpond_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fishpond_guid);
  }
  this->fishpond_guid = fishpond_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_id = a2->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = scene_id;
};

// Line 39: range 0000000014745700-000000001474571A
void __cdecl HomeFishFarmingData::~HomeFishFarmingData(HomeFishFarmingData *const this)
{
  HomeFishDataBase::~HomeFishDataBase(this);
};

// Line 52: range 0000000017D84604-0000000017D84726
HomeScenePointFishFarmingData *__cdecl HomeScenePointFishFarmingData::operator=(
        HomeScenePointFishFarmingData *const this,
        HomeScenePointFishFarmingData *a2)
{
  uint32_t scene_id; // ecx
  uint32_t local_entity_id; // ecx

  HomeFishDataBase::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  local_entity_id = a2->local_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->local_entity_id);
  }
  this->local_entity_id = local_entity_id;
  return this;
};

// Line 52: range 00000000147D4704-00000000147D47A2
void __cdecl HomeScenePointFishFarmingData::HomeScenePointFishFarmingData(HomeScenePointFishFarmingData *const this)
{
  HomeFishDataBase::HomeFishDataBase(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->local_entity_id);
  }
  this->local_entity_id = 0;
};

// Line 52: range 0000000014745CD0-0000000014745DEF
void __cdecl HomeScenePointFishFarmingData::HomeScenePointFishFarmingData(
        HomeScenePointFishFarmingData *const this,
        const HomeScenePointFishFarmingData *a2)
{
  uint32_t scene_id; // ecx
  uint32_t local_entity_id; // ecx

  HomeFishDataBase::HomeFishDataBase(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  local_entity_id = a2->local_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->local_entity_id);
  }
  this->local_entity_id = local_entity_id;
};

// Line 52: range 0000000014745DF0-0000000014745E0A
void __cdecl HomeScenePointFishFarmingData::~HomeScenePointFishFarmingData(HomeScenePointFishFarmingData *const this)
{
  HomeFishDataBase::~HomeFishDataBase(this);
};

// Line 64: range 00000000147D379A-00000000147D37C4
void __cdecl HomeModuleFishFarmingData::HomeModuleFishFarmingData(HomeModuleFishFarmingData *const this)
{
  std::unordered_map<unsigned int,HomeFishFarmingData>::unordered_map(&this->fish_farming_data_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::unordered_map(&this->scene_point_fish_farming_data_map);
};

// Line 64: range 0000000014626296-00000000146262F9
void __cdecl HomeModuleFishFarmingData::HomeModuleFishFarmingData(
        HomeModuleFishFarmingData *const this,
        const HomeModuleFishFarmingData *a2)
{
  std::unordered_map<unsigned int,HomeFishFarmingData>::unordered_map(
    &this->fish_farming_data_map,
    &a2->fish_farming_data_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::unordered_map(
    &this->scene_point_fish_farming_data_map,
    &a2->scene_point_fish_farming_data_map);
};

// Line 64: range 00000000146262FA-0000000014626324
void __cdecl HomeModuleFishFarmingData::~HomeModuleFishFarmingData(HomeModuleFishFarmingData *const this)
{
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::~unordered_map(&this->scene_point_fish_farming_data_map);
  std::unordered_map<unsigned int,HomeFishFarmingData>::~unordered_map(&this->fish_farming_data_map);
};
