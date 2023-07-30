// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Vector2.h

// Line 33: range 000000000CD6FC2C-000000000CD6FCD1
void __cdecl Vector2f::Vector2f(Vector2f *const this, float inX, float inY)
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
};

// Line 45: range 000000000CD6FCD2-000000000CD6FE06
Vector2f *__cdecl Vector2f::operator+=(Vector2f *const this, const Vector2f *inV)
{
  float x; // xmm1_4
  float y; // xmm1_4

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
  return this;
};

// Line 47: range 000000000CD6FE08-000000000CD6FEBC
Vector2f *__cdecl Vector2f::operator*=(Vector2f *const this, const float s)
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
  return this;
};

// Line 48: range 000000000CD6FEBE-000000000CD6FF72
Vector2f *__cdecl Vector2f::operator/=(Vector2f *const this, const float s)
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
  return this;
};

// Line 73: range 000000000CD6FF73-000000000CD700AD
Vector2f __cdecl operator+(const Vector2f *lhs, const Vector2f *rhs)
{
  float y; // xmm1_4
  float v3; // xmm2_4
  float x; // xmm1_4
  Vector2f v6; // [rsp+18h] [rbp-8h] BYREF

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
  v3 = y + rhs->y;
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
  Vector2f::Vector2f(&v6, rhs->x + x, v3);
  return v6;
};

// Line 74: range 000000000CD700AE-000000000CD701E8
Vector2f __cdecl operator-(const Vector2f *lhs, const Vector2f *rhs)
{
  double v2; // xmm0_8
  float v3; // xmm2_4
  double v4; // xmm0_8
  Vector2f v6; // [rsp+18h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->y);
  }
  *(float *)&v2 = lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&rhs->y);
  }
  v3 = *(float *)&v2 - rhs->y;
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  *(float *)&v4 = lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(rhs);
  }
  Vector2f::Vector2f(&v6, *(float *)&v4 - rhs->x, v3);
  return v6;
};

// Line 75: range 000000000CD701E9-000000000CD7030C
float __cdecl Dot(const Vector2f *lhs, const Vector2f *rhs)
{
  float x; // xmm1_4
  float v3; // xmm1_4
  float y; // xmm2_4

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
  return (float)(rhs->y * y) + v3;
};

// Line 77: range 000000000CD7030D-000000000CD7032D
float __cdecl SqrMagnitude(const Vector2f *inV)
{
  return Dot(inV, inV);
};

// Line 78: range 000000000CD7032E-000000000CD70353
float __cdecl Magnitude(const Vector2f *inV)
{
  float v1; // xmm0_4

  v1 = Dot(inV, inV);
  return SqrtImpl(v1);
};

// Line 82: range 000000000CD70354-000000000CD7040B
Vector2f __cdecl operator*(const Vector2f *inV, float s)
{
  float v2; // xmm1_4
  Vector2f v5; // [rsp+18h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->y);
  }
  v2 = inV->y * s;
  if ( *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inV & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inV);
  }
  Vector2f::Vector2f(&v5, inV->x * s, v2);
  return v5;
};

// Line 83: range 000000000CD7040C-000000000CD704C3
Vector2f __cdecl operator*(const float s, const Vector2f *inV)
{
  float v2; // xmm1_4
  Vector2f v5; // [rsp+18h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->y);
  }
  v2 = inV->y * s;
  if ( *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inV & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inV);
  }
  Vector2f::Vector2f(&v5, inV->x * s, v2);
  return v5;
};

// Line 84: range 000000000CD704C4-000000000CD7060E
Vector2f __cdecl operator/(const Vector2f *inV, float s)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Vector2f v5; // xmm0_8
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 temp:84";
  *(_QWORD *)(v2 + 16) = operator/;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( ((unsigned __int8)inV & 7) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&inV->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)inV + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&inV->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(inV, 8LL);
  }
  *(Vector2f *)(v2 + 32) = *inV;
  Vector2f::operator/=((Vector2f *const)(v2 + 32), s);
  v5 = *(Vector2f *)(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 95: range 000000000CD7060F-000000000CD70680
Vector2f __cdecl Lerp(const Vector2f *from, const Vector2f *to, float t)
{
  Vector2f lhs; // [rsp+20h] [rbp-10h] BYREF
  Vector2f rhs; // [rsp+28h] [rbp-8h] BYREF

  rhs = operator*(from, 1.0 - t);
  lhs = operator*(to, t);
  return operator+(&lhs, &rhs);
};

// Line 98: range 000000000CD70681-000000000CD7075D
Vector2f __cdecl min(const Vector2f *lhs, const Vector2f *rhs)
{
  float *v2; // rax
  float *v3; // rdx
  float *v4; // rax
  float *v5; // rdx
  float inY; // [rsp+Ch] [rbp-24h]
  Vector2f v8; // [rsp+28h] [rbp-8h] BYREF

  v2 = (float *)std::min<float>(&lhs->y, &rhs->y);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  inY = *v3;
  v4 = (float *)std::min<float>((const float *)lhs, (const float *)rhs);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  Vector2f::Vector2f(&v8, *v5, inY);
  return v8;
};

// Line 100: range 000000000CD7075E-000000000CD7083A
Vector2f __cdecl max(const Vector2f *lhs, const Vector2f *rhs)
{
  float *v2; // rax
  float *v3; // rdx
  float *v4; // rax
  float *v5; // rdx
  float inY; // [rsp+Ch] [rbp-24h]
  Vector2f v8; // [rsp+28h] [rbp-8h] BYREF

  v2 = (float *)std::max<float>(&lhs->y, &rhs->y);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  inY = *v3;
  v4 = (float *)std::max<float>((const float *)lhs, (const float *)rhs);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  Vector2f::Vector2f(&v8, *v5, inY);
  return v8;
};

// Line 143: range 000000000CD7083B-000000000CD70902
Vector2f __cdecl NormalizeSafe(const Vector2f *inV, const Vector2f *defaultV)
{
  __m128i v2; // xmm0
  float mag; // [rsp+1Ch] [rbp-4h]

  *(float *)v2.m128i_i32 = Magnitude(inV);
  mag = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( mag <= 0.0000099999997 )
  {
    if ( ((unsigned __int8)defaultV & 7) >= *(_BYTE *)(((unsigned __int64)defaultV >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)defaultV >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&defaultV->y + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)defaultV + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&defaultV->y + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(defaultV, 8LL);
    }
    return *defaultV;
  }
  else
  {
    return operator/(inV, mag);
  }
};
