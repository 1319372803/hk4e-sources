// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Vector3.cpp

// Line 20: range 000000000CC183F4-000000000CC186AF
// local variable allocation has failed, the output may be wrong!
void __cdecl OrthoNormalizeFast(Vector3f *inU, Vector3f *inV, Vector3f *inW)
{
  __m128i v3; // xmm1
  __int64 v4; // xmm0_8
  __int64 v5; // xmm0_8
  __int64 v6; // rdx
  __m128i v7; // xmm0 OVERLAPPED
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float dot0; // [rsp+24h] [rbp-2Ch]
  Vector3f lhs; // [rsp+2Ch] [rbp-24h] BYREF
  Vector3f rhs; // [rsp+38h] [rbp-18h] BYREF
  Vector3f v15; // [rsp+44h] [rbp-Ch] BYREF

  if ( ((unsigned __int8)inU & 7) >= *(_BYTE *)(((unsigned __int64)inU >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)inU >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&inU->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)inU + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inU->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(inU, 12LL);
  }
  *(Vector3f *)((char *)&v3 - 8) = Normalize(inU);
  *(_QWORD *)&inU->x = v4;
  LODWORD(inU->z) = v3.m128i_i32[0];
  Dot(inU, inV);
  v15 = operator*(COERCE_CONST_FLOAT(_mm_cvtsi128_si32(v3)), inU);
  Vector3f::operator-=(inV, &v15);
  if ( ((unsigned __int8)inV & 7) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&inV->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)inV + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inV->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(inV, 12LL);
  }
  *(Vector3f *)((char *)&v3 - 8) = Normalize(inV);
  v6 = v5;
  v7 = v3;
  *(_QWORD *)&inV->x = v6;
  LODWORD(inV->z) = v3.m128i_i32[0];
  Dot(inV, inW);
  *(float *)v7.m128i_i32 = Dot(inU, inW);
  dot0 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  *(Vector3f *)v7.m128i_i8 = operator*(COERCE_CONST_FLOAT(_mm_cvtsi128_si32(v3)), inV);
  *(_QWORD *)&rhs.x = v7.m128i_i64[0];
  rhs.z = v8;
  *(Vector3f *)v7.m128i_i8 = operator*(dot0, inU);
  *(_QWORD *)&lhs.x = v7.m128i_i64[0];
  lhs.z = v9;
  *(Vector3f *)v7.m128i_i8 = operator+(&lhs, &rhs);
  *(_QWORD *)&v15.x = v7.m128i_i64[0];
  v15.z = v10;
  Vector3f::operator-=(inW, &v15);
  if ( ((unsigned __int8)inW & 7) >= *(_BYTE *)(((unsigned __int64)inW >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)inW >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&inW->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)inW + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inW->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(inW, 12LL);
  }
  *inW = Normalize(inW);
};

// Line 37: range 000000000CC186B0-000000000CC188A9
// local variable allocation has failed, the output may be wrong!
void __cdecl OrthoNormalize(Vector3f *inU, Vector3f *inV)
{
  __m128i v2; // xmm0
  __int128 v3; // xmm1
  __m128i v4; // xmm0
  __int64 v5; // xmm0_8
  __int64 v6; // rax
  __m128i v7; // xmm0
  float mag; // [rsp+1Ch] [rbp-14h]
  float maga; // [rsp+1Ch] [rbp-14h]
  Vector3f v10; // [rsp+24h] [rbp-Ch] BYREF

  *(float *)v2.m128i_i32 = Magnitude(inU);
  mag = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( mag <= 0.0000099999997 )
  {
    v3 = 0LL;
    v4 = (__m128i)0x3F800000u;
    Vector3f::Vector3f(&v10, 1.0, 0.0, 0.0);
    if ( ((unsigned __int8)inU & 7) >= *(_BYTE *)(((unsigned __int64)inU >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)inU >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&inU->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)inU + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inU->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(inU, 12LL);
    }
    *inU = v10;
  }
  else
  {
    v4 = _mm_cvtsi32_si128(LODWORD(mag));
    Vector3f::operator/=(inU, *(float *)v4.m128i_i32);
  }
  *(float *)v4.m128i_i32 = Dot(inU, inV);
  *(Vector3f *)((char *)&v3 - 8) = operator*(COERCE_CONST_FLOAT(_mm_cvtsi128_si32(v4)), inU);
  v6 = v5;
  v7 = (__m128i)v3;
  *(_QWORD *)&v10.x = v6;
  LODWORD(v10.z) = v3;
  Vector3f::operator-=(inV, &v10);
  *(float *)v7.m128i_i32 = Magnitude(inV);
  maga = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  if ( maga >= 0.0000099999997 )
  {
    Vector3f::operator/=(inV, maga);
  }
  else
  {
    if ( ((unsigned __int8)inV & 7) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&inV->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)inV + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inV->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(inV, 12LL);
    }
    *inV = OrthoNormalVectorFast(inU);
  }
};

