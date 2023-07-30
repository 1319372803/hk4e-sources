// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/HullAvoidance.cpp

// Line 7: range 000000000CC73212-000000000CC732BC
Vector2f __cdecl ExtractXZVector2(const Vector3f *v)
{
  double v1; // xmm0_8
  Vector2f v3; // [rsp+18h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  *(float *)&v1 = v->z;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v1 = __asan_report_load4(v);
  }
  Vector2f::Vector2f(&v3, v->x, *(float *)&v1);
  return v3;
};

// Line 12: range 000000000CC732BD-000000000CC732F3
bool __cdecl Between(float value, float minValue, float maxValue)
{
  return value > minValue && maxValue > value;
};

// Line 18: range 000000000CC732F4-000000000CC7355E
void __cdecl OrderVerticesByY(Vector3f *miny, Vector3f *maxy)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rcx
  __int64 n; // rax
  float y; // xmm1_4
  char v7[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 temp:25";
  *(_QWORD *)(v2 + 16) = OrderVerticesByY;
  n = v2 >> 3;
  *(_DWORD *)(n + 2147450880) = -235802127;
  *(_DWORD *)(n + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&maxy->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)maxy + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&maxy->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&maxy->y);
  }
  y = maxy->y;
  if ( *(_BYTE *)(((unsigned __int64)&miny->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)miny + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&miny->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&miny->y);
  }
  if ( miny->y > y )
  {
    if ( ((unsigned __int8)miny & 7) >= *(_BYTE *)(((unsigned __int64)miny >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)miny >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&miny->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)miny + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&miny->z + 3) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(miny, 12LL);
    }
    *(Vector3f *)(v4 - 32) = *miny;
    *miny = *maxy;
    if ( ((unsigned __int8)maxy & 7) >= *(_BYTE *)(((unsigned __int64)maxy >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)maxy >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&maxy->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)maxy + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&maxy->z + 3) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(maxy, 12LL);
    }
    *maxy = *(Vector3f *)(v4 - 32);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(n + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(n + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 32: range 000000000CC7355F-000000000CC73678
Vector2f __cdecl SegmentNormal(const Vector2f *s0, const Vector2f *s1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Vector2f v5; // xmm0_8
  Vector2f inV; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 ds:33";
  *(_QWORD *)(v2 + 16) = SegmentNormal;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(Vector2f *)(v2 + 32) = operator-(s1, s0);
  Vector2f::Vector2f(&inV, -*(float *)(v2 + 36), *(float *)(v2 + 32));
  v5 = NormalizeSafe(&inV, &Vector2f::zero);
  if ( v7 == (char *)v2 )
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

// Line 38: range 000000000CC73679-000000000CC7388E
void __cdecl DisplaceSegment(Vector2f *s0, Vector2f *s1, float distance)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  Vector2f inV; // [rsp+28h] [rbp-68h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 15 displacement:39";
  *(_QWORD *)(v3 + 16) = DisplaceSegment;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  inV = SegmentNormal(s0, s1);
  *(Vector2f *)(v3 + 32) = operator*(&inV, distance);
  if ( ((unsigned __int8)s0 & 7) >= *(_BYTE *)(((unsigned __int64)s0 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)s0 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&s0->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)s0 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&s0->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(s0, 8LL);
  }
  *s0 = operator+(s0, (const Vector2f *)(v3 + 32));
  if ( ((unsigned __int8)s1 & 7) >= *(_BYTE *)(((unsigned __int64)s1 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)s1 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&s1->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)s1 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&s1->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(s1, 8LL);
  }
  *s1 = operator+(s1, (const Vector2f *)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 000000000CC7388F-000000000CC73C3B
int __cdecl CalculateClippedBoxConvexHull(
        Vector3f *hullVertices,
        const Vector3f *boxVertices,
        float slabMinY,
        float slabMaxY)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Vector2f *v7; // rdx
  float *p_y; // rax
  Vector2f *v9; // rax
  float *v10; // rdx
  Vector3f *v11; // rdx
  int v12; // r14d
  int result; // eax
  float inZ; // [rsp+4h] [rbp-FCh]
  int i; // [rsp+20h] [rbp-E0h]
  Vector3f v17; // [rsp+24h] [rbp-DCh] BYREF
  char v18[208]; // [rsp+30h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 24 9 points:47 96 24 7 hull:48";
  *(_QWORD *)(v4 + 16) = CalculateClippedBoxConvexHull;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -218959118;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v4 + 32), 0xCuLL);
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v4 + 96), 0xDuLL);
  CalculatePointsFromClippedBox((Vertex2Array *)(v4 + 32), boxVertices, slabMinY, slabMaxY);
  CalculateConvexHull((Vertex2Array *)(v4 + 96), (Vertex2Array *)(v4 + 32));
  for ( i = 0; i < dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v4 + 96)); ++i )
  {
    v7 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v4 + 96), i);
    p_y = &v7->y;
    if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_y);
    }
    inZ = v7->y;
    v9 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v4 + 96), i);
    v10 = (float *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    Vector3f::Vector3f(&v17, *v10, slabMinY, inZ);
    v11 = &hullVertices[i];
    if ( (((unsigned __int8)hullVertices + 12 * i) & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v11->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)hullVertices + 12 * i + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->z + 3) >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_store_n(&hullVertices[i], 12LL);
    }
    *v11 = v17;
  }
  v12 = dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v4 + 96));
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v4 + 96));
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v4 + 32));
  result = v12;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 62: range 000000000CC73C3C-000000000CC74287
