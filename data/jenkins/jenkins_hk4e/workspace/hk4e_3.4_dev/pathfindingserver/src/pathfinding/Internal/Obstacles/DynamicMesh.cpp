// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/DynamicMesh.cpp

// Line 16: range 000000000CC60605-000000000CC607EE
// local variable allocation has failed, the output may be wrong!
bool __cdecl DegenerateTriangle(const Polygon *tri)
{
  __m128i v1; // xmm1
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const Vector3f *v5; // r14
  const Vector3f *v6; // rax
  __int64 v7; // xmm0_8
  const Vector3f *v8; // r14
  const Vector3f *v9; // rax
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  __m128i v13; // xmm0
  bool result; // al
  char v15[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 12 5 ab:19 64 12 5 ac:20 96 12 4 n:21";
  *(_QWORD *)(v2 + 16) = DegenerateTriangle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862723] = -202177536;
  v5 = dynamic_array<Vector3f,false,4ul>::operator[](tri, 0LL);
  v6 = dynamic_array<Vector3f,false,4ul>::operator[](tri, 1uLL);
  *(Vector3f *)((char *)&v1 - 8) = operator-(v6, v5);
  *(_QWORD *)(v2 + 32) = v7;
  *(_DWORD *)(v2 + 40) = v1.m128i_i32[0];
  v8 = dynamic_array<Vector3f,false,4ul>::operator[](tri, 0LL);
  v9 = dynamic_array<Vector3f,false,4ul>::operator[](tri, 2uLL);
  *(Vector3f *)((char *)&v1 - 8) = operator-(v9, v8);
  *(_QWORD *)(v2 + 64) = v10;
  *(_DWORD *)(v2 + 72) = v1.m128i_i32[0];
  *(Vector3f *)((char *)&v1 - 8) = Cross((const Vector3f *)(v2 + 32), (const Vector3f *)(v2 + 64));
  v12 = v11;
  v13 = v1;
  *(_QWORD *)(v2 + 96) = v12;
  *(_DWORD *)(v2 + 104) = v1.m128i_i32[0];
  *(float *)v13.m128i_i32 = SqrMagnitude((const Vector3f *)(v2 + 96));
  result = COERCE_FLOAT(_mm_cvtsi128_si32(v13)) == 0.0;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 28: range 000000000CC607EF-000000000CC608CD
bool __cdecl IsSafeConvex(const dynamic_array<Vector3f,false,4> *vertices)
{
  __m128i xmm0_0; // xmm0
  size_t Index; // rdx
  size_t v3; // rdx
  const Vector3f *v4; // rdx
  float triArea; // [rsp+14h] [rbp-2Ch]
  size_t i; // [rsp+18h] [rbp-28h]
  size_t vertexCount; // [rsp+20h] [rbp-20h]
  const Vector3f *v0; // [rsp+28h] [rbp-18h]
  const Vector3f *v1; // [rsp+30h] [rbp-10h]

  vertexCount = dynamic_array<Vector3f,false,4ul>::size(vertices);
  for ( i = 0LL; i < vertexCount; ++i )
  {
    Index = PrevIndex(i, vertexCount);
    v0 = dynamic_array<Vector3f,false,4ul>::operator[](vertices, Index);
    v1 = dynamic_array<Vector3f,false,4ul>::operator[](vertices, i);
    v3 = NextIndex(i, vertexCount);
    v4 = dynamic_array<Vector3f,false,4ul>::operator[](vertices, v3);
    *(float *)xmm0_0.m128i_i32 = TriArea2D(v0, v1, v4);
    triArea = COERCE_FLOAT(_mm_cvtsi128_si32(xmm0_0));
    xmm0_0 = (__m128i)0x3C23D70Au;
    if ( triArea <= 0.0099999998 )
      return 0;
  }
  return 1;
};

// Line 44: range 000000000CC608CE-000000000CC60D0D
// local variable allocation has failed, the output may be wrong!
bool __cdecl PolygonDegenerate(
        size_t vertexCount,
        const uint16_t *indices,
        const Vector3f *vertices,
        const float quantFactor)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  bool result; // al
  __m128i v9; // xmm0
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // xmm0_8
  const float *v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // xmm0_8
  const float *v16; // rax
  unsigned int *v17; // rdx
  float __a; // [rsp+20h] [rbp-A0h] BYREF
  float area; // [rsp+24h] [rbp-9Ch]
  float triArea; // [rsp+28h] [rbp-98h]
  float safety; // [rsp+2Ch] [rbp-94h]
  size_t i; // [rsp+30h] [rbp-90h]
  const Vector3f *v0; // [rsp+38h] [rbp-88h]
  const Vector3f *v1; // [rsp+40h] [rbp-80h]
  const Vector3f *v2; // [rsp+48h] [rbp-78h]
  Vector3f inV; // [rsp+54h] [rbp-6Ch] BYREF
  char v29[96]; // [rsp+60h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 12 maxSideSq:50";
  *(_QWORD *)(v5 + 16) = PolygonDegenerate;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  if ( vertexCount > 2 )
  {
    area = 0.0;
    v9 = 0LL;
    *(_DWORD *)(v5 + 32) = 0;
    for ( i = 2LL; i < vertexCount; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)indices >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)indices & 7) + 1) >= *(_BYTE *)(((unsigned __int64)indices >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(indices);
      }
      v0 = &vertices[*indices];
      v10 = (unsigned __int64)&indices[i - 1];
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((2 * i - 2 + (_BYTE)indices) & 7) + 1) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&indices[i - 1]);
      }
      v1 = &vertices[*(unsigned __int16 *)v10];
      v11 = (unsigned __int64)&indices[i];
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((2 * i + (_BYTE)indices) & 7) + 1) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&indices[i]);
      }
      v2 = &vertices[*(unsigned __int16 *)v11];
      *(float *)v9.m128i_i32 = TriArea2D(v0, v1, v2);
      triArea = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
      area = area + triArea;
      *(Vector3f *)((char *)&v4 - 8) = operator-(v1, v0);
      *(_QWORD *)&inV.x = v12;
      LODWORD(inV.z) = v4.m128i_i32[0];
      SqrMagnitude(&inV);
      LODWORD(__a) = _mm_cvtsi128_si32(v4);
      v13 = std::max<float>(&__a, (const float *)(v5 + 32));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v5 + 32) = *v14;
      *(Vector3f *)((char *)&v4 - 8) = operator-(v2, v0);
      *(_QWORD *)&inV.x = v15;
      LODWORD(inV.z) = v4.m128i_i32[0];
      SqrMagnitude(&inV);
      LODWORD(__a) = _mm_cvtsi128_si32(v4);
      v16 = std::max<float>(&__a, (const float *)(v5 + 32));
      v17 = (unsigned int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v9 = (__m128i)*v17;
      *(_DWORD *)(v5 + 32) = v9.m128i_i32[0];
    }
    if ( area > 0.0 )
    {
      safety = 0.0099999998 * quantFactor;
      result = (float)(*(float *)(v5 + 32)
                     * (float)((float)(0.0099999998 * quantFactor) * (float)(0.0099999998 * quantFactor))) >= (float)(area * area);
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 1;
  }
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 72: range 000000000CC60D0E-000000000CC60E22
void __cdecl DynamicMesh::DynamicMesh(DynamicMesh *const this, const float quantFactor)
{
  dynamic_array<DynamicMesh::Poly,false,2ul>::dynamic_array(&this->m_Polygons);
  dynamic_array<Vector3f,false,4ul>::dynamic_array(&this->m_Vertices);
  dynamic_array<int,false,4ul>::dynamic_array(&this->m_Data);
  VertexWelder<2048>::VertexWelder(&this->m_Welder, 0LL, quantFactor);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_QuantFactor);
  }
  this->m_QuantFactor = quantFactor;
  VertexWelder<2048>::SetVertexArray(&this->m_Welder, &this->m_Vertices);
};

// Line 84: range 000000000CC60E24-000000000CC60FA8
DynamicMesh::Poly *__cdecl DynamicMesh::CreatePolygon(
        DynamicMesh::Poly *retstr,
        DynamicMesh *const this,
        const Polygon *vertices,
        const uint32_t status)
{
  const Vector3f *v4; // rax
  uint16_t v5; // di
  char v6; // dl
  uint8_t statusa; // [rsp+4h] [rbp-4Ch]
  size_t i; // [rsp+28h] [rbp-28h]
  size_t vertexCount; // [rsp+30h] [rbp-20h]

  statusa = status;
  vertexCount = dynamic_array<Vector3f,false,4ul>::size(vertices);
  *(_QWORD *)retstr->m_Neighbours = 0LL;
  *(_QWORD *)&retstr->m_Neighbours[4] = 0LL;
  *(_QWORD *)&retstr->m_VertexIDs[2] = 0LL;
  *(_WORD *)&retstr->m_VertexCount = 0;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_VertexCount >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&retstr->m_VertexCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&retstr->m_VertexCount);
  }
  retstr->m_VertexCount = vertexCount;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_Status >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&retstr->m_Status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&retstr->m_Status);
  }
  retstr->m_Status = statusa;
  for ( i = 0LL; i < vertexCount; ++i )
  {
    v4 = dynamic_array<Vector3f,false,4ul>::operator[](vertices, i);
    v5 = VertexWelder<2048>::AddUnique(&this->m_Welder, v4);
    v6 = *(_BYTE *)(((unsigned __int64)&retstr->m_VertexIDs[i] >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((2 * i + (_BYTE)retstr + 12) & 7) + 1) >= v6 )
    {
      v5 = 2 * i + (_WORD)retstr + 12;
      __asan_report_store2(&retstr->m_VertexIDs[i]);
    }
    retstr->m_VertexIDs[i] = v5;
  }
  return retstr;
};

// Line 104: range 000000000CC60FAA-000000000CC61199
void __cdecl DynamicMesh::RemovePolygonUnordered(DynamicMesh *const this, size_t i)
{
  DynamicMesh::Poly *v2; // rbx
  unsigned __int64 n; // rax
  __int64 v4; // rdi
  int *v5; // rax
  int *v6; // rdx
  int v7; // ebx
  int *v8; // rax
  _DWORD *v9; // rdx

  v2 = dynamic_array<DynamicMesh::Poly,false,2ul>::back(&this->m_Polygons);
  n = (unsigned __int64)dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, i);
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 25) >> 3) + 0x7FFF8000) != 0 && (char)((n + 25) & 7) >= *(_BYTE *)(((n + 25) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_store_n(n, 26LL);
  }
  if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&v2->m_Status >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&v2->m_Status >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(v2, 26LL);
  }
  v4 = *(_QWORD *)&v2->m_Neighbours[4];
  *(_QWORD *)n = *(_QWORD *)v2->m_Neighbours;
  *(_QWORD *)(n + 8) = v4;
  *(_QWORD *)(n + 16) = *(_QWORD *)&v2->m_VertexIDs[2];
  *(_WORD *)(n + 24) = *(_WORD *)&v2->m_VertexCount;
  dynamic_array<DynamicMesh::Poly,false,2ul>::pop_back(&this->m_Polygons);
  v5 = dynamic_array<int,false,4ul>::back(&this->m_Data);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v7 = *v6;
  v8 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, i);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v8);
  }
  *v9 = v7;
  dynamic_array<int,false,4ul>::pop_back(&this->m_Data);
};