// Line 56: range 000000000CC188AA-000000000CC18C24
// local variable allocation has failed, the output may be wrong!
void __cdecl OrthoNormalize(Vector3f *inU, Vector3f *inV, Vector3f *inW)
{
  __m128i v3; // xmm0
  __int128 v4; // xmm1
  __m128i v5; // xmm0
  __int64 v6; // xmm0_8
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // xmm0_8
  __int64 v13; // xmm0_8
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __m128i v16; // xmm0
  float mag; // [rsp+20h] [rbp-30h]
  float maga; // [rsp+20h] [rbp-30h]
  float magb; // [rsp+20h] [rbp-30h]
  float dot0; // [rsp+24h] [rbp-2Ch]
  float dot1; // [rsp+28h] [rbp-28h]
  Vector3f lhs; // [rsp+2Ch] [rbp-24h] BYREF
  Vector3f rhs; // [rsp+38h] [rbp-18h] BYREF
  Vector3f v25; // [rsp+44h] [rbp-Ch] BYREF

  *(float *)v3.m128i_i32 = Magnitude(inU);
  mag = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( mag <= 0.0000099999997 )
  {
    v4 = 0LL;
    v5 = (__m128i)0x3F800000u;
    Vector3f::Vector3f(&v25, 1.0, 0.0, 0.0);
    if ( ((unsigned __int8)inU & 7) >= *(_BYTE *)(((unsigned __int64)inU >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)inU >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&inU->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)inU + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inU->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(inU, 12LL);
    }
    *inU = v25;
  }
  else
  {
    v5 = _mm_cvtsi32_si128(LODWORD(mag));
    Vector3f::operator/=(inU, *(float *)v5.m128i_i32);
  }
  *(float *)v5.m128i_i32 = Dot(inU, inV);
  *(Vector3f *)((char *)&v4 - 8) = operator*(COERCE_CONST_FLOAT(_mm_cvtsi128_si32(v5)), inU);
  v7 = v6;
  v8 = (__m128i)v4;
  *(_QWORD *)&v25.x = v7;
  LODWORD(v25.z) = v4;
  Vector3f::operator-=(inV, &v25);
  *(float *)v8.m128i_i32 = Magnitude(inV);
  maga = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  if ( maga <= 0.0000099999997 )
  {
    if ( ((unsigned __int8)inV & 7) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&inV->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)inV + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inV->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(inV, 12LL);
    }
    *(Vector3f *)((char *)&v4 - 8) = OrthoNormalVectorFast(inU);
    v11 = v10;
    v9 = (__m128i)v4;
    *(_QWORD *)&inV->x = v11;
    LODWORD(inV->z) = v4;
  }
  else
  {
    v9 = _mm_cvtsi32_si128(LODWORD(maga));
    Vector3f::operator/=(inV, *(float *)v9.m128i_i32);
  }
  *(float *)v9.m128i_i32 = Dot(inV, inW);
  dot1 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  *(float *)v9.m128i_i32 = Dot(inU, inW);
  dot0 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  *(Vector3f *)((char *)&v4 - 8) = operator*(dot1, inV);
  *(_QWORD *)&rhs.x = v12;
  LODWORD(rhs.z) = v4;
  *(Vector3f *)((char *)&v4 - 8) = operator*(dot0, inU);
  *(_QWORD *)&lhs.x = v13;
  LODWORD(lhs.z) = v4;
  *(Vector3f *)((char *)&v4 - 8) = operator+(&lhs, &rhs);
  v15 = v14;
  v16 = (__m128i)v4;
  *(_QWORD *)&v25.x = v15;
  LODWORD(v25.z) = v4;
  Vector3f::operator-=(inW, &v25);
  *(float *)v16.m128i_i32 = Magnitude(inW);
  magb = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  if ( magb <= 0.0000099999997 )
  {
    if ( ((unsigned __int8)inW & 7) >= *(_BYTE *)(((unsigned __int64)inW >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)inW >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&inW->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)inW + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&inW->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(inW, 12LL);
    }
    *inW = Cross(inU, inV);
  }
  else
  {
    Vector3f::operator/=(inW, magb);
  }
};

