// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Plane.h

// Line 35: range 000000000CD710D4-000000000CD710E5
const float *__cdecl Plane::d(const Plane *const this)
{
  return &this->distance;
};

// Line 38: range 000000000CD710E6-000000000CD710F3
const Vector3f *__cdecl Plane::GetNormal(const Plane *const this)
{
  return &this->normal;
};

// Line 74: range 000000000CD710F4-000000000CD71160
float __cdecl Plane::GetDistanceToPoint(const Plane *const this, const Vector3f *inPt)
{
  double v2; // xmm0_8

  *(float *)&v2 = Dot(&this->normal, inPt);
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&this->distance);
  }
  return *(float *)&v2 + this->distance;
};

// Line 81: range 000000000CD71162-000000000CD7135D
float __cdecl Plane::GetDistanceToPoint(const Plane *const this, const Vector4f *inPt)
{
  float x; // xmm1_4
  float v3; // xmm1_4
  float y; // xmm2_4
  float v5; // xmm1_4
  float z; // xmm2_4
  float v7; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->normal.x;
  if ( *(_BYTE *)(((unsigned __int64)inPt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inPt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inPt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inPt);
  }
  v3 = x * inPt->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->normal.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->normal.y);
  }
  y = this->normal.y;
  if ( *(_BYTE *)(((unsigned __int64)&inPt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inPt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inPt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inPt->y);
  }
  v5 = v3 + (float)(inPt->y * y);
  if ( *(_BYTE *)(((unsigned __int64)&this->normal.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->normal.z);
  }
  z = this->normal.z;
  if ( *(_BYTE *)(((unsigned __int64)&inPt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inPt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inPt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inPt->z);
  }
  v7 = v5 + (float)(inPt->z * z);
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->distance);
  }
  return this->distance + v7;
};

// Line 126: range 000000000CD7135E-000000000CD714FC
void __cdecl Plane::SetNormalAndPosition(Plane *const this, const Vector3f *inNormal, const Vector3f *inPoint)
{
  float v3; // xmm0_4

  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->normal.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->normal.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)inNormal & 7) >= *(_BYTE *)(((unsigned __int64)inNormal >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)inNormal >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&inNormal->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)inNormal + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inNormal->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(inNormal, 12LL);
  }
  this->normal = *inNormal;
  if ( !IsNormalized(&this->normal, 0.001) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "IsNormalized(normal, 0.001f)",
      "./src/pathfinding/Internal/Geometry/Plane.h",
      0x80u,
      "void Plane::SetNormalAndPosition(const Vector3f&, const Vector3f&)");
  }
  v3 = -Dot(inNormal, inPoint);
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance);
  }
  this->distance = v3;
};
