// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/MathUtil.h

// Line 8: range 000000000CD5AD82-000000000CD5AEA5
float __cdecl Dot2D(const Vector3f *a, const Vector3f *b)
{
  float x; // xmm1_4
  float v3; // xmm1_4
  float z; // xmm2_4

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(a);
  }
  x = a->x;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)b & 7) + 3) >= *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(b);
  }
  v3 = x * b->x;
  if ( *(_BYTE *)(((unsigned __int64)&a->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->z);
  }
  z = a->z;
  if ( *(_BYTE *)(((unsigned __int64)&b->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&b->z);
  }
  return (float)(b->z * z) + v3;
};

// Line 13: range 000000000CD5AEA6-000000000CD5AEE7
float __cdecl Distance(const Vector3f *a, const Vector3f *b)
{
  Vector3f inV; // [rsp+14h] [rbp-Ch] BYREF

  inV = operator-(b, a);
  return Magnitude(&inV);
};

// Line 18: range 000000000CD5AEE8-000000000CD5AF29
float __cdecl SqrDistance(const Vector3f *a, const Vector3f *b)
{
  Vector3f inV; // [rsp+14h] [rbp-Ch] BYREF

  inV = operator-(b, a);
  return SqrMagnitude(&inV);
};

// Line 30: range 000000000CD5AF2A-000000000CD5B04D
float __cdecl Perp2D(const Vector3f *u, const Vector3f *v)
{
  float z; // xmm1_4
  double v3; // xmm0_8
  float x; // xmm2_4

  if ( *(_BYTE *)(((unsigned __int64)&u->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)u + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&u->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&u->z);
  }
  z = u->z;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  *(float *)&v3 = v->x * z;
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)u & 7) + 3) >= *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(u);
  }
  x = u->x;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&v->z);
  }
  return *(float *)&v3 - (float)(v->z * x);
};

// Line 35: range 000000000CD5B04E-000000000CD5B239
float __cdecl TriArea2D(const Vector3f *a, const Vector3f *b, const Vector3f *c)
{
  double v3; // xmm0_8
  double v4; // xmm0_8
  float abx; // [rsp+20h] [rbp-10h]
  float abz; // [rsp+24h] [rbp-Ch]
  float acx; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)b & 7) + 3) >= *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(b);
  }
  *(float *)&v3 = b->x;
  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(a);
  }
  abx = *(float *)&v3 - a->x;
  if ( *(_BYTE *)(((unsigned __int64)&b->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&b->z);
  }
  *(float *)&v4 = b->z;
  if ( *(_BYTE *)(((unsigned __int64)&a->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&a->z);
  }
  abz = *(float *)&v4 - a->z;
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(c);
  }
  acx = c->x - a->x;
  if ( *(_BYTE *)(((unsigned __int64)&c->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)c + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&c->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&c->z);
  }
  return (float)(acx * abz) - (float)(abx * (float)(c->z - a->z));
};

// Line 45: range 000000000CD5B23A-000000000CD5B616
bool __cdecl OverlapBounds(const Vector3f *amin, const Vector3f *amax, const Vector3f *bmin, const Vector3f *bmax)
{
  double v4; // xmm0_8
  float x; // xmm1_4
  char v6; // al
  double v7; // xmm0_8
  float y; // xmm1_4
  char v9; // al
  double v10; // xmm0_8
  float z; // xmm1_4
  bool overlap; // [rsp+2Fh] [rbp-1h]
  bool overlapa; // [rsp+2Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)amin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)amin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)amin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(amin);
  }
  *(float *)&v4 = amin->x;
  if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(bmax);
  }
  if ( *(float *)&v4 > bmax->x )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)amax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)amax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)amax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(amax);
  }
  x = amax->x;
  if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(bmin);
  }
  if ( bmin->x > x )
LABEL_12:
    v6 = 0;
  else
    v6 = 1;
  overlap = v6;
  if ( *(_BYTE *)(((unsigned __int64)&amin->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amin + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&amin->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&amin->y);
  }
  *(float *)&v7 = amin->y;
  if ( *(_BYTE *)(((unsigned __int64)&bmax->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmax + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->y >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load4(&bmax->y);
  }
  if ( *(float *)&v7 > bmax->y )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)&amax->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amax + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&amax->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&amax->y);
  }
  y = amax->y;
  if ( *(_BYTE *)(((unsigned __int64)&bmin->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmin + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmin->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&bmin->y);
  }
  if ( bmin->y <= y && overlap )
    v9 = 1;
  else
LABEL_25:
    v9 = 0;
  overlapa = v9;
  if ( *(_BYTE *)(((unsigned __int64)&amin->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amin + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&amin->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&amin->z);
  }
  *(float *)&v10 = amin->z;
  if ( *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmax + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&bmax->z);
  }
  if ( *(float *)&v10 > bmax->z )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&amax->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amax + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&amax->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&amax->z);
  }
  z = amax->z;
  if ( *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmin + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&bmin->z);
  }
  return bmin->z <= z && overlapa;
};

// Line 57: range 000000000CB67D77-000000000CB67DA5
size_t __cdecl NextIndex(size_t index, size_t modulus)
{
  if ( index + 1 == modulus )
    return 0LL;
  else
    return index + 1;
};

// Line 67: range 000000000CB67DA6-000000000CB67DCC
size_t __cdecl PrevIndex(size_t index, size_t modulus)
{
  if ( index )
    return index - 1;
  else
    return modulus - 1;
};

// Line 82: range 000000000CD5B617-000000000CD5B631
float __cdecl frand()
{
  return (float)rand() / 2147483600.0;
};

// Line 89: range 000000000CD5B632-000000000CD5B7AE
bool __cdecl IsInvalidRotation(const Quaternionf *rotation)
{
  if ( *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rotation & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rotation);
  }
  if ( Abs(rotation->x) > 1.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rotation->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rotation + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rotation->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rotation->y);
  }
  if ( Abs(rotation->y) > 1.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rotation->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rotation + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rotation->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rotation->z);
  }
  if ( Abs(rotation->z) > 1.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rotation->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rotation + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rotation->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rotation->w);
  }
  return Abs(rotation->w) > 1.0;
};

// Line 94: range 000000000CD5B7AF-000000000CD5B8E0
bool __cdecl IsInvalidExtent(const Vector3f *extent, float max_extent)
{
  if ( *(_BYTE *)(((unsigned __int64)extent >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)extent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(extent);
  }
  if ( extent->x <= 0.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&extent->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)extent + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extent->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&extent->y);
  }
  if ( extent->y > max_extent || extent->y <= 0.0 || extent->y > max_extent )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&extent->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)extent + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extent->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&extent->z);
  }
  return extent->z <= 0.0 || extent->z > max_extent;
};