// Line 87: range 000000000CC18C25-000000000CC190B1
Vector3f __cdecl OrthoNormalVectorFast(const Vector3f *n)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  __int64 v7; // xmm0_8
  __int64 v8; // [rsp+8h] [rbp-A8h]
  float k_0; // [rsp+38h] [rbp-78h]
  float k; // [rsp+40h] [rbp-70h]
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 6 res:88";
  *(_QWORD *)(v1 + 16) = OrthoNormalVectorFast;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  Vector3f::Vector3f((Vector3f *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&n->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)n + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&n->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&n->z);
  }
  if ( Abs(n->z) <= 0.70710677 )
  {
    if ( *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)n & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(n);
    }
    v5 = n->x * n->x;
    if ( *(_BYTE *)(((unsigned __int64)&n->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)n + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&n->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&n->y);
    }
    k_0 = 1.0 / Sqrt((float)(n->y * n->y) + v5);
    if ( *(_BYTE *)(((unsigned __int64)&n->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)n + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&n->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&n->y);
    }
    *(float *)(v1 + 32) = (float)-n->y * k_0;
    if ( *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)n & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(n);
    }
    *(float *)(v1 + 36) = n->x * k_0;
    *(_DWORD *)(v1 + 40) = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&n->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)n + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&n->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&n->y);
    }
    v4 = n->y * n->y;
    if ( *(_BYTE *)(((unsigned __int64)&n->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)n + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&n->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&n->z);
    }
    k = 1.0 / Sqrt((float)(n->z * n->z) + v4);
    *(_DWORD *)(v1 + 32) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&n->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)n + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&n->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&n->z);
    }
    *(float *)(v1 + 36) = (float)-n->z * k;
    if ( *(_BYTE *)(((unsigned __int64)&n->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)n + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&n->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&n->y);
    }
    *(float *)(v1 + 40) = n->y * k;
  }
  v8 = *(_QWORD *)(v1 + 32);
  v6 = *(float *)(v1 + 40);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v7 = v8;
  result.x = *(float *)&v7;
  result.y = *((float *)&v7 + 1);
  result.z = v6;
  return result;
};

// Line 144: range 000000000CC190B2-000000000CC193B9
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl MoveTowards(const Vector3f *lhs, const Vector3f *rhs, float clampedDistance)
{
  __m128i v3; // xmm1
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // xmm0_8
  __m128i v8; // xmm0
  float z; // xmm1_4
  __int64 v10; // xmm0_8
  __int64 v11; // [rsp+8h] [rbp-C8h]
  float sqrDelta; // [rsp+40h] [rbp-90h]
  float deltaMag; // [rsp+48h] [rbp-88h]
  Vector3f inV; // [rsp+4Ch] [rbp-84h] BYREF
  Vector3f v16; // [rsp+58h] [rbp-78h] BYREF
  Vector3f v17; // [rsp+64h] [rbp-6Ch]
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 12 9 delta:145";
  *(_QWORD *)(v4 + 16) = MoveTowards;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202177536;
  *(Vector3f *)((char *)&v3 - 8) = operator-(rhs, lhs);
  *(_QWORD *)(v4 + 32) = v7;
  *(_DWORD *)(v4 + 40) = v3.m128i_i32[0];
  SqrMagnitude((const Vector3f *)(v4 + 32));
  sqrDelta = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( sqrDelta <= (float)(clampedDistance * clampedDistance) )
  {
    if ( ((unsigned __int8)rhs & 7) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&rhs->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)rhs + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rhs->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(rhs, 12LL);
    }
    v17 = *rhs;
  }
  else
  {
    v8 = _mm_cvtsi32_si128(LODWORD(sqrDelta));
    *(float *)v8.m128i_i32 = Sqrt(*(float *)v8.m128i_i32);
    deltaMag = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    if ( deltaMag <= 0.0000099999997 )
    {
      if ( ((unsigned __int8)lhs & 7) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&lhs->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)lhs + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&lhs->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(lhs, 12LL);
      }
      v17 = *lhs;
    }
    else
    {
      inV = operator/((const Vector3f *)(v4 + 32), deltaMag);
      v16 = operator*(&inV, clampedDistance);
      v17 = operator+(lhs, &v16);
    }
  }
  v11 = *(_QWORD *)&v17.x;
  z = v17.z;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v10 = v11;
  result.x = *(float *)&v10;
  result.y = *((float *)&v10 + 1);
  result.z = z;
  return result;
};

