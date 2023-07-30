// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/math.cpp

// Line 6: range 000000000CC0163C-000000000CC0171D
void __cdecl ToTheMoonVector3::ToTheMoonVector3(ToTheMoonVector3 *const this)
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

// Line 13: range 000000000CC0171E-000000000CC01811
void __cdecl ToTheMoonVector3::ToTheMoonVector3(ToTheMoonVector3 *const this, float x, float y, float z)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = z;
};

// Line 21: range 000000000CC01812-000000000CC019E0
float __cdecl ToTheMoonVector3::ManhattanDistance(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8
  float v6; // [rsp+Ch] [rbp-14h]
  float v7; // [rsp+Ch] [rbp-14h]

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
  v6 = std::abs(*(float *)&v2 - v->x);
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
  v7 = std::abs(*(float *)&v3 - v->y) + v6;
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
  return std::abs(*(float *)&v4 - v->z) + v7;
};

// Line 27: range 000000000CC019E2-000000000CC01BCD
float __cdecl ToTheMoonVector3::EuclideanDistance(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8
  float v5; // xmm0_4
  float v7; // [rsp+Ch] [rbp-14h]
  float v8; // [rsp+Ch] [rbp-14h]

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
  v7 = powf(*(float *)&v2 - v->x, 2.0);
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
  v8 = powf(*(float *)&v3 - v->y, 2.0) + v7;
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
  v5 = powf(*(float *)&v4 - v->z, 2.0);
  return std::sqrt(v5 + v8);
};

// Line 33: range 000000000CC01BCE-000000000CC01CAA
float __cdecl ToTheMoonVector3::Sum(const ToTheMoonVector3 *const this)
{
  float x; // xmm1_4
  float v2; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v2 = x + this->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  return this->z + v2;
};

// Line 38: range 000000000CC01CAC-000000000CC01DC6
float __cdecl ToTheMoonVector3::Magnitude(const ToTheMoonVector3 *const this)
{
  float v1; // xmm0_4
  float v3; // [rsp+4h] [rbp-Ch]
  float v4; // [rsp+4h] [rbp-Ch]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v3 = powf(this->x, 2.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v4 = powf(this->y, 2.0) + v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v1 = powf(this->z, 2.0);
  return std::sqrt(v1 + v4);
};

// Line 44: range 000000000CC01DC8-000000000CC01F45
// local variable allocation has failed, the output may be wrong!
float __cdecl ToTheMoonVector3::SignedAngle(
        const ToTheMoonVector3 *const this,
        const ToTheMoonVector3 *v,
        const ToTheMoonVector3 *axis)
{
  __int128 v3; // xmm1
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __m128i v10; // xmm0 OVERLAPPED
  int v11; // xmm1_4
  float result; // xmm0_4
  float angle; // [rsp+20h] [rbp-70h]
  ToTheMoonVector3 v15; // [rsp+24h] [rbp-6Ch] BYREF
  char v16[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 12 8 cross:46";
  *(_QWORD *)(v4 + 16) = ToTheMoonVector3::SignedAngle;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202177536;
  *(ToTheMoonVector3 *)((char *)&v3 - 8) = ToTheMoonVector3::Normalize(this);
  *(_QWORD *)&v15.x = v7;
  LODWORD(v15.z) = v3;
  *(ToTheMoonVector3 *)((char *)&v3 - 8) = ToTheMoonVector3::Normalize(v);
  v9 = v8;
  v10 = (__m128i)v3;
  *(_QWORD *)(v4 + 32) = v9;
  *(_DWORD *)(v4 + 40) = v3;
  *(float *)v10.m128i_i32 = ToTheMoonVector3::Dot(&v15, (const ToTheMoonVector3 *)(v4 + 32));
  *(float *)v10.m128i_i32 = std::acos(*(float *)v10.m128i_i32);
  angle = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  *(ToTheMoonVector3 *)v10.m128i_i8 = ToTheMoonVector3::Cross(this, v);
  *(_QWORD *)(v4 + 32) = v10.m128i_i64[0];
  *(_DWORD *)(v4 + 40) = v11;
  if ( ToTheMoonVector3::Dot(axis, (const ToTheMoonVector3 *)(v4 + 32)) < 0.0 )
    angle = -angle;
  result = angle;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 55: range 000000000CC01F46-000000000CC020F9
float __cdecl ToTheMoonVector3::Dot(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  float x; // xmm1_4
  float v3; // xmm1_4
  float y; // xmm2_4
  float v5; // xmm1_4
  float z; // xmm2_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  v3 = x * v->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v5 = v3 + (float)(v->y * y);
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  return (float)(v->z * z) + v5;
};

// Line 60: range 000000000CC020FA-000000000CC0229A
void __cdecl ToTheMoonVector3::Set(ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  x = v->x;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  y = v->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = y;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  z = v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = z;
};

// Line 67: range 000000000CC0229C-000000000CC0238F
void __cdecl ToTheMoonVector3::Set(ToTheMoonVector3 *const this, float x, float y, float z)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = z;
};

// Line 74: range 000000000CC02390-000000000CC025E7
ToTheMoonVector3 __cdecl ToTheMoonVector3::Cross(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  float y; // xmm1_4
  double v3; // xmm0_8
  float z; // xmm2_4
  double v5; // xmm0_8
  float v6; // xmm2_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  float tx; // [rsp+3Ch] [rbp-24h]
  ToTheMoonVector3 v10; // [rsp+48h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  *(float *)&v3 = v->z * y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&v->y);
  }
  tx = *(float *)&v3 - (float)(v->y * z);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&v5 = v->z * this->x;
  v6 = this->z;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(v);
  }
  ToTheMoonVector3::ToTheMoonVector3(
    &v10,
    tx,
    -(float)(*(float *)&v5 - (float)(v->x * v6)),
    (float)(v->y * this->x) - (float)(v->x * this->y));
  v7 = v10.z;
  v8 = *(_QWORD *)&v10.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 82: range 000000000CC025E8-000000000CC02780
