// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMeshPath.cpp

// Line 5: range 000000000CB76B50-000000000CB76C0D
void __cdecl NavMeshPath::NavMeshPath(NavMeshPath *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_timeStamp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_status);
  }
  this->m_status = kPathInvalid;
  dynamic_array<unsigned long long,true,8ul>::dynamic_array(&this->m_polygons);
  Vector3f::Vector3f(&this->m_sourcePosition);
  Vector3f::Vector3f(&this->m_targetPosition);
};

// Line 11: range 000000000CB76C0E-000000000CB76C2C
void __cdecl NavMeshPath::~NavMeshPath(NavMeshPath *const this)
{
  dynamic_array<unsigned long long,true,8ul>::~dynamic_array(&this->m_polygons);
};

// Line 16: range 000000000CB76C2E-000000000CB76C6E
void __cdecl NavMeshPath::ReservePolygons(NavMeshPath *const this, int size)
{
  int v2; // eax

  v2 = size + 31;
  if ( size + 31 < 0 )
    v2 = size + 62;
  dynamic_array<unsigned long long,true,8ul>::reserve(&this->m_polygons, 32 * (v2 >> 5));
};
