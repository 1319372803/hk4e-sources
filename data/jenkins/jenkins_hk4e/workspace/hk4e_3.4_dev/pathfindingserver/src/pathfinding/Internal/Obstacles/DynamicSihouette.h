// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/DynamicSihouette.h

// Line 16: range 000000000CD75B6E-000000000CD75BB8
void __cdecl DynamicSihouette::~DynamicSihouette(DynamicSihouette *const this)
{
  DSVertexWelder<2048>::~DSVertexWelder(&this->m_Welder);
  std::set<int,std::less<int>,stl_allocator<int,16>>::~set(&this->m_DataTypeRemoveSet);
  dynamic_array<Vector3f,true,4ul>::~dynamic_array(&this->m_Vertices);
  dynamic_array<DynamicSihouette::Poly,true,4ul>::~dynamic_array(&this->m_Polygons);
};

// Line 108: range 000000000CD741BE-000000000CD741D7
size_t __cdecl DynamicSihouette::PolyCount(const DynamicSihouette *const this)
{
  return dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
};

// Line 113: range 000000000CD741D8-000000000CD741F5
size_t __cdecl DynamicSihouette::VertCount(const DynamicSihouette *const this)
{
  return dynamic_array<Vector3f,true,4ul>::size(&this->m_Vertices);
};

// Line 118: range 000000000CD741F6-000000000CD74213
size_t __cdecl DynamicSihouette::RemovePolyCount(const DynamicSihouette *const this)
{
  return std::set<int,std::less<int>,stl_allocator<int,16>>::size(&this->m_DataTypeRemoveSet);
};

// Line 123: range 000000000CD74214-000000000CD74238
const DynamicSihouette::Poly *__cdecl DynamicSihouette::GetPoly(const DynamicSihouette *const this, size_t i)
{
  return dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, i);
};

// Line 128: range 000000000CD7423A-000000000CD74274
const NavMeshTile *__cdecl DynamicSihouette::GetSourceTile(const DynamicSihouette *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_sourceTile, v1);
  return this->m_sourceTile;
};

// Line 133: range 000000000CD74276-000000000CD74393
void __cdecl DynamicSihouette::SetVertex(DynamicSihouette *const this, size_t i, const Vector3f *v)
{
  Vector3f *v3; // rax
  Vector3f *v4; // rdx

  v3 = dynamic_array<Vector3f,true,4ul>::operator[](&this->m_Vertices, i);
  v4 = v3;
  if ( ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v3->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v3 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v3->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3, 12LL);
  }
  if ( ((unsigned __int8)v & 7) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v, 12LL);
  }
  *(_QWORD *)&v4->x = *(_QWORD *)&v->x;
  v4->z = v->z;
};

// Line 140: range 000000000CD74394-000000000CD74584
// local variable allocation has failed, the output may be wrong!
bool __cdecl DynamicSihouette::DegenerateTriangle(const DynamicSihouette *const this, const Polygon *tri)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const Vector3f *v6; // r14
  const Vector3f *v7; // rax
  __int64 v8; // xmm0_8
  const Vector3f *v9; // r14
  const Vector3f *v10; // rax
  __int64 v11; // xmm0_8
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __m128i v14; // xmm0
  bool result; // al
  char v16[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 6 ab:143 64 12 6 ac:144 96 12 5 n:145";
  *(_QWORD *)(v3 + 16) = DynamicSihouette::DegenerateTriangle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -202177536;
  v6 = dynamic_array<Vector3f,false,4ul>::operator[](tri, 0LL);
  v7 = dynamic_array<Vector3f,false,4ul>::operator[](tri, 1uLL);
  *(Vector3f *)((char *)&v2 - 8) = operator-(v7, v6);
  *(_QWORD *)(v3 + 32) = v8;
  *(_DWORD *)(v3 + 40) = v2.m128i_i32[0];
  v9 = dynamic_array<Vector3f,false,4ul>::operator[](tri, 0LL);
  v10 = dynamic_array<Vector3f,false,4ul>::operator[](tri, 2uLL);
  *(Vector3f *)((char *)&v2 - 8) = operator-(v10, v9);
  *(_QWORD *)(v3 + 64) = v11;
  *(_DWORD *)(v3 + 72) = v2.m128i_i32[0];
  *(Vector3f *)((char *)&v2 - 8) = Cross((const Vector3f *)(v3 + 32), (const Vector3f *)(v3 + 64));
  v13 = v12;
  v14 = v2;
  *(_QWORD *)(v3 + 96) = v13;
  *(_DWORD *)(v3 + 104) = v2.m128i_i32[0];
  *(float *)v14.m128i_i32 = SqrMagnitude((const Vector3f *)(v3 + 96));
  result = COERCE_FLOAT(_mm_cvtsi128_si32(v14)) == 0.0;
  if ( v16 == (char *)v3 )
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

// Line 152: range 000000000CD74586-000000000CD74668
bool __cdecl DynamicSihouette::IsSafeConvex(
        const DynamicSihouette *const this,
        const dynamic_array<Vector3f,false,4> *vertices)
{
  __m128i v2; // xmm0
  size_t Index; // rdx
  size_t v4; // rdx
  const Vector3f *v5; // rdx
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
    v4 = NextIndex(i, vertexCount);
    v5 = dynamic_array<Vector3f,false,4ul>::operator[](vertices, v4);
    *(float *)v2.m128i_i32 = TriArea2D(v0, v1, v5);
    triArea = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    v2 = (__m128i)0x3C23D70Au;
    if ( triArea <= 0.0099999998 )
      return 0;
  }
  return 1;
};