ToTheMoonVector3 __cdecl ToTheMoonVector3::Normalize(const ToTheMoonVector3 *const this)
{
  __m128i v1; // xmm0
  __int64 v2; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v4; // rbx
  float v5; // xmm2_4
  float v6; // xmm1_4
  float z; // xmm1_4
  __int64 v8; // xmm0_8
  float magnitude; // [rsp+34h] [rbp-2Ch]
  ToTheMoonVector3 v10; // [rsp+38h] [rbp-28h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  *(float *)v1.m128i_i32 = ToTheMoonVector3::Magnitude(this);
  magnitude = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  if ( magnitude == 0.0 )
  {
    v2 = 8LL;
    exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
    v4 = (_QWORD *)exception;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    {
      v2 = exception;
      __asan_report_store8();
    }
    *v4 = "Can't normalize a zero vector3";
    __asan_handle_no_return(v2);
    _cxa_throw(v4, (struct type_info *)&`typeinfo for'char const*, 0LL);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v5 = this->z / magnitude;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v6 = this->y / magnitude;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v10, this->x / magnitude, v6, v5);
  z = v10.z;
  v8 = *(_QWORD *)&v10.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = z;
  return result;
};

// Line 92: range 000000000CC02782-000000000CC02965
ToTheMoonVector3 __cdecl ToTheMoonVector3::Diff(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  double v2; // xmm0_8
  float v3; // xmm2_4
  double v4; // xmm0_8
  float v5; // xmm3_4
  double v6; // xmm0_8
  float z; // xmm1_4
  __int64 v8; // xmm0_8
  ToTheMoonVector3 v9; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  *(float *)&v2 = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&v->z);
  }
  v3 = *(float *)&v2 - v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  *(float *)&v4 = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&v->y);
  }
  v5 = *(float *)&v4 - v->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&v6 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(v);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v9, *(float *)&v6 - v->x, v5, v3);
  z = v9.z;
  v8 = *(_QWORD *)&v9.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = z;
  return result;
};

// Line 97: range 000000000CC02966-000000000CC02B49
ToTheMoonVector3 __cdecl ToTheMoonVector3::Add(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  float z; // xmm1_4
  float v3; // xmm2_4
  float y; // xmm1_4
  float v5; // xmm3_4
  float x; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  ToTheMoonVector3 v9; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v3 = z + v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v5 = y + v->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v9, v->x + x, v5, v3);
  v7 = v9.z;
  v8 = *(_QWORD *)&v9.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 102: range 000000000CC02B4A-000000000CC02CF7
ToTheMoonVector3 __cdecl ToTheMoonVector3::Divide(const ToTheMoonVector3 *const this, float f)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float z; // xmm1_4
  __int64 v5; // xmm0_8
  float fa; // [rsp+24h] [rbp-5Ch]
  ToTheMoonVector3 v7; // [rsp+38h] [rbp-48h] BYREF
  common::milog::MiLogStream v8; // [rsp+50h] [rbp-30h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  fa = f;
  if ( f == 0.0 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/Utils/math.cpp",
      "Divide",
      105);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"Invalid divisor 0");
    common::milog::MiLogStream::~MiLogStream(&v8);
    fa = 0.000001;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v2 = this->z / fa;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v3 = this->y / fa;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v7, this->x / fa, v3, v2);
  z = v7.z;
  v5 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = z;
  return result;
};

// Line 114: range 000000000CC02CF8-000000000CC02E15
ToTheMoonVector3 __cdecl ToTheMoonVector3::Multiple(const ToTheMoonVector3 *const this, float f)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float z; // xmm1_4
  __int64 v5; // xmm0_8
  ToTheMoonVector3 v7; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v2 = this->z * f;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v3 = this->y * f;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v7, this->x * f, v3, v2);
  z = v7.z;
  v5 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = z;
  return result;
};

// Line 119: range 000000000CC02E16-000000000CC02F33
ToTheMoonVector3 __cdecl ToTheMoonVector3::Increase(const ToTheMoonVector3 *const this, float f)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float z; // xmm1_4
  __int64 v5; // xmm0_8
  ToTheMoonVector3 v7; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v2 = this->z + f;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v3 = this->y + f;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v7, this->x + f, v3, v2);
  z = v7.z;
  v5 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = z;
  return result;
};

// Line 124: range 000000000CC02F34-000000000CC03117
ToTheMoonVector3 __cdecl ToTheMoonVector3::ParallelMultiple(
        const ToTheMoonVector3 *const this,
        const ToTheMoonVector3 *v)
{
  float z; // xmm1_4
  float v3; // xmm2_4
  float y; // xmm1_4
  float v5; // xmm3_4
  float x; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  ToTheMoonVector3 v9; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v3 = z * v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v5 = y * v->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v9, v->x * x, v5, v3);
  v7 = v9.z;
  v8 = *(_QWORD *)&v9.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 129: range 000000000CC03118-000000000CC032F1
bool __cdecl ToTheMoonVector3::Equal(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
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

// Line 134: range 000000000CC032F2-000000000CC034B4
bool __cdecl ToTheMoonVector3::OutsideThan(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
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
  if ( *(float *)&v2 < v->x )
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
  if ( *(float *)&v3 < v->y )
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
  return *(float *)&v4 >= v->z;
};

// Line 141: range 000000000CC034B6-000000000CC03699
ToTheMoonVector3 __cdecl ToTheMoonVector3::operator+(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  float z; // xmm1_4
  float v3; // xmm2_4
  float y; // xmm1_4
  float v5; // xmm3_4
  float x; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  ToTheMoonVector3 v9; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v3 = z + v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v5 = y + v->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v9, v->x + x, v5, v3);
  v7 = v9.z;
  v8 = *(_QWORD *)&v9.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 146: range 000000000CC0369A-000000000CC0387D
ToTheMoonVector3 __cdecl ToTheMoonVector3::operator-(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  double v2; // xmm0_8
  float v3; // xmm2_4
  double v4; // xmm0_8
  float v5; // xmm3_4
  double v6; // xmm0_8
  float z; // xmm1_4
  __int64 v8; // xmm0_8
  ToTheMoonVector3 v9; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  *(float *)&v2 = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&v->z);
  }
  v3 = *(float *)&v2 - v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  *(float *)&v4 = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&v->y);
  }
  v5 = *(float *)&v4 - v->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&v6 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(v);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v9, *(float *)&v6 - v->x, v5, v3);
  z = v9.z;
  v8 = *(_QWORD *)&v9.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = z;
  return result;
};

// Line 151: range 000000000CC0387E-000000000CC0399B
ToTheMoonVector3 __cdecl ToTheMoonVector3::operator*(const ToTheMoonVector3 *const this, float f)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float z; // xmm1_4
  __int64 v5; // xmm0_8
  ToTheMoonVector3 v7; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v2 = this->z * f;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v3 = this->y * f;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v7, this->x * f, v3, v2);
  z = v7.z;
  v5 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = z;
  return result;
};

// Line 156: range 000000000CC0399C-000000000CC039C0
float __cdecl ToTheMoonVector3::operator*(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  return ToTheMoonVector3::Dot(this, v);
};

// Line 161: range 000000000CC039C2-000000000CC03B9F
bool __cdecl ToTheMoonVector3::IsTheSame(const ToTheMoonVector3 *const this, const ToTheMoonVector3 *v)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  *(float *)&v2 = v->x;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(this);
  }
  if ( !Algebra::IsClose(this->x, *(float *)&v2) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  *(float *)&v3 = v->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&this->y);
  }
  if ( !Algebra::IsClose(this->y, *(float *)&v3) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  *(float *)&v4 = v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&this->z);
  }
  return Algebra::IsClose(this->z, *(float *)&v4);
};

// Line 166: range 000000000CC03BA0-000000000CC03E78
std::string *__cdecl ToTheMoonVector3::ToString[abi:cxx11](std::string *retstr, const ToTheMoonVector3 *const this)
{
  std::string __lhs; // [rsp+10h] [rbp-D0h] BYREF
  std::string v4; // [rsp+30h] [rbp-B0h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-90h] BYREF
  std::string v6; // [rsp+70h] [rbp-70h] BYREF
  std::string v7; // [rsp+90h] [rbp-50h] BYREF
  std::string v8; // [rsp+B0h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  std::to_string(&v8, this->z);
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  std::to_string(&__rhs, this->y);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  std::to_string(&__lhs, this->x);
  std::operator+<char>(&v4, &__lhs, ", ");
  std::operator+<char>(&v6, &v4, &__rhs);
  std::operator+<char>(&v7, &v6, ", ");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v7, &v8);
  std::string::~string(&v7);
  std::string::~string(&v6);
  std::string::~string(&v4);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v8);
  return retstr;
};

// Line 170: range 000000000CC03E7A-000000000CC03F5B
void __cdecl IntVector3::IntVector3(IntVector3 *const this, int x, int y, int z)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = z;
};

// Line 178: range 000000000CC03F5C-000000000CC04129
IntVector3 __cdecl IntVector3::Diff(const IntVector3 *const this, const IntVector3 *v)
{
  int z; // ecx
  int v3; // ecx
  int y; // esi
  int v5; // edi
  int x; // esi
  IntVector3 v10; // [rsp+28h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v3 = z - v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v5 = y - v->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v5 = (int)this;
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v5 = (int)v;
    __asan_report_load4(v);
  }
  IntVector3::IntVector3(&v10, x - v->x, v5, v3);
  return v10;
};

// Line 183: range 000000000CC0412A-000000000CC042F6
IntVector3 __cdecl IntVector3::Add(const IntVector3 *const this, const IntVector3 *v)
{
  int z; // ecx
  int v3; // ecx
  int y; // esi
  int v5; // edi
  int x; // esi
  IntVector3 v10; // [rsp+28h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v3 = v->z + z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v5 = y + v->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v5 = (int)this;
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v5 = (int)v;
    __asan_report_load4(v);
  }
  IntVector3::IntVector3(&v10, v->x + x, v5, v3);
  return v10;
};

// Line 188: range 000000000CC042F8-000000000CC04405
IntVector3 __cdecl IntVector3::Multiple(const IntVector3 *const this, int k)
{
  int v2; // ecx
  int v3; // edi
  IntVector3 v6; // [rsp+28h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v2 = k * this->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v3 = k * this->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v3 = (int)this;
    __asan_report_load4(this);
  }
  IntVector3::IntVector3(&v6, k * this->x, v3, v2);
  return v6;
};

// Line 193: range 000000000CC04406-000000000CC04529
ToTheMoonVector3 __cdecl IntVector3::Multiple(const IntVector3 *const this, float k)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float z; // xmm1_4
  __int64 v5; // xmm0_8
  ToTheMoonVector3 v7; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v2 = (float)this->z * k;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v3 = (float)this->y * k;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v7, (float)this->x * k, v3, v2);
  z = v7.z;
  v5 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = z;
  return result;
};

// Line 198: range 000000000CC0452A-000000000CC046DD
ToTheMoonVector3 __cdecl IntVector3::ParallelMultiple(const IntVector3 *const this, const ToTheMoonVector3 *v)
{
  float z; // xmm1_4
  float v3; // xmm2_4
  float y; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  __int64 v7; // xmm0_8
  ToTheMoonVector3 v8; // [rsp+38h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = (float)this->z;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v3 = z * v->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = (float)this->y;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v5 = y * v->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v8, v->z * (float)this->x, v5, v3);
  v6 = v8.z;
  v7 = *(_QWORD *)&v8.x;
  result.x = *(float *)&v7;
  result.y = *((float *)&v7 + 1);
  result.z = v6;
  return result;
};

// Line 203: range 000000000CC046DE-000000000CC04803
int __cdecl IntVector3::CountAbsEquals(const IntVector3 *const this, int k)
{
  int cnt; // [rsp+1Ch] [rbp-4h]

  cnt = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( k == this->x || this->x == -k )
    cnt = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  if ( k == this->y || this->y == -k )
    ++cnt;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  if ( k == this->z || this->z == -k )
    ++cnt;
  return cnt;
};

// Line 217: range 000000000CC04804-000000000CC04A39
void __cdecl Geometry::GetLineSegmentCommonPart(
        float l1_start,
        float l1_end,
        float l2_start,
        float l2_end,
        PlaneLine *res)
{
  float v5; // xmm0_4
  float end; // [rsp+2Ch] [rbp-44h]
  float start; // [rsp+30h] [rbp-40h]
  PlaneLine v8; // [rsp+34h] [rbp-3Ch] BYREF
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  if ( l1_start < l2_start )
    l1_start = l2_start;
  start = l1_start;
  if ( l2_end < l1_end )
    v5 = l2_end;
  else
    v5 = l1_end;
  end = v5;
  if ( start > v5 )
  {
    if ( !Algebra::IsClose(start, v5) )
    {
      PlaneLine::PlaneLine(&v8, v5, start);
      if ( ((unsigned __int8)res & 7) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)&res->incremental >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)res + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&res->incremental >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(res, 9LL);
      }
      *res = v8;
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/Utils/math.cpp",
        "GetLineSegmentCommonPart",
        224);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v9,
        (const char (*)[35])"Error: node in path not contiguous");
      common::milog::MiLogStream::~MiLogStream(&v9);
      return;
    }
    end = start;
  }
  PlaneLine::PlaneLine(&v8, start, end);
  if ( ((unsigned __int8)res & 7) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&res->incremental >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)res + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&res->incremental >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(res, 9LL);
  }
  *res = v8;
};

// Line 235: range 000000000CC04A3A-000000000CC04AD2
RelationRayToCircularSector __cdecl Geometry::GetRelationFromRayToCircularSector(
        const ToTheMoonVector3 *startVec,
        const ToTheMoonVector3 *endVec,
        const ToTheMoonVector3 *rayVec,
        const ToTheMoonVector3 *axis)
{
  __m128i v4; // xmm0
  float angle1; // [rsp+28h] [rbp-8h]
  float angle2; // [rsp+2Ch] [rbp-4h]

  *(float *)v4.m128i_i32 = ToTheMoonVector3::SignedAngle(startVec, rayVec, axis);
  angle1 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  *(float *)v4.m128i_i32 = ToTheMoonVector3::SignedAngle(endVec, rayVec, axis);
  angle2 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( angle1 > 0.0 && angle2 > 0.0 )
    return 1;
  if ( angle1 >= 0.0 || angle2 >= 0.0 )
    return 0;
  return 2;
};

// Line 248: range 000000000CC04AD4-000000000CC04F73
void __cdecl Geometry::RotateVectorByQuat(
        const ToTheMoonQuaternion *lhs,
        const ToTheMoonVector3 *rhs,
        ToTheMoonVector3 *res)
{
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float x; // [rsp+20h] [rbp-30h]
  float y; // [rsp+24h] [rbp-2Ch]
  float z; // [rsp+28h] [rbp-28h]
  float xx; // [rsp+2Ch] [rbp-24h]
  float yy; // [rsp+30h] [rbp-20h]
  float zz; // [rsp+34h] [rbp-1Ch]
  float xy; // [rsp+38h] [rbp-18h]
  float xz; // [rsp+3Ch] [rbp-14h]
  float yz; // [rsp+40h] [rbp-10h]
  float wx; // [rsp+44h] [rbp-Ch]
  float wy; // [rsp+48h] [rbp-8h]
  float wz; // [rsp+4Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  x = lhs->x + lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->y);
  }
  y = lhs->y + lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->z);
  }
  z = lhs->z + lhs->z;
  xx = lhs->x * x;
  yy = lhs->y * y;
  zz = lhs->z * z;
  xy = lhs->x * y;
  xz = lhs->x * z;
  yz = lhs->y * z;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->w);
  }
  wx = lhs->w * x;
  wy = lhs->w * y;
  wz = lhs->w * z;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  v3 = (float)(1.0 - (float)(yy + zz)) * rhs->x;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->y);
  }
  v4 = v3 + (float)(rhs->y * (float)(xy - wz));
  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->z);
  }
  v5 = (float)(rhs->z * (float)(xz + wy)) + v4;
  if ( *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)res & 7) + 3) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(res);
  }
  res->x = v5;
  v6 = (float)(rhs->z * (float)(yz - wx))
     + (float)((float)((float)(xy + wz) * rhs->x) + (float)(rhs->y * (float)(1.0 - (float)(xx + zz))));
  if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->y);
  }
  res->y = v6;
  v7 = (float)(rhs->z * (float)(1.0 - (float)(xx + yy)))
     + (float)((float)((float)(xz - wy) * rhs->x) + (float)(rhs->y * (float)(yz + wx)));
  if ( *(_BYTE *)(((unsigned __int64)&res->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->z);
  }
  res->z = v7;
};

// Line 268: range 000000000CC04F74-000000000CC051E5
// local variable allocation has failed, the output may be wrong!
float __cdecl Geometry::PointDistanceToLine(
        const ToTheMoonVector3 *point,
        const ToTheMoonVector3 *lineStart,
        const ToTheMoonVector3 *lineEnd)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __m128i v6; // xmm1
  float result; // xmm0_4
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __m128i v10; // xmm0
  float abLength; // [rsp+20h] [rbp-B0h]
  ToTheMoonVector3 v13; // [rsp+24h] [rbp-ACh] BYREF
  char v14[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 6 ab:270 64 12 6 av:271 96 12 6 bv:276";
  *(_QWORD *)(v3 + 16) = Geometry::PointDistanceToLine;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -202177536;
  *(ToTheMoonVector3 *)(v3 + 32) = ToTheMoonVector3::operator-(lineEnd, lineStart);
  *(ToTheMoonVector3 *)(v3 + 64) = ToTheMoonVector3::operator-(point, lineStart);
  v6 = 0LL;
  if ( ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v3 + 64), (const ToTheMoonVector3 *)(v3 + 32)) > 0.0 )
  {
    *(ToTheMoonVector3 *)((char *)&v6 - 8) = ToTheMoonVector3::operator-(lineEnd, point);
    v9 = v8;
    v10 = v6;
    *(_QWORD *)(v3 + 96) = v9;
    *(_DWORD *)(v3 + 104) = v6.m128i_i32[0];
    if ( ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v3 + 96), (const ToTheMoonVector3 *)(v3 + 32)) < 0.0 )
    {
      *(float *)v10.m128i_i32 = ToTheMoonVector3::Magnitude((const ToTheMoonVector3 *const)(v3 + 32));
      abLength = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
      if ( abLength == 0.0 )
      {
        result = ToTheMoonVector3::EuclideanDistance(lineStart, point);
      }
      else
      {
        v13 = ToTheMoonVector3::Cross((const ToTheMoonVector3 *const)(v3 + 32), (const ToTheMoonVector3 *)(v3 + 64));
        result = ToTheMoonVector3::Magnitude(&v13) / abLength;
      }
    }
    else
    {
      result = ToTheMoonVector3::Magnitude((const ToTheMoonVector3 *const)(v3 + 96));
    }
  }
  else
  {
    result = ToTheMoonVector3::Magnitude((const ToTheMoonVector3 *const)(v3 + 64));
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 288: range 000000000CC051E6-000000000CC05430
float __cdecl Geometry::PointDistanceToLineSegment(
        const ToTheMoonVector3 *point,
        const ToTheMoonVector3 *lineStart,
        const ToTheMoonVector3 *lineEnd)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  float result; // xmm0_4
  float v7; // [rsp+4h] [rbp-CCh]
  ToTheMoonVector3 v9; // [rsp+24h] [rbp-ACh] BYREF
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 11 lineVec:290 64 12 18 pointFromStart:291 96 12 16 pointFromEnd:296";
  *(_QWORD *)(v3 + 16) = Geometry::PointDistanceToLineSegment;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -202177536;
  *(ToTheMoonVector3 *)(v3 + 32) = ToTheMoonVector3::operator-(lineEnd, lineStart);
  *(ToTheMoonVector3 *)(v3 + 64) = ToTheMoonVector3::operator-(point, lineStart);
  if ( ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v3 + 64), (const ToTheMoonVector3 *)(v3 + 32)) > 0.0 )
  {
    *(ToTheMoonVector3 *)(v3 + 96) = ToTheMoonVector3::operator-(point, lineEnd);
    if ( ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v3 + 96), (const ToTheMoonVector3 *)(v3 + 32)) < 0.0 )
    {
      v9 = ToTheMoonVector3::Cross((const ToTheMoonVector3 *const)(v3 + 32), (const ToTheMoonVector3 *)(v3 + 64));
      v7 = ToTheMoonVector3::Magnitude(&v9);
      result = v7 / ToTheMoonVector3::Magnitude((const ToTheMoonVector3 *const)(v3 + 32));
    }
    else
    {
      result = ToTheMoonVector3::Magnitude((const ToTheMoonVector3 *const)(v3 + 96));
    }
  }
  else
  {
    result = ToTheMoonVector3::Magnitude((const ToTheMoonVector3 *const)(v3 + 64));
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 305: range 000000000CC05432-000000000CC05478
float __cdecl Geometry::PointDistanceToLine1D(float point, float min, float max)
{
  if ( min >= point )
    return min - point;
  if ( max < point )
    return point - max;
  return 0.0;
};

// Line 314: range 000000000CC0547A-000000000CC054CB
float __cdecl Geometry::PointDistanceToPlane(
        const ToTheMoonVector3 *point,
        const ToTheMoonVector3 *planeNormal,
        const ToTheMoonVector3 *planePos)
{
  float v3; // xmm0_4
  ToTheMoonVector3 v; // [rsp+24h] [rbp-Ch] BYREF

  v = ToTheMoonVector3::operator-(point, planePos);
  v3 = ToTheMoonVector3::Dot(planeNormal, &v);
  return std::abs(v3);
};

// Line 320: range 000000000CC054CC-000000000CC055FF
bool __cdecl Geometry::PointInNode(const ToTheMoonVector3 *point, const ToTheMoonVector3 *center, float halfSize)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  bool result; // al
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 14 toPointVec:321";
  *(_QWORD *)(v3 + 16) = Geometry::PointInNode;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  *(ToTheMoonVector3 *)(v3 + 32) = ToTheMoonVector3::operator-(point, center);
  result = halfSize > std::abs(*(float *)(v3 + 32))
        && halfSize > std::abs(*(float *)(v3 + 36))
        && halfSize > std::abs(*(float *)(v3 + 40));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 326: range 000000000CC05600-000000000CC056FC
bool __cdecl Geometry::PointInPlane(
        const ToTheMoonVector3 *point,
        const ToTheMoonVector3 *planeNormal,
        const ToTheMoonVector3 *planePoint)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // xmm0_4
  bool result; // al
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 17 planeToTarget:327";
  *(_QWORD *)(v3 + 16) = Geometry::PointInPlane;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  *(ToTheMoonVector3 *)(v3 + 32) = ToTheMoonVector3::Diff(point, planePoint);
  v6 = ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v3 + 32), planeNormal);
  result = Algebra::IsClose(v6, 0.0);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 332: range 000000000CC056FE-000000000CC057C5
Axis __cdecl Geometry::PlaneNormalToAxis(const ToTheMoonVector3 *planeNormal)
{
  if ( *(_BYTE *)(((unsigned __int64)planeNormal >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)planeNormal & 7) + 3) >= *(_BYTE *)(((unsigned __int64)planeNormal >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(planeNormal);
  }
  if ( !Algebra::IsClose(planeNormal->x, 0.0) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&planeNormal->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)planeNormal + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&planeNormal->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&planeNormal->y);
  }
  if ( !Algebra::IsClose(planeNormal->y, 0.0) )
    return 1;
  else
    return 2;
};

// Line 345: range 000000000CC057C6-000000000CC05AF1
bool __cdecl Geometry::CheckIfVerticalLinesCoplanar(
        std::shared_ptr<ToTheMoonLine> *p_line1,
        std::shared_ptr<ToTheMoonLine> *p_line2,
        Axis axis1,
        Axis axis2)
{
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  float *p_x; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float *v9; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  float *p_y; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  float *v13; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  float *p_z; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  float *v17; // rax
  float b; // [rsp+4h] [rbp-5Ch]
  float ba; // [rsp+4h] [rbp-5Ch]
  float bb; // [rsp+4h] [rbp-5Ch]
  int commonAxis; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-30h] BYREF

  if ( axis1 > Z || axis2 > Z || axis1 == axis2 )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/Utils/math.cpp",
      "CheckIfVerticalLinesCoplanar",
      348);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v24,
      (const char (*)[52])"[CheckIfVerticalLinesCoplanar] Should never be here");
    common::milog::MiLogStream::~MiLogStream(&v24);
    return 0;
  }
  if ( std::operator==<ToTheMoonLine>(p_line1, 0LL) || std::operator==<ToTheMoonLine>(p_line2, 0LL) )
    return 0;
  commonAxis = Geometry::GetOtherAxisForVerticalLines(axis1, axis2);
  if ( commonAxis == 2 )
  {
    v14 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_line2);
    p_z = &v14->start.z;
    if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_z);
    }
    bb = v14->start.z;
    v16 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_line1);
    v17 = &v16->start.z;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    return Algebra::IsClose(v16->start.z, bb);
  }
  else
  {
    if ( commonAxis > 2 )
      return 0;
    if ( commonAxis )
    {
      if ( commonAxis != 1 )
        return 0;
      v10 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_line2);
      p_y = &v10->start.y;
      if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_y);
      }
      ba = v10->start.y;
      v12 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_line1);
      v13 = &v12->start.y;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      return Algebra::IsClose(v12->start.y, ba);
    }
    else
    {
      v6 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_line2);
      p_x = &v6->start.x;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      b = *p_x;
      v8 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_line1);
      v9 = &v8->start.x;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      return Algebra::IsClose(*v9, b);
    }
  }
};

// Line 373: range 000000000CCC7638-000000000CCC764E
Axis __cdecl Geometry::GetOtherAxisForVerticalLines(Axis axis1, Axis axis2)
{
  return 3 - axis1 - axis2;
};

// Line 378: range 000000000CC05AF2-000000000CC05B27
bool __cdecl Algebra::IsClose(float a, float b)
{
  return std::abs(a - b) <= 0.000001;
};

// Line 382: range 000000000CC05B28-000000000CC05C19
void __cdecl PlaneLine::PlaneLine(PlaneLine *const this, float start, float end)
{
  bool v3; // cl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->start = start;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end);
  }
  this->end = end;
  v3 = end >= start;
  if ( *(_BYTE *)(((unsigned __int64)&this->incremental >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->incremental >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->incremental);
  }
  this->incremental = v3;
};

// Line 390: range 000000000CC05C1A-000000000CC05CB4
bool __cdecl PlaneLine::IsPoint(const PlaneLine *const this)
{
  double v1; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end);
  }
  *(float *)&v1 = this->end;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v1 = __asan_report_load4(this);
  }
  return Algebra::IsClose(this->start, *(float *)&v1);
};

// Line 395: range 000000000CC05CB6-000000000CC05E56
bool __cdecl PlaneLine::IsPointIn(const PlaneLine *const this, float p)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->incremental >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->incremental >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->incremental);
  }
  if ( this->incremental )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    if ( p <= this->start )
      return 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->end);
    }
    return this->end > p;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->end);
    }
    if ( p <= this->end )
      return 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    return this->start > p;
  }
};

// Line 400: range 000000000CC05E58-000000000CC05EEE
bool __cdecl PlaneLine::Increasing(const PlaneLine *const this)
{
  double v1; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end);
  }
  *(float *)&v1 = this->end;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v1 = __asan_report_load4(this);
  }
  return *(float *)&v1 >= this->start;
};

// Line 405: range 000000000CC05EF0-000000000CC05FCF
ToTheMoonVector3 __cdecl Geometry::CommonAxis::DirectionToVector3(Const::Direction dir)
{
  __int64 v1; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v3; // rbx
  float z; // xmm1_4
  __int64 v5; // xmm0_8
  ToTheMoonVector3 Up; // [rsp+34h] [rbp-1Ch]
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( dir == Up )
  {
    Up = Geometry::CommonAxis::GetUp();
  }
  else
  {
    if ( dir > Up )
      goto LABEL_9;
    if ( dir == Front )
    {
      Up = Geometry::CommonAxis::GetFront();
    }
    else
    {
      if ( dir != Left )
      {
LABEL_9:
        v1 = 8LL;
        exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
        v3 = (_QWORD *)exception;
        if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
        {
          v1 = exception;
          __asan_report_store8();
        }
        *v3 = "Wrong direction for get vector3";
        __asan_handle_no_return(v1);
        _cxa_throw(v3, (struct type_info *)&`typeinfo for'char const*, 0LL);
      }
      Up = Geometry::CommonAxis::GetLeft();
    }
  }
  z = Up.z;
  v5 = *(_QWORD *)&Up.x;
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  result.z = z;
  return result;
};