// Line 116: range 000000000CC6119A-000000000CC612C7
void __cdecl DynamicMesh::CollapseEdge(DynamicMesh *const this, int va, int vb)
{
  char v3; // dl
  uint16_t vba; // [rsp+0h] [rbp-30h]
  int i; // [rsp+10h] [rbp-20h]
  int j; // [rsp+14h] [rbp-1Ch]
  DynamicMesh::Poly *poly; // [rsp+18h] [rbp-18h]

  vba = vb;
  for ( i = 0; i < dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons); ++i )
  {
    poly = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, i);
    for ( j = 0; ; ++j )
    {
      if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&poly->m_VertexCount);
      }
      if ( j >= poly->m_VertexCount )
        break;
      v3 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[j] >> 3) + 0x7FFF8000);
      if ( v3 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v3 )
        __asan_report_load2(&poly->m_VertexIDs[j]);
      if ( va == poly->m_VertexIDs[j] )
        poly->m_VertexIDs[j] = vba;
    }
  }
};

// Line 129: range 000000000CC612C8-000000000CC61A6C
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicMesh::CollapsePolygonUnordered(DynamicMesh *const this, size_t ip_0)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  char *v5; // rbx
  _DWORD *v6; // r12
  unsigned __int64 n; // rax
  __int64 v8; // rdi
  int v9; // eax
  dynamic_array<Vector3f,false,4> *p_m_Vertices; // rcx
  char v11; // dl
  dynamic_array<Vector3f,false,4> *v12; // rcx
  char v13; // dl
  Vector3f *v14; // rdx
  __int64 v15; // xmm0_8
  int v16; // ecx
  char v17; // dl
  char v18; // dl
  int v19; // eax
  char v20; // dl
  char v21; // dl
  int v22; // ecx
  char v23; // dl
  int v24; // xmm0_4
  char v25; // dl
  int v26; // ecx
  char v27; // dl
  __int16 v28; // cx
  char v29; // dl
  int i; // [rsp+1Ch] [rbp-104h]
  float shortestDist; // [rsp+20h] [rbp-100h]
  int shortest; // [rsp+24h] [rbp-FCh]
  int i_0; // [rsp+28h] [rbp-F8h]
  int i_1; // [rsp+2Ch] [rbp-F4h]
  int j; // [rsp+30h] [rbp-F0h]
  int next; // [rsp+34h] [rbp-ECh]
  int va_0; // [rsp+38h] [rbp-E8h]
  int vb_0; // [rsp+3Ch] [rbp-E4h]
  Vector3f *va; // [rsp+40h] [rbp-E0h]
  Vector3f inV; // [rsp+54h] [rbp-CCh] BYREF
  char v42[192]; // [rsp+60h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 160);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 15 edgeLengths:134 96 26 8 poly:133";
  *(_QWORD *)(v3 + 16) = DynamicMesh::CollapsePolygonUnordered;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -218959118;
  v6[536862723] = 0x2000000;
  v6[536862724] = -202116109;
  n = (unsigned __int64)dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 25) >> 3) + 0x7FFF8000) != 0 && (char)((n + 25) & 7) >= *(_BYTE *)(((n + 25) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 26LL);
  }
  v8 = *(_QWORD *)(n + 8);
  *(_QWORD *)(v3 + 96) = *(_QWORD *)n;
  *(_QWORD *)(v3 + 104) = v8;
  *(_QWORD *)(v3 + 112) = *(_QWORD *)(n + 16);
  *(_WORD *)(v3 + 120) = *(_WORD *)(n + 24);
  for ( i = 0; i < *(unsigned __int8 *)(v3 + 120); ++i )
  {
    if ( i + 1 >= *(unsigned __int8 *)(v3 + 120) )
      v9 = 0;
    else
      v9 = i + 1;
    j = v9;
    p_m_Vertices = &this->m_Vertices;
    v11 = *(_BYTE *)(((2LL * i + v3 + 96 + 12) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((2 * i + v3 + 96 + 12) & 7) + 1) >= v11 )
      __asan_report_load2(2LL * i + v3 + 96 + 12);
    va = dynamic_array<Vector3f,false,4ul>::operator[](p_m_Vertices, *(unsigned __int16 *)&v5[2 * i - 52]);
    v12 = &this->m_Vertices;
    v13 = *(_BYTE *)(((2LL * j + v3 + 96 + 12) >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((2 * j + v3 + 96 + 12) & 7) + 1) >= v13 )
      __asan_report_load2(2LL * j + v3 + 96 + 12);
    v14 = dynamic_array<Vector3f,false,4ul>::operator[](v12, *(unsigned __int16 *)&v5[2 * j - 52]);
    *(Vector3f *)((char *)&v2 - 8) = operator-(va, v14);
    *(_QWORD *)&inV.x = v15;
    LODWORD(inV.z) = v2.m128i_i32[0];
    SqrMagnitude(&inV);
    v16 = _mm_cvtsi128_si32(v2);
    v17 = *(_BYTE *)(((4LL * i + v3 + 32) >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)(((4 * i + v3 - 96 + 0x80) & 7) + 3) >= v17 )
      __asan_report_store4(4LL * i + v3 + 32);
    *(_DWORD *)&v5[4 * i - 128] = v16;
  }
  while ( *(_BYTE *)(v3 + 120) > 2u )
  {
    shortestDist = *(float *)(v3 + 32);
    shortest = 0;
    for ( i_0 = 1; i_0 < *(unsigned __int8 *)(v3 + 120); ++i_0 )
    {
      v18 = *(_BYTE *)(((4LL * i_0 + v3 + 32) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)(((4 * i_0 + v3 - 96 + 0x80) & 7) + 3) >= v18 )
        __asan_report_load4(4LL * i_0 + v3 + 32);
      if ( shortestDist > *(float *)&v5[4 * i_0 - 128] )
      {
        shortestDist = *(float *)&v5[4 * i_0 - 128];
        shortest = i_0;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_QuantFactor);
    }
    if ( shortestDist > (float)((float)this->m_QuantFactor * (float)this->m_QuantFactor) )
      break;
    if ( shortest + 1 >= *(unsigned __int8 *)(v3 + 120) )
      v19 = 0;
    else
      v19 = shortest + 1;
    next = v19;
    v20 = *(_BYTE *)(((2LL * shortest + v3 + 96 + 12) >> 3) + 0x7FFF8000);
    if ( v20 != 0 && (char)(((2 * shortest + v3 + 96 + 12) & 7) + 1) >= v20 )
      __asan_report_load2(2LL * shortest + v3 + 96 + 12);
    va_0 = *(unsigned __int16 *)&v5[2 * shortest - 52];
    v21 = *(_BYTE *)(((2LL * next + v3 + 96 + 12) >> 3) + 0x7FFF8000);
    if ( v21 != 0 && (char)(((2 * next + v3 + 96 + 12) & 7) + 1) >= v21 )
      __asan_report_load2(2LL * next + v3 + 96 + 12);
    vb_0 = *(unsigned __int16 *)&v5[2 * next - 52];
    if ( va_0 != vb_0 )
      DynamicMesh::CollapseEdge(this, va_0, vb_0);
    for ( i_1 = shortest; i_1 < *(unsigned __int8 *)(v3 + 120) - 1; ++i_1 )
    {
      v22 = i_1 + 1;
      v23 = *(_BYTE *)(((4LL * (i_1 + 1) + v3 + 32) >> 3) + 0x7FFF8000);
      if ( v23 != 0 && (char)(((4 * (i_1 + 1) + v3 - 96 + 0x80) & 7) + 3) >= v23 )
        __asan_report_load4(4LL * (i_1 + 1) + v3 + 32);
      v24 = *(_DWORD *)&v5[4 * v22 - 128];
      v25 = *(_BYTE *)(((4LL * i_1 + v3 + 32) >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((4 * i_1 + v3 - 96 + 0x80) & 7) + 3) >= v25 )
        __asan_report_store4(4LL * i_1 + v3 + 32);
      *(_DWORD *)&v5[4 * i_1 - 128] = v24;
      v26 = i_1 + 1;
      v27 = *(_BYTE *)(((2LL * (i_1 + 1) + v3 + 96 + 12) >> 3) + 0x7FFF8000);
      if ( v27 != 0 && (char)(((2 * (i_1 + 1) + v3 + 96 + 12) & 7) + 1) >= v27 )
        __asan_report_load2(2LL * (i_1 + 1) + v3 + 96 + 12);
      v28 = *(_WORD *)&v5[2 * v26 - 52];
      v29 = *(_BYTE *)(((2LL * i_1 + v3 + 96 + 12) >> 3) + 0x7FFF8000);
      if ( v29 != 0 && (char)(((2 * i_1 + v3 + 96 + 12) & 7) + 1) >= v29 )
        __asan_report_store2(2LL * i_1 + v3 + 96 + 12);
      *(_WORD *)&v5[2 * i_1 - 52] = v28;
    }
    --*(_BYTE *)(v3 + 120);
  }
  DynamicMesh::RemovePolygonUnordered(this, ip_0);
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 182: range 000000000CC61A6E-000000000CC61BFA
void __cdecl DynamicMesh::Intersection(
        const DynamicMesh *const this,
        Polygon *inside,
        const Hull *carveHull,
        Polygon *temp,
        dynamic_array<unsigned char,false,1> *usedEdges)
{
  unsigned __int8 *v5; // rax
  _BYTE *v6; // rdx
  int result; // [rsp+3Ch] [rbp-34h]
  size_t i; // [rsp+40h] [rbp-30h]
  size_t ip_0; // [rsp+48h] [rbp-28h]
  size_t planeCount; // [rsp+50h] [rbp-20h]
  const Plane *plane; // [rsp+58h] [rbp-18h]

  planeCount = dynamic_array<Plane,false,4ul>::size(carveHull);
  dynamic_array<unsigned char,false,1ul>::resize_uninitialized(usedEdges, 0LL, kIncreaseToExactSize);
  for ( i = 0LL; i < dynamic_array<Vector3f,false,4ul>::size(inside); ++i )
  {
    v5 = dynamic_array<unsigned char,false,1ul>::push_back(usedEdges);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v5);
    }
    *v6 = i;
  }
  for ( ip_0 = 0LL; ip_0 < planeCount; ++ip_0 )
  {
    plane = dynamic_array<Plane,false,4ul>::operator[](carveHull, ip_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_QuantFactor);
    }
    result = SplitPoly(temp, inside, plane, this->m_QuantFactor, usedEdges, ip_0);
    if ( result )
    {
      if ( result == 1 )
      {
        dynamic_array<Vector3f,false,4ul>::resize_uninitialized(inside, 0LL, kIncreaseToExactSize);
        return;
      }
    }
    else
    {
      dynamic_array<Vector3f,false,4ul>::operator=(inside, temp);
    }
  }
};

