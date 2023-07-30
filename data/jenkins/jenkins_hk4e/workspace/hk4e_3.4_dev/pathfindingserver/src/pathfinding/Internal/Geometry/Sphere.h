// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Sphere.h

// Line 14: range 000000000CD714FE-000000000CD7153B
void __cdecl Sphere::Sphere(Sphere *const this, const Vector3f *p0, float r)
{
  Vector3f::Vector3f(&this->m_Center);
  Sphere::Set(this, p0, r);
};

// Line 17: range 000000000CD7153C-000000000CD71685
void __cdecl Sphere::Set(Sphere *const this, const Vector3f *p0, float r)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)p0 & 7) >= *(_BYTE *)(((unsigned __int64)p0 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)p0 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p0->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p0 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p0->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(p0, 12LL);
  }
  this->m_Center = *p0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Radius);
  }
  this->m_Radius = r;
};

// Line 24: range 000000000CD71686-000000000CD71693
const Vector3f *__cdecl Sphere::GetCenter(const Sphere *const this)
{
  return &this->m_Center;
};

// Line 27: range 000000000CD71694-000000000CD716A5
const float *__cdecl Sphere::GetRadius(const Sphere *const this)
{
  return &this->m_Radius;
};