// Line 421: range 000000000CC05FD0-000000000CC060F9
bool __cdecl Range3D::IsPointIn(const Range3D *const this, const ToTheMoonVector3 *p)
{
  const Range3D *v2; // rcx
  PlaneLine *p_y_range; // rcx
  PlaneLine *p_z_range; // rcx

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p);
  }
  if ( !PlaneLine::IsPointIn(&v2->x_range, p->x) )
    return 0;
  p_y_range = &this->y_range;
  if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p->y);
  }
  if ( !PlaneLine::IsPointIn(p_y_range, p->y) )
    return 0;
  p_z_range = &this->z_range;
  if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p->z);
  }
  return PlaneLine::IsPointIn(p_z_range, p->z);
};

// Line 426: range 000000000CC060FA-000000000CC06737
void __cdecl Range3D::Overlap(const Range3D *const this, const Range3D *other, Range3D *res)
{
  __m128i M_array_high; // xmm0
  std::initializer_list<float> v4; // rdi
  float v5; // esi
  __m128i v6; // xmm0
  std::initializer_list<float> v7; // rdi
  float v8; // ecx
  __m128i v9; // xmm0
  std::initializer_list<float> v10; // rdi
  float v11; // ecx
  __m128i v12; // xmm0
  std::initializer_list<float> v13; // rdi
  float v14; // ecx
  __m128i v15; // xmm0
  std::initializer_list<float> v16; // rdi
  float v17; // ecx
  __m128i v18; // xmm0
  std::initializer_list<float> v19; // rdi
  float v20; // ecx
  std::initializer_list<float> __l; // [rsp+58h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&__l._M_array = this->x_range.start;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(other);
  }
  HIDWORD(__l._M_array) = LODWORD(other->x_range.start);
  M_array_high = (__m128i)HIDWORD(__l._M_array);
  v4._M_array = (std::initializer_list<float>::iterator)&__l;
  v4._M_len = 2LL;
  *(float *)M_array_high.m128i_i32 = std::max<float>(v4);
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(M_array_high));
  if ( *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)res & 7) + 3) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(res);
  }
  res->x_range.start = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->x_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->x_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->x_range.end);
  }
  *(float *)&__l._M_array = this->x_range.end;
  if ( *(_BYTE *)(((unsigned __int64)&other->x_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->x_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->x_range.end);
  }
  HIDWORD(__l._M_array) = LODWORD(other->x_range.end);
  v6 = (__m128i)HIDWORD(__l._M_array);
  v7._M_array = (std::initializer_list<float>::iterator)&__l;
  v7._M_len = 2LL;
  *(float *)v6.m128i_i32 = std::min<float>(v7);
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  if ( *(_BYTE *)(((unsigned __int64)&res->x_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->x_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->x_range.end);
  }
  res->x_range.end = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->y_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y_range);
  }
  *(float *)&__l._M_array = this->y_range.start;
  if ( *(_BYTE *)(((unsigned __int64)&other->y_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->y_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->y_range);
  }
  HIDWORD(__l._M_array) = LODWORD(other->y_range.start);
  v9 = (__m128i)HIDWORD(__l._M_array);
  v10._M_array = (std::initializer_list<float>::iterator)&__l;
  v10._M_len = 2LL;
  *(float *)v9.m128i_i32 = std::max<float>(v10);
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  if ( *(_BYTE *)(((unsigned __int64)&res->y_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->y_range);
  }
  res->y_range.start = v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->y_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y_range.end);
  }
  *(float *)&__l._M_array = this->y_range.end;
  if ( *(_BYTE *)(((unsigned __int64)&other->y_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->y_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->y_range.end);
  }
  HIDWORD(__l._M_array) = LODWORD(other->y_range.end);
  v12 = (__m128i)HIDWORD(__l._M_array);
  v13._M_array = (std::initializer_list<float>::iterator)&__l;
  v13._M_len = 2LL;
  *(float *)v12.m128i_i32 = std::min<float>(v13);
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  if ( *(_BYTE *)(((unsigned __int64)&res->y_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->y_range.end);
  }
  res->y_range.end = v14;
  if ( *(_BYTE *)(((unsigned __int64)&this->z_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z_range);
  }
  *(float *)&__l._M_array = this->z_range.start;
  if ( *(_BYTE *)(((unsigned __int64)&other->z_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->z_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->z_range);
  }
  HIDWORD(__l._M_array) = LODWORD(other->z_range.start);
  v15 = (__m128i)HIDWORD(__l._M_array);
  v16._M_array = (std::initializer_list<float>::iterator)&__l;
  v16._M_len = 2LL;
  *(float *)v15.m128i_i32 = std::max<float>(v16);
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
  if ( *(_BYTE *)(((unsigned __int64)&res->z_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->z_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->z_range);
  }
  res->z_range.start = v17;
  if ( *(_BYTE *)(((unsigned __int64)&this->z_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z_range.end);
  }
  *(float *)&__l._M_array = this->z_range.end;
  if ( *(_BYTE *)(((unsigned __int64)&other->z_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->z_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->z_range.end);
  }
  HIDWORD(__l._M_array) = LODWORD(other->z_range.end);
  v18 = (__m128i)HIDWORD(__l._M_array);
  v19._M_array = (std::initializer_list<float>::iterator)&__l;
  v19._M_len = 2LL;
  *(float *)v18.m128i_i32 = std::min<float>(v19);
  v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
  if ( *(_BYTE *)(((unsigned __int64)&res->z_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->z_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->z_range.end);
  }
  res->z_range.end = v20;
};

// Line 436: range 000000000CC06738-000000000CC06792
bool __cdecl Range3D::Illegal(const Range3D *const this)
{
  return !PlaneLine::Increasing(&this->x_range)
      || !PlaneLine::Increasing(&this->y_range)
      || !PlaneLine::Increasing(&this->z_range);
};

// Line 440: range 000000000CC06794-000000000CC068D5
void __cdecl ToTheMoonQuaternion::ToTheMoonQuaternion(
        ToTheMoonQuaternion *const this,
        float x,
        float y,
        float z,
        float w)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = z;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->w);
  }
  this->w = w;
};

// Line 449: range 000000000CC068D6-000000000CC06DB7
void __cdecl ToTheMoonQuaternion::ToMatrix(const ToTheMoonQuaternion *const this, Matrix3x3 *m)
{
  float x2; // [rsp+10h] [rbp-30h]
  float y2; // [rsp+14h] [rbp-2Ch]
  float z2; // [rsp+18h] [rbp-28h]
  float xx; // [rsp+1Ch] [rbp-24h]
  float yy; // [rsp+20h] [rbp-20h]
  float zz; // [rsp+24h] [rbp-1Ch]
  float xy; // [rsp+28h] [rbp-18h]
  float xz; // [rsp+2Ch] [rbp-14h]
  float yz; // [rsp+30h] [rbp-10h]
  float wx; // [rsp+34h] [rbp-Ch]
  float wy; // [rsp+38h] [rbp-8h]
  float wz; // [rsp+3Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x2 = this->x + this->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y2 = this->y + this->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z2 = this->z + this->z;
  xx = this->x * x2;
  yy = this->y * y2;
  zz = this->z * z2;
  xy = this->x * y2;
  xz = this->x * z2;
  yz = this->y * z2;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  wx = this->w * x2;
  wy = this->w * y2;
  wz = this->w * z2;
  if ( *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)m & 7) + 3) >= *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(m);
  }
  m->m_data[0] = 1.0 - (float)(yy + zz);
  if ( *(_BYTE *)(((unsigned __int64)&m->m_data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_data[1]);
  }
  m->m_data[1] = xy + wz;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_data[2]);
  }
  m->m_data[2] = xz - wy;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_data[3]);
  }
  m->m_data[3] = xy - wz;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_data[4]);
  }
  m->m_data[4] = 1.0 - (float)(xx + zz);
  if ( *(_BYTE *)(((unsigned __int64)&m->m_data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_data[5]);
  }
  m->m_data[5] = yz + wx;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_data[6]);
  }
  m->m_data[6] = xz + wy;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_data[7]);
  }
  m->m_data[7] = yz - wx;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_data[8]);
  }
  m->m_data[8] = 1.0 - (float)(xx + yy);
};

