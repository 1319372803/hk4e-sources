// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_module_data.h

// Line 36: range 00000000146244B2-0000000014624643
void __cdecl HomeFurnitureData::HomeFurnitureData(HomeFurnitureData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = 0;
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->spawn_rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->parent_furniture_index);
  }
  this->parent_furniture_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = 0;
  Vector3::Vector3(&this->source_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->source_rot, 0.0, 0.0, 0.0);
};

// Line 48: range 000000001476E9A2-000000001476E9C0
void __cdecl HomeFurnitureSuiteData::~HomeFurnitureSuiteData(HomeFurnitureSuiteData *const this)
{
  std::vector<int>::~vector(&this->included_furniture_index_vec);
};

// Line 60: range 000000001479E20A-000000001479E2FB
void __cdecl HomeFurnitureSuiteData::HomeFurnitureSuiteData(HomeFurnitureSuiteData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->suite_id = 0;
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  std::vector<int>::vector(&this->included_furniture_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_allow_summon);
  }
  this->is_allow_summon = 1;
};

// Line 60: range 0000000014810A28-0000000014810CA9
void __cdecl HomeFurnitureSuiteData::HomeFurnitureSuiteData(
        HomeFurnitureSuiteData *const this,
        HomeFurnitureSuiteData *a2)
{
  uint32_t suite_id; // ecx
  uint32_t guid; // ecx
  bool is_allow_summon; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  suite_id = a2->suite_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->suite_id = suite_id;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->spawn_pos, 12LL);
  }
  this->spawn_pos = a2->spawn_pos;
  std::vector<int>::vector(&this->included_furniture_index_vec, &a2->included_furniture_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  guid = a2->guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_allow_summon);
  }
  is_allow_summon = a2->is_allow_summon;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_allow_summon);
  }
  this->is_allow_summon = is_allow_summon;
};

// Line 60: range 00000000147CB08A-00000000147CB30B
void __cdecl HomeFurnitureSuiteData::HomeFurnitureSuiteData(
        HomeFurnitureSuiteData *const this,
        const HomeFurnitureSuiteData *a2)
{
  uint32_t suite_id; // ecx
  uint32_t guid; // ecx
  bool is_allow_summon; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  suite_id = a2->suite_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->suite_id = suite_id;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->spawn_pos, 12LL);
  }
  this->spawn_pos = a2->spawn_pos;
  std::vector<int>::vector(&this->included_furniture_index_vec, &a2->included_furniture_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  guid = a2->guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_allow_summon);
  }
  is_allow_summon = a2->is_allow_summon;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_allow_summon);
  }
  this->is_allow_summon = is_allow_summon;
};

// Line 75: range 00000000147C9B20-00000000147C9BED
void __cdecl HomeNpcData::HomeNpcData(HomeNpcData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = 0;
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->spawn_rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->costume_id);
  }
  this->costume_id = 0;
};

// Line 88: range 000000001479E45C-000000001479E4E3
void __cdecl HomeAnimalData::HomeAnimalData(HomeAnimalData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = 0;
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->spawn_rot, 0.0, 0.0, 0.0);
};

// Line 113: range 00000000147C9D0C-00000000147C9DE1
void __cdecl HomeBlockFieldData::HomeBlockFieldData(HomeBlockFieldData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->spawn_rot, 0.0, 0.0, 0.0);
  std::vector<HomeBlockSubFieldData>::vector(&this->sub_field_vec);
};