// Line 207: range 000000000CC61BFC-000000000CC61D92
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicMesh::FromPoly(const DynamicMesh *const this, Polygon *result, const DynamicMesh::Poly *poly)
{
  char v3; // dl
  __int64 v4; // xmm0_8
  float v5; // xmm1_4
  unsigned __int64 v6; // rax
  uint32_t vertexCount; // [rsp+24h] [rbp-1Ch]
  unsigned __int64 i; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)poly + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&poly->m_VertexCount);
  }
  vertexCount = poly->m_VertexCount;
  dynamic_array<Vector3f,false,4ul>::resize_uninitialized(result, poly->m_VertexCount, kIncreaseToExactSize);
  for ( i = 0LL; i < vertexCount; ++i )
  {
    v3 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[i] >> 3) + 0x7FFF8000);
    if ( v3 != 0 && (char)(((2 * i + (_BYTE)poly + 12) & 7) + 1) >= v3 )
      __asan_report_load2(&poly->m_VertexIDs[i]);
    *(Vector3f *)&v4 = DynamicMesh::GetVertex(this, poly->m_VertexIDs[i]);
    v6 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](result, i);
    if ( (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) && *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v6 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 11) & 7) >= *(_BYTE *)(((v6 + 11) >> 3) + 0x7FFF8000) )
    {
      v6 = __asan_report_store_n(v6, 12LL);
    }
    *(_QWORD *)v6 = v4;
    *(float *)(v6 + 8) = v5;
  }
};

// Line 221: range 000000000CC61D94-000000000CC628D6
void __cdecl DynamicMesh::BuildEdgeConnections(const DynamicMesh *const this, DynamicMesh::EdgeList *edges)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  size_t v5; // rax
  uint8_t *p_m_VertexCount; // rax
  char v7; // dl
  char v8; // dl
  DynamicMesh::Edge *v9; // rax
  uint16_t v10; // di
  uint16_t v11; // di
  unsigned __int16 *v12; // rax
  __int16 *v13; // rdx
  __int16 v14; // r14
  unsigned __int16 *v15; // rax
  _WORD *v16; // rdx
  __int16 v17; // r14
  unsigned __int16 *v18; // rax
  _WORD *v19; // rdx
  size_t v20; // rax
  uint8_t *v21; // rax
  char v22; // dl
  char v23; // dl
  unsigned __int16 *v24; // rax
  uint16_t *v25; // rdx
  DynamicMesh::Edge *v26; // rax
  DynamicMesh::Edge *v27; // rdx
  DynamicMesh::Edge *v28; // rdx
  uint16_t *v29; // rax
  char v30; // al
  uint16_t v31; // r14
  DynamicMesh::Edge *v32; // rdx
  uint16_t *p_p2; // rax
  uint16_t v34; // r14
  DynamicMesh::Edge *v35; // rdx
  uint16_t *p_c2; // rax
  unsigned __int16 *v37; // rax
  uint16_t *v38; // rdx
  size_t v39; // rax
  unsigned __int16 init_value; // [rsp+14h] [rbp-14Ch] BYREF
  uint16_t ie; // [rsp+16h] [rbp-14Ah]
  uint16_t vp; // [rsp+18h] [rbp-148h]
  uint16_t v; // [rsp+1Ah] [rbp-146h]
  uint16_t vp_0; // [rsp+1Ch] [rbp-144h]
  uint16_t v_0; // [rsp+1Eh] [rbp-142h]
  size_t edgeCount; // [rsp+20h] [rbp-140h]
  size_t ip_0; // [rsp+28h] [rbp-138h]
  size_t ivp; // [rsp+30h] [rbp-130h]
  size_t iv; // [rsp+38h] [rbp-128h]
  size_t ip_1; // [rsp+40h] [rbp-120h]
  size_t ivp_0; // [rsp+48h] [rbp-118h]
  size_t iv_0; // [rsp+50h] [rbp-110h]
  size_t polyCount; // [rsp+58h] [rbp-108h]
  size_t maxEdges; // [rsp+60h] [rbp-100h]
  const DynamicMesh::Poly *poly; // [rsp+68h] [rbp-F8h]
  size_t vertexCount; // [rsp+70h] [rbp-F0h]
  DynamicMesh::Edge *e; // [rsp+78h] [rbp-E8h]
  const DynamicMesh::Poly *poly_0; // [rsp+80h] [rbp-E0h]
  size_t vertexCount_0; // [rsp+88h] [rbp-D8h]
  char v61[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 11 buckets:229 96 24 8 next:230";
  *(_QWORD *)(v2 + 16) = DynamicMesh::BuildEdgeConnections;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  polyCount = dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons);
  maxEdges = 6 * polyCount;
  dynamic_array<DynamicMesh::Edge,false,2ul>::resize_uninitialized(edges, 6 * polyCount, kIncreaseToExactSize);
  edgeCount = 0LL;
  init_value = -1;
  v5 = dynamic_array<Vector3f,false,4ul>::size(&this->m_Vertices);
  dynamic_array<unsigned short,false,2ul>::dynamic_array(
    (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
    v5,
    &init_value);
  init_value = -1;
  dynamic_array<unsigned short,false,2ul>::dynamic_array(
    (dynamic_array<short unsigned int,false,2> *const)(v2 + 96),
    maxEdges,
    &init_value);
  for ( ip_0 = 0LL; ip_0 < polyCount; ++ip_0 )
  {
    poly = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
    p_m_VertexCount = &poly->m_VertexCount;
    if ( *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_m_VertexCount & 7) >= *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_m_VertexCount);
    }
    vertexCount = poly->m_VertexCount;
    ivp = vertexCount - 1;
    iv = 0LL;
    while ( iv < vertexCount )
    {
      v7 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[ivp] >> 3) + 0x7FFF8000);
      if ( v7 != 0 && (char)(((2 * ivp + (_BYTE)poly + 12) & 7) + 1) >= v7 )
        __asan_report_load2(&poly->m_VertexIDs[ivp]);
      vp = poly->m_VertexIDs[ivp];
      v8 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[iv] >> 3) + 0x7FFF8000);
      if ( v8 != 0 && (char)(((2 * iv + (_BYTE)poly + 12) & 7) + 1) >= v8 )
        __asan_report_load2(&poly->m_VertexIDs[iv]);
      v = poly->m_VertexIDs[iv];
      if ( vp < v )
      {
        v9 = dynamic_array<DynamicMesh::Edge,false,2ul>::operator[](edges, edgeCount);
        e = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(v9);
        }
        e->v1 = vp;
        if ( *(_BYTE *)(((unsigned __int64)&e->v2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->v2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(&e->v2);
        }
        e->v2 = v;
        v10 = ip_0;
        if ( *(_BYTE *)(((unsigned __int64)&e->p1 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->p1 >> 3) + 0x7FFF8000) )
        {
          v10 = (_WORD)e + 4;
          __asan_report_store2(&e->p1);
        }
        e->p1 = v10;
        if ( *(_BYTE *)(((unsigned __int64)&e->p2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->p2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(&e->p2);
        }
        e->p2 = -1;
        v11 = ivp;
        if ( *(_BYTE *)(((unsigned __int64)&e->c1 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->c1 >> 3) + 0x7FFF8000) )
        {
          v11 = (_WORD)e + 8;
          __asan_report_store2(&e->c1);
        }
        e->c1 = v11;
        if ( *(_BYTE *)(((unsigned __int64)&e->c2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->c2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(&e->c2);
        }
        e->c2 = -1;
        v12 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                vp);
        v13 = (__int16 *)v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v12);
        }
        v14 = *v13;
        v15 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 96),
                edgeCount);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(v15);
        }
        *v16 = v14;
        v17 = edgeCount;
        v18 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                vp);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(v18);
        }
        *v19 = v17;
        ++edgeCount;
      }
      v20 = iv++;
      ivp = v20;
    }
  }
  dynamic_array<DynamicMesh::Edge,false,2ul>::resize_uninitialized(edges, edgeCount, kIncreaseToExactSize);
  for ( ip_1 = 0LL; ip_1 < polyCount; ++ip_1 )
  {
    poly_0 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_1);
    v21 = &poly_0->m_VertexCount;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v21);
    }
    vertexCount_0 = poly_0->m_VertexCount;
    ivp_0 = vertexCount_0 - 1;
    iv_0 = 0LL;
    while ( iv_0 < vertexCount_0 )
    {
      v22 = *(_BYTE *)(((unsigned __int64)&poly_0->m_VertexIDs[ivp_0] >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (char)(((2 * ivp_0 + (_BYTE)poly_0 + 12) & 7) + 1) >= v22 )
        __asan_report_load2(&poly_0->m_VertexIDs[ivp_0]);
      vp_0 = poly_0->m_VertexIDs[ivp_0];
      v23 = *(_BYTE *)(((unsigned __int64)&poly_0->m_VertexIDs[iv_0] >> 3) + 0x7FFF8000);
      if ( v23 != 0 && (char)(((2 * iv_0 + (_BYTE)poly_0 + 12) & 7) + 1) >= v23 )
        __asan_report_load2(&poly_0->m_VertexIDs[iv_0]);
      v_0 = poly_0->m_VertexIDs[iv_0];
      if ( v_0 < vp_0 )
      {
        v24 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                v_0);
        v25 = v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v24);
        }
        for ( ie = *v25; ie != 0xFFFF; ie = *v38 )
        {
          v26 = dynamic_array<DynamicMesh::Edge,false,2ul>::operator[](edges, ie);
          v27 = v26;
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v26 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v26);
          }
          if ( v_0 != v27->v1 )
            goto LABEL_58;
          v28 = dynamic_array<DynamicMesh::Edge,false,2ul>::operator[](edges, ie);
          v29 = &v28->v2;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v29);
          }
          if ( vp_0 == v28->v2 )
            v30 = 1;
          else
