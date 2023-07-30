// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/DynamicSihouette.cpp

// Line 12: range 000000000CC67EC6-000000000CC681C3
void __cdecl DynamicSihouette::DynamicSihouette(
        DynamicSihouette *const this,
        const float quantFactor,
        const NavMeshTile *tile,
        const Vector3f *tileOff)
{
  DSVertexWelder<2048> *p_m_Welder; // rdi
  dynamic_array<Vector3f,true,4> *p_m_Vertices; // r10
  Vector3f *p_m_tileOff; // rsi
  __int64 m_sourceTile; // rax
  __int64 v8; // rdx
  size_t v9; // rdx
  __int64 v10; // rax

  dynamic_array<DynamicSihouette::Poly,true,4ul>::dynamic_array(&this->m_Polygons);
  dynamic_array<Vector3f,true,4ul>::dynamic_array(&this->m_Vertices);
  std::set<int,std::less<int>,stl_allocator<int,16>>::set(&this->m_DataTypeRemoveSet);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_sourceTile = tile;
  if ( *(char *)(((unsigned __int64)&this->m_tileOff >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_tileOff.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_tileOff.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_tileOff, 12LL);
  }
  if ( ((unsigned __int8)tileOff & 7) >= *(_BYTE *)(((unsigned __int64)tileOff >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)tileOff >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&tileOff->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)tileOff + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&tileOff->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(tileOff, 12LL);
  }
  this->m_tileOff = *tileOff;
  DSVertexWelder<2048>::DSVertexWelder(&this->m_Welder, quantFactor);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_QuantFactor);
  }
  this->m_QuantFactor = quantFactor;
  p_m_Welder = &this->m_Welder;
  p_m_Vertices = &this->m_Vertices;
  p_m_tileOff = &this->m_tileOff;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
  {
    p_m_Welder = (DSVertexWelder<2048> *)&this->m_sourceTile;
    __asan_report_load8(&this->m_sourceTile, p_m_tileOff);
  }
  m_sourceTile = (__int64)this->m_sourceTile;
  if ( *(_BYTE *)(((unsigned __int64)(m_sourceTile + 16) >> 3) + 0x7FFF8000) )
  {
    p_m_Welder = (DSVertexWelder<2048> *)(m_sourceTile + 16);
    m_sourceTile = __asan_report_load8(m_sourceTile + 16, p_m_tileOff);
  }
  v8 = *(_QWORD *)(m_sourceTile + 16);
  if ( *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000) != 0
    && (char)(((v8 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000) )
  {
    p_m_Welder = (DSVertexWelder<2048> *)(v8 + 24);
    __asan_report_load4(v8 + 24);
  }
  v9 = *(int *)(v8 + 24);
  v10 = (__int64)this->m_sourceTile;
  if ( *(_BYTE *)(((unsigned __int64)(v10 + 40) >> 3) + 0x7FFF8000) )
  {
    p_m_Welder = (DSVertexWelder<2048> *)(v10 + 40);
    v10 = __asan_report_load8(v10 + 40, p_m_tileOff);
  }
  DSVertexWelder<2048>::SetVertexArray(p_m_Welder, *(const Vector3f **)(v10 + 40), v9, p_m_tileOff, p_m_Vertices);
};

// Line 24: range 000000000CC681C4-000000000CC684B8
Vector3f __cdecl DynamicSihouette::GetVertex(const DynamicSihouette *const this, size_t i)
{
  __int64 m_sourceTile; // rax
  __int64 v3; // rdx
  char v4; // cl
  Vector3f *p_m_tileOff; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  const dynamic_array<Vector3f,true,4> *p_m_Vertices; // rdi
  __int64 v9; // rax
  const dynamic_array<Vector3f,true,4> *v10; // rdx
  unsigned __int64 n; // rax
  unsigned __int64 v12; // rax
  float z; // xmm1_4
  __int64 v14; // xmm0_8
  unsigned __int64 ia; // [rsp+20h] [rbp-20h]
  Vector3f v17; // [rsp+34h] [rbp-Ch]
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  ia = i;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_sourceTile, i);
  if ( this->m_sourceTile )
  {
    m_sourceTile = (__int64)this->m_sourceTile;
    if ( *(_BYTE *)(((unsigned __int64)(m_sourceTile + 16) >> 3) + 0x7FFF8000) )
      m_sourceTile = __asan_report_load8(m_sourceTile + 16, i);
    v3 = *(_QWORD *)(m_sourceTile + 16);
    v4 = *(_BYTE *)(((unsigned __int64)(v3 + 24) >> 3) + 0x7FFF8000);
    LOBYTE(i) = v4 != 0;
    if ( v4 != 0 && (char)(((v3 + 24) & 7) + 3) >= v4 )
      __asan_report_load4(v3 + 24);
    if ( ia >= *(int *)(v3 + 24) )
    {
      p_m_Vertices = &this->m_Vertices;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
      {
        p_m_Vertices = (const dynamic_array<Vector3f,true,4> *)&this->m_sourceTile;
        __asan_report_load8(&this->m_sourceTile, i);
      }
      v9 = (__int64)this->m_sourceTile;
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 16) >> 3) + 0x7FFF8000) )
      {
        p_m_Vertices = (const dynamic_array<Vector3f,true,4> *)(v9 + 16);
        v9 = __asan_report_load8(v9 + 16, i);
      }
      v10 = *(const dynamic_array<Vector3f,true,4> **)(v9 + 16);
      if ( *(_BYTE *)(((unsigned __int64)&v10[1] >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10[1] >> 3) + 0x7FFF8000) )
      {
        p_m_Vertices = v10 + 1;
        __asan_report_load4(&v10[1]);
      }
      n = (unsigned __int64)dynamic_array<Vector3f,true,4ul>::operator[](p_m_Vertices, ia - SLODWORD(v10[1].m_data));
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      v17 = *(Vector3f *)n;
    }
    else
    {
      p_m_tileOff = &this->m_tileOff;
      v6 = (__int64)this->m_sourceTile;
      v7 = *(unsigned __int8 *)(((unsigned __int64)(v6 + 40) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v7 )
        v6 = __asan_report_load8(v6 + 40, v7);
      v17 = operator-((const Vector3f *)(*(_QWORD *)(v6 + 40) + 12 * ia), p_m_tileOff);
    }
  }
  else
  {
    v12 = (unsigned __int64)dynamic_array<Vector3f,true,4ul>::operator[](&this->m_Vertices, i);
    if ( (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v12 + 11) & 7) >= *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) )
    {
      v12 = __asan_report_load_n(v12, 12LL);
    }
    v17 = *(Vector3f *)v12;
  }
  z = v17.z;
  v14 = *(_QWORD *)&v17.x;
  result.x = *(float *)&v14;
  result.y = *((float *)&v14 + 1);
  result.z = z;
  return result;
};

// Line 33: range 000000000CC684BA-000000000CC68607
DynamicSihouette::Poly *__cdecl DynamicSihouette::CreatePolygon(
        DynamicSihouette::Poly *retstr,
        DynamicSihouette *const this,
        const Polygon *vertices)
{
  const Vector3f *v3; // rax
  uint16_t v4; // di
  char v5; // dl
  size_t i; // [rsp+28h] [rbp-28h]
  size_t vertexCount; // [rsp+30h] [rbp-20h]

  vertexCount = dynamic_array<Vector3f,false,4ul>::size(vertices);
  *(_QWORD *)retstr->m_Neighbours = 0LL;
  *(_QWORD *)&retstr->m_Neighbours[4] = 0LL;
  *(_QWORD *)&retstr->m_NeighboursC[4] = 0LL;
  *(_QWORD *)&retstr->m_VertexIDs[3] = 0LL;
  retstr->m_polyId = 0;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_VertexCount >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&retstr->m_VertexCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&retstr->m_VertexCount);
  }
  retstr->m_VertexCount = vertexCount;
  for ( i = 0LL; i < vertexCount; ++i )
  {
    v3 = dynamic_array<Vector3f,false,4ul>::operator[](vertices, i);
    v4 = DSVertexWelder<2048>::AddUnique(&this->m_Welder, v3);
    v5 = *(_BYTE *)(((unsigned __int64)&retstr->m_VertexIDs[i] >> 3) + 0x7FFF8000);
    if ( v5 != 0 && (char)(((2 * (i + 8) + (_BYTE)retstr + 2) & 7) + 1) >= v5 )
    {
      v4 = 2 * (i + 8) + (_WORD)retstr + 2;
      __asan_report_store2(&retstr->m_VertexIDs[i]);
    }
    retstr->m_VertexIDs[i] = v4;
  }
  return retstr;
};

// Line 54: range 000000000CC68608-000000000CC68794
void __cdecl DynamicSihouette::Intersection(
        const DynamicSihouette *const this,
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

// Line 79: range 000000000CC68796-000000000CC68934
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicSihouette::FromPoly(
        const DynamicSihouette *const this,
        Polygon *result,
        const DynamicSihouette::Poly *poly)
{
  char v3; // dl
  __int64 v4; // xmm0_8
  float v5; // xmm1_4
  unsigned __int64 v6; // rax
  uint32_t vertexCount; // [rsp+24h] [rbp-1Ch]
  unsigned __int64 i; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)poly + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&poly->m_VertexCount);
  }
  vertexCount = poly->m_VertexCount;
  dynamic_array<Vector3f,false,4ul>::resize_uninitialized(result, poly->m_VertexCount, kIncreaseToExactSize);
  for ( i = 0LL; i < vertexCount; ++i )
  {
    v3 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[i] >> 3) + 0x7FFF8000);
    if ( v3 != 0 && (char)(((2 * (i + 8) + (_BYTE)poly + 2) & 7) + 1) >= v3 )
      __asan_report_load2(&poly->m_VertexIDs[i]);
    *(Vector3f *)&v4 = DynamicSihouette::GetVertex(this, poly->m_VertexIDs[i]);
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