// Line 480: range 000000000CC06DB8-000000000CC06F28
ToTheMoonQuaternion __cdecl ToTheMoonQuaternion::Reverse(const ToTheMoonQuaternion *const this)
{
  float w; // xmm3_4
  float v2; // xmm2_4
  float v3; // xmm4_4
  __int64 v4; // xmm0_8
  __int64 v5; // xmm1_8
  ToTheMoonQuaternion v6; // [rsp+10h] [rbp-20h] BYREF
  ToTheMoonQuaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  w = this->w;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  v2 = -this->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  v3 = -this->y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ToTheMoonQuaternion::ToTheMoonQuaternion(&v6, -this->x, v3, v2, w);
  v4 = *(_QWORD *)&v6.x;
  v5 = *(_QWORD *)&v6.z;
  result.z = *(float *)&v5;
  result.w = *((float *)&v5 + 1);
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  return result;
};

// Line 484: range 000000000CC06F2A-000000000CC07135
void __cdecl ToTheMoonLine::ToTheMoonLine(
        ToTheMoonLine *const this,
        const ToTheMoonVector3 *start,
        const ToTheMoonVector3 *end)
{
  ToTheMoonVector3::ToTheMoonVector3(&this->start);
  ToTheMoonVector3::ToTheMoonVector3(&this->end);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->start.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->start.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)start & 7) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)start + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(start, 12LL);
  }
  this->start = *start;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->end.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->end.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->end, 12LL);
  }
  if ( ((unsigned __int8)end & 7) >= *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)end + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(end, 12LL);
  }
  this->end = *end;
};

