// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/FloatConversion.h

// Line 27: range 000000000CCAF70B-000000000CCAF852
float __fastcall FloatMin(float a, float b)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float result; // xmm0_4
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 4 a:26 64 4 4 b:26";
  *(_QWORD *)(v2 + 16) = FloatMin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(float *)(v2 + 48) = a;
  *(float *)(v2 + 64) = b;
  v5 = (float *)std::min<float>((const float *)(v2 + 48), (const float *)(v2 + 64));
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  result = *v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 32: range 000000000CCAF853-000000000CCAF99A
float __fastcall FloatMax(float a, float b)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float result; // xmm0_4
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 4 a:31 64 4 4 b:31";
  *(_QWORD *)(v2 + 16) = FloatMax;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(float *)(v2 + 48) = a;
  *(float *)(v2 + 64) = b;
  v5 = (float *)std::max<float>((const float *)(v2 + 48), (const float *)(v2 + 64));
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  result = *v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 37: range 000000000CCAF99B-000000000CCAF9D1
float __cdecl FloatClamp(float v, float mn, float mx)
{
  float v3; // xmm0_4

  v3 = FloatMax(v, mn);
  return FloatMin(v3, mx);
};

// Line 42: range 000000000CCAF9D2-000000000CCAF9FD
float __cdecl Abs(float v)
{
  if ( v < 0.0 )
    return -v;
  return v;
};

// Line 101: range 000000000CCAF9FE-000000000CCAFA36
int __cdecl FloorfToInt(float f)
{
  if ( f < 0.0 )
    return (int)(float)(f - 0.99999994);
  else
    return (int)f;
};

// Line 113: range 000000000CCAFA37-000000000CCAFA51
float __cdecl Floorf(float f)
{
  return std::floor(f);
};

// Line 141: range 000000000CCAFA52-000000000CCAFA6C
float __cdecl Ceilf(float f)
{
  return std::ceil(f);
};

// Line 243: range 000000000CCAFA6D-000000000CCAFAB3
bool __cdecl CompareApproximately(float f0, float f1, float epsilon)
{
  __m128i v3; // xmm0

  v3 = _mm_cvtsi32_si128(COERCE_UNSIGNED_INT(f0 - f1));
  *(float *)v3.m128i_i32 = Abs(*(float *)v3.m128i_i32);
  return epsilon >= COERCE_FLOAT(_mm_cvtsi128_si32(v3));
};

// Line 258: range 000000000CCAFAB4-000000000CCAFBD2
float __cdecl CopySignf(float x, float y)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // rax
  float result; // xmm0_4
  char v6[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 5 u:267 48 4 6 u0:267 64 4 6 u1:267";
  *(_QWORD *)(v2 + 16) = CopySignf;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(float *)(v2 + 48) = x;
  *(float *)(v2 + 64) = y;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 64) & 0x80000000 | *(_DWORD *)(v2 + 48) & 0x7FFFFFFF;
  result = *(float *)(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 335: range 000000000CD7DF67-000000000CD7DFBF
float __cdecl Sqr<float>(const float *t)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(t);
  }
  return *t * *t;
};

// Line 344: range 000000000CCAFBD3-000000000CCAFC01
float __cdecl Deg2Rad(float deg)
{
  return 3.1415927 * (float)((float)(deg / 360.0) + (float)(deg / 360.0));
};

// Line 368: range 000000000CCAFC02-000000000CCAFC39
float __cdecl Lerp(float from, float to, float t)
{
  return (float)((float)(1.0 - t) * from) + (float)(to * t);
};

// Line 373: range 000000000CCAFC3A-000000000CCAFC58
bool __cdecl IsNAN(float value)
{
  return 0LL;
};

// Line 410: range 000000000CCAFC59-000000000CCAFCC1
bool __cdecl IsFinite(const float *value)
{
  UnionTuple<float,unsigned int> *v1; // rax
  unsigned int *v2; // rdx

  v1 = (UnionTuple<float,unsigned int> *)AliasAs<unsigned int,float>(value);
  v2 = (unsigned int *)v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  return (*v2 & 0x7F800000) != 2139095040;
};

// Line 423: range 000000000CCAFCC2-000000000CCAFCEB
float __cdecl InvSqrt(float p)
{
  return 1.0 / std::sqrt(p);
};

// Line 424: range 000000000CCAFCEC-000000000CCAFD06
float __cdecl Sqrt(float p)
{
  return std::sqrt(p);
};

// Line 561: range 000000000CCAFD07-000000000CCAFD21
float __cdecl SqrtImpl(float f)
{
  return std::sqrt(f);
};

// Line 566: range 000000000CCAFD22-000000000CCAFD3C
float __cdecl Sin(float f)
{
  return sinf(f);
};

// Line 576: range 000000000CCAFD3D-000000000CCAFD57
float __cdecl Cos(float f)
{
  return cosf(f);
};

// Line 644: range 000000000CCAFD58-000000000CCAFD62
void __cdecl FloatToHalfConverter::FloatToHalfConverter(FloatToHalfConverter *const this)
{
  ;
};