// Line 93: range 000000000CC68936-000000000CC68B93
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicSihouette::FromPoly(
        const DynamicSihouette *const this,
        Polygon *result,
        DynamicSihouette::DataType ip_0)
{
  __int64 m_sourceTile; // rax
  size_t vertCount; // rsi
  Vector3f *p_m_tileOff; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  char v9; // dl
  __int64 v10; // xmm0_8
  float v11; // xmm1_4
  unsigned __int64 v12; // rax
  uint32_t vertexCount; // [rsp+2Ch] [rbp-24h]
  unsigned __int64 i; // [rsp+30h] [rbp-20h]
  NavMeshPoly *poly; // [rsp+38h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_sourceTile, result);
  m_sourceTile = (__int64)this->m_sourceTile;
  if ( *(_BYTE *)(((unsigned __int64)(m_sourceTile + 32) >> 3) + 0x7FFF8000) )
    m_sourceTile = __asan_report_load8(m_sourceTile + 32, result);
  poly = (NavMeshPoly *)(32LL * ip_0 + *(_QWORD *)(m_sourceTile + 32));
  if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&poly->vertCount);
  }
  vertexCount = poly->vertCount;
  vertCount = poly->vertCount;
  dynamic_array<Vector3f,false,4ul>::resize_uninitialized(result, vertCount, kIncreaseToExactSize);
  for ( i = 0LL; i < vertexCount; ++i )
  {
    p_m_tileOff = &this->m_tileOff;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_sourceTile, vertCount);
    v6 = (__int64)this->m_sourceTile;
    v7 = *(unsigned __int8 *)(((unsigned __int64)(v6 + 40) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
      v6 = __asan_report_load8(v6 + 40, v7);
    v8 = *(_QWORD *)(v6 + 40);
    v9 = *(_BYTE *)(((unsigned __int64)&poly->verts[i] >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((2 * i + (_BYTE)poly) & 7) + 1) >= v9 )
      __asan_report_load2(&poly->verts[i]);
    *(Vector3f *)&v10 = operator-((const Vector3f *)(v8 + 12LL * poly->verts[i]), p_m_tileOff);
    v12 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](result, i);
    vertCount = ((_DWORD)v12 + 11) & 7;
    if ( (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v12 + 11) & 7) >= *(_BYTE *)(((v12 + 11) >> 3) + 0x7FFF8000) )
    {
      vertCount = 12LL;
      v12 = __asan_report_store_n(v12, 12LL);
    }
    *(_QWORD *)v12 = v10;
    *(float *)(v12 + 8) = v11;
  }
};