// Line 161: range 000000000CC193BA-000000000CC195A7
float __fastcall ClampedMove(float lhs, float rhs, float clampedDelta)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  float *v6; // rax
  float *v7; // rdx
  float result; // xmm0_4
  float *v9; // rax
  float *v10; // rdx
  float __a; // [rsp+1Ch] [rbp-84h] BYREF
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 delta:162 64 4 16 clampedDelta:160";
  *(_QWORD *)(v3 + 16) = ClampedMove;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(float *)(v3 + 64) = clampedDelta;
  *(float *)(v3 + 48) = rhs - lhs;
  if ( *(float *)(v3 + 48) <= 0.0 )
  {
    __a = -*(float *)(v3 + 48);
    v9 = (float *)std::min<float>(&__a, (const float *)(v3 + 64));
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    result = lhs - *v10;
  }
  else
  {
    v6 = (float *)std::min<float>((const float *)(v3 + 48), (const float *)(v3 + 64));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    result = *v7 + lhs;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 170: range 000000000CC195A8-000000000CC19B2F
// local variable allocation has failed, the output may be wrong!
__m128i __fastcall RotateTowards(const Vector3f *lhs, const Vector3f *rhs, float angleMove, __m128i magnitudeMove)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __m128i v7; // xmm0
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8
  float v10; // xmm0_4
  __m128i v11; // xmm0 OVERLAPPED
  float v12; // xmm1_4
  int v13; // xmm1_4
  float *v14; // rax
  float *v15; // rdx
  float v16; // xmm0_4
  __m128i v18[2]; // [rsp+8h] [rbp-198h] BYREF
  float magnitudeMovea; // [rsp+28h] [rbp-178h]
  unsigned int v20; // [rsp+2Ch] [rbp-174h]
  const Vector3f *rhsa; // [rsp+30h] [rbp-170h]
  const Vector3f *lhsa; // [rsp+38h] [rbp-168h]
  float lhsMag; // [rsp+48h] [rbp-158h]
  float rhsMag; // [rsp+4Ch] [rbp-154h]
  float dot; // [rsp+50h] [rbp-150h]
  Vector3f inV; // [rsp+54h] [rbp-14Ch] BYREF
  char v27[320]; // [rsp+60h] [rbp-140h] BYREF

  lhsa = lhs;
  rhsa = rhs;
  v20 = LODWORD(angleMove);
  magnitudeMovea = *(float *)magnitudeMove.m128i_i32;
  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 9 angle:199 64 4 13 angleMove:169 80 12 11 lhsNorm:177 112 12 11 rhsNorm:178 144 12 8 axi"
                        "s:200 176 12 11 rotated:203 208 36 5 m:201";
  *(_QWORD *)(v4 + 16) = RotateTowards;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862722] = 0x4000000;
  v6[536862723] = 62194;
  v6[536862723] = 0x4000000;
  v6[536862724] = 62194;
  v6[536862724] = 0x4000000;
  v6[536862725] = 62194;
  v6[536862725] = 0x4000000;
  v6[536862726] = 62194;
  v6[536862727] = -217841664;
  v6[536862728] = -202116109;
  v7 = (__m128i)v20;
  *(_DWORD *)(v4 + 64) = v20;
  *(float *)v7.m128i_i32 = Magnitude(lhsa);
  lhsMag = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  *(float *)v7.m128i_i32 = Magnitude(rhsa);
  rhsMag = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  if ( lhsMag <= 0.0000099999997 )
    goto LABEL_12;
  if ( rhsMag <= 0.0000099999997 )
    goto LABEL_12;
  *(Vector3f *)((char *)&magnitudeMove - 8) = operator/(lhsa, lhsMag);
  *(_QWORD *)(v4 + 80) = v8;
  *(_DWORD *)(v4 + 88) = magnitudeMove.m128i_i32[0];
  *(Vector3f *)((char *)&magnitudeMove - 8) = operator/(rhsa, rhsMag);
  *(_QWORD *)(v4 + 112) = v9;
  *(_DWORD *)(v4 + 120) = magnitudeMove.m128i_i32[0];
  Dot((const Vector3f *)(v4 + 80), (const Vector3f *)(v4 + 112));
  dot = COERCE_FLOAT(_mm_cvtsi128_si32(magnitudeMove));
  if ( dot > 0.99998999 )
  {
LABEL_12:
    inV = MoveTowards(lhsa, rhsa, magnitudeMovea);
  }
  else if ( dot >= -0.99998999 )
  {
    v11 = _mm_cvtsi32_si128(LODWORD(dot));
    *(float *)v11.m128i_i32 = std::acos(*(float *)v11.m128i_i32);
    *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v11);
    *(Vector3f *)v11.m128i_i8 = Cross((const Vector3f *)(v4 + 80), (const Vector3f *)(v4 + 112));
    *(_QWORD *)&inV.x = v11.m128i_i64[0];
    inV.z = v12;
    *(Vector3f *)v11.m128i_i8 = Normalize(&inV);
    *(_QWORD *)(v4 + 144) = v11.m128i_i64[0];
    *(_DWORD *)(v4 + 152) = v13;
    Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v4 + 208));
    v14 = (float *)std::min<float>((const float *)(v4 + 64), (const float *)(v4 + 48));
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    Matrix3x3f::SetAxisAngle((Matrix3x3f *const)(v4 + 208), (const Vector3f *)(v4 + 144), *v15);
    *(Vector3f *)(v4 + 176) = Matrix3x3f::MultiplyPoint3(
                                (const Matrix3x3f *const)(v4 + 208),
                                (const Vector3f *)(v4 + 80));
    v16 = ClampedMove(lhsMag, rhsMag, magnitudeMovea);
    Vector3f::operator*=((Vector3f *const)(v4 + 176), v16);
    inV = *(Vector3f *)(v4 + 176);
  }
  else
  {
    *(Vector3f *)(v4 + 144) = OrthoNormalVectorFast((const Vector3f *)(v4 + 80));
    Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v4 + 208));
    Matrix3x3f::SetAxisAngle((Matrix3x3f *const)(v4 + 208), (const Vector3f *)(v4 + 144), *(float *)(v4 + 64));
    *(Vector3f *)(v4 + 176) = Matrix3x3f::MultiplyPoint3(
                                (const Matrix3x3f *const)(v4 + 208),
                                (const Vector3f *)(v4 + 80));
    v10 = ClampedMove(lhsMag, rhsMag, magnitudeMovea);
    Vector3f::operator*=((Vector3f *const)(v4 + 176), v10);
    inV = *(Vector3f *)(v4 + 176);
  }
  v18[0].m128i_i64[0] = *(_QWORD *)&inV.x;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return _mm_loadl_epi64(v18);
};