int __cdecl CalculateExpandedClippedBoxConvexHull(
        Vector2f *segments2d,
        Vector2f *corners2d,
        const Vector3f *boxVertices,
        float slabMinY,
        float slabMaxY,
        float radius)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r14d
  Vector2f *v10; // rax
  _QWORD *v11; // rdx
  Vector2f *v12; // rax
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  Vector2f *v16; // rdx
  unsigned __int64 v17; // rsi
  int v18; // eax
  int result; // eax
  int i; // [rsp+38h] [rbp-118h]
  int j; // [rsp+3Ch] [rbp-114h]
  char v24[272]; // [rsp+40h] [rbp-110h] BYREF

  v6 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 32 8 5 s0:73 64 8 5 s1:74 96 24 9 points:63 160 24 7 hull:64";
  *(_QWORD *)(v6 + 16) = CalculateExpandedClippedBoxConvexHull;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -234881024;
  v8[536862724] = -218959118;
  v8[536862725] = -218103808;
  v8[536862726] = -202116109;
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v6 + 96), 0xCuLL);
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v6 + 160), 0xDuLL);
  CalculatePointsFromClippedBox((Vertex2Array *)(v6 + 96), boxVertices, slabMinY, slabMaxY);
  CalculateConvexHull((Vertex2Array *)(v6 + 160), (Vertex2Array *)(v6 + 96));
  if ( dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v6 + 160)) > 2 )
  {
    i = 0;
    j = dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v6 + 160)) - 1;
    while ( i < dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v6 + 160)) )
    {
      v10 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v6 + 160), j);
      v11 = v10;
      if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v10->y + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->y + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v10, 8LL);
      }
      *(_QWORD *)(v6 + 32) = *v11;
      v12 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v6 + 160), i);
      v13 = v12;
      if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v12->y + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->y + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v12, 8LL);
      }
      *(_QWORD *)(v6 + 64) = *v13;
      DisplaceSegment((Vector2f *)(v6 + 32), (Vector2f *)(v6 + 64), radius);
      v14 = (unsigned __int64)&segments2d[2 * j];
      if ( ((16 * j + (unsigned __int8)segments2d) & 7) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v14 + 7) >> 3) + 0x7FFF8000) != 0
        && ((16 * j + (unsigned __int8)segments2d + 7) & 7) >= *(_BYTE *)(((v14 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v14, 8LL);
      }
      *(_QWORD *)v14 = *(_QWORD *)(v6 + 32);
      v15 = (unsigned __int64)&segments2d[2 * j + 1];
      if ( ((8 * (2 * j + 1) + (unsigned __int8)segments2d) & 7) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v15 + 7) >> 3) + 0x7FFF8000) != 0
        && (char)((v15 + 7) & 7) >= *(_BYTE *)(((v15 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v15, 8LL);
      }
      *(_QWORD *)v15 = *(_QWORD *)(v6 + 64);
      v16 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v6 + 160), j);
      v17 = (unsigned __int64)&corners2d[j];
      if ( ((8 * j + (unsigned __int8)corners2d) & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v17 + 7) >> 3) + 0x7FFF8000) != 0
        && ((8 * j + (unsigned __int8)corners2d + 7) & 7) >= *(_BYTE *)(((v17 + 7) >> 3) + 0x7FFF8000) )
      {
        v17 = 8LL;
        __asan_report_store_n(&corners2d[j], 8LL);
      }
      if ( ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v16->y + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v16 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v16->y + 3) >> 3) + 0x7FFF8000) )
      {
        v17 = 8LL;
        __asan_report_load_n(v16, 8LL);
      }
      *(Vector2f *)v17 = *v16;
      v18 = i++;
      j = v18;
    }
    v9 = dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v6 + 160));
  }
  else
  {
    v9 = 0;
  }
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v6 + 160));
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v6 + 96));
  result = v9;
  if ( v24 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 89: range 000000000CC74288-000000000CC7453C
bool __cdecl AlignedCylinderOverlapsOrientedBox(
        float *penetration,
        const Vector3f *boxVertices,
        const Vector3f *cylinderPosition,
        float cylinderRadius,
        float cylinderMinY,
        float cylinderMaxY)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  bool v9; // r14
  bool result; // al
  char v13[240]; // [rsp+30h] [rbp-F0h] BYREF

  v6 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 8 21 cylinderPositionXZ:93 64 24 9 points:90 128 24 7 hull:91";
  *(_QWORD *)(v6 + 16) = AlignedCylinderOverlapsOrientedBox;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -234881024;
  v8[536862723] = -218959118;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v6 + 64), 0xCuLL);
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v6 + 128), 0xDuLL);
  *(Vector2f *)(v6 + 32) = ExtractXZVector2(cylinderPosition);
  CalculatePointsFromClippedBox((Vertex2Array *)(v6 + 64), boxVertices, cylinderMinY, cylinderMaxY);
  CalculateConvexHull((Vertex2Array *)(v6 + 128), (Vertex2Array *)(v6 + 64));
  if ( dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v6 + 128)) > 2 )
  {
    v9 = CircleHullOverlap(penetration, (const Vertex2Array *)(v6 + 128), (const Vector2f *)(v6 + 32), cylinderRadius);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)penetration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(penetration);
    }
    *penetration = 0.0;
    v9 = 0;
  }
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v6 + 128));
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v6 + 64));
  result = v9;
  if ( v13 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 107: range 000000000CC7453D-000000000CC74902
bool __cdecl AlignedCylinderOverlapsOrientedCapsule(
        float *penetration,
        const Vector3f *capsuleCenter,
        const Vector3f *capsuleExtents,
        const Vector3f *capsuleAxis,
        const Vector3f *cylinderPosition,
        float cylinderRadius,
        float cylinderMinY,
        float cylinderMaxY)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  __int64 i; // rax
  bool result; // al
  int ncircles; // [rsp+44h] [rbp-ECh]
  float separation_0; // [rsp+48h] [rbp-E8h]
  float separation; // [rsp+4Ch] [rbp-E4h]
  char v20[224]; // [rsp+50h] [rbp-E0h] BYREF

  v8 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(192LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "5 48 4 17 capsuleRadius:108 64 8 7 pos:117 96 8 8 cap1:118 128 8 8 cap2:130 160 16 10 points:109";
  *(_QWORD *)(v8 + 16) = AlignedCylinderOverlapsOrientedCapsule;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556943;
  v10[536862722] = -218959360;
  v10[536862723] = -218959360;
  v10[536862724] = -218959360;
  v10[536862725] = -202178560;
  for ( i = 1LL; i >= 0; --i )
    ;
  if ( *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)penetration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(penetration);
  }
  *penetration = 0.0;
  ncircles = CalculateClippedCapsule(
               (Vector2f *)(v8 + 160),
               (float *)(v8 + 48),
               capsuleCenter,
               capsuleExtents,
               capsuleAxis,
               cylinderMinY,
               cylinderMaxY);
  if ( ncircles )
  {
    *(Vector2f *)(v8 + 64) = ExtractXZVector2(cylinderPosition);
    *(_QWORD *)(v8 + 96) = *(_QWORD *)(v8 + 160);
    if ( ncircles == 1 )
    {
      *(Vector2f *)(v8 + 128) = operator-((const Vector2f *)(v8 + 64), (const Vector2f *)(v8 + 96));
      separation = (float)(Magnitude((const Vector2f *)(v8 + 128)) - *(float *)(v8 + 48)) - cylinderRadius;
      if ( separation <= 0.0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)penetration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)penetration >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(penetration);
        }
        *penetration = -separation;
        result = 1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      *(_QWORD *)(v8 + 128) = *(_QWORD *)(v8 + 168);
      if ( ncircles == 2 )
      {
        separation_0 = (float)(DistancePointLine<Vector2f>(
                                 (const Vector2f *)(v8 + 64),
                                 (const Vector2f *)(v8 + 96),
                                 (const Vector2f *)(v8 + 128))
                             - *(float *)(v8 + 48))
                     - cylinderRadius;
        if ( separation_0 <= 0.0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)penetration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)penetration >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_store4(penetration);
          }
          *penetration = -separation_0;
          result = 1;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
  }
  else
  {
    result = 0;
  }
  if ( v20 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 155: range 000000000CC74903-000000000CC74DCD
void __cdecl GetBoxEdgeVertices(const Vector3f *boxVertices, int i, Vector3f *edgeVertex1, Vector3f *edgeVertex2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 n; // rax
  unsigned __int64 v7; // rdx
  char v8; // si
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  char v11; // si
  unsigned __int64 v12; // rcx
  char v16[208]; // [rsp+20h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  n = v4 + 192;
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 48 6 v0:160 112 48 6 v1:161";
  *(_QWORD *)(v4 + 16) = GetBoxEdgeVertices;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -219021312;
  *(_DWORD *)(v7 + 2147450892) = 62194;
  *(_DWORD *)(v7 + 2147450900) = -202116109;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 36) = 1;
  *(_DWORD *)(v4 + 40) = 3;
  *(_DWORD *)(v4 + 44) = 2;
  *(_DWORD *)(v4 + 48) = 4;
  *(_DWORD *)(v4 + 52) = 5;
  *(_DWORD *)(v4 + 56) = 7;
  *(_DWORD *)(v4 + 60) = 6;
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 68) = 1;
  *(_DWORD *)(v4 + 72) = 2;
  *(_DWORD *)(v4 + 76) = 3;
  *(_DWORD *)(v4 + 112) = 1;
  *(_DWORD *)(v4 + 116) = 3;
  *(_DWORD *)(v4 + 120) = 2;
  *(_DWORD *)(v4 + 124) = 0;
  *(_DWORD *)(v4 + 128) = 5;
  *(_DWORD *)(v4 + 132) = 7;
  *(_DWORD *)(v4 + 136) = 6;
  *(_DWORD *)(v4 + 140) = 4;
  *(_DWORD *)(v4 + 144) = 4;
  *(_DWORD *)(v4 + 148) = 5;
  *(_DWORD *)(v4 + 152) = 6;
  *(_DWORD *)(v4 + 156) = 7;
  v8 = *(_BYTE *)(((4LL * i + v4 + 32) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)(((4 * i + v4 + 32) & 7) + 3) >= v8 )
    __asan_report_load4(4LL * i + v4 + 32);
  v9 = (unsigned __int64)&boxVertices[*(int *)(n + 4LL * i - 160)];
  if ( ((unsigned __int8)edgeVertex1 & 7) >= *(_BYTE *)(((unsigned __int64)edgeVertex1 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)edgeVertex1 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&edgeVertex1->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)edgeVertex1 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&edgeVertex1->z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    v9 = 12LL;
    n = __asan_report_store_n(edgeVertex1, 12LL);
  }
  v10 = v9;
  if ( (char)(v9 & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) && *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v9 + 11) & 7) >= *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) )
  {
    v9 = 12LL;
    n = __asan_report_load_n(v10, 12LL);
  }
  *(_QWORD *)&edgeVertex1->x = *(_QWORD *)v9;
  edgeVertex1->z = *(float *)(v9 + 8);
  v11 = *(_BYTE *)(((unsigned __int64)(4LL * i + n - 80) >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)(((4 * i + n - 80) & 7) + 3) >= v11 )
    __asan_report_load4(4LL * i + n - 80);
  v12 = (unsigned __int64)&boxVertices[*(int *)(n + 4LL * i - 80)];
  if ( ((unsigned __int8)edgeVertex2 & 7) >= *(_BYTE *)(((unsigned __int64)edgeVertex2 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)edgeVertex2 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&edgeVertex2->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)edgeVertex2 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&edgeVertex2->z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_store_n(edgeVertex2, 12LL);
  }
  if ( (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v12 + 11) & 7) >= *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v12, 12LL);
  }
  *(_QWORD *)&edgeVertex2->x = *(_QWORD *)v12;
  edgeVertex2->z = *(float *)(v12 + 8);
  if ( v16 == (char *)v4 )
  {
    *(_DWORD *)(v7 + 2147450880) = 0;
    *(_QWORD *)(v7 + 2147450888) = 0LL;
    *(_DWORD *)(v7 + 2147450900) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v7 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v7 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 170: range 000000000CC74DCE-000000000CC751C9
void __cdecl CalculatePointsFromClippedBox(Vertex2Array *points, const Vector3f *box, float slabMinY, float slabMaxY)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  const Vector3f *v7; // rdx
  int i; // [rsp+28h] [rbp-B8h]
  int i_0; // [rsp+2Ch] [rbp-B4h]
  Vector2f XZVector2; // [rsp+38h] [rbp-A8h] BYREF
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 12 15 edgeVertex1:186 64 12 15 edgeVertex2:186 96 12 16 intersection:201";
  *(_QWORD *)(v4 + 16) = CalculatePointsFromClippedBox;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219020288;
  v6[536862723] = -202177536;
  dynamic_array<Vector2f,false,4ul>::resize_uninitialized(points, 0LL, kIncreaseToExactSize);
  dynamic_array<Vector2f,false,4ul>::reserve(points, 0xCuLL);
  for ( i = 0; i <= 7; ++i )
  {
    v7 = &box[i];
    if ( *(_BYTE *)(((unsigned __int64)&v7->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v7->y);
    }
    if ( Between(v7->y, slabMinY, slabMaxY) )
    {
      XZVector2 = ExtractXZVector2(&box[i]);
      dynamic_array<Vector2f,false,4ul>::push_back(points, &XZVector2);
    }
  }
  for ( i_0 = 0; i_0 <= 11; ++i_0 )
  {
    Vector3f::Vector3f((Vector3f *const)(v4 + 32));
    Vector3f::Vector3f((Vector3f *const)(v4 + 64));
    GetBoxEdgeVertices(box, i_0, (Vector3f *)(v4 + 32), (Vector3f *)(v4 + 64));
    OrderVerticesByY((Vector3f *)(v4 + 32), (Vector3f *)(v4 + 64));
    if ( Between(slabMaxY, *(float *)(v4 + 36), *(float *)(v4 + 68)) )
    {
      *(Vector3f *)(v4 + 96) = Lerp(
                                 (const Vector3f *)(v4 + 32),
                                 (const Vector3f *)(v4 + 64),
                                 (float)(slabMaxY - *(float *)(v4 + 36))
                               / (float)(*(float *)(v4 + 68) - *(float *)(v4 + 36)));
      XZVector2 = ExtractXZVector2((const Vector3f *)(v4 + 96));
      dynamic_array<Vector2f,false,4ul>::push_back(points, &XZVector2);
    }
    if ( Between(slabMinY, *(float *)(v4 + 36), *(float *)(v4 + 68)) )
    {
      *(Vector3f *)(v4 + 96) = Lerp(
                                 (const Vector3f *)(v4 + 32),
                                 (const Vector3f *)(v4 + 64),
                                 (float)(slabMinY - *(float *)(v4 + 36))
                               / (float)(*(float *)(v4 + 68) - *(float *)(v4 + 36)));
      XZVector2 = ExtractXZVector2((const Vector3f *)(v4 + 96));
      dynamic_array<Vector2f,false,4ul>::push_back(points, &XZVector2);
    }
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 208: range 000000000CC751CA-000000000CC7531D
bool __cdecl CompareVertices(const Vector2f *a, const Vector2f *b)
{
  float x; // xmm1_4
  float y; // xmm1_4

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
  if ( b->x > x )
    return 1;
  if ( a->x != b->x )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&a->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->y);
  }
  y = a->y;
  if ( *(_BYTE *)(((unsigned __int64)&b->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&b->y);
  }
  return b->y > y;
};

// Line 213: range 000000000CC7531E-000000000CC754EF
float __cdecl CalculatePointSide(const Vector2f *l0, const Vector2f *l1, const Vector2f *point)
{
  double v3; // xmm0_8
  float v4; // xmm1_4
  double v5; // xmm0_8
  float v6; // xmm2_4

  if ( *(_BYTE *)(((unsigned __int64)&l1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)l1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&l1->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&l1->y);
  }
  *(float *)&v3 = l1->y;
  if ( *(_BYTE *)(((unsigned __int64)&l0->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)l0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&l0->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&l0->y);
  }
  v4 = *(float *)&v3 - l0->y;
  if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(point);
  }
  *(float *)&v5 = point->x;
  if ( *(_BYTE *)(((unsigned __int64)l0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)l0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l0 >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(l0);
  }
  *(float *)&v5 = (float)(*(float *)&v5 - l0->x) * v4;
  if ( *(_BYTE *)(((unsigned __int64)l1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)l1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)l1 >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(l1);
  }
  v6 = l1->x - l0->x;
  if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&point->y);
  }
  return *(float *)&v5 - (float)((float)(point->y - l0->y) * v6);
};