// Line 490: range 000000000CC07136-000000000CC07275
void __cdecl ToTheMoonLine::ToTheMoonLine(ToTheMoonLine *const this)
{
  ToTheMoonVector3 v1; // [rsp+14h] [rbp-Ch] BYREF

  ToTheMoonVector3::ToTheMoonVector3(&this->start);
  ToTheMoonVector3::ToTheMoonVector3(&this->end);
  ToTheMoonVector3::ToTheMoonVector3(&v1);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->start.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->start.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  this->start = v1;
  ToTheMoonVector3::ToTheMoonVector3(&v1);
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->end.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->end.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->end, 12LL);
  }
  this->end = v1;
};

// Line 496: range 000000000CC07276-000000000CC0730F
void __cdecl AxisComparer::AxisComparer(AxisComparer *const this, Axis axis, bool increasing)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->axis = axis;
  if ( *(_BYTE *)(((unsigned __int64)&this->increasing >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->increasing >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->increasing);
  }
  this->increasing = increasing;
};

// Line 503: range 000000000CC07310-000000000CC07799
bool __cdecl AxisComparer::operator()(AxisComparer *const this, ToTheMoonVector3 *p1, ToTheMoonVector3 *p2)
{
  Axis axis; // eax
  double v4; // xmm0_8
  double v6; // xmm0_8
  double v7; // xmm0_8
  Axis v8; // eax
  float x; // xmm1_4
  float y; // xmm1_4
  float z; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)&this->increasing >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->increasing >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->increasing);
  }
  if ( this->increasing )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    axis = this->axis;
    if ( this->axis == Z )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p1->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p1->z);
      }
      *(float *)&v7 = p1->z;
      if ( *(_BYTE *)(((unsigned __int64)&p2->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->z >> 3) + 0x7FFF8000) )
      {
        v7 = __asan_report_load4(&p2->z);
      }
      return *(float *)&v7 > p2->z;
    }
    else
    {
      if ( axis > Z )
        return 0;
      if ( axis )
      {
        if ( axis != Y )
          return 0;
        if ( *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&p1->y);
        }
        *(float *)&v6 = p1->y;
        if ( *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) )
        {
          v6 = __asan_report_load4(&p2->y);
        }
        return *(float *)&v6 > p2->y;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p1);
        }
        *(float *)&v4 = p1->x;
        if ( *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) )
        {
          v4 = __asan_report_load4(p2);
        }
        return *(float *)&v4 > p2->x;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    v8 = this->axis;
    if ( this->axis != Z )
    {
      if ( v8 <= Z )
      {
        if ( v8 == X )
        {
          if ( *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p1);
          }
          x = p1->x;
          if ( *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p2);
          }
          return p2->x > x;
        }
        if ( v8 == Y )
        {
          if ( *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&p1->y);
          }
          y = p1->y;
          if ( *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)p2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&p2->y);
          }
          return p2->y > y;
        }
      }
      return 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&p1->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p1->z);
    }
    z = p1->z;
    if ( *(_BYTE *)(((unsigned __int64)&p2->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p2->z);
    }
    return p2->z > z;
  }
};