// Line 216: range 000000000CC19B30-000000000CC1A03C
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl Slerp(const Vector3f *lhs, const Vector3f *rhs, float t)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __int64 v8; // xmm0_8
  int v9; // xmm1_4
  float z; // xmm1_4
  __int64 v11; // xmm0_8
  float lhsMag; // [rsp+40h] [rbp-120h]
  float rhsMag; // [rsp+44h] [rbp-11Ch]
  float lerpedMagnitude; // [rsp+48h] [rbp-118h]
  float dot; // [rsp+4Ch] [rbp-114h]
  float angle; // [rsp+50h] [rbp-110h]
  Vector3f v18; // [rsp+54h] [rbp-10Ch]
  char v19[256]; // [rsp+60h] [rbp-100h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 12 8 axis:245 80 12 11 lhsNorm:246 112 12 11 slerped:252 144 36 5 m:250";
  *(_QWORD *)(v3 + 16) = Slerp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = 0x4000000;
  v5[536862722] = 62194;
  v5[536862722] = 0x4000000;
  v5[536862723] = 62194;
  v5[536862723] = 0x4000000;
  v5[536862724] = 62194;
  v5[536862725] = -217841664;
  v5[536862726] = -202116109;
  *(float *)v6.m128i_i32 = Magnitude(lhs);
  lhsMag = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  *(float *)v6.m128i_i32 = Magnitude(rhs);
  rhsMag = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  if ( lhsMag >= 0.0000099999997
    && rhsMag >= 0.0000099999997
    && (v7 = _mm_cvtsi32_si128(LODWORD(lhsMag)),
        *(float *)v7.m128i_i32 = Lerp(*(float *)v7.m128i_i32, rhsMag, t),
        lerpedMagnitude = COERCE_FLOAT(_mm_cvtsi128_si32(v7)),
        dot = Dot(lhs, rhs) / (float)(lhsMag * rhsMag),
        dot <= 0.99998999) )
  {
    if ( dot >= -0.99998999 )
    {
      *(Vector3f *)(v3 + 48) = Cross(lhs, rhs);
      *(Vector3f *)(v3 + 80) = operator/(lhs, lhsMag);
      *(Vector3f *)(v3 + 48) = Normalize((const Vector3f *)(v3 + 48));
      angle = std::acos(dot) * t;
      Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v3 + 144));
      Matrix3x3f::SetAxisAngle((Matrix3x3f *const)(v3 + 144), (const Vector3f *)(v3 + 48), angle);
      *(Vector3f *)&v8 = Matrix3x3f::MultiplyPoint3((const Matrix3x3f *const)(v3 + 144), (const Vector3f *)(v3 + 80));
    }
    else
    {
      *(Vector3f *)(v3 + 48) = operator/(lhs, lhsMag);
      *(Vector3f *)(v3 + 80) = OrthoNormalVectorFast((const Vector3f *)(v3 + 48));
      Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v3 + 144));
      Matrix3x3f::SetAxisAngle((Matrix3x3f *const)(v3 + 144), (const Vector3f *)(v3 + 80), 3.1415927 * t);
      *(Vector3f *)&v8 = Matrix3x3f::MultiplyPoint3((const Matrix3x3f *const)(v3 + 144), (const Vector3f *)(v3 + 48));
    }
    *(_QWORD *)(v3 + 112) = v8;
    *(_DWORD *)(v3 + 120) = v9;
    Vector3f::operator*=((Vector3f *const)(v3 + 112), lerpedMagnitude);
    v18 = *(Vector3f *)(v3 + 112);
  }
  else
  {
    v18 = Lerp(lhs, rhs, t);
  }
  z = v18.z;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  v11 = *(_QWORD *)&v18.x;
  result.x = *(float *)&v11;
  result.y = *((float *)&v11 + 1);
  result.z = z;
  return result;
};

