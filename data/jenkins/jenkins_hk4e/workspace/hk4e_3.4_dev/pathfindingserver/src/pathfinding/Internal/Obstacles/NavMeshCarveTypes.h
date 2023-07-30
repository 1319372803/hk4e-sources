// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/NavMeshCarveTypes.h

// Line 9: range 000000000CD75238-000000000CD752A6
void __cdecl NavMeshCarveShape::NavMeshCarveShape(NavMeshCarveShape *const this)
{
  Vector3f::Vector3f(&this->center);
  Vector3f::Vector3f(&this->extents);
  Vector3f::Vector3f(&this->xAxis);
  Vector3f::Vector3f(&this->yAxis);
  Vector3f::Vector3f(&this->zAxis);
  MinMaxAABB::MinMaxAABB(&this->bounds);
};

// Line 21: range 000000000CD74D10-000000000CD74D2E
void __cdecl CarveData::~CarveData(CarveData *const this)
{
  dynamic_array<NavMeshCarveShape,true,4ul>::~dynamic_array(&this->m_Shapes);
};

// Line 24: range 000000000CD569DE-000000000CD56A9D
void __cdecl CarveData::CarveData(CarveData *const this, const int surfaceID)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_SurfaceID = surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_TileDataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_TileDataIndex);
  }
  this->m_TileDataIndex = 0;
  Vector3f::Vector3f(&this->m_Position);
  Quaternionf::Quaternionf(&this->m_Rotation);
  dynamic_array<NavMeshCarveShape,true,4ul>::dynamic_array(&this->m_Shapes);
};

// Line 30: range 000000000CD56A9E-000000000CD56DEE
void __cdecl CarveData::CarveData(CarveData *const this, const CarveData *other)
{
  int m_SurfaceID; // ecx
  int m_TileDataIndex; // ecx
  __int64 v4; // rdx

  Vector3f::Vector3f(&this->m_Position);
  Quaternionf::Quaternionf(&this->m_Rotation);
  dynamic_array<NavMeshCarveShape,true,4ul>::dynamic_array(&this->m_Shapes);
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(other);
  }
  m_SurfaceID = other->m_SurfaceID;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_SurfaceID = m_SurfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_TileDataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_TileDataIndex);
  }
  m_TileDataIndex = other->m_TileDataIndex;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_TileDataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_TileDataIndex);
  }
  this->m_TileDataIndex = m_TileDataIndex;
  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Position, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&other->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&other->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)other + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&other->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&other->m_Position, 12LL);
  }
  this->m_Position = other->m_Position;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Rotation.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Rotation.w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Rotation, 16LL);
  }
  if ( (((unsigned __int8)other + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&other->m_Rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&other->m_Rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&other->m_Rotation.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)other + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&other->m_Rotation.w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&other->m_Rotation, 16LL);
  }
  v4 = *(_QWORD *)&other->m_Rotation.z;
  *(_QWORD *)&this->m_Rotation.x = *(_QWORD *)&other->m_Rotation.x;
  *(_QWORD *)&this->m_Rotation.z = v4;
  dynamic_array<NavMeshCarveShape,true,4ul>::operator=(&this->m_Shapes, &other->m_Shapes);
};

// Line 48: range 000000000CD56DF0-000000000CD56E19
void __cdecl CarveData::AddShape(CarveData *const this, const NavMeshCarveShape *shape)
{
  dynamic_array<NavMeshCarveShape,true,4ul>::push_back(&this->m_Shapes, shape);
};

// Line 53: range 000000000CD56E1A-000000000CD56E37
bool __cdecl CarveData::Empty(const CarveData *const this)
{
  return dynamic_array<NavMeshCarveShape,true,4ul>::empty(&this->m_Shapes);
};

// Line 66: range 000000000CD74B94-000000000CD74BD5
void __cdecl ICarving::ICarving(ICarving *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ICarving + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ICarving = v1;
};

// Line 69: range 000000000CD74BD6-000000000CD74C17
void __cdecl ICarving::~ICarving(ICarving *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ICarving + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ICarving = v1;
};

// Line 69: range 000000000CD74C18-000000000CD74C42
void __cdecl ICarving::~ICarving(ICarving *const this)
{
  ICarving::~ICarving(this);
  operator delete(this, 8uLL);
};

// Line 81: range 000000000CD56E38-000000000CD56F68
bool __cdecl operator<(const LocationCacheKeyData *a, const LocationCacheKeyData *b)
{
  int surfaceID; // ecx
  int tileDataIndex; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(a);
  }
  surfaceID = a->surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)b & 7) + 3) >= *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(b);
  }
  if ( surfaceID != b->surfaceID )
    return a->surfaceID < b->surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&a->tileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->tileDataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->tileDataIndex);
  }
  tileDataIndex = a->tileDataIndex;
  if ( *(_BYTE *)(((unsigned __int64)&b->tileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->tileDataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&b->tileDataIndex);
  }
  return tileDataIndex < b->tileDataIndex;
};

// Line 90: range 000000000CD74CD4-000000000CD74D0E
void __cdecl LocationCacheData::LocationCacheData(LocationCacheData *const this)
{
  MinMaxAABB::MinMaxAABB(&this->bounds);
  Vector3f::Vector3f(&this->position);
  Quaternionf::Quaternionf(&this->rotation);
};