LABEL_58:
            v30 = 0;
          if ( v30 )
          {
            v31 = ip_1;
            v32 = dynamic_array<DynamicMesh::Edge,false,2ul>::operator[](edges, ie);
            p_p2 = &v32->p2;
            if ( *(_BYTE *)(((unsigned __int64)p_p2 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_p2 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_p2 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store2(p_p2);
            }
            v32->p2 = v31;
            v34 = ivp_0;
            v35 = dynamic_array<DynamicMesh::Edge,false,2ul>::operator[](edges, ie);
            p_c2 = &v35->c2;
            if ( *(_BYTE *)(((unsigned __int64)p_c2 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_c2 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_c2 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store2(p_c2);
            }
            v35->c2 = v34;
            break;
          }
          v37 = dynamic_array<unsigned short,false,2ul>::operator[](
                  (dynamic_array<short unsigned int,false,2> *const)(v2 + 96),
                  ie);
          v38 = v37;
          if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v37 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v37);
          }
        }
      }
      v39 = iv_0++;
      ivp_0 = v39;
    }
  }
  dynamic_array<unsigned short,false,2ul>::~dynamic_array((dynamic_array<short unsigned int,false,2> *const)(v2 + 96));
  dynamic_array<unsigned short,false,2ul>::~dynamic_array((dynamic_array<short unsigned int,false,2> *const)(v2 + 32));
  if ( v61 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 288: range 000000000CC628D8-000000000CC64156
void __cdecl DynamicMesh::Subtract(
        const DynamicMesh *const this,
        PolygonContainer *result,
        const Polygon *outer,
        Polygon *inner,
        Polygon *tri,
        const dynamic_array<unsigned char,false,1> *usedEdges,
        const Hull *hull)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  char *v10; // rax
  char *v11; // rdx
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rdx
  bool *v14; // rax
  _BYTE *v15; // rdx
  bool *v16; // rax
  _BYTE *v17; // rdx
  Vector3f *v18; // r14
  unsigned __int64 n; // rax
  const Vector3f *v20; // r14
  unsigned __int64 v21; // rax
  const Vector3f *v22; // r14
  unsigned __int64 v23; // rax
  char *v24; // rax
  char *v25; // rdx
  const unsigned __int8 *v26; // rax
  _BYTE *v27; // rdx
  int v28; // r14d
  int *v29; // rax
  int *v30; // rdx
  int v31; // r14d
  int *v32; // rax
  int *v33; // rdx
  Vector3f *v34; // r14
  unsigned __int64 v35; // rax
  Vector3f *v36; // r14
  unsigned __int64 v37; // rax
  const Vector3f *v38; // r14
  unsigned __int64 v39; // rax
  size_t v40; // rax
  int *v41; // rax
  int *v42; // rdx
  int *v43; // rax
  _DWORD *v44; // rdx
  bool *v45; // rax
  _BYTE *v46; // rdx
  Vector3f *v47; // r14
  unsigned __int64 v48; // rax
  const Vector3f *v49; // r14
  unsigned __int64 v50; // rax
  const Vector3f *v51; // r14
  unsigned __int64 v52; // rax
  bool *v53; // rax
  _BYTE *v54; // rdx
  int *v55; // rax
  int *v56; // rdx
  int *v57; // rax
  _DWORD *v58; // rdx
  bool *v59; // rax
  _BYTE *v60; // rdx
  Vector3f *v61; // r14
  unsigned __int64 v62; // rax
  const Vector3f *v63; // r14
  unsigned __int64 v64; // rax
  const Vector3f *v65; // r14
  unsigned __int64 v66; // rax
  bool *v67; // rax
  _BYTE *v68; // rdx
  bool init_value; // [rsp+33h] [rbp-17Dh] BYREF
  int v74; // [rsp+34h] [rbp-17Ch] BYREF
  int ov_0; // [rsp+38h] [rbp-178h]
  int bestOuter; // [rsp+3Ch] [rbp-174h]
  size_t i; // [rsp+40h] [rbp-170h]
  size_t ov; // [rsp+48h] [rbp-168h]
  size_t ivp; // [rsp+50h] [rbp-160h]
  size_t iv; // [rsp+58h] [rbp-158h]
  size_t iv_0; // [rsp+60h] [rbp-150h]
  size_t innerVertexCount; // [rsp+68h] [rbp-148h]
  size_t outerVertexCount; // [rsp+70h] [rbp-140h]
  size_t ie; // [rsp+78h] [rbp-138h]
  const Plane *plane; // [rsp+80h] [rbp-130h]
  size_t ovn_0; // [rsp+88h] [rbp-128h]
  size_t ovp; // [rsp+90h] [rbp-120h]
  size_t ovn; // [rsp+98h] [rbp-118h]
  char v89[272]; // [rsp+A0h] [rbp-110h] BYREF

  v7 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(224LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 24 8 used:294 96 24 6 ol:326 160 24 6 oh:327";
  *(_QWORD *)(v7 + 16) = DynamicMesh::Subtract;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234881024;
  v9[536862722] = -218959118;
  v9[536862723] = -234881024;
  v9[536862724] = -218959118;
  v9[536862725] = -218103808;
  v9[536862726] = -202116109;
  innerVertexCount = dynamic_array<Vector3f,false,4ul>::size(inner);
  outerVertexCount = dynamic_array<Vector3f,false,4ul>::size(outer);
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::clear(result);
  dynamic_array<Vector3f,false,4ul>::resize_uninitialized(tri, 3uLL, kIncreaseToExactSize);
  init_value = 0;
  dynamic_array<bool,false,1ul>::dynamic_array(
    (dynamic_array<bool,false,1> *const)(v7 + 32),
    outerVertexCount,
    &init_value);
  for ( i = 0LL; i < innerVertexCount; ++i )
  {
    v10 = (char *)dynamic_array<unsigned char,false,1ul>::operator[](usedEdges, i);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v10);
    }
    if ( *v11 >= 0 )
    {
      v12 = (unsigned __int8 *)dynamic_array<unsigned char,false,1ul>::operator[](usedEdges, i);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v12);
      }
      v14 = dynamic_array<bool,false,1ul>::operator[]((dynamic_array<bool,false,1> *const)(v7 + 32), *v13);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v14);
      }
      *v15 = 1;
    }
  }
  if ( innerVertexCount == 1 )
  {
    for ( ov = 0LL; ov < outerVertexCount; ++ov )
    {
      v16 = dynamic_array<bool,false,1ul>::operator[]((dynamic_array<bool,false,1> *const)(v7 + 32), ov);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v16);
      }
      if ( !*v17 )
      {
        ovn = NextIndex(ov, outerVertexCount);
        v18 = dynamic_array<Vector3f,false,4ul>::operator[](inner, 0LL);
        n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 0LL);
        if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_store_n(n, 12LL);
        }
        if ( ((unsigned __int8)v18 & 7) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v18->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v18 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v18->z + 3) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(v18, 12LL);
        }
        *(_QWORD *)n = *(_QWORD *)&v18->x;
        *(float *)(n + 8) = v18->z;
        v20 = dynamic_array<Vector3f,false,4ul>::operator[](outer, ov);
        v21 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 1uLL);
        if ( (char)(v21 & 7) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) && *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v21 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v21 + 11) & 7) >= *(_BYTE *)(((v21 + 11) >> 3) + 0x7FFF8000) )
        {
          v21 = __asan_report_store_n(v21, 12LL);
        }
        if ( ((unsigned __int8)v20 & 7) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v20->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v20 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v20->z + 3) >> 3) + 0x7FFF8000) )
        {
          v21 = __asan_report_load_n(v20, 12LL);
        }
        *(_QWORD *)v21 = *(_QWORD *)&v20->x;
        *(float *)(v21 + 8) = v20->z;
        v22 = dynamic_array<Vector3f,false,4ul>::operator[](outer, ovn);
        v23 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 2uLL);
        if ( (char)(v23 & 7) >= *(_BYTE *)((v23 >> 3) + 0x7FFF8000) && *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v23 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v23 + 11) & 7) >= *(_BYTE *)(((v23 + 11) >> 3) + 0x7FFF8000) )
        {
          v23 = __asan_report_store_n(v23, 12LL);
        }
        if ( ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v22->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v22 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v22->z + 3) >> 3) + 0x7FFF8000) )
        {
          v23 = __asan_report_load_n(v22, 12LL);
        }
        *(_QWORD *)v23 = *(_QWORD *)&v22->x;
        *(float *)(v23 + 8) = v22->z;
        if ( !DegenerateTriangle(tri) )
          std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::push_back(
            result,
            tri);
      }
    }
  }
  else
  {
    v74 = -1;
    dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v7 + 96), innerVertexCount, &v74);
    v74 = -1;
    dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v7 + 160), innerVertexCount, &v74);
    ivp = innerVertexCount - 1;
    iv = 0LL;
    while ( iv < innerVertexCount )
    {
      v24 = (char *)dynamic_array<unsigned char,false,1ul>::operator[](usedEdges, iv);
      v25 = v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v24);
      }
      if ( *v25 < 0 )
      {
        v26 = dynamic_array<unsigned char,false,1ul>::operator[](usedEdges, iv);
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v26 & 7) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v26);
        }
        ie = *v27 & 0x7F;
        plane = dynamic_array<Plane,false,4ul>::operator[](hull, ie);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->m_QuantFactor);
        }
        bestOuter = FindFurthest(plane, outer, this->m_QuantFactor);
        if ( bestOuter != -1 )
        {
          v28 = bestOuter;
          v29 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v7 + 96), iv);
          v30 = v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v29);
          }
          *v30 = v28;
          v31 = bestOuter;
          v32 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v7 + 160), ivp);
          v33 = v32;
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v32);
          }
          *v33 = v31;
          v34 = dynamic_array<Vector3f,false,4ul>::operator[](inner, iv);
          v35 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 0LL);
          if ( (char)(v35 & 7) >= *(_BYTE *)((v35 >> 3) + 0x7FFF8000) && *(_BYTE *)((v35 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v35 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v35 + 11) & 7) >= *(_BYTE *)(((v35 + 11) >> 3) + 0x7FFF8000) )
          {
            v35 = __asan_report_store_n(v35, 12LL);
          }
          if ( ((unsigned __int8)v34 & 7) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v34->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v34 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v34->z + 3) >> 3) + 0x7FFF8000) )
          {
            v35 = __asan_report_load_n(v34, 12LL);
          }
          *(_QWORD *)v35 = *(_QWORD *)&v34->x;
          *(float *)(v35 + 8) = v34->z;
          v36 = dynamic_array<Vector3f,false,4ul>::operator[](inner, ivp);
          v37 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 1uLL);
          if ( (char)(v37 & 7) >= *(_BYTE *)((v37 >> 3) + 0x7FFF8000) && *(_BYTE *)((v37 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v37 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v37 + 11) & 7) >= *(_BYTE *)(((v37 + 11) >> 3) + 0x7FFF8000) )
          {
            v37 = __asan_report_store_n(v37, 12LL);
          }
          if ( ((unsigned __int8)v36 & 7) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v36->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v36 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v36->z + 3) >> 3) + 0x7FFF8000) )
          {
            v37 = __asan_report_load_n(v36, 12LL);
          }
          *(_QWORD *)v37 = *(_QWORD *)&v36->x;
          *(float *)(v37 + 8) = v36->z;
          v38 = dynamic_array<Vector3f,false,4ul>::operator[](outer, bestOuter);
          v39 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 2uLL);
          if ( (char)(v39 & 7) >= *(_BYTE *)((v39 >> 3) + 0x7FFF8000) && *(_BYTE *)((v39 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v39 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v39 + 11) & 7) >= *(_BYTE *)(((v39 + 11) >> 3) + 0x7FFF8000) )
          {
            v39 = __asan_report_store_n(v39, 12LL);
          }
          if ( ((unsigned __int8)v38 & 7) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v38->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v38 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v38->z + 3) >> 3) + 0x7FFF8000) )
          {
            v39 = __asan_report_load_n(v38, 12LL);
          }
          *(_QWORD *)v39 = *(_QWORD *)&v38->x;
          *(float *)(v39 + 8) = v38->z;
          if ( !DegenerateTriangle(tri) )
            std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::push_back(
              result,
              tri);
        }
      }
      v40 = iv++;
      ivp = v40;
    }
    for ( iv_0 = 0LL; iv_0 < innerVertexCount; ++iv_0 )
    {
      v41 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v7 + 96), iv_0);
      v42 = v41;
      if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v41);
      }
      ov_0 = *v42;
      if ( ov_0 != -1 )
      {
        while ( 1 )
        {
          v43 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v7 + 160), iv_0);
          v44 = v43;
          if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v43);
          }
          if ( ov_0 == *v44 )
            break;
          ovn_0 = NextIndex(ov_0, outerVertexCount);
          v45 = dynamic_array<bool,false,1ul>::operator[]((dynamic_array<bool,false,1> *const)(v7 + 32), ovn_0);
          v46 = v45;
          if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v45 & 7) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v45);
          }
          if ( *v46 )
            break;
          v47 = dynamic_array<Vector3f,false,4ul>::operator[](inner, iv_0);
          v48 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 0LL);
          if ( (char)(v48 & 7) >= *(_BYTE *)((v48 >> 3) + 0x7FFF8000) && *(_BYTE *)((v48 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v48 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v48 + 11) & 7) >= *(_BYTE *)(((v48 + 11) >> 3) + 0x7FFF8000) )
          {
            v48 = __asan_report_store_n(v48, 12LL);
          }
          if ( ((unsigned __int8)v47 & 7) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v47->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v47 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v47->z + 3) >> 3) + 0x7FFF8000) )
          {
            v48 = __asan_report_load_n(v47, 12LL);
          }
          *(_QWORD *)v48 = *(_QWORD *)&v47->x;
          *(float *)(v48 + 8) = v47->z;
          v49 = dynamic_array<Vector3f,false,4ul>::operator[](outer, ov_0);
          v50 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 1uLL);
          if ( (char)(v50 & 7) >= *(_BYTE *)((v50 >> 3) + 0x7FFF8000) && *(_BYTE *)((v50 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v50 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v50 + 11) & 7) >= *(_BYTE *)(((v50 + 11) >> 3) + 0x7FFF8000) )
          {
            v50 = __asan_report_store_n(v50, 12LL);
          }
          if ( ((unsigned __int8)v49 & 7) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v49->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v49 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v49->z + 3) >> 3) + 0x7FFF8000) )
          {
            v50 = __asan_report_load_n(v49, 12LL);
          }
          *(_QWORD *)v50 = *(_QWORD *)&v49->x;
          *(float *)(v50 + 8) = v49->z;
          v51 = dynamic_array<Vector3f,false,4ul>::operator[](outer, ovn_0);
          v52 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 2uLL);
          if ( (char)(v52 & 7) >= *(_BYTE *)((v52 >> 3) + 0x7FFF8000) && *(_BYTE *)((v52 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v52 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v52 + 11) & 7) >= *(_BYTE *)(((v52 + 11) >> 3) + 0x7FFF8000) )
          {
            v52 = __asan_report_store_n(v52, 12LL);
          }
          if ( ((unsigned __int8)v51 & 7) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v51->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v51 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v51->z + 3) >> 3) + 0x7FFF8000) )
          {
            v52 = __asan_report_load_n(v51, 12LL);
          }
          *(_QWORD *)v52 = *(_QWORD *)&v51->x;
          *(float *)(v52 + 8) = v51->z;
          if ( DegenerateTriangle(tri) )
            break;
          std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::push_back(
            result,
            tri);
          v53 = dynamic_array<bool,false,1ul>::operator[]((dynamic_array<bool,false,1> *const)(v7 + 32), ovn_0);
          v54 = v53;
          if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v53 & 7) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v53);
          }
          *v54 = 1;
          ov_0 = ovn_0;
        }
      }
      v55 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v7 + 160), iv_0);
      v56 = v55;
      if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v55);
      }
      ov_0 = *v56;
      if ( ov_0 != -1 )
      {
        while ( 1 )
        {
          v57 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v7 + 96), iv_0);
          v58 = v57;
          if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v57);
          }
          if ( ov_0 == *v58 )
            break;
          ovp = PrevIndex(ov_0, outerVertexCount);
          v59 = dynamic_array<bool,false,1ul>::operator[]((dynamic_array<bool,false,1> *const)(v7 + 32), ov_0);
          v60 = v59;
          if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v59 & 7) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v59);
          }
          if ( *v60 )
            break;
          v61 = dynamic_array<Vector3f,false,4ul>::operator[](inner, iv_0);
          v62 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 0LL);
          if ( (char)(v62 & 7) >= *(_BYTE *)((v62 >> 3) + 0x7FFF8000) && *(_BYTE *)((v62 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v62 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v62 + 11) & 7) >= *(_BYTE *)(((v62 + 11) >> 3) + 0x7FFF8000) )
          {
            v62 = __asan_report_store_n(v62, 12LL);
          }
          if ( ((unsigned __int8)v61 & 7) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v61->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v61 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v61->z + 3) >> 3) + 0x7FFF8000) )
          {
            v62 = __asan_report_load_n(v61, 12LL);
          }
          *(_QWORD *)v62 = *(_QWORD *)&v61->x;
          *(float *)(v62 + 8) = v61->z;
          v63 = dynamic_array<Vector3f,false,4ul>::operator[](outer, ovp);
          v64 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 1uLL);
          if ( (char)(v64 & 7) >= *(_BYTE *)((v64 >> 3) + 0x7FFF8000) && *(_BYTE *)((v64 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v64 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v64 + 11) & 7) >= *(_BYTE *)(((v64 + 11) >> 3) + 0x7FFF8000) )
          {
            v64 = __asan_report_store_n(v64, 12LL);
          }
          if ( ((unsigned __int8)v63 & 7) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v63->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v63 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v63->z + 3) >> 3) + 0x7FFF8000) )
          {
            v64 = __asan_report_load_n(v63, 12LL);
          }
          *(_QWORD *)v64 = *(_QWORD *)&v63->x;
          *(float *)(v64 + 8) = v63->z;
          v65 = dynamic_array<Vector3f,false,4ul>::operator[](outer, ov_0);
          v66 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](tri, 2uLL);
          if ( (char)(v66 & 7) >= *(_BYTE *)((v66 >> 3) + 0x7FFF8000) && *(_BYTE *)((v66 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v66 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v66 + 11) & 7) >= *(_BYTE *)(((v66 + 11) >> 3) + 0x7FFF8000) )
          {
            v66 = __asan_report_store_n(v66, 12LL);
          }
          if ( ((unsigned __int8)v65 & 7) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v65->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v65 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v65->z + 3) >> 3) + 0x7FFF8000) )
          {
            v66 = __asan_report_load_n(v65, 12LL);
          }
          *(_QWORD *)v66 = *(_QWORD *)&v65->x;
          *(float *)(v66 + 8) = v65->z;
          if ( DegenerateTriangle(tri) )
            break;
          std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::push_back(
            result,
            tri);
          v67 = dynamic_array<bool,false,1ul>::operator[]((dynamic_array<bool,false,1> *const)(v7 + 32), ov_0);
          v68 = v67;
          if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v67 & 7) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v67);
          }
          *v68 = 1;
          ov_0 = ovp;
        }
      }
    }
    dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v7 + 160));
    dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v7 + 96));
  }
  dynamic_array<bool,false,1ul>::~dynamic_array((dynamic_array<bool,false,1> *const)(v7 + 32));
  if ( v89 == (char *)v7 )
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
};