// Line 108: range 000000000CC68B94-000000000CC6A4DD
void __cdecl DynamicSihouette::BuildEdgeConnections(
        const DynamicSihouette *const this,
        DynamicSihouette::EdgeList *edges)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 m_sourceTile; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  size_t v8; // rax
  uint8_t *p_m_VertexCount; // rax
  char v10; // dl
  char v11; // dl
  DynamicSihouette::Edge *v12; // rax
  uint16_t v13; // di
  uint16_t v14; // di
  unsigned __int16 *v15; // rax
  __int16 *v16; // rdx
  __int16 v17; // r14
  unsigned __int16 *v18; // rax
  _WORD *v19; // rdx
  __int16 v20; // r14
  unsigned __int16 *v21; // rax
  _WORD *v22; // rdx
  size_t v23; // rax
  std::set<int,std::less<int>,stl_allocator<int,16> >::iterator *p_for_end; // rsi
  int *v25; // rax
  int *v26; // rdx
  char v27; // cl
  __int64 v28; // rax
  char v29; // dl
  char v30; // dl
  __int64 v31; // rsi
  __int64 v32; // rax
  char v33; // dl
  char v34; // dl
  size_t Index; // rdx
  unsigned __int64 v36; // rax
  uint16_t v37; // cx
  uint16_t v38; // di
  unsigned __int16 *v39; // rax
  __int16 *v40; // rdx
  __int16 v41; // r14
  unsigned __int16 *v42; // rax
  _WORD *v43; // rdx
  __int16 v44; // r14
  unsigned __int16 *v45; // rax
  _WORD *v46; // rdx
  size_t v47; // rax
  uint8_t *v48; // rax
  char v49; // dl
  char v50; // dl
  unsigned __int16 *v51; // rax
  uint16_t *v52; // rdx
  DynamicSihouette::Edge *v53; // rax
  DynamicSihouette::Edge *v54; // rdx
  DynamicSihouette::Edge *v55; // rdx
  uint16_t *v56; // rax
  char v57; // al
  DynamicSihouette::Edge *v58; // rdx
  uint16_t *v59; // rax
  uint16_t v60; // r14
  DynamicSihouette::Edge *v61; // rdx
  uint16_t *v62; // rax
  uint16_t v63; // r14
  DynamicSihouette::Edge *v64; // rdx
  uint16_t *v65; // rax
  uint16_t v66; // r14
  DynamicSihouette::Edge *v67; // rdx
  uint16_t *p_p2; // rax
  uint16_t v69; // r14
  DynamicSihouette::Edge *v70; // rdx
  uint16_t *p_c2; // rax
  unsigned __int16 *v72; // rax
  uint16_t *v73; // rdx
  unsigned __int16 *v74; // rax
  uint16_t *v75; // rdx
  DynamicSihouette::Edge *v76; // rax
  DynamicSihouette::Edge *v77; // rdx
  DynamicSihouette::Edge *v78; // rdx
  uint16_t *v79; // rax
  char v80; // al
  DynamicSihouette::Edge *v81; // rdx
  uint16_t *p_c1; // rax
  uint16_t v83; // r14
  DynamicSihouette::Edge *v84; // rdx
  uint16_t *p_p1; // rax
  uint16_t v86; // r14
  DynamicSihouette::Edge *v87; // rdx
  uint16_t *v88; // rax
  unsigned __int16 *v89; // rax
  uint16_t *v90; // rdx
  size_t v91; // rax
  unsigned __int16 init_value; // [rsp+16h] [rbp-1AAh] BYREF
  uint16_t ie; // [rsp+18h] [rbp-1A8h]
  uint16_t ie_0; // [rsp+1Ah] [rbp-1A6h]
  uint16_t vp; // [rsp+1Ch] [rbp-1A4h]
  uint16_t v; // [rsp+1Eh] [rbp-1A2h]
  uint16_t vp_0; // [rsp+20h] [rbp-1A0h]
  uint16_t v_1; // [rsp+22h] [rbp-19Eh]
  unsigned __int16 pv; // [rsp+24h] [rbp-19Ch]
  unsigned __int16 v_0; // [rsp+26h] [rbp-19Ah]
  int j; // [rsp+28h] [rbp-198h]
  int ip_1; // [rsp+2Ch] [rbp-194h]
  int neiip; // [rsp+30h] [rbp-190h]
  int jsize; // [rsp+34h] [rbp-18Ch]
  std::set<int,std::less<int>,stl_allocator<int,16> >::iterator __for_begin; // [rsp+38h] [rbp-188h] BYREF
  std::set<int,std::less<int>,stl_allocator<int,16> >::iterator __for_end; // [rsp+40h] [rbp-180h] BYREF
  size_t edgeCount; // [rsp+48h] [rbp-178h]
  size_t ip_0; // [rsp+50h] [rbp-170h]
  size_t ivp; // [rsp+58h] [rbp-168h]
  size_t iv; // [rsp+60h] [rbp-160h]
  size_t ivp_0; // [rsp+68h] [rbp-158h]
  size_t iv_0; // [rsp+70h] [rbp-150h]
  size_t ip_2; // [rsp+78h] [rbp-148h]
  size_t ivp_1; // [rsp+80h] [rbp-140h]
  size_t iv_1; // [rsp+88h] [rbp-138h]
  size_t polyCount; // [rsp+90h] [rbp-130h]
  size_t maxEdges; // [rsp+98h] [rbp-128h]
  const DynamicSihouette::Poly *poly; // [rsp+A0h] [rbp-120h]
  size_t vertexCount; // [rsp+A8h] [rbp-118h]
  DynamicSihouette::Edge *e; // [rsp+B0h] [rbp-110h]
  const std::set<int,std::less<int>,stl_allocator<int,16> > *__for_range; // [rsp+B8h] [rbp-108h]
  const DynamicSihouette::Poly *poly_1; // [rsp+C0h] [rbp-100h]
  size_t vertexCount_1; // [rsp+C8h] [rbp-F8h]
  const NavMeshPoly *poly_0; // [rsp+D0h] [rbp-F0h]
  size_t vertexCount_0; // [rsp+D8h] [rbp-E8h]
  const NavMeshPoly *neiPoly; // [rsp+E0h] [rbp-E0h]
  DynamicSihouette::Edge *e_0; // [rsp+E8h] [rbp-D8h]
  char v130[208]; // [rsp+F0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v130;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 11 buckets:116 96 24 8 next:117";
  *(_QWORD *)(v2 + 16) = DynamicSihouette::BuildEdgeConnections;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  polyCount = dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
  maxEdges = 6 * (std::set<int,std::less<int>,stl_allocator<int,16>>::size(&this->m_DataTypeRemoveSet) + polyCount);
  dynamic_array<DynamicSihouette::Edge,false,2ul>::resize_uninitialized(edges, maxEdges, kIncreaseToExactSize);
  edgeCount = 0LL;
  init_value = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_sourceTile, maxEdges);
  m_sourceTile = (__int64)this->m_sourceTile;
  if ( *(_BYTE *)(((unsigned __int64)(m_sourceTile + 16) >> 3) + 0x7FFF8000) )
    m_sourceTile = __asan_report_load8(m_sourceTile + 16, maxEdges);
  v6 = *(_QWORD *)(m_sourceTile + 16);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 24) >> 3) + 0x7FFF8000) != 0
    && (char)(((v6 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v6 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6 + 24);
  }
  v7 = *(int *)(v6 + 24);
  v8 = dynamic_array<Vector3f,true,4ul>::size(&this->m_Vertices);
  dynamic_array<unsigned short,false,2ul>::dynamic_array(
    (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
    v7 + v8,
    &init_value);
  init_value = -1;
  dynamic_array<unsigned short,false,2ul>::dynamic_array(
    (dynamic_array<short unsigned int,false,2> *const)(v2 + 96),
    maxEdges,
    &init_value);
  for ( ip_0 = 0LL; ip_0 < polyCount; ++ip_0 )
  {
    poly = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
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
      v10 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[ivp] >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((2 * (ivp + 8) + (_BYTE)poly + 2) & 7) + 1) >= v10 )
        __asan_report_load2(&poly->m_VertexIDs[ivp]);
      vp = poly->m_VertexIDs[ivp];
      v11 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[iv] >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)(((2 * (iv + 8) + (_BYTE)poly + 2) & 7) + 1) >= v11 )
        __asan_report_load2(&poly->m_VertexIDs[iv]);
      v = poly->m_VertexIDs[iv];
      if ( vp < v )
      {
        v12 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, edgeCount);
        e = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(v12);
        }
        e->v1 = vp;
        if ( *(_BYTE *)(((unsigned __int64)&e->v2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->v2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(&e->v2);
        }
        e->v2 = v;
        v13 = ip_0;
        if ( *(_BYTE *)(((unsigned __int64)&e->p1 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->p1 >> 3) + 0x7FFF8000) )
        {
          v13 = (_WORD)e + 4;
          __asan_report_store2(&e->p1);
        }
        e->p1 = v13;
        if ( *(_BYTE *)(((unsigned __int64)&e->p2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->p2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(&e->p2);
        }
        e->p2 = -1;
        v14 = ivp;
        if ( *(_BYTE *)(((unsigned __int64)&e->c1 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->c1 >> 3) + 0x7FFF8000) )
        {
          v14 = (_WORD)e + 8;
          __asan_report_store2(&e->c1);
        }
        e->c1 = v14;
        if ( *(_BYTE *)(((unsigned __int64)&e->c2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)e + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e->c2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(&e->c2);
        }
        e->c2 = -1;
        v15 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                vp);
        v16 = (__int16 *)v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v15);
        }
        v17 = *v16;
        v18 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 96),
                edgeCount);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(v18);
        }
        *v19 = v17;
        v20 = edgeCount;
        v21 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                vp);
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(v21);
        }
        *v22 = v20;
        ++edgeCount;
      }
      v23 = iv++;
      ivp = v23;
    }
  }
  __for_range = &this->m_DataTypeRemoveSet;
  __for_begin._M_node = std::set<int,std::less<int>,stl_allocator<int,16>>::begin(&this->m_DataTypeRemoveSet)._M_node;
  __for_end._M_node = std::set<int,std::less<int>,stl_allocator<int,16>>::end(__for_range)._M_node;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !std::operator!=(&__for_begin, &__for_end) )
      break;
    v25 = (int *)std::_Rb_tree_const_iterator<int>::operator*(&__for_begin);
    v26 = v25;
    v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
    LOBYTE(p_for_end) = v27 != 0;
    if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
      __asan_report_load4(v25);
    ip_1 = *v26;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_sourceTile, p_for_end);
    v28 = (__int64)this->m_sourceTile;
    if ( *(_BYTE *)(((unsigned __int64)(v28 + 32) >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8(v28 + 32, p_for_end);
    poly_0 = (const NavMeshPoly *)(32LL * ip_1 + *(_QWORD *)(v28 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&poly_0->vertCount >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)poly_0 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly_0->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&poly_0->vertCount);
    }
    ivp_0 = poly_0->vertCount - 1;
    iv_0 = 0LL;
    vertexCount_0 = poly_0->vertCount;
    while ( iv_0 < vertexCount_0 )
    {
      v29 = *(_BYTE *)(((unsigned __int64)&poly_0->neis[ivp_0] >> 3) + 0x7FFF8000);
      if ( v29 != 0 && (char)(((2 * ivp_0 + (_BYTE)poly_0 + 12) & 7) + 1) >= v29 )
        __asan_report_load2(&poly_0->neis[ivp_0]);
      if ( (__int16)poly_0->neis[ivp_0] > 0 )
      {
        v30 = *(_BYTE *)(((unsigned __int64)&poly_0->neis[ivp_0] >> 3) + 0x7FFF8000);
        v31 = ((2 * (_BYTE)ivp_0 + (_BYTE)poly_0 + 12) & 7u) + 1;
        if ( v30 != 0 && (char)(((2 * ivp_0 + (_BYTE)poly_0 + 12) & 7) + 1) >= v30 )
          __asan_report_load2(&poly_0->neis[ivp_0]);
        neiip = poly_0->neis[ivp_0] - 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_sourceTile, v31);
        v32 = (__int64)this->m_sourceTile;
        if ( *(_BYTE *)(((unsigned __int64)(v32 + 32) >> 3) + 0x7FFF8000) )
          v32 = __asan_report_load8(v32 + 32, v31);
        neiPoly = (const NavMeshPoly *)(32LL * neiip + *(_QWORD *)(v32 + 32));
        j = 0;
        if ( *(_BYTE *)(((unsigned __int64)&neiPoly->vertCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)neiPoly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&neiPoly->vertCount >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load1(&neiPoly->vertCount);
        }
        jsize = neiPoly->vertCount;
        while ( j < jsize )
        {
          v33 = *(_BYTE *)(((unsigned __int64)&neiPoly->neis[j] >> 3) + 0x7FFF8000);
          if ( v33 != 0 && (char)(((2 * j + (_BYTE)neiPoly + 12) & 7) + 1) >= v33 )
            __asan_report_load2(&neiPoly->neis[j]);
          if ( ip_1 == neiPoly->neis[j] - 1 )
          {
            v34 = *(_BYTE *)(((unsigned __int64)&neiPoly->verts[j] >> 3) + 0x7FFF8000);
            if ( v34 != 0 && (char)(((2 * j + (_BYTE)neiPoly) & 7) + 1) >= v34 )
              __asan_report_load2(&neiPoly->verts[j]);
            pv = neiPoly->verts[j];
            Index = NextIndex(j, jsize);
            v36 = (unsigned __int64)&neiPoly->verts[Index];
            if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) != 0
              && (char)((v36 & 7) + 1) >= *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(v36);
            }
            v_0 = neiPoly->verts[Index];
            e_0 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, edgeCount);
            if ( pv >= v_0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)e_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)e_0 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)e_0 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(e_0);
              }
              e_0->v1 = v_0;
              if ( *(_BYTE *)(((unsigned __int64)&e_0->v2 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)e_0 + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e_0->v2 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(&e_0->v2);
              }
              e_0->v2 = pv;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)e_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)e_0 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)e_0 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(e_0);
              }
              e_0->v1 = pv;
              if ( *(_BYTE *)(((unsigned __int64)&e_0->v2 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)e_0 + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e_0->v2 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(&e_0->v2);
              }
              e_0->v2 = v_0;
            }
            if ( *(_BYTE *)(((unsigned __int64)&e_0->p1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)e_0 + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e_0->p1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store2(&e_0->p1);
            }
            e_0->p1 = -1;
            v37 = neiip + polyCount;
            if ( *(_BYTE *)(((unsigned __int64)&e_0->p2 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)e_0 + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e_0->p2 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store2(&e_0->p2);
            }
            e_0->p2 = v37;
            if ( *(_BYTE *)(((unsigned __int64)&e_0->c1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)e_0 + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e_0->c1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store2(&e_0->c1);
            }
            e_0->c1 = -1;
            v38 = j;
            if ( *(_BYTE *)(((unsigned __int64)&e_0->c2 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)e_0 + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&e_0->c2 >> 3) + 0x7FFF8000) )
            {
              v38 = (_WORD)e_0 + 10;
              __asan_report_store2(&e_0->c2);
            }
            e_0->c2 = v38;
            if ( *(_BYTE *)(((unsigned __int64)e_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)e_0 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)e_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(e_0);
            }
            v39 = dynamic_array<unsigned short,false,2ul>::operator[](
                    (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                    e_0->v1);
            v40 = (__int16 *)v39;
            if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v39 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(v39);
            }
            v41 = *v40;
            v42 = dynamic_array<unsigned short,false,2ul>::operator[](
                    (dynamic_array<short unsigned int,false,2> *const)(v2 + 96),
                    edgeCount);
            v43 = v42;
            if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v42 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store2(v42);
            }
            *v43 = v41;
            v44 = edgeCount;
            if ( *(_BYTE *)(((unsigned __int64)e_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)e_0 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)e_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(e_0);
            }
            v45 = dynamic_array<unsigned short,false,2ul>::operator[](
                    (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                    e_0->v1);
            v46 = v45;
            if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v45 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store2(v45);
            }
            *v46 = v44;
            ++edgeCount;
            break;
          }
          ++j;
        }
      }
      v47 = iv_0++;
      ivp_0 = v47;
    }
    std::_Rb_tree_const_iterator<int>::operator++(&__for_begin);
  }
  dynamic_array<DynamicSihouette::Edge,false,2ul>::resize_uninitialized(edges, edgeCount, kIncreaseToExactSize);
  for ( ip_2 = 0LL; ip_2 < polyCount; ++ip_2 )
  {
    poly_1 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_2);
    v48 = &poly_1->m_VertexCount;
    if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v48 & 7) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v48);
    }
    vertexCount_1 = poly_1->m_VertexCount;
    ivp_1 = vertexCount_1 - 1;
    iv_1 = 0LL;
    while ( iv_1 < vertexCount_1 )
    {
      v49 = *(_BYTE *)(((unsigned __int64)&poly_1->m_VertexIDs[ivp_1] >> 3) + 0x7FFF8000);
      if ( v49 != 0 && (char)(((2 * (ivp_1 + 8) + (_BYTE)poly_1 + 2) & 7) + 1) >= v49 )
        __asan_report_load2(&poly_1->m_VertexIDs[ivp_1]);
      vp_0 = poly_1->m_VertexIDs[ivp_1];
      v50 = *(_BYTE *)(((unsigned __int64)&poly_1->m_VertexIDs[iv_1] >> 3) + 0x7FFF8000);
      if ( v50 != 0 && (char)(((2 * (iv_1 + 8) + (_BYTE)poly_1 + 2) & 7) + 1) >= v50 )
        __asan_report_load2(&poly_1->m_VertexIDs[iv_1]);
      v_1 = poly_1->m_VertexIDs[iv_1];
      if ( v_1 >= vp_0 )
      {
        v74 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                vp_0);
        v75 = v74;
        if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v74 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v74);
        }
        for ( ie_0 = *v75; ie_0 != 0xFFFF; ie_0 = *v90 )
        {
          v76 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie_0);
          v77 = v76;
          if ( *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v76 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v76);
          }
          if ( vp_0 != v77->v1 )
            goto LABEL_158;
          v78 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie_0);
          v79 = &v78->v2;
          if ( *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v79 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v79);
          }
          if ( v_1 == v78->v2 )
            v80 = 1;
          else
LABEL_158:
            v80 = 0;
          if ( v80 )
          {
            v81 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie_0);
            p_c1 = &v81->c1;
            if ( *(_BYTE *)(((unsigned __int64)p_c1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_c1 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_c1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(p_c1);
            }
            if ( v81->c1 == 0xFFFF )
            {
              v83 = ip_2;
              v84 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie_0);
              p_p1 = &v84->p1;
              if ( *(_BYTE *)(((unsigned __int64)p_p1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_p1 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_p1 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(p_p1);
              }
              v84->p1 = v83;
              v86 = ivp_1;
              v87 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie_0);
              v88 = &v87->c1;
              if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v88 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(v88);
              }
              v87->c1 = v86;
            }
          }
          v89 = dynamic_array<unsigned short,false,2ul>::operator[](
                  (dynamic_array<short unsigned int,false,2> *const)(v2 + 96),
                  ie_0);
          v90 = v89;
          if ( *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v89 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v89);
          }
        }
      }
      else
      {
        v51 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v2 + 32),
                v_1);
        v52 = v51;
        if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v51 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v51);
        }
        for ( ie = *v52; ie != 0xFFFF; ie = *v73 )
        {
          v53 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie);
          v54 = v53;
          if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v53 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v53);
          }
          if ( v_1 != v54->v1 )
            goto LABEL_129;
          v55 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie);
          v56 = &v55->v2;
          if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v56 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v56);
          }
          if ( vp_0 == v55->v2 )
            v57 = 1;
          else
