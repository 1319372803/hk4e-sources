// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp

// Line 35: range 000000000CC48F6A-000000000CC491F3
float __cdecl GetCostModifier(const DynamicNavMesh *navmesh, const QueryFilter *filter, NavMeshPolyRef ref)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  float result; // xmm0_4
  __int64 v7; // rdx
  const OffMeshConnection *con; // [rsp+28h] [rbp-88h]
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 tile:46 64 8 7 poly:47";
  *(_QWORD *)(v3 + 16) = GetCostModifier;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    con = DynamicNavMesh::GetOffMeshConnection(navmesh, ref);
    if ( *(_BYTE *)(((unsigned __int64)&con->costModifier >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&con->costModifier >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&con->costModifier);
    }
    if ( con->costModifier == -1.0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->area >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)con - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&con->area >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&con->area);
      }
      result = QueryFilter::GetAreaCost(filter, con->area);
    }
    else
    {
      result = con->costModifier;
    }
  }
  else
  {
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 64) = 0LL;
    DynamicNavMesh::GetTileAndPolyByRef(navmesh, ref, (const NavMeshTile **)(v3 + 32), (const NavMeshPoly **)(v3 + 64));
    v7 = *(_QWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 29) >> 3) + 0x7FFF8000) != 0
      && ((v7 + 29) & 7) >= *(_BYTE *)(((unsigned __int64)(v7 + 29) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v7 + 29);
    }
    result = QueryFilter::GetAreaCost(filter, *(unsigned __int8 *)(v7 + 29));
  }
  if ( v10 == (char *)v3 )
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

// Line 57: range 000000000CC491F4-000000000CC49508
bool __cdecl SqrDistancePointPolyEdge(
        const Vector3f *pt,
        const Vector3f *verts,
        const int nverts,
        float *ed,
        float *et)
{
  double v5; // xmm0_8
  _BOOL4 v6; // ecx
  __m128i z_low; // xmm0
  float x; // xmm2_4
  double v9; // xmm0_8
  float v10; // xmm1_4
  unsigned __int64 v11; // rbx
  int v12; // ecx
  int v13; // eax
  char c; // [rsp+37h] [rbp-29h]
  int i; // [rsp+38h] [rbp-28h]
  int j; // [rsp+3Ch] [rbp-24h]
  const Vector3f *vi; // [rsp+40h] [rbp-20h]
  const Vector3f *vj; // [rsp+48h] [rbp-18h]

  c = 0;
  i = 0;
  j = nverts - 1;
  while ( i < nverts )
  {
    vi = &verts[i];
    vj = &verts[j];
    if ( *(_BYTE *)(((unsigned __int64)&vi->z >> 3) + 0x7FFF8000) != 0
      && (char)(((12 * i + (_BYTE)verts + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vi->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&verts[i].z);
    }
    *(float *)&v5 = vi->z;
    if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
    {
      v5 = __asan_report_load4(&pt->z);
    }
    v6 = *(float *)&v5 > pt->z;
    if ( *(_BYTE *)(((unsigned __int64)&vj->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vj + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vj->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&vj->z);
    }
    z_low = (__m128i)LODWORD(vj->z);
    if ( v6 != *(float *)z_low.m128i_i32 > pt->z )
    {
      if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pt);
      }
      x = pt->x;
      if ( *(_BYTE *)(((unsigned __int64)vj >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)vj & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vj >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(vj);
      }
      *(float *)&v9 = vj->x;
      if ( *(_BYTE *)(((unsigned __int64)vi >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)vi & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vi >> 3) + 0x7FFF8000) )
      {
        v9 = __asan_report_load4(vi);
      }
      v10 = (float)((float)(pt->z - vi->z) * (float)(*(float *)&v9 - vi->x)) / (float)(vj->z - vi->z);
      z_low = (__m128i)LODWORD(vi->x);
      if ( (float)(*(float *)z_low.m128i_i32 + v10) > x )
        c ^= 1u;
    }
    v11 = (unsigned __int64)&ed[j];
    *(float *)z_low.m128i_i32 = SqrDistancePointSegment2D(&et[j], pt, vj, vi);
    v12 = _mm_cvtsi128_si32(z_low);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_store4(v11);
    *(_DWORD *)v11 = v12;
    v13 = i++;
    j = v13;
  }
  return c;
};

// Line 74: range 000000000CC49509-000000000CC497D2
void __cdecl ProjectPoly(float *rmin, float *rmax, const Vector3f *axis, const Vector3f *poly, const int npoly)
{
  __m128i v5; // xmm0
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  __m128i v9; // xmm0
  const float *v10; // rax
  _DWORD *v11; // rdx
  const float *v12; // rax
  unsigned int *v13; // rdx
  int v14; // xmm0_4
  int v15; // xmm0_4
  int i; // [rsp+3Ch] [rbp-84h]
  char v20[128]; // [rsp+40h] [rbp-80h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 6 min:75 48 4 6 max:75 64 4 4 d:79";
  *(_QWORD *)(v6 + 16) = ProjectPoly;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -202116348;
  *(float *)v5.m128i_i32 = Dot2D(axis, poly);
  *(_DWORD *)(v6 + 48) = _mm_cvtsi128_si32(v5);
  v9 = (__m128i)*(unsigned int *)(v6 + 48);
  *(_DWORD *)(v6 + 32) = v9.m128i_i32[0];
  for ( i = 1; i < npoly; ++i )
  {
    *(float *)v9.m128i_i32 = Dot2D(axis, &poly[i]);
    *(_DWORD *)(v6 + 64) = _mm_cvtsi128_si32(v9);
    v10 = std::min<float>((const float *)(v6 + 32), (const float *)(v6 + 64));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    *(_DWORD *)(v6 + 32) = *v11;
    v12 = std::max<float>((const float *)(v6 + 48), (const float *)(v6 + 64));
    v13 = (unsigned int *)v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    v9 = (__m128i)*v13;
    *(_DWORD *)(v6 + 48) = v9.m128i_i32[0];
  }
  v14 = *(_DWORD *)(v6 + 32);
  if ( *(_BYTE *)(((unsigned __int64)rmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(rmin);
  }
  *(_DWORD *)rmin = v14;
  v15 = *(_DWORD *)(v6 + 48);
  if ( *(_BYTE *)(((unsigned __int64)rmax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(rmax);
  }
  *(_DWORD *)rmax = v15;
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 90: range 000000000CC497D3-000000000CC49834
bool __cdecl OverlapRange(const float amin, const float amax, const float bmin, const float bmax, const float eps)
{
  return (float)(amin + eps) <= bmax && bmin <= (float)(amax - eps);
};

// Line 96: range 000000000CC49835-000000000CC49E08
bool __cdecl OverlapPolyPoly2D(const Vector3f *polya, const int npolya, const Vector3f *polyb, const int npolyb)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  double v7; // xmm0_8
  float v8; // xmm2_4
  double v9; // xmm0_8
  bool result; // al
  int v11; // eax
  double v12; // xmm0_8
  float v13; // xmm2_4
  double v14; // xmm0_8
  int v15; // eax
  int i; // [rsp+2Ch] [rbp-D4h]
  int j; // [rsp+30h] [rbp-D0h]
  int i_0; // [rsp+34h] [rbp-CCh]
  int j_0; // [rsp+38h] [rbp-C8h]
  const Vector3f *va; // [rsp+40h] [rbp-C0h]
  const Vector3f *vb; // [rsp+48h] [rbp-B8h]
  const Vector3f *va_0; // [rsp+50h] [rbp-B0h]
  const Vector3f *vb_0; // [rsp+58h] [rbp-A8h]
  char v26[160]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 8 amin:118 48 4 8 amax:118 64 4 8 bmin:118 80 4 8 bmax:118 96 12 5 n:117";
  *(_QWORD *)(v4 + 16) = OverlapPolyPoly2D;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202177536;
  i = 0;
  j = npolya - 1;
  while ( i < npolya )
  {
    va = &polya[j];
    vb = &polya[i];
    if ( *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) != 0
      && (char)(((12 * j + (_BYTE)polya) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&polya[j]);
    }
    *(float *)&v7 = va->x;
    if ( *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)vb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) )
    {
      v7 = __asan_report_load4(vb);
    }
    v8 = *(float *)&v7 - vb->x;
    if ( *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vb + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&vb->z);
    }
    *(float *)&v9 = vb->z;
    if ( *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)va + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) )
    {
      v9 = __asan_report_load4(&va->z);
    }
    Vector3f::Vector3f((Vector3f *const)(v4 + 96), *(float *)&v9 - va->z, 0.0, v8);
    ProjectPoly((float *)(v4 + 32), (float *)(v4 + 48), (const Vector3f *)(v4 + 96), polya, npolya);
    ProjectPoly((float *)(v4 + 64), (float *)(v4 + 80), (const Vector3f *)(v4 + 96), polyb, npolyb);
    if ( !OverlapRange(
            *(const float *)(v4 + 32),
            *(const float *)(v4 + 48),
            *(const float *)(v4 + 64),
            *(const float *)(v4 + 80),
            0.000099999997) )
    {
      result = 0;
      goto LABEL_31;
    }
    v11 = i++;
    j = v11;
  }
  i_0 = 0;
  j_0 = npolyb - 1;
  while ( i_0 < npolyb )
  {
    va_0 = &polyb[j_0];
    vb_0 = &polyb[i_0];
    if ( *(_BYTE *)(((unsigned __int64)va_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((12 * j_0 + (_BYTE)polyb) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)va_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&polyb[j_0]);
    }
    *(float *)&v12 = -va_0->x;
    if ( *(_BYTE *)(((unsigned __int64)vb_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)vb_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vb_0 >> 3) + 0x7FFF8000) )
    {
      v12 = __asan_report_load4(vb_0);
    }
    v13 = *(float *)&v12 - vb_0->x;
    if ( *(_BYTE *)(((unsigned __int64)&vb_0->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vb_0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb_0->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&vb_0->z);
    }
    *(float *)&v14 = vb_0->z;
    if ( *(_BYTE *)(((unsigned __int64)&va_0->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)va_0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va_0->z >> 3) + 0x7FFF8000) )
    {
      v14 = __asan_report_load4(&va_0->z);
    }
    Vector3f::Vector3f((Vector3f *const)(v4 + 96), *(float *)&v14 - va_0->z, 0.0, v13);
    ProjectPoly((float *)(v4 + 32), (float *)(v4 + 48), (const Vector3f *)(v4 + 96), polya, npolya);
    ProjectPoly((float *)(v4 + 64), (float *)(v4 + 80), (const Vector3f *)(v4 + 96), polyb, npolyb);
    if ( !OverlapRange(
            *(const float *)(v4 + 32),
            *(const float *)(v4 + 48),
            *(const float *)(v4 + 64),
            *(const float *)(v4 + 80),
            0.000099999997) )
    {
      result = 0;
      goto LABEL_31;
    }
    v15 = i_0++;
    j_0 = v15;
  }
  result = 1;
LABEL_31:
  if ( v26 == (char *)v4 )
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

// Line 131: range 000000000CC49E09-000000000CC4A1A2
bool __cdecl PointInPolygon2D(const Vector3f *pt, const Vector3f *verts, const int nverts)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 n; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  char v8; // di
  bool result; // al
  int i; // [rsp+24h] [rbp-6Ch]
  float dlx; // [rsp+28h] [rbp-68h]
  float dlz; // [rsp+2Ch] [rbp-64h]
  float dpx; // [rsp+30h] [rbp-60h]
  const Vector3f *curr; // [rsp+38h] [rbp-58h]
  char v18[80]; // [rsp+40h] [rbp-50h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  n = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 8 prev:133";
  *(_QWORD *)(v3 + 16) = PointInPolygon2D;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202177536;
  v7 = (__int64)&verts[nverts - 1];
  v8 = *(_BYTE *)(((unsigned __int64)&verts[nverts - 1] >> 3) + 0x7FFF8000);
  if ( (((unsigned __int8)verts + 12 * nverts - 12) & 7) >= v8 && v8 != 0
    || *(_BYTE *)((((unsigned __int64)&verts[nverts - 1].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)verts + 12 * nverts - 12 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&verts[nverts - 1].z + 3) >> 3)
                                                                          + 0x7FFF8000) )
  {
    v7 = 12LL;
    n = __asan_report_load_n(&verts[nverts - 1], 12LL);
  }
  *(_QWORD *)(n - 32) = *(_QWORD *)v7;
  *(_DWORD *)(n - 24) = *(_DWORD *)(v7 + 8);
  for ( i = 0; i < nverts; ++i )
  {
    curr = &verts[i];
    if ( *(_BYTE *)(((unsigned __int64)curr >> 3) + 0x7FFF8000) != 0
      && (char)(((12 * i + (_BYTE)verts) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&verts[i]);
    }
    dlx = curr->x - *(float *)(n - 32);
    if ( *(_BYTE *)(((unsigned __int64)&curr->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)curr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curr->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&curr->z);
    }
    dlz = curr->z - *(float *)(n - 24);
    if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pt);
    }
    dpx = pt->x - *(float *)(n - 32);
    if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pt->z);
    }
    if ( (float)((float)(pt->z - *(float *)(n - 24)) * dlx) > (float)(dpx * dlz) )
    {
      result = 0;
      goto LABEL_22;
    }
    if ( ((unsigned __int8)curr & 7) >= *(_BYTE *)(((unsigned __int64)curr >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)curr >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&curr->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)curr + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&curr->z + 3) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(curr, 12LL);
    }
    *(_QWORD *)(n - 32) = *(_QWORD *)&curr->x;
    *(float *)(n - 24) = curr->z;
  }
  result = 1;
LABEL_22:
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)(v6 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)(v6 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 148: range 000000000CC4A1A4-000000000CC4A28C
void __cdecl NavMeshQuery::NavMeshQuery(NavMeshQuery *const this, const DynamicNavMesh *navmesh, const int maxNodes)
{
  NavMeshQuery::NavMeshQueryData::NavMeshQueryData(&this->m_QueryData);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TinyNodePool >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_TinyNodePool = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NodePool = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_OpenList = 0LL;
  memset(&this->m_QueryData, 0, sizeof(this->m_QueryData));
  NavMeshQuery::InitPools(this, navmesh, maxNodes);
};

// Line 157: range 000000000CC4A28E-000000000CC4A3CE
void __cdecl NavMeshQuery::~NavMeshQuery(NavMeshQuery *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_TinyNodePool >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_TinyNodePool, v1);
  delete_internal<NavMeshNodePool>(this->m_TinyNodePool);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TinyNodePool >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_TinyNodePool = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NodePool, v1);
  delete_internal<NavMeshNodePool>(this->m_NodePool);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NodePool = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_OpenList, v1);
  delete_internal<NavMeshNodeQueue>(this->m_OpenList);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_OpenList = 0LL;
};

// Line 165: range 000000000CC4A3D0-000000000CC4A727
NavMeshStatus __cdecl NavMeshQuery::InitPools(NavMeshQuery *const this, const DynamicNavMesh *nav, const int maxNodes)
{
  NavMeshNodePool **p_m_TinyNodePool; // rax
  NavMeshNodePool *v4; // rbx
  int PowerOfTwo; // r12d
  NavMeshNodePool *v7; // rbx
  NavMeshNodeQueue *v8; // rbx
  NavMeshQuery *thisa; // [rsp+18h] [rbp-18h]

  thisa = this;
  p_m_TinyNodePool = &this->m_TinyNodePool;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TinyNodePool >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)((char *)this + 88);
    __asan_report_load8(p_m_TinyNodePool, nav);
  }
  if ( thisa->m_TinyNodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!m_TinyNodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0xA6u,
      "NavMeshStatus NavMeshQuery::InitPools(const DynamicNavMesh*, int)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)&thisa->m_NodePool;
    __asan_report_load8(&thisa->m_NodePool, nav);
  }
  if ( thisa->m_NodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!m_NodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0xA7u,
      "NavMeshStatus NavMeshQuery::InitPools(const DynamicNavMesh*, int)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)&thisa->m_OpenList;
    __asan_report_load8(&thisa->m_OpenList, nav);
  }
  if ( thisa->m_OpenList )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!m_OpenList",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0xA8u,
      "NavMeshStatus NavMeshQuery::InitPools(const DynamicNavMesh*, int)");
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_NavMesh = nav;
  v4 = (NavMeshNodePool *)operator new(0x58uLL, 0x10uLL, "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp", 172);
  NavMeshNodePool::NavMeshNodePool(v4, 64, 32);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_TinyNodePool = v4;
  if ( !thisa->m_TinyNodePool )
    return -2147483644;
  if ( !maxNodes )
    return 0x40000000;
  PowerOfTwo = NextPowerOfTwo(maxNodes / 4);
  v7 = (NavMeshNodePool *)operator new(0x58uLL, 0x10uLL, "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp", 179);
  NavMeshNodePool::NavMeshNodePool(v7, maxNodes, PowerOfTwo);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_NodePool = v7;
  if ( !thisa->m_NodePool )
    return -2147483644;
  v8 = (NavMeshNodeQueue *)operator new(0x20uLL, 0x10uLL, "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp", 183);
  NavMeshNodeQueue::NavMeshNodeQueue(v8, maxNodes);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_OpenList = v8;
  if ( thisa->m_OpenList )
    return 0x40000000;
  else
    return -2147483644;
};

// Line 192: range 000000000CC4A728-000000000CC4B03C
NavMeshStatus __cdecl NavMeshQuery::ClosestPointOnPoly(
        const NavMeshQuery *const this,
        NavMeshPolyRef ref,
        const Vector3f *pos,
        Vector3f *closest)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  NavMeshStatus result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  Vector3f *v10; // rdi
  const NavMeshQuery *thisa; // [rsp+18h] [rbp-E8h]
  float d0_0; // [rsp+20h] [rbp-E0h]
  float d0; // [rsp+28h] [rbp-D8h]
  const OffMeshConnection *con; // [rsp+30h] [rbp-D0h]
  const Vector3f *dcon; // [rsp+38h] [rbp-C8h]
  char v18[192]; // [rsp+40h] [rbp-C0h] BYREF

  thisa = this;
  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)160;
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 8 tile:230 64 8 8 poly:231 96 12 12 localPos:237 128 12 16 localClosest:238";
  *(_QWORD *)(v5 + 16) = NavMeshQuery::ClosestPointOnPoly;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -219020288;
  v7[536862724] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, ref);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0xC1u,
      "NavMeshStatus NavMeshQuery::ClosestPointOnPoly(NavMeshPolyRef, const Vector3f&, Vector3f*) const");
  }
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, ref);
    con = DynamicNavMesh::GetOffMeshConnection(thisa->m_NavMesh, ref);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->endPoints[0].tileRef >> 3) + 0x7FFF8000) )
        __asan_report_load8(&con->endPoints[0].tileRef, ref);
      if ( !con->endPoints[0].tileRef )
        goto LABEL_19;
      if ( *(_BYTE *)(((unsigned __int64)&con->endPoints[1].tileRef >> 3) + 0x7FFF8000) )
        __asan_report_load8(&con->endPoints[1].tileRef, ref);
      if ( con->endPoints[1].tileRef )
      {
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, ref);
        dcon = (const Vector3f *)DynamicNavMesh::GetDynamicOffMeshConnection(thisa->m_NavMesh, ref);
        if ( dcon )
        {
          *(float *)v4.m128i_i32 = SqrDistance(dcon + 1, pos);
          d0 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
          *(float *)v4.m128i_i32 = SqrDistance(dcon + 5, pos);
          if ( COERCE_FLOAT(_mm_cvtsi128_si32(v4)) <= d0 )
          {
            if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(closest, 12LL);
            }
            if ( (((unsigned __int8)dcon + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&dcon[5] >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&dcon[5] >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&dcon[5].z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)dcon + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&dcon[5].z + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(&dcon[5], 12LL);
            }
            *(_QWORD *)&closest->x = *(_QWORD *)&dcon[5].x;
            closest->z = dcon[5].z;
          }
          else
          {
            if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(closest, 12LL);
            }
            if ( (((unsigned __int8)dcon + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&dcon[1] >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&dcon[1] >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&dcon[1].z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)dcon + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&dcon[1].z + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(&dcon[1], 12LL);
            }
            *(_QWORD *)&closest->x = *(_QWORD *)&dcon[1].x;
            closest->z = dcon[1].z;
          }
        }
        else
        {
          *(float *)v4.m128i_i32 = SqrDistance(con->endPoints[0].mapped, pos);
          d0_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
          *(float *)v4.m128i_i32 = SqrDistance(con->endPoints[1].mapped, pos);
          if ( COERCE_FLOAT(_mm_cvtsi128_si32(v4)) <= d0_0 )
          {
            if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(closest, 12LL);
            }
            if ( (((unsigned __int8)con + 92) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3)
                                                               + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)con + 103) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z + 3) >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_load_n(con->endPoints[1].mapped, 12LL);
            }
            *(_QWORD *)&closest->x = *(_QWORD *)&con->endPoints[1].mapped[0].x;
            closest->z = con->endPoints[1].mapped[0].z;
          }
          else
          {
            if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(closest, 12LL);
            }
            if ( (((unsigned __int8)con + 44) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3)
                                                               + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)con + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3)
                                                               + 0x7FFF8000) )
            {
              __asan_report_load_n(con->endPoints[0].mapped, 12LL);
            }
            *(_QWORD *)&closest->x = *(_QWORD *)&con->endPoints[0].mapped[0].x;
            closest->z = con->endPoints[0].mapped[0].z;
          }
        }
        result = 0x40000000;
      }
      else
      {
LABEL_19:
        result = 0x80000000;
      }
    }
    else
    {
      result = -2147483640;
    }
  }
  else
  {
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, ref);
    TileAndPolyByRef = DynamicNavMesh::GetTileAndPolyByRef(
                         thisa->m_NavMesh,
                         ref,
                         (const NavMeshTile **)(v5 + 32),
                         (const NavMeshPoly **)(v5 + 64));
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = -2147483640;
    }
    else if ( *(_QWORD *)(v5 + 32) )
    {
      *(Vector3f *)(v5 + 96) = WorldToTile((const NavMeshTile *)*(_QWORD *)(v5 + 32), pos);
      Vector3f::Vector3f((Vector3f *const)(v5 + 128));
      NavMeshQuery::ClosestPointOnPolyInTileLocal(
        thisa,
        *(const NavMeshTile **)(v5 + 32),
        *(const NavMeshPoly **)(v5 + 64),
        ref,
        (const Vector3f *)(v5 + 96),
        (Vector3f *)(v5 + 128));
      v10 = *(Vector3f **)(v5 + 32);
      if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) )
      {
        v10 = closest;
        __asan_report_store_n(closest, 12LL);
      }
      *closest = TileToWorld((const NavMeshTile *)v10, (const Vector3f *)(v5 + 128));
      result = 0x40000000;
    }
    else
    {
      result = -2147483640;
    }
  }
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 247: range 000000000CC4B03D-000000000CC4B81E
bool __cdecl ProjectPointToPoly2DLocal(
        const Vector3f *pos,
        const NavMeshPoly *poly,
        const NavMeshTile *tile,
        Vector3f *projectedPos)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // r12
  _DWORD *v7; // rbx
  __int64 v8; // r14
  Vector3f *v9; // r15
  unsigned __int8 *p_vertCount; // rax
  __int64 v11; // rsi
  const Vector3f *verts; // rcx
  char v13; // dl
  unsigned __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rdi
  char v18; // dl
  int v19; // eax
  char v20; // dl
  int v21; // esi
  bool result; // al
  const Vector3f *posa; // [rsp+28h] [rbp-188h]
  bool inside; // [rsp+37h] [rbp-179h]
  int i; // [rsp+38h] [rbp-178h]
  float dmin; // [rsp+3Ch] [rbp-174h]
  int imin; // [rsp+40h] [rbp-170h]
  int i_0; // [rsp+44h] [rbp-16Ch]
  int nv; // [rsp+48h] [rbp-168h]
  const Vector3f *vb; // [rsp+58h] [rbp-158h]
  char v34[336]; // [rsp+60h] [rbp-150h] BYREF

  posa = pos;
  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    pos = (const Vector3f *)288;
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 288);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 24 9 edged:252 112 24 9 edget:253 176 72 9 verts:251";
  *(_QWORD *)(v4 + 16) = ProjectPointToPoly2DLocal;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = -218959360;
  v7[536862723] = 62194;
  v7[536862724] = -218959360;
  v7[536862725] = 62194;
  v7[536862727] = -218103808;
  v7[536862728] = -202116109;
  if ( !poly )
  {
    __asan_handle_no_return(pos);
    __assert_fail(
      "poly",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0xF8u,
      "bool ProjectPointToPoly2DLocal(const Vector3f&, const NavMeshPoly*, const NavMeshTile*, Vector3f*)");
  }
  if ( !tile )
  {
    __asan_handle_no_return(pos);
    __assert_fail(
      "tile",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0xF9u,
      "bool ProjectPointToPoly2DLocal(const Vector3f&, const NavMeshPoly*, const NavMeshTile*, Vector3f*)");
  }
  v8 = 5LL;
  v9 = (Vector3f *)(v4 + 176);
  while ( v8 >= 0 )
  {
    Vector3f::Vector3f(v9++);
    --v8;
  }
  p_vertCount = &poly->vertCount;
  v11 = ((_BYTE)poly + 28) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
    && (char)v11 >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_vertCount);
  }
  nv = poly->vertCount;
  for ( i = 0; i < nv; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->verts, v11);
    verts = tile->verts;
    v13 = *(_BYTE *)(((unsigned __int64)&poly->verts[i] >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((2 * i + (_BYTE)poly) & 7) + 1) >= v13 )
      __asan_report_load2(&poly->verts[i]);
    v14 = (unsigned __int64)&verts[poly->verts[i]];
    v15 = *(_BYTE *)(((v4 + 176 + 12LL * i) >> 3) + 0x7FFF8000);
    if ( (char)((v4 - 80 + 12 * i) & 7) >= v15 && v15 != 0
      || *(_BYTE *)(((v4 + 176 + 12LL * i + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 80 + 12 * i + 11) & 7) >= *(_BYTE *)(((v4 + 176 + 12LL * i + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 176 + 12LL * i, 12LL);
    }
    v11 = ((_DWORD)v14 + 11) & 7;
    if ( (char)(v14 & 7) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) && *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v14 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v14 + 11) & 7) >= *(_BYTE *)(((v14 + 11) >> 3) + 0x7FFF8000) )
    {
      v11 = 12LL;
      __asan_report_load_n(v14, 12LL);
    }
    v16 = (__int64)&v6[12 * i - 112];
    *(_QWORD *)v16 = *(_QWORD *)v14;
    *(_DWORD *)(v16 + 8) = *(_DWORD *)(v14 + 8);
  }
  v17 = (__int64)posa;
  inside = SqrDistancePointPolyEdge(posa, (const Vector3f *)(v4 + 176), nv, (float *)(v4 + 48), (float *)(v4 + 112));
  if ( inside )
  {
    if ( ((unsigned __int8)projectedPos & 7) >= *(_BYTE *)(((unsigned __int64)projectedPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)projectedPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&projectedPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)projectedPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&projectedPos->z + 3) >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_store_n(projectedPos, 12LL);
    }
    if ( ((unsigned __int8)posa & 7) >= *(_BYTE *)(((unsigned __int64)posa >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)posa >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&posa->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)posa + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&posa->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(posa, 12LL);
    }
    *(_QWORD *)&projectedPos->x = *(_QWORD *)&posa->x;
    projectedPos->z = posa->z;
  }
  else
  {
    dmin = 3.4028235e38;
    imin = -1;
    for ( i_0 = 0; i_0 < nv; ++i_0 )
    {
      v18 = *(_BYTE *)(((4LL * i_0 + v4 + 48) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)(((4 * i_0 + v4 + 48) & 7) + 3) >= v18 )
      {
        v17 = 4LL * i_0 + v4 + 48;
        __asan_report_load4(v17);
      }
      if ( dmin > *(float *)&v6[4 * i_0 - 240] )
      {
        dmin = *(float *)&v6[4 * i_0 - 240];
        imin = i_0;
      }
    }
    if ( imin >= nv || imin < 0 )
    {
      __asan_handle_no_return(v17);
      __assert_fail(
        "imin < nv && imin >= 0",
        "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
        0x116u,
        "bool ProjectPointToPoly2DLocal(const Vector3f&, const NavMeshPoly*, const NavMeshTile*, Vector3f*)");
    }
    if ( nv == imin + 1 )
      v19 = 0;
    else
      v19 = imin + 1;
    vb = (const Vector3f *)(v4 + 176 + 12LL * v19);
    v20 = *(_BYTE *)(((4LL * imin + v4 + 112) >> 3) + 0x7FFF8000);
    if ( v20 != 0 && (char)(((4 * imin + v4 + 112) & 7) + 3) >= v20 )
      __asan_report_load4(4LL * imin + v4 + 112);
    v21 = *(_DWORD *)&v6[4 * imin - 176];
    if ( ((unsigned __int8)projectedPos & 7) >= *(_BYTE *)(((unsigned __int64)projectedPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)projectedPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&projectedPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)projectedPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&projectedPos->z + 3) >> 3)
                                                                + 0x7FFF8000) )
    {
      v21 = 12;
      __asan_report_store_n(projectedPos, 12LL);
    }
    *projectedPos = Lerp((const Vector3f *)(v4 + 176 + 12LL * imin), vb, *(float *)&v21);
  }
  result = inside;
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
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
  return result;
};

// Line 289: range 000000000CC4B820-000000000CC4BB58
NavMeshStatus __cdecl NavMeshQuery::GetUpAxis(const NavMeshQuery *const this, NavMeshPolyRef ref, Vector3f *up)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  NavMeshStatus result; // eax
  Vector3f *p_rotation; // rdi
  const NavMeshTile *tile; // [rsp+20h] [rbp-70h]
  const OffMeshConnection *con; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 9 yAxis:300";
  *(_QWORD *)(v3 + 16) = NavMeshQuery::GetUpAxis;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, ref);
    con = DynamicNavMesh::GetOffMeshConnection(this->m_NavMesh, ref);
    if ( con )
    {
      if ( ((unsigned __int8)up & 7) >= *(_BYTE *)(((unsigned __int64)up >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)up >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&up->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)up + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&up->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(up, 12LL);
      }
      if ( (((unsigned __int8)con - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&con->axisY >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&con->axisY >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&con->axisY.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)con - 105) & 7) >= *(_BYTE *)((((unsigned __int64)&con->axisY.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(&con->axisY, 12LL);
      }
      *(_QWORD *)&up->x = *(_QWORD *)&con->axisY.x;
      up->z = con->axisY.z;
      result = 0x40000000;
    }
    else
    {
      result = -2147483640;
    }
  }
  else
  {
    Vector3f::Vector3f((Vector3f *const)(v3 + 32), 0.0, 1.0, 0.0);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, ref);
    tile = DynamicNavMesh::GetTileByRef(this->m_NavMesh, ref);
    if ( tile )
    {
      p_rotation = (Vector3f *)&tile->rotation;
      if ( ((unsigned __int8)up & 7) >= *(_BYTE *)(((unsigned __int64)up >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)up >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&up->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)up + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&up->z + 3) >> 3) + 0x7FFF8000) )
      {
        p_rotation = up;
        __asan_report_store_n(up, 12LL);
      }
      *up = RotateVectorByQuat((const Quaternionf *)p_rotation, (const Vector3f *)(v3 + 32));
      result = 0x40000000;
    }
    else
    {
      result = -2147483640;
    }
  }
  if ( v11 == (char *)v3 )
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

// Line 312: range 000000000CC4BB5A-000000000CC4BBB6
bool __cdecl NavMeshQuery::ClosestPointOnPolyInTileLocal(
        const NavMeshQuery *const this,
        const NavMeshTile *tile,
        const NavMeshPoly *poly,
        const NavMeshPolyRef ref,
        const Vector3f *pos,
        Vector3f *closest)
{
  bool inside; // [rsp+3Fh] [rbp-1h]

  inside = ProjectPointToPoly2DLocal(pos, poly, tile, closest);
  NavMeshQuery::GetPolyHeightLocal(this, ref, closest, &closest->y);
  return inside;
};

// Line 320: range 000000000CC4BBB8-000000000CC4C4A5
NavMeshStatus __cdecl NavMeshQuery::ClosestPointOnPolyBoundary(
        const NavMeshQuery *const this,
        NavMeshPolyRef ref,
        const Vector3f *pos,
        Vector3f *closest)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  NavMeshStatus result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  Vector3f *v10; // rdi
  const NavMeshQuery *thisa; // [rsp+18h] [rbp-E8h]
  float d0_0; // [rsp+20h] [rbp-E0h]
  float d0; // [rsp+28h] [rbp-D8h]
  const OffMeshConnection *con; // [rsp+30h] [rbp-D0h]
  const Vector3f *dcon; // [rsp+38h] [rbp-C8h]
  char v18[192]; // [rsp+40h] [rbp-C0h] BYREF

  thisa = this;
  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)160;
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 8 tile:356 64 8 8 poly:357 96 12 12 localPos:361 128 12 16 localProjPos:362";
  *(_QWORD *)(v5 + 16) = NavMeshQuery::ClosestPointOnPolyBoundary;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -219020288;
  v7[536862724] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, ref);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x141u,
      "NavMeshStatus NavMeshQuery::ClosestPointOnPolyBoundary(NavMeshPolyRef, const Vector3f&, Vector3f*) const");
  }
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, ref);
    con = DynamicNavMesh::GetOffMeshConnection(thisa->m_NavMesh, ref);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->endPoints[0].tileRef >> 3) + 0x7FFF8000) )
        __asan_report_load8(&con->endPoints[0].tileRef, ref);
      if ( !con->endPoints[0].tileRef )
        goto LABEL_19;
      if ( *(_BYTE *)(((unsigned __int64)&con->endPoints[1].tileRef >> 3) + 0x7FFF8000) )
        __asan_report_load8(&con->endPoints[1].tileRef, ref);
      if ( con->endPoints[1].tileRef )
      {
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, ref);
        dcon = (const Vector3f *)DynamicNavMesh::GetDynamicOffMeshConnection(thisa->m_NavMesh, ref);
        if ( dcon )
        {
          *(float *)v4.m128i_i32 = SqrDistance(dcon + 1, pos);
          d0 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
          *(float *)v4.m128i_i32 = SqrDistance(dcon + 5, pos);
          if ( COERCE_FLOAT(_mm_cvtsi128_si32(v4)) <= d0 )
          {
            if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(closest, 12LL);
            }
            if ( (((unsigned __int8)dcon + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&dcon[5] >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&dcon[5] >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&dcon[5].z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)dcon + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&dcon[5].z + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(&dcon[5], 12LL);
            }
            *(_QWORD *)&closest->x = *(_QWORD *)&dcon[5].x;
            closest->z = dcon[5].z;
          }
          else
          {
            if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(closest, 12LL);
            }
            if ( (((unsigned __int8)dcon + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&dcon[1] >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&dcon[1] >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&dcon[1].z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)dcon + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&dcon[1].z + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(&dcon[1], 12LL);
            }
            *(_QWORD *)&closest->x = *(_QWORD *)&dcon[1].x;
            closest->z = dcon[1].z;
          }
        }
        else
        {
          *(float *)v4.m128i_i32 = SqrDistance(con->endPoints[0].mapped, pos);
          d0_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
          *(float *)v4.m128i_i32 = SqrDistance(con->endPoints[1].mapped, pos);
          if ( COERCE_FLOAT(_mm_cvtsi128_si32(v4)) <= d0_0 )
          {
            if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(closest, 12LL);
            }
            if ( (((unsigned __int8)con + 92) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3)
                                                               + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)con + 103) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z + 3) >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_load_n(con->endPoints[1].mapped, 12LL);
            }
            *(_QWORD *)&closest->x = *(_QWORD *)&con->endPoints[1].mapped[0].x;
            closest->z = con->endPoints[1].mapped[0].z;
          }
          else
          {
            if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(closest, 12LL);
            }
            if ( (((unsigned __int8)con + 44) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3)
                                                               + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)con + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3)
                                                               + 0x7FFF8000) )
            {
              __asan_report_load_n(con->endPoints[0].mapped, 12LL);
            }
            *(_QWORD *)&closest->x = *(_QWORD *)&con->endPoints[0].mapped[0].x;
            closest->z = con->endPoints[0].mapped[0].z;
          }
        }
        result = 0x40000000;
      }
      else
      {
LABEL_19:
        result = 0x80000000;
      }
    }
    else
    {
      result = -2147483640;
    }
  }
  else
  {
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, ref);
    TileAndPolyByRef = DynamicNavMesh::GetTileAndPolyByRef(
                         thisa->m_NavMesh,
                         ref,
                         (const NavMeshTile **)(v5 + 32),
                         (const NavMeshPoly **)(v5 + 64));
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = -2147483640;
    }
    else
    {
      *(Vector3f *)(v5 + 96) = WorldToTile((const NavMeshTile *)*(_QWORD *)(v5 + 32), pos);
      Vector3f::Vector3f((Vector3f *const)(v5 + 128));
      ProjectPointToPoly2DLocal(
        (const Vector3f *)(v5 + 96),
        *(const NavMeshPoly **)(v5 + 64),
        *(const NavMeshTile **)(v5 + 32),
        (Vector3f *)(v5 + 128));
      v10 = *(Vector3f **)(v5 + 32);
      if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) )
      {
        v10 = closest;
        __asan_report_store_n(closest, 12LL);
      }
      *closest = TileToWorld((const NavMeshTile *)v10, (const Vector3f *)(v5 + 128));
      result = 0x40000000;
    }
  }
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 372: range 000000000CC4C4A6-000000000CC4CD05
bool __cdecl ProjectToPolyDetail(const NavMeshTile *tile, const NavMeshPoly *poly, const Vector3f *pos, float *height)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r13
  __int64 v8; // rsi
  const NavMeshPolyDetailIndex *detailTris; // rcx
  __int64 v10; // r14
  Vector3f *v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int16 v13; // cx
  char v14; // dl
  const Vector3f *verts; // rsi
  unsigned __int64 v16; // rcx
  int v17; // ecx
  char v18; // dl
  unsigned __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rax
  const Vector3f *detailVerts; // rsi
  int vertBase; // edi
  unsigned __int64 v24; // rcx
  int v25; // ecx
  unsigned __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // rax
  int v29; // xmm0_4
  bool result; // al
  int j; // [rsp+34h] [rbp-CCh]
  int k; // [rsp+38h] [rbp-C8h]
  unsigned int ip_0; // [rsp+3Ch] [rbp-C4h]
  const NavMeshPolyDetail *pd; // [rsp+40h] [rbp-C0h]
  const NavMeshPolyDetailIndex *t; // [rsp+48h] [rbp-B8h]
  char v40[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 128);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 4 5 h:386 48 36 5 v:378";
  *(_QWORD *)(v4 + 16) = ProjectToPolyDetail;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862722] = -217841664;
  v7[536862723] = -202116109;
  ip_0 = GetPolyIndex(tile, poly);
  if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->detailMeshes, poly);
  pd = &tile->detailMeshes[ip_0];
  for ( j = 0; ; ++j )
  {
    v8 = (((_BYTE)pd + 10) & 7u) + 1;
    if ( *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&pd->triCount);
    }
    if ( j >= pd->triCount )
    {
      result = 0;
      goto LABEL_55;
    }
    if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->detailTris, v8);
    detailTris = tile->detailTris;
    if ( *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pd->triBase);
    }
    t = &detailTris[4 * (pd->triBase + j)];
    v10 = 2LL;
    v11 = (Vector3f *)(v4 + 48);
    while ( v10 >= 0 )
    {
      Vector3f::Vector3f(v11++);
      --v10;
    }
    for ( k = 0; k <= 2; ++k )
    {
      v12 = (unsigned __int64)&t[k];
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&t[k]);
      }
      v13 = *(_WORD *)v12;
      v14 = *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v14 != 0;
      if ( v14 != 0 && (((unsigned __int8)poly + 28) & 7) >= v14 )
        __asan_report_load1(&poly->vertCount);
      if ( v13 >= poly->vertCount )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->detailVerts, v8);
        detailVerts = tile->detailVerts;
        if ( *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pd & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(pd);
        }
        vertBase = pd->vertBase;
        v24 = (unsigned __int64)&t[k];
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        {
          vertBase = 2 * k + (_DWORD)t;
          __asan_report_load2(&t[k]);
        }
        v25 = *(unsigned __int16 *)v24;
        if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
        {
          vertBase = (_DWORD)poly + 28;
          __asan_report_load1(&poly->vertCount);
        }
        v26 = (unsigned __int64)&detailVerts[vertBase + v25 - (unsigned int)poly->vertCount];
        v27 = *(_BYTE *)(((v4 + 48 + 12LL * k) >> 3) + 0x7FFF8000);
        if ( (char)((v4 + 48 + 12 * k) & 7) >= v27 && v27 != 0
          || *(_BYTE *)(((v4 + 48 + 12LL * k + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 48 + 12 * k + 11) & 7) >= *(_BYTE *)(((v4 + 48 + 12LL * k + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 48 + 12LL * k, 12LL);
        }
        v8 = ((_DWORD)v26 + 11) & 7;
        if ( (char)(v26 & 7) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) && *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v26 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v26 + 11) & 7) >= *(_BYTE *)(((v26 + 11) >> 3) + 0x7FFF8000) )
        {
          v8 = 12LL;
          __asan_report_load_n(v26, 12LL);
        }
        v28 = (__int64)&v6[12 * k - 80];
        *(_QWORD *)v28 = *(_QWORD *)v26;
        *(_DWORD *)(v28 + 8) = *(_DWORD *)(v26 + 8);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->verts, v8);
        verts = tile->verts;
        v16 = (unsigned __int64)&t[k];
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(&t[k]);
        }
        v17 = *(unsigned __int16 *)v16;
        v18 = *(_BYTE *)(((unsigned __int64)&poly->verts[v17] >> 3) + 0x7FFF8000);
        if ( v18 != 0 && (char)(((2 * v17 + (_BYTE)poly) & 7) + 1) >= v18 )
          __asan_report_load2(&poly->verts[v17]);
        v19 = (unsigned __int64)&verts[poly->verts[v17]];
        v20 = *(_BYTE *)(((v4 + 48 + 12LL * k) >> 3) + 0x7FFF8000);
        if ( (char)((v4 + 48 + 12 * k) & 7) >= v20 && v20 != 0
          || *(_BYTE *)(((v4 + 48 + 12LL * k + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 48 + 12 * k + 11) & 7) >= *(_BYTE *)(((v4 + 48 + 12LL * k + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 48 + 12LL * k, 12LL);
        }
        v8 = ((_DWORD)v19 + 11) & 7;
        if ( (char)(v19 & 7) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v19 + 11) & 7) >= *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) )
        {
          v8 = 12LL;
          __asan_report_load_n(v19, 12LL);
        }
        v21 = (__int64)&v6[12 * k - 80];
        *(_QWORD *)v21 = *(_QWORD *)v19;
        *(_DWORD *)(v21 + 8) = *(_DWORD *)(v19 + 8);
      }
    }
    if ( ClosestHeightPointTriangle(
           (float *)(v4 + 32),
           pos,
           (const Vector3f *)(v4 + 48),
           (const Vector3f *)(v4 + 60),
           (const Vector3f *)(v4 + 72)) )
    {
      break;
    }
  }
  v29 = *(_DWORD *)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(height);
  }
  *(_DWORD *)height = v29;
  result = 1;