// Line 219: range 000000000CC754F0-000000000CC75790
void __cdecl CalculateConvexHull(Vertex2Array *hull, Vertex2Array *points)
{
  size_t v2; // rdx
  Vector2f *v3; // rbx
  Vector2f *v4; // rax
  Vector2f *v5; // r12
  size_t v6; // rdx
  Vector2f *v7; // rbx
  size_t v8; // rdx
  Vector2f *v9; // rax
  Vector2f *v11; // rdx
  Vector2f *v12; // r12
  size_t v13; // rdx
  Vector2f *v14; // rbx
  size_t v15; // rdx
  Vector2f *v16; // rax
  Vector2f *v18; // rdx
  int i; // [rsp+14h] [rbp-1Ch]
  int i_0; // [rsp+18h] [rbp-18h]
  int j; // [rsp+1Ch] [rbp-14h]

  dynamic_array<Vector2f,false,4ul>::resize_uninitialized(hull, 0LL, kIncreaseToExactSize);
  if ( !dynamic_array<Vector2f,false,4ul>::empty(points) )
  {
    v2 = dynamic_array<Vector2f,false,4ul>::size(points) + 1;
    dynamic_array<Vector2f,false,4ul>::reserve(hull, v2);
    v3 = dynamic_array<Vector2f,false,4ul>::end(points);
    v4 = dynamic_array<Vector2f,false,4ul>::begin(points);
    std::sort<Vector2f *,bool (*)(Vector2f const&,Vector2f const&)>(
      v4,
      v3,
      (bool (*)(const Vector2f *, const Vector2f *))CompareVertices);
    for ( i = 0; i < dynamic_array<Vector2f,false,4ul>::size(points); ++i )
    {
      while ( dynamic_array<Vector2f,false,4ul>::size(hull) > 1 )
      {
        v5 = dynamic_array<Vector2f,false,4ul>::operator[](points, i);
        v6 = dynamic_array<Vector2f,false,4ul>::size(hull) - 1;
        v7 = dynamic_array<Vector2f,false,4ul>::operator[](hull, v6);
        v8 = dynamic_array<Vector2f,false,4ul>::size(hull) - 2;
        v9 = dynamic_array<Vector2f,false,4ul>::operator[](hull, v8);
        if ( CalculatePointSide(v9, v7, v5) > 0.0 )
          break;
        dynamic_array<Vector2f,false,4ul>::pop_back(hull);
      }
      v11 = dynamic_array<Vector2f,false,4ul>::operator[](points, i);
      dynamic_array<Vector2f,false,4ul>::push_back(hull, v11);
    }
    i_0 = dynamic_array<Vector2f,false,4ul>::size(points) - 2;
    j = dynamic_array<Vector2f,false,4ul>::size(hull) + 1;
    while ( i_0 >= 0 )
    {
      while ( dynamic_array<Vector2f,false,4ul>::size(hull) >= j )
      {
        v12 = dynamic_array<Vector2f,false,4ul>::operator[](points, i_0);
        v13 = dynamic_array<Vector2f,false,4ul>::size(hull) - 1;
        v14 = dynamic_array<Vector2f,false,4ul>::operator[](hull, v13);
        v15 = dynamic_array<Vector2f,false,4ul>::size(hull) - 2;
        v16 = dynamic_array<Vector2f,false,4ul>::operator[](hull, v15);
        if ( CalculatePointSide(v16, v14, v12) > 0.0 )
          break;
        dynamic_array<Vector2f,false,4ul>::pop_back(hull);
      }
      v18 = dynamic_array<Vector2f,false,4ul>::operator[](points, i_0);
      dynamic_array<Vector2f,false,4ul>::push_back(hull, v18);
      --i_0;
    }
    dynamic_array<Vector2f,false,4ul>::pop_back(hull);
  }
};