LABEL_129:
            v57 = 0;
          if ( v57 )
          {
            v58 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie);
            v59 = &v58->c1;
            if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v59 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(v59);
            }
            if ( v58->c1 == 0xFFFF )
            {
              v60 = ip_2;
              v61 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie);
              v62 = &v61->p1;
              if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v62 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(v62);
              }
              v61->p1 = v60;
              v63 = ivp_1;
              v64 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie);
              v65 = &v64->c1;
              if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v65 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(v65);
              }
              v64->c1 = v63;
            }
            else
            {
              v66 = ip_2;
              v67 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie);
              p_p2 = &v67->p2;
              if ( *(_BYTE *)(((unsigned __int64)p_p2 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_p2 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_p2 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(p_p2);
              }
              v67->p2 = v66;
              v69 = ivp_1;
              v70 = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](edges, ie);
              p_c2 = &v70->c2;
              if ( *(_BYTE *)(((unsigned __int64)p_c2 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_c2 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_c2 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store2(p_c2);
              }
              v70->c2 = v69;
            }
            break;
          }
          v72 = dynamic_array<unsigned short,false,2ul>::operator[](
                  (dynamic_array<short unsigned int,false,2> *const)(v2 + 96),
                  ie);
          v73 = v72;
          if ( *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v72 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v72);
          }
        }
      }
      v91 = iv_1++;
      ivp_1 = v91;
    }
  }
  dynamic_array<unsigned short,false,2ul>::~dynamic_array((dynamic_array<short unsigned int,false,2> *const)(v2 + 96));
  dynamic_array<unsigned short,false,2ul>::~dynamic_array((dynamic_array<short unsigned int,false,2> *const)(v2 + 32));
  if ( v130 == (char *)v2 )
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

// Line 245: range 000000000CC6A4DE-000000000CC6BD84
void __cdecl DynamicSihouette::Subtract(
        const DynamicSihouette *const this,
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
  *(_QWORD *)(v7 + 8) = "3 32 24 8 used:251 96 24 6 ol:283 160 24 6 oh:284";
  *(_QWORD *)(v7 + 16) = DynamicSihouette::Subtract;
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
        if ( !DynamicSihouette::DegenerateTriangle(this, tri) )
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
          if ( !DynamicSihouette::DegenerateTriangle(this, tri) )
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
          if ( DynamicSihouette::DegenerateTriangle(this, tri) )
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
          if ( DynamicSihouette::DegenerateTriangle(this, tri) )
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

// Line 358: range 000000000CC6BD86-000000000CC6C120
bool __cdecl DynamicSihouette::MergePolygons(
        const DynamicSihouette *const this,
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
  return DynamicSihouette::IsSafeConvex(this, merged);
};

// Line 418: range 000000000CC6C122-000000000CC6C434
void __cdecl DynamicSihouette::MergePolygons(const DynamicSihouette *const this, PolygonContainer *polys)
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
  *(_QWORD *)(v2 + 8) = "2 32 24 8 poly:420 96 24 10 merged:421";
  *(_QWORD *)(v2 + 16) = DynamicSihouette::MergePolygons;
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
      if ( DynamicSihouette::MergePolygons(this, (Polygon *)(v2 + 96), (const Polygon *)(v2 + 32), v7) )
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

// Line 440: range 000000000CC6C436-000000000CC6C5D4
void __cdecl DynamicSihouette::AddPolygon(
        DynamicSihouette *const this,
        const Polygon *vertices,
        const DynamicSihouette::DataType *data)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 36 11 newPoly:446";
  *(_QWORD *)(v3 + 16) = DynamicSihouette::AddPolygon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -217841664;
  v5[536862723] = -202116109;
  DynamicSihouette::CreatePolygon((DynamicSihouette::Poly *)(v3 + 48), this, vertices);
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data);
  }
  *(_DWORD *)(v3 + 80) = *data;
  dynamic_array<DynamicSihouette::Poly,true,4ul>::push_back(
    &this->m_Polygons,
    (const DynamicSihouette::Poly *)(v3 + 48));
  std::set<int,std::less<int>,stl_allocator<int,16>>::insert(&this->m_DataTypeRemoveSet, data);
  if ( v7 == (char *)v3 )
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
};

// Line 453: range 000000000CC6C5D6-000000000CC6CBF6
bool __cdecl DynamicSihouette::ClipPolys(DynamicSihouette *const this, const DetailHullContainer *carveHulls)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const int *v5; // rax
  _DWORD *v6; // rdx
  DynamicSihouette::Poly *v7; // rdi
  DynamicSihouette::Poly *v8; // r15
  DynamicSihouette::Poly *v9; // rax
  bool result; // al
  bool clipped; // [rsp+23h] [rbp-20Dh]
  int ip_0; // [rsp+24h] [rbp-20Ch]
  std::_Rb_tree_const_iterator<int>::_Self __y; // [rsp+28h] [rbp-208h] BYREF
  size_t ih; // [rsp+30h] [rbp-200h]
  size_t i; // [rsp+38h] [rbp-1F8h]
  size_t hullCount; // [rsp+40h] [rbp-1F0h]
  const DetailHull *carveHull; // [rsp+48h] [rbp-1E8h]
  size_t ni; // [rsp+50h] [rbp-1E0h]
  size_t count; // [rsp+58h] [rbp-1D8h]
  char v21[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 15 currentData:479 48 4 9 first:488 64 8 9 found:481 96 24 19 outsidePolygons:459 160 24 "
                        "15 currentPoly:462 224 24 10 inside:463 288 24 8 temp:464 352 24 13 usedEdges:469";
  *(_QWORD *)(v2 + 16) = DynamicSihouette::ClipPolys;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862731] = -218103808;
  v4[536862732] = -202116109;
  hullCount = std::vector<DetailHull,stl_allocator<DetailHull,16>>::size(carveHulls);
  clipped = 0;
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::vector((std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 96));
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::reserve(
    (std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 96),
    0xCuLL);
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 160));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 224));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 288));
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 160), 6uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 224), 0x20uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v2 + 288), 0x20uLL);
  dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 352));
  dynamic_array<unsigned char,false,1ul>::reserve((dynamic_array<unsigned char,false,1> *const)(v2 + 352), 0x20uLL);
  for ( ih = 0LL; ih < hullCount; ++ih )
  {
    carveHull = std::vector<DetailHull,stl_allocator<DetailHull,16>>::operator[](carveHulls, ih);
    i = 0LL;
    ni = dynamic_array<int,false,4ul>::size(&carveHull->polysIds);
    while ( i < ni )
    {
      v5 = dynamic_array<int,false,4ul>::operator[](&carveHull->polysIds, i);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v2 + 32) = *v6;
      *(std::set<int,std::less<int>,stl_allocator<int,16> >::iterator *)(v2 + 64) = std::set<int,std::less<int>,stl_allocator<int,16>>::find(
                                                                                      &this->m_DataTypeRemoveSet,
                                                                                      (const std::set<int,std::less<int>,stl_allocator<int,16> >::key_type *)(v2 + 32));
      __y._M_node = std::set<int,std::less<int>,stl_allocator<int,16>>::end(&this->m_DataTypeRemoveSet)._M_node;
      if ( std::operator==((const std::_Rb_tree_const_iterator<int>::_Self *)(v2 + 64), &__y) )
      {
        clipped = (clipped | DynamicSihouette::ClipPolysByOneCutHull(
                               this,
                               *(_DWORD *)(v2 + 32),
                               carveHull,
                               (Polygon *)(v2 + 160),
                               (Polygon *)(v2 + 224),
                               (Polygon *)(v2 + 288),
                               (dynamic_array<unsigned char,false,1> *)(v2 + 352),
                               (PolygonContainer *)(v2 + 96))) != 0;
      }
      else
      {
        *(_DWORD *)(v2 + 48) = 0;
        count = dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
        for ( ip_0 = 0; count > ip_0; ++ip_0 )
        {
          v7 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
          clipped = (clipped | DynamicSihouette::ClipPolysByOneCutHull(
                                 this,
                                 ip_0,
                                 v7,
                                 carveHull,
                                 (Polygon *)(v2 + 160),
                                 (Polygon *)(v2 + 224),
                                 (Polygon *)(v2 + 288),
                                 (dynamic_array<unsigned char,false,1> *)(v2 + 352),
                                 (PolygonContainer *)(v2 + 96),
                                 (int *)(v2 + 48))) != 0;
        }
        if ( *(_DWORD *)(v2 + 48) )
        {
          v8 = &dynamic_array<DynamicSihouette::Poly,true,4ul>::begin(&this->m_Polygons)[*(int *)(v2 + 48)];
          v9 = dynamic_array<DynamicSihouette::Poly,true,4ul>::begin(&this->m_Polygons);
          dynamic_array<DynamicSihouette::Poly,true,4ul>::erase(&this->m_Polygons, v9, v8);
        }
      }
      ++i;
    }
  }
  dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 352));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 288));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 224));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v2 + 160));
  std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::~vector((std::vector<dynamic_array<Vector3f,false,4>,stl_allocator<dynamic_array<Vector3f,false,4>,16> > *const)(v2 + 96));
  result = clipped;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 506: range 000000000CC6CBF8-000000000CC6CE15