// Line 401: range 000000000CC64158-000000000CC644E8
bool __cdecl DynamicMesh::MergePolygons(
        const DynamicMesh *const this,
        Polygon *merged,
        const Polygon *p1,
        const Polygon *p2)
{
  const Vector3f *v5; // rdx
  size_t Index; // rdx
  size_t v8; // rdx
  size_t v9; // rdx
  size_t v10; // rdx
  const Vector3f *v11; // rcx
  const Vector3f *v12; // rdx
  const Vector3f *v13; // rdx
  size_t iv; // [rsp+20h] [rbp-80h]
  size_t jv; // [rsp+28h] [rbp-78h]
  size_t k; // [rsp+30h] [rbp-70h]
  size_t k_0; // [rsp+38h] [rbp-68h]
  size_t count1; // [rsp+40h] [rbp-60h]
  size_t count2; // [rsp+48h] [rbp-58h]
  size_t ivn; // [rsp+50h] [rbp-50h]
  const Vector3f *v1; // [rsp+58h] [rbp-48h]
  const Vector3f *v2; // [rsp+60h] [rbp-40h]
  size_t jvn; // [rsp+68h] [rbp-38h]
  const Vector3f *w1; // [rsp+70h] [rbp-30h]
  const Vector3f *wn; // [rsp+80h] [rbp-20h]
  const Vector3f *vp; // [rsp+88h] [rbp-18h]
  const Vector3f *wp; // [rsp+90h] [rbp-10h]

  dynamic_array<Vector3f,false,4ul>::resize_uninitialized(merged, 0LL, kIncreaseToExactSize);
  count1 = dynamic_array<Vector3f,false,4ul>::size(p1);
  count2 = dynamic_array<Vector3f,false,4ul>::size(p2);
  if ( count1 <= 2 )
    return 0;
  if ( count2 <= 2 )
    return 0;
  if ( count1 + count2 - 2 > 6 )
    return 0;
  iv = 0LL;
LABEL_8:
  if ( iv >= count1 )
    return 0;
  ivn = NextIndex(iv, count1);
  v1 = dynamic_array<Vector3f,false,4ul>::operator[](p1, iv);
  v2 = dynamic_array<Vector3f,false,4ul>::operator[](p1, ivn);
  for ( jv = 0LL; ; ++jv )
  {
    if ( jv >= count2 )
    {
      ++iv;
      goto LABEL_8;
    }
    jvn = NextIndex(jv, count2);
    w1 = dynamic_array<Vector3f,false,4ul>::operator[](p2, jv);
    v5 = dynamic_array<Vector3f,false,4ul>::operator[](p2, jvn);
    if ( Vector3f::operator==(v1, v5) && Vector3f::operator==(v2, w1) )
      break;
  }
  Index = NextIndex(jvn, count2);
  wn = dynamic_array<Vector3f,false,4ul>::operator[](p2, Index);
  v8 = PrevIndex(iv, count1);
  vp = dynamic_array<Vector3f,false,4ul>::operator[](p1, v8);
  if ( TriArea2D(vp, v1, wn) <= 0.0 )
    return 0;
  v9 = PrevIndex(jv, count2);
  wp = dynamic_array<Vector3f,false,4ul>::operator[](p2, v9);
  v10 = NextIndex(ivn, count1);
  v11 = dynamic_array<Vector3f,false,4ul>::operator[](p1, v10);
  if ( TriArea2D(v2, v11, wp) <= 0.0 )
    return 0;
  for ( k = ivn; k != iv; k = NextIndex(k, count1) )
  {
    v12 = dynamic_array<Vector3f,false,4ul>::operator[](p1, k);
    dynamic_array<Vector3f,false,4ul>::push_back(merged, v12);
  }
  for ( k_0 = jvn; k_0 != jv; k_0 = NextIndex(k_0, count2) )
  {
    v13 = dynamic_array<Vector3f,false,4ul>::operator[](p2, k_0);
    dynamic_array<Vector3f,false,4ul>::push_back(merged, v13);
  }
  return IsSafeConvex(merged);
};