LABEL_55:
  if ( v40 == (char *)v4 )
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

// Line 398: range 000000000CC4CD06-000000000CC4D6C0
float __cdecl ProjectToPolyDetailEdge(const NavMeshTile *tile, const NavMeshPoly *poly, const Vector3f *pos)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  char *v5; // rbx
  _DWORD *v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rsi
  const NavMeshPolyDetailIndex *detailTris; // rcx
  __int64 v10; // r14
  Vector3f *v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int16 v13; // cx
  char v14; // dl
  const Vector3f *verts; // rsi
  unsigned __int64 v16; // rcx
  int v17; // ecx
  char v18; // dl
  unsigned __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rax
  const Vector3f *detailVerts; // rsi
  int vertBase; // edi
  unsigned __int64 v24; // rcx
  int v25; // ecx
  unsigned __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // rax
  float v29; // xmm1_4
  char v30; // dl
  double v31; // xmm0_8
  char v32; // dl
  float v33; // xmm2_4
  float v34; // xmm1_4
  int v35; // eax
  float result; // xmm0_4
  float dmin; // [rsp+20h] [rbp-E0h]
  int h; // [rsp+24h] [rbp-DCh]
  int j; // [rsp+28h] [rbp-D8h]
  int k; // [rsp+2Ch] [rbp-D4h]
  int kp; // [rsp+30h] [rbp-D0h]
  int k_0; // [rsp+34h] [rbp-CCh]
  unsigned int ip_0; // [rsp+38h] [rbp-C8h]
  float d; // [rsp+3Ch] [rbp-C4h]
  const NavMeshPolyDetail *pd; // [rsp+40h] [rbp-C0h]
  const NavMeshPolyDetailIndex *t; // [rsp+48h] [rbp-B8h]
  char v50[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 128);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 6 tt:418 48 36 5 v:407";
  *(_QWORD *)(v3 + 16) = ProjectToPolyDetailEdge;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = -217841664;
  v6[536862723] = -202116109;
  ip_0 = GetPolyIndex(tile, poly);
  if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->detailMeshes, poly);
  pd = &tile->detailMeshes[ip_0];
  dmin = 3.4028235e38;
  v7 = (__m128i)0x7F7FFFFFu;
  *(float *)&h = 3.4028235e38;
  for ( j = 0; ; ++j )
  {
    v8 = (((_BYTE)pd + 10) & 7u) + 1;
    if ( *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&pd->triCount);
    }
    if ( j >= pd->triCount )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->detailTris, v8);
    detailTris = tile->detailTris;
    if ( *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) )
    {
      *(double *)v7.m128i_i64 = __asan_report_load4(&pd->triBase);
    }
    t = &detailTris[4 * (pd->triBase + j)];
    v10 = 2LL;
    v11 = (Vector3f *)(v3 + 48);
    while ( v10 >= 0 )
    {
      Vector3f::Vector3f(v11++);
      --v10;
    }
    for ( k = 0; k <= 2; ++k )
    {
      v12 = (unsigned __int64)&t[k];
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&t[k]);
      }
      v13 = *(_WORD *)v12;
      v14 = *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v14 != 0;
      if ( v14 != 0 && (((unsigned __int8)poly + 28) & 7) >= v14 )
        __asan_report_load1(&poly->vertCount);
      if ( v13 >= poly->vertCount )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->detailVerts, v8);
        detailVerts = tile->detailVerts;
        if ( *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pd & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) )
        {
          *(double *)v7.m128i_i64 = __asan_report_load4(pd);
        }
        vertBase = pd->vertBase;
        v24 = (unsigned __int64)&t[k];
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        {
          vertBase = 2 * k + (_DWORD)t;
          __asan_report_load2(&t[k]);
        }
        v25 = *(unsigned __int16 *)v24;
        if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
        {
          vertBase = (_DWORD)poly + 28;
          __asan_report_load1(&poly->vertCount);
        }
        v26 = (unsigned __int64)&detailVerts[vertBase + v25 - (unsigned int)poly->vertCount];
        v27 = *(_BYTE *)(((v3 + 48 + 12LL * k) >> 3) + 0x7FFF8000);
        if ( (char)((v3 + 48 + 12 * k) & 7) >= v27 && v27 != 0
          || *(_BYTE *)(((v3 + 48 + 12LL * k + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 48 + 12 * k + 11) & 7) >= *(_BYTE *)(((v3 + 48 + 12LL * k + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48 + 12LL * k, 12LL);
        }
        v8 = ((_DWORD)v26 + 11) & 7;
        if ( (char)(v26 & 7) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) && *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v26 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v26 + 11) & 7) >= *(_BYTE *)(((v26 + 11) >> 3) + 0x7FFF8000) )
        {
          v8 = 12LL;
          __asan_report_load_n(v26, 12LL);
        }
        v28 = (__int64)&v5[12 * k - 80];
        *(_QWORD *)v28 = *(_QWORD *)v26;
        *(_DWORD *)(v28 + 8) = *(_DWORD *)(v26 + 8);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->verts, v8);
        verts = tile->verts;
        v16 = (unsigned __int64)&t[k];
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(&t[k]);
        }
        v17 = *(unsigned __int16 *)v16;
        v18 = *(_BYTE *)(((unsigned __int64)&poly->verts[v17] >> 3) + 0x7FFF8000);
        if ( v18 != 0 && (char)(((2 * v17 + (_BYTE)poly) & 7) + 1) >= v18 )
          __asan_report_load2(&poly->verts[v17]);
        v19 = (unsigned __int64)&verts[poly->verts[v17]];
        v20 = *(_BYTE *)(((v3 + 48 + 12LL * k) >> 3) + 0x7FFF8000);
        if ( (char)((v3 + 48 + 12 * k) & 7) >= v20 && v20 != 0
          || *(_BYTE *)(((v3 + 48 + 12LL * k + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 48 + 12 * k + 11) & 7) >= *(_BYTE *)(((v3 + 48 + 12LL * k + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 48 + 12LL * k, 12LL);
        }
        v8 = ((_DWORD)v19 + 11) & 7;
        if ( (char)(v19 & 7) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v19 + 11) & 7) >= *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) )
        {
          v8 = 12LL;
          __asan_report_load_n(v19, 12LL);
        }
        v21 = (__int64)&v5[12 * k - 80];
        *(_QWORD *)v21 = *(_QWORD *)v19;
        *(_DWORD *)(v21 + 8) = *(_DWORD *)(v19 + 8);
      }
    }
    kp = 2;
    for ( k_0 = 0; k_0 <= 2; ++k_0 )
    {
      *(float *)v7.m128i_i32 = SqrDistancePointSegment2D(
                                 (float *)(v3 + 32),
                                 pos,
                                 (const Vector3f *)(v3 + 48 + 12LL * kp),
                                 (const Vector3f *)(12LL * k_0 + v3 + 48));
      d = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
      v7 = (__m128i)LODWORD(dmin);
      if ( dmin > d )
      {
        dmin = d;
        v29 = *(float *)(v3 + 32);
        v30 = *(_BYTE *)(((v3 + 48 + 12LL * k_0 + 4) >> 3) + 0x7FFF8000);
        if ( v30 != 0 && (char)(((v3 + 48 + 12 * k_0 + 4) & 7) + 3) >= v30 )
          __asan_report_load4(v3 + 48 + 12LL * k_0 + 4);
        LODWORD(v31) = *(_DWORD *)&v5[12 * k_0 - 76];
        v32 = *(_BYTE *)(((v3 + 48 + 12LL * kp + 4) >> 3) + 0x7FFF8000);
        if ( v32 != 0 && (char)(((v3 + 48 + 12 * kp + 4) & 7) + 3) >= v32 )
          v31 = __asan_report_load4(v3 + 48 + 12LL * kp + 4);
        v33 = v29;
        v34 = *(float *)&v31;
        v7 = _mm_cvtsi32_si128(*(_DWORD *)&v5[12 * kp - 76]);
        *(float *)v7.m128i_i32 = Lerp(*(float *)v7.m128i_i32, v34, v33);
        *(float *)&h = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
      }
      v35 = k_0;
      kp = v35;
    }
  }
  result = *(float *)&h;
  if ( v50 == (char *)v3 )
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

// Line 431: range 000000000CC4D6C2-000000000CC4DE03
NavMeshStatus __cdecl NavMeshQuery::GetPolyHeightLocal(
        const NavMeshQuery *const this,
        NavMeshPolyRef ref,
        const Vector3f *pos,
        float *height)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __m128i v8; // xmm0
  int v9; // ecx
  __m128i v10; // xmm0
  int v11; // ecx
  NavMeshStatus result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  int v14; // ecx
  const NavMeshQuery *thisa; // [rsp+18h] [rbp-F8h]
  float d0_0; // [rsp+28h] [rbp-E8h]
  float u_0; // [rsp+30h] [rbp-E0h]
  float d0; // [rsp+34h] [rbp-DCh]
  float u; // [rsp+3Ch] [rbp-D4h]
  const OffMeshConnection *con; // [rsp+40h] [rbp-D0h]
  const DynamicOffMeshConnection *dcon; // [rsp+48h] [rbp-C8h]
  char v24[192]; // [rsp+50h] [rbp-C0h] BYREF

  thisa = this;
  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)160;
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 8 tile:466 64 8 8 poly:467 96 12 6 v0:453 128 12 6 v1:454";
  *(_QWORD *)(v5 + 16) = NavMeshQuery::GetPolyHeightLocal;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -219020288;
  v7[536862724] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, ref);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x1B0u,
      "NavMeshStatus NavMeshQuery::GetPolyHeightLocal(NavMeshPolyRef, const Vector3f&, float*) const");
  }
  if ( !height )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "height",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x1B1u,
      "NavMeshStatus NavMeshQuery::GetPolyHeightLocal(NavMeshPolyRef, const Vector3f&, float*) const");
  }
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, ref);
    con = DynamicNavMesh::GetOffMeshConnection(thisa->m_NavMesh, ref);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, ref);
      dcon = DynamicNavMesh::GetDynamicOffMeshConnection(thisa->m_NavMesh, ref);
      if ( dcon )
      {
        if ( (((unsigned __int8)dcon + 12) & 7) >= *(_BYTE *)(((unsigned __int64)dcon->endPoints[0].mapped >> 3)
                                                            + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)dcon->endPoints[0].mapped >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&dcon->endPoints[0].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dcon + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&dcon->endPoints[0].mapped[0].z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load_n(dcon->endPoints[0].mapped, 12LL);
        }
        *(_QWORD *)(v5 + 96) = *(_QWORD *)&dcon->endPoints[0].mapped[0].x;
        *(float *)(v5 + 104) = dcon->endPoints[0].mapped[0].z;
        if ( (((unsigned __int8)dcon + 60) & 7) >= *(_BYTE *)(((unsigned __int64)dcon->endPoints[1].mapped >> 3)
                                                            + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)dcon->endPoints[1].mapped >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&dcon->endPoints[1].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dcon + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&dcon->endPoints[1].mapped[0].z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load_n(dcon->endPoints[1].mapped, 12LL);
        }
        *(_QWORD *)(v5 + 128) = *(_QWORD *)&dcon->endPoints[1].mapped[0].x;
        *(float *)(v5 + 136) = dcon->endPoints[1].mapped[0].z;
        *(float *)v4.m128i_i32 = Distance(pos, (const Vector3f *)(v5 + 96));
        d0 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
        *(float *)v4.m128i_i32 = Distance(pos, (const Vector3f *)(v5 + 128));
        u = d0 / (float)(d0 + COERCE_FLOAT(_mm_cvtsi128_si32(v4)));
        v8 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 100));
        *(float *)v8.m128i_i32 = Lerp(*(float *)v8.m128i_i32, *(float *)(v5 + 132), u);
        v9 = _mm_cvtsi128_si32(v8);
        if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(height);
        }
        *(_DWORD *)height = v9;
      }
      else
      {
        if ( (((unsigned __int8)con + 44) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3)
                                                           + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)con + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_load_n(con->endPoints[0].mapped, 12LL);
        }
        *(_QWORD *)(v5 + 96) = *(_QWORD *)&con->endPoints[0].mapped[0].x;
        *(float *)(v5 + 104) = con->endPoints[0].mapped[0].z;
        if ( (((unsigned __int8)con + 92) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3)
                                                           + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)con + 103) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load_n(con->endPoints[1].mapped, 12LL);
        }
        *(_QWORD *)(v5 + 128) = *(_QWORD *)&con->endPoints[1].mapped[0].x;
        *(float *)(v5 + 136) = con->endPoints[1].mapped[0].z;
        *(float *)v4.m128i_i32 = Distance(pos, (const Vector3f *)(v5 + 96));
        d0_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
        *(float *)v4.m128i_i32 = Distance(pos, (const Vector3f *)(v5 + 128));
        u_0 = d0_0 / (float)(d0_0 + COERCE_FLOAT(_mm_cvtsi128_si32(v4)));
        v10 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 100));
        *(float *)v10.m128i_i32 = Lerp(*(float *)v10.m128i_i32, *(float *)(v5 + 132), u_0);
        v11 = _mm_cvtsi128_si32(v10);
        if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(height);
        }
        *(_DWORD *)height = v11;
      }
      result = 0x40000000;
      goto LABEL_41;
    }
LABEL_40:
    result = -2147483640;
    goto LABEL_41;
  }
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, ref);
  TileAndPolyByRef = DynamicNavMesh::GetTileAndPolyByRef(
                       thisa->m_NavMesh,
                       ref,
                       (const NavMeshTile **)(v5 + 32),
                       (const NavMeshPoly **)(v5 + 64));
  if ( !NavMeshStatusSucceed(TileAndPolyByRef) )
    goto LABEL_40;
  if ( ProjectToPolyDetail(*(const NavMeshTile **)(v5 + 32), *(const NavMeshPoly **)(v5 + 64), pos, height) )
  {
    result = 0x40000000;
  }
  else
  {
    *(float *)v4.m128i_i32 = ProjectToPolyDetailEdge(
                               *(const NavMeshTile **)(v5 + 32),
                               *(const NavMeshPoly **)(v5 + 64),
                               pos);
    v14 = _mm_cvtsi128_si32(v4);
    if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(height);
    }
    *(_DWORD *)height = v14;
    result = 0x40000000;
  }
LABEL_41:
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 485: range 000000000CC4DE04-000000000CC4E74A
// local variable allocation has failed, the output may be wrong!
NavMeshStatus __cdecl NavMeshQuery::ProjectToPoly(
        const NavMeshQuery *const this,
        Vector3f *projPos,
        NavMeshPolyRef ref,
        const Vector3f *pos)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // xmm0_8
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __m128i v17; // xmm0
  NavMeshStatus result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  __int64 v20; // xmm0_8
  __int64 v21; // rax
  __m128i v22; // xmm0
  const NavMeshQuery *thisa; // [rsp+18h] [rbp-138h]
  float d0_0; // [rsp+28h] [rbp-128h]
  float u_0; // [rsp+30h] [rbp-120h]
  float d0; // [rsp+34h] [rbp-11Ch]
  float u; // [rsp+3Ch] [rbp-114h]
  const OffMeshConnection *con; // [rsp+40h] [rbp-110h]
  const Vector3f *dcon; // [rsp+48h] [rbp-108h]
  char v33[256]; // [rsp+50h] [rbp-100h] BYREF

  thisa = this;
  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)224;
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 15 localHeight:526 64 8 8 tile:521 96 8 8 poly:522 128 12 12 localPos:527 160 12 12 world"
                        "Pos:537 192 12 6 v1:500";
  *(_QWORD *)(v5 + 16) = NavMeshQuery::ProjectToPoly;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -219020288;
  v7[536862725] = -219020288;
  v7[536862726] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, projPos);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x1E6u,
      "NavMeshStatus NavMeshQuery::ProjectToPoly(Vector3f*, NavMeshPolyRef, const Vector3f&) const");
  }
  if ( !projPos )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "projPos",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x1E7u,
      "NavMeshStatus NavMeshQuery::ProjectToPoly(Vector3f*, NavMeshPolyRef, const Vector3f&) const");
  }
  if ( ((unsigned __int8)projPos & 7) >= *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)projPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(projPos, 12LL);
  }
  v8 = *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000);
  v9 = v8 != 0;
  if ( (((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v9 & ((((unsigned __int8)pos + 11) & 7) >= v8) )
  {
    v9 = 12LL;
    __asan_report_load_n(pos, 12LL);
  }
  *(_QWORD *)&projPos->x = *(_QWORD *)&pos->x;
  projPos->z = pos->z;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, v9);
    con = DynamicNavMesh::GetOffMeshConnection(thisa->m_NavMesh, ref);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, ref);
      dcon = (const Vector3f *)DynamicNavMesh::GetDynamicOffMeshConnection(thisa->m_NavMesh, ref);
      if ( dcon )
      {
        *(Vector3f *)((char *)&v4 - 8) = Lerp(dcon + 1, dcon + 2, 0.5);
        *(_QWORD *)(v5 + 160) = v10;
        *(_DWORD *)(v5 + 168) = v4.m128i_i32[0];
        *(Vector3f *)((char *)&v4 - 8) = Lerp(dcon + 5, dcon + 6, 0.5);
        v12 = v11;
        v13 = v4;
        *(_QWORD *)(v5 + 192) = v12;
        *(_DWORD *)(v5 + 200) = v4.m128i_i32[0];
        Distance(pos, (const Vector3f *)(v5 + 160));
        d0 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
        *(float *)v13.m128i_i32 = Distance(pos, (const Vector3f *)(v5 + 192));
        u = d0 / (float)(d0 + COERCE_FLOAT(_mm_cvtsi128_si32(v13)));
        if ( ((unsigned __int8)projPos & 7) >= *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)projPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(projPos, 12LL);
        }
        *projPos = Lerp((const Vector3f *)(v5 + 160), (const Vector3f *)(v5 + 192), u);
      }
      else
      {
        *(Vector3f *)((char *)&v4 - 8) = Lerp(con->endPoints[0].mapped, &con->endPoints[0].mapped[1], 0.5);
        *(_QWORD *)(v5 + 160) = v14;
        *(_DWORD *)(v5 + 168) = v4.m128i_i32[0];
        *(Vector3f *)((char *)&v4 - 8) = Lerp(con->endPoints[1].mapped, &con->endPoints[1].mapped[1], 0.5);
        v16 = v15;
        v17 = v4;
        *(_QWORD *)(v5 + 192) = v16;
        *(_DWORD *)(v5 + 200) = v4.m128i_i32[0];
        Distance(pos, (const Vector3f *)(v5 + 160));
        d0_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
        *(float *)v17.m128i_i32 = Distance(pos, (const Vector3f *)(v5 + 192));
        u_0 = d0_0 / (float)(d0_0 + COERCE_FLOAT(_mm_cvtsi128_si32(v17)));
        if ( ((unsigned __int8)projPos & 7) >= *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)projPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(projPos, 12LL);
        }
        *projPos = Lerp((const Vector3f *)(v5 + 160), (const Vector3f *)(v5 + 192), u_0);
      }
      result = 0x40000000;
      goto LABEL_39;
    }
LABEL_38:
    result = -2147483640;
    goto LABEL_39;
  }
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 96) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, v9);
  TileAndPolyByRef = DynamicNavMesh::GetTileAndPolyByRef(
                       thisa->m_NavMesh,
                       ref,
                       (const NavMeshTile **)(v5 + 64),
                       (const NavMeshPoly **)(v5 + 96));
  if ( !NavMeshStatusSucceed(TileAndPolyByRef) )
    goto LABEL_38;
  *(Vector3f *)((char *)&v4 - 8) = WorldToTile((const NavMeshTile *)*(_QWORD *)(v5 + 64), pos);
  v21 = v20;
  v22 = v4;
  *(_QWORD *)(v5 + 128) = v21;
  *(_DWORD *)(v5 + 136) = v4.m128i_i32[0];
  if ( ProjectToPolyDetail(
         *(const NavMeshTile **)(v5 + 64),
         *(const NavMeshPoly **)(v5 + 96),
         (const Vector3f *)(v5 + 128),
         (float *)(v5 + 48)) )
  {
    Vector3f::Vector3f((Vector3f *const)(v5 + 192), *(float *)(v5 + 128), *(float *)(v5 + 48), *(float *)(v5 + 136));
    *(Vector3f *)(v5 + 160) = TileToWorld((const NavMeshTile *)*(_QWORD *)(v5 + 64), (const Vector3f *)(v5 + 192));
    if ( ((unsigned __int8)projPos & 7) >= *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)projPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(projPos, 12LL);
    }
    *(_QWORD *)&projPos->x = *(_QWORD *)(v5 + 160);
    projPos->z = *(float *)(v5 + 168);
    result = 0x40000000;
  }
  else
  {
    *(float *)v22.m128i_i32 = ProjectToPolyDetailEdge(
                                *(const NavMeshTile **)(v5 + 64),
                                *(const NavMeshPoly **)(v5 + 96),
                                (const Vector3f *)(v5 + 128));
    *(_DWORD *)(v5 + 48) = _mm_cvtsi128_si32(v22);
    Vector3f::Vector3f((Vector3f *const)(v5 + 192), *(float *)(v5 + 128), *(float *)(v5 + 48), *(float *)(v5 + 136));
    *(Vector3f *)(v5 + 160) = TileToWorld((const NavMeshTile *)*(_QWORD *)(v5 + 64), (const Vector3f *)(v5 + 192));
    if ( ((unsigned __int8)projPos & 7) >= *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)projPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)projPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&projPos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(projPos, 12LL);
    }
    *(_QWORD *)&projPos->x = *(_QWORD *)(v5 + 160);
    projPos->z = *(float *)(v5 + 168);
    result = 0x40000000;
  }
LABEL_39:
  if ( v33 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 549: range 000000000CC4F10A-000000000CC4F8D8
void __cdecl NavMeshQuery::FindNearestPoly(
        const NavMeshQuery *const this,
        const Vector3f *center,
        const Vector3f *extents,
        const QueryFilter *filter,
        NavMeshPolyRef *nearestRef,
        Vector3f *nearestPt)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  char *v8; // rbx
  _DWORD *v9; // r12
  const DynamicNavMesh *m_NavMesh; // r14
  int TypeID; // eax
  const DynamicNavMesh *v12; // rax
  double v13; // xmm1_8
  double v14; // xmm7_8
  double v15; // xmm6_8
  double z; // xmm5_8
  double y; // xmm4_8
  double x; // xmm3_8
  double v19; // xmm2_8
  double v20; // xmm8_8
  const Vector3f *centera; // [rsp+30h] [rbp-180h]
  const NavMeshQuery *thisa; // [rsp+38h] [rbp-178h]
  int inside; // [rsp+4Ch] [rbp-164h]
  NavMeshPolyRef ref; // [rsp+50h] [rbp-160h]
  const NavMeshTile *tile; // [rsp+58h] [rbp-158h]
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-150h] BYREF
  char v31[304]; // [rsp+80h] [rbp-130h] BYREF

  thisa = this;
  centera = center;
  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)256;
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  v8 = (char *)(v6 + 256);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 12 9 point:616 64 24 10 bounds:615 128 96 11 nearest:610";
  *(_QWORD *)(v6 + 16) = NavMeshQuery::FindNearestPoly;
  v9 = (_DWORD *)(v6 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219020288;
  v9[536862722] = -234881024;
  v9[536862723] = -218959118;
  v9[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, center);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x226u,
      "void NavMeshQuery::FindNearestPoly(const Vector3f&, const Vector3f&, const QueryFilter*, NavMeshPolyRef*, Vector3f*) const");
  }
  if ( !nearestRef )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "nearestRef",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x227u,
      "void NavMeshQuery::FindNearestPoly(const Vector3f&, const Vector3f&, const QueryFilter*, NavMeshPolyRef*, Vector3f*) const");
  }
  if ( !nearestPt )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "nearestPt",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x228u,
      "void NavMeshQuery::FindNearestPoly(const Vector3f&, const Vector3f&, const QueryFilter*, NavMeshPolyRef*, Vector3f*) const");
  }
  if ( QueryFilter::GetBindingSurfaceId(filter) < 0 )
  {
    __asan_handle_no_return(filter);
    __assert_fail(
      "filter->GetBindingSurfaceId() >= 0",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x25Fu,
      "void NavMeshQuery::FindNearestPoly(const Vector3f&, const Vector3f&, const QueryFilter*, NavMeshPolyRef*, Vector3f*) const");
  }
  NavMeshQuery::FindNearestPoly(Vector3f const&,Vector3f const&,QueryFilter const*,unsigned long long *,Vector3f*)const::NearestQuery::NearestQuery(
    (NavMeshQuery::FindNearestPoly::NearestQuery *const)(v6 + 128),
    thisa,
    filter,
    center);
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, thisa);
  m_NavMesh = thisa->m_NavMesh;
  TypeID = QueryFilter::GetTypeID(filter);
  DynamicNavMesh::QueryPolygons(m_NavMesh, TypeID, center, extents, (NavMeshProcessCallback *)(v6 + 128));
  AABB::AABB((AABB *const)(v6 + 64), center, extents);
  Vector3f::Vector3f((Vector3f *const)(v6 + 32));
  ref = 0LL;
  for ( inside = 0; inside <= 1; ++inside )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, center);
    v12 = thisa->m_NavMesh;
    if ( *(_BYTE *)(((8 * (inside + 6LL) + v6 + 128 + 8) >> 3) + 0x7FFF8000) )
      v12 = (const DynamicNavMesh *)__asan_report_load8(8 * (inside + 6LL) + v6 + 128 + 8, center);
    center = *(const Vector3f **)&v8[8 * inside - 72];
    tile = DynamicNavMesh::GetTileByRef(v12, (NavMeshTileRef)center);
    if ( tile )
    {
      *(Vector3f *)(v6 + 32) = TileToWorld(tile, (const Vector3f *)(v6 + 128 + 12LL * inside + 64 + 8));
      center = (const Vector3f *)(v6 + 32);
      if ( AABB::IsInside((const AABB *const)(v6 + 64), (const Vector3f *)(v6 + 32)) )
      {
        if ( *(_BYTE *)(((8 * (inside + 6LL) + v6 + 128 + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(8 * (inside + 6LL) + v6 + 128 + 8, center);
        ref = *(_QWORD *)&v8[8 * inside - 72];
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
          "FindNearestPoly",
          626);
        v13 = *(float *)(v6 + 40);
        v14 = *(float *)(v6 + 36);
        v15 = *(float *)(v6 + 32);
        if ( *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)extents + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&extents->z);
        }
        z = extents->z;
        if ( *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)extents + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&extents->y);
        }
        y = extents->y;
        if ( *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)extents & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(extents);
        }
        x = extents->x;
        if ( *(_BYTE *)(((unsigned __int64)&centera->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)centera + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&centera->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&centera->z);
        }
        v19 = centera->z;
        if ( *(_BYTE *)(((unsigned __int64)&centera->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)centera + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&centera->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&centera->y);
        }
        v20 = centera->y;
        if ( *(_BYTE *)(((unsigned __int64)centera >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)centera & 7) + 3) >= *(_BYTE *)(((unsigned __int64)centera >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(centera);
        }
        center = (const Vector3f *)"[query path] target[%.4f,%.4f,%.4f] extents[%.4f,%.4f,%.4f]  checkpoint[%.4f,%.4f,%.4f]";
        common::milog::MiLogStream::operator()(
          &v30,
          "[query path] target[%.4f,%.4f,%.4f] extents[%.4f,%.4f,%.4f]  checkpoint[%.4f,%.4f,%.4f]",
          centera->x,
          v20,
          v19,
          x,
          y,
          z,
          v15,
          v14,
          *(_QWORD *)&v13);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)nearestRef >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *nearestRef = ref;
  if ( ref )
  {
    if ( ((unsigned __int8)nearestPt & 7) >= *(_BYTE *)(((unsigned __int64)nearestPt >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)nearestPt >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&nearestPt->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)nearestPt + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&nearestPt->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(nearestPt, 12LL);
    }
    *(_QWORD *)&nearestPt->x = *(_QWORD *)(v6 + 32);
    nearestPt->z = *(float *)(v6 + 40);
  }
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
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
};

// Line 564: range 000000000CC4E74C-000000000CC4EA2E
void __cdecl NavMeshQuery::FindNearestPoly(Vector3f const&,Vector3f const&,QueryFilter const*,unsigned long long *,Vector3f*)const::NearestQuery::NearestQuery(
        NavMeshQuery::FindNearestPoly::NearestQuery *const this,
        const NavMeshQuery *navMeshQuery,
        const QueryFilter *filter,
        const Vector3f *center)
{
  int (**v4)(...); // rcx
  __int64 v5; // rbx
  Vector3f *m_LocalPoint; // r12

  NavMeshProcessCallback::NavMeshProcessCallback(this);
  v4 = (int (**)(...))&off_1EFB0050;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshProcessCallback = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshMeshQuery = navMeshQuery;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Filter = filter;
  if ( *(char *)(((unsigned __int64)&this->m_Center >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Center, 12LL);
  }
  if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(center, 12LL);
  }
  this->m_Center = *center;
  v5 = 1LL;
  m_LocalPoint = this->m_LocalPoint;
  while ( v5 >= 0 )
  {
    Vector3f::Vector3f(m_LocalPoint++);
    --v5;
  }
  if ( *(_BYTE *)(((unsigned __int64)this->m_DistanceSqr >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->m_DistanceSqr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->m_DistanceSqr);
  }
  this->m_DistanceSqr[0] = 3.4028235e38;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DistanceSqr[1] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_DistanceSqr[1] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_DistanceSqr[1]);
  }
  this->m_DistanceSqr[1] = 3.4028235e38;
  if ( *(_BYTE *)(((unsigned __int64)this->m_PolyRef >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_PolyRef[0] = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_PolyRef[1] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_PolyRef[1] = 0LL;
  Vector3f::SetZero(this->m_LocalPoint);
  Vector3f::SetZero(&this->m_LocalPoint[1]);
};

// Line 577: range 000000000CC4EA30-000000000CC4F109
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMeshQuery::FindNearestPoly(Vector3f const&,Vector3f const&,QueryFilter const*,unsigned long long *,Vector3f*)const::NearestQuery::ProcessPolygons(
        NavMeshQuery::FindNearestPoly::NearestQuery *const this,
        const NavMeshTile *tile,
        const NavMeshPolyRef *polyRefs,
        const NavMeshPoly **polys,
        const int itemCount)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  char *v8; // rbx
  _DWORD *v9; // r13
  Vector3f *p_m_Center; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  const QueryFilter *m_Filter; // rcx
  int BindingSurfaceId; // ecx
  char v15; // al
  char v16; // al
  __int64 v17; // xmm0_8
  __m128i v18; // xmm0
  _BOOL4 v19; // ecx
  char v20; // dl
  _BOOL4 v21; // ecx
  char v22; // dl
  _BOOL4 v23; // ecx
  char v24; // dl
  bool v25; // r8
  char v26; // dl
  char *v27; // rax
  _BOOL4 v28; // ecx
  char v29; // dl
  float v30; // xmm0_4
  char v31; // dl
  int v32; // eax
  bool inside; // [rsp+37h] [rbp-C9h]
  float t; // [rsp+38h] [rbp-C8h] BYREF
  int item; // [rsp+3Ch] [rbp-C4h]
  NavMeshPolyRef ref; // [rsp+40h] [rbp-C0h]
  const NavMeshPoly *poly; // [rsp+48h] [rbp-B8h]
  Vector3f inV; // [rsp+54h] [rbp-ACh] BYREF
  char v43[160]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  v8 = (char *)(v6 + 128);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 8 5 d:593 64 12 17 localPosition:579 96 12 17 closestPtPoly:588";
  *(_QWORD *)(v6 + 16) = NavMeshQuery::FindNearestPoly(Vector3f const&,Vector3f const&,QueryFilter const*,unsigned long long *,Vector3f*)const::NearestQuery::ProcessPolygons;
  v9 = (_DWORD *)(v6 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218959360;
  v9[536862722] = -219020288;
  v9[536862723] = -202177536;
  p_m_Center = &this->m_Center;
  *(Vector3f *)(v6 + 64) = WorldToTile(tile, &this->m_Center);
  for ( item = 0; item < itemCount; ++item )
  {
    v11 = (unsigned __int64)&polyRefs[item];
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(&polyRefs[item], p_m_Center);
    ref = *(_QWORD *)v11;
    v12 = (unsigned __int64)&polys[item];
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(&polys[item], p_m_Center);
    poly = *(const NavMeshPoly **)v12;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Filter, p_m_Center);
    m_Filter = this->m_Filter;
    if ( *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)poly + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&poly->flags);
    }
    p_m_Center = (Vector3f *)poly->flags;
    if ( !QueryFilter::PassFilter(m_Filter, (unsigned int)p_m_Center) )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Filter, p_m_Center);
    if ( !QueryFilter::GetBindingSurfaceId(this->m_Filter) )
      goto LABEL_24;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Filter, p_m_Center);
    BindingSurfaceId = QueryFilter::GetBindingSurfaceId(this->m_Filter);
    v15 = *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000);
    LOBYTE(p_m_Center) = v15 != 0;
    if ( v15 != 0 && v15 <= 1 )
      __asan_report_load2(tile);
    if ( BindingSurfaceId != tile->surfaceID )