__int64 __fastcall DynamicSihouette::ClipPolysByOneCutHull(
        DynamicSihouette *const this,
        DynamicSihouette::DataType ip_0,
        const DetailHull *carveHull,
        Polygon *currentPoly,
        Polygon *inside,
        Polygon *temp,
        dynamic_array<unsigned char,false,1> *usedEdges,
        PolygonContainer *outsidePolygons)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 result; // rax
  const Polygon *v12; // rax
  size_t io; // [rsp+38h] [rbp-68h]
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v8 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "1 32 4 6 ip:505";
  *(_QWORD *)(v8 + 16) = DynamicSihouette::ClipPolysByOneCutHull;
  v10 = v8 >> 3;
  *(_DWORD *)(v10 + 2147450880) = -235802127;
  *(_DWORD *)(v10 + 2147450884) = -202116348;
  *(_DWORD *)(v8 + 32) = ip_0;
  DynamicSihouette::FromPoly(this, inside, *(_DWORD *)(v8 + 32));
  DynamicSihouette::Intersection(this, inside, &carveHull->hull, temp, usedEdges);
  if ( dynamic_array<Vector3f,false,4ul>::empty(inside) )
  {
    result = 0LL;
  }
  else
  {
    DynamicSihouette::FromPoly(this, currentPoly, *(_DWORD *)(v8 + 32));
    DynamicSihouette::Subtract(this, outsidePolygons, currentPoly, inside, temp, usedEdges, &carveHull->hull);
    DynamicSihouette::MergePolygons(this, outsidePolygons);
    for ( io = 0LL;
          io < std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::size(outsidePolygons);
          ++io )
    {
      v12 = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::operator[](
              outsidePolygons,
              io);
      DynamicSihouette::AddPolygon(this, v12, (const DynamicSihouette::DataType *)(v8 + 32));
    }
    if ( !std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::size(outsidePolygons) )
      std::set<int,std::less<int>,stl_allocator<int,16>>::insert(
        &this->m_DataTypeRemoveSet,
        (const std::set<int,std::less<int>,stl_allocator<int,16> >::value_type *)(v8 + 32));
    result = 1LL;
  }
  if ( v18 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 528: range 000000000CC6CE16-000000000CC6D201
bool __cdecl DynamicSihouette::ClipPolysByOneCutHull(
        DynamicSihouette *const this,
        int currentIP,
        const DynamicSihouette::Poly *polygon,
        const DetailHull *carveHull,
        Polygon *currentPoly,
        Polygon *inside,
        Polygon *temp,
        dynamic_array<unsigned char,false,1> *usedEdges,
        PolygonContainer *outsidePolygons,
        int *first)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  bool result; // al
  const Polygon *v14; // rax
  DynamicSihouette *v15; // rcx
  DynamicSihouette::Poly *v16; // r12
  unsigned __int64 n; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  size_t io; // [rsp+38h] [rbp-68h]
  char v25[96]; // [rsp+40h] [rbp-60h] BYREF

  v10 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_0(64LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "1 32 4 6 ip:529";
  *(_QWORD *)(v10 + 16) = DynamicSihouette::ClipPolysByOneCutHull;
  v12 = v10 >> 3;
  *(_DWORD *)(v12 + 2147450880) = -235802127;
  *(_DWORD *)(v12 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&polygon->m_polyId >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)polygon + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&polygon->m_polyId >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&polygon->m_polyId);
  }
  *(_DWORD *)(v10 + 32) = polygon->m_polyId;
  DynamicSihouette::FromPoly(this, inside, polygon);
  DynamicSihouette::Intersection(this, inside, &carveHull->hull, temp, usedEdges);
  if ( dynamic_array<Vector3f,false,4ul>::empty(inside) )
  {
    result = 0;
  }
  else
  {
    DynamicSihouette::FromPoly(this, currentPoly, polygon);
    DynamicSihouette::Subtract(this, outsidePolygons, currentPoly, inside, temp, usedEdges, &carveHull->hull);
    DynamicSihouette::MergePolygons(this, outsidePolygons);
    for ( io = 0LL;
          io < std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::size(outsidePolygons);
          ++io )
    {
      v14 = std::vector<dynamic_array<Vector3f,false,4ul>,stl_allocator<dynamic_array<Vector3f,false,4ul>,16>>::operator[](
              outsidePolygons,
              io);
      DynamicSihouette::AddPolygon(this, v14, (const DynamicSihouette::DataType *)(v10 + 32));
    }
    v15 = this;
    if ( *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)first & 7) + 3) >= *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(first);
    }
    v16 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&v15->m_Polygons, *first);
    n = (unsigned __int64)dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, currentIP);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 35) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 35) & 7) >= *(_BYTE *)(((n + 35) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(n, 36LL);
    }
    if ( ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v16->m_polyId + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v16 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&v16->m_polyId + 3) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(v16, 36LL);
    }
    v18 = *(_QWORD *)&v16->m_Neighbours[4];
    *(_QWORD *)n = *(_QWORD *)v16->m_Neighbours;
    *(_QWORD *)(n + 8) = v18;
    v19 = *(_QWORD *)&v16->m_VertexIDs[3];
    *(_QWORD *)(n + 16) = *(_QWORD *)&v16->m_NeighboursC[4];
    *(_QWORD *)(n + 24) = v19;
    *(_DWORD *)(n + 32) = v16->m_polyId;
    if ( *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)first & 7) + 3) >= *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(first);
    }
    ++*first;
    result = 1;
  }
  if ( v25 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 551: range 000000000CC6D202-000000000CC6D27D
void __cdecl DynamicSihouette::FindNeighbors(DynamicSihouette *const this)
{
  DynamicSihouette::RemoveDegeneratePolygons(this);
  DynamicSihouette::RemoveDegenerateEdges(this);
  DynamicSihouette::RemoveUnusedVertices(this);
  DynamicSihouette::ConnectPolygons(this);
  DynamicSihouette::SourceVectorToNew(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_sourceTile = 0LL;
};

// Line 565: range 000000000CC6D27E-000000000CC6D2E5
void __cdecl DynamicSihouette::OffsetMeshToTileLocation(DynamicSihouette *const this)
{
  Vector3f *v1; // rax
  int iv; // [rsp+18h] [rbp-18h]
  int ivsize; // [rsp+1Ch] [rbp-14h]

  iv = 0;
  ivsize = dynamic_array<Vector3f,true,4ul>::size(&this->m_Vertices);
  while ( iv < ivsize )
  {
    v1 = dynamic_array<Vector3f,true,4ul>::operator[](&this->m_Vertices, iv);
    Vector3f::operator+=(v1, &this->m_tileOff);
    ++iv;
  }
};

// Line 572: range 000000000CC6D2E6-000000000CC6DA5D
void __cdecl DynamicSihouette::ConnectPolygons(DynamicSihouette *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint16_t *p_c2; // rax
  uint16_t v5; // r14
  DynamicSihouette *v6; // rcx
  DynamicSihouette::Poly *v7; // rdx
  int v8; // esi
  char v9; // cl
  uint16_t v10; // r14
  DynamicSihouette *v11; // rcx
  DynamicSihouette::Poly *v12; // rdx
  int v13; // esi
  char v14; // cl
  uint16_t v15; // r14
  DynamicSihouette *v16; // rcx
  DynamicSihouette::Poly *v17; // rdx
  int c1; // esi
  char v19; // cl
  uint16_t c2; // r14
  DynamicSihouette *v21; // rcx
  DynamicSihouette::Poly *v22; // rdx
  int v23; // esi
  char v24; // cl
  size_t ie; // [rsp+10h] [rbp-B0h]
  unsigned __int64 polyCount; // [rsp+18h] [rbp-A8h]
  size_t edgeCount; // [rsp+20h] [rbp-A0h]
  DynamicSihouette::Edge *edge; // [rsp+28h] [rbp-98h]
  char v29[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 9 edges:573";
  *(_QWORD *)(v1 + 16) = DynamicSihouette::ConnectPolygons;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  dynamic_array<DynamicSihouette::Edge,false,2ul>::dynamic_array((dynamic_array<DynamicSihouette::Edge,false,2> *const)(v1 + 32));
  DynamicSihouette::BuildEdgeConnections(this, (DynamicSihouette::EdgeList *)(v1 + 32));
  polyCount = dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
  edgeCount = dynamic_array<DynamicSihouette::Edge,false,2ul>::size((const dynamic_array<DynamicSihouette::Edge,false,2> *const)(v1 + 32));
  for ( ie = 0LL; ie < edgeCount; ++ie )
  {
    edge = dynamic_array<DynamicSihouette::Edge,false,2ul>::operator[](
             (dynamic_array<DynamicSihouette::Edge,false,2> *const)(v1 + 32),
             ie);
    p_c2 = &edge->c2;
    if ( *(_BYTE *)(((unsigned __int64)p_c2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_c2 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_c2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(p_c2);
    }
    if ( edge->c2 != 0xFFFF )
    {
      if ( *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)edge + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&edge->c1);
      }
      if ( edge->c1 != 0xFFFF )
      {
        if ( *(_BYTE *)(((unsigned __int64)&edge->p2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)edge + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(&edge->p2);
        }
        if ( polyCount <= edge->p2 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&edge->p2 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p2 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->p2);
          }
          v15 = edge->p2 + 1;
          v16 = this;
          if ( *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->p1);
          }
          v17 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&v16->m_Polygons, edge->p1);
          if ( *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->c1);
          }
          c1 = edge->c1;
          v19 = *(_BYTE *)(((unsigned __int64)&v17->m_Neighbours[edge->c1] >> 3) + 0x7FFF8000);
          if ( v19 != 0 && (char)((((_BYTE)v17 + 2 * edge->c1) & 7) + 1) >= v19 )
            __asan_report_store2(&v17->m_Neighbours[edge->c1]);
          v17->m_Neighbours[c1] = v15;
          if ( *(_BYTE *)(((unsigned __int64)&edge->c2 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->c2 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->c2);
          }
          c2 = edge->c2;
          v21 = this;
          if ( *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->p1);
          }
          v22 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&v21->m_Polygons, edge->p1);
          if ( *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->c1);
          }
          v23 = edge->c1;
          v24 = *(_BYTE *)(((unsigned __int64)&v22->m_NeighboursC[edge->c1] >> 3) + 0x7FFF8000);
          if ( v24 != 0 && (((unsigned __int8)v22 + edge->c1 + 12) & 7) >= v24 )
            __asan_report_store1(&v22->m_NeighboursC[edge->c1]);
          v22->m_NeighboursC[v23] = c2;
        }
        else
        {
          v5 = edge->p2 + 1;
          v6 = this;
          if ( *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->p1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->p1);
          }
          v7 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&v6->m_Polygons, edge->p1);
          if ( *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->c1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->c1);
          }
          v8 = edge->c1;
          v9 = *(_BYTE *)(((unsigned __int64)&v7->m_Neighbours[edge->c1] >> 3) + 0x7FFF8000);
          if ( v9 != 0 && (char)((((_BYTE)v7 + 2 * edge->c1) & 7) + 1) >= v9 )
            __asan_report_store2(&v7->m_Neighbours[edge->c1]);
          v7->m_Neighbours[v8] = v5;
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
          v12 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&v11->m_Polygons, edge->p2);
          if ( *(_BYTE *)(((unsigned __int64)&edge->c2 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)edge + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&edge->c2 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&edge->c2);
          }
          v13 = edge->c2;
          v14 = *(_BYTE *)(((unsigned __int64)&v12->m_Neighbours[edge->c2] >> 3) + 0x7FFF8000);
          if ( v14 != 0 && (char)((((_BYTE)v12 + 2 * edge->c2) & 7) + 1) >= v14 )
            __asan_report_store2(&v12->m_Neighbours[edge->c2]);
          v12->m_Neighbours[v13] = v10;
        }
      }
    }
  }
  dynamic_array<DynamicSihouette::Edge,false,2ul>::~dynamic_array((dynamic_array<DynamicSihouette::Edge,false,2> *const)(v1 + 32));
  if ( v29 == (char *)v1 )
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