// Line 462: range 000000000CC644EA-000000000CC649F8
void __cdecl DynamicMesh::MergePolygons(DynamicMesh *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  DynamicMesh::Poly *v4; // rdx
  int *v5; // rax
  int *v6; // rdx
  int v7; // r14d
  int *v8; // rax
  _DWORD *v9; // rdx
  DynamicMesh::Poly *v10; // rdx
  DynamicMesh::Poly *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  size_t ip_0; // [rsp+20h] [rbp-140h]
  size_t jp; // [rsp+28h] [rbp-138h]
  DynamicMesh::Poly v17; // [rsp+30h] [rbp-130h] BYREF
  char v18[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 24 10 merged:464 96 24 8 poly:465 160 24 9 poly2:466";
  *(_QWORD *)(v1 + 16) = DynamicMesh::MergePolygons;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v1 + 32), 6uLL);
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v1 + 96), 6uLL);
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v1 + 160), 6uLL);
  for ( ip_0 = 0LL; ip_0 < dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons); ++ip_0 )
  {
    v4 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
    DynamicMesh::FromPoly(this, (Polygon *)(v1 + 96), v4);
    for ( jp = dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons) - 1; jp > ip_0; --jp )
    {
      v5 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, ip_0);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      v7 = *v6;
      v8 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, jp);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      if ( v7 == *v9 )
      {
        v10 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, jp);
        DynamicMesh::FromPoly(this, (Polygon *)(v1 + 160), v10);
        if ( DynamicMesh::MergePolygons(
               this,
               (Polygon *)(v1 + 32),
               (const Polygon *)(v1 + 96),
               (const Polygon *)(v1 + 160)) )
        {
          dynamic_array<Vector3f,false,4ul>::operator=(
            (dynamic_array<Vector3f,false,4> *const)(v1 + 96),
            (const dynamic_array<Vector3f,false,4> *)(v1 + 32));
          v11 = dynamic_array<DynamicMesh::Poly,false,2ul>::begin(&this->m_Polygons);
          dynamic_array<DynamicMesh::Poly,false,2ul>::erase(&this->m_Polygons, &v11[jp]);
        }
        if ( dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(v1 + 96)) == 6 )
          break;
      }
    }
    DynamicMesh::CreatePolygon(&v17, this, (const Polygon *)(v1 + 96), 1u);
    v12 = (unsigned __int64)dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
    if ( (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v12 + 25) >> 3) + 0x7FFF8000) != 0
      && (char)((v12 + 25) & 7) >= *(_BYTE *)(((v12 + 25) >> 3) + 0x7FFF8000) )
    {
      v12 = __asan_report_store_n(v12, 26LL);
    }
    v13 = *(_QWORD *)&v17.m_Neighbours[4];
    *(_QWORD *)v12 = *(_QWORD *)v17.m_Neighbours;
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(v12 + 16) = *(_QWORD *)&v17.m_VertexIDs[2];
    *(_WORD *)(v12 + 24) = *(_WORD *)&v17.m_VertexCount;
  }
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v1 + 160));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v1 + 96));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v1 + 32));
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 492: range 000000000CC649FA-000000000CC64D0C
void __cdecl DynamicMesh::MergePolygons(const DynamicMesh *const this, PolygonContainer *polys)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  size_t v5; // rax
  const dynamic_array<Vector3f,false,4> *v6; // rax
  const Polygon *v7; // rcx
  size_t v8; // r14
  dynamic_array<Vector3f,false,4> *v9; // rax
  __gnu_cxx::__normal_iterator<dynamic_array<Vector3f,false,4>*,std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > > v10; // [rsp+18h] [rbp-F8h] BYREF
  __gnu_cxx::__normal_iterator<dynamic_array<Vector3f,false,4>*,std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > > __i; // [rsp+20h] [rbp-F0h] BYREF
  __gnu_cxx::__normal_iterator<const dynamic_array<Vector3f,false,4>*,std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > > __position; // [rsp+28h] [rbp-E8h] BYREF
  size_t ip_0; // [rsp+30h] [rbp-E0h]
  size_t jp; // [rsp+38h] [rbp-D8h]
  char v15[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 poly:494 96 24 10 merged:495";
  *(_QWORD *)(v2 + 16) = DynamicMesh::MergePolygons;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 32), 6uLL);
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 96), 6uLL);
  for ( ip_0 = 0LL; ; ++ip_0 )
  {
    v5 = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::size(polys);
    if ( ip_0 >= v5 )
      break;
    v6 = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::operator[](
           polys,
           ip_0);
    dynamic_array<Vector3f,false,4ul>::operator=((dynamic_array<Vector3f,false,4> *const)(v2 + 32), v6);
    for ( jp = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::size(polys)
             - 1; jp > ip_0; --jp )
    {
      v7 = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::operator[](
             polys,
             jp);
      if ( DynamicMesh::MergePolygons(this, (Polygon *)(v2 + 96), (const Polygon *)(v2 + 32), v7) )
      {
        dynamic_array<Vector3f,false,4ul>::operator=(
          (dynamic_array<Vector3f,false,4> *const)(v2 + 32),
          (const dynamic_array<Vector3f,false,4> *)(v2 + 96));
        v8 = jp;
        v10._M_current = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::begin(polys)._M_current;
        __i._M_current = __gnu_cxx::__normal_iterator<dynamic_array<Vector3f,false,4ul> *,std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>>::operator+(
                           &v10,
                           v8)._M_current;
        __gnu_cxx::__normal_iterator<dynamic_array<Vector3f,false,4ul> const*,std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>>::__normal_iterator<dynamic_array<Vector3f,false,4ul>*>(
          &__position,
          &__i);
        std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::erase(
          polys,
          __position);
      }
    }
    v9 = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::operator[](
           polys,
           ip_0);
    dynamic_array<Vector3f,false,4ul>::operator=(v9, (const dynamic_array<Vector3f,false,4> *)(v2 + 32));
  }
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 96));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 514: range 000000000CC64D0E-000000000CC6517A
void __cdecl DynamicMesh::ConnectPolygons(DynamicMesh *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint16_t *p_c2; // rax
  uint16_t v5; // r14
  DynamicMesh *v6; // rcx
  DynamicMesh::Poly *v7; // rdx
  int c1; // esi
  char v9; // cl
  uint16_t v10; // r14
  DynamicMesh *v11; // rcx
  DynamicMesh::Poly *v12; // rdx
  int c2; // esi
  char v14; // cl
  size_t ie; // [rsp+18h] [rbp-A8h]
  size_t edgeCount; // [rsp+20h] [rbp-A0h]
  DynamicMesh::Edge *edge; // [rsp+28h] [rbp-98h]
  char v18[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 9 edges:515";
  *(_QWORD *)(v1 + 16) = DynamicMesh::ConnectPolygons;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  dynamic_array<DynamicMesh::Edge,false,2ul>::dynamic_array((dynamic_array<DynamicMesh::Edge,false,2> *const)(v1 + 32));
  DynamicMesh::BuildEdgeConnections(this, (DynamicMesh::EdgeList *)(v1 + 32));
  edgeCount = dynamic_array<DynamicMesh::Edge,false,2ul>::size((const dynamic_array<DynamicMesh::Edge,false,2> *const)(v1 + 32));
  for ( ie = 0LL; ie < edgeCount; ++ie )
  {
    edge = dynamic_array<DynamicMesh::Edge,false,2ul>::operator[](
             (dynamic_array<DynamicMesh::Edge,false,2> *const)(v1 + 32),
             ie);
    p_c2 = &edge->c2;
    if ( *(_BYTE *)(((unsigned __int64)p_c2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_c2 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_c2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(p_c2);
    }
    if ( edge->c2 != 0xFFFF )
    {
      if ( *(_BYTE *)(((unsigned __int64)&edge->p2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)edge + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&edge->p2);
      }
      v5 = edge->p2 + 1;
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)edge + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&edge->p1);
      }
      v7 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&v6->m_Polygons, edge->p1);
      if ( *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)edge + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&edge->c1);
      }
      c1 = edge->c1;
      v9 = *(_BYTE *)(((unsigned __int64)&v7->m_Neighbours[edge->c1] >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)((((_BYTE)v7 + 2 * edge->c1) & 7) + 1) >= v9 )
        __asan_report_store2(&v7->m_Neighbours[edge->c1]);
      v7->m_Neighbours[c1] = v5;
      if ( *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)edge + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&edge->p1);
      }
      v10 = edge->p1 + 1;
      v11 = this;
      if ( *(_BYTE *)(((unsigned __int64)&edge->p2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)edge + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&edge->p2);
      }
      v12 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&v11->m_Polygons, edge->p2);
      if ( *(_BYTE *)(((unsigned __int64)&edge->c2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)edge + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->c2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&edge->c2);
      }
      c2 = edge->c2;
      v14 = *(_BYTE *)(((unsigned __int64)&v12->m_Neighbours[edge->c2] >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((((_BYTE)v12 + 2 * edge->c2) & 7) + 1) >= v14 )
        __asan_report_store2(&v12->m_Neighbours[edge->c2]);
      v12->m_Neighbours[c2] = v10;
    }
  }
  dynamic_array<DynamicMesh::Edge,false,2ul>::~dynamic_array((dynamic_array<DynamicMesh::Edge,false,2> *const)(v1 + 32));
  if ( v18 == (char *)v1 )
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
};

// Line 530: range 000000000CC6517C-000000000CC652BB
void __cdecl DynamicMesh::RemoveDegeneratePolygons(DynamicMesh *const this)
{
  float m_QuantFactor; // ebx
  Vector3f *v2; // r13
  uint16_t *m_VertexIDs; // r12
  DynamicMesh::Poly *v4; // rdx
  uint8_t *p_m_VertexCount; // rax
  size_t count; // [rsp+10h] [rbp-30h]
  size_t ip_0; // [rsp+18h] [rbp-28h]

  count = dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons);
  for ( ip_0 = 0LL; ip_0 < count; ++ip_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_QuantFactor);
    }
    m_QuantFactor = this->m_QuantFactor;
    v2 = dynamic_array<Vector3f,false,4ul>::operator[](&this->m_Vertices, 0LL);
    m_VertexIDs = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0)->m_VertexIDs;
    v4 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
    p_m_VertexCount = &v4->m_VertexCount;
    if ( *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_m_VertexCount & 7) >= *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_m_VertexCount);
    }
    if ( PolygonDegenerate(v4->m_VertexCount, m_VertexIDs, v2, m_QuantFactor) )
    {
      DynamicMesh::CollapsePolygonUnordered(this, ip_0);
      --count;
      --ip_0;
    }
  }
};