// Line 539: range 000000000CC0779A-000000000CC07CBF
bool __cdecl AxisComparer::operator()(
        AxisComparer *const this,
        std::shared_ptr<ToTheMoonVector3> *p_p1,
        std::shared_ptr<ToTheMoonVector3> *p_p2)
{
  Axis axis; // eax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  float *p_x; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  float *v7; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  float *p_y; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  float *v12; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  float *p_z; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  float *v16; // rax
  Axis v17; // eax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  float *v19; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  float *v21; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  float *v23; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  float *v25; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  float *v27; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  float *v29; // rax
  float v30; // [rsp+4h] [rbp-1Ch]
  float y; // [rsp+4h] [rbp-1Ch]
  float z; // [rsp+4h] [rbp-1Ch]
  float v33; // [rsp+4h] [rbp-1Ch]
  float v34; // [rsp+4h] [rbp-1Ch]
  float v35; // [rsp+4h] [rbp-1Ch]

  if ( *(_BYTE *)(((unsigned __int64)&this->increasing >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->increasing >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->increasing);
  }
  if ( this->increasing )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    axis = this->axis;
    if ( this->axis == Z )
    {
      v13 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p1);
      p_z = &v13->z;
      if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_z);
      }
      z = v13->z;
      v15 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p2);
      v16 = &v15->z;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      return z > v15->z;
    }
    else
    {
      if ( axis > Z )
        return 0;
      if ( axis )
      {
        if ( axis != Y )
          return 0;
        v9 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p1);
        p_y = &v9->y;
        if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_y);
        }
        y = v9->y;
        v11 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p2);
        v12 = &v11->y;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        return y > v11->y;
      }
      else
      {
        v4 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p1);
        p_x = &v4->x;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v4);
        }
        v30 = *p_x;
        v6 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p2);
        v7 = &v6->x;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        return v30 > *v7;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    v17 = this->axis;
    if ( this->axis != Z )
    {
      if ( v17 <= Z )
      {
        if ( v17 == X )
        {
          v18 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p1);
          v19 = &v18->x;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          v33 = *v19;
          v20 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p2);
          v21 = &v20->x;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          return *v21 > v33;
        }
        if ( v17 == Y )
        {
          v22 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p1);
          v23 = &v22->y;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v23);
          }
          v34 = v22->y;
          v24 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p2);
          v25 = &v24->y;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          return v24->y > v34;
        }
      }
      return 0;
    }
    v26 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p1);
    v27 = &v26->z;
    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v27);
    }
    v35 = v26->z;
    v28 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_p2);
    v29 = &v28->z;
    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v29);
    }
    return v28->z > v35;
  }
};