// Line 596: range 000000000CC6DA5E-000000000CC6DDD8
void __cdecl DynamicSihouette::SourceVectorToNew(DynamicSihouette *const this)
{
  __int64 v1; // rsi
  __int64 m_sourceTile; // rax
  __int64 v3; // rdx
  uint8_t *p_m_VertexCount; // rax
  char v5; // dl
  Vector3f *p_m_tileOff; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  char v10; // dl
  uint16_t v11; // di
  char v12; // dl
  int ip_0; // [rsp+1Ch] [rbp-44h]
  int iv; // [rsp+20h] [rbp-40h]
  int sourceVertCount; // [rsp+24h] [rbp-3Ch]
  int psize; // [rsp+28h] [rbp-38h]
  int vsize; // [rsp+2Ch] [rbp-34h]
  DynamicSihouette::Poly *poly; // [rsp+30h] [rbp-30h]
  Vector3f pt; // [rsp+44h] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_sourceTile, v1);
  m_sourceTile = (__int64)this->m_sourceTile;
  if ( *(_BYTE *)(((unsigned __int64)(m_sourceTile + 16) >> 3) + 0x7FFF8000) )
    m_sourceTile = __asan_report_load8(m_sourceTile + 16, v1);
  v3 = *(_QWORD *)(m_sourceTile + 16);
  if ( *(_BYTE *)(((unsigned __int64)(v3 + 24) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3 + 24);
  }
  sourceVertCount = *(_DWORD *)(v3 + 24);
  DSVertexWelder<2048>::SetVertexArray(&this->m_Welder, 0LL, 0LL, &Vector3f::zero, &this->m_Vertices);
  ip_0 = 0;
  psize = dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
  while ( ip_0 < psize )
  {
    poly = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
    iv = 0;
    p_m_VertexCount = &poly->m_VertexCount;
    if ( *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_m_VertexCount & 7) >= *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_m_VertexCount);
    }
    vsize = poly->m_VertexCount;
    while ( iv < vsize )
    {
      v5 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[iv] >> 3) + 0x7FFF8000);
      if ( v5 != 0 && (char)(((2 * (iv + 8) + (_BYTE)poly + 2) & 7) + 1) >= v5 )
        __asan_report_load2(&poly->m_VertexIDs[iv]);
      if ( sourceVertCount > poly->m_VertexIDs[iv] )
      {
        p_m_tileOff = &this->m_tileOff;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_sourceTile, ((2 * ((_BYTE)iv + 8) + (_BYTE)poly + 2) & 7u) + 1);
        v7 = (__int64)this->m_sourceTile;
        v8 = *(unsigned __int8 *)(((unsigned __int64)(v7 + 40) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v8 )
          v7 = __asan_report_load8(v7 + 40, v8);
        v9 = *(_QWORD *)(v7 + 40);
        v10 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[iv] >> 3) + 0x7FFF8000);
        if ( v10 != 0 && (char)(((2 * (iv + 8) + (_BYTE)poly + 2) & 7) + 1) >= v10 )
          __asan_report_load2(&poly->m_VertexIDs[iv]);
        pt = operator-((const Vector3f *)(v9 + 12LL * poly->m_VertexIDs[iv]), p_m_tileOff);
        v11 = DSVertexWelder<2048>::AddUnique(&this->m_Welder, &pt);
        v12 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[iv] >> 3) + 0x7FFF8000);
        if ( v12 != 0 && (char)(((2 * (iv + 8) + (_BYTE)poly + 2) & 7) + 1) >= v12 )
        {
          v11 = 2 * (iv + 8) + (_WORD)poly + 2;
          __asan_report_store2(&poly->m_VertexIDs[iv]);
        }
        poly->m_VertexIDs[iv] = v11;
      }
      else
      {
        poly->m_VertexIDs[iv] -= sourceVertCount;
      }
      ++iv;
    }
    ++ip_0;
  }
};

// Line 619: range 000000000CC6DDDA-000000000CC6DF20
void __cdecl DynamicSihouette::RemovePolygonUnordered(DynamicSihouette *const this, size_t i)
{
  DynamicSihouette::Poly *v2; // rbx
  unsigned __int64 n; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = dynamic_array<DynamicSihouette::Poly,true,4ul>::back(&this->m_Polygons);
  n = (unsigned __int64)dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, i);
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 35) >> 3) + 0x7FFF8000) != 0 && (char)((n + 35) & 7) >= *(_BYTE *)(((n + 35) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_store_n(n, 36LL);
  }
  if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v2->m_polyId + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->m_polyId + 3) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(v2, 36LL);
  }
  v4 = *(_QWORD *)&v2->m_Neighbours[4];
  *(_QWORD *)n = *(_QWORD *)v2->m_Neighbours;
  *(_QWORD *)(n + 8) = v4;
  v5 = *(_QWORD *)&v2->m_VertexIDs[3];
  *(_QWORD *)(n + 16) = *(_QWORD *)&v2->m_NeighboursC[4];
  *(_QWORD *)(n + 24) = v5;
  *(_DWORD *)(n + 32) = v2->m_polyId;
  dynamic_array<DynamicSihouette::Poly,true,4ul>::pop_back(&this->m_Polygons);
};

// Line 627: range 000000000CC6DF22-000000000CC6E05F
void __cdecl DynamicSihouette::CollapseEdge(DynamicSihouette *const this, int va, int vb)
{
  char v3; // dl
  uint16_t vba; // [rsp+0h] [rbp-30h]
  int i; // [rsp+10h] [rbp-20h]
  int j; // [rsp+14h] [rbp-1Ch]
  DynamicSihouette::Poly *poly; // [rsp+18h] [rbp-18h]

  vba = vb;
  for ( i = 0; i < dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons); ++i )
  {
    poly = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, i);
    for ( j = 0; ; ++j )
    {
      if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&poly->m_VertexCount);
      }
      if ( j >= poly->m_VertexCount )
        break;
      v3 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[j] >> 3) + 0x7FFF8000);
      if ( v3 != 0 && (char)(((2 * (j + 8) + (_BYTE)poly + 2) & 7) + 1) >= v3 )
        __asan_report_load2(&poly->m_VertexIDs[j]);
      if ( va == poly->m_VertexIDs[j] )
        poly->m_VertexIDs[j] = vba;
    }
  }
};