// Line 167: range 000000000CD7466A-000000000CD74B03
// local variable allocation has failed, the output may be wrong!
bool __cdecl DynamicSihouette::PolygonDegenerate(
        DynamicSihouette *const this,
        size_t vertexCount,
        const uint16_t *indices,
        const float quantFactor)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  bool result; // al
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // xmm0_8
  __int64 v12; // xmm0_8
  const float *v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // xmm0_8
  const float *v16; // rax
  _DWORD *v17; // rdx
  float __a; // [rsp+20h] [rbp-C0h] BYREF
  float area; // [rsp+24h] [rbp-BCh]
  float triArea; // [rsp+28h] [rbp-B8h]
  float safety; // [rsp+2Ch] [rbp-B4h]
  size_t i; // [rsp+30h] [rbp-B0h]
  const Vector3f *v0; // [rsp+38h] [rbp-A8h]
  const Vector3f *v1; // [rsp+40h] [rbp-A0h]
  const Vector3f *v2; // [rsp+48h] [rbp-98h]
  Vector3f Vertex; // [rsp+50h] [rbp-90h] BYREF
  Vector3f v29; // [rsp+5Ch] [rbp-84h] BYREF
  Vector3f v30; // [rsp+68h] [rbp-78h] BYREF
  Vector3f inV; // [rsp+74h] [rbp-6Ch] BYREF
  char v32[96]; // [rsp+80h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 13 maxSideSq:173";
  *(_QWORD *)(v5 + 16) = DynamicSihouette::PolygonDegenerate;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  if ( vertexCount > 2 )
  {
    area = 0.0;
    *(_DWORD *)(v5 + 32) = 0;
    for ( i = 2LL; i < vertexCount; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)indices >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)indices & 7) + 1) >= *(_BYTE *)(((unsigned __int64)indices >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(indices);
      }
      Vertex = DynamicSihouette::GetVertex(this, *indices);
      v0 = &Vertex;
      v9 = (unsigned __int64)&indices[i - 1];
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((2 * i - 2 + (_BYTE)indices) & 7) + 1) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&indices[i - 1]);
      }
      v29 = DynamicSihouette::GetVertex(this, *(unsigned __int16 *)v9);
      v1 = &v29;
      v10 = (unsigned __int64)&indices[i];
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((2 * i + (_BYTE)indices) & 7) + 1) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&indices[i]);
      }
      *(Vector3f *)((char *)&v4 - 8) = DynamicSihouette::GetVertex(this, *(unsigned __int16 *)v10);
      *(_QWORD *)&v30.x = v11;
      LODWORD(v30.z) = v4.m128i_i32[0];
      v2 = &v30;
      TriArea2D(v0, v1, &v30);
      triArea = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
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
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      *(_DWORD *)(v5 + 32) = *v17;
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
  if ( v32 == (char *)v5 )
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
