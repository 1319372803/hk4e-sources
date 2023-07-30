// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/MathUtil.cpp

// Line 7: range 000000000CB72ADD-000000000CB72E10
float __cdecl SqrDistancePointSegment2D(float *t, const Vector3f *pt, const Vector3f *s1, const Vector3f *s2)
{
  double v4; // xmm0_8
  double v5; // xmm0_8
  __m128i v7; // xmm0
  float dsx; // [rsp+20h] [rbp-20h]
  float dsz; // [rsp+24h] [rbp-1Ch]
  float dpx; // [rsp+28h] [rbp-18h]
  float dpz; // [rsp+2Ch] [rbp-14h]
  float den; // [rsp+30h] [rbp-10h]
  float tt; // [rsp+34h] [rbp-Ch]

  if ( *(_BYTE *)(((unsigned __int64)s2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)s2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)s2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(s2);
  }
  *(float *)&v4 = s2->x;
  if ( *(_BYTE *)(((unsigned __int64)s1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)s1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)s1 >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(s1);
  }
  dsx = *(float *)&v4 - s1->x;
  if ( *(_BYTE *)(((unsigned __int64)&s2->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)s2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&s2->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&s2->z);
  }
  *(float *)&v5 = s2->z;
  if ( *(_BYTE *)(((unsigned __int64)&s1->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)s1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&s1->z >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&s1->z);
  }
  dsz = *(float *)&v5 - s1->z;
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  dpx = pt->x - s1->x;
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  dpz = pt->z - s1->z;
  den = (float)(dsz * dsz) + (float)(dsx * dsx);
  if ( den == 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(t);
    }
    *t = 0.0;
    return (float)(dpz * dpz) + (float)(dpx * dpx);
  }
  else
  {
    v7 = _mm_cvtsi32_si128(COERCE_UNSIGNED_INT((float)((float)(dsz * dpz) + (float)(dsx * dpx)) / den));
    *(float *)v7.m128i_i32 = FloatClamp(*(float *)v7.m128i_i32, 0.0, 1.0);
    tt = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(t);
    }
    *t = tt;
    return (float)((float)((float)(tt * dsz) - dpz) * (float)((float)(tt * dsz) - dpz))
         + (float)((float)((float)(tt * dsx) - dpx) * (float)((float)(tt * dsx) - dpx));
  }
};