// Line 246: range 000000000CC75791-000000000CC75965
Vector2f __cdecl AverageVertices(const Vertex2Array *points)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const Vector2f *v4; // rax
  _QWORD *v5; // rdx
  const Vector2f *v6; // rax
  float v7; // xmm0_4
  Vector2f v8; // xmm0_8
  size_t i; // [rsp+10h] [rbp-70h]
  size_t pointCount; // [rsp+18h] [rbp-68h]
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 12 pointSum:250";
  *(_QWORD *)(v1 + 16) = AverageVertices;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  pointCount = dynamic_array<Vector2f,false,4ul>::size(points);
  v4 = dynamic_array<Vector2f,false,4ul>::operator[](points, 0LL);
  v5 = v4;
  if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v4->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v4, 8LL);
  }
  *(_QWORD *)(v1 + 32) = *v5;
  for ( i = 1LL; i < pointCount; ++i )
  {
    v6 = dynamic_array<Vector2f,false,4ul>::operator[](points, i);
    Vector2f::operator+=((Vector2f *const)(v1 + 32), v6);
  }
  if ( (pointCount & 0x8000000000000000LL) != 0LL )
    v7 = (float)(int)(pointCount & 1 | (pointCount >> 1)) + (float)(int)(pointCount & 1 | (pointCount >> 1));
  else
    v7 = (float)(int)pointCount;
  v8 = operator*((const Vector2f *)(v1 + 32), 1.0 / v7);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v8;
};