LABEL_23:
      v16 = 1;
    else
LABEL_24:
      v16 = 0;
    if ( !v16 )
    {
      Vector3f::Vector3f((Vector3f *const)(v6 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshMeshQuery >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMeshMeshQuery, p_m_Center);
      inside = NavMeshQuery::ClosestPointOnPolyInTileLocal(
                 this->m_NavMeshMeshQuery,
                 tile,
                 poly,
                 ref,
                 (const Vector3f *)(v6 + 64),
                 (Vector3f *)(v6 + 96));
      p_m_Center = (Vector3f *)(v6 + 96);
      *(Vector3f *)((char *)&v5 - 8) = operator-((const Vector3f *)(v6 + 64), (const Vector3f *)(v6 + 96));
      *(_QWORD *)&inV.x = v17;
      LODWORD(inV.z) = v5.m128i_i32[0];
      SqrMagnitude(&inV);
      *(_DWORD *)(v6 + 32) = _mm_cvtsi128_si32(v5);
      v18 = (__m128i)*(unsigned int *)(v6 + 68);
      t = *(float *)v18.m128i_i32 - *(float *)(v6 + 100);
      *(float *)v18.m128i_i32 = Sqr<float>(&t);
      *(_DWORD *)(v6 + 36) = _mm_cvtsi128_si32(v18);
      v19 = inside;
      v20 = *(_BYTE *)(((4LL * inside + v6 + 32) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((4 * inside + v6 + 32) & 7) + 3) >= v20 )
        __asan_report_load4(4LL * inside + v6 + 32);
      v5 = (__m128i)*(unsigned int *)&v8[4 * v19 - 96];
      v21 = inside;
      v22 = *(_BYTE *)(((unsigned __int64)&this->m_DistanceSqr[inside] >> 3) + 0x7FFF8000);
      LOBYTE(p_m_Center) = v22 != 0;
      if ( v22 != 0 && (char)(((4 * (inside + 8) + (_BYTE)this + 12) & 7) + 3) >= v22 )
        __asan_report_load4(&this->m_DistanceSqr[inside]);
      if ( this->m_DistanceSqr[v21] > *(float *)v5.m128i_i32 )
      {
        v23 = inside;
        v24 = *(_BYTE *)(((unsigned __int64)&this->m_LocalPoint[inside] >> 3) + 0x7FFF8000);
        v25 = ((12 * inside + 64 + (unsigned __int8)this + 8) & 7) >= v24 && v24 != 0;
        v26 = *(_BYTE *)((((unsigned __int64)&this->m_LocalPoint[inside].z + 3) >> 3) + 0x7FFF8000);
        if ( v25 || v26 != 0 && ((12 * inside + 64 + (unsigned __int8)this + 19) & 7) >= v26 )
          __asan_report_store_n(&this->m_LocalPoint[inside], 12LL);
        v27 = (char *)&this->m_PolyRef[1] + 12 * v23;
        *((_QWORD *)v27 + 1) = *(_QWORD *)(v6 + 96);
        *((_DWORD *)v27 + 4) = *(_DWORD *)(v6 + 104);
        p_m_Center = (Vector3f *)inside;
        v28 = inside;
        v29 = *(_BYTE *)(((4LL * inside + v6 + 32) >> 3) + 0x7FFF8000);
        if ( v29 != 0 && (char)(((4 * inside + v6 + 32) & 7) + 3) >= v29 )
          __asan_report_load4(4LL * inside + v6 + 32);
        v30 = *(float *)&v8[4 * inside - 96];
        v31 = *(_BYTE *)(((unsigned __int64)&this->m_DistanceSqr[v28] >> 3) + 0x7FFF8000);
        LOBYTE(p_m_Center) = v31 != 0;
        if ( v31 != 0 && (char)(((4 * (v28 + 8) + (_BYTE)this + 12) & 7) + 3) >= v31 )
          __asan_report_store4(&this->m_DistanceSqr[v28]);
        this->m_DistanceSqr[v28] = v30;
        v32 = inside;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_PolyRef[inside] >> 3) + 0x7FFF8000) )
          v32 = __asan_report_store8();
        this->m_PolyRef[v32] = ref;
      }
    }
  }
  if ( v43 == (char *)v6 )
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
};

// Line 643: range 000000000CC4FC62-000000000CC4FE4F
void __cdecl NavMeshQuery::QueryPolygons(
        const NavMeshQuery *const this,
        const Vector3f *center,
        const Vector3f *extents,
        const QueryFilter *filter,
        NavMeshPolyRef *polys,
        int *polyCount,
        const int maxPolys)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  const DynamicNavMesh *m_NavMesh; // r14
  int TypeID; // esi
  int v12; // ecx
  char v18[176]; // [rsp+30h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 48 48 12 polygons:671";
  *(_QWORD *)(v7 + 16) = NavMeshQuery::QueryPolygons;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = 61937;
  v9[536862723] = -202116109;
  NavMeshQuery::QueryPolygons(Vector3f const&,Vector3f const&,QueryFilter const*,unsigned long long *,int *,int)const::PolygonQuery::PolygonQuery(
    (NavMeshQuery::QueryPolygons::PolygonQuery *const)(v7 + 48),
    this,
    filter,
    polys,
    maxPolys);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, this);
  m_NavMesh = this->m_NavMesh;
  TypeID = QueryFilter::GetTypeID(filter);
  DynamicNavMesh::QueryPolygons(m_NavMesh, TypeID, center, extents, (NavMeshProcessCallback *)(v7 + 48));
  if ( polyCount )
  {
    v12 = *(_DWORD *)(v7 + 92);
    if ( *(_BYTE *)(((unsigned __int64)polyCount >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)polyCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)polyCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(polyCount);
    }
    *polyCount = v12;
  }
  if ( v18 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 652: range 000000000CC4F8DA-000000000CC4FA49
void __cdecl NavMeshQuery::QueryPolygons(Vector3f const&,Vector3f const&,QueryFilter const*,unsigned long long *,int *,int)const::PolygonQuery::PolygonQuery(
        NavMeshQuery::QueryPolygons::PolygonQuery *const this,
        const NavMeshQuery *query,
        const QueryFilter *filter,
        NavMeshPolyRef *polys,
        const int maxPolys)
{
  int (**v5)(...); // rcx

  NavMeshProcessCallback::NavMeshProcessCallback(this);
  v5 = (int (**)(...))&off_1EFB0010;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshProcessCallback = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshMeshQuery = query;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Filter = filter;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Results >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Results = polys;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MaxResults >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_MaxResults >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_MaxResults);
  }
  this->m_MaxResults = maxPolys;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ResultCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_ResultCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_ResultCount);
  }
  this->m_ResultCount = 0;
};

// Line 657: range 000000000CC4FA4A-000000000CC4FC61
void __cdecl NavMeshQuery::QueryPolygons(Vector3f const&,Vector3f const&,QueryFilter const*,unsigned long long *,int *,int)const::PolygonQuery::ProcessPolygons(
        NavMeshQuery::QueryPolygons::PolygonQuery *const this,
        const NavMeshTile *a2,
        const NavMeshPolyRef *polyRefs,
        const NavMeshPoly **polys,
        const int itemCount)
{
  const QueryFilter *m_Filter; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  int m_ResultCount; // ecx
  char v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  NavMeshPolyRef *m_Results; // rdi
  int v14; // eax
  unsigned __int64 v15; // rax
  int i; // [rsp+3Ch] [rbp-4h]

  for ( i = 0; i < itemCount; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Filter, a2);
    m_Filter = this->m_Filter;
    v6 = (unsigned __int64)&polys[i];
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      m_Filter = (const QueryFilter *)&polys[i];
      v6 = __asan_report_load8(m_Filter, a2);
    }
    v7 = *(_QWORD *)v6;
    v8 = *(_QWORD *)v6 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    {
      m_Filter = (const QueryFilter *)v8;
      __asan_report_load4(v8);
    }
    a2 = (const NavMeshTile *)*(unsigned int *)(v7 + 24);
    if ( QueryFilter::PassFilter(m_Filter, (unsigned int)a2) )
    {
      a2 = (const NavMeshTile *)((((_BYTE)this + 44) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ResultCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_ResultCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->m_ResultCount);
      }
      m_ResultCount = this->m_ResultCount;
      v10 = *(_BYTE *)(((unsigned __int64)&this->m_MaxResults >> 3) + 0x7FFF8000);
      LOBYTE(a2) = v10 != 0;
      if ( v10 != 0 && v10 <= 3 )
        __asan_report_load4(&this->m_MaxResults);
      if ( m_ResultCount < this->m_MaxResults )
      {
        v11 = (unsigned __int64)&polyRefs[i];
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(&polyRefs[i], a2);
        v12 = *(_QWORD *)v11;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Results >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Results, a2);
        m_Results = this->m_Results;
        v14 = this->m_ResultCount;
        this->m_ResultCount = v14 + 1;
        v15 = (unsigned __int64)&m_Results[v14];
        a2 = (const NavMeshTile *)*(unsigned __int8 *)((v15 >> 3) + 0x7FFF8000);
        if ( (_BYTE)a2 )
          v15 = __asan_report_store8();
        *(_QWORD *)v15 = v12;
      }
    }
  }
};

// Line 679: range 000000000CC4FE50-000000000CC4FFBD
NavMeshStatus __cdecl NavMeshQuery::CheckHasPathToTarget(
        NavMeshQuery *const this,
        NavMeshPolyRef startRef,
        NavMeshPolyRef endRef)
{
  const NavMesh *InternalNavMesh; // rcx
  const NavMesh *v5; // rcx
  unsigned int startPolyRegion; // [rsp+28h] [rbp-18h]
  unsigned int endPolyRegion; // [rsp+2Ch] [rbp-14h]
  const NavMeshTile *startTile; // [rsp+30h] [rbp-10h]
  const NavMeshTile *endTile; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, startRef);
  startTile = DynamicNavMesh::GetTileByRef(this->m_NavMesh, startRef);
  if ( !startTile )
    return -2147483640;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, startRef);
  InternalNavMesh = DynamicNavMesh::GetInternalNavMesh(this->m_NavMesh);
  startPolyRegion = NavMesh::FindConnectRegionId(InternalNavMesh, startTile, startRef);
  if ( startPolyRegion == -1 )
    return 0x40000000;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, startTile);
  endTile = DynamicNavMesh::GetTileByRef(this->m_NavMesh, endRef);
  if ( !endTile )
    return -2147483640;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, endRef);
  v5 = DynamicNavMesh::GetInternalNavMesh(this->m_NavMesh);
  endPolyRegion = NavMesh::FindConnectRegionId(v5, endTile, endRef);
  if ( endPolyRegion == -1 )
    return 0x40000000;
  if ( startPolyRegion == endPolyRegion )
    return 0x40000000;
  return 0x80000000;
};

// Line 706: range 000000000CC4FFBE-000000000CC50A83
NavMeshStatus __cdecl NavMeshQuery::InitSlicedFindPath(
        NavMeshQuery *const this,
        NavMeshPolyRef startRef,
        NavMeshPolyRef endRef,
        const Vector3f *startPos,
        const Vector3f *endPos,
        const QueryFilter *filter)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  char v9; // dl
  __int64 v10; // rsi
  NavMeshStatus result; // eax
  NavMeshPolyRef v12; // rsi
  char v13; // al
  const QueryFilter *v14; // r14
  unsigned int PolyFlags; // eax
  __int64 v16; // rsi
  NavMeshNode *Node; // rax
  NavMeshQuery *thisa; // [rsp+28h] [rbp-88h]
  float startHeuristic; // [rsp+34h] [rbp-7Ch]
  NavMeshNode *startNode; // [rsp+38h] [rbp-78h]
  char v26[112]; // [rsp+40h] [rbp-70h] BYREF

  thisa = this;
  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (NavMeshQuery *const)64;
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 12 19 endPosProjStart:740";
  *(_QWORD *)(v6 + 16) = NavMeshQuery::InitSlicedFindPath;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, startRef);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x2C3u,
      "NavMeshStatus NavMeshQuery::InitSlicedFindPath(NavMeshPolyRef, NavMeshPolyRef, const Vector3f&, const Vector3f&, c"
      "onst QueryFilter*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)&thisa->m_NodePool;
    __asan_report_load8(&thisa->m_NodePool, startRef);
  }
  if ( !thisa->m_NodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x2C4u,
      "NavMeshStatus NavMeshQuery::InitSlicedFindPath(NavMeshPolyRef, NavMeshPolyRef, const Vector3f&, const Vector3f&, c"
      "onst QueryFilter*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)&thisa->m_OpenList;
    __asan_report_load8(&thisa->m_OpenList, startRef);
  }
  if ( !thisa->m_OpenList )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_OpenList",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x2C5u,
      "NavMeshStatus NavMeshQuery::InitSlicedFindPath(NavMeshPolyRef, NavMeshPolyRef, const Vector3f&, const Vector3f&, c"
      "onst QueryFilter*)");
  }
  memset(&thisa->m_QueryData, 0, sizeof(thisa->m_QueryData));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->m_QueryData);
  }
  thisa->m_QueryData.status = 0x80000000;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.startRef >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_QueryData.startRef = startRef;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.endRef >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_QueryData.endRef = endRef;
  if ( *(char *)(((unsigned __int64)&thisa->m_QueryData.startPos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&thisa->m_QueryData.startPos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->m_QueryData.startPos.z + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&thisa->m_QueryData.startPos, 12LL);
  }
  if ( ((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)startPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(startPos, 12LL);
  }
  *(_QWORD *)&thisa->m_QueryData.startPos.x = *(_QWORD *)&startPos->x;
  thisa->m_QueryData.startPos.z = startPos->z;
  if ( (((unsigned __int8)thisa + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.endPos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.endPos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&thisa->m_QueryData.endPos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->m_QueryData.endPos.z + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&thisa->m_QueryData.endPos, 12LL);
  }
  v9 = *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000);
  v10 = v9 != 0;
  if ( (((unsigned __int8)endPos & 7) >= *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v10 & ((((unsigned __int8)endPos
                                                                                                 + 11) & 7) >= v9) )
  {
    v10 = 12LL;
    __asan_report_load_n(endPos, 12LL);
  }
  *(_QWORD *)&thisa->m_QueryData.endPos.x = *(_QWORD *)&endPos->x;
  thisa->m_QueryData.endPos.z = endPos->z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.filter >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_QueryData.filter = filter;
  if ( startRef && endRef )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, v10);
    v12 = startRef;
    if ( !DynamicNavMesh::IsValidPolyRef(thisa->m_NavMesh, startRef) )
      goto LABEL_41;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, startRef);
    v12 = endRef;
    if ( !DynamicNavMesh::IsValidPolyRef(thisa->m_NavMesh, endRef) )
LABEL_41:
      v13 = 1;
    else
      v13 = 0;
    if ( v13 )
    {
      result = -2147483640;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.filter >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_QueryData.filter, v12);
      v14 = thisa->m_QueryData.filter;
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v12);
      PolyFlags = DynamicNavMesh::GetPolyFlags(thisa->m_NavMesh, startRef);
      v16 = PolyFlags;
      if ( !QueryFilter::PassFilter(v14, PolyFlags) )
      {
        result = 0x80000000;
      }
      else if ( startRef == endRef )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&thisa->m_QueryData);
        }
        thisa->m_QueryData.status = 0x40000000;
        result = 0x40000000;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_NodePool, v16);
        NavMeshNodePool::Clear(thisa->m_NodePool);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_OpenList, v16);
        NavMeshNodeQueue::Clear(thisa->m_OpenList);
        Vector3f::Vector3f((Vector3f *const)(v6 + 32));
        NavMeshQuery::ClosestPointOnPoly(thisa, startRef, endPos, (Vector3f *)(v6 + 32));
        startHeuristic = Distance((const Vector3f *)(v6 + 32), endPos) * 0.99900001;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_NodePool, endPos);
        Node = NavMeshNodePool::GetNode(thisa->m_NodePool, startRef);
        startNode = Node;
        if ( *(char *)(((unsigned __int64)Node >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&Node->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)Node + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Node->pos.z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(Node, 12LL);
        }
        if ( ((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)startPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(startPos, 12LL);
        }
        *(_QWORD *)&startNode->pos.x = *(_QWORD *)&startPos->x;
        startNode->pos.z = startPos->z;
        if ( *(_BYTE *)((((unsigned __int64)startNode + 20) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)startNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)startNode + 20) >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4((char *)startNode + 20);
        }
        *((_DWORD *)startNode + 5) &= 0xC0000000;
        if ( *(_BYTE *)(((unsigned __int64)&startNode->cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)startNode + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startNode->cost >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&startNode->cost);
        }
        startNode->cost = 0.0;
        if ( *(_BYTE *)(((unsigned __int64)&startNode->total >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&startNode->total >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&startNode->total);
        }
        startNode->total = startHeuristic;
        if ( *(_BYTE *)(((unsigned __int64)&startNode->id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        startNode->id = startRef;
        *((_BYTE *)startNode + 23) = *((_BYTE *)startNode + 23) & 0x3F | 0x40;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_OpenList, (((_BYTE)startNode + 12) & 7u) + 3);
        NavMeshNodeQueue::Push(thisa->m_OpenList, startNode);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&thisa->m_QueryData);
        }
        thisa->m_QueryData.status = 0x20000000;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNode >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        thisa->m_QueryData.lastBestNode = startNode;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNodeCost >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNodeCost >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&thisa->m_QueryData.lastBestNodeCost);
        }
        thisa->m_QueryData.lastBestNodeCost = startHeuristic;
        result = thisa->m_QueryData.status;
      }
    }
  }
  else
  {
    result = -2147483640;
  }
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 761: range 000000000CC50A84-000000000CC514E9
// local variable allocation has failed, the output may be wrong!
NavMeshStatus __cdecl NavMeshQuery::UpdateSlicedFindPath(NavMeshQuery *const this, const int maxIter, int *doneIters)
{
  const DynamicNavMesh *m_NavMesh; // rax
  NavMeshPolyRef startRef; // rsi
  const DynamicNavMesh *v6; // rax
  char v7; // al
  char v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  NavMeshPolyRef id; // rcx
  NavMeshPolyRef v12; // rsi
  NavMeshNodePool *m_NodePool; // rcx
  __int64 v14; // rsi
  __int64 NodeAtIdx; // rax
  NavMeshQuery *thisa; // [rsp+18h] [rbp-38h]
  int iter; // [rsp+24h] [rbp-2Ch]
  NavMeshPolyRef parentRef; // [rsp+30h] [rbp-20h]
  const NavMeshLink *link; // [rsp+38h] [rbp-18h]
  NavMeshNode *bestNode; // [rsp+40h] [rbp-10h]
  NavMeshPolyRef bestRef; // [rsp+48h] [rbp-8h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, *(_QWORD *)&maxIter);
  if ( !this->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x2FAu,
      "NavMeshStatus NavMeshQuery::UpdateSlicedFindPath(int, int*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)((char *)this + 96);
    __asan_report_load8(&thisa->m_NodePool, *(_QWORD *)&maxIter);
  }
  if ( !thisa->m_NodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x2FBu,
      "NavMeshStatus NavMeshQuery::UpdateSlicedFindPath(int, int*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)&thisa->m_OpenList;
    __asan_report_load8(&thisa->m_OpenList, *(_QWORD *)&maxIter);
  }
  if ( !thisa->m_OpenList )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_OpenList",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x2FCu,
      "NavMeshStatus NavMeshQuery::UpdateSlicedFindPath(int, int*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->m_QueryData);
  }
  if ( !NavMeshStatusInProgress(thisa->m_QueryData.status) )
  {
    if ( doneIters )
    {
      if ( *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)doneIters & 7) + 3) >= *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(doneIters);
      }
      *doneIters = 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->m_QueryData);
    }
    return thisa->m_QueryData.status;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, *(_QWORD *)&maxIter);
    m_NavMesh = thisa->m_NavMesh;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.startRef >> 3) + 0x7FFF8000) )
      m_NavMesh = (const DynamicNavMesh *)__asan_report_load8(&thisa->m_QueryData.startRef, *(_QWORD *)&maxIter);
    startRef = thisa->m_QueryData.startRef;
    if ( !DynamicNavMesh::IsValidPolyRef(m_NavMesh, startRef) )
      goto LABEL_33;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, startRef);
    v6 = thisa->m_NavMesh;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.endRef >> 3) + 0x7FFF8000) )
      v6 = (const DynamicNavMesh *)__asan_report_load8(&thisa->m_QueryData.endRef, startRef);
    startRef = thisa->m_QueryData.endRef;
    if ( !DynamicNavMesh::IsValidPolyRef(v6, startRef) )
LABEL_33:
      v7 = 1;
    else
      v7 = 0;
    if ( v7 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&thisa->m_QueryData);
      }
      thisa->m_QueryData.status = 0x80000000;
      if ( doneIters )
      {
        if ( *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)doneIters & 7) + 3) >= *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(doneIters);
        }
        *doneIters = 0;
      }
      return 0x80000000;
    }
    else
    {
      iter = 0;
      while ( 1 )
      {
        if ( iter >= maxIter )
          goto LABEL_49;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_OpenList, startRef);
        if ( !NavMeshNodeQueue::empty(thisa->m_OpenList) )
          v8 = 1;
        else
LABEL_49:
          v8 = 0;
        if ( !v8 )
          break;
        ++iter;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_OpenList, startRef);
        bestNode = NavMeshNodeQueue::Pop(thisa->m_OpenList);
        v9 = (unsigned __int64)bestNode + 20;
        v10 = (((_BYTE)bestNode + 20) & 7u) + 3;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v9);
        *((_BYTE *)bestNode + 23) = (((*((_BYTE *)bestNode + 23) >> 6) & 2) << 6) | *((_BYTE *)bestNode + 23) & 0x3F;
        *((_BYTE *)bestNode + 23) = (((*((_BYTE *)bestNode + 23) >> 6) | 2) << 6) | *((_BYTE *)bestNode + 23) & 0x3F;
        if ( *(_BYTE *)(((unsigned __int64)&bestNode->id >> 3) + 0x7FFF8000) )
          __asan_report_load8(&bestNode->id, v10);
        id = bestNode->id;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.endRef >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_QueryData.endRef, v10);
        if ( id == thisa->m_QueryData.endRef )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNode >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          thisa->m_QueryData.lastBestNode = bestNode;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&thisa->m_QueryData);
          }
          thisa->m_QueryData.status = thisa->m_QueryData.status & 0xFFFFFF | 0x40000000;
          if ( doneIters )
          {
            if ( *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)doneIters & 7) + 3) >= *(_BYTE *)(((unsigned __int64)doneIters >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_store4(doneIters);
            }
            *doneIters = iter;
          }
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&thisa->m_QueryData);
          }
          return thisa->m_QueryData.status;
        }
        if ( *(_BYTE *)(((unsigned __int64)&bestNode->id >> 3) + 0x7FFF8000) )
          __asan_report_load8(&bestNode->id, v10);
        bestRef = bestNode->id;
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, v10);
        if ( !DynamicNavMesh::IsValidPolyRef(thisa->m_NavMesh, bestRef) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&thisa->m_QueryData);
          }
          thisa->m_QueryData.status = 0x80000000;
          if ( doneIters )
          {
            if ( *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)doneIters & 7) + 3) >= *(_BYTE *)(((unsigned __int64)doneIters >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_store4(doneIters);
            }
            *doneIters = iter;
          }
          return 0x80000000;
        }
        parentRef = 0LL;
        v12 = (((_BYTE)bestNode + 20) & 7u) + 3;
        if ( *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bestNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4((char *)bestNode + 20);
        }
        if ( (*((_DWORD *)bestNode + 5) & 0x3FFFFFFF) != 0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->m_NodePool, v12);
          m_NodePool = thisa->m_NodePool;
          if ( *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)bestNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4((char *)bestNode + 20);
          }
          v14 = *((_DWORD *)bestNode + 5) & 0x3FFFFFFF;
          NodeAtIdx = (__int64)NavMeshNodePool::GetNodeAtIdx(m_NodePool, v14);
          if ( *(_BYTE *)(((unsigned __int64)(NodeAtIdx + 24) >> 3) + 0x7FFF8000) )
            NodeAtIdx = __asan_report_load8(NodeAtIdx + 24, v14);
          parentRef = *(_QWORD *)(NodeAtIdx + 24);
          if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
            __asan_report_load8(thisa, v14);
          v12 = parentRef;
          if ( !DynamicNavMesh::IsValidPolyRef(thisa->m_NavMesh, parentRef) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&thisa->m_QueryData);
            }
            thisa->m_QueryData.status = 0x80000000;
            if ( doneIters )
            {
              if ( *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)doneIters & 7) + 3) >= *(_BYTE *)(((unsigned __int64)doneIters >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_store4(doneIters);
              }
              *doneIters = iter;
            }
            return 0x80000000;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, v12);
        startRef = bestRef;
        for ( link = DynamicNavMesh::GetFirstLink(thisa->m_NavMesh, bestRef);
              link;
              link = DynamicNavMesh::GetNextLink(thisa->m_NavMesh, link) )
        {
          NavMeshQuery::UpdateNeighbourLink(thisa, link, parentRef, bestRef, bestNode);
          if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
            __asan_report_load8(thisa, link);
          startRef = (NavMeshPolyRef)link;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_OpenList, startRef);
      if ( NavMeshNodeQueue::empty(thisa->m_OpenList) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->m_QueryData);
        }
        thisa->m_QueryData.status = thisa->m_QueryData.status & 0xFFFFFF | 0x40000000;
      }
      if ( doneIters )
      {
        if ( *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)doneIters & 7) + 3) >= *(_BYTE *)(((unsigned __int64)doneIters >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(doneIters);
        }
        *doneIters = iter;
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->m_QueryData);
      }
      return thisa->m_QueryData.status;
    }
  }
};

// Line 848: range 000000000CC514EA-000000000CC522CD
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMeshQuery::UpdateNeighbourLink(
        NavMeshQuery *const this,
        const NavMeshLink *link,
        const NavMeshPolyRef parentRef,
        const NavMeshPolyRef bestRef,
        const NavMeshNode *bestNode)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  const QueryFilter *filter; // r14
  unsigned int PolyFlags; // eax
  __int64 v11; // rsi
  NavMeshStatus PortalPoints; // eax
  __int64 v13; // xmm0_8
  __m128i v14; // xmm0
  const QueryFilter *v15; // rcx
  const QueryFilter *v16; // rsi
  Vector3f *p_endPos; // rsi
  const QueryFilter *v18; // rcx
  NavMeshStatus v19; // eax
  unsigned int v20; // ecx
  float v21; // [rsp+0h] [rbp-150h]
  float v22; // [rsp+4h] [rbp-14Ch]
  float v23; // [rsp+4h] [rbp-14Ch]
  NavMeshQuery *thisa; // [rsp+28h] [rbp-128h]
  float heuristic; // [rsp+3Ch] [rbp-114h]
  float cost; // [rsp+40h] [rbp-110h]
  float ddl; // [rsp+44h] [rbp-10Ch]
  float total; // [rsp+4Ch] [rbp-104h]
  NavMeshPolyRef neighbourRef; // [rsp+50h] [rbp-100h]
  NavMeshNode *neighbourNode; // [rsp+58h] [rbp-F8h]
  char v34[240]; // [rsp+60h] [rbp-F0h] BYREF

  thisa = this;
  v6 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (NavMeshQuery *const)192;
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 12 8 left:873 64 12 9 right:873 96 12 6 dl:877 128 12 6 dp:881 160 12 23 endPosProjNeighbour:907";
  *(_QWORD *)(v6 + 16) = NavMeshQuery::UpdateNeighbourLink;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219020288;
  v8[536862722] = -219020288;
  v8[536862723] = -219020288;
  v8[536862724] = -219020288;
  v8[536862725] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)&thisa->m_OpenList;
    __asan_report_load8(&thisa->m_OpenList, link);
  }
  if ( !thisa->m_OpenList )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_OpenList",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x351u,
      "void NavMeshQuery::UpdateNeighbourLink(const NavMeshLink*, NavMeshPolyRef, NavMeshPolyRef, const NavMeshNode*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)&thisa->m_NodePool;
    __asan_report_load8(&thisa->m_NodePool, link);
  }
  if ( !thisa->m_NodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x352u,
      "void NavMeshQuery::UpdateNeighbourLink(const NavMeshLink*, NavMeshPolyRef, NavMeshPolyRef, const NavMeshNode*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
    __asan_report_load8(link, link);
  neighbourRef = link->ref;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, link);
  if ( DynamicNavMesh::IsValidPolyRef(thisa->m_NavMesh, neighbourRef) && neighbourRef && neighbourRef != parentRef )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.filter >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_QueryData.filter, neighbourRef);
    filter = thisa->m_QueryData.filter;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, neighbourRef);
    PolyFlags = DynamicNavMesh::GetPolyFlags(thisa->m_NavMesh, neighbourRef);
    v11 = PolyFlags;
    if ( QueryFilter::PassFilter(filter, PolyFlags) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_NodePool, v11);
      neighbourNode = NavMeshNodePool::GetNode(thisa->m_NodePool, neighbourRef);
      if ( neighbourNode )
      {
        if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 23) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)neighbourNode + 23) & 7) >= *(_BYTE *)((((unsigned __int64)neighbourNode + 23) >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load1((char *)neighbourNode + 23);
        }
        if ( (*((_BYTE *)neighbourNode + 23) & 0xC0) == 0 )
        {
          Vector3f::Vector3f((Vector3f *const)(v6 + 32));
          Vector3f::Vector3f((Vector3f *const)(v6 + 64));
          PortalPoints = NavMeshQuery::GetPortalPoints(
                           thisa,
                           bestRef,
                           neighbourRef,
                           (Vector3f *)(v6 + 32),
                           (Vector3f *)(v6 + 64));
          if ( NavMeshStatusFailed(PortalPoints) )
            goto LABEL_94;
          *(Vector3f *)((char *)&v5 - 8) = operator-((const Vector3f *)(v6 + 64), (const Vector3f *)(v6 + 32));
          *(_QWORD *)(v6 + 96) = v13;
          *(_DWORD *)(v6 + 104) = v5.m128i_i32[0];
          Dot((const Vector3f *)(v6 + 96), (const Vector3f *)(v6 + 96));
          ddl = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
          if ( ddl <= 0.000099999997 )
          {
            if ( *(char *)(((unsigned __int64)neighbourNode >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&neighbourNode->pos.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)neighbourNode + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&neighbourNode->pos.z + 3) >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_store_n(neighbourNode, 12LL);
            }
            *(_QWORD *)&neighbourNode->pos.x = *(_QWORD *)(v6 + 32);
            neighbourNode->pos.z = *(float *)(v6 + 40);
          }
          else
          {
            *(Vector3f *)(v6 + 128) = operator-(&bestNode->pos, (const Vector3f *)(v6 + 32));
            v14 = _mm_cvtsi32_si128(COERCE_UNSIGNED_INT(Dot((const Vector3f *)(v6 + 96), (const Vector3f *)(v6 + 128)) / ddl));
            *(float *)v14.m128i_i32 = FloatClamp(*(float *)v14.m128i_i32, 0.050000001, 0.94999999);
            *(Vector3f *)(v6 + 160) = operator*((const Vector3f *)(v6 + 96), COERCE_CONST_FLOAT(_mm_cvtsi128_si32(v14)));
            *(Vector3f *)(v6 + 128) = operator+((const Vector3f *)(v6 + 32), (const Vector3f *)(v6 + 160));
            if ( *(char *)(((unsigned __int64)neighbourNode >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&neighbourNode->pos.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)neighbourNode + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&neighbourNode->pos.z + 3) >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_store_n(neighbourNode, 12LL);
            }
            *(_QWORD *)&neighbourNode->pos.x = *(_QWORD *)(v6 + 128);
            neighbourNode->pos.z = *(float *)(v6 + 136);
          }
        }
        heuristic = 0.0;
        if ( *(_BYTE *)(((unsigned __int64)&bestNode->cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bestNode + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bestNode->cost >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&bestNode->cost);
        }
        v22 = bestNode->cost;
        v21 = Distance(&bestNode->pos, &neighbourNode->pos);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.filter >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_QueryData.filter, neighbourNode);
        v15 = thisa->m_QueryData.filter;
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, neighbourNode);
        v16 = v15;
        cost = (float)(GetCostModifier(thisa->m_NavMesh, v15, bestRef) * v21) + v22;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.endRef >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_QueryData.endRef, v16);
        if ( neighbourRef == thisa->m_QueryData.endRef )
        {
          p_endPos = &thisa->m_QueryData.endPos;
          v23 = Distance(&neighbourNode->pos, &thisa->m_QueryData.endPos);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.filter >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->m_QueryData.filter, p_endPos);
          v18 = thisa->m_QueryData.filter;
          if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
            __asan_report_load8(thisa, p_endPos);
          cost = (float)(GetCostModifier(thisa->m_NavMesh, v18, neighbourRef) * v23) + cost;
        }
        else
        {
          Vector3f::Vector3f((Vector3f *const)(v6 + 160));
          v19 = NavMeshQuery::ClosestPointOnPolyBoundary(
                  thisa,
                  neighbourRef,
                  &thisa->m_QueryData.endPos,
                  (Vector3f *)(v6 + 160));
          if ( NavMeshStatusFailed(v19) )
            goto LABEL_94;
          heuristic = Distance((const Vector3f *)(v6 + 160), &thisa->m_QueryData.endPos) * 0.99900001;
        }
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNodeCost >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNodeCost >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->m_QueryData.lastBestNodeCost);
        }
        if ( thisa->m_QueryData.lastBestNodeCost > heuristic )
        {
          thisa->m_QueryData.lastBestNodeCost = heuristic;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNode >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          thisa->m_QueryData.lastBestNode = neighbourNode;
        }
        total = cost + heuristic;
        if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4((char *)neighbourNode + 20);
        }
        if ( (*((_BYTE *)neighbourNode + 23) & 0x40) == 0 )
          goto LABEL_69;
        if ( *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&neighbourNode->total);
        }
        if ( total < neighbourNode->total )
        {
LABEL_69:
          if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4((char *)neighbourNode + 20);
          }
          if ( ((*((_BYTE *)neighbourNode + 23) >> 6) & 2) == 0 )
            goto LABEL_99;
          if ( *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&neighbourNode->total);
          }
          if ( total < neighbourNode->total )
          {
LABEL_99:
            if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->m_NodePool, (((_BYTE)neighbourNode + 20) & 7u) + 3);
            v20 = NavMeshNodePool::GetNodeIdx(thisa->m_NodePool, bestNode) & 0x3FFFFFFF;
            if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_store4((char *)neighbourNode + 20);
            }
            *((_DWORD *)neighbourNode + 5) = v20 & 0x3FFFFFFF | *((_DWORD *)neighbourNode + 5) & 0xC0000000;
            if ( *(_BYTE *)(((unsigned __int64)&neighbourNode->id >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            neighbourNode->id = neighbourRef;
            *((_BYTE *)neighbourNode + 23) = (((*((_BYTE *)neighbourNode + 23) & 0x40) != 0) << 6) | *((_BYTE *)neighbourNode + 23) & 0x3F;
            if ( *(_BYTE *)(((unsigned __int64)&neighbourNode->cost >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)neighbourNode + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&neighbourNode->cost >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_store4(&neighbourNode->cost);
            }
            neighbourNode->cost = cost;
            if ( *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&neighbourNode->total);
            }
            neighbourNode->total = total;
            if ( (*((_BYTE *)neighbourNode + 23) & 0x40) != 0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->m_OpenList, (((_BYTE)neighbourNode + 12) & 7u) + 3);
              NavMeshNodeQueue::Modify(thisa->m_OpenList, neighbourNode);
            }
            else
            {
              if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4((char *)neighbourNode + 20);
              }
              *((_BYTE *)neighbourNode + 23) = (((*((_BYTE *)neighbourNode + 23) >> 6) | 1) << 6) | *((_BYTE *)neighbourNode + 23) & 0x3F;
              if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->m_OpenList, (((_BYTE)neighbourNode + 20) & 7u) + 3);
              NavMeshNodeQueue::Push(thisa->m_OpenList, neighbourNode);
            }
          }
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->m_QueryData);
        }
        thisa->m_QueryData.status |= 0x20u;
      }
    }
  }
LABEL_94:
  if ( v34 == (char *)v6 )
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
};