// Line 640: range 000000000CC6E060-000000000CC6E89C
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicSihouette::CollapsePolygonUnordered(DynamicSihouette *const this, size_t ip_0)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  char *v5; // rbx
  _DWORD *v6; // r12
  unsigned __int64 n; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  int v10; // eax
  char v11; // dl
  char v12; // dl
  __int64 v13; // xmm0_8
  __int64 v14; // xmm0_8
  int v15; // ecx
  char v16; // dl
  char v17; // dl
  int v18; // eax
  char v19; // dl
  char v20; // dl
  int v21; // ecx
  char v22; // dl
  int v23; // xmm0_4
  char v24; // dl
  int v25; // ecx
  char v26; // dl
  __int16 v27; // cx
  char v28; // dl
  int i; // [rsp+14h] [rbp-13Ch]
  float shortestDist; // [rsp+18h] [rbp-138h]
  int shortest; // [rsp+1Ch] [rbp-134h]
  int i_0; // [rsp+20h] [rbp-130h]
  int i_1; // [rsp+24h] [rbp-12Ch]
  int j; // [rsp+28h] [rbp-128h]
  int next; // [rsp+2Ch] [rbp-124h]
  int va_0; // [rsp+30h] [rbp-120h]
  int vb_0; // [rsp+34h] [rbp-11Ch]
  Vector3f Vertex; // [rsp+4Ch] [rbp-104h] BYREF
  Vector3f v40; // [rsp+58h] [rbp-F8h] BYREF
  Vector3f inV; // [rsp+64h] [rbp-ECh] BYREF
  char v42[224]; // [rsp+70h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 192);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 24 15 edgeLengths:644 112 36 8 poly:643";
  *(_QWORD *)(v3 + 16) = DynamicSihouette::CollapsePolygonUnordered;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218959360;
  v6[536862723] = 62194;
  v6[536862724] = -217841664;
  v6[536862725] = -202116109;
  n = (unsigned __int64)dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 35) >> 3) + 0x7FFF8000) != 0 && (char)((n + 35) & 7) >= *(_BYTE *)(((n + 35) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 36LL);
  }
  v8 = *(_QWORD *)(n + 8);
  *(_QWORD *)(v3 + 112) = *(_QWORD *)n;
  *(_QWORD *)(v3 + 120) = v8;
  v9 = *(_QWORD *)(n + 24);
  *(_QWORD *)(v3 + 128) = *(_QWORD *)(n + 16);
  *(_QWORD *)(v3 + 136) = v9;
  *(_DWORD *)(v3 + 144) = *(_DWORD *)(n + 32);
  for ( i = 0; i < *(unsigned __int8 *)(v3 + 142); ++i )
  {
    if ( i + 1 >= *(unsigned __int8 *)(v3 + 142) )
      v10 = 0;
    else
      v10 = i + 1;
    j = v10;
    v11 = *(_BYTE *)(((2 * (i + 8LL) + v3 + 112 + 2) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((2 * (i + 8) + v3 + 112 + 2) & 7) + 1) >= v11 )
      __asan_report_load2(2 * (i + 8LL) + v3 + 112 + 2);
    Vertex = DynamicSihouette::GetVertex(this, *(unsigned __int16 *)&v5[2 * i - 62]);
    v12 = *(_BYTE *)(((2 * (j + 8LL) + v3 + 112 + 2) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((2 * (j + 8) + v3 + 112 + 2) & 7) + 1) >= v12 )
      __asan_report_load2(2 * (j + 8LL) + v3 + 112 + 2);
    *(Vector3f *)((char *)&v2 - 8) = DynamicSihouette::GetVertex(this, *(unsigned __int16 *)&v5[2 * j - 62]);
    *(_QWORD *)&v40.x = v13;
    LODWORD(v40.z) = v2.m128i_i32[0];
    *(Vector3f *)((char *)&v2 - 8) = operator-(&Vertex, &v40);
    *(_QWORD *)&inV.x = v14;
    LODWORD(inV.z) = v2.m128i_i32[0];
    SqrMagnitude(&inV);
    v15 = _mm_cvtsi128_si32(v2);
    v16 = *(_BYTE *)(((4LL * i + v3 + 48) >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((4 * i + v3 - 64 + 112) & 7) + 3) >= v16 )
      __asan_report_store4(4LL * i + v3 + 48);
    *(_DWORD *)&v5[4 * i - 144] = v15;
  }
  while ( *(_BYTE *)(v3 + 142) > 2u )
  {
    shortestDist = *(float *)(v3 + 48);
    shortest = 0;
    for ( i_0 = 1; i_0 < *(unsigned __int8 *)(v3 + 142); ++i_0 )
    {
      v17 = *(_BYTE *)(((4LL * i_0 + v3 + 48) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((4 * i_0 + v3 - 64 + 112) & 7) + 3) >= v17 )
        __asan_report_load4(4LL * i_0 + v3 + 48);
      if ( shortestDist > *(float *)&v5[4 * i_0 - 144] )
      {
        shortestDist = *(float *)&v5[4 * i_0 - 144];
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
    if ( shortest + 1 >= *(unsigned __int8 *)(v3 + 142) )
      v18 = 0;
    else
      v18 = shortest + 1;
    next = v18;
    v19 = *(_BYTE *)(((2 * (shortest + 8LL) + v3 + 112 + 2) >> 3) + 0x7FFF8000);
    if ( v19 != 0 && (char)(((2 * (shortest + 8) + v3 + 112 + 2) & 7) + 1) >= v19 )
      __asan_report_load2(2 * (shortest + 8LL) + v3 + 112 + 2);
    va_0 = *(unsigned __int16 *)&v5[2 * shortest - 62];
    v20 = *(_BYTE *)(((2 * (next + 8LL) + v3 + 112 + 2) >> 3) + 0x7FFF8000);
    if ( v20 != 0 && (char)(((2 * (next + 8) + v3 + 112 + 2) & 7) + 1) >= v20 )
      __asan_report_load2(2 * (next + 8LL) + v3 + 112 + 2);
    vb_0 = *(unsigned __int16 *)&v5[2 * next - 62];
    if ( va_0 != vb_0 )
      DynamicSihouette::CollapseEdge(this, va_0, vb_0);
    for ( i_1 = shortest; i_1 < *(unsigned __int8 *)(v3 + 142) - 1; ++i_1 )
    {
      v21 = i_1 + 1;
      v22 = *(_BYTE *)(((4LL * (i_1 + 1) + v3 + 48) >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (char)(((4 * (i_1 + 1) + v3 - 64 + 112) & 7) + 3) >= v22 )
        __asan_report_load4(4LL * (i_1 + 1) + v3 + 48);
      v23 = *(_DWORD *)&v5[4 * v21 - 144];
      v24 = *(_BYTE *)(((4LL * i_1 + v3 + 48) >> 3) + 0x7FFF8000);
      if ( v24 != 0 && (char)(((4 * i_1 + v3 - 64 + 112) & 7) + 3) >= v24 )
        __asan_report_store4(4LL * i_1 + v3 + 48);
      *(_DWORD *)&v5[4 * i_1 - 144] = v23;
      v25 = i_1 + 1;
      v26 = *(_BYTE *)(((2 * (i_1 + 1 + 8LL) + v3 + 112 + 2) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)(((2 * (i_1 + 9) + v3 + 112 + 2) & 7) + 1) >= v26 )
        __asan_report_load2(2 * (i_1 + 1 + 8LL) + v3 + 112 + 2);
      v27 = *(_WORD *)&v5[2 * v25 - 62];
      v28 = *(_BYTE *)(((2 * (i_1 + 8LL) + v3 + 112 + 2) >> 3) + 0x7FFF8000);
      if ( v28 != 0 && (char)(((2 * (i_1 + 8) + v3 + 112 + 2) & 7) + 1) >= v28 )
        __asan_report_store2(2 * (i_1 + 8LL) + v3 + 112 + 2);
      *(_WORD *)&v5[2 * i_1 - 62] = v27;
    }
    --*(_BYTE *)(v3 + 142);
  }
  DynamicSihouette::RemovePolygonUnordered(this, ip_0);
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 690: range 000000000CC6E89E-000000000CC6EDF7
void __cdecl DynamicSihouette::ReWelderVertices(DynamicSihouette *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  size_t v4; // rsi
  __int64 m_sourceTile; // rax
  __int64 v6; // rdx
  Vector3f *v7; // rax
  unsigned __int16 *v8; // rax
  _WORD *v9; // rdx
  unsigned __int16 *v10; // rax
  _WORD *v11; // rdx
  uint8_t *p_m_VertexCount; // rax
  char v13; // dl
  unsigned __int16 *v14; // rax
  uint16_t *v15; // rdx
  uint16_t v16; // cx
  char v17; // dl
  int iv; // [rsp+18h] [rbp-B8h]
  int ip_0; // [rsp+1Ch] [rbp-B4h]
  int iv_0; // [rsp+20h] [rbp-B0h]
  int sourceVertCount; // [rsp+24h] [rbp-ACh]
  int vsize; // [rsp+28h] [rbp-A8h]
  int vi; // [rsp+2Ch] [rbp-A4h]
  int psize; // [rsp+30h] [rbp-A0h]
  int vsize_0; // [rsp+34h] [rbp-9Ch]
  DynamicSihouette::Poly *poly; // [rsp+38h] [rbp-98h]
  char v27[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 19 transVerticeIDs:691";
  *(_QWORD *)(v1 + 16) = DynamicSihouette::ReWelderVertices;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  dynamic_array<unsigned short,false,2ul>::dynamic_array((dynamic_array<short unsigned int,false,2> *const)(v1 + 32));
  v4 = dynamic_array<Vector3f,true,4ul>::size(&this->m_Vertices);
  dynamic_array<unsigned short,false,2ul>::resize_uninitialized(
    (dynamic_array<short unsigned int,false,2> *const)(v1 + 32),
    v4,
    kIncreaseToExactSize);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_sourceTile, v4);
  m_sourceTile = (__int64)this->m_sourceTile;
  if ( *(_BYTE *)(((unsigned __int64)(m_sourceTile + 16) >> 3) + 0x7FFF8000) )
    m_sourceTile = __asan_report_load8(m_sourceTile + 16, v4);
  v6 = *(_QWORD *)(m_sourceTile + 16);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 24) >> 3) + 0x7FFF8000) != 0
    && (char)(((v6 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v6 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6 + 24);
  }
  sourceVertCount = *(_DWORD *)(v6 + 24);
  iv = 0;
  vsize = dynamic_array<Vector3f,true,4ul>::size(&this->m_Vertices);
  while ( iv < vsize )
  {
    v7 = dynamic_array<Vector3f,true,4ul>::operator[](&this->m_Vertices, iv);
    vi = DSVertexWelder<2048>::GetUniqueInSource(&this->m_Welder, v7);
    if ( vi == -1 )
    {
      v10 = dynamic_array<unsigned short,false,2ul>::operator[](
              (dynamic_array<short unsigned int,false,2> *const)(v1 + 32),
              iv);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(v10);
      }
      *v11 = iv + sourceVertCount;
    }
    else
    {
      v8 = dynamic_array<unsigned short,false,2ul>::operator[](
             (dynamic_array<short unsigned int,false,2> *const)(v1 + 32),
             iv);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(v8);
      }
      *v9 = vi;
    }
    ++iv;
  }
  ip_0 = 0;
  psize = dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
  while ( ip_0 < psize )
  {
    poly = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
    iv_0 = 0;
    p_m_VertexCount = &poly->m_VertexCount;
    if ( *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_m_VertexCount & 7) >= *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_m_VertexCount);
    }
    vsize_0 = poly->m_VertexCount;
    while ( iv_0 < vsize_0 )
    {
      v13 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[iv_0] >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((2 * (iv_0 + 8) + (_BYTE)poly + 2) & 7) + 1) >= v13 )
        __asan_report_load2(&poly->m_VertexIDs[iv_0]);
      if ( sourceVertCount <= poly->m_VertexIDs[iv_0] )
      {
        v14 = dynamic_array<unsigned short,false,2ul>::operator[](
                (dynamic_array<short unsigned int,false,2> *const)(v1 + 32),
                poly->m_VertexIDs[iv_0] - sourceVertCount);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v14);
        }
        v16 = *v15;
        v17 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[iv_0] >> 3) + 0x7FFF8000);
        if ( v17 != 0 && (char)(((2 * (iv_0 + 8) + (_BYTE)poly + 2) & 7) + 1) >= v17 )
          __asan_report_store2(&poly->m_VertexIDs[iv_0]);
        poly->m_VertexIDs[iv_0] = v16;
      }
      ++iv_0;
    }
    ++ip_0;
  }
  dynamic_array<unsigned short,false,2ul>::~dynamic_array((dynamic_array<short unsigned int,false,2> *const)(v1 + 32));
  if ( v27 == (char *)v1 )
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

// Line 722: range 000000000CC6EDF8-000000000CC6EF1F
void __cdecl DynamicSihouette::RemoveDegeneratePolygons(DynamicSihouette *const this)
{
  float m_QuantFactor; // ebx
  uint16_t *m_VertexIDs; // r12
  DynamicSihouette::Poly *v3; // rdx
  uint8_t *p_m_VertexCount; // rax
  size_t count; // [rsp+10h] [rbp-20h]
  size_t ip_0; // [rsp+18h] [rbp-18h]

  count = dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
  for ( ip_0 = 0LL; ip_0 < count; ++ip_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_QuantFactor >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_QuantFactor);
    }
    m_QuantFactor = this->m_QuantFactor;
    m_VertexIDs = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0)->m_VertexIDs;
    v3 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
    p_m_VertexCount = &v3->m_VertexCount;
    if ( *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_m_VertexCount & 7) >= *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_m_VertexCount);
    }
    if ( DynamicSihouette::PolygonDegenerate(this, v3->m_VertexCount, m_VertexIDs, m_QuantFactor) )
    {
      DynamicSihouette::CollapsePolygonUnordered(this, ip_0);
      --count;
      --ip_0;
    }
  }
};