// Line 259: range 000000000CC1A03D-000000000CC1A877
Vector3f __cdecl NormalizeRobust(const Vector3f *a, float *l, float *div)
{
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  float *v6; // rdx
  float *v7; // rax
  float *v8; // rdx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  int v13; // ecx
  float v14; // xmm1_4
  __m128i v15; // xmm0
  int v16; // ecx
  float v17; // xmm1_4
  __m128i v18; // xmm0
  int v19; // ecx
  __m128i v20; // xmm0
  int v21; // ecx
  float v22; // xmm0_4
  float z; // xmm1_4
  __int64 v24; // xmm0_8
  float inY; // [rsp+4h] [rbp-6Ch]
  float inZ; // [rsp+8h] [rbp-68h]
  float inZa; // [rsp+8h] [rbp-68h]
  float a0; // [rsp+40h] [rbp-30h]
  float a0a; // [rsp+40h] [rbp-30h]
  float a0b; // [rsp+40h] [rbp-30h]
  float a1; // [rsp+44h] [rbp-2Ch]
  float a1a; // [rsp+44h] [rbp-2Ch]
  float a1b; // [rsp+44h] [rbp-2Ch]
  float a2; // [rsp+48h] [rbp-28h]
  float a2a; // [rsp+48h] [rbp-28h]
  float a2b; // [rsp+48h] [rbp-28h]
  float aa0; // [rsp+4Ch] [rbp-24h]
  float aa1; // [rsp+50h] [rbp-20h]
  float aa2; // [rsp+54h] [rbp-1Ch]
  Vector3f v41; // [rsp+58h] [rbp-18h] BYREF
  Vector3f v42; // [rsp+64h] [rbp-Ch]
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v3 = (float *)Vector3f::operator[](a, 0);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  a0 = *v4;
  v5 = (float *)Vector3f::operator[](a, 1);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  a1 = *v6;
  v7 = (float *)Vector3f::operator[](a, 2);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  a2 = *v8;
  if ( CompareApproximately(a0, 0.0, 0.0000099999997) )
  {
    aa0 = 0.0;
    a0 = 0.0;
  }
  else
  {
    v9 = _mm_cvtsi32_si128(LODWORD(a0));
    *(float *)v9.m128i_i32 = Abs(*(float *)v9.m128i_i32);
    aa0 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  }
  if ( CompareApproximately(a1, 0.0, 0.0000099999997) )
  {
    aa1 = 0.0;
    a1 = 0.0;
  }
  else
  {
    v10 = _mm_cvtsi32_si128(LODWORD(a1));
    *(float *)v10.m128i_i32 = Abs(*(float *)v10.m128i_i32);
    aa1 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  }
  if ( CompareApproximately(a2, 0.0, 0.0000099999997) )
  {
    aa2 = 0.0;
    a2 = 0.0;
  }
  else
  {
    v11 = _mm_cvtsi32_si128(LODWORD(a2));
    *(float *)v11.m128i_i32 = Abs(*(float *)v11.m128i_i32);
    aa2 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  }
  if ( aa1 <= aa0 )
  {
    if ( aa2 > aa0 )
    {
      a0a = a0 / aa2;
      a1a = a1 / aa2;
      v18 = (__m128i)0x3F800000u;
      *(float *)v18.m128i_i32 = InvSqrt((float)((float)(a0a * a0a) + (float)(a1a * a1a)) + 1.0);
      v19 = _mm_cvtsi128_si32(v18);
      if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(l);
      }
      *(_DWORD *)l = v19;
      if ( *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)div & 7) + 3) >= *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(div);
      }
      *div = aa2;
      v14 = CopySignf(*l, a2);
      if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(l);
      }
      goto LABEL_24;
    }
    if ( aa0 > 0.0 )
    {
      a1b = a1 / aa0;
      a2b = a2 / aa0;
      v20 = (__m128i)0x3F800000u;
      *(float *)v20.m128i_i32 = InvSqrt((float)((float)(a1b * a1b) + (float)(a2b * a2b)) + 1.0);
      v21 = _mm_cvtsi128_si32(v20);
      if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(l);
      }
      *(_DWORD *)l = v21;
      if ( *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)div & 7) + 3) >= *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(div);
      }
      *div = aa0;
      inZa = *l * a2b;
      inY = *l * a1b;
      v22 = CopySignf(*l, a0);
      Vector3f::Vector3f(&v41, v22, inY, inZa);
      v42 = v41;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(l);
      }
      *l = 0.0;
      if ( *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)div & 7) + 3) >= *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(div);
      }
      *div = 1.0;
      Vector3f::Vector3f(&v41, 0.0, 1.0, 0.0);
      v42 = v41;
    }
  }
  else
  {
    if ( aa2 > aa1 )
    {
      a0a = a0 / aa2;
      a1a = a1 / aa2;
      v12 = (__m128i)0x3F800000u;
      *(float *)v12.m128i_i32 = InvSqrt((float)((float)(a0a * a0a) + (float)(a1a * a1a)) + 1.0);
      v13 = _mm_cvtsi128_si32(v12);
      if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(l);
      }
      *(_DWORD *)l = v13;
      if ( *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)div & 7) + 3) >= *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(div);
      }
      *div = aa2;
      v14 = CopySignf(*l, a2);
      if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(l);
      }