// Line 544: range 000000000CC652BC-000000000CC65604
void __cdecl DynamicMesh::RemoveDegenerateEdges(DynamicMesh *const this)
{
  int v1; // eax
  char v2; // dl
  uint16_t v3; // cx
  char v4; // dl
  int v5; // ecx
  char v6; // dl
  uint16_t v7; // cx
  char v8; // dl
  int i; // [rsp+1Ch] [rbp-24h]
  int k; // [rsp+20h] [rbp-20h]
  int j; // [rsp+24h] [rbp-1Ch]
  size_t count; // [rsp+28h] [rbp-18h]
  size_t ip_0; // [rsp+30h] [rbp-10h]
  DynamicMesh::Poly *poly; // [rsp+38h] [rbp-8h]

  count = dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons);
  for ( ip_0 = 0LL; ip_0 < count; ++ip_0 )
  {
    poly = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&poly->m_VertexCount);
      }
      if ( i >= poly->m_VertexCount )
        break;
      if ( i + 1 >= poly->m_VertexCount )
        v1 = 0;
      else
        v1 = i + 1;
      j = v1;
      v2 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[i] >> 3) + 0x7FFF8000);
      if ( v2 != 0 && (char)(((2 * i + (_BYTE)poly + 12) & 7) + 1) >= v2 )
        __asan_report_load2(&poly->m_VertexIDs[i]);
      v3 = poly->m_VertexIDs[i];
      v4 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[j] >> 3) + 0x7FFF8000);
      if ( v4 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v4 )
        __asan_report_load2(&poly->m_VertexIDs[j]);
      if ( v3 == poly->m_VertexIDs[j] )
      {
        for ( k = j; ; ++k )
        {
          if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)poly + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&poly->m_VertexCount);
          }
          if ( k >= poly->m_VertexCount - 1 )
            break;
          v5 = k + 1;
          v6 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[k + 1] >> 3) + 0x7FFF8000);
          if ( v6 != 0 && (char)(((2 * (k + 1) + (_BYTE)poly + 12) & 7) + 1) >= v6 )
            __asan_report_load2(&poly->m_VertexIDs[k + 1]);
          v7 = poly->m_VertexIDs[v5];
          v8 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[k] >> 3) + 0x7FFF8000);
          if ( v8 != 0 && (char)(((2 * k + (_BYTE)poly + 12) & 7) + 1) >= v8 )
            __asan_report_store2(&poly->m_VertexIDs[k]);
          poly->m_VertexIDs[k] = v7;
        }
        if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)poly + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&poly->m_VertexCount);
        }
        --poly->m_VertexCount;
        --i;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)poly + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&poly->m_VertexCount);
    }
    if ( poly->m_VertexCount <= 2u )
    {
      DynamicMesh::RemovePolygonUnordered(this, ip_0);
      --count;
      --ip_0;
    }
  }
};

// Line 572: range 000000000CC65606-000000000CC65B57
void __cdecl DynamicMesh::RemoveUnusedVertices(DynamicMesh *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  size_t v4; // rax
  size_t v5; // rax
  DynamicMesh::Poly *v6; // rdx
  uint8_t *p_m_VertexCount; // rax
  DynamicMesh::Poly *v8; // rdx
  unsigned __int64 v9; // rax
  int *v10; // rax
  _DWORD *v11; // rdx
  int v12; // r14d
  int *v13; // rax
  _DWORD *v14; // rdx
  uint16_t v15; // r14
  DynamicMesh::Poly *v16; // rdx
  unsigned __int64 v17; // rax
  Vector3f *v18; // rax
  int *v19; // rax
  int *v20; // rdx
  int v21; // r14d
  DynamicMesh::Poly *v22; // rdx
  unsigned __int64 v23; // rax
  uint8_t iv; // [rsp+19h] [rbp-E7h]
  uint16_t oldVertexID; // [rsp+1Ah] [rbp-E6h]
  int init_value; // [rsp+1Ch] [rbp-E4h] BYREF
  size_t ip_0; // [rsp+20h] [rbp-E0h]
  size_t count; // [rsp+28h] [rbp-D8h]
  char v29[208]; // [rsp+30h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 17 transVertices:573 96 24 15 newVertices:574";
  *(_QWORD *)(v1 + 16) = DynamicMesh::RemoveUnusedVertices;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  init_value = -1;
  v4 = dynamic_array<Vector3f,false,4ul>::size(&this->m_Vertices);
  dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v1 + 32), v4, &init_value);
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v1 + 96));
  v5 = dynamic_array<Vector3f,false,4ul>::size(&this->m_Vertices);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v1 + 96), v5);
  count = dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons);
  for ( ip_0 = 0LL; ip_0 < count; ++ip_0 )
  {
    for ( iv = 0; ; ++iv )
    {
      v6 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
      p_m_VertexCount = &v6->m_VertexCount;
      if ( *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_m_VertexCount & 7) >= *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_m_VertexCount);
      }
      if ( iv >= v6->m_VertexCount )
        break;
      v8 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
      v9 = (unsigned __int64)&v8->m_VertexIDs[iv];
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 1) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        __asan_report_load2(v9);
      oldVertexID = v8->m_VertexIDs[iv];
      v10 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v1 + 32), oldVertexID);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( *v11 == -1 )
      {
        v12 = dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(v1 + 96));
        v13 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v1 + 32), oldVertexID);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v13);
        }
        *v14 = v12;
        v15 = dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(v1 + 96));
        v16 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
        v17 = (unsigned __int64)&v16->m_VertexIDs[iv];
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 1) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          __asan_report_store2(v17);
        v16->m_VertexIDs[iv] = v15;
        v18 = dynamic_array<Vector3f,false,4ul>::operator[](&this->m_Vertices, oldVertexID);
        dynamic_array<Vector3f,false,4ul>::push_back((dynamic_array<Vector3f,false,4> *const)(v1 + 96), v18);
      }
      else
      {
        v19 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v1 + 32), oldVertexID);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        v21 = *v20;
        v22 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
        v23 = (unsigned __int64)&v22->m_VertexIDs[iv];
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0 && (char)((v23 & 7) + 1) >= *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          __asan_report_store2(v23);
        v22->m_VertexIDs[iv] = v21;
      }
    }
  }
  dynamic_array<Vector3f,false,4ul>::operator=(&this->m_Vertices, (const dynamic_array<Vector3f,false,4> *)(v1 + 96));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v1 + 96));
  dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v1 + 32));
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 603: range 000000000CC65B58-000000000CC65B96
void __cdecl DynamicMesh::FindNeighbors(DynamicMesh *const this)
{
  DynamicMesh::RemoveDegeneratePolygons(this);
  DynamicMesh::RemoveDegenerateEdges(this);
  DynamicMesh::RemoveUnusedVertices(this);
  DynamicMesh::ConnectPolygons(this);
};

// Line 615: range 000000000CC65B98-000000000CC65BC7
void __cdecl DynamicMesh::AddPolygon(
        DynamicMesh *const this,
        const Polygon *vertices,
        const DynamicMesh::DataType *data)
{
  DynamicMesh::AddPolygon(this, vertices, data, 0);
};

// Line 620: range 000000000CC65BC8-000000000CC65D0A
void __cdecl DynamicMesh::AddPolygon(
        DynamicMesh *const this,
        const Polygon *vertices,
        const DynamicMesh::DataType *data,
        const uint32_t status)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 26 11 newPoly:626";
  *(_QWORD *)(v4 + 16) = DynamicMesh::AddPolygon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 0x2000000;
  v6[536862722] = -202116109;
  DynamicMesh::CreatePolygon((DynamicMesh::Poly *)(v4 + 32), this, vertices, status);
  dynamic_array<DynamicMesh::Poly,false,2ul>::push_back(&this->m_Polygons, (const DynamicMesh::Poly *)(v4 + 32));
  dynamic_array<int,false,4ul>::push_back(&this->m_Data, data);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 632: range 000000000CC65D0C-000000000CC66559
bool __cdecl DynamicMesh::ClipPolys(DynamicMesh *const this, const HullContainer *carveHulls)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DynamicMesh::Poly *v5; // rax
  int *v6; // rax
  _DWORD *v7; // rdx
  DynamicMesh::Poly *v8; // rax
  DynamicMesh::Poly *v9; // r14
  unsigned __int64 n; // rax
  __int64 v11; // rdi
  int *v12; // rax
  int *v13; // rdx
  int v14; // r14d
  int *v15; // rax
  _DWORD *v16; // rdx
  const Polygon *v17; // rax
  DynamicMesh::Poly *v18; // r15
  DynamicMesh::Poly *v19; // rax
  int *v20; // r15
  int *v21; // rax
  bool result; // al
  bool clipped; // [rsp+27h] [rbp-1E9h]
  size_t ih; // [rsp+28h] [rbp-1E8h]
  size_t first; // [rsp+30h] [rbp-1E0h]
  size_t ip_0; // [rsp+38h] [rbp-1D8h]
  size_t io; // [rsp+40h] [rbp-1D0h]
  std::vector<dynamic_array<Plane,false,4>,stl_allocator<dynamic_array<Plane,false,4>,16> >::size_type hullCount; // [rsp+48h] [rbp-1C8h]
  std::vector<dynamic_array<Plane,false,4>,stl_allocator<dynamic_array<Plane,false,4>,16> >::const_reference carveHull; // [rsp+50h] [rbp-1C0h]
  size_t count; // [rsp+58h] [rbp-1B8h]
  char v32[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 15 currentData:665 64 24 19 outsidePolygons:638 128 24 15 currentPoly:641 192 24 10 insid"
                        "e:642 256 24 8 temp:643 320 24 13 usedEdges:648";
  *(_QWORD *)(v2 + 16) = DynamicMesh::ClipPolys;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  hullCount = std::vector<dynamic_array<Plane,false,4ul>,stl_allocator<dynamic_array<Plane,false,4ul>,16>>::size(carveHulls);
  clipped = 0;
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::vector((std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64));
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::reserve(
    (std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64),
    0xCuLL);
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 128));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 192));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 256));
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 128), 6uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 192), 0x20uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 256), 0x20uLL);
  dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 320));
  dynamic_array<unsigned char,false,1ul>::reserve((dynamic_array<unsigned char,false,1> *const)(v2 + 320), 0x20uLL);
  for ( ih = 0LL; ih < hullCount; ++ih )
  {
    carveHull = std::vector<dynamic_array<Plane,false,4ul>,stl_allocator<dynamic_array<Plane,false,4ul>,16>>::operator[](
                  carveHulls,
                  ih);
    count = dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons);
    first = 0LL;
    for ( ip_0 = 0LL; ip_0 < count; ++ip_0 )
    {
      v5 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
      DynamicMesh::FromPoly(this, (Polygon *)(v2 + 192), v5);
      DynamicMesh::Intersection(
        this,
        (Polygon *)(v2 + 192),
        carveHull,
        (Polygon *)(v2 + 256),
        (dynamic_array<unsigned char,false,1> *)(v2 + 320));
      if ( !dynamic_array<Vector3f,false,4ul>::empty((const dynamic_array<Vector3f,false,4> *const)(v2 + 192)) )
      {
        clipped = 1;
        v6 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, ip_0);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        *(_DWORD *)(v2 + 48) = *v7;
        v8 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
        DynamicMesh::FromPoly(this, (Polygon *)(v2 + 128), v8);
        DynamicMesh::Subtract(
          this,
          (PolygonContainer *)(v2 + 64),
          (const Polygon *)(v2 + 128),
          (Polygon *)(v2 + 192),
          (Polygon *)(v2 + 256),
          (const dynamic_array<unsigned char,false,1> *)(v2 + 320),
          carveHull);
        DynamicMesh::MergePolygons(this, (PolygonContainer *)(v2 + 64));
        if ( ip_0 != first )
        {
          v9 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, first);
          n = (unsigned __int64)dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
          if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((n + 25) >> 3) + 0x7FFF8000) != 0
            && (char)((n + 25) & 7) >= *(_BYTE *)(((n + 25) >> 3) + 0x7FFF8000) )
          {
            n = __asan_report_store_n(n, 26LL);
          }
          if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)&v9->m_Status >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v9 + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&v9->m_Status >> 3) + 0x7FFF8000) )
          {
            n = __asan_report_load_n(v9, 26LL);
          }
          v11 = *(_QWORD *)&v9->m_Neighbours[4];
          *(_QWORD *)n = *(_QWORD *)v9->m_Neighbours;
          *(_QWORD *)(n + 8) = v11;
          *(_QWORD *)(n + 16) = *(_QWORD *)&v9->m_VertexIDs[2];
          *(_WORD *)(n + 24) = *(_WORD *)&v9->m_VertexCount;
          v12 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, first);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          v14 = *v13;
          v15 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, ip_0);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v15);
          }
          *v16 = v14;
        }
        ++first;
        for ( io = 0LL;
              io < std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::size((const std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64));
              ++io )
        {
          v17 = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::operator[](
                  (std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64),
                  io);
          DynamicMesh::AddPolygon(this, v17, (const DynamicMesh::DataType *)(v2 + 48), 1u);
        }
      }
    }
    if ( first )
    {
      v18 = &dynamic_array<DynamicMesh::Poly,false,2ul>::begin(&this->m_Polygons)[first];
      v19 = dynamic_array<DynamicMesh::Poly,false,2ul>::begin(&this->m_Polygons);
      dynamic_array<DynamicMesh::Poly,false,2ul>::erase(&this->m_Polygons, v19, v18);
      v20 = &dynamic_array<int,false,4ul>::begin(&this->m_Data)[first];
      v21 = dynamic_array<int,false,4ul>::begin(&this->m_Data);
      dynamic_array<int,false,4ul>::erase(&this->m_Data, v21, v20);
    }
  }
  dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 320));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 256));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 192));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 128));
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::~vector((std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64));
  result = clipped;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 693: range 000000000CC6655A-000000000CC66E72