// Line 259: range 000000000CC75966-000000000CC75AB6
float __cdecl ParallelogramArea(const Vector2f *p0, const Vector2f *p1, const Vector2f *p2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  float result; // xmm0_4
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 6 d1:260 64 8 6 d2:261";
  *(_QWORD *)(v3 + 16) = ParallelogramArea;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(Vector2f *)(v3 + 32) = operator-(p1, p0);
  *(Vector2f *)(v3 + 64) = operator-(p2, p0);
  result = (float)(*(float *)(v3 + 68) * *(float *)(v3 + 32)) - (float)(*(float *)(v3 + 36) * *(float *)(v3 + 64));
  if ( v8 == (char *)v3 )
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

// Line 266: range 000000000CC75AB7-000000000CC75AF0
float __cdecl DistanceSqr(const Vector2f *u, const Vector2f *v)
{
  Vector2f inV; // [rsp+18h] [rbp-8h] BYREF

  inV = operator-(u, v);
  return SqrMagnitude(&inV);
};

// Line 271: range 000000000CC75AF1-000000000CC75D4D
float __cdecl LinePointSqrDistance(const Vector2f *l0, const Vector2f *l1, const Vector2f *p)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  float result; // xmm0_4
  float lineSqrLength; // [rsp+28h] [rbp-A8h]
  float t; // [rsp+2Ch] [rbp-A4h]
  char v11[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 6 dl:272 64 8 6 dp:273 96 8 29 closestPointOnLineSegment:285";
  *(_QWORD *)(v4 + 16) = LinePointSqrDistance;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(Vector2f *)(v4 + 32) = operator-(l1, l0);
  *(Vector2f *)v3.m128i_i8 = operator-(p, l0);
  *(_QWORD *)(v4 + 64) = v3.m128i_i64[0];
  *(float *)v3.m128i_i32 = Dot((const Vector2f *)(v4 + 32), (const Vector2f *)(v4 + 32));
  lineSqrLength = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( lineSqrLength == 0.0
    || (t = Dot((const Vector2f *)(v4 + 64), (const Vector2f *)(v4 + 32)) / lineSqrLength, t <= 0.0) )
  {
    result = DistanceSqr(l0, p);
  }
  else if ( t < 1.0 )
  {
    *(Vector2f *)(v4 + 96) = Lerp(l0, l1, t);
    result = DistanceSqr((const Vector2f *)(v4 + 96), p);
  }
  else
  {
    result = DistanceSqr(l1, p);
  }
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 290: range 000000000CC75D4E-000000000CC7612B
bool __cdecl CircleHullOverlap(
        float *penetration,
        const Vertex2Array *hull,
        const Vector2f *circlePosition,
        float circleRadius)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __m128i v7; // xmm0
  const Vector2f *v8; // rax
  const Vector2f *v9; // rax
  const Vector2f *v11; // r13
  const Vector2f *v12; // rcx
  const Vector2f *v13; // r13
  const Vector2f *v14; // rcx
  float v15; // xmm0_4
  bool result; // al
  float v17; // xmm0_4
  int v18; // eax
  int i; // [rsp+2Ch] [rbp-74h]
  int j; // [rsp+30h] [rbp-70h]
  float linePointSqrDistance; // [rsp+34h] [rbp-6Ch]
  size_t hullSize; // [rsp+38h] [rbp-68h]
  char v25[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 18 simpleCentroid:295";
  *(_QWORD *)(v4 + 16) = CircleHullOverlap;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  hullSize = dynamic_array<Vector2f,false,4ul>::size(hull);
  if ( *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)penetration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(penetration);
  }
  v7 = 0LL;
  *penetration = 0.0;
  *(Vector2f *)v7.m128i_i8 = AverageVertices(hull);
  *(_QWORD *)(v4 + 32) = v7.m128i_i64[0];
  i = 0;
  for ( j = hullSize - 1; ; j = v18 )
  {
    if ( hullSize <= i )
    {
      result = 0;
      goto LABEL_26;
    }
    v8 = dynamic_array<Vector2f,false,4ul>::operator[](hull, j);
    if ( ParallelogramArea((const Vector2f *)(v4 + 32), v8, circlePosition) <= 0.0 )
    {
      v9 = dynamic_array<Vector2f,false,4ul>::operator[](hull, i);
      if ( ParallelogramArea((const Vector2f *)(v4 + 32), v9, circlePosition) >= 0.0 )
        break;
    }
    v18 = i++;
  }
  v11 = dynamic_array<Vector2f,false,4ul>::operator[](hull, i);
  v12 = dynamic_array<Vector2f,false,4ul>::operator[](hull, j);
  *(float *)v7.m128i_i32 = LinePointSqrDistance(v12, v11, circlePosition);
  linePointSqrDistance = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  v13 = dynamic_array<Vector2f,false,4ul>::operator[](hull, i);
  v14 = dynamic_array<Vector2f,false,4ul>::operator[](hull, j);
  if ( ParallelogramArea(v14, v13, circlePosition) >= 0.0 )
  {
    if ( linePointSqrDistance < (float)(circleRadius * circleRadius) )
    {
      v17 = circleRadius - Sqrt(linePointSqrDistance);
      if ( *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)penetration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(penetration);
      }
      *penetration = v17;
      result = 1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)penetration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(penetration);
      }
      *penetration = 0.0;
      result = 0;
    }
  }
  else
  {
    v15 = Sqrt(linePointSqrDistance) + circleRadius;
    if ( *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)penetration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)penetration >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(penetration);
    }
    *penetration = v15;
    result = 1;
  }
