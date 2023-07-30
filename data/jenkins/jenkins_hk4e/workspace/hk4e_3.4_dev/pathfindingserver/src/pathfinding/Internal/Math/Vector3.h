// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Vector3.h

// Line 21: range 000000000CCAFD64-000000000CCAFE45
void __cdecl Vector3f::Vector3f(Vector3f *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = 0.0;
};

// Line 23: range 000000000CCAFE46-000000000CCAFF39
void __cdecl Vector3f::Vector3f(Vector3f *const this, float inX, float inY, float inZ)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = inX;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = inY;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = inZ;
};

// Line 25: range 000000000CCAFF3A-000000000CCB002D
void __cdecl Vector3f::Set(Vector3f *const this, float inX, float inY, float inZ)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = inX;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = inY;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = inZ;
};

// Line 27: range 000000000CCB002E-000000000CCB010F
void __cdecl Vector3f::SetZero(Vector3f *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = 0.0;
};

// Line 29: range 000000000CCB0110-000000000CCB011D
float *__cdecl Vector3f::GetPtr(Vector3f *const this)
{
  return &this->x;
};

// Line 30: range 000000000CCB011E-000000000CCB012B
const float *__cdecl Vector3f::GetPtr(const Vector3f *const this)
{
  return &this->x;
};

// Line 31: range 000000000CCB012C-000000000CCB0149
float *__cdecl Vector3f::operator[](Vector3f *const this, int i)
{
  return &this->x + i;
};

// Line 32: range 000000000CCB014A-000000000CCB0167
const float *__cdecl Vector3f::operator[](const Vector3f *const this, int i)
{
  return &this->x + i;
};

// Line 34: range 000000000CCB0168-000000000CCB0341
bool __cdecl Vector3f::operator==(const Vector3f *const this, const Vector3f *v)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&v2 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(v);
  }
  if ( *(float *)&v2 != v->x )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  *(float *)&v3 = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&v->y);
  }
  if ( *(float *)&v3 != v->y )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  *(float *)&v4 = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&v->z);
  }
  return *(float *)&v4 == v->z;
};

// Line 37: range 000000000CCB0342-000000000CCB050B
Vector3f *__cdecl Vector3f::operator+=(Vector3f *const this, const Vector3f *inV)
{
  float x; // xmm1_4
  float y; // xmm1_4
  float z; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inV & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inV);
  }
  this->x = inV->x + x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->y);
  }
  this->y = inV->y + y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->z);
  }
  this->z = inV->z + z;
  return this;
};

// Line 38: range 000000000CCB050C-000000000CCB06D5
Vector3f *__cdecl Vector3f::operator-=(Vector3f *const this, const Vector3f *inV)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&v2 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inV & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(inV);
  }
  this->x = *(float *)&v2 - inV->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  *(float *)&v3 = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&inV->y);
  }
  this->y = *(float *)&v3 - inV->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  *(float *)&v4 = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&inV->z);
  }
  this->z = *(float *)&v4 - inV->z;
  return this;
};

// Line 39: range 000000000CCB06D6-000000000CCB07DC
Vector3f *__cdecl Vector3f::operator*=(Vector3f *const this, float s)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  this->x = this->x * s;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  this->y = this->y * s;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  this->z = this->z * s;
  return this;
};

// Line 42: range 000000000CCB07DE-000000000CCB090B
Vector3f __cdecl Vector3f::operator-(const Vector3f *const this)
{
  float v1; // xmm2_4
  float v2; // xmm3_4
  float z; // xmm1_4
  __int64 v4; // xmm0_8
  Vector3f v5; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v1 = -this->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v2 = -this->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  Vector3f::Vector3f(&v5, -this->x, v2, v1);
  z = v5.z;
  v4 = *(_QWORD *)&v5.x;
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  result.z = z;
  return result;
};

// Line 59: range 000000000CCB090C-000000000CCB0AEF
Vector3f __cdecl operator+(const Vector3f *lhs, const Vector3f *rhs)
{
  float z; // xmm1_4
  float v3; // xmm2_4
  float y; // xmm1_4
  float v5; // xmm3_4
  float x; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  Vector3f v9; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->z);
  }
  z = lhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->z);
  }
  v3 = z + rhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->y);
  }
  y = lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->y);
  }
  v5 = y + rhs->y;
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  x = lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  Vector3f::Vector3f(&v9, rhs->x + x, v5, v3);
  v7 = v9.z;
  v8 = *(_QWORD *)&v9.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 60: range 000000000CCB0AF0-000000000CCB0CD3