// Line 573: range 000000000CC07CC0-000000000CC07DC8
void __cdecl PointDistanceComparer::PointDistanceComparer(
        PointDistanceComparer *const this,
        const ToTheMoonVector3 *referPos)
{
  ToTheMoonVector3::ToTheMoonVector3(&this->referPos);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->referPos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->referPos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)referPos & 7) >= *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&referPos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)referPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&referPos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(referPos, 12LL);
  }
  this->referPos = *referPos;
};

// Line 579: range 000000000CC07DCA-000000000CC07E11
bool __cdecl PointDistanceComparer::operator()(
        PointDistanceComparer *const this,
        ToTheMoonVector3 *p1,
        ToTheMoonVector3 *p2)
{
  float v4; // [rsp+4h] [rbp-1Ch]

  v4 = ToTheMoonVector3::EuclideanDistance(&this->referPos, p1);
  return ToTheMoonVector3::EuclideanDistance(&this->referPos, p2) > v4;
};

// Line 583: range 000000000CC07E12-000000000CC07F24
void __cdecl LineDistanceComparer::LineDistanceComparer(
        LineDistanceComparer *const this,
        const ToTheMoonLine *referLine)
{
  __int64 v2; // rdx

  ToTheMoonLine::ToTheMoonLine(&this->referLine);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->referLine.end.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->referLine.end.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( ((unsigned __int8)referLine & 7) >= *(_BYTE *)(((unsigned __int64)referLine >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)referLine >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&referLine->end.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)referLine + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&referLine->end.z + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load_n(referLine, 24LL);
  }
  v2 = *(_QWORD *)&referLine->start.z;
  *(_QWORD *)&this->referLine.start.x = *(_QWORD *)&referLine->start.x;
  *(_QWORD *)&this->referLine.start.z = v2;
  *(_QWORD *)&this->referLine.end.y = *(_QWORD *)&referLine->end.y;
};