// Line 950: range 000000000CC522CE-000000000CC5279F
NavMeshStatus __cdecl NavMeshQuery::FinalizeSlicedFindPath(NavMeshQuery *const this, int *pathCount)
{
  NavMeshNodePool **p_m_NodePool; // rax
  NavMeshNode *v3; // rsi
  void *status; // rdi
  NavMeshPolyRef startRef; // rcx
  __int64 lastBestNode; // rax
  __int64 v8; // rcx
  NavMeshNodePool *m_NodePool; // rcx
  __int64 v10; // rsi
  unsigned int v11; // ecx
  char v12; // dl
  NavMeshQuery *thisa; // [rsp+8h] [rbp-28h]
  int n; // [rsp+10h] [rbp-20h]
  int details; // [rsp+14h] [rbp-1Ch]
  NavMeshNode *prev; // [rsp+18h] [rbp-18h]
  NavMeshNode *node; // [rsp+20h] [rbp-10h]
  NavMeshNode *next; // [rsp+28h] [rbp-8h]

  thisa = this;
  p_m_NodePool = &this->m_NodePool;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshQuery *const)((char *)this + 96);
    __asan_report_load8(p_m_NodePool, pathCount);
  }
  if ( !thisa->m_NodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x3B7u,
      "NavMeshStatus NavMeshQuery::FinalizeSlicedFindPath(int*)");
  }
  v3 = (NavMeshNode *)(((unsigned __int8)pathCount & 7u) + 3);
  if ( *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(pathCount);
  }
  *pathCount = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->m_QueryData);
  }
  status = (void *)thisa->m_QueryData.status;
  if ( NavMeshStatusFailed((NavMeshStatus)status) )
  {
    memset(&thisa->m_QueryData, 0, sizeof(thisa->m_QueryData));
    return 0x80000000;
  }
  else
  {
    n = 0;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.startRef >> 3) + 0x7FFF8000) )
    {
      status = &thisa->m_QueryData.startRef;
      __asan_report_load8(&thisa->m_QueryData.startRef, v3);
    }
    startRef = thisa->m_QueryData.startRef;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.endRef >> 3) + 0x7FFF8000) )
    {
      status = &thisa->m_QueryData.endRef;
      __asan_report_load8(&thisa->m_QueryData.endRef, v3);
    }
    if ( startRef == thisa->m_QueryData.endRef )
    {
      n = 1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNode >> 3) + 0x7FFF8000) )
      {
        status = &thisa->m_QueryData.lastBestNode;
        __asan_report_load8(&thisa->m_QueryData.lastBestNode, v3);
      }
      if ( !thisa->m_QueryData.lastBestNode )
      {
        __asan_handle_no_return(status);
        __assert_fail(
          "m_QueryData.lastBestNode",
          "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
          0x3CCu,
          "NavMeshStatus NavMeshQuery::FinalizeSlicedFindPath(int*)");
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_QueryData.lastBestNode, v3);
      lastBestNode = (__int64)thisa->m_QueryData.lastBestNode;
      if ( *(_BYTE *)(((unsigned __int64)(lastBestNode + 24) >> 3) + 0x7FFF8000) )
        lastBestNode = __asan_report_load8(lastBestNode + 24, v3);
      v8 = *(_QWORD *)(lastBestNode + 24);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.endRef >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_QueryData.endRef, v3);
      if ( v8 != thisa->m_QueryData.endRef )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->m_QueryData);
        }
        thisa->m_QueryData.status |= 0x40u;
      }
      prev = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.lastBestNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_QueryData.lastBestNode, v3);
      node = thisa->m_QueryData.lastBestNode;
      do
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_NodePool, v3);
        m_NodePool = thisa->m_NodePool;
        if ( *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)node + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4((char *)node + 20);
        }
        v10 = *((_DWORD *)node + 5) & 0x3FFFFFFF;
        next = NavMeshNodePool::GetNodeAtIdx(m_NodePool, v10);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_NodePool, v10);
        v3 = prev;
        v11 = NavMeshNodePool::GetNodeIdx(thisa->m_NodePool, prev) & 0x3FFFFFFF;
        v12 = *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000);
        LOBYTE(v3) = v12 != 0;
        if ( v12 != 0 && (char)((((_BYTE)node + 20) & 7) + 3) >= v12 )
          __asan_report_store4((char *)node + 20);
        *((_DWORD *)node + 5) = v11 & 0x3FFFFFFF | *((_DWORD *)node + 5) & 0xC0000000;
        prev = node;
        node = next;
        ++n;
      }
      while ( next );
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData.startNode >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      thisa->m_QueryData.startNode = prev;
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->m_QueryData);
    }
    details = thisa->m_QueryData.status & 0xFFFFFF;
    if ( *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(pathCount);
    }
    *pathCount = n;
    return details | 0x40000000;
  }
};

// Line 1001: range 000000000CC527A0-000000000CC52B92
NavMeshStatus __cdecl NavMeshQuery::FinalizeSlicedFindPathPartial(
        NavMeshQuery *const this,
        int *pathCount,
        const NavMeshPolyRef *existing,
        const int existingSize)
{
  char v5; // dl
  NavMeshPolyRef v6; // rsi
  NavMeshPolyRef startRef; // rcx
  NavMeshNodePool *m_NodePool; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  NavMeshNodePool *v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // ecx
  char v15; // dl
  int n; // [rsp+2Ch] [rbp-24h]
  int i; // [rsp+30h] [rbp-20h]
  NavMeshStatus details; // [rsp+34h] [rbp-1Ch]
  NavMeshNode *prev; // [rsp+38h] [rbp-18h]
  NavMeshNode *node; // [rsp+40h] [rbp-10h]
  NavMeshNode *next; // [rsp+48h] [rbp-8h]

  v5 = *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000);
  v6 = ((unsigned __int8)pathCount & 7u) + 3;
  if ( v5 != 0 && (char)v6 >= v5 )
    __asan_report_store4(pathCount);
  *pathCount = 0;
  if ( !existingSize )
    return 0x80000000;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_QueryData);
  }
  if ( NavMeshStatusFailed(this->m_QueryData.status) )
  {
    memset(&this->m_QueryData, 0, sizeof(this->m_QueryData));
    return 0x80000000;
  }
  n = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData.startRef >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_QueryData.startRef, v6);
  startRef = this->m_QueryData.startRef;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData.endRef >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_QueryData.endRef, v6);
  if ( startRef == this->m_QueryData.endRef )
  {
    n = 1;
  }
  else
  {
    prev = 0LL;
    node = 0LL;
    for ( i = existingSize - 1; i >= 0; --i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NodePool, v6);
      m_NodePool = this->m_NodePool;
      v10 = (unsigned __int64)&existing[i];
      v11 = *(unsigned __int8 *)((v10 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 )
        v10 = __asan_report_load8(&existing[i], v11);
      v6 = *(_QWORD *)v10;
      node = NavMeshNodePool::FindNavMeshNode(m_NodePool, *(_QWORD *)v10);
      if ( node )
        break;
    }
    if ( !node )
      return 0x80000000;
    do
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NodePool, v6);
      v12 = this->m_NodePool;
      if ( *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)node + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4((char *)node + 20);
      }
      v13 = *((_DWORD *)node + 5) & 0x3FFFFFFF;
      next = NavMeshNodePool::GetNodeAtIdx(v12, v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NodePool, v13);
      v6 = (NavMeshPolyRef)prev;
      v14 = NavMeshNodePool::GetNodeIdx(this->m_NodePool, prev) & 0x3FFFFFFF;
      v15 = *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v15 != 0;
      if ( v15 != 0 && (char)((((_BYTE)node + 20) & 7) + 3) >= v15 )
        __asan_report_store4((char *)node + 20);
      *((_DWORD *)node + 5) = v14 & 0x3FFFFFFF | *((_DWORD *)node + 5) & 0xC0000000;
      prev = node;
      node = next;
      ++n;
    }
    while ( next );
    if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData.startNode >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_QueryData.startNode = prev;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_QueryData);
  }
  details = this->m_QueryData.status & 0xFFFFFF;
  if ( *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(pathCount);
  }
  *pathCount = n;
  return details | 0x40000000;
};

// Line 1062: range 000000000CC52B94-000000000CC52F24
NavMeshStatus __cdecl NavMeshQuery::GetPath(
        NavMeshQuery *const this,
        NavMeshPolyRef *path,
        int *pathCount,
        const int maxPath)
{
  NavMeshPolyRef startRef; // rcx
  NavMeshPolyRef v6; // rcx
  _QWORD *v7; // rax
  NavMeshPolyRef id; // rcx
  int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  NavMeshNodePool *m_NodePool; // rcx
  NavMeshPolyRef *patha; // [rsp+10h] [rbp-20h]
  int n; // [rsp+20h] [rbp-10h]
  NavMeshStatus details; // [rsp+24h] [rbp-Ch]
  NavMeshNode *node; // [rsp+28h] [rbp-8h]

  patha = path;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_QueryData);
  }
  if ( NavMeshStatusFailed(this->m_QueryData.status) )
  {
    memset(&this->m_QueryData, 0, sizeof(this->m_QueryData));
    return 0x80000000;
  }
  n = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData.startRef >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_QueryData.startRef, path);
  startRef = this->m_QueryData.startRef;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData.endRef >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_QueryData.endRef, path);
  if ( startRef == this->m_QueryData.endRef )
  {
    v6 = this->m_QueryData.startRef;
    n = 1;
    v7 = path;
    if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
      v7 = (_QWORD *)__asan_report_store8();
    *v7 = v6;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData.startNode >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_QueryData.startNode, path);
    if ( !this->m_QueryData.startNode )
      return 0x80000000;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData.startNode >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_QueryData.startNode, path);
    node = this->m_QueryData.startNode;
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&node->id >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->id, path);
      id = node->id;
      v9 = n++;
      v10 = (unsigned __int64)&patha[v9];
      v11 = *(unsigned __int8 *)((v10 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 )
        v10 = __asan_report_store8();
      *(_QWORD *)v10 = id;
      if ( n >= maxPath )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NodePool, v11);
      m_NodePool = this->m_NodePool;
      if ( *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)node + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4((char *)node + 20);
      }
      path = (NavMeshPolyRef *)(*((_DWORD *)node + 5) & 0x3FFFFFFF);
      node = NavMeshNodePool::GetNodeAtIdx(m_NodePool, (unsigned int)path);
      if ( !node )
        goto LABEL_33;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_QueryData);
    }
    this->m_QueryData.status |= 0x10u;
  }
LABEL_33:
  if ( *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_QueryData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_QueryData);
  }
  details = this->m_QueryData.status & 0xFFFFFF;
  memset(&this->m_QueryData, 0, sizeof(this->m_QueryData));
  if ( *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(pathCount);
  }
  *pathCount = n;
  return details | 0x40000000;
};

// Line 1109: range 000000000CC52F25-000000000CC5329D
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl SegmentSegmentCPA(const Vector3f *p0, const Vector3f *p1, const Vector3f *q0, const Vector3f *q1)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // xmm0_8
  float v14; // xmm1_4
  float v15; // xmm0_4
  float b; // [rsp+44h] [rbp-ECh]
  float c; // [rsp+48h] [rbp-E8h]
  float d; // [rsp+4Ch] [rbp-E4h]
  float e; // [rsp+50h] [rbp-E0h]
  float den; // [rsp+54h] [rbp-DCh]
  Vector3f inV; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+64h] [rbp-CCh]
  float v25; // [rsp+6Ch] [rbp-C4h]
  char v26[192]; // [rsp+70h] [rbp-C0h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 6 t:1124 64 12 6 u:1110 96 12 6 v:1111 128 12 7 w0:1112";
  *(_QWORD *)(v5 + 16) = SegmentSegmentCPA;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219020288;
  v7[536862723] = -219020288;
  v7[536862724] = -202177536;
  *(Vector3f *)((char *)&v4 - 8) = operator-(p1, p0);
  *(_QWORD *)(v5 + 64) = v8;
  *(_DWORD *)(v5 + 72) = v4.m128i_i32[0];
  *(Vector3f *)((char *)&v4 - 8) = operator-(q1, q0);
  *(_QWORD *)(v5 + 96) = v9;
  *(_DWORD *)(v5 + 104) = v4.m128i_i32[0];
  *(Vector3f *)((char *)&v4 - 8) = operator-(p0, q0);
  v11 = v10;
  v12 = v4;
  *(_QWORD *)(v5 + 128) = v11;
  *(_DWORD *)(v5 + 136) = v4.m128i_i32[0];
  Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 64));
  *(float *)v12.m128i_i32 = Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 96));
  b = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  *(float *)v12.m128i_i32 = Dot((const Vector3f *)(v5 + 96), (const Vector3f *)(v5 + 96));
  c = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  *(float *)v12.m128i_i32 = Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 128));
  d = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  *(float *)v12.m128i_i32 = Dot((const Vector3f *)(v5 + 96), (const Vector3f *)(v5 + 128));
  e = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  den = (float)(COERCE_FLOAT(_mm_cvtsi128_si32(v4)) * c) - (float)(b * b);
  if ( den == 0.0 )
  {
    inV = operator+(p0, p1);
    *(Vector3f *)&v13 = operator*(0.5, &inV);
  }
  else
  {
    *(float *)(v5 + 48) = (float)((float)(b * e) - (float)(c * d)) / den;
    v15 = clamp01<float>((const float *)(v5 + 48));
    *(Vector3f *)&v13 = Lerp(p0, p1, v15);
  }
  v24 = v13;
  v25 = v14;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  result.x = *(float *)&v13;
  result.y = *((float *)&v13 + 1);
  result.z = v14;
  return result;
};

// Line 1134: range 000000000CC5329E-000000000CC539F3
// local variable allocation has failed, the output may be wrong!
int __cdecl NavMeshQuery::RetracePortals(
        const NavMeshQuery *const this,
        int startIndex,
        int endIndex,
        const NavMeshPolyRef *path,
        int n,
        const Vector3f *termPos,
        Vector3f *straightPath,
        unsigned __int8 *straightPathFlags,
        NavMeshPolyRef *straightPathRefs,
        const int maxStraightPath)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  NavMeshPolyRef v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  char v24; // di
  char *v25; // rcx
  char v26; // dl
  int result; // eax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  char v35; // di
  char *v36; // rcx
  const NavMeshQuery *thisa; // [rsp+28h] [rbp-B8h]
  unsigned __int8 type1; // [rsp+36h] [rbp-AAh]
  unsigned __int8 type2; // [rsp+37h] [rbp-A9h]
  int k; // [rsp+38h] [rbp-A8h]
  char v45[160]; // [rsp+40h] [rbp-A0h] BYREF

  thisa = this;
  v10 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)128;
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "3 32 12 6 l:1144 64 12 6 r:1144 96 12 8 cpa:1147";
  *(_QWORD *)(v10 + 16) = NavMeshQuery::RetracePortals;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -219020288;
  v12[536862722] = -219020288;
  v12[536862723] = -202177536;
  if ( n >= maxStraightPath )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "n < maxStraightPath",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x46Fu,
      "int NavMeshQuery::RetracePortals(int, int, const NavMeshPolyRef*, int, const Vector3f&, Vector3f*, unsigned char*,"
      " NavMeshPolyRef*, int) const");
  }
  if ( startIndex > endIndex )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "startIndex <= endIndex",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x470u,
      "int NavMeshQuery::RetracePortals(int, int, const NavMeshPolyRef*, int, const Vector3f&, Vector3f*, unsigned char*,"
      " NavMeshPolyRef*, int) const");
  }
  for ( k = startIndex; k < endIndex - 1; ++k )
  {
    v13 = (unsigned __int64)&path[k];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(&path[k], *(_QWORD *)&startIndex);
    type1 = NavMeshPolyRefHelper::DecodePolyIdType(*(_QWORD *)v13);
    v14 = (unsigned __int64)&path[k + 1];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(&path[k + 1], *(_QWORD *)&startIndex);
    type2 = NavMeshPolyRefHelper::DecodePolyIdType(*(_QWORD *)v14);
    if ( type1 != type2 )
    {
      Vector3f::Vector3f((Vector3f *const)(v10 + 32));
      Vector3f::Vector3f((Vector3f *const)(v10 + 64));
      v15 = (unsigned __int64)&path[k + 1];
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(&path[k + 1], *(_QWORD *)&startIndex);
      v16 = *(_QWORD *)v15;
      v17 = (unsigned __int64)&path[k];
      v18 = *(unsigned __int8 *)((v17 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v18 )
        v17 = __asan_report_load8(&path[k], v18);
      if ( NavMeshQuery::GetPortalPoints(thisa, *(_QWORD *)v17, v16, (Vector3f *)(v10 + 32), (Vector3f *)(v10 + 64)) != 0x40000000 )
      {
        __asan_handle_no_return(thisa);
        __assert_fail(
          "status == kNavMeshSuccess",
          "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
          0x47Au,
          "int NavMeshQuery::RetracePortals(int, int, const NavMeshPolyRef*, int, const Vector3f&, Vector3f*, unsigned ch"
          "ar*, NavMeshPolyRef*, int) const");
      }
      *(Vector3f *)(v10 + 96) = SegmentSegmentCPA(
                                  (const Vector3f *)(v10 + 32),
                                  (const Vector3f *)(v10 + 64),
                                  &straightPath[n - 1],
                                  termPos);
      v19 = (unsigned __int64)&straightPath[n];
      if ( (((unsigned __int8)straightPath + 12 * n) & 7) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)straightPath + 12 * n + 11) & 7) >= *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&straightPath[n], 12LL);
      }
      *(_QWORD *)v19 = *(_QWORD *)(v10 + 96);
      *(_DWORD *)(v19 + 8) = *(_DWORD *)(v10 + 104);
      v20 = (unsigned __int64)&path[k + 1];
      v21 = (unsigned __int64)&straightPathRefs[n];
      v22 = *(unsigned __int8 *)((v20 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v22 )
        v21 = __asan_report_load8(&path[k + 1], v22);
      v23 = *(_QWORD *)v20;
      *(_QWORD *)&startIndex = *(unsigned __int8 *)((v21 >> 3) + 0x7FFF8000);
      if ( (_BYTE)startIndex )
        v21 = __asan_report_store8();
      *(_QWORD *)v21 = v23;
      if ( type2 == 1 )
        v24 = 4;
      else
        v24 = 0;
      v25 = (char *)&straightPathFlags[n];
      v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
      LOBYTE(startIndex) = v26 != 0;
      if ( v26 != 0 && ((n + (unsigned __int8)straightPathFlags) & 7) >= v26 )
      {
        v24 = n + (_BYTE)straightPathFlags;
        __asan_report_store1(&straightPathFlags[n]);
      }
      *v25 = v24;
      if ( ++n == maxStraightPath )
      {
        result = maxStraightPath;
        goto LABEL_51;
      }
    }
  }
  v28 = (unsigned __int64)&straightPath[n];
  if ( (((unsigned __int8)straightPath + 12 * n) & 7) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000)
    && *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v28 + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)straightPath + 12 * n + 11) & 7) >= *(_BYTE *)(((v28 + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&straightPath[n], 12LL);
  }
  if ( ((unsigned __int8)termPos & 7) >= *(_BYTE *)(((unsigned __int64)termPos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)termPos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&termPos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)termPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&termPos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(termPos, 12LL);
  }
  *(_QWORD *)v28 = *(_QWORD *)&termPos->x;
  *(float *)(v28 + 8) = termPos->z;
  v29 = (unsigned __int64)&path[endIndex];
  v30 = (unsigned __int64)&straightPathRefs[n];
  v31 = *(unsigned __int8 *)((v29 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v31 )
    v30 = __asan_report_load8(&path[endIndex], v31);
  v32 = *(_QWORD *)v29;
  v33 = *(unsigned __int8 *)((v30 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v33 )
    v30 = __asan_report_store8();
  *(_QWORD *)v30 = v32;
  v34 = (unsigned __int64)&path[endIndex];
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    v34 = __asan_report_load8(&path[endIndex], v33);
  if ( NavMeshPolyRefHelper::DecodePolyIdType(*(_QWORD *)v34) == 1 )
    v35 = 4;
  else
    v35 = 0;
  v36 = (char *)&straightPathFlags[n];
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && ((n + (unsigned __int8)straightPathFlags) & 7) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    v35 = n + (_BYTE)straightPathFlags;
    __asan_report_store1(&straightPathFlags[n]);
  }
  *v36 = v35;
  result = n + 1;
LABEL_51:
  if ( v45 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1164: range 000000000CC539F4-000000000CC53AC3
Vector3f __cdecl WorldToTileSafe(const NavMeshTile *tile, const Vector3f *p)
{
  float z; // xmm1_4
  __int64 v3; // xmm0_8
  Vector3f v4; // [rsp+34h] [rbp-Ch]
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( tile )
  {
    v4 = WorldToTile(tile, p);
  }
  else
  {
    if ( ((unsigned __int8)p & 7) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&p->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(p, 12LL);
    }
    v4 = *p;
  }
  z = v4.z;
  v3 = *(_QWORD *)&v4.x;
  result.x = *(float *)&v3;
  result.y = *((float *)&v3 + 1);
  result.z = z;
  return result;
};

// Line 1169: range 000000000CC53AC4-000000000CC53B93
Vector3f __cdecl TileToWorldSafe(const NavMeshTile *tile, const Vector3f *p)
{
  float z; // xmm1_4
  __int64 v3; // xmm0_8
  Vector3f v4; // [rsp+34h] [rbp-Ch]
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( tile )
  {
    v4 = TileToWorld(tile, p);
  }
  else
  {
    if ( ((unsigned __int8)p & 7) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&p->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(p, 12LL);
    }
    v4 = *p;
  }
  z = v4.z;
  v3 = *(_QWORD *)&v4.x;
  result.x = *(float *)&v3;
  result.y = *((float *)&v3 + 1);
  result.z = z;
  return result;
};

// Line 1180: range 000000000CC53B94-000000000CC54ACA
NavMeshStatus __cdecl NavMeshQuery::FindStraightPath(
        const NavMeshQuery *const this,
        const Vector3f *startPos,
        const Vector3f *endPos,
        const NavMeshPolyRef *path,
        const int pathSize,
        Vector3f *straightPath,
        unsigned __int8 *straightPathFlags,
        NavMeshPolyRef *straightPathRefs,
        int *straightPathCount,
        const int maxStraightPath)
{
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // r12
  char v13; // al
  NavMeshStatus result; // eax
  char v15; // dl
  __int64 v16; // rsi
  NavMeshPolyRef v17; // rdx
  __int64 v18; // rsi
  const Vector3f *v19; // rsi
  const DynamicNavMesh *m_NavMesh; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  NavMeshTileRef v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  NavMeshPolyRef v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  NavMeshPolyRef v29; // rsi
  NavMeshStatus PortalPoints; // eax
  const DynamicNavMesh *v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  NavMeshPolyRef v34; // rsi
  const DynamicNavMesh *v35; // rdi
  const DynamicNavMesh *v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  const DynamicNavMesh *v39; // rdi
  unsigned __int64 v41; // rcx
  const NavMeshQuery *thisa; // [rsp+28h] [rbp-148h]
  int apexIndex; // [rsp+3Ch] [rbp-134h]
  int n; // [rsp+40h] [rbp-130h]
  int na; // [rsp+40h] [rbp-130h]
  int leftIndex; // [rsp+44h] [rbp-12Ch]
  int rightIndex; // [rsp+48h] [rbp-128h]
  int i; // [rsp+4Ch] [rbp-124h]
  const NavMeshTile *startTile; // [rsp+50h] [rbp-120h]
  const NavMeshTile *tile; // [rsp+58h] [rbp-118h]
  Vector3f p; // [rsp+64h] [rbp-10Ch] BYREF
  char v57[256]; // [rsp+70h] [rbp-100h] BYREF

  thisa = this;
  v10 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)224;
    v11 = __asan_stack_malloc_2(224LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "6 32 12 9 apex:1204 64 12 9 left:1205 96 12 10 right:1206 128 12 7 vl:1214 160 12 7 vr:1214 192"
                         " 12 12 termPos:1258";
  *(_QWORD *)(v10 + 16) = NavMeshQuery::FindStraightPath;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -219020288;
  v12[536862722] = -219020288;
  v12[536862723] = -219020288;
  v12[536862724] = -219020288;
  v12[536862725] = -219020288;
  v12[536862726] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, startPos);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x49Du,
      "NavMeshStatus NavMeshQuery::FindStraightPath(const Vector3f&, const Vector3f&, const NavMeshPolyRef*, int, Vector3"
      "f*, unsigned char*, NavMeshPolyRef*, int*, int) const");
  }
  if ( maxStraightPath <= 1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "maxStraightPath > 1",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x49Eu,
      "NavMeshStatus NavMeshQuery::FindStraightPath(const Vector3f&, const Vector3f&, const NavMeshPolyRef*, int, Vector3"
      "f*, unsigned char*, NavMeshPolyRef*, int*, int) const");
  }
  if ( pathSize <= 0 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "pathSize > 0",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x49Fu,
      "NavMeshStatus NavMeshQuery::FindStraightPath(const Vector3f&, const Vector3f&, const NavMeshPolyRef*, int, Vector3"
      "f*, unsigned char*, NavMeshPolyRef*, int*, int) const");
  }
  if ( !straightPath )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "straightPath != __null",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x4A0u,
      "NavMeshStatus NavMeshQuery::FindStraightPath(const Vector3f&, const Vector3f&, const NavMeshPolyRef*, int, Vector3"
      "f*, unsigned char*, NavMeshPolyRef*, int*, int) const");
  }
  if ( !straightPathRefs )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "straightPathRefs != __null",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x4A1u,
      "NavMeshStatus NavMeshQuery::FindStraightPath(const Vector3f&, const Vector3f&, const NavMeshPolyRef*, int, Vector3"
      "f*, unsigned char*, NavMeshPolyRef*, int*, int) const");
  }
  if ( !straightPathFlags )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "straightPathFlags != __null",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x4A2u,
      "NavMeshStatus NavMeshQuery::FindStraightPath(const Vector3f&, const Vector3f&, const NavMeshPolyRef*, int, Vector3"
      "f*, unsigned char*, NavMeshPolyRef*, int*, int) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
    __asan_report_load8(path, startPos);
  if ( !*path )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, startPos);
  if ( DynamicNavMesh::IsValidPolyRef(thisa->m_NavMesh, *path) )
    v13 = 0;
  else
LABEL_24:
    v13 = 1;
  if ( v13 )
  {
    if ( *(_BYTE *)(((unsigned __int64)straightPathCount >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)straightPathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)straightPathCount >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(straightPathCount);
    }
    *straightPathCount = 0;
    result = -2147483640;
  }
  else
  {
    if ( ((unsigned __int8)straightPath & 7) >= *(_BYTE *)(((unsigned __int64)straightPath >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)straightPath >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&straightPath->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)straightPath + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&straightPath->z + 3) >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_store_n(straightPath, 12LL);
    }
    v15 = *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000);
    v16 = v15 != 0;
    if ( (((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
       && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v16 & ((((unsigned __int8)startPos + 11) & 7) >= v15) )
    {
      v16 = 12LL;
      __asan_report_load_n(startPos, 12LL);
    }
    *(_QWORD *)&straightPath->x = *(_QWORD *)&startPos->x;
    straightPath->z = startPos->z;
    if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
      __asan_report_load8(path, v16);
    v17 = *path;
    if ( *(_BYTE *)(((unsigned __int64)straightPathRefs >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *straightPathRefs = v17;
    v18 = (unsigned __int8)straightPathFlags & 7;
    if ( *(_BYTE *)(((unsigned __int64)straightPathFlags >> 3) + 0x7FFF8000) != 0
      && (char)v18 >= *(_BYTE *)(((unsigned __int64)straightPathFlags >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(straightPathFlags);
    }
    *straightPathFlags = 1;
    apexIndex = 0;
    n = 1;
    if ( pathSize > 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v18);
      startTile = DynamicNavMesh::GetTileByRef(thisa->m_NavMesh, *path);
      v19 = startPos;
      *(Vector3f *)(v10 + 32) = WorldToTileSafe(startTile, startPos);
      Vector3f::Vector3f((Vector3f *const)(v10 + 64), 0.0, 0.0, 0.0);
      Vector3f::Vector3f((Vector3f *const)(v10 + 96), 0.0, 0.0, 0.0);
      leftIndex = -1;
      rightIndex = -1;
      for ( i = 1; i <= pathSize; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, v19);
        m_NavMesh = thisa->m_NavMesh;
        v21 = (unsigned __int64)&path[apexIndex];
        v22 = *(unsigned __int8 *)((v21 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v22 )
          v21 = __asan_report_load8(&path[apexIndex], v22);
        v23 = *(_QWORD *)v21;
        tile = DynamicNavMesh::GetTileByRef(m_NavMesh, *(_QWORD *)v21);
        Vector3f::Vector3f((Vector3f *const)(v10 + 128));
        Vector3f::Vector3f((Vector3f *const)(v10 + 160));
        if ( i == pathSize )
        {
          *(Vector3f *)(v10 + 160) = WorldToTileSafe(tile, endPos);
          v24 = v10 + 160;
          if ( (char)((v10 - 96) & 7) >= *(_BYTE *)(((v10 + 160) >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((v10 + 160) >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v10 + 171) >> 3) + 0x7FFF8000) != 0
            && (char)((v10 - 96 + 11) & 7) >= *(_BYTE *)(((v10 + 171) >> 3) + 0x7FFF8000) )
          {
            v24 = __asan_report_load_n(v10 + 160, 12LL);
          }
          *(_QWORD *)(v10 + 128) = *(_QWORD *)v24;
          *(_DWORD *)(v10 + 136) = *(_DWORD *)(v24 + 8);
        }
        else
        {
          v25 = (unsigned __int64)&path[i];
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            v25 = __asan_report_load8(&path[i], v23);
          v26 = *(_QWORD *)v25;
          v27 = (unsigned __int64)&path[i - 1];
          v28 = *(unsigned __int8 *)((v27 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v28 )
            v27 = __asan_report_load8(&path[i - 1], v28);
          v29 = *(_QWORD *)v27;
          PortalPoints = NavMeshQuery::GetPortalPoints(
                           thisa,
                           *(_QWORD *)v27,
                           v26,
                           (Vector3f *)(v10 + 128),
                           (Vector3f *)(v10 + 160));
          if ( NavMeshStatusFailed(PortalPoints) )
          {
            result = -2147483640;
            goto LABEL_106;
          }
          if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
            __asan_report_load8(thisa, v29);
          v31 = thisa->m_NavMesh;
          v32 = (unsigned __int64)&path[i - 1];
          v33 = *(unsigned __int8 *)((v32 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v33 )
            v32 = __asan_report_load8(&path[i - 1], v33);
          v34 = *(_QWORD *)v32;
          v35 = v31;
          if ( !DynamicNavMesh::IsValidPolyRef(v31, *(_QWORD *)v32) )
          {
            __asan_handle_no_return(v35);
            __assert_fail(
              "m_NavMesh->IsValidPolyRef(path[i - 1])",
              "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
              0x4C9u,
              "NavMeshStatus NavMeshQuery::FindStraightPath(const Vector3f&, const Vector3f&, const NavMeshPolyRef*, int,"
              " Vector3f*, unsigned char*, NavMeshPolyRef*, int*, int) const");
          }
          if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
            __asan_report_load8(thisa, v34);
          v36 = thisa->m_NavMesh;
          v37 = (unsigned __int64)&path[i];
          v38 = *(unsigned __int8 *)((v37 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v38 )
            v37 = __asan_report_load8(&path[i], v38);
          v39 = v36;
          if ( !DynamicNavMesh::IsValidPolyRef(v36, *(_QWORD *)v37) )
          {
            __asan_handle_no_return(v39);
            __assert_fail(
              "m_NavMesh->IsValidPolyRef(path[i])",
              "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
              0x4CAu,
              "NavMeshStatus NavMeshQuery::FindStraightPath(const Vector3f&, const Vector3f&, const NavMeshPolyRef*, int,"
              " Vector3f*, unsigned char*, NavMeshPolyRef*, int*, int) const");
          }
          *(Vector3f *)(v10 + 128) = WorldToTileSafe(tile, (const Vector3f *)(v10 + 128));
          *(Vector3f *)(v10 + 160) = WorldToTileSafe(tile, (const Vector3f *)(v10 + 160));
        }
        *(Vector3f *)(v10 + 128) = operator-((const Vector3f *)(v10 + 128), (const Vector3f *)(v10 + 32));
        *(Vector3f *)(v10 + 160) = operator-((const Vector3f *)(v10 + 160), (const Vector3f *)(v10 + 32));
        if ( Perp2D((const Vector3f *)(v10 + 128), (const Vector3f *)(v10 + 160)) < 0.0 )
          Swap<Vector3f>((Vector3f *)(v10 + 128), (Vector3f *)(v10 + 160));
        if ( Perp2D((const Vector3f *)(v10 + 64), (const Vector3f *)(v10 + 160)) >= 0.0 )
        {
          if ( Perp2D((const Vector3f *)(v10 + 96), (const Vector3f *)(v10 + 128)) <= 0.0 )
          {
            if ( Perp2D((const Vector3f *)(v10 + 64), (const Vector3f *)(v10 + 128)) >= 0.0 )
            {
              *(_QWORD *)(v10 + 64) = *(_QWORD *)(v10 + 128);
              *(_DWORD *)(v10 + 72) = *(_DWORD *)(v10 + 136);
              leftIndex = i;
            }
            v19 = (const Vector3f *)(v10 + 160);
            if ( Perp2D((const Vector3f *)(v10 + 96), (const Vector3f *)(v10 + 160)) <= 0.0 )
            {
              *(_QWORD *)(v10 + 96) = *(_QWORD *)(v10 + 160);
              *(_DWORD *)(v10 + 104) = *(_DWORD *)(v10 + 168);
              rightIndex = i;
            }
          }
          else
          {
            p = operator+((const Vector3f *)(v10 + 32), (const Vector3f *)(v10 + 96));
            *(Vector3f *)(v10 + 192) = TileToWorldSafe(tile, &p);
            n = NavMeshQuery::RetracePortals(
                  thisa,
                  apexIndex,
                  rightIndex,
                  path,
                  n,
                  (const Vector3f *)(v10 + 192),
                  straightPath,
                  straightPathFlags,
                  straightPathRefs,
                  maxStraightPath);
            if ( n == maxStraightPath )
            {
              if ( *(_BYTE *)(((unsigned __int64)straightPathCount >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)straightPathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)straightPathCount >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_store4(straightPathCount);
              }
              *straightPathCount = n;
              result = 1073741840;
              goto LABEL_106;
            }
            v19 = (const Vector3f *)(v10 + 192);
            *(Vector3f *)(v10 + 32) = WorldToTileSafe(tile, (const Vector3f *)(v10 + 192));
            Vector3f::SetZero((Vector3f *const)(v10 + 64));
            Vector3f::SetZero((Vector3f *const)(v10 + 96));
            apexIndex = rightIndex;
            i = rightIndex;
          }
        }
        else
        {
          p = operator+((const Vector3f *)(v10 + 32), (const Vector3f *)(v10 + 64));
          *(Vector3f *)(v10 + 192) = TileToWorldSafe(tile, &p);
          n = NavMeshQuery::RetracePortals(
                thisa,
                apexIndex,
                leftIndex,
                path,
                n,
                (const Vector3f *)(v10 + 192),
                straightPath,
                straightPathFlags,
                straightPathRefs,
                maxStraightPath);
          if ( n == maxStraightPath )
          {
            if ( *(_BYTE *)(((unsigned __int64)straightPathCount >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)straightPathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)straightPathCount >> 3)
                                                                                  + 0x7FFF8000) )
            {
              __asan_report_store4(straightPathCount);
            }
            *straightPathCount = n;
            result = 1073741840;
            goto LABEL_106;
          }
          v19 = (const Vector3f *)(v10 + 192);
          *(Vector3f *)(v10 + 32) = WorldToTileSafe(tile, (const Vector3f *)(v10 + 192));
          Vector3f::SetZero((Vector3f *const)(v10 + 64));
          Vector3f::SetZero((Vector3f *const)(v10 + 96));
          apexIndex = leftIndex;
          i = leftIndex;
        }
      }
    }
    if ( n > 0 && Vector3f::operator==(&straightPath[n - 1], endPos) )
      --n;
    na = NavMeshQuery::RetracePortals(
           thisa,
           apexIndex,
           pathSize - 1,
           path,
           n,
           endPos,
           straightPath,
           straightPathFlags,
           straightPathRefs,
           maxStraightPath);
    if ( na == maxStraightPath )
    {
      if ( *(_BYTE *)(((unsigned __int64)straightPathCount >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)straightPathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)straightPathCount >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(straightPathCount);
      }
      *straightPathCount = na;
      result = 1073741840;
    }
    else
    {
      v41 = (unsigned __int64)&straightPathFlags[na - 1];
      if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) != 0
        && ((na - 1 + (unsigned __int8)straightPathFlags) & 7) >= *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&straightPathFlags[na - 1]);
      }
      *(_BYTE *)v41 = 2;
      if ( *(_BYTE *)(((unsigned __int64)straightPathCount >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)straightPathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)straightPathCount >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(straightPathCount);
      }
      *straightPathCount = na;
      result = 0x40000000;
    }
  }
LABEL_106:
  if ( v57 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1310: range 000000000CC54ACC-000000000CC55CEA
NavMeshStatus __cdecl NavMeshQuery::MoveAlongSurface(
        const NavMeshQuery *const this,
        NavMeshPolyRef startRef,
        const Vector3f *startPos,
        const Vector3f *endPos,
        const QueryFilter *filter,
        Vector3f *resultPos,
        NavMeshPolyRef *visited,
        int *visitedCount,
        const int maxVisitedSize)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  char *v11; // rbx
  _DWORD *v12; // r12
  NavMeshStatus result; // eax
  unsigned int PolyFlags; // edx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  NavMeshNode *v17; // rcx
  int v18; // eax
  const Vector3f *p_pos; // rsi
  float v20; // xmm1_4
  __m128i v21; // xmm0
  __int64 v22; // r14
  Vector3f *v23; // r15
  int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // ecx
  NavMeshNode *v29; // rcx
  int v30; // eax
  int v31; // eax
  NavMeshNodePool *m_TinyNodePool; // rcx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  char v35; // dl
  NavMeshPolyRef id; // rcx
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  NavMeshNodePool *v40; // rcx
  const NavMeshQuery *thisa; // [rsp+38h] [rbp-4C8h]
  NavMeshStatus status; // [rsp+44h] [rbp-4BCh]
  int nstack; // [rsp+48h] [rbp-4B8h]
  float bestDist; // [rsp+4Ch] [rbp-4B4h]
  int i; // [rsp+50h] [rbp-4B0h]
  int i_0; // [rsp+54h] [rbp-4ACh]
  int j; // [rsp+58h] [rbp-4A8h]
  int nneis; // [rsp+5Ch] [rbp-4A4h]
  int k; // [rsp+60h] [rbp-4A0h]
  int n; // [rsp+64h] [rbp-49Ch]
  float searchRadSqr; // [rsp+68h] [rbp-498h]
  int nverts; // [rsp+6Ch] [rbp-494h]
  float distSqr; // [rsp+70h] [rbp-490h]
  float distSqr_0; // [rsp+74h] [rbp-48Ch]
  NavMeshNode *bestNode; // [rsp+78h] [rbp-488h]
  NavMeshNode *prev; // [rsp+80h] [rbp-480h]
  NavMeshNode *node; // [rsp+88h] [rbp-478h]
  NavMeshNode *nodea; // [rsp+88h] [rbp-478h]
  const NavMeshTile *startTile; // [rsp+90h] [rbp-470h]
  NavMeshNode *startNode; // [rsp+98h] [rbp-468h]
  NavMeshNode *curNode; // [rsp+A0h] [rbp-460h]
  NavMeshPolyRef curRef; // [rsp+A8h] [rbp-458h]
  NavMeshPolyRef *neis; // [rsp+B0h] [rbp-450h]
  NavMeshPolyRef neiRef; // [rsp+B8h] [rbp-448h]
  NavMeshNode *neighbourNode; // [rsp+C0h] [rbp-440h]
  NavMeshNode *next; // [rsp+E8h] [rbp-418h]
  char v72[1040]; // [rsp+F0h] [rbp-410h] BYREF

  thisa = this;
  v9 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)992;
    v10 = __asan_stack_malloc_4(992LL);
    if ( v10 )
      v9 = v10;
  }
  v11 = (char *)(v9 + 992);
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "8 32 4 9 tseg:1435 48 12 15 localStart:1330 80 12 13 localEnd:1331 112 12 12 bestPos:1347 144 12"
                        " 14 searchPos:1353 176 72 10 verts:1357 288 192 15 neighbours:1358 544 384 10 stack:1334";
  *(_QWORD *)(v9 + 16) = NavMeshQuery::MoveAlongSurface;
  v12 = (_DWORD *)(v9 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = 61956;
  v12[536862721] = 0x4000000;
  v12[536862722] = 62194;
  v12[536862722] = 0x4000000;
  v12[536862723] = 62194;
  v12[536862723] = 0x4000000;
  v12[536862724] = 62194;
  v12[536862724] = 0x4000000;
  v12[536862725] = 62194;
  v12[536862727] = -234881024;
  v12[536862728] = -218959118;
  v12[536862735] = -218959118;
  v12[536862736] = -218959118;
  v12[536862749] = -202116109;
  v12[536862750] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, startRef);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x51Fu,
      "NavMeshStatus NavMeshQuery::MoveAlongSurface(NavMeshPolyRef, const Vector3f&, const Vector3f&, const QueryFilter*,"
      " Vector3f*, NavMeshPolyRef*, int*, int) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
  {
    this = (const NavMeshQuery *const)&thisa->m_TinyNodePool;
    __asan_report_load8(&thisa->m_TinyNodePool, startRef);
  }
  if ( !thisa->m_TinyNodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_TinyNodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x520u,
      "NavMeshStatus NavMeshQuery::MoveAlongSurface(NavMeshPolyRef, const Vector3f&, const Vector3f&, const QueryFilter*,"
      " Vector3f*, NavMeshPolyRef*, int*, int) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)visitedCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)visitedCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)visitedCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(visitedCount);
  }
  *visitedCount = 0;
  if ( startRef )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, ((unsigned __int8)visitedCount & 7u) + 3);
    if ( !DynamicNavMesh::IsValidPolyRef(thisa->m_NavMesh, startRef) )
    {
      result = -2147483640;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, startRef);
      PolyFlags = DynamicNavMesh::GetPolyFlags(thisa->m_NavMesh, startRef);
      v15 = PolyFlags;
      if ( !QueryFilter::PassFilter(filter, PolyFlags) )
      {
        result = 0x80000000;
      }
      else
      {
        status = 0x40000000;
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, v15);
        startTile = DynamicNavMesh::GetTileByRef(thisa->m_NavMesh, startRef);
        *(Vector3f *)(v9 + 48) = WorldToTile(startTile, startPos);
        *(Vector3f *)(v9 + 80) = WorldToTile(startTile, endPos);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_TinyNodePool, endPos);
        NavMeshNodePool::Clear(thisa->m_TinyNodePool);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_TinyNodePool, endPos);
        startNode = NavMeshNodePool::GetNode(thisa->m_TinyNodePool, startRef);
        v16 = (unsigned __int64)startNode + 20;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)((v16 & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          __asan_report_store4(v16);
        *((_DWORD *)startNode + 5) &= 0xC0000000;
        if ( *(_BYTE *)(((unsigned __int64)&startNode->cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)startNode + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startNode->cost >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&startNode->cost);
        }
        startNode->cost = 0.0;
        if ( *(_BYTE *)(((unsigned __int64)&startNode->total >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&startNode->total >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&startNode->total);
        }
        startNode->total = 0.0;
        if ( *(_BYTE *)(((unsigned __int64)&startNode->id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        startNode->id = startRef;
        *((_BYTE *)startNode + 23) = *((_BYTE *)startNode + 23) & 0x3F | 0x80;
        v17 = startNode;
        v18 = 0;
        nstack = 1;
        if ( *(_BYTE *)(((v9 + 544) >> 3) + 0x7FFF8000) )
          v18 = __asan_report_store8();
        *(_QWORD *)&v11[8 * v18 - 448] = v17;
        *(_QWORD *)(v9 + 112) = *(_QWORD *)(v9 + 48);
        *(_DWORD *)(v9 + 120) = *(_DWORD *)(v9 + 56);
        bestDist = 3.4028235e38;
        bestNode = 0LL;
        *(Vector3f *)(v9 + 144) = Lerp((const Vector3f *)(v9 + 48), (const Vector3f *)(v9 + 80), 0.5);
        p_pos = (const Vector3f *)(v9 + 80);
        v20 = Distance((const Vector3f *)(v9 + 48), (const Vector3f *)(v9 + 80)) / 2.0;
        v21 = (__m128i)0x3A83126Fu;
        *(float *)(v9 + 32) = v20 + 0.001;
        *(float *)v21.m128i_i32 = Sqr<float>((const float *)(v9 + 32));
        searchRadSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
        v22 = 5LL;
        v23 = (Vector3f *)(v9 + 176);
        while ( v22 >= 0 )
        {
          Vector3f::Vector3f(v23++);
          --v22;
        }
        while ( nstack )
        {
          curNode = *(NavMeshNode **)(v9 + 544);
          for ( i = 0; i < nstack - 1; ++i )
          {
            v24 = i + 1;
            if ( *(_BYTE *)(((8LL * (i + 1) + v9 + 544) >> 3) + 0x7FFF8000) )
              v24 = __asan_report_load8(8LL * v24 + v9 + 544, p_pos);
            v25 = *(_QWORD *)&v11[8 * v24 - 448];
            if ( *(_BYTE *)(((8LL * i + v9 + 544) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(_QWORD *)&v11[8 * i - 448] = v25;
          }
          --nstack;
          if ( *(_BYTE *)(((unsigned __int64)&curNode->id >> 3) + 0x7FFF8000) )
            __asan_report_load8(&curNode->id, p_pos);
          curRef = curNode->id;
          if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
            __asan_report_load8(thisa, p_pos);
          p_pos = (const Vector3f *)curRef;
          nverts = DynamicNavMesh::GetPolyGeometry(
                     thisa->m_NavMesh,
                     curRef,
                     (Vector3f *)(v9 + 176),
                     (NavMeshPolyRef *)(v9 + 288),
                     4);
          if ( nverts )
          {
            p_pos = (const Vector3f *)(v9 + 176);
            if ( PointInPolygon2D((const Vector3f *)(v9 + 80), (const Vector3f *)(v9 + 176), nverts) )
            {
              bestNode = curNode;
              *(_QWORD *)(v9 + 112) = *(_QWORD *)(v9 + 80);
              *(_DWORD *)(v9 + 120) = *(_DWORD *)(v9 + 88);
              break;
            }
            i_0 = 0;
            j = nverts - 1;
            while ( i_0 < nverts )
            {
              nneis = 0;
              neis = (NavMeshPolyRef *)(32LL * j + v9 + 288);
              for ( k = 0; k <= 3; ++k )
              {
                v26 = (unsigned __int64)&neis[k];
                if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                  v26 = __asan_report_load8(&neis[k], p_pos);
                neiRef = *(_QWORD *)v26;
                if ( !*(_QWORD *)v26 )
                  break;
                if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->m_TinyNodePool, p_pos);
                p_pos = (const Vector3f *)neiRef;
                neighbourNode = NavMeshNodePool::GetNode(thisa->m_TinyNodePool, neiRef);
                if ( neighbourNode )
                {
                  p_pos = (const Vector3f *)((((_BYTE)neighbourNode + 20) & 7u) + 3);
                  if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    *(double *)v21.m128i_i64 = __asan_report_load4((char *)neighbourNode + 20);
                  }
                  if ( ((*((_BYTE *)neighbourNode + 23) >> 6) & 2) == 0 )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                      __asan_report_load8(thisa, p_pos);
                    v27 = DynamicNavMesh::GetPolyFlags(thisa->m_NavMesh, neiRef);
                    p_pos = (const Vector3f *)v27;
                    if ( QueryFilter::PassFilter(filter, v27) )
                    {
                      p_pos = (const Vector3f *)(v9 + 144);
                      *(float *)v21.m128i_i32 = SqrDistancePointSegment2D(
                                                  (float *)(v9 + 32),
                                                  (const Vector3f *)(v9 + 144),
                                                  (const Vector3f *)(v9 + 176 + 12LL * j),
                                                  (const Vector3f *)(v9 + 176 + 12LL * i_0));
                      distSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
                      v21 = (__m128i)LODWORD(distSqr);
                      if ( distSqr <= searchRadSqr )
                      {
                        if ( nstack <= 47 )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&thisa->m_TinyNodePool, p_pos);
                          v28 = NavMeshNodePool::GetNodeIdx(thisa->m_TinyNodePool, curNode) & 0x3FFFFFFF;
                          if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                            && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode
                                                                                           + 20) >> 3)
                                                                                         + 0x7FFF8000) )
                          {
                            __asan_report_store4((char *)neighbourNode + 20);
                          }
                          *((_DWORD *)neighbourNode + 5) = v28 & 0x3FFFFFFF | *((_DWORD *)neighbourNode + 5) & 0xC0000000;
                          *((_BYTE *)neighbourNode + 23) = (((*((_BYTE *)neighbourNode + 23) >> 6) | 2) << 6) | *((_BYTE *)neighbourNode + 23) & 0x3F;
                          v29 = neighbourNode;
                          v30 = nstack++;
                          p_pos = (const Vector3f *)*(unsigned __int8 *)(((8LL * v30 + v9 + 544) >> 3) + 0x7FFF8000);
                          if ( (_BYTE)p_pos )
                            v30 = __asan_report_store8();
                          *(_QWORD *)&v11[8 * v30 - 448] = v29;
                        }
                        ++nneis;
                      }
                    }
                  }
                }
              }
              if ( !nneis )
              {
                p_pos = (const Vector3f *)(v9 + 80);
                *(float *)v21.m128i_i32 = SqrDistancePointSegment2D(
                                            (float *)(v9 + 32),
                                            (const Vector3f *)(v9 + 80),
                                            (const Vector3f *)(v9 + 176 + 12LL * j),
                                            (const Vector3f *)(v9 + 176 + 12LL * i_0));
                distSqr_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
                v21 = (__m128i)LODWORD(bestDist);
                if ( bestDist > distSqr_0 )
                {
                  p_pos = (const Vector3f *)(v9 + 176 + 12LL * i_0);
                  *(Vector3f *)(v9 + 112) = Lerp((const Vector3f *)(v9 + 176 + 12LL * j), p_pos, *(float *)(v9 + 32));
                  v21 = (__m128i)LODWORD(distSqr_0);
                  bestDist = distSqr_0;
                  bestNode = curNode;
                }
              }
              v31 = i_0++;
              j = v31;
            }
          }
        }
        n = 0;
        if ( bestNode )
        {
          prev = 0LL;
          node = bestNode;
          do
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->m_TinyNodePool, p_pos);
            m_TinyNodePool = thisa->m_TinyNodePool;
            if ( *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)node + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4((char *)node + 20);
            }
            v33 = *((_DWORD *)node + 5) & 0x3FFFFFFF;
            next = NavMeshNodePool::GetNodeAtIdx(m_TinyNodePool, v33);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->m_TinyNodePool, v33);
            p_pos = &prev->pos;
            v34 = NavMeshNodePool::GetNodeIdx(thisa->m_TinyNodePool, prev) & 0x3FFFFFFF;
            v35 = *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000);
            LOBYTE(p_pos) = v35 != 0;
            if ( v35 != 0 && (char)((((_BYTE)node + 20) & 7) + 3) >= v35 )
              __asan_report_store4((char *)node + 20);
            *((_DWORD *)node + 5) = v34 & 0x3FFFFFFF | *((_DWORD *)node + 5) & 0xC0000000;
            prev = node;
            node = next;
          }
          while ( next );
          nodea = prev;
          while ( 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&nodea->id >> 3) + 0x7FFF8000) )
              __asan_report_load8(&nodea->id, p_pos);
            id = nodea->id;
            v37 = n++;
            v38 = (unsigned __int64)&visited[v37];
            v39 = *(unsigned __int8 *)((v38 >> 3) + 0x7FFF8000);
            if ( (_BYTE)v39 )
              v38 = __asan_report_store8();
            *(_QWORD *)v38 = id;
            if ( n >= maxVisitedSize )
              break;
            if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->m_TinyNodePool, v39);
            v40 = thisa->m_TinyNodePool;
            if ( *(_BYTE *)((((unsigned __int64)nodea + 20) >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)nodea + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)nodea + 20) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4((char *)nodea + 20);
            }
            p_pos = (const Vector3f *)(*((_DWORD *)nodea + 5) & 0x3FFFFFFF);
            nodea = NavMeshNodePool::GetNodeAtIdx(v40, (unsigned int)p_pos);
            if ( !nodea )
              goto LABEL_113;
          }
          status = 1073741840;
        }
