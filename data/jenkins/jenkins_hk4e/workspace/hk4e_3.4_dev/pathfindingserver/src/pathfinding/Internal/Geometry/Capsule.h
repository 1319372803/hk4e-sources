// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Capsule.h

// Line 30: range 000000000CD70FCE-000000000CD70FDB
const Vector3f *__cdecl Capsule::GetStart(const Capsule *const this)
{
  return &this->m_Start;
};

// Line 31: range 000000000CD70FDC-000000000CD70FED
const Vector3f *__cdecl Capsule::GetEnd(const Capsule *const this)
{
  return &this->m_End;
};

// Line 32: range 000000000CD70FEE-000000000CD7103F
float __cdecl Capsule::GetRadius(const Capsule *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Radius);
  }
  return this->m_Radius;
};