LABEL_26:
  if ( v25 == (char *)v4 )
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

// Line 327: range 000000000CC7612C-000000000CC76E81
int __cdecl CalculateClippedCapsule(
        Vector2f *points,
        float *radius,
        const Vector3f *capsuleCenter,
        const Vector3f *capsuleExtents,
        const Vector3f *capsuleAxis,
        float slabMinY,
        float slabMaxY)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  float *v10; // rax
  float *v11; // rdx
  int result; // eax
  __m128i v13; // xmm1
  int v14; // ecx
  Vector2f *v15; // rcx
  __m128i v16; // xmm0
  Vector2f *v17; // rcx
  __m128i v18; // xmm1
  int v19; // ecx
  Vector2f *v20; // rcx
  __m128i v21; // xmm0
  Vector2f *v22; // rcx
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  Vector2f *v25; // rcx
  int v26; // xmm0_4
  bool axisAligned; // [rsp+3Bh] [rbp-155h]
  float v33; // [rsp+3Ch] [rbp-154h] BYREF
  float capMinY; // [rsp+40h] [rbp-150h]
  float capMaxY; // [rsp+44h] [rbp-14Ch]
  float fudgedDisplacementY_1; // [rsp+48h] [rbp-148h]
  float t_1; // [rsp+4Ch] [rbp-144h]
  float fudgedDisplacementY_2; // [rsp+50h] [rbp-140h]
  float t_2; // [rsp+54h] [rbp-13Ch]
  float hMax_0; // [rsp+58h] [rbp-138h]
  float hMin_0; // [rsp+5Ch] [rbp-134h]
  float fudgedDisplacementY_0; // [rsp+60h] [rbp-130h]
  float t_0; // [rsp+64h] [rbp-12Ch]
  float hMin; // [rsp+68h] [rbp-128h]
  float hMax; // [rsp+6Ch] [rbp-124h]
  float fudgedDisplacementY; // [rsp+70h] [rbp-120h]
  float t; // [rsp+74h] [rbp-11Ch]
  Vector3f rhs; // [rsp+78h] [rbp-118h] BYREF
  Vector3f v; // [rsp+84h] [rbp-10Ch] BYREF
  char v50[256]; // [rsp+90h] [rbp-100h] BYREF

  v7 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(224LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "7 32 4 13 capRadius:329 48 4 13 capHeight:329 64 8 9 endLo:339 96 8 9 endHi:340 128 8 9 capLo:40"
                        "8 160 8 9 capHi:416 192 12 13 capUpAxis:332";
  *(_QWORD *)(v7 + 16) = CalculateClippedCapsule;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -218959360;
  v9[536862725] = -218959360;
  v9[536862726] = -202177536;
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 48) = 0;
  FitCapsuleToExtents((float *)(v7 + 32), (float *)(v7 + 48), capsuleExtents);
  if ( ((unsigned __int8)capsuleAxis & 7) >= *(_BYTE *)(((unsigned __int64)capsuleAxis >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)capsuleAxis >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&capsuleAxis->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)capsuleAxis + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&capsuleAxis->z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load_n(capsuleAxis, 12LL);
  }
  *(_QWORD *)(v7 + 192) = *(_QWORD *)&capsuleAxis->x;
  *(float *)(v7 + 200) = capsuleAxis->z;
  v10 = Vector3f::operator[]((Vector3f *const)(v7 + 192), 1);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  if ( *v11 < 0.0 )
    *(Vector3f *)(v7 + 192) = Vector3f::operator-((const Vector3f *const)(v7 + 192));
  if ( *(_BYTE *)(((unsigned __int64)&capsuleCenter->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)capsuleCenter + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&capsuleCenter->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&capsuleCenter->y);
  }
  capMinY = capsuleCenter->y - (float)(*(float *)(v7 + 48) * *(float *)(v7 + 196));
  capMaxY = (float)(*(float *)(v7 + 48) * *(float *)(v7 + 196)) + capsuleCenter->y;
  rhs = operator*(*(const float *)(v7 + 48), (const Vector3f *)(v7 + 192));
  v = operator-(capsuleCenter, &rhs);
  *(Vector2f *)(v7 + 64) = ExtractXZVector2(&v);
  rhs = operator*(*(const float *)(v7 + 48), (const Vector3f *)(v7 + 192));
  v = operator+(capsuleCenter, &rhs);
  *(Vector2f *)(v7 + 96) = ExtractXZVector2(&v);
  axisAligned = *(float *)(v7 + 196) > 0.99000001;
  if ( capMinY <= slabMaxY )
  {
    if ( slabMinY <= capMaxY )
    {
      *(_QWORD *)(v7 + 128) = *(_QWORD *)(v7 + 64);
      if ( slabMinY > capMinY )
      {
        fudgedDisplacementY_1 = *(float *)(v7 + 32) * (float)(1.0 - *(float *)(v7 + 196));
        v23 = (__m128i)LODWORD(slabMinY);
        v33 = (float)((float)(slabMinY - capMinY) - fudgedDisplacementY_1) / (float)(capMaxY - capMinY);
        *(float *)v23.m128i_i32 = clamp01<float>(&v33);
        LODWORD(t_1) = _mm_cvtsi128_si32(v23);
        *(Vector2f *)(v7 + 128) = Lerp((const Vector2f *)(v7 + 64), (const Vector2f *)(v7 + 96), t_1);
      }
      *(_QWORD *)(v7 + 160) = *(_QWORD *)(v7 + 96);
      if ( capMaxY > slabMaxY )
      {
        fudgedDisplacementY_2 = *(float *)(v7 + 32) * (float)(1.0 - *(float *)(v7 + 196));
        v24 = (__m128i)LODWORD(slabMaxY);
        v33 = (float)((float)(slabMaxY - capMinY) + fudgedDisplacementY_2) / (float)(capMaxY - capMinY);
        *(float *)v24.m128i_i32 = clamp01<float>(&v33);
        LODWORD(t_2) = _mm_cvtsi128_si32(v24);
        *(Vector2f *)(v7 + 160) = Lerp((const Vector2f *)(v7 + 64), (const Vector2f *)(v7 + 96), t_2);
      }
      if ( ((unsigned __int8)points & 7) >= *(_BYTE *)(((unsigned __int64)points >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)points >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&points->y + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)points + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&points->y + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(points, 8LL);
      }
      *points = *(Vector2f *)(v7 + 128);
      v25 = points + 1;
      if ( (((unsigned __int8)points + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)points + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&points[1], 8LL);
      }
      *v25 = *(Vector2f *)(v7 + 160);
      v26 = *(_DWORD *)(v7 + 32);
      if ( *(_BYTE *)(((unsigned __int64)radius >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)radius >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(radius);
      }
      *(_DWORD *)radius = v26;
      result = 2;
    }
    else
    {
      hMax_0 = slabMinY - capMaxY;
      if ( (float)(slabMinY - capMaxY) <= *(float *)(v7 + 32) )
      {
        if ( ((unsigned __int8)points & 7) >= *(_BYTE *)(((unsigned __int64)points >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)points >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&points->y + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)points + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&points->y + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(points, 8LL);
        }
        *points = *(Vector2f *)(v7 + 96);
        v18 = (__m128i)*(unsigned int *)(v7 + 32);
        *(float *)v18.m128i_i32 = (float)(*(float *)v18.m128i_i32 * *(float *)(v7 + 32)) - (float)(hMax_0 * hMax_0);
        sqrtf(*(float *)v18.m128i_i32);
        v19 = _mm_cvtsi128_si32(v18);
        if ( *(_BYTE *)(((unsigned __int64)radius >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)radius >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(radius);
        }
        *(_DWORD *)radius = v19;
        if ( axisAligned )
        {
          result = 1;
        }
        else
        {
          hMin_0 = slabMinY - capMinY;
          if ( *(float *)(v7 + 32) <= (float)(slabMinY - capMinY) )
          {
            fudgedDisplacementY_0 = *(float *)(v7 + 32) * (float)(1.0 - *(float *)(v7 + 196));
            v21 = (__m128i)LODWORD(hMin_0);
            v33 = (float)(hMin_0 - fudgedDisplacementY_0) / (float)(capMaxY - capMinY);
            *(float *)v21.m128i_i32 = clamp01<float>(&v33);
            LODWORD(t_0) = _mm_cvtsi128_si32(v21);
            *(Vector2f *)(v7 + 160) = Lerp((const Vector2f *)(v7 + 64), (const Vector2f *)(v7 + 96), t_0);
            v22 = points + 1;
            if ( (((unsigned __int8)points + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)points + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_store_n(&points[1], 8LL);
            }
            *v22 = *(Vector2f *)(v7 + 160);
          }
          else
          {
            v20 = points + 1;
            if ( (((unsigned __int8)points + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)points + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_store_n(&points[1], 8LL);
            }
            *v20 = *(Vector2f *)(v7 + 64);
          }
          result = 2;
        }
      }
      else
      {
        result = 0;
      }
    }
  }
  else
  {
    hMin = capMinY - slabMaxY;
    if ( (float)(capMinY - slabMaxY) <= *(float *)(v7 + 32) )
    {
      if ( ((unsigned __int8)points & 7) >= *(_BYTE *)(((unsigned __int64)points >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)points >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&points->y + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)points + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&points->y + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(points, 8LL);
      }
      *points = *(Vector2f *)(v7 + 64);
      v13 = (__m128i)*(unsigned int *)(v7 + 32);
      *(float *)v13.m128i_i32 = (float)(*(float *)v13.m128i_i32 * *(float *)(v7 + 32)) - (float)(hMin * hMin);
      sqrtf(*(float *)v13.m128i_i32);
      v14 = _mm_cvtsi128_si32(v13);
      if ( *(_BYTE *)(((unsigned __int64)radius >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)radius >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(radius);
      }
      *(_DWORD *)radius = v14;
      if ( axisAligned )
      {
        result = 1;
      }
      else
      {
        hMax = capMaxY - slabMaxY;
        if ( *(float *)(v7 + 32) <= (float)(capMaxY - slabMaxY) )
        {
          fudgedDisplacementY = *(float *)(v7 + 32) * (float)(1.0 - *(float *)(v7 + 196));
          v16 = (__m128i)LODWORD(hMin);
          v33 = (float)(hMin + fudgedDisplacementY) / (float)(capMaxY - capMinY);
          *(float *)v16.m128i_i32 = clamp01<float>(&v33);
          LODWORD(t) = _mm_cvtsi128_si32(v16);
          *(Vector2f *)(v7 + 160) = Lerp((const Vector2f *)(v7 + 64), (const Vector2f *)(v7 + 96), t);
          v17 = points + 1;
          if ( (((unsigned __int8)points + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)points + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store_n(&points[1], 8LL);
          }
          *v17 = *(Vector2f *)(v7 + 160);
        }
        else
        {
          v15 = points + 1;
          if ( (((unsigned __int8)points + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&points[1] >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)points + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&points[1].y + 3) >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store_n(&points[1], 8LL);
          }
          *v15 = *(Vector2f *)(v7 + 96);
        }
        result = 2;
      }
    }
    else
    {
      result = 0;
    }
  }
  if ( v50 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 433: range 000000000CC76E82-000000000CC7701D
void __cdecl FitCapsuleToExtents(float *radius, float *height, const Vector3f *capsuleExtents)
{
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  int *v6; // rdx
  int v7; // xmm0_4
  float __a; // [rsp+24h] [rbp-Ch] BYREF
  float __b; // [rsp+28h] [rbp-8h] BYREF
  float r; // [rsp+2Ch] [rbp-4h]

  v3 = (float *)std::max<float>(&capsuleExtents->x, &capsuleExtents->z);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  r = *v4;
  if ( *(_BYTE *)(((unsigned __int64)radius >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(radius);
  }
  *radius = r;
  if ( *(_BYTE *)(((unsigned __int64)&capsuleExtents->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)capsuleExtents + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&capsuleExtents->y >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&capsuleExtents->y);
  }
  __b = capsuleExtents->y - r;
  __a = 0.0;
  v5 = (float *)std::max<float>(&__a, &__b);
  v6 = (int *)v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v7 = *v6;
  if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(height);
  }
  *(_DWORD *)height = v7;
};

// Line 440: range 000000000CC7701E-000000000CC77266
void __cdecl CalcCapsuleWorldExtents(
        Vector3f *worldExtents,
        const Vector3f *localExtents,
        const Vector3f *xAxis,
        const Vector3f *yAxis,
        const Vector3f *zAxis)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  float v8; // r12d
  Vector3f inV; // [rsp+3Ch] [rbp-A4h] BYREF
  Vector3f lhs; // [rsp+48h] [rbp-98h] BYREF
  Vector3f rhs; // [rsp+54h] [rbp-8Ch] BYREF
  char v13[128]; // [rsp+60h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 10 radius:441 64 4 10 height:441";
  *(_QWORD *)(v5 + 16) = CalcCapsuleWorldExtents;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 64) = 0;
  FitCapsuleToExtents((float *)(v5 + 48), (float *)(v5 + 64), localExtents);
  Vector3f::Vector3f(&rhs, *(float *)(v5 + 48), *(float *)(v5 + 48), *(float *)(v5 + 48));
  v8 = *(float *)(v5 + 64);
  inV = Abs(yAxis);
  lhs = operator*(&inV, v8);
  if ( ((unsigned __int8)worldExtents & 7) >= *(_BYTE *)(((unsigned __int64)worldExtents >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)worldExtents >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&worldExtents->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)worldExtents + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&worldExtents->z + 3) >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_store_n(worldExtents, 12LL);
  }
  *worldExtents = operator+(&lhs, &rhs);
  if ( v13 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 447: range 000000000CC77267-000000000CC774D4
void __cdecl CalcBoxWorldExtents(
        Vector3f *worldExtents,
        const Vector3f *localExtents,
        const Vector3f *xAxis,
        const Vector3f *yAxis,
        const Vector3f *zAxis)
{
  float z; // ebx
  float y; // ebx
  float x; // ebx
  Vector3f v11; // [rsp+3Ch] [rbp-64h] BYREF
  Vector3f lhs; // [rsp+48h] [rbp-58h] BYREF
  Vector3f v13; // [rsp+54h] [rbp-4Ch] BYREF
  Vector3f rhs; // [rsp+60h] [rbp-40h] BYREF
  Vector3f v15; // [rsp+6Ch] [rbp-34h] BYREF
  Vector3f inV; // [rsp+78h] [rbp-28h] BYREF
  Vector3f v17; // [rsp+84h] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&localExtents->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)localExtents + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&localExtents->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&localExtents->z);
  }
  z = localExtents->z;
  inV = Abs(zAxis);
  v17 = operator*(&inV, z);
  if ( *(_BYTE *)(((unsigned __int64)&localExtents->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)localExtents + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&localExtents->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&localExtents->y);
  }
  y = localExtents->y;
  v13 = Abs(yAxis);
  rhs = operator*(&v13, y);
  if ( *(_BYTE *)(((unsigned __int64)localExtents >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)localExtents & 7) + 3) >= *(_BYTE *)(((unsigned __int64)localExtents >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(localExtents);
  }
  x = localExtents->x;
  v11 = Abs(xAxis);
  lhs = operator*(&v11, x);
  v15 = operator+(&lhs, &rhs);
  if ( ((unsigned __int8)worldExtents & 7) >= *(_BYTE *)(((unsigned __int64)worldExtents >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)worldExtents >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&worldExtents->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)worldExtents + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&worldExtents->z + 3) >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_store_n(worldExtents, 12LL);
  }
  *worldExtents = operator+(&v15, &v17);
};

// Line 453: range 000000000CC774D5-000000000CC7797E
void __cdecl CalculateOrientedBoxCorners(
        Vector3f *cornerVertices,
        const Vector3f *position,
        const Vector3f *extents,
        const Vector3f *xAxis,
        const Vector3f *yAxis,
        const Vector3f *zAxis)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  float x; // eax
  float y; // eax
  float z; // eax
  unsigned __int64 v12; // rdx
  int i; // [rsp+30h] [rbp-70h]
  Vector3f inV; // [rsp+34h] [rbp-6Ch] BYREF
  char v19[96]; // [rsp+40h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 12 10 corner:456";
  *(_QWORD *)(v6 + 16) = CalculateOrientedBoxCorners;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202177536;
  for ( i = 0; i <= 7; ++i )
  {
    if ( ((unsigned __int8)position & 7) >= *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(position, 12LL);
    }
    *(Vector3f *)(v6 + 32) = *position;
    if ( (i & 1) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)extents & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(extents);
      }
      x = extents->x;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)extents & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(extents);
      }
      x = COERCE_FLOAT(_mm_cvtsi128_si32((__m128i)_mm_xor_ps((__m128)LODWORD(extents->x), (__m128)0x80000000)));
    }
    inV = operator*(xAxis, x);
    Vector3f::operator+=((Vector3f *const)(v6 + 32), &inV);
    if ( (i & 2) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)extents + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&extents->y);
      }
      y = extents->y;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)extents + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&extents->y);
      }
      y = COERCE_FLOAT(_mm_cvtsi128_si32((__m128i)_mm_xor_ps((__m128)LODWORD(extents->y), (__m128)0x80000000)));
    }
    inV = operator*(yAxis, y);
    Vector3f::operator+=((Vector3f *const)(v6 + 32), &inV);
    if ( (i & 4) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)extents + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&extents->z);
      }
      z = extents->z;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)extents + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&extents->z);
      }
      z = COERCE_FLOAT(_mm_cvtsi128_si32((__m128i)_mm_xor_ps((__m128)LODWORD(extents->z), (__m128)0x80000000)));
    }
    inV = operator*(zAxis, z);
    Vector3f::operator+=((Vector3f *const)(v6 + 32), &inV);
    v12 = (unsigned __int64)&cornerVertices[i];
    if ( (((unsigned __int8)cornerVertices + 12 * i) & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000)
      && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)cornerVertices + 12 * i + 11) & 7) >= *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&cornerVertices[i], 12LL);
    }
    *(_QWORD *)v12 = *(_QWORD *)(v6 + 32);
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(v6 + 40);
  }
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