LABEL_24:
      Vector3f::Vector3f(&v41, *l * a0a, *l * a1a, v14);
      v42 = v41;
      goto LABEL_51;
    }
    a0b = a0 / aa1;
    a2a = a2 / aa1;
    v15 = (__m128i)0x3F800000u;
    *(float *)v15.m128i_i32 = InvSqrt((float)((float)(a0b * a0b) + (float)(a2a * a2a)) + 1.0);
    v16 = _mm_cvtsi128_si32(v15);
    if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(l);
    }
    *(_DWORD *)l = v16;
    if ( *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)div & 7) + 3) >= *(_BYTE *)(((unsigned __int64)div >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(div);
    }
    *div = aa1;
    inZ = *l * a2a;
    v17 = CopySignf(*l, a1);
    if ( *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)l & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(l);
    }
    Vector3f::Vector3f(&v41, *l * a0b, v17, inZ);
    v42 = v41;
  }
LABEL_51:
  z = v42.z;
  v24 = *(_QWORD *)&v42.x;
  result.x = *(float *)&v24;
  result.y = *((float *)&v24 + 1);
  result.z = z;
  return result;
};

// Line 343: range 000000000CC1A878-000000000CC1A9A3
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl NormalizeRobust(const Vector3f *a)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  float v4; // xmm1_4
  __int64 v5; // xmm0_8
  __int64 v6; // xmm0_8
  __int64 v7; // [rsp+8h] [rbp-B8h]
  const Vector3f *aa; // [rsp+28h] [rbp-98h]
  __int64 v9; // [rsp+34h] [rbp-8Ch]
  float v10; // [rsp+3Ch] [rbp-84h]
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  aa = a;
  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 5 l:344 64 4 7 div:344";
  *(_QWORD *)(v1 + 16) = NormalizeRobust;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  *(Vector3f *)(&v4 - 2) = NormalizeRobust(aa, (float *)(v1 + 48), (float *)(v1 + 64));
  v9 = v5;
  v10 = v4;
  v7 = v5;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  v6 = v7;
  result.x = *(float *)&v6;
  result.y = *((float *)&v6 + 1);
  result.z = v4;
  return result;
};

