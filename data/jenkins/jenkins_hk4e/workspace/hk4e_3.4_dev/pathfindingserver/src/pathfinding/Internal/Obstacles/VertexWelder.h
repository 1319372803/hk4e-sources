// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/VertexWelder.h

// Line 9: range 000000000CD7414A-000000000CD74168
void __cdecl VertexWelder<2048>::~VertexWelder(VertexWelder<2048> *const this)
{
  dynamic_array<int,false,4ul>::~dynamic_array(&this->m_next);
};

// Line 9: range 000000000CD75B4E-000000000CD75B6C
void __cdecl VertexWelder<64>::~VertexWelder(VertexWelder<64> *const this)
{
  dynamic_array<int,false,4ul>::~dynamic_array(&this->m_next);
};

// Line 11: range 000000000CE51515-000000000CE51562
int __cdecl VertexWelder<2048>::hash(int x, int y, int z)
{
  return (14401 * (_WORD)y - 19645 * (_WORD)x - 19681 * (_WORD)z) & 0x7FF;
};

// Line 11: range 000000000CE58C95-000000000CE58CE0
int __cdecl VertexWelder<64>::hash(int x, int y, int z)
{
  return (65 * (_BYTE)y - -67 * (_BYTE)x - -31 * (_BYTE)z) & 0x3F;
};

// Line 25: range 000000000CE514C4-000000000CE51514
float __cdecl VertexWelder<2048>::GetCellSize(const VertexWelder<2048> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return 10.0 * this->m_weldThr;
};

// Line 25: range 000000000CE58C44-000000000CE58C94
float __cdecl VertexWelder<64>::GetCellSize(const VertexWelder<64> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return 10.0 * this->m_weldThr;
};

// Line 32: range 000000000CDBDBCA-000000000CDBDD46
void __cdecl VertexWelder<2048>::VertexWelder(
        VertexWelder<2048> *const this,
        dynamic_array<Vector3f,false,4> *verts,
        const float weldThr)
{
  char v3; // dl
  int i; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_weldThr = weldThr;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_verts = verts;
  dynamic_array<int,false,4ul>::dynamic_array(&this->m_next);
  if ( weldThr <= 0.0 )
  {
    __asan_handle_no_return(&this->m_next);
    __assert_fail(
      "weldThr > 0.0f",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x23u,
      "VertexWelder<BucketCount>::VertexWelder(dynamic_array<Vector3f>*, float) [with int BucketCount = 2048]");
  }
  if ( verts && !dynamic_array<Vector3f,false,4ul>::empty(verts) )
  {
    __asan_handle_no_return(verts);
    __assert_fail(
      "verts->empty()",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x25u,
      "VertexWelder<BucketCount>::VertexWelder(dynamic_array<Vector3f>*, float) [with int BucketCount = 2048]");
  }
  for ( i = 0; i <= 2047; ++i )
  {
    v3 = *(_BYTE *)(((unsigned __int64)&this->m_first[i] >> 3) + 0x7FFF8000);
    if ( v3 != 0 && (char)(((4 * (i + 8) + (_BYTE)this + 8) & 7) + 3) >= v3 )
      __asan_report_store4(&this->m_first[i]);
    this->m_first[i] = -1;
  }
};

// Line 32: range 000000000CDC873E-000000000CDC88B7
void __cdecl VertexWelder<64>::VertexWelder(
        VertexWelder<64> *const this,
        dynamic_array<Vector3f,false,4> *verts,
        const float weldThr)
{
  char v3; // dl
  int i; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_weldThr = weldThr;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_verts = verts;
  dynamic_array<int,false,4ul>::dynamic_array(&this->m_next);
  if ( weldThr <= 0.0 )
  {
    __asan_handle_no_return(&this->m_next);
    __assert_fail(
      "weldThr > 0.0f",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x23u,
      "VertexWelder<BucketCount>::VertexWelder(dynamic_array<Vector3f>*, float) [with int BucketCount = 64]");
  }
  if ( verts && !dynamic_array<Vector3f,false,4ul>::empty(verts) )
  {
    __asan_handle_no_return(verts);
    __assert_fail(
      "verts->empty()",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x25u,
      "VertexWelder<BucketCount>::VertexWelder(dynamic_array<Vector3f>*, float) [with int BucketCount = 64]");
  }
  for ( i = 0; i <= 63; ++i )
  {
    v3 = *(_BYTE *)(((unsigned __int64)&this->m_first[i] >> 3) + 0x7FFF8000);
    if ( v3 != 0 && (char)(((4 * (i + 8) + (_BYTE)this + 8) & 7) + 3) >= v3 )
      __asan_report_store4(&this->m_first[i]);
    this->m_first[i] = -1;
  }
};

