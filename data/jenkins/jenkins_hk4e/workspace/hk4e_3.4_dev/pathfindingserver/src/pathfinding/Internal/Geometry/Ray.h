// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Ray.h

// Line 16: range 000000000CD71040-000000000CD71051
const Vector3f *__cdecl Ray::GetDirection(const Ray *const this)
{
  return &this->m_Direction;
};

// Line 22: range 000000000CD71052-000000000CD7105F
const Vector3f *__cdecl Ray::GetOrigin(const Ray *const this)
{
  return &this->m_Origin;
};

// Line 23: range 000000000CD71060-000000000CD710D3
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl Ray::GetPoint(const Ray *const this, float t)
{
  __int64 v2; // xmm0_8
  float v3; // xmm1_4
  Vector3f rhs; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  rhs = operator*(t, &this->m_Direction);
  *(Vector3f *)&v2 = operator+(&this->m_Origin, &rhs);
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = v3;
  return result;
};