// Line 349: range 000000000CC1A9A4-000000000CC1ACC6
Vector3f __cdecl NormalizeRobust(const Vector3f *a, float *invOriginalLength)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  float v5; // xmm0_4
  float z; // xmm1_4
  __int64 v7; // xmm0_8
  __int64 v8; // [rsp+8h] [rbp-C8h]
  Vector3f v9[2]; // [rsp+38h] [rbp-98h] BYREF
  char v10[128]; // [rsp+50h] [rbp-80h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 5 l:350 64 4 7 div:350";
  *(_QWORD *)(v2 + 16) = NormalizeRobust;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  v9[0] = NormalizeRobust(a, (float *)(v2 + 48), (float *)(v2 + 64));
  v5 = *(float *)(v2 + 48) / *(float *)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)invOriginalLength >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)invOriginalLength & 7) + 3) >= *(_BYTE *)(((unsigned __int64)invOriginalLength >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(invOriginalLength);
  }
  *invOriginalLength = v5;
  if ( !Vector3f::operator==(v9, v9) )
  {
    __asan_handle_no_return(v9);
    __assert_fail(
      "n == n",
      "./src/pathfinding/Internal/Math/Vector3.cpp",
      0x162u,
      "Vector3f NormalizeRobust(const Vector3f&, float&)");
  }
  if ( *(_BYTE *)(((unsigned __int64)invOriginalLength >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)invOriginalLength & 7) + 3) >= *(_BYTE *)(((unsigned __int64)invOriginalLength >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(invOriginalLength);
  }
  if ( !IsNormalized(v9, 0.0000099999997) )
  {
    __asan_handle_no_return(v9);
    __assert_fail(
      "IsNormalized(n)",
      "./src/pathfinding/Internal/Math/Vector3.cpp",
      0x164u,
      "Vector3f NormalizeRobust(const Vector3f&, float&)");
  }
  if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v9[0].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v9 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v9[0].z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v9, 12LL);
  }
  v9[1] = v9[0];
  v8 = *(_QWORD *)&v9[0].x;
  z = v9[0].z;
  if ( v10 == (char *)v2 )
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
  v7 = v8;
  result.x = *(float *)&v7;
  result.y = *((float *)&v7 + 1);
  result.z = z;
  return result;
};