Vector3f __cdecl operator-(const Vector3f *lhs, const Vector3f *rhs)
{
  double v2; // xmm0_8
  float v3; // xmm2_4
  double v4; // xmm0_8
  float v5; // xmm3_4
  double v6; // xmm0_8
  float z; // xmm1_4
  __int64 v8; // xmm0_8
  Vector3f v9; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->z);
  }
  *(float *)&v2 = lhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&rhs->z);
  }
  v3 = *(float *)&v2 - rhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->y);
  }
  *(float *)&v4 = lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&rhs->y);
  }
  v5 = *(float *)&v4 - rhs->y;
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  *(float *)&v6 = lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(rhs);
  }
  Vector3f::Vector3f(&v9, *(float *)&v6 - rhs->x, v5, v3);
  z = v9.z;
  v8 = *(_QWORD *)&v9.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = z;
  return result;
};

// Line 62: range 000000000CCB0CD4-000000000CCB0E87
float __cdecl Dot(const Vector3f *lhs, const Vector3f *rhs)
{
  float x; // xmm1_4
  float v3; // xmm1_4
  float y; // xmm2_4
  float v5; // xmm1_4
  float z; // xmm2_4

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  x = lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  v3 = x * rhs->x;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->y);
  }
  y = lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->y);
  }
  v5 = v3 + (float)(rhs->y * y);
  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->z);
  }
  z = lhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->z);
  }
  return (float)(rhs->z * z) + v5;
};

// Line 65: range 000000000CCB0E88-000000000CCB0FA5
Vector3f __cdecl operator*(const Vector3f *inV, const float s)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float z; // xmm1_4
  __int64 v5; // xmm0_8
  Vector3f v7; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->z);
  }
  v2 = inV->z * s;
  if ( *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->y);
  }
  v3 = inV->y * s;
  if ( *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inV & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inV);
  }
  Vector3f::Vector3f(&v7, inV->x * s, v3, v2);
  z = v7.z;
  v5 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = z;
  return result;
};

// Line 66: range 000000000CCB0FA6-000000000CCB10C3
Vector3f __cdecl operator*(const float s, const Vector3f *inV)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float z; // xmm1_4
  __int64 v5; // xmm0_8
  Vector3f v7; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->z);
  }
  v2 = inV->z * s;
  if ( *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->y);
  }
  v3 = inV->y * s;
  if ( *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inV & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inV);
  }
  Vector3f::Vector3f(&v7, inV->x * s, v3, v2);
  z = v7.z;
  v5 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = z;
  return result;
};

// Line 67: range 000000000CCB10C4-000000000CCB1237
Vector3f __cdecl operator/(const Vector3f *inV, const float s)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  float v5; // xmm1_4
  __int64 v6; // xmm0_8
  __int64 v7; // [rsp+8h] [rbp-98h]
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 temp:67";
  *(_QWORD *)(v2 + 16) = operator/;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( ((unsigned __int8)inV & 7) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&inV->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)inV + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inV->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(inV, 12LL);
  }
  *(Vector3f *)(v2 + 32) = *inV;
  Vector3f::operator/=((Vector3f *const)(v2 + 32), s);
  v7 = *(_QWORD *)(v2 + 32);
  v5 = *(float *)(v2 + 40);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v6 = v7;
  result.x = *(float *)&v6;
  result.y = *((float *)&v6 + 1);
  result.z = v5;
  return result;
};

// Line 70: range 000000000CCB1238-000000000CCB1258
float __cdecl SqrMagnitude(const Vector3f *inV)
{
  return Dot(inV, inV);
};

// Line 71: range 000000000CCB1259-000000000CCB127E
float __cdecl Magnitude(const Vector3f *inV)
{
  float v1; // xmm0_4

  v1 = Dot(inV, inV);
  return SqrtImpl(v1);
};