// Line 113: range 0000000014824262-0000000014824559
void __cdecl HomeBlockFieldData::HomeBlockFieldData(HomeBlockFieldData *const this, HomeBlockFieldData *a2)
{
  uint32_t guid; // ecx
  uint32_t furniture_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  guid = a2->guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_id = a2->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = furniture_id;
  if ( *(char *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->spawn_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->spawn_pos, 12LL);
  }
  this->spawn_pos = a2->spawn_pos;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  if ( (((unsigned __int8)a2 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->spawn_rot, 12LL);
  }
  this->spawn_rot = a2->spawn_rot;
  std::vector<HomeBlockSubFieldData>::vector(&this->sub_field_vec, &a2->sub_field_vec);
};

// Line 113: range 000000001483364A-0000000014833941
void __cdecl HomeBlockFieldData::HomeBlockFieldData(HomeBlockFieldData *const this, const HomeBlockFieldData *a2)
{
  uint32_t guid; // ecx
  uint32_t furniture_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  guid = a2->guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_id = a2->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = furniture_id;
  if ( *(char *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->spawn_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->spawn_pos, 12LL);
  }
  this->spawn_pos = a2->spawn_pos;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  if ( (((unsigned __int8)a2 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->spawn_rot, 12LL);
  }
  this->spawn_rot = a2->spawn_rot;
  std::vector<HomeBlockSubFieldData>::vector(&this->sub_field_vec, &a2->sub_field_vec);
};

// Line 113: range 000000001476E9EA-000000001476EA08
void __cdecl HomeBlockFieldData::~HomeBlockFieldData(HomeBlockFieldData *const this)
{
  std::vector<HomeBlockSubFieldData>::~vector(&this->sub_field_vec);
};

// Line 127: range 00000000147F286A-00000000147F2937
void __cdecl HomeTransferData::HomeTransferData(HomeTransferData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->block_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->spawn_rot, 0.0, 0.0, 0.0);
};

// Line 135: range 0000000014624678-0000000014624729
void __cdecl HomeMarkPointFurnitureData::HomeMarkPointFurnitureData(HomeMarkPointFurnitureData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
};

// Line 143: range 00000000147C9F3C-00000000147C9F93
void __cdecl HomeFurnitureGroupData::HomeFurnitureGroupData(HomeFurnitureGroupData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->group_furniture_index = 0;
  std::vector<HomeFurnitureData>::vector(&this->virtual_furniure_vec);
};

// Line 143: range 00000000148245D0-0000000014824668
void __cdecl HomeFurnitureGroupData::HomeFurnitureGroupData(
        HomeFurnitureGroupData *const this,
        HomeFurnitureGroupData *a2)
{
  uint32_t group_furniture_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  group_furniture_index = a2->group_furniture_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->group_furniture_index = group_furniture_index;
  std::vector<HomeFurnitureData>::vector(&this->virtual_furniure_vec, &a2->virtual_furniure_vec);
};

// Line 143: range 00000000148339B0-0000000014833A48
void __cdecl HomeFurnitureGroupData::HomeFurnitureGroupData(
        HomeFurnitureGroupData *const this,
        const HomeFurnitureGroupData *a2)
{
  uint32_t group_furniture_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  group_furniture_index = a2->group_furniture_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->group_furniture_index = group_furniture_index;
  std::vector<HomeFurnitureData>::vector(&this->virtual_furniure_vec, &a2->virtual_furniure_vec);
};

// Line 143: range 000000001476EA32-000000001476EA50
void __cdecl HomeFurnitureGroupData::~HomeFurnitureGroupData(HomeFurnitureGroupData *const this)
{
  std::vector<HomeFurnitureData>::~vector(&this->virtual_furniure_vec);
};

// Line 154: range 00000000147CA0D6-00000000147CA14A
void __cdecl HomeFurnitureCustomSuiteData::HomeFurnitureCustomSuiteData(HomeFurnitureCustomSuiteData *const this)
{
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  std::vector<int>::vector(&this->included_furniture_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = 0;
};

// Line 154: range 00000000148246E0-000000001482485E
void __cdecl HomeFurnitureCustomSuiteData::HomeFurnitureCustomSuiteData(
        HomeFurnitureCustomSuiteData *const this,
        HomeFurnitureCustomSuiteData *a2)
{
  uint32_t guid; // ecx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 12LL);
  }
  *(_QWORD *)&this->spawn_pos.x = *(_QWORD *)&a2->spawn_pos.x;
  this->spawn_pos.z = a2->spawn_pos.z;
  std::vector<int>::vector(&this->included_furniture_index_vec, &a2->included_furniture_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  guid = a2->guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = guid;
};

// Line 154: range 0000000014833AB8-0000000014833C36
void __cdecl HomeFurnitureCustomSuiteData::HomeFurnitureCustomSuiteData(
        HomeFurnitureCustomSuiteData *const this,
        const HomeFurnitureCustomSuiteData *a2)
{
  uint32_t guid; // ecx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 12LL);
  }
  *(_QWORD *)&this->spawn_pos.x = *(_QWORD *)&a2->spawn_pos.x;
  this->spawn_pos.z = a2->spawn_pos.z;
  std::vector<int>::vector(&this->included_furniture_index_vec, &a2->included_furniture_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  guid = a2->guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = guid;
};

// Line 154: range 000000001476EA7A-000000001476EA98
void __cdecl HomeFurnitureCustomSuiteData::~HomeFurnitureCustomSuiteData(HomeFurnitureCustomSuiteData *const this)
{
  std::vector<int>::~vector(&this->included_furniture_index_vec);
};

// Line 167: range 00000000147F2A80-00000000147F2B4D
void __cdecl HomeFurnitureServerGadgetData::HomeFurnitureServerGadgetData(HomeFurnitureServerGadgetData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id);
  }
  this->gadget_id = 0;
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->spawn_rot, 0.0, 0.0, 0.0);
};