// Line 589: range 000000000CC07F26-000000000CC07F92
bool __cdecl LineDistanceComparer::operator()(
        LineDistanceComparer *const this,
        ToTheMoonVector3 *p1,
        ToTheMoonVector3 *p2)
{
  float v4; // [rsp+4h] [rbp-1Ch]

  if ( !p1 || !p2 )
    return 0;
  v4 = Geometry::PointDistanceToLineSegment(p1, &this->referLine.start, &this->referLine.end);
  return Geometry::PointDistanceToLineSegment(p2, &this->referLine.start, &this->referLine.end) > v4;
};

// Line 597: range 000000000CC07F94-000000000CC08439
void __cdecl ComplexPlaneDistanceComparer::ComplexPlaneDistanceComparer(
        ComplexPlaneDistanceComparer *const this,
        const ToTheMoonVector3 *normal,
        const ToTheMoonVector3 *point,
        std::shared_ptr<ToTheMoonLine> *p_refLine)
{
  unsigned __int64 n; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  ToTheMoonVector3::ToTheMoonVector3(&this->normal);
  ToTheMoonVector3::ToTheMoonVector3(&this->point);
  ToTheMoonLine::ToTheMoonLine(&this->refLine);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->normal.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->normal.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)normal & 7) >= *(_BYTE *)(((unsigned __int64)normal >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)normal >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&normal->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)normal + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&normal->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(normal, 12LL);
  }
  this->normal = *normal;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->point.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->point.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->point, 12LL);
  }
  if ( ((unsigned __int8)point & 7) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&point->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)point + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&point->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(point, 12LL);
  }
  this->point = *point;
  if ( std::operator==<ToTheMoonLine>(p_refLine, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/Utils/math.cpp",
      "ComplexPlaneDistanceComparer",
      602);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      &v8,
      (const char (*)[58])"[ComplexPlaneDistanceComparer] refLine should not be null");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    n = (unsigned __int64)std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_refLine);
    if ( (((unsigned __int8)this + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&this->refLine >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->refLine >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->refLine.start.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->refLine.start.z + 3) >> 3)
                                                        + 0x7FFF8000) )
    {
      n = __asan_report_store_n(&this->refLine, 12LL);
    }
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 12LL);
    }
    *(_QWORD *)&this->refLine.start.x = *(_QWORD *)n;
    this->refLine.start.z = *(float *)(n + 8);
    v5 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_refLine);
    if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->refLine.end >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->refLine.end >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->refLine.end.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->refLine.end.z + 3) >> 3)
                                                        + 0x7FFF8000) )
    {
      v5 = (std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&this->refLine.end, 12LL);
    }
    if ( (((unsigned __int8)v5 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v5->end >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&v5->end >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->end.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->end.z + 3) >> 3) + 0x7FFF8000) )
    {
      v5 = (std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load_n(&v5->end, 12LL);
    }
    this->refLine.end = v5->end;
  }
};

// Line 611: range 000000000CC0843A-000000000CC08605
bool __cdecl ComplexPlaneDistanceComparer::operator()(
        ComplexPlaneDistanceComparer *const this,
        ToTheMoonVector3 *p1,
        ToTheMoonVector3 *p2)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm0
  float *v6; // rax
  float *v7; // rdx
  __m128i v8; // xmm0
  float *v9; // rax
  float *v10; // rdx
  float __a; // [rsp+28h] [rbp-18h] BYREF
  float __b; // [rsp+2Ch] [rbp-14h] BYREF
  float dis1; // [rsp+30h] [rbp-10h]
  float dis2; // [rsp+34h] [rbp-Ch]
  float refDis1; // [rsp+38h] [rbp-8h]

  if ( !p1 || !p2 )
    return 0;
  *(float *)v3.m128i_i32 = Geometry::PointDistanceToPlane(p1, &this->normal, &this->point);
  dis1 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  *(float *)v3.m128i_i32 = Geometry::PointDistanceToPlane(p2, &this->normal, &this->point);
  dis2 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v5 = _mm_cvtsi32_si128(LODWORD(dis1));
  if ( !Algebra::IsClose(*(float *)v5.m128i_i32, dis2) )
    return dis2 > dis1;
  *(float *)v5.m128i_i32 = ToTheMoonVector3::EuclideanDistance(&this->refLine.end, p1);
  LODWORD(__b) = _mm_cvtsi128_si32(v5);
  *(float *)v5.m128i_i32 = ToTheMoonVector3::EuclideanDistance(&this->refLine.start, p1);
  LODWORD(__a) = _mm_cvtsi128_si32(v5);
  v6 = (float *)std::min<float>(&__a, &__b);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  refDis1 = *v7;
  v8 = (__m128i)LODWORD(refDis1);
  *(float *)v8.m128i_i32 = ToTheMoonVector3::EuclideanDistance(&this->refLine.end, p2);
  LODWORD(__b) = _mm_cvtsi128_si32(v8);
  *(float *)v8.m128i_i32 = ToTheMoonVector3::EuclideanDistance(&this->refLine.start, p2);
  LODWORD(__a) = _mm_cvtsi128_si32(v8);
  v9 = (float *)std::min<float>(&__a, &__b);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  return *v10 > refDis1;
};