// Line 42: range 000000000CDBDD48-000000000CDBDDEA
void __cdecl VertexWelder<2048>::SetVertexArray(VertexWelder<2048> *const this, dynamic_array<Vector3f,false,4> *verts)
{
  if ( !verts )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "verts != __null",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x2Cu,
      "void VertexWelder<BucketCount>::SetVertexArray(dynamic_array<Vector3f>*) [with int BucketCount = 2048]");
  }
  if ( !dynamic_array<Vector3f,false,4ul>::empty(verts) )
  {
    __asan_handle_no_return(verts);
    __assert_fail(
      "verts->empty()",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x2Du,
      "void VertexWelder<BucketCount>::SetVertexArray(dynamic_array<Vector3f>*) [with int BucketCount = 2048]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_verts = verts;
};

// Line 42: range 000000000CDC88B8-000000000CDC895A
void __cdecl VertexWelder<64>::SetVertexArray(VertexWelder<64> *const this, dynamic_array<Vector3f,false,4> *verts)
{
  if ( !verts )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "verts != __null",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x2Cu,
      "void VertexWelder<BucketCount>::SetVertexArray(dynamic_array<Vector3f>*) [with int BucketCount = 64]");
  }
  if ( !dynamic_array<Vector3f,false,4ul>::empty(verts) )
  {
    __asan_handle_no_return(verts);
    __assert_fail(
      "verts->empty()",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x2Du,
      "void VertexWelder<BucketCount>::SetVertexArray(dynamic_array<Vector3f>*) [with int BucketCount = 64]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_verts = verts;
};

// Line 49: range 000000000CDC895C-000000000CDC8A71
void __cdecl VertexWelder<64>::Reset(VertexWelder<64> *const this)
{
  __int64 v1; // rsi
  dynamic_array<Vector3f,false,4> *m_verts; // rdi
  char v3; // dl
  int t; // [rsp+18h] [rbp-8h] BYREF
  int i; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_verts, v1);
  if ( this->m_verts )
  {
    m_verts = this->m_verts;
    if ( !dynamic_array<Vector3f,false,4ul>::empty(m_verts) )
    {
      __asan_handle_no_return(m_verts);
      __assert_fail(
        "m_verts->empty()",
        "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
        0x34u,
        "void VertexWelder<BucketCount>::Reset() [with int BucketCount = 64]");
    }
  }
  for ( i = 0; i <= 63; ++i )
  {
    v3 = *(_BYTE *)(((unsigned __int64)&this->m_first[i] >> 3) + 0x7FFF8000);
    if ( v3 != 0 && (char)(((4 * (i + 8) + (_BYTE)this + 8) & 7) + 3) >= v3 )
      __asan_report_store4(&this->m_first[i]);
    this->m_first[i] = -1;
  }
  t = 0;
  dynamic_array<int,false,4ul>::resize_initialized(&this->m_next, 0LL, &t, kIncreaseToExactSize);
};