// Line 175: range 0000000014624242-00000000146243F7
void __cdecl HomeBlockData::HomeBlockData(HomeBlockData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unlocked);
  this->is_unlocked = 0;
  std::vector<HomeFurnitureData>::vector(&this->persistent_furniture_vec);
  std::vector<HomeFurnitureData>::vector(&this->deploy_furniure_vec);
  std::vector<HomeFurnitureSuiteData>::vector(&this->furniure_suite_vec);
  std::vector<HomeNpcData>::vector(&this->deploy_npc_vec);
  std::vector<HomeAnimalData>::vector(&this->deploy_animal_vec);
  std::vector<HomeBlockFieldData>::vector(&this->deploy_field_vec);
  std::vector<HomeFurnitureGroupData>::vector(&this->deploy_furniture_group_vec);
  std::vector<HomeFurnitureCustomSuiteData>::vector(&this->furniture_custom_suite_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = 0;
  std::map<unsigned int,unsigned int>::map(&this->furniture_guid_map);
  std::map<unsigned int,unsigned int>::map(&this->furniture_id_count_map);
};

// Line 175: range 00000000147CA752-00000000147CAA70
void __cdecl HomeBlockData::HomeBlockData(HomeBlockData *const this, HomeBlockData *a2)
{
  uint32_t scene_id; // ecx
  uint32_t block_id; // ecx
  bool is_unlocked; // cl
  uint32_t comfort_value; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  block_id = a2->block_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = block_id;
  if ( *(char *)(((unsigned __int64)&a2->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_unlocked);
  is_unlocked = a2->is_unlocked;
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unlocked);
  this->is_unlocked = is_unlocked;
  std::vector<HomeFurnitureData>::vector(&this->persistent_furniture_vec, &a2->persistent_furniture_vec);
  std::vector<HomeFurnitureData>::vector(&this->deploy_furniure_vec, &a2->deploy_furniure_vec);
  std::vector<HomeFurnitureSuiteData>::vector(&this->furniure_suite_vec, &a2->furniure_suite_vec);
  std::vector<HomeNpcData>::vector(&this->deploy_npc_vec, &a2->deploy_npc_vec);
  std::vector<HomeAnimalData>::vector(&this->deploy_animal_vec, &a2->deploy_animal_vec);
  std::vector<HomeBlockFieldData>::vector(&this->deploy_field_vec, &a2->deploy_field_vec);
  std::vector<HomeFurnitureGroupData>::vector(&this->deploy_furniture_group_vec, &a2->deploy_furniture_group_vec);
  std::vector<HomeFurnitureCustomSuiteData>::vector(&this->furniture_custom_suite_vec, &a2->furniture_custom_suite_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  comfort_value = a2->comfort_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = comfort_value;
  std::map<unsigned int,unsigned int>::map(&this->furniture_guid_map, &a2->furniture_guid_map);
  std::map<unsigned int,unsigned int>::map(&this->furniture_id_count_map, &a2->furniture_id_count_map);
};

// Line 175: range 00000000147CAB2C-00000000147CAF24
void __cdecl HomeBlockData::HomeBlockData(HomeBlockData *const this, const HomeBlockData *a2)
{
  uint32_t scene_id; // ecx
  uint32_t block_id; // ecx
  bool is_unlocked; // cl
  uint32_t comfort_value; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  block_id = a2->block_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = block_id;
  if ( *(char *)(((unsigned __int64)&a2->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_unlocked);
  is_unlocked = a2->is_unlocked;
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unlocked);
  this->is_unlocked = is_unlocked;
  std::vector<HomeFurnitureData>::vector(&this->persistent_furniture_vec, &a2->persistent_furniture_vec);
  std::vector<HomeFurnitureData>::vector(&this->deploy_furniure_vec, &a2->deploy_furniure_vec);
  std::vector<HomeFurnitureSuiteData>::vector(&this->furniure_suite_vec, &a2->furniure_suite_vec);
  std::vector<HomeNpcData>::vector(&this->deploy_npc_vec, &a2->deploy_npc_vec);
  std::vector<HomeAnimalData>::vector(&this->deploy_animal_vec, &a2->deploy_animal_vec);
  std::vector<HomeBlockFieldData>::vector(&this->deploy_field_vec, &a2->deploy_field_vec);
  std::vector<HomeFurnitureGroupData>::vector(&this->deploy_furniture_group_vec, &a2->deploy_furniture_group_vec);
  std::vector<HomeFurnitureCustomSuiteData>::vector(&this->furniture_custom_suite_vec, &a2->furniture_custom_suite_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  comfort_value = a2->comfort_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = comfort_value;
  std::map<unsigned int,unsigned int>::map(&this->furniture_guid_map, &a2->furniture_guid_map);
  std::map<unsigned int,unsigned int>::map(&this->furniture_id_count_map, &a2->furniture_id_count_map);
};

// Line 175: range 00000000146243F8-00000000146244B0
void __cdecl HomeBlockData::~HomeBlockData(HomeBlockData *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->furniture_id_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->furniture_guid_map);
  std::vector<HomeFurnitureCustomSuiteData>::~vector(&this->furniture_custom_suite_vec);
  std::vector<HomeFurnitureGroupData>::~vector(&this->deploy_furniture_group_vec);
  std::vector<HomeBlockFieldData>::~vector(&this->deploy_field_vec);
  std::vector<HomeAnimalData>::~vector(&this->deploy_animal_vec);
  std::vector<HomeNpcData>::~vector(&this->deploy_npc_vec);
  std::vector<HomeFurnitureSuiteData>::~vector(&this->furniure_suite_vec);
  std::vector<HomeFurnitureData>::~vector(&this->deploy_furniure_vec);
  std::vector<HomeFurnitureData>::~vector(&this->persistent_furniture_vec);
};

// Line 207: range 00000000146ED632-00000000146ED674
void __cdecl HomeBlockSubFieldData::HomeBlockSubFieldData(HomeBlockSubFieldData *const this)
{
  Vector3::Vector3(&this->spawn_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->spawn_rot, 0.0, 0.0, 0.0);
};

// Line 215: range 0000000017D839F0-0000000017D8430F
HomeSceneArrangementData *__cdecl HomeSceneArrangementData::operator=(
        HomeSceneArrangementData *const this,
        HomeSceneArrangementData *a2)
{
  uint32_t scene_id; // ecx
  bool is_set_born_pos; // cl
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  uint32_t tmp_version; // ecx
  uint32_t bgm_id; // ecx
  uint32_t comfort_value; // ecx
  uint32_t furniture_count; // ecx
  bool has_change_bgm_furniture; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = scene_id;
  std::map<unsigned int,HomeBlockData>::operator=(&this->block_data_map, &a2->block_data_map);
  if ( *(char *)(((unsigned __int64)&a2->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_set_born_pos);
  is_set_born_pos = a2->is_set_born_pos;
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_set_born_pos);
  this->is_set_born_pos = is_set_born_pos;
  if ( (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->born_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->born_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->born_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->born_pos, 12LL);
  }
  this->born_pos = a2->born_pos;
  if ( *(char *)(((unsigned __int64)&this->born_rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_rot, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->born_rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->born_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->born_rot, 12LL);
  }
  this->born_rot = a2->born_rot;
  std::vector<HomeFurnitureData>::operator=(&this->door_vec, &a2->door_vec);
  std::vector<HomeFurnitureData>::operator=(&this->stair_vec, &a2->stair_vec);
  if ( *(char *)(((unsigned __int64)&this->main_house >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->main_house._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->main_house._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->main_house, 68LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->main_house >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->main_house._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->main_house._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->main_house, 68LL);
  }
  v4 = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.spawn_pos.y;
  *(_QWORD *)this->main_house._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)a2->main_house._M_payload._M_payload._M_empty.gap0;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.spawn_pos.y = v4;
  v5 = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.spawn_rot.z;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.spawn_rot.x = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.spawn_rot.x;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.spawn_rot.z = v5;
  v6 = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.source_pos.x;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.guid = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.guid;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.source_pos.x = v6;
  v7 = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.source_rot.y;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.source_pos.z = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.source_pos.z;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.source_rot.y = v7;
  *(_DWORD *)&this->main_house._M_payload._M_engaged = *(_DWORD *)&a2->main_house._M_payload._M_engaged;
  if ( (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->djinn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->djinn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->djinn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&this->djinn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->djinn_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->djinn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->djinn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->djinn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->djinn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->djinn_pos, 12LL);
  }
  this->djinn_pos = a2->djinn_pos;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  tmp_version = a2->tmp_version;
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tmp_version);
  }
  this->tmp_version = tmp_version;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  bgm_id = a2->bgm_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bgm_id);
  }
  this->bgm_id = bgm_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  comfort_value = a2->comfort_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = comfort_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_count = a2->furniture_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_count);
  }
  this->furniture_count = furniture_count;
  std::map<unsigned int,unsigned int>::operator=(&this->furniture_arrange_count_map, &a2->furniture_arrange_count_map);
  std::map<unsigned int,unsigned int>::operator=(
    &this->furniture_arrange_type_count_map,
    &a2->furniture_arrange_type_count_map);
  std::set<unsigned int>::operator=(&this->scene_npc_avatar_id_set, &a2->scene_npc_avatar_id_set);
  std::multimap<unsigned int,HomeFurnitureSuiteData>::operator=(
    &this->scene_furniture_suit_map,
    &a2->scene_furniture_suit_map);
  std::map<unsigned int,HomeTransferData>::operator=(&this->scene_transfer_map, &a2->scene_transfer_map);
  std::map<unsigned int,HomeFurnitureServerGadgetData>::operator=(&this->server_gadget_map, &a2->server_gadget_map);
  std::vector<HomeMarkPointFurnitureData>::operator=(&this->normal_mark_point_vec, &a2->normal_mark_point_vec);
  std::map<unsigned int,unsigned int>::operator=(&this->group_furniture_map, &a2->group_furniture_map);
  if ( *(char *)(((unsigned __int64)&a2->has_change_bgm_furniture >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_change_bgm_furniture);
  has_change_bgm_furniture = a2->has_change_bgm_furniture;
  if ( *(char *)(((unsigned __int64)&this->has_change_bgm_furniture >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_change_bgm_furniture);
  this->has_change_bgm_furniture = has_change_bgm_furniture;
  return this;
};

// Line 215: range 00000000147CB99A-00000000147CC2B6
void __cdecl HomeSceneArrangementData::HomeSceneArrangementData(
        HomeSceneArrangementData *const this,
        HomeSceneArrangementData *a2)
{
  uint32_t scene_id; // ecx
  bool is_set_born_pos; // cl
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  uint32_t tmp_version; // ecx
  uint32_t bgm_id; // ecx
  uint32_t comfort_value; // ecx
  uint32_t furniture_count; // ecx
  bool has_change_bgm_furniture; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = scene_id;
  std::map<unsigned int,HomeBlockData>::map(&this->block_data_map, &a2->block_data_map);
  if ( *(char *)(((unsigned __int64)&a2->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_set_born_pos);
  is_set_born_pos = a2->is_set_born_pos;
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_set_born_pos);
  this->is_set_born_pos = is_set_born_pos;
  if ( (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->born_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->born_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->born_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->born_pos, 12LL);
  }
  this->born_pos = a2->born_pos;
  if ( *(char *)(((unsigned __int64)&this->born_rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_rot, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->born_rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->born_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->born_rot, 12LL);
  }
  this->born_rot = a2->born_rot;
  std::vector<HomeFurnitureData>::vector(&this->door_vec, &a2->door_vec);
  std::vector<HomeFurnitureData>::vector(&this->stair_vec, &a2->stair_vec);
  if ( *(char *)(((unsigned __int64)&this->main_house >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->main_house._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->main_house._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->main_house, 68LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->main_house >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->main_house._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->main_house._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->main_house, 68LL);
  }
  v4 = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.spawn_pos.y;
  *(_QWORD *)this->main_house._M_payload._M_payload._M_empty.gap0 = *(_QWORD *)a2->main_house._M_payload._M_payload._M_empty.gap0;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.spawn_pos.y = v4;
  v5 = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.spawn_rot.z;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.spawn_rot.x = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.spawn_rot.x;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.spawn_rot.z = v5;
  v6 = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.source_pos.x;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.guid = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.guid;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.source_pos.x = v6;
  v7 = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.source_rot.y;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.source_pos.z = *(_QWORD *)&a2->main_house._M_payload._M_payload._M_value.source_pos.z;
  *(_QWORD *)&this->main_house._M_payload._M_payload._M_value.source_rot.y = v7;
  *(_DWORD *)&this->main_house._M_payload._M_engaged = *(_DWORD *)&a2->main_house._M_payload._M_engaged;
  if ( (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->djinn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->djinn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->djinn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&this->djinn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->djinn_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->djinn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->djinn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->djinn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->djinn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->djinn_pos, 12LL);
  }
  this->djinn_pos = a2->djinn_pos;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  tmp_version = a2->tmp_version;
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tmp_version);
  }
  this->tmp_version = tmp_version;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  bgm_id = a2->bgm_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bgm_id);
  }
  this->bgm_id = bgm_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  comfort_value = a2->comfort_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = comfort_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_count = a2->furniture_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_count);
  }
  this->furniture_count = furniture_count;
  std::map<unsigned int,unsigned int>::map(&this->furniture_arrange_count_map, &a2->furniture_arrange_count_map);
  std::map<unsigned int,unsigned int>::map(
    &this->furniture_arrange_type_count_map,
    &a2->furniture_arrange_type_count_map);
  std::set<unsigned int>::set(&this->scene_npc_avatar_id_set, &a2->scene_npc_avatar_id_set);
  std::multimap<unsigned int,HomeFurnitureSuiteData>::multimap(
    &this->scene_furniture_suit_map,
    &a2->scene_furniture_suit_map);
  std::map<unsigned int,HomeTransferData>::map(&this->scene_transfer_map, &a2->scene_transfer_map);
  std::map<unsigned int,HomeFurnitureServerGadgetData>::map(&this->server_gadget_map, &a2->server_gadget_map);
  std::vector<HomeMarkPointFurnitureData>::vector(&this->normal_mark_point_vec, &a2->normal_mark_point_vec);
  std::map<unsigned int,unsigned int>::map(&this->group_furniture_map, &a2->group_furniture_map);
  if ( *(char *)(((unsigned __int64)&a2->has_change_bgm_furniture >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_change_bgm_furniture);
  has_change_bgm_furniture = a2->has_change_bgm_furniture;
  if ( *(char *)(((unsigned __int64)&this->has_change_bgm_furniture >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_change_bgm_furniture);
  this->has_change_bgm_furniture = has_change_bgm_furniture;
};

// Line 215: range 0000000014621D1A-0000000014621DE8
void __cdecl HomeSceneArrangementData::~HomeSceneArrangementData(HomeSceneArrangementData *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->group_furniture_map);
  std::vector<HomeMarkPointFurnitureData>::~vector(&this->normal_mark_point_vec);
  std::map<unsigned int,HomeFurnitureServerGadgetData>::~map(&this->server_gadget_map);
  std::map<unsigned int,HomeTransferData>::~map(&this->scene_transfer_map);
  std::multimap<unsigned int,HomeFurnitureSuiteData>::~multimap(&this->scene_furniture_suit_map);
  std::set<unsigned int>::~set(&this->scene_npc_avatar_id_set);
  std::map<unsigned int,unsigned int>::~map(&this->furniture_arrange_type_count_map);
  std::map<unsigned int,unsigned int>::~map(&this->furniture_arrange_count_map);
  std::vector<HomeFurnitureData>::~vector(&this->stair_vec);
  std::vector<HomeFurnitureData>::~vector(&this->door_vec);
  std::map<unsigned int,HomeBlockData>::~map(&this->block_data_map);
};

// Line 217: range 00000000146247E6-0000000014624AEC
void __cdecl HomeSceneArrangementData::HomeSceneArrangementData(HomeSceneArrangementData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = 0;
  std::map<unsigned int,HomeBlockData>::map(&this->block_data_map);
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_set_born_pos);
  this->is_set_born_pos = 0;
  Vector3::Vector3(&this->born_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->born_rot, 0.0, 0.0, 0.0);
  std::vector<HomeFurnitureData>::vector(&this->door_vec);
  std::vector<HomeFurnitureData>::vector(&this->stair_vec);
  std::optional<HomeFurnitureData>::optional(&this->main_house);
  Vector3::Vector3(&this->djinn_pos, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tmp_version);
  }
  this->tmp_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bgm_id);
  }
  this->bgm_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_count);
  }
  this->furniture_count = 0;
  std::map<unsigned int,unsigned int>::map(&this->furniture_arrange_count_map);
  std::map<unsigned int,unsigned int>::map(&this->furniture_arrange_type_count_map);
  std::set<unsigned int>::set(&this->scene_npc_avatar_id_set);
  std::multimap<unsigned int,HomeFurnitureSuiteData>::multimap(&this->scene_furniture_suit_map);
  std::map<unsigned int,HomeTransferData>::map(&this->scene_transfer_map);
  std::map<unsigned int,HomeFurnitureServerGadgetData>::map(&this->server_gadget_map);
  std::vector<HomeMarkPointFurnitureData>::vector(&this->normal_mark_point_vec);
  std::map<unsigned int,unsigned int>::map(&this->group_furniture_map);
  if ( *(char *)(((unsigned __int64)&this->has_change_bgm_furniture >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_change_bgm_furniture);
  this->has_change_bgm_furniture = 0;
};

// Line 218: range 0000000014621A10-0000000014621D18
void __cdecl HomeSceneArrangementData::HomeSceneArrangementData(
        HomeSceneArrangementData *const this,
        uint32_t scene_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = scene_id;
  std::map<unsigned int,HomeBlockData>::map(&this->block_data_map);
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_set_born_pos);
  this->is_set_born_pos = 0;
  Vector3::Vector3(&this->born_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->born_rot, 0.0, 0.0, 0.0);
  std::vector<HomeFurnitureData>::vector(&this->door_vec);
  std::vector<HomeFurnitureData>::vector(&this->stair_vec);
  std::optional<HomeFurnitureData>::optional(&this->main_house);
  Vector3::Vector3(&this->djinn_pos, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tmp_version);
  }
  this->tmp_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bgm_id);
  }
  this->bgm_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_count);
  }
  this->furniture_count = 0;
  std::map<unsigned int,unsigned int>::map(&this->furniture_arrange_count_map);
  std::map<unsigned int,unsigned int>::map(&this->furniture_arrange_type_count_map);
  std::set<unsigned int>::set(&this->scene_npc_avatar_id_set);
  std::multimap<unsigned int,HomeFurnitureSuiteData>::multimap(&this->scene_furniture_suit_map);
  std::map<unsigned int,HomeTransferData>::map(&this->scene_transfer_map);
  std::map<unsigned int,HomeFurnitureServerGadgetData>::map(&this->server_gadget_map);
  std::vector<HomeMarkPointFurnitureData>::vector(&this->normal_mark_point_vec);
  std::map<unsigned int,unsigned int>::map(&this->group_furniture_map);
  if ( *(char *)(((unsigned __int64)&this->has_change_bgm_furniture >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_change_bgm_furniture);
  this->has_change_bgm_furniture = 0;
};

// Line 264: range 00000000147CC2B8-00000000147CC370
void __cdecl HomeSceneData::HomeSceneData(HomeSceneData *const this, HomeSceneData *a2)
{
  uint32_t scene_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = a2->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = scene_id;
  proto::SceneBin::SceneBin(&this->scene_bin, &a2->scene_bin);
  HomeSceneArrangementData::HomeSceneArrangementData(&this->arrangement_data, &a2->arrangement_data);
};

// Line 264: range 0000000014624B58-0000000014624B88
void __cdecl HomeSceneData::~HomeSceneData(HomeSceneData *const this)
{
  HomeSceneArrangementData::~HomeSceneArrangementData(&this->arrangement_data);
  proto::SceneBin::~SceneBin(&this->scene_bin);
};

// Line 266: range 0000000014624AEE-0000000014624B57
void __cdecl HomeSceneData::HomeSceneData(HomeSceneData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = 0;
  proto::SceneBin::SceneBin(&this->scene_bin);
  HomeSceneArrangementData::HomeSceneArrangementData(&this->arrangement_data);
};

// Line 267: range 0000000014621DEA-0000000014621E5B
void __cdecl HomeSceneData::HomeSceneData(HomeSceneData *const this, uint32_t scene_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = scene_id;
  proto::SceneBin::SceneBin(&this->scene_bin);
  HomeSceneArrangementData::HomeSceneArrangementData(&this->arrangement_data, scene_id);
};

// Line 286: range 0000000014864C9A-0000000014864CC4
void __cdecl HomeModuleData::~HomeModuleData(HomeModuleData *const this)
{
  std::map<unsigned int,HomeSceneData>::~map(&this->scene_data_map);
  std::weak_ptr<Home>::~weak_ptr(&this->home_wtr);
};

// Line 295: range 0000000014621E5C-0000000014621EA6
HomePtr __cdecl HomeModuleData::getHome(const HomeModuleData *const this)
{
  HomePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Home>::lock(&this->home_wtr);
  result._M_ptr = (std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 314: range 00000000131E8F88-00000000131E8FCF
uint32_t __cdecl HomeModuleData::getCurRoomSceneId(const HomeModuleData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->cur_room_scene_id;
};