bool __cdecl DynamicMesh::ClipPolys(DynamicMesh *const this, const DetailHullContainer *carveHulls)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int *v5; // rax
  _DWORD *v6; // rdx
  const int *v7; // rax
  _DWORD *v8; // rdx
  DynamicMesh::Poly *v9; // rax
  DynamicMesh::Poly *v10; // rax
  DynamicMesh::Poly *v11; // r14
  unsigned __int64 n; // rax
  __int64 v13; // rdi
  int *v14; // rax
  int *v15; // rdx
  int v16; // r14d
  int *v17; // rax
  _DWORD *v18; // rdx
  const Polygon *v19; // rax
  DynamicMesh::Poly *v20; // r15
  DynamicMesh::Poly *v21; // rax
  int *v22; // r15
  int *v23; // rax
  bool result; // al
  bool clipped; // [rsp+26h] [rbp-1FAh]
  bool found; // [rsp+27h] [rbp-1F9h]
  size_t ih; // [rsp+28h] [rbp-1F8h]
  size_t first; // [rsp+30h] [rbp-1F0h]
  size_t ip_0; // [rsp+38h] [rbp-1E8h]
  size_t i; // [rsp+40h] [rbp-1E0h]
  size_t io; // [rsp+48h] [rbp-1D8h]
  std::vector<DetailHull,stl_allocator<DetailHull,16> >::size_type hullCount; // [rsp+50h] [rbp-1D0h]
  const DetailHull *carveHull; // [rsp+58h] [rbp-1C8h]
  size_t count; // [rsp+60h] [rbp-1C0h]
  size_t ni; // [rsp+68h] [rbp-1B8h]
  char v37[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 15 currentData:720 64 24 19 outsidePolygons:699 128 24 15 currentPoly:702 192 24 10 insid"
                        "e:703 256 24 8 temp:704 320 24 13 usedEdges:709";
  *(_QWORD *)(v2 + 16) = DynamicMesh::ClipPolys;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  hullCount = std::vector<DetailHull,stl_allocator<DetailHull,16>>::size(carveHulls);
  clipped = 0;
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::vector((std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64));
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::reserve(
    (std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64),
    0xCuLL);
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 128));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 192));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 256));
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 128), 6uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 192), 0x20uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 256), 0x20uLL);
  dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 320));
  dynamic_array<unsigned char,false,1ul>::reserve((dynamic_array<unsigned char,false,1> *const)(v2 + 320), 0x20uLL);
  for ( ih = 0LL; ih < hullCount; ++ih )
  {
    carveHull = std::vector<DetailHull,stl_allocator<DetailHull,16>>::operator[](carveHulls, ih);
    count = dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons);
    first = 0LL;
    for ( ip_0 = 0LL; ip_0 < count; ++ip_0 )
    {
      v5 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, ip_0);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v2 + 48) = *v6;
      found = 0;
      i = 0LL;
      ni = dynamic_array<int,false,4ul>::size(&carveHull->polysIds);
      while ( i < ni )
      {
        v7 = dynamic_array<int,false,4ul>::operator[](&carveHull->polysIds, i);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        if ( *v8 == *(_DWORD *)(v2 + 48) )
        {
          found = 1;
          break;
        }
        ++i;
      }
      if ( found )
      {
        v9 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
        DynamicMesh::FromPoly(this, (Polygon *)(v2 + 192), v9);
        DynamicMesh::Intersection(
          this,
          (Polygon *)(v2 + 192),
          &carveHull->hull,
          (Polygon *)(v2 + 256),
          (dynamic_array<unsigned char,false,1> *)(v2 + 320));
        if ( !dynamic_array<Vector3f,false,4ul>::empty((const dynamic_array<Vector3f,false,4> *const)(v2 + 192)) )
        {
          clipped = 1;
          v10 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
          DynamicMesh::FromPoly(this, (Polygon *)(v2 + 128), v10);
          DynamicMesh::Subtract(
            this,
            (PolygonContainer *)(v2 + 64),
            (const Polygon *)(v2 + 128),
            (Polygon *)(v2 + 192),
            (Polygon *)(v2 + 256),
            (const dynamic_array<unsigned char,false,1> *)(v2 + 320),
            &carveHull->hull);
          DynamicMesh::MergePolygons(this, (PolygonContainer *)(v2 + 64));
          if ( ip_0 != first )
          {
            v11 = dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, first);
            n = (unsigned __int64)dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, ip_0);
            if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((n + 25) >> 3) + 0x7FFF8000) != 0
              && (char)((n + 25) & 7) >= *(_BYTE *)(((n + 25) >> 3) + 0x7FFF8000) )
            {
              n = __asan_report_store_n(n, 26LL);
            }
            if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((unsigned __int64)&v11->m_Status >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v11 + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&v11->m_Status >> 3) + 0x7FFF8000) )
            {
              n = __asan_report_load_n(v11, 26LL);
            }
            v13 = *(_QWORD *)&v11->m_Neighbours[4];
            *(_QWORD *)n = *(_QWORD *)v11->m_Neighbours;
            *(_QWORD *)(n + 8) = v13;
            *(_QWORD *)(n + 16) = *(_QWORD *)&v11->m_VertexIDs[2];
            *(_WORD *)(n + 24) = *(_WORD *)&v11->m_VertexCount;
            v14 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, first);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            v16 = *v15;
            v17 = dynamic_array<int,false,4ul>::operator[](&this->m_Data, ip_0);
            v18 = v17;
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v17);
            }
            *v18 = v16;
          }
          ++first;
          for ( io = 0LL;
                io < std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::size((const std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64));
                ++io )
          {
            v19 = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::operator[](
                    (std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64),
                    io);
            DynamicMesh::AddPolygon(this, v19, (const DynamicMesh::DataType *)(v2 + 48), 1u);
          }
        }
      }
    }
    if ( first )
    {
      v20 = &dynamic_array<DynamicMesh::Poly,false,2ul>::begin(&this->m_Polygons)[first];
      v21 = dynamic_array<DynamicMesh::Poly,false,2ul>::begin(&this->m_Polygons);
      dynamic_array<DynamicMesh::Poly,false,2ul>::erase(&this->m_Polygons, v21, v20);
      v22 = &dynamic_array<int,false,4ul>::begin(&this->m_Data)[first];
      v23 = dynamic_array<int,false,4ul>::begin(&this->m_Data);
      dynamic_array<int,false,4ul>::erase(&this->m_Data, v23, v22);
    }
  }
  dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 320));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 256));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 192));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 128));
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::~vector((std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 64));
  result = clipped;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 767: range 000000000CC66E74-000000000CC66ECD
void __cdecl DynamicMesh::Reserve(DynamicMesh *const this, const int vertexCount, const int polygonCount)
{
  dynamic_array<DynamicMesh::Poly,false,2ul>::reserve(&this->m_Polygons, polygonCount);
  dynamic_array<int,false,4ul>::reserve(&this->m_Data, polygonCount);
  dynamic_array<Vector3f,false,4ul>::reserve(&this->m_Vertices, vertexCount);
};

// Line 774: range 000000000CC66ECE-000000000CC66EF7
void __cdecl DynamicMesh::AddVertex(DynamicMesh *const this, const Vector3f *v)
{
  VertexWelder<2048>::Push(&this->m_Welder, v);
};

// Line 779: range 000000000CC66EF8-000000000CC6711B
void __cdecl DynamicMesh::AddPolygon(
        DynamicMesh *const this,
        const uint16_t *vertexIDs,
        const DynamicMesh::DataType *data,
        size_t vertexCount)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // r12
  char v8; // cl
  uint16_t v9; // si
  char v10; // cl
  size_t iv; // [rsp+28h] [rbp-88h]
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = v4 + 96;
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 26 8 poly:781";
  *(_QWORD *)(v4 + 16) = DynamicMesh::AddPolygon;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 0x2000000;
  v7[536862722] = -202116109;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_WORD *)(v4 + 56) = 0;
  *(_BYTE *)(v4 + 57) = 0;
  *(_BYTE *)(v4 + 56) = vertexCount;
  for ( iv = 0LL; iv < vertexCount; ++iv )
  {
    v8 = *(_BYTE *)(((unsigned __int64)&vertexIDs[iv] >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((2 * iv + (_BYTE)vertexIDs) & 7) + 1) >= v8 )
      v6 = __asan_report_load2(&vertexIDs[iv]);
    v9 = vertexIDs[iv];
    v10 = *(_BYTE *)(((2 * iv + v6 - 64 + 12) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((2 * iv + v6 - 64 + 12) & 7) + 1) >= v10 )
      v6 = __asan_report_store2(2 * iv + v6 - 64 + 12);
    *(_WORD *)(v6 + 2 * iv - 52) = v9;
  }
  dynamic_array<DynamicMesh::Poly,false,2ul>::push_back(&this->m_Polygons, (const DynamicMesh::Poly *)(v6 - 64));
  dynamic_array<int,false,4ul>::push_back(&this->m_Data, data);
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};
