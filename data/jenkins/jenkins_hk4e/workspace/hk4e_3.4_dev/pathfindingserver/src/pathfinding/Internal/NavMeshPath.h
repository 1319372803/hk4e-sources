// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMeshPath.h

// Line 42: range 000000000CD5A8A8-000000000CD5A944
Vector3f __cdecl NavMeshPath::GetSourcePosition(const NavMeshPath *const this)
{
  float z; // xmm1_4
  __int64 v2; // xmm0_8
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(char *)(((unsigned __int64)&this->m_sourcePosition >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_sourcePosition.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_sourcePosition.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_sourcePosition, 12LL);
  }
  z = this->m_sourcePosition.z;
  v2 = *(_QWORD *)&this->m_sourcePosition.x;
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = z;
  return result;
};

// Line 47: range 000000000CD5A946-000000000CD5AA40
void __cdecl NavMeshPath::SetSourcePosition(NavMeshPath *const this, const Vector3f *sourcePosition)
{
  if ( *(char *)(((unsigned __int64)&this->m_sourcePosition >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_sourcePosition.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_sourcePosition.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_sourcePosition, 12LL);
  }
  if ( ((unsigned __int8)sourcePosition & 7) >= *(_BYTE *)(((unsigned __int64)sourcePosition >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)sourcePosition >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&sourcePosition->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)sourcePosition + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&sourcePosition->z + 3) >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load_n(sourcePosition, 12LL);
  }
  this->m_sourcePosition = *sourcePosition;
};

// Line 52: range 000000000CD5AA42-000000000CD5AAE5
Vector3f __cdecl NavMeshPath::GetTargetPosition(const NavMeshPath *const this)
{
  float z; // xmm1_4
  __int64 v2; // xmm0_8
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_targetPosition >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_targetPosition >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_targetPosition.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_targetPosition.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_targetPosition, 12LL);
  }
  z = this->m_targetPosition.z;
  v2 = *(_QWORD *)&this->m_targetPosition.x;
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = z;
  return result;
};

// Line 57: range 000000000CD5AAE6-000000000CD5ABE7
void __cdecl NavMeshPath::SetTargetPosition(NavMeshPath *const this, const Vector3f *targetPosition)
{
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_targetPosition >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_targetPosition >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_targetPosition.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_targetPosition.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_targetPosition, 12LL);
  }
  if ( ((unsigned __int8)targetPosition & 7) >= *(_BYTE *)(((unsigned __int64)targetPosition >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)targetPosition >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&targetPosition->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)targetPosition + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&targetPosition->z + 3) >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load_n(targetPosition, 12LL);
  }
  this->m_targetPosition = *targetPosition;
};

// Line 62: range 000000000CD5ABE8-000000000CD5AC05
int __cdecl NavMeshPath::GetPolygonCount(const NavMeshPath *const this)
{
  return dynamic_array<unsigned long long,true,8ul>::size(&this->m_polygons);
};

// Line 67: range 000000000CD5AC06-000000000CD5AC23
int __cdecl NavMeshPath::GetPolygonCapacity(const NavMeshPath *const this)
{
  return dynamic_array<unsigned long long,true,8ul>::capacity(&this->m_polygons);
};

// Line 72: range 000000000CD5AC24-000000000CD5AC52
void __cdecl NavMeshPath::SetPolygonCount(NavMeshPath *const this, int polygonCount)
{
  dynamic_array<unsigned long long,true,8ul>::resize_uninitialized(
    &this->m_polygons,
    polygonCount,
    kIncreaseToExactSize);
};

// Line 77: range 000000000CD5AC54-000000000CD5AC71
NavMeshPolyRef *__cdecl NavMeshPath::GetPolygonPath(NavMeshPath *const this)
{
  return dynamic_array<unsigned long long,true,8ul>::begin(&this->m_polygons);
};

// Line 82: range 000000000CD5AC72-000000000CD5AC8F
const NavMeshPolyRef *__cdecl NavMeshPath::GetPolygonPath(const NavMeshPath *const this)
{
  return dynamic_array<unsigned long long,true,8ul>::begin(&this->m_polygons);
};

// Line 87: range 000000000CD5AC90-000000000CD5ACDF
NavMeshPathStatus __cdecl NavMeshPath::GetStatus(const NavMeshPath *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_status);
  }
  return this->m_status;
};

// Line 92: range 000000000CD5ACE0-000000000CD5AD36
void __cdecl NavMeshPath::SetStatus(NavMeshPath *const this, NavMeshPathStatus status)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_status);
  }
  this->m_status = status;
};

// Line 97: range 000000000CD5AD38-000000000CD5AD81
void __cdecl NavMeshPath::SetTimeStamp(NavMeshPath *const this, unsigned int timeStamp)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_timeStamp = timeStamp;
};