// Line 735: range 000000000CC6EF20-000000000CC6F288
void __cdecl DynamicSihouette::RemoveDegenerateEdges(DynamicSihouette *const this)
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
  DynamicSihouette::Poly *poly; // [rsp+38h] [rbp-8h]

  count = dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
  for ( ip_0 = 0LL; ip_0 < count; ++ip_0 )
  {
    poly = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
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
      if ( v2 != 0 && (char)(((2 * (i + 8) + (_BYTE)poly + 2) & 7) + 1) >= v2 )
        __asan_report_load2(&poly->m_VertexIDs[i]);
      v3 = poly->m_VertexIDs[i];
      v4 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[j] >> 3) + 0x7FFF8000);
      if ( v4 != 0 && (char)(((2 * (j + 8) + (_BYTE)poly + 2) & 7) + 1) >= v4 )
        __asan_report_load2(&poly->m_VertexIDs[j]);
      if ( v3 == poly->m_VertexIDs[j] )
      {
        for ( k = j; ; ++k )
        {
          if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)poly + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&poly->m_VertexCount);
          }
          if ( k >= poly->m_VertexCount - 1 )
            break;
          v5 = k + 1;
          v6 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[k + 1] >> 3) + 0x7FFF8000);
          if ( v6 != 0 && (char)(((2 * (k + 9) + (_BYTE)poly + 2) & 7) + 1) >= v6 )
            __asan_report_load2(&poly->m_VertexIDs[k + 1]);
          v7 = poly->m_VertexIDs[v5];
          v8 = *(_BYTE *)(((unsigned __int64)&poly->m_VertexIDs[k] >> 3) + 0x7FFF8000);
          if ( v8 != 0 && (char)(((2 * (k + 8) + (_BYTE)poly + 2) & 7) + 1) >= v8 )
            __asan_report_store2(&poly->m_VertexIDs[k]);
          poly->m_VertexIDs[k] = v7;
        }
        if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)poly + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&poly->m_VertexCount);
        }
        --poly->m_VertexCount;
        --i;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)poly + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->m_VertexCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&poly->m_VertexCount);
    }
    if ( poly->m_VertexCount <= 2u )
    {
      DynamicSihouette::RemovePolygonUnordered(this, ip_0);
      --count;
      --ip_0;
    }
  }
};

// Line 762: range 000000000CC6F28A-000000000CC6F982
void __cdecl DynamicSihouette::RemoveUnusedVertices(DynamicSihouette *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 m_sourceTile; // rax
  size_t v6; // rax
  size_t v7; // rax
  DynamicSihouette::Poly *v8; // rdx
  uint8_t *p_m_VertexCount; // rax
  DynamicSihouette::Poly *v10; // rdx
  unsigned __int64 v11; // rax
  int *v12; // rax
  _DWORD *v13; // rdx
  int v14; // edi
  int v15; // r14d
  int *v16; // rax
  _DWORD *v17; // rdx
  int *v18; // rax
  int *v19; // rdx
  int v20; // r14d
  DynamicSihouette::Poly *v21; // rdx
  unsigned __int64 v22; // rax
  Vector3f *v23; // rax
  int *v24; // rax
  int *v25; // rdx
  int v26; // r14d
  DynamicSihouette::Poly *v27; // rdx
  unsigned __int64 v28; // rax
  uint8_t iv; // [rsp+11h] [rbp-EFh]
  uint16_t oldVertexID; // [rsp+12h] [rbp-EEh]
  uint16_t oldVertexIDa; // [rsp+12h] [rbp-EEh]
  int init_value; // [rsp+14h] [rbp-ECh] BYREF
  size_t ip_0; // [rsp+18h] [rbp-E8h]
  const int *sourceVertCount; // [rsp+20h] [rbp-E0h]
  size_t count; // [rsp+28h] [rbp-D8h]
  char v37[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 17 transVertices:764 96 24 15 newVertices:765";
  *(_QWORD *)(v2 + 16) = DynamicSihouette::RemoveUnusedVertices;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceTile >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_sourceTile, v1);
  m_sourceTile = (__int64)this->m_sourceTile;
  if ( *(_BYTE *)(((unsigned __int64)(m_sourceTile + 16) >> 3) + 0x7FFF8000) )
    m_sourceTile = __asan_report_load8(m_sourceTile + 16, v1);
  sourceVertCount = (const int *)(*(_QWORD *)(m_sourceTile + 16) + 24LL);
  init_value = -1;
  v6 = dynamic_array<Vector3f,true,4ul>::size(&this->m_Vertices);
  dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v2 + 32), v6, &init_value);
  dynamic_array<Vector3f,true,4ul>::dynamic_array((dynamic_array<Vector3f,true,4> *const)(v2 + 96));
  v7 = dynamic_array<Vector3f,true,4ul>::size(&this->m_Vertices);
  dynamic_array<Vector3f,true,4ul>::reserve((dynamic_array<Vector3f,true,4> *const)(v2 + 96), v7);
  count = dynamic_array<DynamicSihouette::Poly,true,4ul>::size(&this->m_Polygons);
  for ( ip_0 = 0LL; ip_0 < count; ++ip_0 )
  {
    for ( iv = 0; ; ++iv )
    {
      v8 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
      p_m_VertexCount = &v8->m_VertexCount;
      if ( *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_m_VertexCount & 7) >= *(_BYTE *)(((unsigned __int64)p_m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_m_VertexCount);
      }
      if ( iv >= v8->m_VertexCount )
        break;
      v10 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
      v11 = (unsigned __int64)&v10->m_VertexIDs[iv];
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 1) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load2(v11);
      oldVertexID = v10->m_VertexIDs[iv];
      if ( *(_BYTE *)(((unsigned __int64)sourceVertCount >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)sourceVertCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sourceVertCount >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(sourceVertCount);
      }
      if ( *sourceVertCount <= oldVertexID )
      {
        if ( *(_BYTE *)(((unsigned __int64)sourceVertCount >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)sourceVertCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sourceVertCount >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(sourceVertCount);
        }
        oldVertexIDa = oldVertexID - *sourceVertCount;
        v12 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v2 + 32), oldVertexIDa);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        if ( *v13 == -1 )
        {
          v14 = dynamic_array<Vector3f,true,4ul>::size((const dynamic_array<Vector3f,true,4> *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)sourceVertCount >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)sourceVertCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sourceVertCount >> 3)
                                                                              + 0x7FFF8000) )
          {
            v14 = (int)sourceVertCount;
            __asan_report_load4(sourceVertCount);
          }
          v15 = v14 + *sourceVertCount;
          v16 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v2 + 32), oldVertexIDa);
          v17 = v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v16);
          }
          *v17 = v15;
          v18 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v2 + 32), oldVertexIDa);
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          v20 = *v19;
          v21 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
          v22 = (unsigned __int64)&v21->m_VertexIDs[iv];
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0 && (char)((v22 & 7) + 1) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            __asan_report_store2(v22);
          v21->m_VertexIDs[iv] = v20;
          v23 = dynamic_array<Vector3f,true,4ul>::operator[](&this->m_Vertices, oldVertexIDa);
          dynamic_array<Vector3f,true,4ul>::push_back((dynamic_array<Vector3f,true,4> *const)(v2 + 96), v23);
        }
        else
        {
          v24 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v2 + 32), oldVertexIDa);
          v25 = v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          v26 = *v25;
          v27 = dynamic_array<DynamicSihouette::Poly,true,4ul>::operator[](&this->m_Polygons, ip_0);
          v28 = (unsigned __int64)&v27->m_VertexIDs[iv];
          if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0 && (char)((v28 & 7) + 1) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            __asan_report_store2(v28);
          v27->m_VertexIDs[iv] = v26;
        }
      }
    }
  }
  dynamic_array<Vector3f,true,4ul>::operator=(&this->m_Vertices, (const dynamic_array<Vector3f,true,4> *)(v2 + 96));
  dynamic_array<Vector3f,true,4ul>::~dynamic_array((dynamic_array<Vector3f,true,4> *const)(v2 + 96));
  dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v2 + 32));
  if ( v37 == (char *)v2 )
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

// Line 795: range 000000000CC6F984-000000000CC6FBAD
void __cdecl DynamicSihouette::CopyRemovePoly(
        const DynamicSihouette *const this,
        unsigned __int16 *ouputPoly,
        const int *polySize)
{
  __int64 v3; // rbx
  int v4; // r8d
  unsigned __int16 *v5; // rcx
  int *v6; // rax
  int *v7; // rdx
  int v8; // r8d
  int v9; // eax
  unsigned __int64 v10; // rcx
  int index; // [rsp+20h] [rbp-30h]
  std::set<int,std::less<int>,stl_allocator<int,16> >::iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::set<int,std::less<int>,stl_allocator<int,16> >::iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  const std::set<int,std::less<int>,stl_allocator<int,16> > *__for_range; // [rsp+38h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)polySize >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)polySize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)polySize >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(polySize);
  }
  v3 = *polySize;
  if ( v3 != std::set<int,std::less<int>,stl_allocator<int,16>>::size(&this->m_DataTypeRemoveSet) )
  {
    __asan_handle_no_return(&this->m_DataTypeRemoveSet);
    __assert_fail(
      "polySize == m_DataTypeRemoveSet.size()",
      "./src/pathfinding/Internal/Obstacles/DynamicSihouette.cpp",
      0x31Cu,
      "void DynamicSihouette::CopyRemovePoly(short unsigned int*, const int&) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)polySize >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)polySize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)polySize >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(polySize);
  }
  v4 = *polySize;
  index = 1;
  v5 = ouputPoly;
  if ( *(_BYTE *)(((unsigned __int64)ouputPoly >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ouputPoly & 7) + 1) >= *(_BYTE *)(((unsigned __int64)ouputPoly >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(ouputPoly);
  }
  *v5 = v4;
  __for_range = &this->m_DataTypeRemoveSet;
  __for_begin._M_node = std::set<int,std::less<int>,stl_allocator<int,16>>::begin(&this->m_DataTypeRemoveSet)._M_node;
  __for_end._M_node = std::set<int,std::less<int>,stl_allocator<int,16>>::end(&this->m_DataTypeRemoveSet)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (int *)std::_Rb_tree_const_iterator<int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    v9 = index++;
    v10 = (unsigned __int64)&ouputPoly[v9];
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 1) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_store2(v10);
    *(_WORD *)v10 = v8;
    std::_Rb_tree_const_iterator<int>::operator++(&__for_begin);
  }
};