// Line 58: range 000000000CDC0534-000000000CDC0839
int __cdecl VertexWelder<2048>::Push(VertexWelder<2048> *const this, const Vector3f *pt)
{
  __m128i v2; // xmm0
  size_t v3; // rbx
  char v4; // dl
  int v5; // ebx
  int *v6; // rax
  int *v7; // rdx
  char v8; // dl
  int t; // [rsp+1Ch] [rbp-34h] BYREF
  float cellSize; // [rsp+20h] [rbp-30h]
  int x; // [rsp+24h] [rbp-2Ch]
  int y; // [rsp+28h] [rbp-28h]
  int z; // [rsp+2Ch] [rbp-24h]
  int h; // [rsp+30h] [rbp-20h]
  int idx; // [rsp+34h] [rbp-1Ch]
  dynamic_array<Vector3f,false,4> *verts; // [rsp+38h] [rbp-18h]

  *(float *)v2.m128i_i32 = VertexWelder<2048>::GetCellSize(this);
  cellSize = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_verts, pt);
  verts = this->m_verts;
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  x = FloorfToInt(pt->x / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  y = FloorfToInt(pt->y / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  z = FloorfToInt(pt->z / cellSize);
  h = VertexWelder<2048>::hash(x, y, z);
  dynamic_array<Vector3f,false,4ul>::push_back(verts, pt);
  t = -1;
  dynamic_array<int,false,4ul>::push_back(&this->m_next, &t);
  v3 = dynamic_array<Vector3f,false,4ul>::size(verts);
  if ( v3 != dynamic_array<int,false,4ul>::size(&this->m_next) )
  {
    __asan_handle_no_return(&this->m_next);
    __assert_fail(
      "verts.size() == m_next.size()",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x47u,
      "int VertexWelder<BucketCount>::Push(const Vector3f&) [with int BucketCount = 2048]");
  }
  idx = dynamic_array<Vector3f,false,4ul>::size(verts) - 1;
  v4 = *(_BYTE *)(((unsigned __int64)&this->m_first[h] >> 3) + 0x7FFF8000);
  if ( v4 != 0 && (char)(((4 * (h + 8) + (_BYTE)this + 8) & 7) + 3) >= v4 )
    __asan_report_load4(&this->m_first[h]);
  v5 = this->m_first[h];
  v6 = dynamic_array<int,false,4ul>::operator[](&this->m_next, idx);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v5;
  v8 = *(_BYTE *)(((unsigned __int64)&this->m_first[h] >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)(((4 * (h + 8) + (_BYTE)this + 8) & 7) + 3) >= v8 )
    __asan_report_store4(&this->m_first[h]);
  this->m_first[h] = idx;
  return idx;
};

// Line 58: range 000000000CE58CE2-000000000CE58FE7
int __cdecl VertexWelder<64>::Push(VertexWelder<64> *const this, const Vector3f *pt)
{
  __m128i v2; // xmm0
  size_t v3; // rbx
  char v4; // dl
  int v5; // ebx
  int *v6; // rax
  int *v7; // rdx
  char v8; // dl
  int t; // [rsp+1Ch] [rbp-34h] BYREF
  float cellSize; // [rsp+20h] [rbp-30h]
  int x; // [rsp+24h] [rbp-2Ch]
  int y; // [rsp+28h] [rbp-28h]
  int z; // [rsp+2Ch] [rbp-24h]
  int h; // [rsp+30h] [rbp-20h]
  int idx; // [rsp+34h] [rbp-1Ch]
  dynamic_array<Vector3f,false,4> *verts; // [rsp+38h] [rbp-18h]

  *(float *)v2.m128i_i32 = VertexWelder<64>::GetCellSize(this);
  cellSize = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_verts, pt);
  verts = this->m_verts;
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  x = FloorfToInt(pt->x / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  y = FloorfToInt(pt->y / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  z = FloorfToInt(pt->z / cellSize);
  h = VertexWelder<64>::hash(x, y, z);
  dynamic_array<Vector3f,false,4ul>::push_back(verts, pt);
  t = -1;
  dynamic_array<int,false,4ul>::push_back(&this->m_next, &t);
  v3 = dynamic_array<Vector3f,false,4ul>::size(verts);
  if ( v3 != dynamic_array<int,false,4ul>::size(&this->m_next) )
  {
    __asan_handle_no_return(&this->m_next);
    __assert_fail(
      "verts.size() == m_next.size()",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x47u,
      "int VertexWelder<BucketCount>::Push(const Vector3f&) [with int BucketCount = 64]");
  }
  idx = dynamic_array<Vector3f,false,4ul>::size(verts) - 1;
  v4 = *(_BYTE *)(((unsigned __int64)&this->m_first[h] >> 3) + 0x7FFF8000);
  if ( v4 != 0 && (char)(((4 * (h + 8) + (_BYTE)this + 8) & 7) + 3) >= v4 )
    __asan_report_load4(&this->m_first[h]);
  v5 = this->m_first[h];
  v6 = dynamic_array<int,false,4ul>::operator[](&this->m_next, idx);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v5;
  v8 = *(_BYTE *)(((unsigned __int64)&this->m_first[h] >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)(((4 * (h + 8) + (_BYTE)this + 8) & 7) + 3) >= v8 )
    __asan_report_store4(&this->m_first[h]);
  this->m_first[h] = idx;
  return idx;
};

// Line 79: range 000000000CDBDDEC-000000000CDBE240
// local variable allocation has failed, the output may be wrong!
int __cdecl VertexWelder<2048>::AddUnique(VertexWelder<2048> *const this, const Vector3f *pt)
{
  __m128i v2; // xmm1
  __m128i m_weldThr_low; // xmm0
  unsigned __int64 v4; // rax
  Vector3f *v5; // rdx
  __int64 v6; // xmm0_8
  int *v7; // rax
  int *v8; // rdx
  int bestIndex; // [rsp+18h] [rbp-58h]
  float bestDistSq; // [rsp+1Ch] [rbp-54h]
  int z; // [rsp+20h] [rbp-50h]
  int y; // [rsp+24h] [rbp-4Ch]
  int x; // [rsp+28h] [rbp-48h]
  int i; // [rsp+2Ch] [rbp-44h]
  float weldThr; // [rsp+30h] [rbp-40h]
  float cellSize; // [rsp+34h] [rbp-3Ch]
  int minx; // [rsp+38h] [rbp-38h]
  int maxx; // [rsp+3Ch] [rbp-34h]
  int miny; // [rsp+40h] [rbp-30h]
  int maxy; // [rsp+44h] [rbp-2Ch]
  int minz; // [rsp+48h] [rbp-28h]
  int maxz; // [rsp+4Ch] [rbp-24h]
  int h; // [rsp+50h] [rbp-20h]
  float distSq; // [rsp+54h] [rbp-1Ch]
  dynamic_array<Vector3f,false,4> *verts; // [rsp+58h] [rbp-18h]
  Vector3f inV; // [rsp+64h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_verts, pt);
  verts = this->m_verts;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_weldThr_low = (__m128i)LODWORD(this->m_weldThr);
  weldThr = this->m_weldThr;
  *(float *)m_weldThr_low.m128i_i32 = VertexWelder<2048>::GetCellSize(this);
  cellSize = COERCE_FLOAT(_mm_cvtsi128_si32(m_weldThr_low));
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  minx = FloorfToInt((float)(pt->x - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  maxx = FloorfToInt((float)(pt->x + weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  miny = FloorfToInt((float)(pt->y - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  maxy = FloorfToInt((float)(pt->y + weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  minz = FloorfToInt((float)(pt->z - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  maxz = FloorfToInt((float)(pt->z + weldThr) / cellSize);
  bestIndex = -1;
  bestDistSq = weldThr * weldThr;
  for ( z = minz; z <= maxz; ++z )
  {
    for ( y = miny; y <= maxy; ++y )
    {
      for ( x = minx; x <= maxx; ++x )
      {
        h = VertexWelder<2048>::hash(x, y, z);
        v4 = (unsigned __int64)&this->m_first[h];
        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v4);
        for ( i = this->m_first[h]; i != -1; i = *v8 )
        {
          v5 = dynamic_array<Vector3f,false,4ul>::operator[](verts, i);
          *(Vector3f *)((char *)&v2 - 8) = operator-(v5, pt);
          *(_QWORD *)&inV.x = v6;
          LODWORD(inV.z) = v2.m128i_i32[0];
          SqrMagnitude(&inV);
          distSq = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
          if ( bestDistSq > distSq )
          {
            bestDistSq = distSq;
            bestIndex = i;
          }
          v7 = dynamic_array<int,false,4ul>::operator[](&this->m_next, i);
          v8 = v7;
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v7);
          }
        }
      }
    }
  }
  if ( bestIndex == -1 )
    return VertexWelder<2048>::Push(this, pt);
  else
    return bestIndex;
};

// Line 79: range 000000000CDC8202-000000000CDC8656
// local variable allocation has failed, the output may be wrong!
int __cdecl VertexWelder<64>::AddUnique(VertexWelder<64> *const this, const Vector3f *pt)
{
  __m128i v2; // xmm1
  __m128i m_weldThr_low; // xmm0
  unsigned __int64 v4; // rax
  Vector3f *v5; // rdx
  __int64 v6; // xmm0_8
  int *v7; // rax
  int *v8; // rdx
  int bestIndex; // [rsp+18h] [rbp-58h]
  float bestDistSq; // [rsp+1Ch] [rbp-54h]
  int z; // [rsp+20h] [rbp-50h]
  int y; // [rsp+24h] [rbp-4Ch]
  int x; // [rsp+28h] [rbp-48h]
  int i; // [rsp+2Ch] [rbp-44h]
  float weldThr; // [rsp+30h] [rbp-40h]
  float cellSize; // [rsp+34h] [rbp-3Ch]
  int minx; // [rsp+38h] [rbp-38h]
  int maxx; // [rsp+3Ch] [rbp-34h]
  int miny; // [rsp+40h] [rbp-30h]
  int maxy; // [rsp+44h] [rbp-2Ch]
  int minz; // [rsp+48h] [rbp-28h]
  int maxz; // [rsp+4Ch] [rbp-24h]
  int h; // [rsp+50h] [rbp-20h]
  float distSq; // [rsp+54h] [rbp-1Ch]
  dynamic_array<Vector3f,false,4> *verts; // [rsp+58h] [rbp-18h]
  Vector3f inV; // [rsp+64h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_verts, pt);
  verts = this->m_verts;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_weldThr_low = (__m128i)LODWORD(this->m_weldThr);
  weldThr = this->m_weldThr;
  *(float *)m_weldThr_low.m128i_i32 = VertexWelder<64>::GetCellSize(this);
  cellSize = COERCE_FLOAT(_mm_cvtsi128_si32(m_weldThr_low));
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  minx = FloorfToInt((float)(pt->x - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  maxx = FloorfToInt((float)(pt->x + weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  miny = FloorfToInt((float)(pt->y - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  maxy = FloorfToInt((float)(pt->y + weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  minz = FloorfToInt((float)(pt->z - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  maxz = FloorfToInt((float)(pt->z + weldThr) / cellSize);
  bestIndex = -1;
  bestDistSq = weldThr * weldThr;
  for ( z = minz; z <= maxz; ++z )
  {
    for ( y = miny; y <= maxy; ++y )
    {
      for ( x = minx; x <= maxx; ++x )
      {
        h = VertexWelder<64>::hash(x, y, z);
        v4 = (unsigned __int64)&this->m_first[h];
        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v4);
        for ( i = this->m_first[h]; i != -1; i = *v8 )
        {
          v5 = dynamic_array<Vector3f,false,4ul>::operator[](verts, i);
          *(Vector3f *)((char *)&v2 - 8) = operator-(v5, pt);
          *(_QWORD *)&inV.x = v6;
          LODWORD(inV.z) = v2.m128i_i32[0];
          SqrMagnitude(&inV);
          distSq = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
          if ( bestDistSq > distSq )
          {
            bestDistSq = distSq;
            bestIndex = i;
          }
          v7 = dynamic_array<int,false,4ul>::operator[](&this->m_next, i);
          v8 = v7;
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v7);
          }
        }
      }
    }
  }
  if ( bestIndex == -1 )
    return VertexWelder<64>::Push(this, pt);
  else
    return bestIndex;
};

// Line 123: range 000000000CD74B74-000000000CD74B92
void __cdecl DSVertexWelder<2048>::~DSVertexWelder(DSVertexWelder<2048> *const this)
{
  dynamic_array<int,false,4ul>::~dynamic_array(&this->m_next);
};

// Line 125: range 000000000CE53541-000000000CE5358E
int __cdecl DSVertexWelder<2048>::hash(int x, int y, int z)
{
  return (14401 * (_WORD)y - 19645 * (_WORD)x - 19681 * (_WORD)z) & 0x7FF;
};

// Line 142: range 000000000CE534F0-000000000CE53540
float __cdecl DSVertexWelder<2048>::GetCellSize(const DSVertexWelder<2048> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return 10.0 * this->m_weldThr;
};

// Line 149: range 000000000CDC0DE6-000000000CDC106C
void __cdecl DSVertexWelder<2048>::DSVertexWelder(DSVertexWelder<2048> *const this, const float weldThr)
{
  char v2; // dl
  int i; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_weldThr = weldThr;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceVers >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_sourceVers = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceVersCount >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_sourceVersCount = 0LL;
  if ( *(char *)(((unsigned __int64)&this->m_offset >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_offset.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_offset.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_offset, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&Vector3f::zero >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&Vector3f::zero.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)&Vector3f::zero.z + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Vector3f::zero.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load_n(&Vector3f::zero, 12LL);
  }
  this->m_offset = Vector3f::zero;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_verts = 0LL;
  dynamic_array<int,false,4ul>::dynamic_array(&this->m_next);
  if ( weldThr <= 0.0 )
  {
    __asan_handle_no_return(&this->m_next);
    __assert_fail(
      "weldThr > 0.0f",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x98u,
      "DSVertexWelder<BucketCount>::DSVertexWelder(float) [with int BucketCount = 2048]");
  }
  for ( i = 0; i <= 2047; ++i )
  {
    v2 = *(_BYTE *)(((unsigned __int64)&this->m_first[i] >> 3) + 0x7FFF8000);
    if ( v2 != 0 && (char)(((4 * (i + 16) + (_BYTE)this + 8) & 7) + 3) >= v2 )
      __asan_report_store4(&this->m_first[i]);
    this->m_first[i] = -1;
  }
};

// Line 157: range 000000000CDC106E-000000000CDC19F7
void __cdecl DSVertexWelder<2048>::SetVertexArray(
        DSVertexWelder<2048> *const this,
        const Vector3f *sourceVers,
        size_t sourceVersCount,
        const Vector3f *offSet,
        dynamic_array<Vector3f,true,4> *verts)
{
  __m128i z_low; // xmm0
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  char v9; // dl
  __int64 v10; // rsi
  char v11; // dl
  size_t m_sourceVersCount; // r15
  size_t v13; // rsi
  size_t v14; // rcx
  const Vector3f *p_m_offset; // rcx
  unsigned __int64 v16; // rax
  int v17; // r14d
  int *v18; // rax
  int *v19; // rdx
  char v20; // dl
  Vector3f *v21; // rax
  unsigned __int64 v22; // rax
  int v23; // r12d
  int *v24; // rax
  int *v25; // rdx
  char v26; // dl
  DSVertexWelder<2048> *thisa; // [rsp+28h] [rbp-C8h]
  int t; // [rsp+34h] [rbp-BCh] BYREF
  int i; // [rsp+38h] [rbp-B8h]
  int i_0; // [rsp+3Ch] [rbp-B4h]
  int i_1; // [rsp+40h] [rbp-B0h]
  float cellSize; // [rsp+44h] [rbp-ACh]
  int x; // [rsp+48h] [rbp-A8h]
  int y; // [rsp+4Ch] [rbp-A4h]
  int z; // [rsp+50h] [rbp-A0h]
  int h; // [rsp+54h] [rbp-9Ch]
  int size; // [rsp+58h] [rbp-98h]
  float cellSize_0; // [rsp+5Ch] [rbp-94h]
  int x_0; // [rsp+60h] [rbp-90h]
  int y_0; // [rsp+64h] [rbp-8Ch]
  int z_0; // [rsp+68h] [rbp-88h]
  int h_0; // [rsp+6Ch] [rbp-84h]
  dynamic_array<Vector3f,true,4> *tempVerts; // [rsp+70h] [rbp-80h]
  Vector3f *pt; // [rsp+78h] [rbp-78h]
  char v48[112]; // [rsp+80h] [rbp-70h] BYREF

  thisa = this;
  v6 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (DSVertexWelder<2048> *const)64;
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 12 6 pt:172";
  *(_QWORD *)(v6 + 16) = DSVertexWelder<2048>::SetVertexArray;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202177536;
  if ( sourceVersCount && !sourceVers )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "sourceVersCount == 0 || sourceVers != nullptr",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0x9Fu,
      "void DSVertexWelder<BucketCount>::SetVertexArray(const Vector3f*, size_t, const Vector3f&, dynamic_array<Vector3f,"
      " true>*) [with int BucketCount = 2048; size_t = long unsigned int]");
  }
  if ( !verts )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "verts != __null",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0xA0u,
      "void DSVertexWelder<BucketCount>::SetVertexArray(const Vector3f*, size_t, const Vector3f&, dynamic_array<Vector3f,"
      " true>*) [with int BucketCount = 2048; size_t = long unsigned int]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_sourceVers >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_sourceVers = sourceVers;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_sourceVersCount >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_sourceVersCount = sourceVersCount;
  if ( *(char *)(((unsigned __int64)&thisa->m_offset >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&thisa->m_offset.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->m_offset.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&thisa->m_offset, 12LL);
  }
  v9 = *(_BYTE *)((((unsigned __int64)&offSet->z + 3) >> 3) + 0x7FFF8000);
  v10 = v9 != 0;
  if ( (((unsigned __int8)offSet & 7) >= *(_BYTE *)(((unsigned __int64)offSet >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)offSet >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v10 & ((((unsigned __int8)offSet
                                                                                                 + 11) & 7) >= v9) )
  {
    v10 = 12LL;
    __asan_report_load_n(offSet, 12LL);
  }
  *(_QWORD *)&thisa->m_offset.x = *(_QWORD *)&offSet->x;
  thisa->m_offset.z = offSet->z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m_verts = verts;
  for ( i = 0; i <= 2047; ++i )
  {
    v11 = *(_BYTE *)(((unsigned __int64)&thisa->m_first[i] >> 3) + 0x7FFF8000);
    v10 = ((4 * ((_BYTE)i + 16) + (_BYTE)thisa + 8) & 7u) + 3;
    if ( v11 != 0 && (char)(((4 * (i + 16) + (_BYTE)thisa + 8) & 7) + 3) >= v11 )
      __asan_report_store4(&thisa->m_first[i]);
    thisa->m_first[i] = -1;
  }
  t = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_sourceVersCount >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_sourceVersCount, v10);
  m_sourceVersCount = thisa->m_sourceVersCount;
  v13 = m_sourceVersCount + dynamic_array<Vector3f,true,4ul>::size(verts);
  dynamic_array<int,false,4ul>::resize_initialized(&thisa->m_next, v13, &t, kIncreaseToExactSize);
  for ( i_0 = 0; ; ++i_0 )
  {
    v14 = i_0;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_sourceVersCount >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_sourceVersCount, v13);
    if ( v14 >= thisa->m_sourceVersCount )
      break;
    *(float *)z_low.m128i_i32 = DSVertexWelder<2048>::GetCellSize(thisa);
    cellSize = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
    p_m_offset = &thisa->m_offset;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_sourceVers >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_sourceVers, v13);
    *(Vector3f *)(v6 + 32) = operator-(&thisa->m_sourceVers[i_0], p_m_offset);
    x = FloorfToInt(*(float *)(v6 + 32) / cellSize);
    y = FloorfToInt(*(float *)(v6 + 36) / cellSize);
    z_low = (__m128i)*(unsigned int *)(v6 + 40);
    z = FloorfToInt(*(float *)z_low.m128i_i32 / cellSize);
    h = DSVertexWelder<2048>::hash(x, y, z);
    v16 = (unsigned __int64)&thisa->m_first[h];
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)((v16 & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      *(double *)z_low.m128i_i64 = __asan_report_load4(v16);
    v17 = thisa->m_first[h];
    v18 = dynamic_array<int,false,4ul>::operator[](&thisa->m_next, i_0);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v18);
    }
    *v19 = v17;
    v20 = *(_BYTE *)(((unsigned __int64)&thisa->m_first[h] >> 3) + 0x7FFF8000);
    v13 = ((4 * ((_BYTE)h + 16) + (_BYTE)thisa + 8) & 7u) + 3;
    if ( v20 != 0 && (char)(((4 * (h + 16) + (_BYTE)thisa + 8) & 7) + 3) >= v20 )
      __asan_report_store4(&thisa->m_first[h]);
    thisa->m_first[h] = i_0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_verts, v13);
  tempVerts = thisa->m_verts;
  i_1 = 0;
  size = dynamic_array<Vector3f,true,4ul>::size(verts);
  while ( i_1 < size )
  {
    *(float *)z_low.m128i_i32 = DSVertexWelder<2048>::GetCellSize(thisa);
    cellSize_0 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
    v21 = dynamic_array<Vector3f,true,4ul>::operator[](tempVerts, i_1);
    pt = v21;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v21);
    }
    x_0 = FloorfToInt(pt->x / cellSize_0);
    if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pt->y);
    }
    y_0 = FloorfToInt(pt->y / cellSize_0);
    if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pt->z);
    }
    z_low = (__m128i)LODWORD(pt->z);
    z_0 = FloorfToInt(*(float *)z_low.m128i_i32 / cellSize_0);
    h_0 = DSVertexWelder<2048>::hash(x_0, y_0, z_0);
    v22 = (unsigned __int64)&thisa->m_first[h_0];
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0 && (char)((v22 & 7) + 3) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      *(double *)z_low.m128i_i64 = __asan_report_load4(v22);
    v23 = thisa->m_first[h_0];
    v24 = dynamic_array<int,false,4ul>::operator[](&thisa->m_next, i_1);
    v25 = v24;
    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v24);
    }
    *v25 = v23;
    v26 = *(_BYTE *)(((unsigned __int64)&thisa->m_first[h_0] >> 3) + 0x7FFF8000);
    if ( v26 != 0 && (char)(((4 * (h_0 + 16) + (_BYTE)thisa + 8) & 7) + 3) >= v26 )
      __asan_report_store4(&thisa->m_first[h_0]);
    thisa->m_first[h_0] = i_1++;
  }
  if ( v48 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 209: range 000000000CE53590-000000000CE538C6
int __cdecl DSVertexWelder<2048>::Push(DSVertexWelder<2048> *const this, const Vector3f *pt)
{
  __m128i v2; // xmm0
  size_t m_sourceVersCount; // rbx
  size_t v4; // rbx
  char v5; // dl
  int v6; // ebx
  int *v7; // rax
  int *v8; // rdx
  char v9; // dl
  int t; // [rsp+1Ch] [rbp-34h] BYREF
  float cellSize; // [rsp+20h] [rbp-30h]
  int x; // [rsp+24h] [rbp-2Ch]
  int y; // [rsp+28h] [rbp-28h]
  int z; // [rsp+2Ch] [rbp-24h]
  int h; // [rsp+30h] [rbp-20h]
  int idx; // [rsp+34h] [rbp-1Ch]
  dynamic_array<Vector3f,true,4> *verts; // [rsp+38h] [rbp-18h]

  *(float *)v2.m128i_i32 = DSVertexWelder<2048>::GetCellSize(this);
  cellSize = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_verts, pt);
  verts = this->m_verts;
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  x = FloorfToInt(pt->x / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  y = FloorfToInt(pt->y / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  z = FloorfToInt(pt->z / cellSize);
  h = DSVertexWelder<2048>::hash(x, y, z);
  dynamic_array<Vector3f,true,4ul>::push_back(verts, pt);
  t = -1;
  dynamic_array<int,false,4ul>::push_back(&this->m_next, &t);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceVersCount >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_sourceVersCount, &t);
  m_sourceVersCount = this->m_sourceVersCount;
  v4 = dynamic_array<Vector3f,true,4ul>::size(verts) + m_sourceVersCount;
  if ( v4 != dynamic_array<int,false,4ul>::size(&this->m_next) )
  {
    __asan_handle_no_return(&this->m_next);
    __assert_fail(
      "m_sourceVersCount + verts.size() == m_next.size()",
      "./src/pathfinding/Internal/Obstacles/./VertexWelder.h",
      0xDEu,
      "int DSVertexWelder<BucketCount>::Push(const Vector3f&) [with int BucketCount = 2048]");
  }
  idx = dynamic_array<int,false,4ul>::size(&this->m_next) - 1;
  v5 = *(_BYTE *)(((unsigned __int64)&this->m_first[h] >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)(((4 * (h + 16) + (_BYTE)this + 8) & 7) + 3) >= v5 )
    __asan_report_load4(&this->m_first[h]);
  v6 = this->m_first[h];
  v7 = dynamic_array<int,false,4ul>::operator[](&this->m_next, idx);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = v6;
  v9 = *(_BYTE *)(((unsigned __int64)&this->m_first[h] >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((4 * (h + 16) + (_BYTE)this + 8) & 7) + 3) >= v9 )
    __asan_report_store4(&this->m_first[h]);
  this->m_first[h] = idx;
  return idx;
};

// Line 230: range 000000000CDC2B60-000000000CDC317C
// local variable allocation has failed, the output may be wrong!
int __cdecl DSVertexWelder<2048>::GetUniqueInSource(DSVertexWelder<2048> *const this, const Vector3f *pt)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __m128i m_weldThr_low; // xmm0
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  size_t v9; // rcx
  Vector3f *p_m_offset; // rcx
  __int64 v11; // xmm0_8
  __int64 v12; // xmm0_8
  int *v13; // rax
  int *v14; // rdx
  char v15; // cl
  int result; // eax
  int bestIndex; // [rsp+14h] [rbp-ACh]
  float bestDistSq; // [rsp+18h] [rbp-A8h]
  int z; // [rsp+1Ch] [rbp-A4h]
  int y; // [rsp+20h] [rbp-A0h]
  int x; // [rsp+24h] [rbp-9Ch]
  int i; // [rsp+28h] [rbp-98h]
  float weldThr; // [rsp+2Ch] [rbp-94h]
  float cellSize; // [rsp+30h] [rbp-90h]
  int minx; // [rsp+34h] [rbp-8Ch]
  int maxx; // [rsp+38h] [rbp-88h]
  int miny; // [rsp+3Ch] [rbp-84h]
  int maxy; // [rsp+40h] [rbp-80h]
  int minz; // [rsp+44h] [rbp-7Ch]
  int maxz; // [rsp+48h] [rbp-78h]
  int h; // [rsp+4Ch] [rbp-74h]
  float distSq; // [rsp+50h] [rbp-70h]
  Vector3f inV; // [rsp+54h] [rbp-6Ch] BYREF
  char v35[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 5 v:254";
  *(_QWORD *)(v3 + 16) = DSVertexWelder<2048>::GetUniqueInSource;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_weldThr_low = (__m128i)LODWORD(this->m_weldThr);
  weldThr = this->m_weldThr;
  *(float *)m_weldThr_low.m128i_i32 = DSVertexWelder<2048>::GetCellSize(this);
  cellSize = COERCE_FLOAT(_mm_cvtsi128_si32(m_weldThr_low));
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  minx = FloorfToInt((float)(pt->x - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  maxx = FloorfToInt((float)(pt->x + weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  miny = FloorfToInt((float)(pt->y - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  maxy = FloorfToInt((float)(pt->y + weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  minz = FloorfToInt((float)(pt->z - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  maxz = FloorfToInt((float)(pt->z + weldThr) / cellSize);
  bestIndex = -1;
  bestDistSq = weldThr * weldThr;
  for ( z = minz; z <= maxz; ++z )
  {
    for ( y = miny; y <= maxy; ++y )
    {
      for ( x = minx; x <= maxx; ++x )
      {
        h = DSVertexWelder<2048>::hash(x, y, z);
        v7 = (unsigned __int64)&this->m_first[h];
        v8 = (unsigned int)(v7 & 7) + 3;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v7);
        for ( i = this->m_first[h]; i != -1; i = *v14 )
        {
          v9 = i;
          if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceVersCount >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_sourceVersCount, v8);
          if ( v9 < this->m_sourceVersCount )
          {
            p_m_offset = &this->m_offset;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceVers >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->m_sourceVers, v8);
            *(Vector3f *)((char *)&v2 - 8) = operator-(&this->m_sourceVers[i], p_m_offset);
            *(_QWORD *)(v3 + 32) = v11;
            *(_DWORD *)(v3 + 40) = v2.m128i_i32[0];
            *(Vector3f *)((char *)&v2 - 8) = operator-((const Vector3f *)(v3 + 32), pt);
            *(_QWORD *)&inV.x = v12;
            LODWORD(inV.z) = v2.m128i_i32[0];
            SqrMagnitude(&inV);
            distSq = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
            if ( bestDistSq > distSq )
            {
              bestDistSq = distSq;
              bestIndex = i;
            }
          }
          v8 = i;
          v13 = dynamic_array<int,false,4ul>::operator[](&this->m_next, i);
          v14 = v13;
          v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
          LOBYTE(v8) = v15 != 0;
          if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
            __asan_report_load4(v13);
        }
      }
    }
  }
  result = bestIndex;
  if ( v35 == (char *)v3 )
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

// Line 270: range 000000000CDC1A46-000000000CDC219E
// local variable allocation has failed, the output may be wrong!
int __cdecl DSVertexWelder<2048>::AddUnique(DSVertexWelder<2048> *const this, const Vector3f *pt)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __m128i m_weldThr_low; // xmm0
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  size_t v9; // rcx
  Vector3f *p_m_offset; // rcx
  __int64 v11; // rcx
  unsigned __int64 n; // rax
  __int64 v13; // xmm0_8
  int *v14; // rax
  int *v15; // rdx
  char v16; // cl
  int result; // eax
  int bestIndex; // [rsp+18h] [rbp-B8h]
  float bestDistSq; // [rsp+1Ch] [rbp-B4h]
  int z; // [rsp+20h] [rbp-B0h]
  int y; // [rsp+24h] [rbp-ACh]
  int x; // [rsp+28h] [rbp-A8h]
  int i; // [rsp+2Ch] [rbp-A4h]
  float weldThr; // [rsp+30h] [rbp-A0h]
  float cellSize; // [rsp+34h] [rbp-9Ch]
  int minx; // [rsp+38h] [rbp-98h]
  int maxx; // [rsp+3Ch] [rbp-94h]
  int miny; // [rsp+40h] [rbp-90h]
  int maxy; // [rsp+44h] [rbp-8Ch]
  int minz; // [rsp+48h] [rbp-88h]
  int maxz; // [rsp+4Ch] [rbp-84h]
  int h; // [rsp+50h] [rbp-80h]
  float distSq; // [rsp+54h] [rbp-7Ch]
  dynamic_array<Vector3f,true,4> *verts; // [rsp+58h] [rbp-78h]
  Vector3f inV; // [rsp+64h] [rbp-6Ch] BYREF
  char v37[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 5 v:295";
  *(_QWORD *)(v3 + 16) = DSVertexWelder<2048>::AddUnique;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_verts, pt);
  verts = this->m_verts;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_weldThr_low = (__m128i)LODWORD(this->m_weldThr);
  weldThr = this->m_weldThr;
  *(float *)m_weldThr_low.m128i_i32 = DSVertexWelder<2048>::GetCellSize(this);
  cellSize = COERCE_FLOAT(_mm_cvtsi128_si32(m_weldThr_low));
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  minx = FloorfToInt((float)(pt->x - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pt);
  }
  maxx = FloorfToInt((float)(pt->x + weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  miny = FloorfToInt((float)(pt->y - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->y);
  }
  maxy = FloorfToInt((float)(pt->y + weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  minz = FloorfToInt((float)(pt->z - weldThr) / cellSize);
  if ( *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pt + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pt->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pt->z);
  }
  maxz = FloorfToInt((float)(pt->z + weldThr) / cellSize);
  bestIndex = -1;
  bestDistSq = weldThr * weldThr;
  for ( z = minz; z <= maxz; ++z )
  {
    for ( y = miny; y <= maxy; ++y )
    {
      for ( x = minx; x <= maxx; ++x )
      {
        h = DSVertexWelder<2048>::hash(x, y, z);
        v7 = (unsigned __int64)&this->m_first[h];
        v8 = (unsigned int)(v7 & 7) + 3;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v7);
        for ( i = this->m_first[h]; i != -1; i = *v15 )
        {
          v9 = i;
          if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceVersCount >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_sourceVersCount, v8);
          if ( v9 >= this->m_sourceVersCount )
          {
            v11 = i;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceVersCount >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->m_sourceVersCount, v8);
            n = (unsigned __int64)dynamic_array<Vector3f,true,4ul>::operator[](verts, v11 - this->m_sourceVersCount);
            if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
            {
              n = __asan_report_load_n(n, 12LL);
            }
            *(_QWORD *)(v3 + 32) = *(_QWORD *)n;
            *(_DWORD *)(v3 + 40) = *(_DWORD *)(n + 8);
          }
          else
          {
            p_m_offset = &this->m_offset;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_sourceVers >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->m_sourceVers, v8);
            *(Vector3f *)(v3 + 32) = operator-(&this->m_sourceVers[i], p_m_offset);
          }
          *(Vector3f *)((char *)&v2 - 8) = operator-((const Vector3f *)(v3 + 32), pt);
          *(_QWORD *)&inV.x = v13;
          LODWORD(inV.z) = v2.m128i_i32[0];
          SqrMagnitude(&inV);
          distSq = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
          if ( bestDistSq > distSq )
          {
            bestDistSq = distSq;
            bestIndex = i;
          }
          v8 = i;
          v14 = dynamic_array<int,false,4ul>::operator[](&this->m_next, i);
          v15 = v14;
          v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
          LOBYTE(v8) = v16 != 0;
          if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
            __asan_report_load4(v14);
        }
      }
    }
  }
  if ( bestIndex == -1 )
    result = DSVertexWelder<2048>::Push(this, pt);
  else
    result = bestIndex;
  if ( v37 == (char *)v3 )
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