LABEL_113:
        if ( ((unsigned __int8)resultPos & 7) >= *(_BYTE *)(((unsigned __int64)resultPos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)resultPos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&resultPos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)resultPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&resultPos->z + 3) >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_store_n(resultPos, 12LL);
        }
        *resultPos = TileToWorld(startTile, (const Vector3f *)(v9 + 112));
        if ( *(_BYTE *)(((unsigned __int64)visitedCount >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)visitedCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)visitedCount >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_store4(visitedCount);
        }
        *visitedCount = n;
        result = status;
      }
    }
  }
  else
  {
    result = -2147483640;
  }
  if ( v72 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8074) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8078) = -168430091;
  }
  return result;
};

// Line 1486: range 000000000CC55CEC-000000000CC57A0C
NavMeshStatus __cdecl NavMeshQuery::GetPortalPoints(
        const NavMeshQuery *const this,
        NavMeshPolyRef from,
        NavMeshPolyRef to,
        Vector3f *left,
        Vector3f *right)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  void *m_NavMesh; // rdi
  __int64 v9; // rsi
  char v10; // dl
  bool v11; // di
  char v12; // dl
  Vector3f *mapped; // rax
  char v14; // dl
  bool v15; // di
  char v16; // dl
  Vector3f *v17; // rax
  char v18; // dl
  bool v19; // di
  char v20; // dl
  Vector3f *v21; // rax
  char v22; // dl
  bool v23; // di
  char v24; // dl
  Vector3f *v25; // rax
  char v26; // dl
  bool v27; // di
  char v28; // dl
  Vector3f *v29; // rax
  char v30; // dl
  bool v31; // di
  char v32; // dl
  Vector3f *v33; // rax
  char v34; // dl
  bool v35; // di
  char v36; // dl
  Vector3f *v37; // rax
  char v38; // dl
  bool v39; // di
  char v40; // dl
  Vector3f *v41; // rax
  float *v42; // rax
  float *v43; // rdx
  float *v44; // rax
  float *v45; // rdx
  NavMeshStatus result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  NavMeshStatus v48; // eax
  void *p_edge; // rdi
  unsigned __int8 edge; // si
  __int64 v51; // rdx
  char v52; // cl
  int v53; // esi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rsi
  char v58; // cl
  __int64 v59; // rdx
  char v60; // cl
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  float *v66; // rax
  float *v67; // rdx
  float *v68; // rax
  float *v69; // rdx
  char v70; // cl
  float *p_b; // rsi
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rax
  Vector3f *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rax
  Vector3f *v79; // rdi
  Vector3f *v80; // rdi
  Vector3f *v81; // rdi
  NavMeshPolyRef froma; // [rsp+20h] [rbp-1A0h]
  const NavMeshQuery *thisa; // [rsp+28h] [rbp-198h]
  __int16 fromOffMeshCon; // [rsp+35h] [rbp-18Bh]
  float __a; // [rsp+38h] [rbp-188h] BYREF
  float __b; // [rsp+3Ch] [rbp-184h] BYREF
  int nextEdge; // [rsp+40h] [rbp-180h]
  int v0; // [rsp+44h] [rbp-17Ch]
  int v1; // [rsp+48h] [rbp-178h]
  float s_0; // [rsp+4Ch] [rbp-174h]
  float tmin_0; // [rsp+50h] [rbp-170h]
  float tmax_0; // [rsp+54h] [rbp-16Ch]
  int iv; // [rsp+58h] [rbp-168h]
  float s; // [rsp+5Ch] [rbp-164h]
  float tmin; // [rsp+60h] [rbp-160h]
  float tmax; // [rsp+64h] [rbp-15Ch]
  const NavMeshLink *link_0; // [rsp+68h] [rbp-158h]
  const NavMeshLink *link; // [rsp+70h] [rbp-150h]
  const NavMeshLink *flink; // [rsp+78h] [rbp-148h]
  const OffMeshConnection *con_0; // [rsp+80h] [rbp-140h]
  const DynamicOffMeshConnection *dcon_0; // [rsp+88h] [rbp-138h]
  const OffMeshConnection *con; // [rsp+90h] [rbp-130h]
  const DynamicOffMeshConnection *dcon; // [rsp+98h] [rbp-128h]
  common::milog::MiLogStream v107; // [rsp+A0h] [rbp-120h] BYREF
  char v108[256]; // [rsp+C0h] [rbp-100h] BYREF

  thisa = this;
  froma = from;
  v5 = (unsigned __int64)v108;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)224;
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 8 13 fromTile:1561 64 8 13 fromPoly:1562 96 8 11 toTile:1566 128 8 11 toPoly:1567 160 12 7 "
                        "v0:1501 192 12 7 v1:1501";
  *(_QWORD *)(v5 + 16) = NavMeshQuery::GetPortalPoints;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -219020288;
  v7[536862726] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, from);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x5CFu,
      "NavMeshStatus NavMeshQuery::GetPortalPoints(NavMeshPolyRef, NavMeshPolyRef, Vector3f*, Vector3f*) const");
  }
  LOBYTE(fromOffMeshCon) = NavMeshPolyRefHelper::DecodePolyIdType(from) == 1;
  HIBYTE(fromOffMeshCon) = NavMeshPolyRefHelper::DecodePolyIdType(to) == 1;
  if ( fromOffMeshCon )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, from);
    m_NavMesh = (void *)thisa->m_NavMesh;
    for ( link_0 = DynamicNavMesh::GetFirstLink(thisa->m_NavMesh, from);
          ;
          link_0 = DynamicNavMesh::GetNextLink(thisa->m_NavMesh, link_0) )
    {
      if ( !link_0 )
      {
        result = 0x80000000;
        goto LABEL_169;
      }
      if ( *(_BYTE *)(((unsigned __int64)link_0 >> 3) + 0x7FFF8000) )
      {
        m_NavMesh = (void *)link_0;
        __asan_report_load8(link_0, from);
      }
      if ( to == link_0->ref )
        break;
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, from);
      from = (NavMeshPolyRef)link_0;
      m_NavMesh = (void *)thisa->m_NavMesh;
    }
    v9 = ((_BYTE)link_0 + 12) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&link_0->edge >> 3) + 0x7FFF8000) != 0
      && (char)v9 >= *(_BYTE *)(((unsigned __int64)&link_0->edge >> 3) + 0x7FFF8000) )
    {
      m_NavMesh = &link_0->edge;
      __asan_report_load1(&link_0->edge);
    }
    iv = link_0->edge;
    if ( link_0->edge >= 2u )
    {
      __asan_handle_no_return(m_NavMesh);
      __assert_fail(
        "link->edge == 0 || link->edge == 1",
        "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
        0x5DBu,
        "NavMeshStatus NavMeshQuery::GetPortalPoints(NavMeshPolyRef, NavMeshPolyRef, Vector3f*, Vector3f*) const");
    }
    Vector3f::Vector3f((Vector3f *const)(v5 + 160));
    Vector3f::Vector3f((Vector3f *const)(v5 + 192));
    if ( (_BYTE)fromOffMeshCon )
    {
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v9);
      con = DynamicNavMesh::GetOffMeshConnection(thisa->m_NavMesh, froma);
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, froma);
      dcon = DynamicNavMesh::GetDynamicOffMeshConnection(thisa->m_NavMesh, froma);
      if ( dcon )
      {
        v10 = *(_BYTE *)(((unsigned __int64)dcon->endPoints[iv].mapped >> 3) + 0x7FFF8000);
        v11 = (((unsigned __int8)dcon + 48 * iv + 12) & 7) >= v10 && v10 != 0;
        v12 = *(_BYTE *)((((unsigned __int64)&dcon->endPoints[iv].mapped[0].z + 3) >> 3) + 0x7FFF8000);
        if ( v11 || v12 != 0 && (((unsigned __int8)dcon + 48 * iv + 23) & 7) >= v12 )
          __asan_report_load_n(dcon->endPoints[iv].mapped, 12LL);
        mapped = dcon->endPoints[iv].mapped;
        *(_QWORD *)(v5 + 160) = *(_QWORD *)&mapped->x;
        *(float *)(v5 + 168) = mapped->z;
        v14 = *(_BYTE *)(((unsigned __int64)&dcon->endPoints[iv].mapped[1] >> 3) + 0x7FFF8000);
        v15 = ((48 * iv + 12 + (unsigned __int8)dcon + 12) & 7) >= v14 && v14 != 0;
        v16 = *(_BYTE *)((((unsigned __int64)&dcon->endPoints[iv].mapped[1].z + 3) >> 3) + 0x7FFF8000);
        if ( v15 || v16 != 0 && ((48 * iv + 12 + (unsigned __int8)dcon + 23) & 7) >= v16 )
          __asan_report_load_n(&dcon->endPoints[iv].mapped[1], 12LL);
        v17 = &dcon->endPoints[iv].mapped[1];
        *(_QWORD *)(v5 + 192) = *(_QWORD *)&v17->x;
        *(float *)(v5 + 200) = v17->z;
      }
      else
      {
        v18 = *(_BYTE *)(((unsigned __int64)con->endPoints[iv].mapped >> 3) + 0x7FFF8000);
        v19 = ((48 * iv + 32 + (unsigned __int8)con + 12) & 7) >= v18 && v18 != 0;
        v20 = *(_BYTE *)((((unsigned __int64)&con->endPoints[iv].mapped[0].z + 3) >> 3) + 0x7FFF8000);
        if ( v19 || v20 != 0 && ((48 * iv + 32 + (unsigned __int8)con + 23) & 7) >= v20 )
          __asan_report_load_n(con->endPoints[iv].mapped, 12LL);
        v21 = con->endPoints[iv].mapped;
        *(_QWORD *)(v5 + 160) = *(_QWORD *)&v21->x;
        *(float *)(v5 + 168) = v21->z;
        v22 = *(_BYTE *)(((unsigned __int64)&con->endPoints[iv].mapped[1] >> 3) + 0x7FFF8000);
        v23 = ((48 * iv + 44 + (unsigned __int8)con + 12) & 7) >= v22 && v22 != 0;
        v24 = *(_BYTE *)((((unsigned __int64)&con->endPoints[iv].mapped[1].z + 3) >> 3) + 0x7FFF8000);
        if ( v23 || v24 != 0 && ((48 * iv + 44 + (unsigned __int8)con + 23) & 7) >= v24 )
          __asan_report_load_n(&con->endPoints[iv].mapped[1], 12LL);
        v25 = &con->endPoints[iv].mapped[1];
        *(_QWORD *)(v5 + 192) = *(_QWORD *)&v25->x;
        *(float *)(v5 + 200) = v25->z;
      }
    }
    else
    {
      if ( !HIBYTE(fromOffMeshCon) )
      {
        common::milog::MiLogStream::create(
          &v107,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
          "GetPortalPoints",
          1535);
        common::milog::MiLogStream::operator()(&v107, "Expected 'to' or 'from' to be an off-mesh connection.");
        common::milog::MiLogStream::~MiLogStream(&v107);
        __asan_handle_no_return(&v107);
        __assert_fail(
          "false",
          "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
          0x5FFu,
          "NavMeshStatus NavMeshQuery::GetPortalPoints(NavMeshPolyRef, NavMeshPolyRef, Vector3f*, Vector3f*) const");
      }
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v9);
      con_0 = DynamicNavMesh::GetOffMeshConnection(thisa->m_NavMesh, to);
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, to);
      dcon_0 = DynamicNavMesh::GetDynamicOffMeshConnection(thisa->m_NavMesh, to);
      if ( dcon_0 )
      {
        v26 = *(_BYTE *)(((unsigned __int64)dcon_0->endPoints[iv].mapped >> 3) + 0x7FFF8000);
        v27 = (((unsigned __int8)dcon_0 + 48 * iv + 12) & 7) >= v26 && v26 != 0;
        v28 = *(_BYTE *)((((unsigned __int64)&dcon_0->endPoints[iv].mapped[0].z + 3) >> 3) + 0x7FFF8000);
        if ( v27 || v28 != 0 && (((unsigned __int8)dcon_0 + 48 * iv + 23) & 7) >= v28 )
          __asan_report_load_n(dcon_0->endPoints[iv].mapped, 12LL);
        v29 = dcon_0->endPoints[iv].mapped;
        *(_QWORD *)(v5 + 160) = *(_QWORD *)&v29->x;
        *(float *)(v5 + 168) = v29->z;
        v30 = *(_BYTE *)(((unsigned __int64)&dcon_0->endPoints[iv].mapped[1] >> 3) + 0x7FFF8000);
        v31 = ((48 * iv + 12 + (unsigned __int8)dcon_0 + 12) & 7) >= v30 && v30 != 0;
        v32 = *(_BYTE *)((((unsigned __int64)&dcon_0->endPoints[iv].mapped[1].z + 3) >> 3) + 0x7FFF8000);
        if ( v31 || v32 != 0 && ((48 * iv + 12 + (unsigned __int8)dcon_0 + 23) & 7) >= v32 )
          __asan_report_load_n(&dcon_0->endPoints[iv].mapped[1], 12LL);
        v33 = &dcon_0->endPoints[iv].mapped[1];
        *(_QWORD *)(v5 + 192) = *(_QWORD *)&v33->x;
        *(float *)(v5 + 200) = v33->z;
      }
      else
      {
        v34 = *(_BYTE *)(((unsigned __int64)con_0->endPoints[iv].mapped >> 3) + 0x7FFF8000);
        v35 = ((48 * iv + 32 + (unsigned __int8)con_0 + 12) & 7) >= v34 && v34 != 0;
        v36 = *(_BYTE *)((((unsigned __int64)&con_0->endPoints[iv].mapped[0].z + 3) >> 3) + 0x7FFF8000);
        if ( v35 || v36 != 0 && ((48 * iv + 32 + (unsigned __int8)con_0 + 23) & 7) >= v36 )
          __asan_report_load_n(con_0->endPoints[iv].mapped, 12LL);
        v37 = con_0->endPoints[iv].mapped;
        *(_QWORD *)(v5 + 160) = *(_QWORD *)&v37->x;
        *(float *)(v5 + 168) = v37->z;
        v38 = *(_BYTE *)(((unsigned __int64)&con_0->endPoints[iv].mapped[1] >> 3) + 0x7FFF8000);
        v39 = ((48 * iv + 44 + (unsigned __int8)con_0 + 12) & 7) >= v38 && v38 != 0;
        v40 = *(_BYTE *)((((unsigned __int64)&con_0->endPoints[iv].mapped[1].z + 3) >> 3) + 0x7FFF8000);
        if ( v39 || v40 != 0 && ((48 * iv + 44 + (unsigned __int8)con_0 + 23) & 7) >= v40 )
          __asan_report_load_n(&con_0->endPoints[iv].mapped[1], 12LL);
        v41 = &con_0->endPoints[iv].mapped[1];
        *(_QWORD *)(v5 + 192) = *(_QWORD *)&v41->x;
        *(float *)(v5 + 200) = v41->z;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&link_0->bmin >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)link_0 + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->bmin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&link_0->bmin);
    }
    if ( link_0->bmin )
      goto LABEL_59;
    if ( *(_BYTE *)(((unsigned __int64)&link_0->bmax >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)link_0 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->bmax >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&link_0->bmax);
    }
    if ( link_0->bmax == 0xFF )
    {
      if ( ((unsigned __int8)left & 7) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)left + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(left, 12LL);
      }
      *(_QWORD *)&left->x = *(_QWORD *)(v5 + 160);
      left->z = *(float *)(v5 + 168);
      if ( ((unsigned __int8)right & 7) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)right + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(right, 12LL);
      }
      *(_QWORD *)&right->x = *(_QWORD *)(v5 + 192);
      right->z = *(float *)(v5 + 200);
    }
    else
    {
LABEL_59:
      s = 0.0039215689;
      __b = 0.0;
      if ( *(_BYTE *)(((unsigned __int64)&link_0->bmin >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)link_0 + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->bmin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&link_0->bmin);
      }
      __a = 0.0039215689 * (float)link_0->bmin;
      v42 = (float *)std::max<float>(&__a, &__b);
      v43 = v42;
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v42);
      }
      tmin = *v43;
      __b = 1.0;
      if ( *(_BYTE *)(((unsigned __int64)&link_0->bmax >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)link_0 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->bmax >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&link_0->bmax);
      }
      __a = 0.0039215689 * (float)link_0->bmax;
      v44 = (float *)std::min<float>(&__a, &__b);
      v45 = v44;
      if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v44);
      }
      tmax = *v45;
      if ( ((unsigned __int8)left & 7) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)left + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(left, 12LL);
      }
      *left = Lerp((const Vector3f *)(v5 + 160), (const Vector3f *)(v5 + 192), tmin);
      if ( ((unsigned __int8)right & 7) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)right + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(right, 12LL);
      }
      *right = Lerp((const Vector3f *)(v5 + 160), (const Vector3f *)(v5 + 192), tmax);
    }
    result = 0x40000000;
  }
  else
  {
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, from);
    TileAndPolyByRef = DynamicNavMesh::GetTileAndPolyByRef(
                         thisa->m_NavMesh,
                         from,
                         (const NavMeshTile **)(v5 + 32),
                         (const NavMeshPoly **)(v5 + 64));
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = -2147483640;
    }
    else
    {
      *(_QWORD *)(v5 + 96) = 0LL;
      *(_QWORD *)(v5 + 128) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, from);
      v48 = DynamicNavMesh::GetTileAndPolyByRef(
              thisa->m_NavMesh,
              to,
              (const NavMeshTile **)(v5 + 96),
              (const NavMeshPoly **)(v5 + 128));
      if ( NavMeshStatusFailed(v48) )
      {
        result = -2147483640;
      }
      else
      {
        link = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, to);
        p_edge = (void *)thisa->m_NavMesh;
        for ( flink = DynamicNavMesh::GetFirstLink(thisa->m_NavMesh, from);
              flink;
              flink = DynamicNavMesh::GetNextLink(thisa->m_NavMesh, flink) )
        {
          if ( *(_BYTE *)(((unsigned __int64)flink >> 3) + 0x7FFF8000) )
          {
            p_edge = (void *)flink;
            __asan_report_load8(flink, from);
          }
          if ( to == flink->ref )
          {
            link = flink;
            break;
          }
          if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
            __asan_report_load8(thisa, from);
          from = (NavMeshPolyRef)flink;
          p_edge = (void *)thisa->m_NavMesh;
        }
        if ( link )
        {
          if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
          {
            p_edge = &link->edge;
            __asan_report_load1(&link->edge);
          }
          edge = link->edge;
          v51 = *(_QWORD *)(v5 + 64);
          v52 = *(_BYTE *)(((unsigned __int64)(v51 + 28) >> 3) + 0x7FFF8000);
          LOBYTE(p_edge) = v52 != 0;
          if ( v52 != 0 && ((v51 + 28) & 7) >= v52 )
          {
            p_edge = (void *)(v51 + 28);
            __asan_report_load1(v51 + 28);
          }
          if ( edge >= *(_BYTE *)(v51 + 28) )
          {
            __asan_handle_no_return(p_edge);
            __assert_fail(
              "link->edge < fromPoly->vertCount",
              "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
              0x631u,
              "NavMeshStatus NavMeshQuery::GetPortalPoints(NavMeshPolyRef, NavMeshPolyRef, Vector3f*, Vector3f*) const");
          }
          if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&link->edge);
          }
          v53 = link->edge + 1;
          v54 = *(_QWORD *)(v5 + 64);
          if ( *(_BYTE *)(((unsigned __int64)(v54 + 28) >> 3) + 0x7FFF8000) != 0
            && ((v54 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)(v54 + 28) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v54 + 28);
          }
          if ( v53 == *(unsigned __int8 *)(v54 + 28) )
            v55 = 0;
          else
            v55 = link->edge + 1;
          nextEdge = v55;
          v56 = *(_QWORD *)(v5 + 64);
          if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&link->edge);
          }
          v57 = link->edge;
          v58 = *(_BYTE *)(((unsigned __int64)(v56 + 2 * v57) >> 3) + 0x7FFF8000);
          if ( v58 != 0 && (char)(((v56 + 2 * link->edge) & 7) + 1) >= v58 )
            __asan_report_load2(v56 + 2LL * link->edge);
          v0 = *(unsigned __int16 *)(v56 + 2LL * (int)v57);
          v59 = *(_QWORD *)(v5 + 64);
          v60 = *(_BYTE *)(((unsigned __int64)(v59 + 2LL * nextEdge) >> 3) + 0x7FFF8000);
          LOBYTE(v57) = v60 != 0;
          if ( v60 != 0 && (char)(((v59 + 2 * nextEdge) & 7) + 1) >= v60 )
            __asan_report_load2(v59 + 2LL * nextEdge);
          v1 = *(unsigned __int16 *)(v59 + 2LL * nextEdge);
          v61 = *(_QWORD *)(v5 + 32);
          if ( *(_BYTE *)(((unsigned __int64)(v61 + 40) >> 3) + 0x7FFF8000) )
            v61 = __asan_report_load8(v61 + 40, v57);
          v62 = *(_QWORD *)(v61 + 40) + 12LL * v0;
          if ( ((unsigned __int8)left & 7) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)left + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(left, 12LL);
          }
          v63 = ((_DWORD)v62 + 11) & 7;
          if ( (char)(v62 & 7) >= *(_BYTE *)((v62 >> 3) + 0x7FFF8000) && *(_BYTE *)((v62 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v62 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v62 + 11) & 7) >= *(_BYTE *)(((v62 + 11) >> 3) + 0x7FFF8000) )
          {
            v63 = 12LL;
            __asan_report_load_n(v62, 12LL);
          }
          *(_QWORD *)&left->x = *(_QWORD *)v62;
          left->z = *(float *)(v62 + 8);
          v64 = *(_QWORD *)(v5 + 32);
          if ( *(_BYTE *)(((unsigned __int64)(v64 + 40) >> 3) + 0x7FFF8000) )
            v64 = __asan_report_load8(v64 + 40, v63);
          v65 = *(_QWORD *)(v64 + 40) + 12LL * v1;
          if ( ((unsigned __int8)right & 7) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)right + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(right, 12LL);
          }
          if ( (char)(v65 & 7) >= *(_BYTE *)((v65 >> 3) + 0x7FFF8000) && *(_BYTE *)((v65 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v65 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v65 + 11) & 7) >= *(_BYTE *)(((v65 + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v65, 12LL);
          }
          *(_QWORD *)&right->x = *(_QWORD *)v65;
          right->z = *(float *)(v65 + 8);
          if ( *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)link + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&link->side);
          }
          if ( link->side != 0xFF )
          {
            if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&link->bmin);
            }
            if ( link->bmin )
              goto LABEL_143;
            if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)link + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&link->bmax);
            }
            if ( link->bmax != 0xFF )
            {
LABEL_143:
              s_0 = 0.0039215689;
              __b = 0.0;
              if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(&link->bmin);
              }
              __a = 0.0039215689 * (float)link->bmin;
              v66 = (float *)std::max<float>(&__a, &__b);
              v67 = v66;
              if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v66);
              }
              tmin_0 = *v67;
              __b = 1.0;
              if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)link + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(&link->bmax);
              }
              __a = 0.0039215689 * (float)link->bmax;
              p_b = &__b;
              v68 = (float *)std::min<float>(&__a, &__b);
              v69 = v68;
              v70 = *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000);
              LOBYTE(p_b) = v70 != 0;
              if ( v70 != 0 && (char)(((unsigned __int8)v68 & 7) + 3) >= v70 )
                __asan_report_load4(v68);
              tmax_0 = *v69;
              v72 = *(_QWORD *)(v5 + 32);
              if ( *(_BYTE *)(((unsigned __int64)(v72 + 40) >> 3) + 0x7FFF8000) )
                v72 = __asan_report_load8(v72 + 40, p_b);
              v73 = *(_QWORD *)(v72 + 40) + 12LL * v1;
              v74 = *(_QWORD *)(v5 + 32);
              if ( *(_BYTE *)(((unsigned __int64)(v74 + 40) >> 3) + 0x7FFF8000) )
                v74 = __asan_report_load8(v74 + 40, v73);
              v75 = (Vector3f *)(*(_QWORD *)(v74 + 40) + 12LL * v0);
              if ( ((unsigned __int8)left & 7) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)left + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) )
              {
                v73 = 12LL;
                v75 = left;
                __asan_report_store_n(left, 12LL);
              }
              *left = Lerp(v75, (const Vector3f *)v73, tmin_0);
              v76 = *(_QWORD *)(v5 + 32);
              if ( *(_BYTE *)(((unsigned __int64)(v76 + 40) >> 3) + 0x7FFF8000) )
                v76 = __asan_report_load8(v76 + 40, v73);
              v77 = *(_QWORD *)(v76 + 40) + 12LL * v1;
              v78 = *(_QWORD *)(v5 + 32);
              if ( *(_BYTE *)(((unsigned __int64)(v78 + 40) >> 3) + 0x7FFF8000) )
                v78 = __asan_report_load8(v78 + 40, v77);
              v79 = (Vector3f *)(*(_QWORD *)(v78 + 40) + 12LL * v0);
              if ( ((unsigned __int8)right & 7) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)right + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
              {
                v77 = 12LL;
                v79 = right;
                __asan_report_store_n(right, 12LL);
              }
              *right = Lerp(v79, (const Vector3f *)v77, tmax_0);
            }
          }
          v80 = *(Vector3f **)(v5 + 32);
          if ( ((unsigned __int8)right & 7) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)right + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&right->z + 3) >> 3) + 0x7FFF8000) )
          {
            v80 = right;
            __asan_report_store_n(right, 12LL);
          }
          *right = TileToWorld((const NavMeshTile *)v80, right);
          v81 = *(Vector3f **)(v5 + 32);
          if ( ((unsigned __int8)left & 7) >= *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)left >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)left + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&left->z + 3) >> 3) + 0x7FFF8000) )
          {
            v81 = left;
            __asan_report_store_n(left, 12LL);
          }
          *left = TileToWorld((const NavMeshTile *)v81, left);
          result = 0x40000000;
        }
        else
        {
          result = -2147483640;
        }
      }
    }
  }
