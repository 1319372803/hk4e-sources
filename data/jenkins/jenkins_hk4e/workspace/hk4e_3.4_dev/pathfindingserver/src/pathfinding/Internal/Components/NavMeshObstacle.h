// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Components/NavMeshObstacle.h

// Line 92: range 000000000CD5A516-000000000CD5A558
int __cdecl NavMeshObstacle::GetHandle(const NavMeshObstacle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->m_ManagerHandle;
};

// Line 101: range 000000000CD5A55A-000000000CD5A56B
const Vector3f *__cdecl NavMeshObstacle::GetPosition(const NavMeshObstacle *const this)
{
  return &this->m_Position;
};

// Line 106: range 000000000CD5A56C-000000000CD5A57D
const Quaternionf *__cdecl NavMeshObstacle::GetRotation(const NavMeshObstacle *const this)
{
  return &this->m_Rotation;
};

// Line 111: range 000000000CD5A57E-000000000CD5A5CD
NavMeshObstacleShape __cdecl NavMeshObstacle::GetShape(const NavMeshObstacle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Shape);
  }
  return this->m_Shape;
};

// Line 116: range 000000000CD5A5CE-000000000CD5A61D
int __cdecl NavMeshObstacle::GetVersionStamp(const NavMeshObstacle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_VersionStamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_VersionStamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_VersionStamp);
  }
  return this->m_VersionStamp;
};

// Line 121: range 000000000CD5A61E-000000000CD5A658
uint64_t __cdecl NavMeshObstacle::GetVersionTimeStamp(const NavMeshObstacle *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_VersionTimestamp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_VersionTimestamp, v1);
  return this->m_VersionTimestamp;
};

// Line 126: range 000000000CD5A65A-000000000CD5A6A2
bool __cdecl NavMeshObstacle::GetCarving(const NavMeshObstacle *const this)
{
  if ( *(char *)(((unsigned __int64)&this->m_Carve >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->m_Carve);
  return this->m_Carve;
};

// Line 131: range 000000000CD5A6A4-000000000CD5A6F3
NavMeshObstacleState __cdecl NavMeshObstacle::GetMoveState(const NavMeshObstacle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MoveState >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_MoveState >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_MoveState);
  }
  return this->m_MoveState;
};