// Line 74: range 000000000CCB127F-000000000CCB12CA
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl Normalize(const Vector3f *inV)
{
  float v1; // xmm0_4
  __int64 v2; // xmm0_8
  float v3; // xmm1_4
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = Magnitude(inV);
  *(Vector3f *)&v2 = operator/(inV, v1);
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = v3;
  return result;
};

// Line 82: range 000000000CCB12CB-000000000CCB1368
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl Lerp(const Vector3f *from, const Vector3f *to, float t)
{
  __int64 v3; // xmm0_8
  float v4; // xmm1_4
  Vector3f lhs; // [rsp+4Ch] [rbp-24h] BYREF
  Vector3f rhs; // [rsp+58h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  rhs = operator*(from, 1.0 - t);
  lhs = operator*(to, t);
  *(Vector3f *)&v3 = operator+(&lhs, &rhs);
  result.x = *(float *)&v3;
  result.y = *((float *)&v3 + 1);
  result.z = v4;
  return result;
};

// Line 86: range 000000000CCB1369-000000000CCB1569
Vector3f __cdecl min(const Vector3f *lhs, const Vector3f *rhs)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8
  float v5; // xmm0_4
  float z; // xmm1_4
  __int64 v7; // xmm0_8
  float inY; // [rsp+4h] [rbp-4Ch]
  float inZ; // [rsp+8h] [rbp-48h]
  Vector3f v10; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->z);
  }
  *(float *)&v2 = rhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&lhs->z);
  }
  inZ = FloatMin(lhs->z, *(float *)&v2);
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->y);
  }
  *(float *)&v3 = rhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&lhs->y);
  }
  inY = FloatMin(lhs->y, *(float *)&v3);
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  *(float *)&v4 = rhs->x;
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(lhs);
  }
  v5 = FloatMin(lhs->x, *(float *)&v4);
  Vector3f::Vector3f(&v10, v5, inY, inZ);
  z = v10.z;
  v7 = *(_QWORD *)&v10.x;
  result.x = *(float *)&v7;
  result.y = *((float *)&v7 + 1);
  result.z = z;
  return result;
};

// Line 88: range 000000000CCB156A-000000000CCB176A
Vector3f __cdecl max(const Vector3f *lhs, const Vector3f *rhs)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8
  float v5; // xmm0_4
  float z; // xmm1_4
  __int64 v7; // xmm0_8
  float inY; // [rsp+4h] [rbp-4Ch]
  float inZ; // [rsp+8h] [rbp-48h]
  Vector3f v10; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->z);
  }
  *(float *)&v2 = rhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&lhs->z);
  }
  inZ = FloatMax(lhs->z, *(float *)&v2);
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->y);
  }
  *(float *)&v3 = rhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&lhs->y);
  }
  inY = FloatMax(lhs->y, *(float *)&v3);
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  *(float *)&v4 = rhs->x;
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(lhs);
  }
  v5 = FloatMax(lhs->x, *(float *)&v4);
  Vector3f::Vector3f(&v10, v5, inY, inZ);
  z = v10.z;
  v7 = *(_QWORD *)&v10.x;
  result.x = *(float *)&v7;
  result.y = *((float *)&v7 + 1);
  result.z = z;
  return result;
};

// Line 95: range 000000000CCB176B-000000000CCB1897
Vector3f __cdecl Abs(const Vector3f *v)
{
  float v1; // xmm0_4
  float z; // xmm1_4
  __int64 v3; // xmm0_8
  float inY; // [rsp+4h] [rbp-4Ch]
  float inZ; // [rsp+8h] [rbp-48h]
  Vector3f v6; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  inZ = Abs(v->z);
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  inY = Abs(v->y);
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  v1 = Abs(v->x);
  Vector3f::Vector3f(&v6, v1, inY, inZ);
  z = v6.z;
  v3 = *(_QWORD *)&v6.x;
  result.x = *(float *)&v3;
  result.y = *((float *)&v3 + 1);
  result.z = z;
  return result;
};

// Line 121: range 000000000CCB1898-000000000CCB18CB
bool __cdecl IsNormalized(const Vector3f *vec, float epsilon)
{
  float v2; // xmm0_4

  v2 = SqrMagnitude(vec);
  return CompareApproximately(v2, 1.0, epsilon);
};

