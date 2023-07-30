// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/DynamicMeshUtils.cpp

// Line 8: range 000000000CC6711C-000000000CC6753F
// local variable allocation has failed, the output may be wrong!
int __cdecl SplitPoly(
        Polygon *inside,
        const Polygon *poly,
        const Plane *plane,
        float quantFactor,
        dynamic_array<unsigned char,false,1> *usedEdges,
        size_t ip_0)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  const Vector3f *v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  const float *v12; // rax
  _DWORD *v13; // rdx
  const float *v14; // rax
  _DWORD *v15; // rdx
  char v16; // dl
  int result; // eax
  size_t iv; // [rsp+38h] [rbp-138h]
  size_t vertexCount; // [rsp+40h] [rbp-130h]
  const Vector3f *v; // [rsp+48h] [rbp-128h]
  char v25[288]; // [rsp+50h] [rbp-120h] BYREF

  v6 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 11 distance:16 64 4 14 minDistance:20 80 4 14 maxDistance:20 96 128 7 dist:13";
  *(_QWORD *)(v6 + 16) = SplitPoly;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862727] = -202116109;
  vertexCount = dynamic_array<Vector3f,false,4ul>::size(poly);
  v9 = dynamic_array<Vector3f,false,4ul>::operator[](poly, 0LL);
  *(float *)v10.m128i_i32 = Plane::GetDistanceToPoint(plane, v9);
  *(_DWORD *)(v6 + 48) = _mm_cvtsi128_si32(v10);
  if ( quantFactor > Abs(*(float *)(v6 + 48)) )
    *(_DWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 96) = *(_DWORD *)(v6 + 48);
  *(_DWORD *)(v6 + 80) = *(_DWORD *)(v6 + 96);
  v11 = (__m128i)*(unsigned int *)(v6 + 80);
  *(_DWORD *)(v6 + 64) = v11.m128i_i32[0];
  for ( iv = 1LL; iv < vertexCount; ++iv )
  {
    v = dynamic_array<Vector3f,false,4ul>::operator[](poly, iv);
    *(float *)v11.m128i_i32 = Plane::GetDistanceToPoint(plane, v);
    *(_DWORD *)(v6 + 48) = _mm_cvtsi128_si32(v11);
    if ( quantFactor > Abs(*(float *)(v6 + 48)) )
      *(_DWORD *)(v6 + 48) = 0;
    v12 = std::min<float>((const float *)(v6 + 64), (const float *)(v6 + 48));
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    *(_DWORD *)(v6 + 64) = *v13;
    v14 = std::max<float>((const float *)(v6 + 80), (const float *)(v6 + 48));
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    *(_DWORD *)(v6 + 80) = *v15;
    v11 = (__m128i)*(unsigned int *)(v6 + 48);
    v16 = *(_BYTE *)(((4 * iv + v6 + 96) >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((4 * iv + v6 + 96) & 7) + 3) >= v16 )
      __asan_report_store4(4 * iv + v6 + 96);
    *(_DWORD *)(v6 + 256 + 4 * iv - 160) = v11.m128i_i32[0];
  }
  if ( *(float *)(v6 + 80) >= 0.0 )
  {
    if ( *(float *)(v6 + 64) <= 0.0 )
    {
      if ( vertexCount == 1 )
      {
        result = -1;
      }
      else
      {
        SplitPolyInternal(vertexCount, (float *)(v6 + 96), inside, poly, plane, usedEdges, ip_0);
        result = 0;
      }
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = -1;
  }
  if ( v25 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 52: range 000000000CC67540-000000000CC67E2C
// local variable allocation has failed, the output may be wrong!
void __cdecl SplitPolyInternal(
        size_t vertexCount,
        float *dist,
        Polygon *inside,
        const Polygon *poly,
        const Plane *plane,
        dynamic_array<unsigned char,false,1> *usedEdges,
        size_t ip_0)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  unsigned __int64 n; // rax
  float *v11; // rcx
  float *v12; // rcx
  __int64 v13; // xmm0_8
  float v14; // xmm1_4
  unsigned __int64 v15; // rax
  unsigned __int8 *v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // xmm0_8
  float v19; // xmm1_4
  unsigned __int64 v20; // rax
  unsigned __int8 *v21; // rax
  char *v22; // rdx
  char v23; // r14
  unsigned __int8 *v24; // rax
  _BYTE *v25; // rdx
  unsigned __int8 *v26; // rax
  _BYTE *v27; // rdx
  unsigned __int8 *v28; // rax
  char *v29; // rdx
  char v30; // r14
  unsigned __int8 *v31; // rax
  _BYTE *v32; // rdx
  float prevDist; // [rsp+30h] [rbp-F0h]
  float currDist; // [rsp+34h] [rbp-ECh]
  size_t iv; // [rsp+48h] [rbp-D8h]
  const Vector3f *currVert; // [rsp+50h] [rbp-D0h]
  char v40[176]; // [rsp+70h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 12 11 prevVert:61 64 24 7 used:58";
  *(_QWORD *)(v7 + 16) = SplitPolyInternal;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219020288;
  v9[536862722] = -218103808;
  v9[536862723] = -202116109;
  if ( vertexCount != dynamic_array<Vector3f,false,4ul>::size(poly) )
  {
    __asan_handle_no_return(poly);
    __assert_fail(
      "vertexCount == poly.size()",
      "./src/pathfinding/Internal/Obstacles/DynamicMeshUtils.cpp",
      0x35u,
      "void SplitPolyInternal(size_t, float*, Polygon&, const Polygon&, const Plane&, dynamic_array<unsigned char>&, size_t)");
  }
  if ( vertexCount <= 1 )
  {
    __asan_handle_no_return(poly);
    __assert_fail(
      "vertexCount > 1",
      "./src/pathfinding/Internal/Obstacles/DynamicMeshUtils.cpp",
      0x36u,
      "void SplitPolyInternal(size_t, float*, Polygon&, const Polygon&, const Plane&, dynamic_array<unsigned char>&, size_t)");
  }
  if ( ip_0 > 0x7F )
  {
    __asan_handle_no_return(poly);
    __assert_fail(
      "ip < PLANE_FLAG",
      "./src/pathfinding/Internal/Obstacles/DynamicMeshUtils.cpp",
      0x37u,
      "void SplitPolyInternal(size_t, float*, Polygon&, const Polygon&, const Plane&, dynamic_array<unsigned char>&, size_t)");
  }
  dynamic_array<Vector3f,false,4ul>::resize_uninitialized(inside, 0LL, kIncreaseToExactSize);
  dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v7 + 64));
  dynamic_array<unsigned char,false,1ul>::reserve((dynamic_array<unsigned char,false,1> *const)(v7 + 64), 0x20uLL);
  n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](poly, vertexCount - 1);
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0 && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 12LL);
  }
  *(_QWORD *)(v7 + 32) = *(_QWORD *)n;
  *(_DWORD *)(v7 + 40) = *(_DWORD *)(n + 8);
  v11 = &dist[vertexCount - 1];
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * vertexCount - 4 + (_BYTE)dist) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&dist[vertexCount - 1]);
  }
  prevDist = *v11;
  for ( iv = 0LL; iv < vertexCount; ++iv )
  {
    currVert = dynamic_array<Vector3f,false,4ul>::operator[](poly, iv);
    v12 = &dist[iv];
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * iv + (_BYTE)dist) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&dist[iv]);
    }
    currDist = *v12;
    if ( *v12 >= 0.0 || prevDist <= 0.0 )
    {
      if ( currDist > 0.0 && prevDist < 0.0 )
      {
        *(Vector3f *)&v18 = Lerp((const Vector3f *)(v7 + 32), currVert, (float)-prevDist / (float)(currDist - prevDist));
        v20 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::push_back(inside);
        if ( (char)(v20 & 7) >= *(_BYTE *)((v20 >> 3) + 0x7FFF8000) && *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v20 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v20 + 11) & 7) >= *(_BYTE *)(((v20 + 11) >> 3) + 0x7FFF8000) )
        {
          v20 = __asan_report_store_n(v20, 12LL);
        }
        *(_QWORD *)v20 = v18;
        *(float *)(v20 + 8) = v19;
        v21 = dynamic_array<unsigned char,false,1ul>::operator[](usedEdges, iv);
        v22 = (char *)v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v21);
        }
        v23 = *v22;
        v24 = dynamic_array<unsigned char,false,1ul>::push_back((dynamic_array<unsigned char,false,1> *const)(v7 + 64));
        v25 = v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v24);
        }
        *v25 = v23;
      }
    }
    else
    {
      *(Vector3f *)&v13 = Lerp(currVert, (const Vector3f *)(v7 + 32), (float)-currDist / (float)(prevDist - currDist));
      v15 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::push_back(inside);
      if ( (char)(v15 & 7) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) && *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v15 + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((v15 + 11) & 7) >= *(_BYTE *)(((v15 + 11) >> 3) + 0x7FFF8000) )
      {
        v15 = __asan_report_store_n(v15, 12LL);
      }
      *(_QWORD *)v15 = v13;
      *(float *)(v15 + 8) = v14;
      v16 = dynamic_array<unsigned char,false,1ul>::push_back((dynamic_array<unsigned char,false,1> *const)(v7 + 64));
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v16);
      }
      *v17 = ip_0 | 0x80;
    }
    if ( currDist <= 0.0 )
    {
      dynamic_array<Vector3f,false,4ul>::push_back(inside, currVert);
      if ( prevDist > 0.0 && currDist == 0.0 )
      {
        v26 = dynamic_array<unsigned char,false,1ul>::push_back((dynamic_array<unsigned char,false,1> *const)(v7 + 64));
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v26 & 7) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v26);
        }
        *v27 = ip_0 | 0x80;
      }
      else
      {
        v28 = dynamic_array<unsigned char,false,1ul>::operator[](usedEdges, iv);
        v29 = (char *)v28;
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v28 & 7) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v28);
        }
        v30 = *v29;
        v31 = dynamic_array<unsigned char,false,1ul>::push_back((dynamic_array<unsigned char,false,1> *const)(v7 + 64));
        v32 = v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v31 & 7) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v31);
        }
        *v32 = v30;
      }
    }
    if ( ((unsigned __int8)currVert & 7) >= *(_BYTE *)(((unsigned __int64)currVert >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)currVert >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&currVert->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)currVert + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&currVert->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(currVert, 12LL);
    }
    *(_QWORD *)(v7 + 32) = *(_QWORD *)&currVert->x;
    *(float *)(v7 + 40) = currVert->z;
    prevDist = currDist;
  }
  dynamic_array<unsigned char,false,1ul>::operator=(usedEdges, (const dynamic_array<unsigned char,false,1> *)(v7 + 64));
  dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v7 + 64));
  if ( v40 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 104: range 000000000CC67E2D-000000000CC67EC5
// local variable allocation has failed, the output may be wrong!
int __cdecl FindFurthest(const Plane *plane, const dynamic_array<Vector3f,false,4> *vertices, float quantFactor)
{
  __m128i v3; // xmm0
  const Vector3f *v4; // rdx
  int bestIndex; // [rsp+2Ch] [rbp-14h]
  float bestDist; // [rsp+30h] [rbp-10h]
  float dist; // [rsp+34h] [rbp-Ch]
  size_t iv; // [rsp+38h] [rbp-8h]

  bestIndex = -1;
  *(_OWORD *)&quantFactor = LODWORD(quantFactor);
  bestDist = quantFactor;
  for ( iv = 0LL; iv < dynamic_array<Vector3f,false,4ul>::size(vertices); ++iv )
  {
    v4 = dynamic_array<Vector3f,false,4ul>::operator[](vertices, iv);
    *(float *)v3.m128i_i32 = Plane::GetDistanceToPoint(plane, v4);
    dist = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    v3 = (__m128i)LODWORD(dist);
    if ( dist > bestDist )
    {
      v3 = (__m128i)LODWORD(dist);
      bestDist = dist;
      bestIndex = iv;
    }
  }
  return bestIndex;
};