LABEL_169:
  if ( v108 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1617: range 000000000CC57A0E-000000000CC58F3D
NavMeshStatus __cdecl NavMeshQuery::Raycast(
        const NavMeshQuery *const this,
        NavMeshPolyRef startRef,
        const Vector3f *startPos,
        const Vector3f *endPos,
        const QueryFilter *filter,
        NavMeshRaycastResult *result,
        NavMeshPolyRef *path,
        int *pathCount,
        const int maxPath)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r12
  __int64 v12; // rsi
  NavMeshStatus v13; // eax
  const Vector3f *v14; // rsi
  __int64 v15; // r14
  Vector3f *v16; // r15
  char *v17; // rsi
  unsigned int PolyArea; // edx
  NavMeshPolyRef v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rax
  NavMeshPolyRef ref; // rdi
  int v24; // eax
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  unsigned int PolyFlags; // edx
  char v34; // al
  int v35; // eax
  double v36; // xmm0_8
  double v37; // xmm0_8
  float v38; // xmm0_4
  Vector3f *p_normal; // rsi
  const NavMeshQuery *thisa; // [rsp+38h] [rbp-208h]
  float t; // [rsp+44h] [rbp-1FCh]
  float costScale; // [rsp+48h] [rbp-1F8h]
  int n; // [rsp+4Ch] [rbp-1F4h]
  NavMeshStatus status; // [rsp+50h] [rbp-1F0h]
  int nverts; // [rsp+54h] [rbp-1ECh]
  float dt; // [rsp+58h] [rbp-1E8h]
  int nextEdge; // [rsp+5Ch] [rbp-1E4h]
  float x; // [rsp+64h] [rbp-1DCh]
  float z; // [rsp+6Ch] [rbp-1D4h]
  int a; // [rsp+70h] [rbp-1D0h]
  float dx_0; // [rsp+78h] [rbp-1C8h]
  float dz; // [rsp+7Ch] [rbp-1C4h]
  float lenSq; // [rsp+80h] [rbp-1C0h]
  float s_1; // [rsp+84h] [rbp-1BCh]
  NavMeshPolyRef curRef; // [rsp+88h] [rbp-1B8h]
  NavMeshPolyRef lastPoly; // [rsp+90h] [rbp-1B0h]
  NavMeshPolyRef nextRef; // [rsp+98h] [rbp-1A8h]
  const NavMeshLink *link; // [rsp+A0h] [rbp-1A0h]
  const NavMeshTile *startTile; // [rsp+A8h] [rbp-198h]
  unsigned __int64 left; // [rsp+B0h] [rbp-190h]
  const Vector3f *right; // [rsp+B8h] [rbp-188h]
  const Vector3f *va; // [rsp+C0h] [rbp-180h]
  unsigned __int64 vb; // [rsp+C8h] [rbp-178h]
  char v69[368]; // [rsp+D0h] [rbp-170h] BYREF

  thisa = this;
  v9 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)320;
    v10 = __asan_stack_malloc_3(320LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "9 48 4 9 tmin:1648 64 4 9 tmax:1648 80 4 11 segMin:1649 96 4 11 segMax:1649 112 4 9 lmin:1741 12"
                        "8 4 9 lmax:1742 144 12 18 localStartPos:1630 176 12 16 localEndPos:1631 208 72 10 verts:1635";
  *(_QWORD *)(v9 + 16) = NavMeshQuery::Raycast;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -234556943;
  v11[536862722] = -234556924;
  v11[536862723] = -234556924;
  v11[536862724] = 61956;
  v11[536862724] = 0x4000000;
  v11[536862725] = 62194;
  v11[536862725] = 0x4000000;
  v11[536862726] = 62194;
  v11[536862728] = -218103808;
  v11[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, startRef);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x652u,
      "NavMeshStatus NavMeshQuery::Raycast(NavMeshPolyRef, const Vector3f&, const Vector3f&, const QueryFilter*, NavMeshR"
      "aycastResult*, NavMeshPolyRef*, int*, int) const");
  }
  v12 = 0LL;
  memset(result, 0, sizeof(NavMeshRaycastResult));
  if ( pathCount )
  {
    v12 = ((unsigned __int8)pathCount & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(pathCount);
    }
    *pathCount = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, v12);
  startTile = DynamicNavMesh::GetTileByRef(thisa->m_NavMesh, startRef);
  if ( startTile )
  {
    *(Vector3f *)(v9 + 144) = WorldToTile(startTile, startPos);
    v14 = endPos;
    *(Vector3f *)(v9 + 176) = WorldToTile(startTile, endPos);
    curRef = startRef;
    lastPoly = startRef;
    v15 = 5LL;
    v16 = (Vector3f *)(v9 + 208);
    while ( v15 >= 0 )
    {
      Vector3f::Vector3f(v16++);
      --v15;
    }
    t = 0.0;
    costScale = 0.0;
    n = 0;
    status = 0x40000000;
    while ( curRef )
    {
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v14);
      nverts = DynamicNavMesh::GetPolyGeometry(thisa->m_NavMesh, curRef, (Vector3f *)(v9 + 208), 0LL, 0);
      if ( !nverts )
        break;
      v17 = (char *)(v9 + 64);
      if ( !IntersectSegmentPoly2D(
              (float *)(v9 + 48),
              (float *)(v9 + 64),
              (int *)(v9 + 80),
              (int *)(v9 + 96),
              (const Vector3f *)(v9 + 144),
              (const Vector3f *)(v9 + 176),
              (const Vector3f *)(v9 + 208),
              nverts)
        && *(_DWORD *)(v9 + 96) != -1 )
      {
        break;
      }
      if ( *(float *)(v9 + 64) > t )
      {
        dt = *(float *)(v9 + 64) - t;
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, v17);
        PolyArea = DynamicNavMesh::GetPolyArea(thisa->m_NavMesh, curRef);
        v17 = (char *)PolyArea;
        costScale = (float)(QueryFilter::GetAreaCost(filter, PolyArea) * dt) + costScale;
        t = *(float *)(v9 + 64);
      }
      lastPoly = curRef;
      if ( n >= maxPath )
      {
        status |= 0x10u;
      }
      else
      {
        v20 = curRef;
        v21 = n++;
        v22 = (unsigned __int64)&path[v21];
        v17 = (char *)*(unsigned __int8 *)((v22 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v17 )
          v22 = __asan_report_store8();
        *(_QWORD *)v22 = v20;
      }
      if ( *(_DWORD *)(v9 + 96) == -1 )
      {
        t = 1.0;
        break;
      }
      nextRef = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v17);
      v14 = (const Vector3f *)curRef;
      for ( link = DynamicNavMesh::GetFirstLink(thisa->m_NavMesh, curRef);
            link;
            link = DynamicNavMesh::GetNextLink(thisa->m_NavMesh, link) )
      {
        if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
          __asan_report_load8(link, v14);
        ref = link->ref;
        if ( NavMeshPolyRefHelper::DecodePolyIdType(link->ref) != 1 )
        {
          v14 = (const Vector3f *)(((_BYTE)link + 12) & 7);
          if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
            && (char)v14 >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
          {
            ref = (NavMeshPolyRef)&link->edge;
            __asan_report_load1(&link->edge);
          }
          if ( link->edge == *(_DWORD *)(v9 + 96) )
          {
            v14 = (const Vector3f *)(((_BYTE)link + 13) & 7);
            if ( *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) != 0
              && (char)v14 >= *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) )
            {
              ref = (NavMeshPolyRef)&link->side;
              __asan_report_load1(&link->side);
            }
            if ( link->side == 0xFF )
            {
              if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                __asan_report_load8(link, v14);
              nextRef = link->ref;
              goto LABEL_117;
            }
            if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) )
            {
              ref = (NavMeshPolyRef)&link->bmin;
              __asan_report_load1(&link->bmin);
            }
            if ( !link->bmin )
            {
              v14 = (const Vector3f *)(((_BYTE)link + 15) & 7);
              if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                && (char)v14 >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) )
              {
                ref = (NavMeshPolyRef)&link->bmax;
                __asan_report_load1(&link->bmax);
              }
              if ( link->bmax == 0xFF )
              {
                if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                  __asan_report_load8(link, v14);
                nextRef = link->ref;
                goto LABEL_117;
              }
            }
            if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
            {
              ref = (NavMeshPolyRef)&link->edge;
              __asan_report_load1(&link->edge);
            }
            if ( nverts <= link->edge )
            {
              __asan_handle_no_return(ref);
              __assert_fail(
                "link->edge < nverts",
                "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
                0x6B2u,
                "NavMeshStatus NavMeshQuery::Raycast(NavMeshPolyRef, const Vector3f&, const Vector3f&, const QueryFilter*"
                ", NavMeshRaycastResult*, NavMeshPolyRef*, int*, int) const");
            }
            if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&link->edge);
            }
            if ( nverts == link->edge + 1 )
              v24 = 0;
            else
              v24 = link->edge + 1;
            nextEdge = v24;
            if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&link->edge);
            }
            left = v9 + 208 + 12LL * link->edge;
            right = (const Vector3f *)(v9 + 208 + 12LL * nextEdge);
            if ( *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)link + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&link->side);
            }
            if ( link->side && link->side != 4 )
            {
              v14 = (const Vector3f *)(((_BYTE)link + 13) & 7);
              if ( *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) != 0
                && (char)v14 >= *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(&link->side);
              }
              if ( link->side == 2 || link->side == 6 )
              {
                if ( *(_BYTE *)((left >> 3) + 0x7FFF8000) != 0
                  && (char)((left & 7) + 3) >= *(_BYTE *)((left >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(left);
                }
                v29 = *(float *)left;
                if ( *(_BYTE *)(((v9 + 208 + 12LL * nextEdge) >> 3) + 0x7FFF8000) != 0
                  && (char)(((v9 - 48 + 12 * nextEdge) & 7) + 3) >= *(_BYTE *)(((v9 + 208 + 12LL * nextEdge) >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(right);
                }
                v30 = right->x - *(float *)left;
                if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(&link->bmin);
                }
                *(float *)(v9 + 112) = (float)((float)(0.0039215689 * (float)link->bmin) * v30) + v29;
                v31 = *(float *)left;
                v32 = right->x - *(float *)left;
                v14 = (const Vector3f *)(((_BYTE)link + 15) & 7);
                if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                  && (char)v14 >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(&link->bmax);
                }
                *(float *)(v9 + 128) = (float)((float)(0.0039215689 * (float)link->bmax) * v32) + v31;
                if ( *(float *)(v9 + 112) > *(float *)(v9 + 128) )
                {
                  v14 = (const Vector3f *)(v9 + 128);
                  std::swap<float>((float *)(v9 + 112), (float *)(v9 + 128));
                }
                x = (float)(*(float *)(v9 + 64) * (float)(*(float *)(v9 + 176) - *(float *)(v9 + 144)))
                  + *(float *)(v9 + 144);
                if ( x >= *(float *)(v9 + 112) && *(float *)(v9 + 128) >= x )
                {
                  if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                    __asan_report_load8(link, v14);
                  nextRef = link->ref;
                  goto LABEL_117;
                }
              }
            }
            else
            {
              if ( *(_BYTE *)(((left + 8) >> 3) + 0x7FFF8000) != 0
                && (char)(((left + 8) & 7) + 3) >= *(_BYTE *)(((left + 8) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(left + 8);
              }
              v25 = *(float *)(left + 8);
              if ( *(_BYTE *)(((v9 + 208 + 12LL * nextEdge + 8) >> 3) + 0x7FFF8000) != 0
                && (char)(((v9 - 48 + 12 * nextEdge + 8) & 7) + 3) >= *(_BYTE *)(((v9 + 208 + 12LL * nextEdge + 8) >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&right->z);
              }
              v26 = right->z - *(float *)(left + 8);
              if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(&link->bmin);
              }
              *(float *)(v9 + 112) = (float)((float)(0.0039215689 * (float)link->bmin) * v26) + v25;
              v27 = *(float *)(left + 8);
              v28 = right->z - v27;
              v14 = (const Vector3f *)(((_BYTE)link + 15) & 7);
              if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                && (char)v14 >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(&link->bmax);
              }
              *(float *)(v9 + 128) = (float)((float)(0.0039215689 * (float)link->bmax) * v28) + v27;
              if ( *(float *)(v9 + 112) > *(float *)(v9 + 128) )
              {
                v14 = (const Vector3f *)(v9 + 128);
                std::swap<float>((float *)(v9 + 112), (float *)(v9 + 128));
              }
              z = (float)(*(float *)(v9 + 64) * (float)(*(float *)(v9 + 184) - *(float *)(v9 + 152)))
                + *(float *)(v9 + 152);
              if ( z >= *(float *)(v9 + 112) && *(float *)(v9 + 128) >= z )
              {
                if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                  __asan_report_load8(link, v14);
                nextRef = link->ref;
                goto LABEL_117;
              }
            }
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, v14);
        v14 = (const Vector3f *)link;
      }
      if ( !nextRef )
        goto LABEL_121;
LABEL_117:
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v14);
      PolyFlags = DynamicNavMesh::GetPolyFlags(thisa->m_NavMesh, nextRef);
      v14 = (const Vector3f *)PolyFlags;
      if ( QueryFilter::PassFilter(filter, PolyFlags) )
        v34 = 0;
      else
LABEL_121:
        v34 = 1;
      if ( v34 )
      {
        a = *(_DWORD *)(v9 + 96);
        if ( nverts <= a + 1 )
          v35 = 0;
        else
          v35 = *(_DWORD *)(v9 + 96) + 1;
        va = (const Vector3f *)(v9 + 208 + 12LL * a);
        vb = v9 + 208 + 12LL * v35;
        if ( *(_BYTE *)((vb >> 3) + 0x7FFF8000) != 0 && (char)((vb & 7) + 3) >= *(_BYTE *)((vb >> 3) + 0x7FFF8000) )
          __asan_report_load4(vb);
        LODWORD(v36) = *(_DWORD *)vb;
        if ( *(_BYTE *)(((v9 + 208 + 12LL * a) >> 3) + 0x7FFF8000) != 0
          && (char)(((v9 - 48 + 12 * a) & 7) + 3) >= *(_BYTE *)(((v9 + 208 + 12LL * a) >> 3) + 0x7FFF8000) )
        {
          v36 = __asan_report_load4(va);
        }
        dx_0 = *(float *)&v36 - va->x;
        if ( *(_BYTE *)(((vb + 8) >> 3) + 0x7FFF8000) != 0
          && (char)(((vb + 8) & 7) + 3) >= *(_BYTE *)(((vb + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(vb + 8);
        }
        LODWORD(v37) = *(_DWORD *)(vb + 8);
        if ( *(_BYTE *)(((v9 + 208 + 12LL * a + 8) >> 3) + 0x7FFF8000) != 0
          && (char)(((v9 - 48 + 12 * a + 8) & 7) + 3) >= *(_BYTE *)(((v9 + 208 + 12LL * a + 8) >> 3) + 0x7FFF8000) )
        {
          v37 = __asan_report_load4(&va->z);
        }
        dz = *(float *)&v37 - va->z;
        lenSq = (float)(dz * dz) + (float)(dx_0 * dx_0);
        if ( lenSq > 0.0 )
        {
          s_1 = 1.0 / sqrtf(lenSq);
          if ( *(_BYTE *)(((unsigned __int64)&result->normal >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->normal >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&result->normal);
          }
          result->normal.x = dz * s_1;
          if ( *(_BYTE *)(((unsigned __int64)&result->normal.y >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&result->normal.y >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&result->normal.y);
          }
          result->normal.y = 0.0;
          if ( *(_BYTE *)(((unsigned __int64)&result->normal.z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->normal.z >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store4(&result->normal.z);
          }
          result->normal.z = (float)-dx_0 * s_1;
        }
        curRef = nextRef;
        break;
      }
      curRef = nextRef;
    }
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(result);
    }
    result->t = t;
    v38 = Distance(startPos, endPos) * costScale;
    if ( *(_BYTE *)(((unsigned __int64)&result->totalCost >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&result->totalCost >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&result->totalCost);
    }
    result->totalCost = v38;
    if ( *(_BYTE *)(((unsigned __int64)&result->lastPoly >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    result->lastPoly = lastPoly;
    if ( *(_BYTE *)(((unsigned __int64)&result->hitPoly >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    result->hitPoly = curRef;
    p_normal = &result->normal;
    if ( (((unsigned __int8)result + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&result->normal >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&result->normal >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&result->normal.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&result->normal.z + 3) >> 3) + 0x7FFF8000) )
    {
      p_normal = (Vector3f *)12;
      __asan_report_store_n(&result->normal, 12LL);
    }
    result->normal = TileToWorldVector(startTile, p_normal);
    if ( pathCount )
    {
      if ( *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pathCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pathCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(pathCount);
      }
      *pathCount = n;
    }
    v13 = status;
  }
  else
  {
    v13 = -2147483640;
  }
  if ( v69 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v13;
};

// Line 1801: range 000000000CC58F3E-000000000CC59E99
__int64 __fastcall NavMeshQuery::FindLocalNeighbourhood(
        const NavMeshQuery *const this,
        NavMeshPolyRef startRef,
        const Vector3f *centerPos,
        __m128 radius,
        const QueryFilter *filter,
        NavMeshPolyRef *resultRef,
        unsigned __int64 resultParent,
        int *resultCount,
        int maxResult)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  char *v11; // rbx
  _DWORD *v12; // r12
  __m128i v13; // xmm0
  NavMeshPolyRef v14; // rsi
  char v15; // al
  __int64 result; // rax
  unsigned __int64 v17; // rax
  NavMeshNode *v18; // rcx
  int v19; // eax
  const Vector3f *v20; // rsi
  __int64 v21; // r14
  Vector3f *v22; // r15
  __int64 v23; // r14
  Vector3f *v24; // r15
  unsigned __int64 v25; // rax
  NavMeshPolyRef id; // rcx
  NavMeshPolyRef *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned int v31; // ecx
  char v32; // dl
  NavMeshNode *v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  NavMeshNode *v37; // rcx
  int v38; // eax
  const NavMeshQuery *thisa; // [rsp+38h] [rbp-408h]
  bool overlap; // [rsp+4Ah] [rbp-3F6h]
  bool connected; // [rsp+4Bh] [rbp-3F5h]
  int nstack; // [rsp+4Ch] [rbp-3F4h]
  NavMeshStatus status; // [rsp+50h] [rbp-3F0h]
  int n; // [rsp+54h] [rbp-3ECh]
  int i; // [rsp+58h] [rbp-3E8h]
  int j; // [rsp+5Ch] [rbp-3E4h]
  float radiusSqr; // [rsp+60h] [rbp-3E0h]
  float distSqr; // [rsp+64h] [rbp-3DCh]
  unsigned int npa; // [rsp+68h] [rbp-3D8h]
  int npb; // [rsp+6Ch] [rbp-3D4h]
  const NavMeshLink *link; // [rsp+70h] [rbp-3D0h]
  const NavMeshLink *clink; // [rsp+78h] [rbp-3C8h]
  NavMeshNode *startNode; // [rsp+80h] [rbp-3C0h]
  NavMeshNode *curNode; // [rsp+88h] [rbp-3B8h]
  NavMeshPolyRef curRef; // [rsp+90h] [rbp-3B0h]
  NavMeshPolyRef neighbourRef; // [rsp+98h] [rbp-3A8h]
  NavMeshNode *neighbourNode; // [rsp+A0h] [rbp-3A0h]
  NavMeshPolyRef pastRef; // [rsp+A8h] [rbp-398h]
  char v64[912]; // [rsp+B0h] [rbp-390h] BYREF

  thisa = this;
  v9 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)864;
    v10 = __asan_stack_malloc_4(864LL);
    if ( v10 )
      v9 = v10;
  }
  v11 = (char *)(v9 + 864);
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "9 32 4 9 tseg:1890 48 4 11 radius:1797 64 8 18 neighbourTile:1876 96 8 18 neighbourPoly:1877 128"
                        " 12 7 va:1885 160 12 7 vb:1885 192 72 7 pa:1825 304 72 7 pb:1826 416 384 10 stack:1812";
  *(_QWORD *)(v9 + 16) = NavMeshQuery::FindLocalNeighbourhood;
  v12 = (_DWORD *)(v9 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234556924;
  v12[536862722] = -218959360;
  v12[536862723] = -218959360;
  v12[536862724] = -219020288;
  v12[536862725] = -219020288;
  v12[536862728] = -218959360;
  v12[536862729] = 62194;
  v12[536862731] = -234881024;
  v12[536862732] = -218959118;
  v12[536862745] = -202116109;
  v12[536862746] = -202116109;
  radius = (__m128)radius.m128_u32[0];
  *(_DWORD *)(v9 + 48) = radius.m128_i32[0];
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, startRef);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x70Au,
      "NavMeshStatus NavMeshQuery::FindLocalNeighbourhood(NavMeshPolyRef, const Vector3f&, float, const QueryFilter*, Nav"
      "MeshPolyRef*, NavMeshPolyRef*, int*, int) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
  {
    this = (const NavMeshQuery *const)&thisa->m_TinyNodePool;
    __asan_report_load8(&thisa->m_TinyNodePool, startRef);
  }
  if ( !thisa->m_TinyNodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_TinyNodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x70Bu,
      "NavMeshStatus NavMeshQuery::FindLocalNeighbourhood(NavMeshPolyRef, const Vector3f&, float, const QueryFilter*, Nav"
      "MeshPolyRef*, NavMeshPolyRef*, int*, int) const");
  }
  v14 = ((unsigned __int8)resultCount & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)resultCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)resultCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)resultCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(resultCount);
  }
  *resultCount = 0;
  if ( !startRef )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, v14);
  v14 = startRef;
  if ( DynamicNavMesh::IsValidPolyRef(thisa->m_NavMesh, startRef) )
    v15 = 0;
  else
LABEL_18:
    v15 = 1;
  if ( v15 )
  {
    result = 2147483656LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_TinyNodePool, v14);
    NavMeshNodePool::Clear(thisa->m_TinyNodePool);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_TinyNodePool, v14);
    startNode = NavMeshNodePool::GetNode(thisa->m_TinyNodePool, startRef);
    v17 = (unsigned __int64)startNode + 20;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_store4(v17);
    *((_DWORD *)startNode + 5) &= 0xC0000000;
    if ( *(_BYTE *)(((unsigned __int64)&startNode->id >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    startNode->id = startRef;
    *((_BYTE *)startNode + 23) = *((_BYTE *)startNode + 23) & 0x3F | 0x80;
    v18 = startNode;
    v19 = 0;
    nstack = 1;
    v20 = (const Vector3f *)*(unsigned __int8 *)(((v9 + 416) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v20 )
      v19 = __asan_report_store8();
    *(_QWORD *)&v11[8 * v19 - 448] = v18;
    *(float *)v13.m128i_i32 = Sqr<float>((const float *)(v9 + 48));
    radiusSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
    v21 = 5LL;
    v22 = (Vector3f *)(v9 + 192);
    while ( v21 >= 0 )
    {
      Vector3f::Vector3f(v22++);
      --v21;
    }
    v23 = 5LL;
    v24 = (Vector3f *)(v9 + 304);
    while ( v23 >= 0 )
    {
      Vector3f::Vector3f(v24++);
      --v23;
    }
    status = 0x40000000;
    n = 0;
    if ( maxResult <= 0 )
    {
      status = 1073741840;
    }
    else
    {
      v25 = (unsigned __int64)resultRef;
      if ( *(_BYTE *)(((unsigned __int64)&startNode->id >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8(&startNode->id, v20);
      id = startNode->id;
      v20 = (const Vector3f *)*(unsigned __int8 *)((v25 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v20 )
        v25 = __asan_report_store8();
      *(_QWORD *)v25 = id;
      if ( resultParent )
      {
        v27 = (NavMeshPolyRef *)resultParent;
        if ( *(_BYTE *)((resultParent >> 3) + 0x7FFF8000) )
          v27 = (NavMeshPolyRef *)__asan_report_store8();
        *v27 = 0LL;
      }
      n = 1;
    }
    while ( nstack )
    {
      curNode = *(NavMeshNode **)(v9 + 416);
      for ( i = 0; i < nstack - 1; ++i )
      {
        v28 = i + 1;
        if ( *(_BYTE *)(((8LL * (i + 1) + v9 + 416) >> 3) + 0x7FFF8000) )
          v28 = __asan_report_load8(8LL * v28 + v9 + 416, v20);
        v29 = *(_QWORD *)&v11[8 * v28 - 448];
        if ( *(_BYTE *)(((8LL * i + v9 + 416) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)&v11[8 * i - 448] = v29;
      }
      --nstack;
      if ( *(_BYTE *)(((unsigned __int64)&curNode->id >> 3) + 0x7FFF8000) )
        __asan_report_load8(&curNode->id, v20);
      curRef = curNode->id;
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v20);
      v20 = (const Vector3f *)curRef;
      for ( link = DynamicNavMesh::GetFirstLink(thisa->m_NavMesh, curRef);
            link;
            link = DynamicNavMesh::GetNextLink(thisa->m_NavMesh, link) )
      {
        if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
          __asan_report_load8(link, v20);
        neighbourRef = link->ref;
        if ( NavMeshPolyRefHelper::DecodePolyIdType(link->ref) != 1 && neighbourRef )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->m_TinyNodePool, v20);
          v20 = (const Vector3f *)neighbourRef;
          neighbourNode = NavMeshNodePool::GetNode(thisa->m_TinyNodePool, neighbourRef);
          if ( neighbourNode )
          {
            v20 = (const Vector3f *)((((_BYTE)neighbourNode + 20) & 7u) + 3);
            if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3)
                                                                           + 0x7FFF8000) )
            {
              *(double *)v13.m128i_i64 = __asan_report_load4((char *)neighbourNode + 20);
            }
            if ( ((*((_BYTE *)neighbourNode + 23) >> 6) & 2) == 0 )
            {
              *(_QWORD *)(v9 + 64) = 0LL;
              *(_QWORD *)(v9 + 96) = 0LL;
              if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                __asan_report_load8(thisa, v20);
              DynamicNavMesh::GetTileAndPolyByRefUnsafe(
                thisa->m_NavMesh,
                neighbourRef,
                (const NavMeshTile **)(v9 + 64),
                (const NavMeshPoly **)(v9 + 96));
              v30 = *(_QWORD *)(v9 + 96);
              if ( *(_BYTE *)(((unsigned __int64)(v30 + 24) >> 3) + 0x7FFF8000) != 0
                && (char)(((v30 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v30 + 24) >> 3) + 0x7FFF8000) )
              {
                *(double *)v13.m128i_i64 = __asan_report_load4(v30 + 24);
              }
              v20 = (const Vector3f *)*(unsigned int *)(v30 + 24);
              if ( QueryFilter::PassFilter(filter, (unsigned int)v20) )
              {
                Vector3f::Vector3f((Vector3f *const)(v9 + 128));
                Vector3f::Vector3f((Vector3f *const)(v9 + 160));
                v20 = (const Vector3f *)curRef;
                if ( NavMeshQuery::GetPortalPoints(
                       thisa,
                       curRef,
                       neighbourRef,
                       (Vector3f *)(v9 + 128),
                       (Vector3f *)(v9 + 160)) )
                {
                  v20 = centerPos;
                  *(float *)v13.m128i_i32 = SqrDistancePointSegment2D(
                                              (float *)(v9 + 32),
                                              centerPos,
                                              (const Vector3f *)(v9 + 128),
                                              (const Vector3f *)(v9 + 160));
                  distSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
                  v13 = (__m128i)LODWORD(distSqr);
                  if ( distSqr <= radiusSqr )
                  {
                    if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode
                                                                                     + 20) >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      *(double *)v13.m128i_i64 = __asan_report_load4((char *)neighbourNode + 20);
                    }
                    *((_BYTE *)neighbourNode + 23) = (((*((_BYTE *)neighbourNode + 23) >> 6) | 2) << 6) | *((_BYTE *)neighbourNode + 23) & 0x3F;
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_TinyNodePool >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&thisa->m_TinyNodePool, (((_BYTE)neighbourNode + 20) & 7u) + 3);
                    v33 = curNode;
                    v31 = NavMeshNodePool::GetNodeIdx(thisa->m_TinyNodePool, curNode) & 0x3FFFFFFF;
                    v32 = *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000);
                    LOBYTE(v33) = v32 != 0;
                    if ( v32 != 0 && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= v32 )
                      __asan_report_store4((char *)neighbourNode + 20);
                    *((_DWORD *)neighbourNode + 5) = v31 & 0x3FFFFFFF | *((_DWORD *)neighbourNode + 5) & 0xC0000000;
                    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                      __asan_report_load8(thisa, v33);
                    v20 = (const Vector3f *)neighbourRef;
                    npa = DynamicNavMesh::GetPolyGeometry(
                            thisa->m_NavMesh,
                            neighbourRef,
                            (Vector3f *)(v9 + 192),
                            0LL,
                            0);
                    overlap = 0;
                    for ( j = 0; j < n; ++j )
                    {
                      v34 = (unsigned __int64)&resultRef[j];
                      if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                        v34 = __asan_report_load8(&resultRef[j], v20);
                      pastRef = *(_QWORD *)v34;
                      connected = 0;
                      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                        __asan_report_load8(thisa, v20);
                      v20 = (const Vector3f *)curRef;
                      for ( clink = DynamicNavMesh::GetFirstLink(thisa->m_NavMesh, curRef);
                            clink;
                            clink = DynamicNavMesh::GetNextLink(thisa->m_NavMesh, clink) )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)clink >> 3) + 0x7FFF8000) )
                          __asan_report_load8(clink, v20);
                        if ( pastRef == clink->ref )
                        {
                          connected = 1;
                          break;
                        }
                        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                          __asan_report_load8(thisa, v20);
                        v20 = (const Vector3f *)clink;
                      }
                      if ( !connected )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                          __asan_report_load8(thisa, v20);
                        npb = DynamicNavMesh::GetPolyGeometry(thisa->m_NavMesh, pastRef, (Vector3f *)(v9 + 304), 0LL, 0);
                        v20 = (const Vector3f *)npa;
                        if ( OverlapPolyPoly2D((const Vector3f *)(v9 + 192), npa, (const Vector3f *)(v9 + 304), npb) )
                        {
                          overlap = 1;
                          break;
                        }
                      }
                    }
                    if ( !overlap )
                    {
                      if ( n >= maxResult )
                      {
                        status |= 0x10u;
                      }
                      else
                      {
                        v35 = (unsigned __int64)&resultRef[n];
                        if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
                          v35 = __asan_report_store8();
                        *(_QWORD *)v35 = neighbourRef;
                        if ( resultParent )
                        {
                          v36 = 8LL * n + resultParent;
                          if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                            v36 = __asan_report_store8();
                          *(_QWORD *)v36 = curRef;
                        }
                        ++n;
                      }
                      if ( nstack <= 47 )
                      {
                        v37 = neighbourNode;
                        v38 = nstack++;
                        v20 = (const Vector3f *)*(unsigned __int8 *)(((8LL * v38 + v9 + 416) >> 3) + 0x7FFF8000);
                        if ( (_BYTE)v20 )
                          v38 = __asan_report_store8();
                        *(_QWORD *)&v11[8 * v38 - 448] = v37;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa, v20);
        v20 = (const Vector3f *)link;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)resultCount >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)resultCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)resultCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(resultCount);
    }
    *resultCount = n;
    result = status;
  }
  if ( v64 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8064) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 1966: range 000000000CC59E9A-000000000CC5A061