// Line 126: range 000000000CCB18CC-000000000CCB1AFE
Vector3f __cdecl Cross(const Vector3f *lhs, const Vector3f *rhs)
{
  float x; // xmm1_4
  double v3; // xmm0_8
  float y; // xmm2_4
  float v5; // xmm4_4
  double v6; // xmm0_8
  float v7; // xmm2_4
  float z; // xmm1_4
  __int64 v9; // xmm0_8
  Vector3f v10; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  x = lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->y);
  }
  *(float *)&v3 = rhs->y * x;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&lhs->y);
  }
  y = lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(rhs);
  }
  v5 = *(float *)&v3 - (float)(rhs->x * y);
  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->z);
  }
  *(float *)&v6 = rhs->x * lhs->z;
  v7 = lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&rhs->z);
  }
  Vector3f::Vector3f(
    &v10,
    (float)(rhs->z * lhs->y) - (float)(rhs->y * lhs->z),
    *(float *)&v6 - (float)(rhs->z * v7),
    v5);
  z = v10.z;
  v9 = *(_QWORD *)&v10.x;
  result.x = *(float *)&v9;
  result.y = *((float *)&v9 + 1);
  result.z = z;
  return result;
};

// Line 134: range 000000000CCB1AFF-000000000CCB1BEC
Vector3f __cdecl NormalizeSafe(const Vector3f *inV, const Vector3f *defaultV)
{
  __m128i v2; // xmm0
  float z; // xmm1_4
  __int64 v4; // xmm0_8
  float mag; // [rsp+30h] [rbp-10h]
  Vector3f v6; // [rsp+34h] [rbp-Ch]
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  *(float *)v2.m128i_i32 = Magnitude(inV);
  mag = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( mag <= 0.0000099999997 )
  {
    if ( ((unsigned __int8)defaultV & 7) >= *(_BYTE *)(((unsigned __int64)defaultV >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)defaultV >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&defaultV->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)defaultV + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&defaultV->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(defaultV, 12LL);
    }
    v6 = *defaultV;
  }
  else
  {
    v6 = operator/(inV, mag);
  }
  z = v6.z;
  v4 = *(_QWORD *)&v6.x;
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  result.z = z;
  return result;
};

// Line 170: range 000000000CCB1BED-000000000CCB1C3E
bool __cdecl IsFinite(const Vector3f *f)
{
  bool v1; // bl
  bool v2; // bl

  v1 = IsFinite(&f->x);
  v2 = IsFinite(&f->y) && v1;
  return (v2 & IsFinite(&f->z)) != 0;
};

// Line 175: range 000000000CCB1C3F-000000000CCB1D44
bool __cdecl IsNAN(const Vector3f *f)
{
  if ( *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)f & 7) + 3) >= *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(f);
  }
  if ( IsNAN(f->x) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&f->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)f + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&f->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&f->y);
  }
  if ( IsNAN(f->y) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&f->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)f + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&f->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&f->z);
  }
  return IsNAN(f->z);
};

// Line 185: range 000000000CCB1D45-000000000CCB1D9D
bool __cdecl CompareApproximately(const Vector3f *inV0, const Vector3f *inV1, const float inMaxDist)
{
  Vector3f inV; // [rsp+24h] [rbp-Ch] BYREF
  Vector3f v6; // 0:xmm0_8.8,8:xmm1_4.4

  v6 = operator-(inV1, inV0);
  inV = v6;
  SqrMagnitude(&inV);
  return (float)(inMaxDist * inMaxDist) >= v6.z;
};

// Line 190: range 000000000CCB1D9E-000000000CCB1EA4
Vector3f *__cdecl Vector3f::operator/=(Vector3f *const this, float s)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  this->x = this->x / s;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  this->y = this->y / s;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  this->z = this->z / s;
  return this;
};

// Line 199: range 000000000CF46A02-000000000CF46A70
void __cdecl Vector3f::Transfer<StreamedBinaryRead<false>>(Vector3f *const this, StreamedBinaryRead<false> *t)
{
  StreamedBinaryRead<false>::Transfer<float>(t, &this->x, "x", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(t, &this->y, "y", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(t, &this->z, "z", kNoTransferFlags);
};