// Line 27: range 000000000CB72E11-000000000CB73103
// local variable allocation has failed, the output may be wrong!
float __cdecl SqrDistancePointSegment(float *t, const Vector3f *pt, const Vector3f *s1, const Vector3f *s2)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8
  float result; // xmm0_4
  __m128i v11; // xmm0 OVERLAPPED
  float v12; // xmm1_4
  int v13; // xmm1_4
  float den; // [rsp+2Ch] [rbp-B4h]
  float tt; // [rsp+30h] [rbp-B0h]
  Vector3f lhs; // [rsp+34h] [rbp-ACh] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 12 5 ds:28 64 12 5 dp:29 96 12 4 v:38";
  *(_QWORD *)(v5 + 16) = SqrDistancePointSegment;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -202177536;
  *(Vector3f *)((char *)&v4 - 8) = operator-(s2, s1);
  *(_QWORD *)(v5 + 32) = v8;
  *(_DWORD *)(v5 + 40) = v4.m128i_i32[0];
  *(Vector3f *)((char *)&v4 - 8) = operator-(pt, s1);
  *(_QWORD *)(v5 + 64) = v9;
  *(_DWORD *)(v5 + 72) = v4.m128i_i32[0];
  Dot((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 32));
  den = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( den == 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(t);
    }
    *t = 0.0;
    result = Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 64));
  }
  else
  {
    v11 = _mm_cvtsi32_si128(COERCE_UNSIGNED_INT(Dot((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 64)) / den));
    *(float *)v11.m128i_i32 = FloatClamp(*(float *)v11.m128i_i32, 0.0, 1.0);
    tt = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    *(Vector3f *)v11.m128i_i8 = operator*(tt, (const Vector3f *)(v5 + 32));
    *(_QWORD *)&lhs.x = v11.m128i_i64[0];
    lhs.z = v12;
    *(Vector3f *)v11.m128i_i8 = operator-(&lhs, (const Vector3f *)(v5 + 64));
    *(_QWORD *)(v5 + 96) = v11.m128i_i64[0];
    *(_DWORD *)(v5 + 104) = v13;
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(t);
    }
    *t = tt;
    result = Dot((const Vector3f *)(v5 + 96), (const Vector3f *)(v5 + 96));
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 44: range 000000000CB73104-000000000CB734D6
// local variable allocation has failed, the output may be wrong!
bool __cdecl ClosestHeightPointTriangle(
        float *h,
        const Vector3f *p,
        const Vector3f *a,
        const Vector3f *b,
        const Vector3f *c)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  __m128i v13; // xmm0
  float v14; // xmm0_4
  bool result; // al
  float dot00; // [rsp+30h] [rbp-C0h]
  float dot01; // [rsp+34h] [rbp-BCh]
  float dot02; // [rsp+38h] [rbp-B8h]
  float dot11; // [rsp+3Ch] [rbp-B4h]
  float dot12; // [rsp+40h] [rbp-B0h]
  float u; // [rsp+48h] [rbp-A8h]
  float v; // [rsp+4Ch] [rbp-A4h]
  char v26[160]; // [rsp+50h] [rbp-A0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 12 5 v0:45 64 12 5 v1:46 96 12 5 v2:47";
  *(_QWORD *)(v6 + 16) = ClosestHeightPointTriangle;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219020288;
  v8[536862722] = -219020288;
  v8[536862723] = -202177536;
  *(Vector3f *)((char *)&v5 - 8) = operator-(c, a);
  *(_QWORD *)(v6 + 32) = v9;
  *(_DWORD *)(v6 + 40) = v5.m128i_i32[0];
  *(Vector3f *)((char *)&v5 - 8) = operator-(b, a);
  *(_QWORD *)(v6 + 64) = v10;
  *(_DWORD *)(v6 + 72) = v5.m128i_i32[0];
  *(Vector3f *)((char *)&v5 - 8) = operator-(p, a);
  v12 = v11;
  v13 = v5;
  *(_QWORD *)(v6 + 96) = v12;
  *(_DWORD *)(v6 + 104) = v5.m128i_i32[0];
  Dot2D((const Vector3f *)(v6 + 32), (const Vector3f *)(v6 + 32));
  dot00 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  *(float *)v13.m128i_i32 = Dot2D((const Vector3f *)(v6 + 32), (const Vector3f *)(v6 + 64));
  dot01 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  *(float *)v13.m128i_i32 = Dot2D((const Vector3f *)(v6 + 32), (const Vector3f *)(v6 + 96));
  dot02 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  *(float *)v13.m128i_i32 = Dot2D((const Vector3f *)(v6 + 64), (const Vector3f *)(v6 + 64));
  dot11 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  *(float *)v13.m128i_i32 = Dot2D((const Vector3f *)(v6 + 64), (const Vector3f *)(v6 + 96));
  dot12 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  u = (float)((float)(dot11 * dot02) - (float)(dot01 * dot12))
    * (float)(1.0 / (float)((float)(dot00 * dot11) - (float)(dot01 * dot01)));
  v = (float)((float)(dot00 * dot12) - (float)(dot01 * dot02))
    * (float)(1.0 / (float)((float)(dot00 * dot11) - (float)(dot01 * dot01)));
  if ( u < -0.000099999997 || v < -0.000099999997 || (float)(u + v) > 1.0001 )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&a->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)a + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&a->y);
    }
    v14 = (float)(*(float *)(v6 + 68) * v) + (float)(a->y + (float)(*(float *)(v6 + 36) * u));
    if ( *(_BYTE *)(((unsigned __int64)h >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)h & 7) + 3) >= *(_BYTE *)(((unsigned __int64)h >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(h);
    }
    *h = v14;
    result = 1;
  }
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 76: range 000000000CB734D7-000000000CB7397A
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectSegmentPoly2D(
        float *tmin,
        float *tmax,
        int *segMin,
        int *segMax,
        const Vector3f *p0,
        const Vector3f *p1,
        const Vector3f *verts,
        int nverts)
{
  __m128i v8; // xmm1
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  _DWORD *v11; // r13
  __int64 v12; // xmm0_8
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  __m128i v15; // xmm0
  int v16; // eax
  bool result; // al
  float ttmin; // [rsp+3Ch] [rbp-C4h]
  float ttmax; // [rsp+40h] [rbp-C0h]
  int tSegMin; // [rsp+44h] [rbp-BCh]
  int tSegMax; // [rsp+48h] [rbp-B8h]
  int i; // [rsp+4Ch] [rbp-B4h]
  int j; // [rsp+50h] [rbp-B0h]
  float n; // [rsp+54h] [rbp-ACh]
  float d; // [rsp+58h] [rbp-A8h]
  float t; // [rsp+5Ch] [rbp-A4h]
  char v31[160]; // [rsp+60h] [rbp-A0h] BYREF

  v9 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "3 32 12 6 dir:84 64 12 7 edge:89 96 12 7 diff:90";
  *(_QWORD *)(v9 + 16) = IntersectSegmentPoly2D;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -219020288;
  v11[536862722] = -219020288;
  v11[536862723] = -202177536;
  ttmin = 0.0;
  ttmax = 1.0;
  tSegMin = -1;
  tSegMax = -1;
  *(Vector3f *)(v9 + 32) = operator-(p1, p0);
  i = 0;
  j = nverts - 1;
  while ( i < nverts )
  {
    *(Vector3f *)((char *)&v8 - 8) = operator-(&verts[i], &verts[j]);
    *(_QWORD *)(v9 + 64) = v12;
    *(_DWORD *)(v9 + 72) = v8.m128i_i32[0];
    *(Vector3f *)((char *)&v8 - 8) = operator-(p0, &verts[j]);
    v14 = v13;
    v15 = v8;
    *(_QWORD *)(v9 + 96) = v14;
    *(_DWORD *)(v9 + 104) = v8.m128i_i32[0];
    Perp2D((const Vector3f *)(v9 + 64), (const Vector3f *)(v9 + 96));
    n = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    *(float *)v15.m128i_i32 = Perp2D((const Vector3f *)(v9 + 32), (const Vector3f *)(v9 + 64));
    d = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    v8 = (__m128i)_mm_and_ps((__m128)0x7FFFFFFFu, (__m128)LODWORD(d));
    if ( *(float *)v8.m128i_i32 >= 0.0000000099999999 )
    {
      t = n / d;
      if ( d >= 0.0 )
      {
        if ( ttmax > t )
        {
          ttmax = n / d;
          tSegMax = j;
          if ( ttmin > t )
            break;
        }
      }
      else if ( t > ttmin )
      {
        ttmin = n / d;
        tSegMin = j;
        if ( t > ttmax )
          break;
      }
    }
    else if ( n < 0.0 )
    {
      break;
    }
    v16 = i++;
    j = v16;
  }
  if ( *(_BYTE *)(((unsigned __int64)tmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)tmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(tmin);
  }
  *tmin = ttmin;
  if ( *(_BYTE *)(((unsigned __int64)tmax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)tmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(tmax);
  }
  *tmax = ttmax;
  if ( *(_BYTE *)(((unsigned __int64)segMin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)segMin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)segMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(segMin);
  }
  *segMin = tSegMin;
  if ( *(_BYTE *)(((unsigned __int64)segMax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)segMax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)segMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(segMax);
  }
  *segMax = tSegMax;
  result = i == nverts;
  if ( v31 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 140: range 000000000CB7397B-000000000CB74191
void __cdecl RandomPointInConvexPoly(
        const Vector3f *pts,
        const unsigned __int16 *ptidxs,
        const int npts,
        float *areas,
        const float s,
        const float t,
        Vector3f *out)
{
  __m128i v7; // xmm0
  unsigned __int64 v8; // rcx
  const Vector3f *v9; // rsi
  unsigned __int64 v10; // rcx
  const Vector3f *v11; // rcx
  unsigned __int64 v12; // rbx
  int v13; // ecx
  const float *v14; // rax
  unsigned int *v15; // rdx
  float *v16; // rcx
  __m128i v17; // xmm0
  float *v18; // rax
  float *v19; // rdx
  float *v20; // rax
  float *v21; // rdx
  float *v22; // rax
  float *v23; // rdx
  float v24; // xmm0_4
  float *v25; // rax
  float *v26; // rdx
  float *v27; // rax
  float *v28; // rdx
  float *v29; // rax
  float *v30; // rdx
  float v31; // xmm0_4
  float *v32; // rax
  float *v33; // rdx
  float *v34; // rax
  float *v35; // rdx
  float *v36; // rax
  float *v37; // rdx
  float v38; // xmm0_4
  float v40; // [rsp+8h] [rbp-88h]
  float v41; // [rsp+8h] [rbp-88h]
  float v42; // [rsp+8h] [rbp-88h]
  float v43; // [rsp+8h] [rbp-88h]
  float v44; // [rsp+8h] [rbp-88h]
  float v45; // [rsp+8h] [rbp-88h]
  float __a; // [rsp+34h] [rbp-5Ch] BYREF
  float areasum; // [rsp+38h] [rbp-58h]
  int i; // [rsp+3Ch] [rbp-54h]
  float acc; // [rsp+40h] [rbp-50h]
  float u; // [rsp+44h] [rbp-4Ch]
  int tri; // [rsp+48h] [rbp-48h]
  int i_0; // [rsp+4Ch] [rbp-44h]
  float thr; // [rsp+50h] [rbp-40h]
  float dacc; // [rsp+54h] [rbp-3Ch]
  float v; // [rsp+58h] [rbp-38h]
  float a; // [rsp+5Ch] [rbp-34h]
  float b; // [rsp+60h] [rbp-30h]
  float c; // [rsp+64h] [rbp-2Ch]
  const Vector3f *pa; // [rsp+68h] [rbp-28h]
  const Vector3f *pb; // [rsp+70h] [rbp-20h]
  const Vector3f *pc; // [rsp+78h] [rbp-18h]

  v7 = 0LL;
  areasum = 0.0;
  for ( i = 2; i < npts; ++i )
  {
    v8 = (unsigned __int64)&ptidxs[i];
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((2 * i + (_BYTE)ptidxs) & 7) + 1) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&ptidxs[i]);
    }
    v9 = &pts[*(unsigned __int16 *)v8];
    v10 = (unsigned __int64)&ptidxs[i - 1];
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((2 * i - 2 + (_BYTE)ptidxs) & 7) + 1) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&ptidxs[i - 1]);
    }
    v11 = &pts[*(unsigned __int16 *)v10];
    if ( *(_BYTE *)(((unsigned __int64)ptidxs >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ptidxs & 7) + 1) >= *(_BYTE *)(((unsigned __int64)ptidxs >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(ptidxs);
    }
    v12 = (unsigned __int64)&areas[i];
    *(float *)v7.m128i_i32 = TriArea2D(&pts[*ptidxs], v11, v9);
    v13 = _mm_cvtsi128_si32(v7);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_store4(v12);
    *(_DWORD *)v12 = v13;
    __a = 0.001;
    v14 = std::max<float>(&__a, &areas[i]);
    v15 = (unsigned int *)v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    v7 = (__m128i)*v15;
    areasum = *(float *)v7.m128i_i32 + areasum;
  }
  thr = s * areasum;
  acc = 0.0;
  u = 1.0;
  tri = npts - 1;
  for ( i_0 = 2; i_0 < npts; ++i_0 )
  {
    v16 = &areas[i_0];
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i_0 + (_BYTE)areas) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&areas[i_0]);
    }
    dacc = *v16;
    if ( thr >= acc && (float)(acc + dacc) > thr )
    {
      u = (float)(thr - acc) / dacc;
      tri = i_0;
      break;
    }
    acc = acc + dacc;
  }
  v17 = _mm_cvtsi32_si128(LODWORD(t));
  *(float *)v17.m128i_i32 = Sqrt(*(float *)v17.m128i_i32);
  v = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  a = 1.0 - v;
  b = (float)(1.0 - u) * v;
  c = u * v;
  pa = pts;
  pb = &pts[tri - 1];
  pc = &pts[tri];
  v18 = (float *)Vector3f::operator[](pts, 0);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  v40 = *v19 * a;
  v20 = (float *)Vector3f::operator[](pb, 0);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v41 = (float)(*v21 * b) + v40;
  v22 = (float *)Vector3f::operator[](pc, 0);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  v24 = (float)(*v23 * c) + v41;
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)out & 7) + 3) >= *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out);
  }
  out->x = v24;
  v25 = (float *)Vector3f::operator[](pa, 1);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  v42 = *v26 * a;
  v27 = (float *)Vector3f::operator[](pb, 1);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v27);
  }
  v43 = (float)(*v28 * b) + v42;
  v29 = (float *)Vector3f::operator[](pc, 1);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v29);
  }
  v31 = (float)(*v30 * c) + v43;
  if ( *(_BYTE *)(((unsigned __int64)&out->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&out->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&out->y);
  }
  out->y = v31;
  v32 = (float *)Vector3f::operator[](pa, 2);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v32);
  }
  v44 = *v33 * a;
  v34 = (float *)Vector3f::operator[](pb, 2);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v34);
  }
  v45 = (float)(*v35 * b) + v44;
  v36 = (float *)Vector3f::operator[](pc, 2);
  v37 = v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v36);
  }
  v38 = (float)(*v37 * c) + v45;
  if ( *(_BYTE *)(((unsigned __int64)&out->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&out->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&out->z);
  }
  out->z = v38;
};