int __cdecl InsertInterval(
        SegInterval *ints,
        const int nints,
        const int maxInts,
        const __int16 tmin,
        const __int16 tmax,
        const NavMeshPolyRef ref)
{
  SegInterval *v7; // rax
  unsigned __int64 v8; // rax
  SegInterval *v9; // rax
  SegInterval *v10; // rdx
  int idx; // [rsp+2Ch] [rbp-4h]

  if ( nints >= maxInts )
    return maxInts;
  for ( idx = 0; idx < nints; ++idx )
  {
    v7 = &ints[idx];
    if ( *(_BYTE *)(((unsigned __int64)&v7->tmin >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->tmin >> 3) + 0x7FFF8000) <= 1 )
    {
      v7 = (SegInterval *)__asan_report_load2(&v7->tmin);
    }
    if ( tmax <= v7->tmin )
      break;
  }
  if ( nints != idx )
    memmove(&ints[idx + 1], &ints[idx], 16LL * (nints - idx));
  v8 = (unsigned __int64)&ints[idx];
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8();
  *(_QWORD *)v8 = ref;
  v9 = &ints[idx];
  if ( *(_BYTE *)(((unsigned __int64)&v9->tmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->tmin >> 3) + 0x7FFF8000) <= 1 )
  {
    v9 = (SegInterval *)__asan_report_store2(&v9->tmin);
  }
  v9->tmin = tmin;
  v10 = &ints[idx];
  if ( *(_BYTE *)(((unsigned __int64)&v10->tmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&v10->tmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&v10->tmax);
  }
  v10->tmax = tmax;
  return nints + 1;
};

// Line 1990: range 000000000CC5A062-000000000CC5B5A2
NavMeshStatus __cdecl NavMeshQuery::GetPolyWallSegments(
        const NavMeshQuery *const this,
        NavMeshPolyRef ref,
        const QueryFilter *filter,
        Vector3f *segmentVerts,
        NavMeshPolyRef *segmentRefs,
        int *segmentCount,
        const int maxSegments)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  char *v9; // rbx
  _DWORD *v10; // r12
  NavMeshStatus result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  char v16; // cl
  NavMeshPolyRef v17; // rsi
  __int64 v18; // rdx
  char v19; // al
  NavMeshPolyRef p_bmax; // rdi
  __int16 bmax; // cx
  __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // rdx
  char v25; // cl
  NavMeshPolyRef PolyRefBase; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  char v33; // cl
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  char v37; // cl
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned int inserted; // eax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  char v46; // cl
  __int64 v47; // rax
  __int64 v48; // rdx
  char v49; // cl
  char v50; // al
  char v51; // dl
  Vector3f *v52; // r14
  Vector3f *v53; // r14
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // ecx
  char v57; // dl
  char v58; // al
  Vector3f *v59; // r14
  Vector3f *v60; // r14
  unsigned __int64 v61; // rax
  int v62; // eax
  NavMeshPolyRef refa; // [rsp+20h] [rbp-290h]
  const NavMeshQuery *thisa; // [rsp+28h] [rbp-288h]
  _BYTE storePortals[5]; // [rsp+3Bh] [rbp-275h]
  NavMeshStatus status; // [rsp+40h] [rbp-270h]
  int i; // [rsp+44h] [rbp-26Ch]
  int j; // [rsp+48h] [rbp-268h]
  unsigned int nints; // [rsp+4Ch] [rbp-264h]
  int nintsa; // [rsp+4Ch] [rbp-264h]
  int k; // [rsp+50h] [rbp-260h]
  unsigned int idx; // [rsp+54h] [rbp-25Ch]
  float tmin; // [rsp+58h] [rbp-258h]
  float tmax; // [rsp+5Ch] [rbp-254h]
  int imin; // [rsp+60h] [rbp-250h]
  int imax; // [rsp+64h] [rbp-24Ch]
  const NavMeshLink *link; // [rsp+70h] [rbp-240h]
  NavMeshPolyRef neiRef; // [rsp+78h] [rbp-238h]
  const Vector3f *vj_0; // [rsp+80h] [rbp-230h]
  const Vector3f *vi_0; // [rsp+88h] [rbp-228h]
  const Vector3f *vj; // [rsp+90h] [rbp-220h]
  const Vector3f *vi; // [rsp+98h] [rbp-218h]
  char v87[528]; // [rsp+A0h] [rbp-210h] BYREF

  thisa = this;
  refa = ref;
  v7 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)480;
    v8 = __asan_stack_malloc_3(480LL);
    if ( v8 )
      v7 = v8;
  }
  v9 = (char *)(v7 + 480);
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "5 32 8 9 tile:1996 64 8 9 poly:1997 96 8 12 neiTile:2024 128 8 12 neiPoly:2025 160 256 9 ints:2003";
  *(_QWORD *)(v7 + 16) = NavMeshQuery::GetPolyWallSegments;
  v10 = (_DWORD *)(v7 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862722] = -218959360;
  v10[536862723] = -218959360;
  v10[536862724] = -218959360;
  v10[536862733] = -202116109;
  v10[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, ref);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x7C7u,
      "NavMeshStatus NavMeshQuery::GetPolyWallSegments(NavMeshPolyRef, const QueryFilter*, Vector3f*, NavMeshPolyRef*, int*, int) const");
  }
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    result = -2147483640;
  }
  else
  {
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa, ref);
    TileAndPolyByRef = DynamicNavMesh::GetTileAndPolyByRef(
                         thisa->m_NavMesh,
                         ref,
                         (const NavMeshTile **)(v7 + 32),
                         (const NavMeshPoly **)(v7 + 64));
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = -2147483640;
    }
    else
    {
      storePortals[4] = 0;
      *(_DWORD *)storePortals = segmentRefs != 0LL;
      status = 0x40000000;
      i = 0;
      v13 = *(_QWORD *)(v7 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v13 + 28) >> 3) + 0x7FFF8000) != 0
        && ((v13 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)(v13 + 28) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v13 + 28);
      }
      for ( j = *(unsigned __int8 *)(v13 + 28) - 1; ; j = v62 )
      {
        v14 = *(_QWORD *)(v7 + 64);
        if ( *(_BYTE *)(((unsigned __int64)(v14 + 28) >> 3) + 0x7FFF8000) != 0
          && ((v14 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)(v14 + 28) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v14 + 28);
        }
        if ( i >= *(unsigned __int8 *)(v14 + 28) )
          break;
        nints = 0;
        v15 = *(_QWORD *)(v7 + 64);
        v16 = *(_BYTE *)(((unsigned __int64)(v15 + 2LL * j + 12) >> 3) + 0x7FFF8000);
        LOBYTE(ref) = v16 != 0;
        if ( v16 != 0 && (char)(((v15 + 2 * j + 12) & 7) + 1) >= v16 )
          __asan_report_load2(v15 + 2LL * j + 12);
        if ( *(__int16 *)(v15 + 2LL * j + 12) >= 0 )
        {
          neiRef = 0LL;
          v22 = *(_QWORD *)(v7 + 64);
          v23 = *(_BYTE *)(((unsigned __int64)(v22 + 2LL * j + 12) >> 3) + 0x7FFF8000);
          LOBYTE(ref) = v23 != 0;
          if ( v23 != 0 && (char)(((v22 + 2 * j + 12) & 7) + 1) >= v23 )
            __asan_report_load2(v22 + 2LL * j + 12);
          if ( *(_WORD *)(v22 + 2LL * j + 12) )
          {
            v24 = *(_QWORD *)(v7 + 64);
            v25 = *(_BYTE *)(((unsigned __int64)(v24 + 2LL * j + 12) >> 3) + 0x7FFF8000);
            LOBYTE(ref) = v25 != 0;
            if ( v25 != 0 && (char)(((v24 + 2 * j + 12) & 7) + 1) >= v25 )
              __asan_report_load2(v24 + 2LL * j + 12);
            idx = *(unsigned __int16 *)(v24 + 2LL * j + 12) - 1;
            if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
              __asan_report_load8(thisa, ref);
            PolyRefBase = DynamicNavMesh::GetPolyRefBase(thisa->m_NavMesh, *(const NavMeshTile **)(v7 + 32));
            ref = idx;
            neiRef = PolyRefBase | NavMeshPolyRefHelper::EncodeBasePolyId(0, idx);
            if ( segmentRefs )
              goto LABEL_66;
            v27 = *(_QWORD *)(v7 + 32);
            if ( *(_BYTE *)(((unsigned __int64)(v27 + 32) >> 3) + 0x7FFF8000) )
              v27 = __asan_report_load8(v27 + 32, idx);
            v28 = *(_QWORD *)(v27 + 32) + 32LL * idx;
            if ( *(_BYTE *)(((unsigned __int64)(v28 + 24) >> 3) + 0x7FFF8000) != 0
              && (char)(((v28 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v28 + 24) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28 + 24);
            }
            ref = *(unsigned int *)(v28 + 24);
            if ( QueryFilter::PassFilter(filter, ref) )
LABEL_66:
              v29 = 0;
            else
              v29 = 1;
            if ( v29 )
              neiRef = 0LL;
          }
          if ( !neiRef || segmentRefs )
          {
            if ( *(int *)&storePortals[1] >= maxSegments )
            {
              status |= 0x10u;
            }
            else
            {
              v30 = *(_QWORD *)(v7 + 32);
              if ( *(_BYTE *)(((unsigned __int64)(v30 + 40) >> 3) + 0x7FFF8000) )
                v30 = __asan_report_load8(v30 + 40, ref);
              v31 = *(_QWORD *)(v30 + 40);
              v32 = *(_QWORD *)(v7 + 64);
              v33 = *(_BYTE *)(((unsigned __int64)(v32 + 2LL * j) >> 3) + 0x7FFF8000);
              if ( v33 != 0 && (char)(((v32 + 2 * j) & 7) + 1) >= v33 )
                __asan_report_load2(v32 + 2LL * j);
              vj_0 = (const Vector3f *)(v31 + 12LL * *(unsigned __int16 *)(v32 + 2LL * j));
              v34 = *(_QWORD *)(v7 + 32);
              if ( *(_BYTE *)(((unsigned __int64)(v34 + 40) >> 3) + 0x7FFF8000) )
                v34 = __asan_report_load8(v34 + 40, v31);
              v35 = *(_QWORD *)(v34 + 40);
              v36 = *(_QWORD *)(v7 + 64);
              v37 = *(_BYTE *)(((unsigned __int64)(v36 + 2LL * i) >> 3) + 0x7FFF8000);
              if ( v37 != 0 && (char)(((v36 + 2 * i) & 7) + 1) >= v37 )
                __asan_report_load2(v36 + 2LL * i);
              vi_0 = (const Vector3f *)(v35 + 12LL * *(unsigned __int16 *)(v36 + 2LL * i));
              v38 = (unsigned __int64)&segmentVerts[2 * *(_DWORD *)&storePortals[1]];
              if ( (((unsigned __int8)segmentVerts + 24 * storePortals[1]) & 7) >= *(_BYTE *)((v38 >> 3) + 0x7FFF8000)
                && *(_BYTE *)((v38 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((v38 + 11) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)segmentVerts + 24 * storePortals[1] + 11) & 7) >= *(_BYTE *)(((v38 + 11) >> 3)
                                                                                                 + 0x7FFF8000) )
              {
                __asan_report_store_n(&segmentVerts[2 * *(_DWORD *)&storePortals[1]], 12LL);
              }
              if ( ((unsigned __int8)vj_0 & 7) >= *(_BYTE *)(((unsigned __int64)vj_0 >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)vj_0 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&vj_0->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)vj_0 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&vj_0->z + 3) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load_n(vj_0, 12LL);
              }
              *(_QWORD *)v38 = *(_QWORD *)&vj_0->x;
              *(float *)(v38 + 8) = vj_0->z;
              v39 = (unsigned __int64)&segmentVerts[2 * *(_DWORD *)&storePortals[1] + 1];
              if ( (((unsigned __int8)segmentVerts + 12 * (2 * storePortals[1] + 1)) & 7) >= *(_BYTE *)((v39 >> 3) + 0x7FFF8000)
                && *(_BYTE *)((v39 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((v39 + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((v39 + 11) & 7) >= *(_BYTE *)(((v39 + 11) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(&segmentVerts[2 * *(_DWORD *)&storePortals[1] + 1], 12LL);
              }
              ref = ((_DWORD)vi_0 + 11) & 7;
              if ( ((unsigned __int8)vi_0 & 7) >= *(_BYTE *)(((unsigned __int64)vi_0 >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)vi_0 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&vi_0->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)vi_0 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&vi_0->z + 3) >> 3) + 0x7FFF8000) )
              {
                ref = 12LL;
                __asan_report_load_n(vi_0, 12LL);
              }
              *(_QWORD *)v39 = *(_QWORD *)&vi_0->x;
              *(float *)(v39 + 8) = vi_0->z;
              if ( segmentRefs )
              {
                v40 = (unsigned __int64)&segmentRefs[*(int *)&storePortals[1]];
                if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
                  v40 = __asan_report_store8();
                *(_QWORD *)v40 = neiRef;
              }
              ++*(_DWORD *)&storePortals[1];
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
            __asan_report_load8(thisa, ref);
          for ( link = DynamicNavMesh::GetFirstLink(thisa->m_NavMesh, refa);
                link;
                link = DynamicNavMesh::GetNextLink(thisa->m_NavMesh, link) )
          {
            v17 = ((_BYTE)link + 12) & 7;
            if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
              && (char)v17 >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&link->edge);
            }
            if ( j == link->edge )
            {
              if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                __asan_report_load8(link, v17);
              if ( link->ref )
              {
                *(_QWORD *)(v7 + 96) = 0LL;
                *(_QWORD *)(v7 + 128) = 0LL;
                if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                  __asan_report_load8(thisa, v17);
                v17 = link->ref;
                DynamicNavMesh::GetTileAndPolyByRefUnsafe(
                  thisa->m_NavMesh,
                  link->ref,
                  (const NavMeshTile **)(v7 + 96),
                  (const NavMeshPoly **)(v7 + 128));
                if ( !*(_QWORD *)(v7 + 128) )
                  goto LABEL_40;
                v18 = *(_QWORD *)(v7 + 128);
                if ( *(_BYTE *)(((unsigned __int64)(v18 + 24) >> 3) + 0x7FFF8000) != 0
                  && (char)(((v18 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v18 + 24) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v18 + 24);
                }
                v17 = *(unsigned int *)(v18 + 24);
                if ( QueryFilter::PassFilter(filter, v17) )
                  v19 = 1;
                else
LABEL_40:
                  v19 = 0;
                if ( v19 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                    __asan_report_load8(link, v17);
                  p_bmax = link->ref;
                  if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)link + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) )
                  {
                    p_bmax = (NavMeshPolyRef)&link->bmax;
                    __asan_report_load1(&link->bmax);
                  }
                  bmax = link->bmax;
                  if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) )
                  {
                    p_bmax = (NavMeshPolyRef)&link->bmin;
                    __asan_report_load1(&link->bmin);
                  }
                  v17 = nints;
                  nints = InsertInterval((SegInterval *)(v7 + 160), nints, 16, link->bmin, bmax, p_bmax);
                }
              }
            }
            if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
              __asan_report_load8(thisa, v17);
          }
          inserted = InsertInterval((SegInterval *)(v7 + 160), nints, 16, -1, 0, 0LL);
          v42 = inserted;
          nintsa = InsertInterval((SegInterval *)(v7 + 160), inserted, 16, 255, 256, 0LL);
          v43 = *(_QWORD *)(v7 + 32);
          if ( *(_BYTE *)(((unsigned __int64)(v43 + 40) >> 3) + 0x7FFF8000) )
            v43 = __asan_report_load8(v43 + 40, v42);
          v44 = *(_QWORD *)(v43 + 40);
          v45 = *(_QWORD *)(v7 + 64);
          v46 = *(_BYTE *)(((unsigned __int64)(v45 + 2LL * j) >> 3) + 0x7FFF8000);
          if ( v46 != 0 && (char)(((v45 + 2 * j) & 7) + 1) >= v46 )
            __asan_report_load2(v45 + 2LL * j);
          vj = (const Vector3f *)(v44 + 12LL * *(unsigned __int16 *)(v45 + 2LL * j));
          v47 = *(_QWORD *)(v7 + 32);
          if ( *(_BYTE *)(((unsigned __int64)(v47 + 40) >> 3) + 0x7FFF8000) )
            v47 = __asan_report_load8(v47 + 40, v44);
          ref = *(_QWORD *)(v47 + 40);
          v48 = *(_QWORD *)(v7 + 64);
          v49 = *(_BYTE *)(((unsigned __int64)(v48 + 2LL * i) >> 3) + 0x7FFF8000);
          if ( v49 != 0 && (char)(((v48 + 2 * i) & 7) + 1) >= v49 )
            __asan_report_load2(v48 + 2LL * i);
          vi = (const Vector3f *)(ref + 12LL * *(unsigned __int16 *)(v48 + 2LL * i));
          for ( k = 1; k < nintsa; ++k )
          {
            if ( segmentRefs )
            {
              if ( *(_BYTE *)(((16LL * k + v7 + 160) >> 3) + 0x7FFF8000) )
                __asan_report_load8(16LL * k + v7 + 160, ref);
              if ( *(_QWORD *)&v9[16 * k - 320] )
              {
                v50 = *(_BYTE *)(((16LL * k + v7 + 160 + 8) >> 3) + 0x7FFF8000);
                if ( v50 != 0 && v50 <= 1 )
                  __asan_report_load2(16LL * k + v7 + 160 + 8);
                tmin = (float)*(__int16 *)&v9[16 * k - 312] / 255.0;
                v51 = *(_BYTE *)(((16LL * k + v7 + 160 + 10) >> 3) + 0x7FFF8000);
                ref = ((16 * (_BYTE)k + (_BYTE)v7 - 96 + 10) & 7u) + 1;
                if ( v51 != 0 && (char)(((16 * k + v7 - 96 + 10) & 7) + 1) >= v51 )
                  __asan_report_load2(16LL * k + v7 + 160 + 10);
                tmax = (float)*(__int16 *)&v9[16 * k - 310] / 255.0;
                if ( *(int *)&storePortals[1] >= maxSegments )
                {
                  status |= 0x10u;
                }
                else
                {
                  v52 = &segmentVerts[2 * *(_DWORD *)&storePortals[1]];
                  if ( ((24 * storePortals[1] + (unsigned __int8)segmentVerts) & 7) >= *(_BYTE *)(((unsigned __int64)v52 >> 3)
                                                                                                + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&v52->z + 3) >> 3) + 0x7FFF8000) != 0
                    && ((24 * storePortals[1] + (unsigned __int8)segmentVerts + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v52->z + 3) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v52, 12LL);
                  }
                  *v52 = Lerp(vj, vi, tmin);
                  v53 = &segmentVerts[2 * *(_DWORD *)&storePortals[1] + 1];
                  if ( ((12 * (2 * storePortals[1] + 1) + (unsigned __int8)segmentVerts) & 7) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&v53->z + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)v53 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v53->z + 3) >> 3)
                                                                     + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v53, 12LL);
                  }
                  *v53 = Lerp(vj, vi, tmax);
                  v54 = (unsigned __int64)&segmentRefs[*(int *)&storePortals[1]];
                  v55 = *(_QWORD *)&v9[16 * k - 320];
                  ref = *(unsigned __int8 *)((v54 >> 3) + 0x7FFF8000);
                  if ( (_BYTE)ref )
                    v54 = __asan_report_store8();
                  *(_QWORD *)v54 = v55;
                  ++*(_DWORD *)&storePortals[1];
                }
              }
            }
            v56 = k - 1;
            v57 = *(_BYTE *)(((16LL * (k - 1) + v7 + 160 + 10) >> 3) + 0x7FFF8000);
            LOBYTE(ref) = v57 != 0;
            if ( v57 != 0 && (char)(((16 * (k - 1) + v7 - 96 + 10) & 7) + 1) >= v57 )
              __asan_report_load2(16LL * (k - 1) + v7 + 160 + 10);
            imin = *(__int16 *)&v9[16 * v56 - 310];
            v58 = *(_BYTE *)(((16LL * k + v7 + 160 + 8) >> 3) + 0x7FFF8000);
            if ( v58 != 0 && v58 <= 1 )
              __asan_report_load2(16LL * k + v7 + 160 + 8);
            imax = *(__int16 *)&v9[16 * k - 312];
            if ( imin != imax )
            {
              if ( *(int *)&storePortals[1] >= maxSegments )
              {
                status |= 0x10u;
              }
              else
              {
                v59 = &segmentVerts[2 * *(_DWORD *)&storePortals[1]];
                if ( ((24 * storePortals[1] + (unsigned __int8)segmentVerts) & 7) >= *(_BYTE *)(((unsigned __int64)v59 >> 3)
                                                                                              + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&v59->z + 3) >> 3) + 0x7FFF8000) != 0
                  && ((24 * storePortals[1] + (unsigned __int8)segmentVerts + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v59->z + 3) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v59, 12LL);
                }
                *v59 = Lerp(vj, vi, (float)imin / 255.0);
                v60 = &segmentVerts[2 * *(_DWORD *)&storePortals[1] + 1];
                if ( ((12 * (2 * storePortals[1] + 1) + (unsigned __int8)segmentVerts) & 7) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&v60->z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v60 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v60->z + 3) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v60, 12LL);
                }
                ref = (NavMeshPolyRef)vi;
                *v60 = Lerp(vj, vi, (float)imax / 255.0);
                if ( segmentRefs )
                {
                  v61 = (unsigned __int64)&segmentRefs[*(int *)&storePortals[1]];
                  if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
                    v61 = __asan_report_store8();
                  *(_QWORD *)v61 = 0LL;
                }
                ++*(_DWORD *)&storePortals[1];
              }
            }
          }
        }
        v62 = i++;
      }
      if ( *(_BYTE *)(((unsigned __int64)segmentCount >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)segmentCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)segmentCount >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_store4(segmentCount);
      }
      *segmentCount = *(_DWORD *)&storePortals[1];
      result = status;
    }
  }
  if ( v87 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 2128: range 000000000CC5B5A4-000000000CC5CE5E
NavMeshStatus __cdecl NavMeshQuery::FindDistanceToWall(
        const NavMeshQuery *const this,
        NavMeshPolyRef startRef,
        const Vector3f *centerPos,
        const QueryFilter *filter,
        float *hitDist,
        Vector3f *hitPos,
        Vector3f *hitNormal,
        unsigned int *hitFlags)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  NavMeshStatus result; // eax
  NavMeshNode *Node; // rax
  NavMeshPolyRef v13; // rsi
  __int64 v14; // r14
  Vector3f *v15; // r15
  __m128i x_low; // xmm0
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __int64 NodeAtIdx; // rax
  unsigned __int64 v20; // rax
  const DynamicNavMesh *m_NavMesh; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int PolyFlags; // edx
  unsigned int v25; // ecx
  int v26; // esi
  double v27; // xmm0_8
  int v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  char v33; // dl
  NavMeshNode *v34; // rsi
  int v35; // eax
  __m128i v36; // xmm0
  int v37; // ecx
  float v38; // [rsp+Ch] [rbp-304h]
  const NavMeshQuery *thisa; // [rsp+38h] [rbp-2D8h]
  bool solid; // [rsp+43h] [rbp-2CDh]
  float radiusSqr; // [rsp+44h] [rbp-2CCh]
  NavMeshStatus status; // [rsp+48h] [rbp-2C8h]
  int i; // [rsp+4Ch] [rbp-2C4h]
  int j; // [rsp+50h] [rbp-2C0h]
  int k; // [rsp+54h] [rbp-2BCh]
  int i_0; // [rsp+58h] [rbp-2B8h]
  int j_0; // [rsp+5Ch] [rbp-2B4h]
  int k_0; // [rsp+60h] [rbp-2B0h]
  int nverts; // [rsp+68h] [rbp-2A8h]
  float distSqr; // [rsp+6Ch] [rbp-2A4h]
  float distSqr_0; // [rsp+70h] [rbp-2A0h]
  float total; // [rsp+74h] [rbp-29Ch]
  NavMeshPolyRef parentRef; // [rsp+78h] [rbp-298h]
  const NavMeshTile *startTile; // [rsp+80h] [rbp-290h]
  NavMeshNode *startNode; // [rsp+88h] [rbp-288h]
  NavMeshNode *bestNode; // [rsp+90h] [rbp-280h]
  NavMeshPolyRef bestRef; // [rsp+98h] [rbp-278h]
  NavMeshPolyRef *neis; // [rsp+A0h] [rbp-270h]
  const Vector3f *vj; // [rsp+A8h] [rbp-268h]
  const Vector3f *vi; // [rsp+B0h] [rbp-260h]
  NavMeshPolyRef *neis_0; // [rsp+B8h] [rbp-258h]
  NavMeshPolyRef neighbourRef; // [rsp+C0h] [rbp-250h]
  NavMeshPolyRef neighbourNode; // [rsp+D8h] [rbp-238h]
  char v68[560]; // [rsp+E0h] [rbp-230h] BYREF

  thisa = this;
  v8 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)512;
    v9 = __asan_stack_malloc_3(512LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "6 32 4 9 tseg:2245 48 12 19 localCenterPos:2138 80 12 15 edgeNormal:2159 112 12 14 direction:229"
                        "8 144 72 10 verts:2157 256 192 15 neighbours:2158";
  *(_QWORD *)(v8 + 16) = NavMeshQuery::FindDistanceToWall;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = 61956;
  v10[536862721] = 0x4000000;
  v10[536862722] = 62194;
  v10[536862722] = 0x4000000;
  v10[536862723] = 62194;
  v10[536862723] = 0x4000000;
  v10[536862724] = 62194;
  v10[536862726] = -234881024;
  v10[536862727] = -218959118;
  v10[536862734] = -202116109;
  v10[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, startRef);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x851u,
      "NavMeshStatus NavMeshQuery::FindDistanceToWall(NavMeshPolyRef, const Vector3f&, const QueryFilter*, float*, Vector"
      "3f*, Vector3f*, unsigned int*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
  {
    this = (const NavMeshQuery *const)&thisa->m_NodePool;
    __asan_report_load8(&thisa->m_NodePool, startRef);
  }
  if ( !thisa->m_NodePool )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NodePool",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x852u,
      "NavMeshStatus NavMeshQuery::FindDistanceToWall(NavMeshPolyRef, const Vector3f&, const QueryFilter*, float*, Vector"
      "3f*, Vector3f*, unsigned int*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
  {
    this = (const NavMeshQuery *const)&thisa->m_OpenList;
    __asan_report_load8(&thisa->m_OpenList, startRef);
  }
  if ( !thisa->m_OpenList )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_OpenList",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x853u,
      "NavMeshStatus NavMeshQuery::FindDistanceToWall(NavMeshPolyRef, const Vector3f&, const QueryFilter*, float*, Vector"
      "3f*, Vector3f*, unsigned int*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, startRef);
  startTile = DynamicNavMesh::GetTileByRef(thisa->m_NavMesh, startRef);
  if ( startTile )
  {
    *(Vector3f *)(v8 + 48) = WorldToTile(startTile, centerPos);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_NodePool, centerPos);
    NavMeshNodePool::Clear(thisa->m_NodePool);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_OpenList, centerPos);
    NavMeshNodeQueue::Clear(thisa->m_OpenList);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_NodePool, centerPos);
    Node = NavMeshNodePool::GetNode(thisa->m_NodePool, startRef);
    startNode = Node;
    if ( *(char *)(((unsigned __int64)Node >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&Node->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)Node + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Node->pos.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(Node, 12LL);
    }
    *(_QWORD *)&startNode->pos.x = *(_QWORD *)(v8 + 48);
    startNode->pos.z = *(float *)(v8 + 56);
    if ( *(_BYTE *)((((unsigned __int64)startNode + 20) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)startNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)startNode + 20) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4((char *)startNode + 20);
    }
    *((_DWORD *)startNode + 5) &= 0xC0000000;
    if ( *(_BYTE *)(((unsigned __int64)&startNode->cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)startNode + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startNode->cost >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&startNode->cost);
    }
    startNode->cost = 0.0;
    if ( *(_BYTE *)(((unsigned __int64)&startNode->total >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&startNode->total >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&startNode->total);
    }
    startNode->total = 0.0;
    if ( *(_BYTE *)(((unsigned __int64)&startNode->id >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    startNode->id = startRef;
    *((_BYTE *)startNode + 23) = *((_BYTE *)startNode + 23) & 0x3F | 0x40;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_OpenList, (((_BYTE)startNode + 12) & 7u) + 3);
    v13 = (NavMeshPolyRef)startNode;
    NavMeshNodeQueue::Push(thisa->m_OpenList, startNode);
    radiusSqr = 3.4028235e38;
    status = 0x40000000;
    v14 = 5LL;
    v15 = (Vector3f *)(v8 + 144);
    while ( v14 >= 0 )
    {
      Vector3f::Vector3f(v15++);
      --v14;
    }
    x_low = 0LL;
    Vector3f::Vector3f((Vector3f *const)(v8 + 80), 0.0, 0.0, 0.0);
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_OpenList, v13);
      if ( NavMeshNodeQueue::empty(thisa->m_OpenList) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_OpenList, v13);
      bestNode = NavMeshNodeQueue::Pop(thisa->m_OpenList);
      v17 = (unsigned __int64)bestNode + 20;
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        *(double *)x_low.m128i_i64 = __asan_report_load4(v17);
      *((_BYTE *)bestNode + 23) = (((*((_BYTE *)bestNode + 23) >> 6) & 2) << 6) | *((_BYTE *)bestNode + 23) & 0x3F;
      *((_BYTE *)bestNode + 23) = (((*((_BYTE *)bestNode + 23) >> 6) | 2) << 6) | *((_BYTE *)bestNode + 23) & 0x3F;
      if ( *(_BYTE *)(((unsigned __int64)&bestNode->id >> 3) + 0x7FFF8000) )
        __asan_report_load8(&bestNode->id, (((_BYTE)bestNode + 20) & 7u) + 3);
      bestRef = bestNode->id;
      parentRef = 0LL;
      v18 = (((_BYTE)bestNode + 20) & 7u) + 3;
      if ( *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)bestNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3) + 0x7FFF8000) )
      {
        *(double *)x_low.m128i_i64 = __asan_report_load4((char *)bestNode + 20);
      }
      if ( (*((_DWORD *)bestNode + 5) & 0x3FFFFFFF) != 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_NodePool, v18);
        v18 = *((_DWORD *)bestNode + 5) & 0x3FFFFFFF;
        NodeAtIdx = (__int64)NavMeshNodePool::GetNodeAtIdx(thisa->m_NodePool, v18);
        if ( *(_BYTE *)(((unsigned __int64)(NodeAtIdx + 24) >> 3) + 0x7FFF8000) )
          NodeAtIdx = __asan_report_load8(NodeAtIdx + 24, v18);
        parentRef = *(_QWORD *)(NodeAtIdx + 24);
      }
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa, v18);
      v13 = bestRef;
      nverts = DynamicNavMesh::GetPolyGeometry(
                 thisa->m_NavMesh,
                 bestRef,
                 (Vector3f *)(v8 + 144),
                 (NavMeshPolyRef *)(v8 + 256),
                 4);
      if ( nverts )
      {
        i = 0;
        j = nverts - 1;
        while ( i < nverts )
        {
          solid = 1;
          neis = (NavMeshPolyRef *)(32LL * j + v8 + 256);
          for ( k = 0; k <= 3; ++k )
          {
            v20 = (unsigned __int64)&neis[k];
            if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
              v20 = __asan_report_load8(&neis[k], v13);
            if ( !*(_QWORD *)v20 )
              break;
            if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
              __asan_report_load8(thisa, v13);
            m_NavMesh = thisa->m_NavMesh;
            v22 = (unsigned __int64)&neis[k];
            v23 = *(unsigned __int8 *)((v22 >> 3) + 0x7FFF8000);
            if ( (_BYTE)v23 )
              v22 = __asan_report_load8(&neis[k], v23);
            PolyFlags = DynamicNavMesh::GetPolyFlags(m_NavMesh, *(_QWORD *)v22);
            v13 = PolyFlags;
            if ( QueryFilter::PassFilter(filter, PolyFlags) )
            {
              solid = 0;
              break;
            }
          }
          if ( solid )
          {
            vj = (const Vector3f *)(v8 + 144 + 12LL * j);
            vi = (const Vector3f *)(v8 + 144 + 12LL * i);
            v13 = v8 + 48;
            *(float *)x_low.m128i_i32 = SqrDistancePointSegment2D(
                                          (float *)(v8 + 32),
                                          (const Vector3f *)(v8 + 48),
                                          vj,
                                          vi);
            distSqr = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
            x_low = (__m128i)LODWORD(distSqr);
            if ( distSqr <= radiusSqr )
            {
              radiusSqr = distSqr;
              if ( hitFlags )
              {
                if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                  __asan_report_load8(thisa, v13);
                v25 = DynamicNavMesh::GetPolyFlags(thisa->m_NavMesh, bestRef);
                if ( *(_BYTE *)(((unsigned __int64)hitFlags >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)hitFlags & 7) + 3) >= *(_BYTE *)(((unsigned __int64)hitFlags >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(hitFlags);
                }
                *hitFlags = v25;
              }
              v26 = *(_DWORD *)(v8 + 32);
              if ( ((unsigned __int8)hitPos & 7) >= *(_BYTE *)(((unsigned __int64)hitPos >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)hitPos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&hitPos->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)hitPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&hitPos->z + 3) >> 3)
                                                                    + 0x7FFF8000) )
              {
                v26 = 12;
                __asan_report_store_n(hitPos, 12LL);
              }
              *hitPos = Lerp(vj, vi, *(float *)&v26);
              if ( *(_BYTE *)(((v8 + 144 + 12LL * i + 8) >> 3) + 0x7FFF8000) != 0
                && (char)(((v8 - 112 + 12 * i + 8) & 7) + 3) >= *(_BYTE *)(((v8 + 144 + 12LL * i + 8) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(&vi->z);
              }
              *(float *)&v27 = vi->z;
              if ( *(_BYTE *)(((v8 + 144 + 12LL * j + 8) >> 3) + 0x7FFF8000) != 0
                && (char)(((v8 - 112 + 12 * j + 8) & 7) + 3) >= *(_BYTE *)(((v8 + 144 + 12LL * j + 8) >> 3) + 0x7FFF8000) )
              {
                v27 = __asan_report_load4(&vj->z);
              }
              *(float *)(v8 + 80) = *(float *)&v27 - vj->z;
              if ( *(_BYTE *)(((v8 + 144 + 12LL * j) >> 3) + 0x7FFF8000) != 0
                && (char)(((v8 - 112 + 12 * j) & 7) + 3) >= *(_BYTE *)(((v8 + 144 + 12LL * j) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(vj);
              }
              x_low = (__m128i)LODWORD(vj->x);
              v13 = (((_BYTE)v8 - 112 + 12 * (_BYTE)i) & 7u) + 3;
              if ( *(_BYTE *)(((v8 + 144 + 12LL * i) >> 3) + 0x7FFF8000) != 0
                && (char)(((v8 - 112 + 12 * i) & 7) + 3) >= *(_BYTE *)(((v8 + 144 + 12LL * i) >> 3) + 0x7FFF8000) )
              {
                *(double *)x_low.m128i_i64 = __asan_report_load4(vi);
              }
              *(float *)(v8 + 88) = *(float *)x_low.m128i_i32 - vi->x;
            }
          }
          v28 = i++;
          j = v28;
        }
        i_0 = 0;
        j_0 = nverts - 1;
        while ( i_0 < nverts )
        {
          neis_0 = (NavMeshPolyRef *)(32LL * j_0 + v8 + 256);
          for ( k_0 = 0; k_0 <= 3; ++k_0 )
          {
            v29 = (unsigned __int64)&neis_0[k_0];
            if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
              v29 = __asan_report_load8(&neis_0[k_0], v13);
            if ( !*(_QWORD *)v29 )
              break;
            v30 = (unsigned __int64)&neis_0[k_0];
            if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
              v30 = __asan_report_load8(&neis_0[k_0], v13);
            neighbourRef = *(_QWORD *)v30;
            if ( *(_QWORD *)v30 )
            {
              if ( neighbourRef != parentRef && NavMeshPolyRefHelper::DecodePolyIdType(neighbourRef) != 1 )
              {
                v13 = v8 + 48;
                *(float *)x_low.m128i_i32 = SqrDistancePointSegment2D(
                                              (float *)(v8 + 32),
                                              (const Vector3f *)(v8 + 48),
                                              (const Vector3f *)(v8 + 144 + 12LL * j_0),
                                              (const Vector3f *)(v8 + 144 + 12LL * i_0));
                distSqr_0 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
                x_low = (__m128i)LODWORD(distSqr_0);
                if ( distSqr_0 <= radiusSqr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
                    __asan_report_load8(thisa, v13);
                  v31 = DynamicNavMesh::GetPolyFlags(thisa->m_NavMesh, neighbourRef);
                  v13 = v31;
                  if ( QueryFilter::PassFilter(filter, v31) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&thisa->m_NodePool, v13);
                    v13 = neighbourRef;
                    neighbourNode = (NavMeshPolyRef)NavMeshNodePool::GetNode(thisa->m_NodePool, neighbourRef);
                    if ( neighbourNode )
                    {
                      v13 = (((_BYTE)neighbourNode + 20) & 7u) + 3;
                      if ( *(_BYTE *)(((neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                        && (char)(((neighbourNode + 20) & 7) + 3) >= *(_BYTE *)(((neighbourNode + 20) >> 3) + 0x7FFF8000) )
                      {
                        *(double *)x_low.m128i_i64 = __asan_report_load4(neighbourNode + 20);
                      }
                      if ( ((*(_BYTE *)(neighbourNode + 23) >> 6) & 2) == 0 )
                      {
                        if ( *(_BYTE *)(((neighbourNode + 23) >> 3) + 0x7FFF8000) != 0
                          && (char)((neighbourNode + 23) & 7) >= *(_BYTE *)(((neighbourNode + 23) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load1(neighbourNode + 23);
                        }
                        if ( (*(_BYTE *)(neighbourNode + 23) & 0xC0) == 0 )
                        {
                          if ( *(char *)((neighbourNode >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((neighbourNode + 11) >> 3) + 0x7FFF8000) != 0
                            && (char)((neighbourNode + 11) & 7) >= *(_BYTE *)(((neighbourNode + 11) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(neighbourNode, 12LL);
                          }
                          *(Vector3f *)neighbourNode = Lerp(
                                                         (const Vector3f *)(v8 + 144 + 12LL * j_0),
                                                         (const Vector3f *)(v8 + 144 + 12LL * i_0),
                                                         0.5);
                        }
                        if ( *(_BYTE *)(((unsigned __int64)&bestNode->total >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&bestNode->total >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(&bestNode->total);
                        }
                        v38 = bestNode->total;
                        total = Distance(&bestNode->pos, (const Vector3f *)neighbourNode) + v38;
                        v13 = (((_BYTE)neighbourNode + 20) & 7u) + 3;
                        if ( *(_BYTE *)(((neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                          && (char)(((neighbourNode + 20) & 7) + 3) >= *(_BYTE *)(((neighbourNode + 20) >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(neighbourNode + 20);
                        }
                        if ( (*(_BYTE *)(neighbourNode + 23) & 0x40) == 0 )
                          goto LABEL_174;
                        if ( *(_BYTE *)(((neighbourNode + 16) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((neighbourNode + 16) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(neighbourNode + 16);
                        }
                        x_low = (__m128i)LODWORD(total);
                        if ( total < *(float *)(neighbourNode + 16) )
                        {
LABEL_174:
                          if ( *(_BYTE *)(((neighbourNode + 24) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(neighbourNode + 24) = neighbourRef;
                          if ( *(_BYTE *)(((neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                            && (char)(((neighbourNode + 20) & 7) + 3) >= *(_BYTE *)(((neighbourNode + 20) >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(neighbourNode + 20);
                          }
                          *(_BYTE *)(neighbourNode + 23) = (((*(_BYTE *)(neighbourNode + 23) & 0x40) != 0) << 6) | *(_BYTE *)(neighbourNode + 23) & 0x3F;
                          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NodePool >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&thisa->m_NodePool, (((_BYTE)neighbourNode + 20) & 7u) + 3);
                          v34 = bestNode;
                          v32 = NavMeshNodePool::GetNodeIdx(thisa->m_NodePool, bestNode) & 0x3FFFFFFF;
                          v33 = *(_BYTE *)(((neighbourNode + 20) >> 3) + 0x7FFF8000);
                          LOBYTE(v34) = v33 != 0;
                          if ( v33 != 0 && (char)(((neighbourNode + 20) & 7) + 3) >= v33 )
                            __asan_report_store4(neighbourNode + 20);
                          *(_DWORD *)(neighbourNode + 20) = v32 & 0x3FFFFFFF | *(_DWORD *)(neighbourNode + 20) & 0xC0000000;
                          if ( *(_BYTE *)(((neighbourNode + 16) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((neighbourNode + 16) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_store4(neighbourNode + 16);
                          }
                          x_low = (__m128i)LODWORD(total);
                          *(float *)(neighbourNode + 16) = total;
                          if ( (*(_BYTE *)(neighbourNode + 23) & 0x40) != 0 )
                          {
                            if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&thisa->m_OpenList, v34);
                            v13 = neighbourNode;
                            NavMeshNodeQueue::Modify(thisa->m_OpenList, (NavMeshNode *)neighbourNode);
                          }
                          else
                          {
                            if ( *(_BYTE *)(((neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                              && (char)(((neighbourNode + 20) & 7) + 3) >= *(_BYTE *)(((neighbourNode + 20) >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              *(double *)x_low.m128i_i64 = __asan_report_load4(neighbourNode + 20);
                            }
                            *(_BYTE *)(neighbourNode + 23) = (((*(_BYTE *)(neighbourNode + 23) >> 6) | 1) << 6) | *(_BYTE *)(neighbourNode + 23) & 0x3F;
                            if ( *(_BYTE *)(((unsigned __int64)&thisa->m_OpenList >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&thisa->m_OpenList, (((_BYTE)neighbourNode + 20) & 7u) + 3);
                            v13 = neighbourNode;
                            NavMeshNodeQueue::Push(thisa->m_OpenList, (NavMeshNode *)neighbourNode);
                          }
                        }
                      }
                    }
                    else
                    {
                      status |= 0x20u;
                    }
                  }
                }
              }
            }
          }
          v35 = i_0++;
          j_0 = v35;
        }
      }
    }
    *(Vector3f *)(v8 + 112) = operator-((const Vector3f *)(v8 + 48), hitPos);
    if ( (float)((float)(*(float *)(v8 + 88) * *(float *)(v8 + 120))
               + (float)(*(float *)(v8 + 112) * *(float *)(v8 + 80))) <= 0.000099999997 )
    {
      if ( ((unsigned __int8)hitNormal & 7) >= *(_BYTE *)(((unsigned __int64)hitNormal >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)hitNormal >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&hitNormal->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)hitNormal + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&hitNormal->z + 3) >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store_n(hitNormal, 12LL);
      }
      *hitNormal = NormalizeSafe((const Vector3f *)(v8 + 80), &Vector3f::zero);
    }
    else
    {
      *(_DWORD *)(v8 + 116) = 0;
      if ( ((unsigned __int8)hitNormal & 7) >= *(_BYTE *)(((unsigned __int64)hitNormal >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)hitNormal >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&hitNormal->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)hitNormal + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&hitNormal->z + 3) >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store_n(hitNormal, 12LL);
      }
      *hitNormal = Normalize((const Vector3f *)(v8 + 112));
    }
    v36 = _mm_cvtsi32_si128(LODWORD(radiusSqr));
    *(float *)v36.m128i_i32 = Sqrt(*(float *)v36.m128i_i32);
    v37 = _mm_cvtsi128_si32(v36);
    if ( *(_BYTE *)(((unsigned __int64)hitDist >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)hitDist & 7) + 3) >= *(_BYTE *)(((unsigned __int64)hitDist >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(hitDist);
    }
    *(_DWORD *)hitDist = v37;
    if ( ((unsigned __int8)hitNormal & 7) >= *(_BYTE *)(((unsigned __int64)hitNormal >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)hitNormal >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&hitNormal->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)hitNormal + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&hitNormal->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(hitNormal, 12LL);
    }
    *hitNormal = TileToWorldVector(startTile, hitNormal);
    if ( ((unsigned __int8)hitPos & 7) >= *(_BYTE *)(((unsigned __int64)hitPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)hitPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&hitPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)hitPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&hitPos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(hitPos, 12LL);
    }
    *hitPos = TileToWorld(startTile, hitPos);
    result = status;
  }
  else
  {
    result = -2147483640;
  }
  if ( v68 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2319: range 000000000CC5CE60-000000000CC5CF50
bool __cdecl NavMeshQuery::IsInClosedList(const NavMeshQuery *const this, NavMeshPolyRef ref)
{
  NavMeshNode *node; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NodePool, ref);
  if ( !this->m_NodePool )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NodePool, ref);
  node = NavMeshNodePool::FindNavMeshNode(this->m_NodePool, ref);
  if ( !node )
    return 0;
  if ( *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)node + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)node + 20) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4((char *)node + 20);
  }
  return ((*((_BYTE *)node + 23) >> 6) & 2) != 0;
};

// Line 2327: range 000000000CC5D480-000000000CC5D6CE
// local variable allocation has failed, the output may be wrong!
bool __cdecl NavMeshQuery::IntersectSurface(
        const NavMeshQuery *const this,
        int surfaceId,
        const Vector3f *center,
        const Vector3f *extents,
        const QueryFilter *filter)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  const DynamicNavMesh *m_NavMesh; // r13
  int TypeID; // eax
  bool result; // al
  const NavMeshQuery *thisa; // [rsp+28h] [rbp-108h]
  char v15[240]; // [rsp+40h] [rbp-F0h] BYREF

  thisa = this;
  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)192;
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 120 12 nearest:2363";
  *(_QWORD *)(v5 + 16) = NavMeshQuery::IntersectSurface;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, *(_QWORD *)&surfaceId);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x918u,
      "bool NavMeshQuery::IntersectSurface(int, const Vector3f&, const Vector3f&, const QueryFilter*) const");
  }
  if ( QueryFilter::GetBindingSurfaceId(filter) < 0 )
  {
    __asan_handle_no_return(filter);
    __assert_fail(
      "filter->GetBindingSurfaceId() >= 0",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x938u,
      "bool NavMeshQuery::IntersectSurface(int, const Vector3f&, const Vector3f&, const QueryFilter*) const");
  }
  NavMeshQuery::IntersectSurface(int,Vector3f const&,Vector3f const&,QueryFilter const*)const::HasQuery::HasQuery(
    (NavMeshQuery::IntersectSurface::HasQuery *const)(v5 + 32),
    thisa,
    filter,
    center);
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, thisa);
  m_NavMesh = thisa->m_NavMesh;
  TypeID = QueryFilter::GetTypeID(filter);
  result = DynamicNavMesh::IntersectSurface(
             m_NavMesh,
             surfaceId,
             TypeID,
             center,
             extents,
             (NavMeshMatchFirstCallback *)(v5 + 32));
  if ( v15 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2338: range 000000000CC5CF52-000000000CC5D132
void __cdecl NavMeshQuery::IntersectSurface(int,Vector3f const&,Vector3f const&,QueryFilter const*)const::HasQuery::HasQuery(
        NavMeshQuery::IntersectSurface::HasQuery *const this,
        const NavMeshQuery *navMeshQuery,
        const QueryFilter *filter,
        const Vector3f *center)
{
  int (**v4)(...); // rcx

  NavMeshMatchFirstCallback::NavMeshMatchFirstCallback(this);
  v4 = (int (**)(...))&off_1EFAFFD0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshMatchFirstCallback = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshMeshQuery = navMeshQuery;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Filter = filter;
  if ( *(char *)(((unsigned __int64)&this->m_Center >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Center, 12LL);
  }
  if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(center, 12LL);
  }
  this->m_Center = *center;
  Matrix4x4f::Matrix4x4f(&this->m_WorldToTile);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_LastTile >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_LastTile = 0LL;
};

// Line 2342: range 000000000CC5D134-000000000CC5D47F
bool __cdecl NavMeshQuery::IntersectSurface(int,Vector3f const&,Vector3f const&,QueryFilter const*)const::HasQuery::ProcessPolygon(
        NavMeshQuery::IntersectSurface::HasQuery *const this,
        const NavMeshTile *tile,
        const NavMeshPolyRef *polyRef,
        const NavMeshPoly *poly)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  const QueryFilter *m_Filter; // rcx
  __int64 flags; // rsi
  int BindingSurfaceId; // ecx
  char v10; // al
  char v11; // al
  bool result; // al
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 12 18 localPosition:2352 64 12 23 closestPtPolyDummy:2354";
  *(_QWORD *)(v4 + 16) = NavMeshQuery::IntersectSurface(int,Vector3f const&,Vector3f const&,QueryFilter const*)const::HasQuery::ProcessPolygon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Filter, tile);
  m_Filter = this->m_Filter;
  if ( *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)poly + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&poly->flags);
  }
  flags = poly->flags;
  if ( !QueryFilter::PassFilter(m_Filter, flags) )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Filter, flags);
  if ( !QueryFilter::GetBindingSurfaceId(this->m_Filter) )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Filter, flags);
  BindingSurfaceId = QueryFilter::GetBindingSurfaceId(this->m_Filter);
  v10 = *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000);
  LOBYTE(flags) = v10 != 0;
  if ( v10 != 0 && v10 <= 1 )
    __asan_report_load2(tile);
  if ( BindingSurfaceId != tile->surfaceID )
LABEL_17:
    v11 = 1;
  else
LABEL_18:
    v11 = 0;
  if ( v11 )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_LastTile >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_LastTile, flags);
    if ( tile != this->m_LastTile )
    {
      this->m_LastTile = tile;
      Matrix4x4f::SetTRInverse(&this->m_WorldToTile, &tile->position, &tile->rotation);
    }
    *(Vector3f *)(v4 + 32) = Matrix4x4f::MultiplyPoint3(&this->m_WorldToTile, &this->m_Center);
    Vector3f::Vector3f((Vector3f *const)(v4 + 64));
    result = ProjectPointToPoly2DLocal((const Vector3f *)(v4 + 32), poly, tile, (Vector3f *)(v4 + 64));
  }
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
  return result;
};

// Line 2369: range 000000000CC5D9DA-000000000CC5DC10
// local variable allocation has failed, the output may be wrong!
bool __cdecl NavMeshQuery::IntersectSurfaceFast(
        const NavMeshQuery *const this,
        int surfaceId,
        const Vector3f *center,
        const Vector3f *extents,
        const QueryFilter *filter)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  const DynamicNavMesh *m_NavMesh; // r13
  int TypeID; // eax
  bool result; // al
  const NavMeshQuery *thisa; // [rsp+28h] [rbp-C8h]
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  thisa = this;
  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMeshQuery *const)128;
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 48 12 nearest:2394";
  *(_QWORD *)(v5 + 16) = NavMeshQuery::IntersectSurfaceFast;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load8(thisa, *(_QWORD *)&surfaceId);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x942u,
      "bool NavMeshQuery::IntersectSurfaceFast(int, const Vector3f&, const Vector3f&, const QueryFilter*) const");
  }
  if ( QueryFilter::GetBindingSurfaceId(filter) < 0 )
  {
    __asan_handle_no_return(filter);
    __assert_fail(
      "filter->GetBindingSurfaceId() >= 0",
      "./src/pathfinding/Internal/NavMesh/NavMeshQuery.cpp",
      0x957u,
      "bool NavMeshQuery::IntersectSurfaceFast(int, const Vector3f&, const Vector3f&, const QueryFilter*) const");
  }
  NavMeshQuery::IntersectSurfaceFast(int,Vector3f const&,Vector3f const&,QueryFilter const*)const::HasQueryFase::HasQueryFase(
    (NavMeshQuery::IntersectSurfaceFast::HasQueryFase *const)(v5 + 48),
    thisa,
    filter,
    center);
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa, thisa);
  m_NavMesh = thisa->m_NavMesh;
  TypeID = QueryFilter::GetTypeID(filter);
  result = DynamicNavMesh::IntersectSurface(
             m_NavMesh,
             surfaceId,
             TypeID,
             center,
             extents,
             (NavMeshMatchFirstCallback *)(v5 + 48));
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2378: range 000000000CC5D6D0-000000000CC5D86F
void __cdecl NavMeshQuery::IntersectSurfaceFast(int,Vector3f const&,Vector3f const&,QueryFilter const*)const::HasQueryFase::HasQueryFase(
        NavMeshQuery::IntersectSurfaceFast::HasQueryFase *const this,
        const NavMeshQuery *navMeshQuery,
        const QueryFilter *filter,
        const Vector3f *center)
{
  int (**v4)(...); // rcx

  NavMeshMatchFirstCallback::NavMeshMatchFirstCallback(this);
  v4 = (int (**)(...))&off_1EFAFF90;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshMatchFirstCallback = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshMeshQuery = navMeshQuery;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Filter = filter;
  if ( *(char *)(((unsigned __int64)&this->m_Center >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Center, 12LL);
  }
  if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(center, 12LL);
  }
  this->m_Center = *center;
};

// Line 2382: range 000000000CC5D870-000000000CC5D9D8
bool __cdecl NavMeshQuery::IntersectSurfaceFast(int,Vector3f const&,Vector3f const&,QueryFilter const*)const::HasQueryFase::ProcessPolygon(
        NavMeshQuery::IntersectSurfaceFast::HasQueryFase *const this,
        const NavMeshTile *tile,
        const NavMeshPolyRef *polyRef,
        const NavMeshPoly *poly)
{
  const QueryFilter *m_Filter; // rcx
  __int64 flags; // rsi
  int BindingSurfaceId; // ecx
  char v7; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Filter, tile);
  m_Filter = this->m_Filter;
  if ( *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)poly + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&poly->flags);
  }
  flags = poly->flags;
  if ( !QueryFilter::PassFilter(m_Filter, flags) )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Filter, flags);
  if ( !QueryFilter::GetBindingSurfaceId(this->m_Filter) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Filter >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_Filter, flags);
  BindingSurfaceId = QueryFilter::GetBindingSurfaceId(this->m_Filter);
  if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(tile);
  }
  if ( BindingSurfaceId != tile->surfaceID )
LABEL_14:
    v7 = 1;
  else
LABEL_15:
    v7 = 0;
  return v7 == 0;
};

// Line 2400: range 000000000CC5DC12-000000000CC5E417
NavMeshStatus __cdecl NavMeshQuery::GetRandomPoint(
        const NavMeshQuery *const this,
        const QueryFilter *filter,
        NavMeshPolyRef *outRef,
        Vector3f *outPoint)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // eax
  const NavMesh *InternalNavMesh; // rax
  int v10; // r14d
  const NavMesh *v11; // rax
  const NavMesh *v12; // rax
  const DynamicNavMesh *m_NavMesh; // rcx
  int dataIndex; // edx
  const NavMeshDataHeader *header; // rdx
  char v16; // cl
  const NavMeshDataHeader *v17; // rdx
  __int64 v18; // rsi
  const NavMeshDataHeader *v19; // rdx
  __int64 v20; // rdx
  NavMeshStatus result; // eax
  int vertCount; // edx
  float *v23; // rax
  float *v24; // rdx
  float *v25; // rax
  float *v26; // rdx
  float *v27; // rax
  float *v28; // rdx
  float inY; // [rsp+8h] [rbp-118h]
  float inZ; // [rsp+Ch] [rbp-114h]
  float inZa; // [rsp+Ch] [rbp-114h]
  const QueryFilter *filtera; // [rsp+20h] [rbp-100h]
  int tryCount; // [rsp+38h] [rbp-E8h]
  unsigned int index; // [rsp+3Ch] [rbp-E4h]
  float s; // [rsp+40h] [rbp-E0h]
  float t; // [rsp+44h] [rbp-DCh]
  const NavMeshTile *tile; // [rsp+48h] [rbp-D8h]
  const NavMeshTile *tilea; // [rsp+48h] [rbp-D8h]
  NavMeshPolyRef ip_0; // [rsp+50h] [rbp-D0h]
  NavMeshPolyRef polyRef; // [rsp+58h] [rbp-C8h]
  unsigned __int64 base; // [rsp+60h] [rbp-C0h]
  NavMeshPoly *poly; // [rsp+68h] [rbp-B8h]
  char v45[176]; // [rsp+70h] [rbp-B0h] BYREF

  filtera = filter;
  v5 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 12 7 pt:2433 64 24 10 areas:2430";
  *(_QWORD *)(v5 + 16) = NavMeshQuery::GetRandomPoint;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  tryCount = 50;
  tile = 0LL;
  ip_0 = 0LL;
  polyRef = 0LL;
  while ( 1 )
  {
    v8 = tryCount--;
    if ( v8 < 0 )
      break;
    inZ = frand();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, filter);
    InternalNavMesh = DynamicNavMesh::GetInternalNavMesh(this->m_NavMesh);
    v10 = (int)(float)((float)NavMesh::GetMaxTiles(InternalNavMesh) * inZ);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, filter);
    v11 = DynamicNavMesh::GetInternalNavMesh(this->m_NavMesh);
    index = v10 % NavMesh::GetMaxTiles(v11);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, filter);
    v12 = DynamicNavMesh::GetInternalNavMesh(this->m_NavMesh);
    tilea = NavMesh::GetTile(v12, index);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, index);
    m_NavMesh = this->m_NavMesh;
    if ( *(_BYTE *)(((unsigned __int64)&tilea->dataIndex >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tilea + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tilea->dataIndex >> 3) + 0x7FFF8000) )
    {
      *(double *)v4.m128i_i64 = __asan_report_load4(&tilea->dataIndex);
    }
    dataIndex = tilea->dataIndex;
    if ( *(_BYTE *)(((unsigned __int64)tilea >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)tilea >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_load2(tilea);
    }
    filter = (const QueryFilter *)tilea->surfaceID;
    tile = DynamicNavMesh::GetTile(m_NavMesh, (SurfaceIDType)filter, dataIndex);
    if ( tile )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->header, filter);
      if ( tile->header )
      {
        header = tile->header;
        v16 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
        LOBYTE(filter) = v16 != 0;
        if ( v16 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v16 )
          *(double *)v4.m128i_i64 = __asan_report_load4(&header->polyCount);
        if ( header->polyCount )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this, filter);
          base = DynamicNavMesh::GetPolyRefBase(this->m_NavMesh, tile);
          *(float *)v4.m128i_i32 = frand();
          if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->header, tile);
          v17 = tile->header;
          if ( *(_BYTE *)(((unsigned __int64)&v17->polyCount >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v17 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->polyCount >> 3) + 0x7FFF8000) )
          {
            *(double *)v4.m128i_i64 = __asan_report_load4(&v17->polyCount);
          }
          v18 = (unsigned int)(int)(float)(*(float *)v4.m128i_i32 * (float)v17->polyCount);
          v19 = tile->header;
          if ( *(_BYTE *)(((unsigned __int64)&v19->polyCount >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->polyCount >> 3) + 0x7FFF8000) )
          {
            *(double *)v4.m128i_i64 = __asan_report_load4(&v19->polyCount);
          }
          ip_0 = (int)v18 % v19->polyCount;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->polys, v18);
          v20 = (__int64)&tile->polys[ip_0];
          if ( *(_BYTE *)(((unsigned __int64)(v20 + 24) >> 3) + 0x7FFF8000) != 0
            && (char)(((v20 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v20 + 24) >> 3) + 0x7FFF8000) )
          {
            *(double *)v4.m128i_i64 = __asan_report_load4(v20 + 24);
          }
          filter = (const QueryFilter *)*(unsigned int *)(v20 + 24);
          if ( QueryFilter::PassFilter(filtera, (unsigned int)filter) )
          {
            polyRef = ip_0 | base;
            break;
          }
        }
      }
    }
  }
  if ( tryCount >= 0 )
  {
    *(float *)v4.m128i_i32 = frand();
    s = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    *(float *)v4.m128i_i32 = frand();
    t = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    Vector3f::Vector3f((Vector3f *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->polys, filter);
    poly = &tile->polys[ip_0];
    if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&poly->vertCount);
    }
    vertCount = poly->vertCount;
    if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->verts, poly);
    RandomPointInConvexPoly(tile->verts, poly->verts, vertCount, (float *)(v5 + 64), s, t, (Vector3f *)(v5 + 32));
    v23 = Vector3f::operator[]((Vector3f *const)(v5 + 32), 2);
    v24 = v23;
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v23);
    }
    inZa = *v24;
    v25 = Vector3f::operator[]((Vector3f *const)(v5 + 32), 1);
    v26 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v25);
    }
    inY = *v26;
    v27 = Vector3f::operator[]((Vector3f *const)(v5 + 32), 0);
    v28 = v27;
    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v27);
    }
    Vector3f::Set(outPoint, *v28, inY, inZa);
    if ( *(_BYTE *)(((unsigned __int64)outRef >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *outRef = polyRef;
    result = 0x40000000;
  }
  else
  {
    result = 0x80000000;
  }
  if ( v45 == (char *)v5 )
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

// Line 2446: range 000000000CC5E418-000000000CC5FA8E
NavMeshStatus __cdecl NavMeshQuery::GetRandomPointAroundCircle(
        const NavMeshQuery *const this,
        NavMeshPolyRef centerRef,
        const Vector3f *center,
        float randomRadius,
        const QueryFilter *filter,
        NavMeshPolyRef *outRef,
        Vector3f *outPoint)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  NavMeshStatus result; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  NavMeshNode *Node; // rax
  const Vector3f *p_pos; // rsi
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  const Vector3f *v20; // rsi
  __int64 v21; // rdx
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  char v26; // cl
  const Vector3f *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // esi
  char v32; // cl
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm0
  NavMeshPolyRef v37; // rsi
  NavMeshNodePool *m_NodePool; // rcx
  __int64 NodeAtIdx; // rax
  __int64 v40; // rdx
  unsigned int v41; // ecx
  char v42; // dl
  NavMeshNode *v43; // rsi
  int vertCount; // edx
  float v45; // [rsp+4h] [rbp-2ACh]
  NavMeshStatus status; // [rsp+44h] [rbp-26Ch]
  float areaSum; // [rsp+48h] [rbp-268h]
  float polyArea; // [rsp+4Ch] [rbp-264h]
  int j; // [rsp+50h] [rbp-260h]
  float radiusSqr; // [rsp+54h] [rbp-25Ch]
  float s; // [rsp+58h] [rbp-258h]
  float t; // [rsp+5Ch] [rbp-254h]
  unsigned int stat; // [rsp+60h] [rbp-250h]
  float u; // [rsp+64h] [rbp-24Ch]
  float total; // [rsp+6Ch] [rbp-244h]
  const NavMeshTile *randomTile; // [rsp+70h] [rbp-240h]
  const NavMeshPoly *randomPoly; // [rsp+78h] [rbp-238h]
  NavMeshPolyRef randomPolyRef; // [rsp+80h] [rbp-230h]
  NavMeshPolyRef parentRef; // [rsp+88h] [rbp-228h]
  const NavMeshLink *link; // [rsp+90h] [rbp-220h]
  NavMeshNode *startNode; // [rsp+98h] [rbp-218h]
  NavMeshNode *bestNode; // [rsp+A0h] [rbp-210h]
  unsigned __int64 bestRef; // [rsp+A8h] [rbp-208h]
  unsigned __int64 neighbourRef; // [rsp+B0h] [rbp-200h]
  NavMeshNode *neighbourNode; // [rsp+B8h] [rbp-1F8h]
  char v73[496]; // [rsp+C0h] [rbp-1F0h] BYREF

  v7 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(448LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "12 48 4 6 h:2598 64 8 14 startTile:2452 96 8 14 startPoly:2453 128 8 13 bestTile:2488 160 8 13 b"
                        "estPoly:2489 192 8 15 parentTile:2514 224 8 15 parentPoly:2515 256 8 18 neighbourTile:2529 288 8"
                        " 18 neighbourPoly:2530 320 12 7 va:2538 352 12 7 pt:2593 384 24 10 areas:2589";
  *(_QWORD *)(v7 + 16) = NavMeshQuery::GetRandomPointAroundCircle;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -218959360;
  v9[536862725] = -218959360;
  v9[536862726] = -218959360;
  v9[536862727] = -218959360;
  v9[536862728] = -218959360;
  v9[536862729] = -218959360;
  v9[536862730] = -219020288;
  v9[536862731] = -219020288;
  v9[536862732] = -218103808;
  v9[536862733] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, centerRef);
  if ( !DynamicNavMesh::IsValidPolyRef(this->m_NavMesh, centerRef) || randomRadius < 0.0 || !filter || !outRef )
  {
    result = -2147483640;
  }
  else
  {
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, centerRef);
    DynamicNavMesh::GetTileAndPolyByRefUnsafe(
      this->m_NavMesh,
      centerRef,
      (const NavMeshTile **)(v7 + 64),
      (const NavMeshPoly **)(v7 + 96));
    v12 = *(_QWORD *)(v7 + 96);
    if ( *(_BYTE *)(((unsigned __int64)(v12 + 24) >> 3) + 0x7FFF8000) != 0
      && (char)(((v12 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v12 + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12 + 24);
    }
    v13 = *(unsigned int *)(v12 + 24);
    if ( !QueryFilter::PassFilter(filter, v13) )
    {
      result = -2147483640;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NodePool, v13);
      NavMeshNodePool::Clear(this->m_NodePool);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_OpenList, v13);
      NavMeshNodeQueue::Clear(this->m_OpenList);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NodePool, v13);
      Node = NavMeshNodePool::GetNode(this->m_NodePool, centerRef);
      startNode = Node;
      if ( *(char *)(((unsigned __int64)Node >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&Node->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)Node + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Node->pos.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(Node, 12LL);
      }
      if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(center, 12LL);
      }
      *(_QWORD *)&startNode->pos.x = *(_QWORD *)&center->x;
      startNode->pos.z = center->z;
      if ( *(_BYTE *)((((unsigned __int64)startNode + 20) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)startNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)startNode + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4((char *)startNode + 20);
      }
      *((_DWORD *)startNode + 5) &= 0xC0000000;
      if ( *(_BYTE *)(((unsigned __int64)&startNode->cost >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)startNode + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startNode->cost >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&startNode->cost);
      }
      startNode->cost = 0.0;
      if ( *(_BYTE *)(((unsigned __int64)&startNode->total >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&startNode->total >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&startNode->total);
      }
      startNode->total = 0.0;
      if ( *(_BYTE *)(((unsigned __int64)&startNode->id >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      startNode->id = centerRef;
      *((_BYTE *)startNode + 23) = *((_BYTE *)startNode + 23) & 0x3F | 0x40;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_OpenList, (((_BYTE)startNode + 12) & 7u) + 3);
      p_pos = &startNode->pos;
      NavMeshNodeQueue::Push(this->m_OpenList, startNode);
      status = 0x40000000;
      v16 = _mm_cvtsi32_si128(LODWORD(randomRadius));
      *(float *)v16.m128i_i32 = Sqrt(*(float *)v16.m128i_i32);
      radiusSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
      v17 = 0LL;
      areaSum = 0.0;
      randomTile = 0LL;
      randomPoly = 0LL;
      randomPolyRef = 0LL;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_OpenList, p_pos);
        if ( NavMeshNodeQueue::empty(this->m_OpenList) )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_OpenList, p_pos);
        bestNode = NavMeshNodeQueue::Pop(this->m_OpenList);
        v18 = (unsigned __int64)bestNode + 20;
        v19 = (((_BYTE)bestNode + 20) & 7u) + 3;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          *(double *)v17.m128i_i64 = __asan_report_load4(v18);
        *((_BYTE *)bestNode + 23) = (((*((_BYTE *)bestNode + 23) >> 6) & 2) << 6) | *((_BYTE *)bestNode + 23) & 0x3F;
        *((_BYTE *)bestNode + 23) = (((*((_BYTE *)bestNode + 23) >> 6) | 2) << 6) | *((_BYTE *)bestNode + 23) & 0x3F;
        if ( *(_BYTE *)(((unsigned __int64)&bestNode->id >> 3) + 0x7FFF8000) )
          __asan_report_load8(&bestNode->id, v19);
        bestRef = bestNode->id;
        *(_QWORD *)(v7 + 128) = 0LL;
        *(_QWORD *)(v7 + 160) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this, v19);
        v20 = (const Vector3f *)bestRef;
        DynamicNavMesh::GetTileAndPolyByRefUnsafe(
          this->m_NavMesh,
          bestRef,
          (const NavMeshTile **)(v7 + 128),
          (const NavMeshPoly **)(v7 + 160));
        if ( !NavMeshPolyRefHelper::DecodePolyIdType(bestRef) )
        {
          polyArea = 0.0;
          for ( j = 2; ; ++j )
          {
            v21 = *(_QWORD *)(v7 + 160);
            v22 = *(_BYTE *)(((unsigned __int64)(v21 + 28) >> 3) + 0x7FFF8000);
            LOBYTE(v20) = v22 != 0;
            if ( v22 != 0 && ((v21 + 28) & 7) >= v22 )
              __asan_report_load1(v21 + 28);
            if ( j >= *(unsigned __int8 *)(v21 + 28) )
              break;
            v23 = *(_QWORD *)(v7 + 128);
            if ( *(_BYTE *)(((unsigned __int64)(v23 + 40) >> 3) + 0x7FFF8000) )
              v23 = __asan_report_load8(v23 + 40, v20);
            v24 = *(_QWORD *)(v23 + 40);
            v25 = *(_QWORD *)(v7 + 160);
            v26 = *(_BYTE *)(((unsigned __int64)(v25 + 2LL * j) >> 3) + 0x7FFF8000);
            if ( v26 != 0 && (char)(((v25 + 2 * j) & 7) + 1) >= v26 )
              __asan_report_load2(v25 + 2LL * j);
            v27 = (const Vector3f *)(v24 + 12LL * *(unsigned __int16 *)(v25 + 2LL * j));
            v28 = *(_QWORD *)(v7 + 128);
            if ( *(_BYTE *)(((unsigned __int64)(v28 + 40) >> 3) + 0x7FFF8000) )
            {
              v27 = (const Vector3f *)(v28 + 40);
              v28 = __asan_report_load8(v28 + 40, v24);
            }
            v29 = *(_QWORD *)(v28 + 40);
            v30 = *(_QWORD *)(v7 + 160);
            v31 = j - 1;
            v32 = *(_BYTE *)(((unsigned __int64)(v30 + 2LL * (j - 1)) >> 3) + 0x7FFF8000);
            if ( v32 != 0 && (char)(((v30 + 2 * (j - 1)) & 7) + 1) >= v32 )
            {
              v27 = (const Vector3f *)(v30 + 2LL * v31);
              __asan_report_load2(v27);
            }
            v20 = (const Vector3f *)(v29 + 12LL * *(unsigned __int16 *)(v30 + 2LL * v31));
            v33 = *(_QWORD *)(v7 + 128);
            if ( *(_BYTE *)(((unsigned __int64)(v33 + 40) >> 3) + 0x7FFF8000) )
            {
              v27 = (const Vector3f *)(v33 + 40);
              v33 = __asan_report_load8(v33 + 40, v20);
            }
            v34 = *(_QWORD *)(v33 + 40);
            v35 = *(_QWORD *)(v7 + 160);
            if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) != 0
              && (char)((v35 & 7) + 1) >= *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
            {
              v27 = *(const Vector3f **)(v7 + 160);
              __asan_report_load2(v27);
            }
            polyArea = TriArea2D((const Vector3f *)(v34 + 12LL * *(unsigned __int16 *)v35), v20, v27) + polyArea;
          }
          v36 = (__m128i)LODWORD(areaSum);
          areaSum = areaSum + polyArea;
          *(float *)v36.m128i_i32 = frand();
          u = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
          v17 = (__m128i)LODWORD(polyArea);
          if ( polyArea >= (float)(u * areaSum) )
          {
            randomTile = *(const NavMeshTile **)(v7 + 128);
            randomPoly = *(const NavMeshPoly **)(v7 + 160);
            randomPolyRef = bestRef;
          }
        }
        parentRef = 0LL;
        *(_QWORD *)(v7 + 192) = 0LL;
        *(_QWORD *)(v7 + 224) = 0LL;
        v37 = (((_BYTE)bestNode + 20) & 7u) + 3;
        if ( *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bestNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3) + 0x7FFF8000) )
        {
          *(double *)v17.m128i_i64 = __asan_report_load4((char *)bestNode + 20);
        }
        if ( (*((_DWORD *)bestNode + 5) & 0x3FFFFFFF) != 0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_NodePool, v37);
          m_NodePool = this->m_NodePool;
          if ( *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)bestNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)bestNode + 20) >> 3)
                                                                    + 0x7FFF8000) )
          {
            *(double *)v17.m128i_i64 = __asan_report_load4((char *)bestNode + 20);
          }
          v37 = *((_DWORD *)bestNode + 5) & 0x3FFFFFFF;
          NodeAtIdx = (__int64)NavMeshNodePool::GetNodeAtIdx(m_NodePool, v37);
          if ( *(_BYTE *)(((unsigned __int64)(NodeAtIdx + 24) >> 3) + 0x7FFF8000) )
            NodeAtIdx = __asan_report_load8(NodeAtIdx + 24, v37);
          parentRef = *(_QWORD *)(NodeAtIdx + 24);
        }
        if ( parentRef )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this, v37);
          v37 = parentRef;
          DynamicNavMesh::GetTileAndPolyByRefUnsafe(
            this->m_NavMesh,
            parentRef,
            (const NavMeshTile **)(v7 + 192),
            (const NavMeshPoly **)(v7 + 224));
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this, v37);
        p_pos = (const Vector3f *)bestRef;
        for ( link = DynamicNavMesh::GetFirstLink(this->m_NavMesh, bestRef);
              link;
              link = DynamicNavMesh::GetNextLink(this->m_NavMesh, link) )
        {
          if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
            __asan_report_load8(link, p_pos);
          neighbourRef = link->ref;
          if ( link->ref && neighbourRef != parentRef )
          {
            *(_QWORD *)(v7 + 256) = 0LL;
            *(_QWORD *)(v7 + 288) = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this, p_pos);
            DynamicNavMesh::GetTileAndPolyByRefUnsafe(
              this->m_NavMesh,
              neighbourRef,
              (const NavMeshTile **)(v7 + 256),
              (const NavMeshPoly **)(v7 + 288));
            v40 = *(_QWORD *)(v7 + 288);
            if ( *(_BYTE *)(((unsigned __int64)(v40 + 24) >> 3) + 0x7FFF8000) != 0
              && (char)(((v40 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v40 + 24) >> 3) + 0x7FFF8000) )
            {
              *(double *)v17.m128i_i64 = __asan_report_load4(v40 + 24);
            }
            p_pos = (const Vector3f *)*(unsigned int *)(v40 + 24);
            if ( QueryFilter::PassFilter(filter, (unsigned int)p_pos) )
            {
              Vector3f::Vector3f((Vector3f *const)(v7 + 320));
              Vector3f::Vector3f((Vector3f *const)(v7 + 352));
              p_pos = (const Vector3f *)bestRef;
              if ( NavMeshQuery::GetPortalPoints(
                     this,
                     bestRef,
                     neighbourRef,
                     (Vector3f *)(v7 + 320),
                     (Vector3f *)(v7 + 352)) )
              {
                p_pos = center;
                SqrDistancePointSegment2D(
                  (float *)(v7 + 48),
                  center,
                  (const Vector3f *)(v7 + 320),
                  (const Vector3f *)(v7 + 352));
                v17 = (__m128i)*(unsigned int *)(v7 + 48);
                if ( *(float *)v17.m128i_i32 <= radiusSqr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->m_NodePool, center);
                  p_pos = (const Vector3f *)neighbourRef;
                  neighbourNode = NavMeshNodePool::GetNode(this->m_NodePool, neighbourRef);
                  if ( neighbourNode )
                  {
                    p_pos = (const Vector3f *)((((_BYTE)neighbourNode + 20) & 7u) + 3);
                    if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode
                                                                                     + 20) >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      *(double *)v17.m128i_i64 = __asan_report_load4((char *)neighbourNode + 20);
                    }
                    if ( ((*((_BYTE *)neighbourNode + 23) >> 6) & 2) == 0 )
                    {
                      if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 23) >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)neighbourNode + 23) & 7) >= *(_BYTE *)((((unsigned __int64)neighbourNode
                                                                                     + 23) >> 3)
                                                                                   + 0x7FFF8000) )
                      {
                        __asan_report_load1((char *)neighbourNode + 23);
                      }
                      if ( (*((_BYTE *)neighbourNode + 23) & 0xC0) == 0 )
                      {
                        if ( *(char *)(((unsigned __int64)neighbourNode >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)((((unsigned __int64)&neighbourNode->pos.z + 3) >> 3) + 0x7FFF8000) != 0
                          && (((unsigned __int8)neighbourNode + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&neighbourNode->pos.z
                                                                                       + 3) >> 3)
                                                                                     + 0x7FFF8000) )
                        {
                          __asan_report_store_n(neighbourNode, 12LL);
                        }
                        neighbourNode->pos = Lerp((const Vector3f *)(v7 + 320), (const Vector3f *)(v7 + 352), 0.5);
                      }
                      if ( *(_BYTE *)(((unsigned __int64)&bestNode->total >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&bestNode->total >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&bestNode->total);
                      }
                      v45 = bestNode->total;
                      total = Distance(&bestNode->pos, &neighbourNode->pos) + v45;
                      p_pos = (const Vector3f *)((((_BYTE)neighbourNode + 20) & 7u) + 3);
                      if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode
                                                                                       + 20) >> 3)
                                                                                     + 0x7FFF8000) )
                      {
                        __asan_report_load4((char *)neighbourNode + 20);
                      }
                      if ( (*((_BYTE *)neighbourNode + 23) & 0x40) == 0 )
                        goto LABEL_162;
                      if ( *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&neighbourNode->total);
                      }
                      v17 = (__m128i)LODWORD(total);
                      if ( total < neighbourNode->total )
                      {
LABEL_162:
                        if ( *(_BYTE *)(((unsigned __int64)&neighbourNode->id >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        neighbourNode->id = neighbourRef;
                        if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode
                                                                                         + 20) >> 3)
                                                                                       + 0x7FFF8000) )
                        {
                          __asan_report_load4((char *)neighbourNode + 20);
                        }
                        *((_BYTE *)neighbourNode + 23) = (((*((_BYTE *)neighbourNode + 23) & 0x40) != 0) << 6) | *((_BYTE *)neighbourNode + 23) & 0x3F;
                        if ( *(_BYTE *)(((unsigned __int64)&this->m_NodePool >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->m_NodePool, (((_BYTE)neighbourNode + 20) & 7u) + 3);
                        v43 = bestNode;
                        v41 = NavMeshNodePool::GetNodeIdx(this->m_NodePool, bestNode) & 0x3FFFFFFF;
                        v42 = *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000);
                        LOBYTE(v43) = v42 != 0;
                        if ( v42 != 0 && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= v42 )
                          __asan_report_store4((char *)neighbourNode + 20);
                        *((_DWORD *)neighbourNode + 5) = v41 & 0x3FFFFFFF | *((_DWORD *)neighbourNode + 5) & 0xC0000000;
                        if ( *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&neighbourNode->total >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(&neighbourNode->total);
                        }
                        v17 = (__m128i)LODWORD(total);
                        neighbourNode->total = total;
                        if ( (*((_BYTE *)neighbourNode + 23) & 0x40) != 0 )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->m_OpenList, v43);
                          p_pos = &neighbourNode->pos;
                          NavMeshNodeQueue::Modify(this->m_OpenList, neighbourNode);
                        }
                        else
                        {
                          if ( *(_BYTE *)((((unsigned __int64)neighbourNode + 20) >> 3) + 0x7FFF8000) != 0
                            && (char)((((_BYTE)neighbourNode + 20) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)neighbourNode
                                                                                           + 20) >> 3)
                                                                                         + 0x7FFF8000) )
                          {
                            __asan_report_store4((char *)neighbourNode + 20);
                          }
                          *((_BYTE *)neighbourNode + 23) = *((_BYTE *)neighbourNode + 23) & 0x3F | 0x40;
                          if ( *(_BYTE *)(((unsigned __int64)&this->m_OpenList >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->m_OpenList, (((_BYTE)neighbourNode + 20) & 7u) + 3);
                          p_pos = &neighbourNode->pos;
                          NavMeshNodeQueue::Push(this->m_OpenList, neighbourNode);
                        }
                      }
                    }
                  }
                  else
                  {
                    status |= 0x20u;
                  }
                }
              }
            }
          }
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this, p_pos);
          p_pos = (const Vector3f *)link;
        }
      }
      if ( randomPoly )
      {
        *(float *)v17.m128i_i32 = frand();
        s = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
        *(float *)v17.m128i_i32 = frand();
        t = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
        Vector3f::Vector3f((Vector3f *const)(v7 + 352));
        if ( *(_BYTE *)(((unsigned __int64)&randomPoly->vertCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)randomPoly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&randomPoly->vertCount >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(&randomPoly->vertCount);
        }
        vertCount = randomPoly->vertCount;
        if ( *(_BYTE *)(((unsigned __int64)&randomTile->verts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&randomTile->verts, randomPoly);
        RandomPointInConvexPoly(
          randomTile->verts,
          randomPoly->verts,
          vertCount,
          (float *)(v7 + 384),
          s,
          t,
          (Vector3f *)(v7 + 352));
        *(_DWORD *)(v7 + 48) = 0;
        stat = NavMeshQuery::GetPolyHeightLocal(this, randomPolyRef, (const Vector3f *)(v7 + 352), (float *)(v7 + 48));
        if ( NavMeshStatusFailed(stat) )
        {
          result = stat;
        }
        else
        {
          *(_DWORD *)(v7 + 356) = *(_DWORD *)(v7 + 48);
          if ( ((unsigned __int8)outPoint & 7) >= *(_BYTE *)(((unsigned __int64)outPoint >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)outPoint >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&outPoint->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)outPoint + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&outPoint->z + 3) >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store_n(outPoint, 12LL);
          }
          *(_QWORD *)&outPoint->x = *(_QWORD *)(v7 + 352);
          outPoint->z = *(float *)(v7 + 360);
          if ( *(_BYTE *)(((unsigned __int64)outRef >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *outRef = randomPolyRef;
          result = 0x40000000;
        }
      }
      else
      {
        result = 0x80000000;
      }
    }
  }
  if ( v73 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
