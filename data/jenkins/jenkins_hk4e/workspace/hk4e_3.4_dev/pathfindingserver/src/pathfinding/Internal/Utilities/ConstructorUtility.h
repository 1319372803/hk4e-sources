// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/ConstructorUtility.h

// Line 6: range 000000000CEB9890-000000000CEB98BA
void __cdecl copy_construct<CarveResult>(CarveResult *ptr, const CarveResult *t)
{
  memcpy(ptr, t, sizeof(CarveResult));
};

// Line 6: range 000000000CEBA6EF-000000000CEBA7E7
void __cdecl copy_construct<ClippedDetailMesh *>(ClippedDetailMesh **ptr, ClippedDetailMesh *const *t)
{
  ClippedDetailMesh *v2; // rsi

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)t + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 7) & 7) >= *(_BYTE *)((((unsigned __int64)t + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 8LL);
  }
  v2 = *t;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)ptr + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 7) & 7) >= *(_BYTE *)((((unsigned __int64)ptr + 7) >> 3) + 0x7FFF8000) )
  {
    v2 = (ClippedDetailMesh *)8;
    __asan_report_store_n(ptr, 8LL);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE529E3-000000000CE52A0D
void __cdecl copy_construct<DynamicMesh::Poly>(DynamicMesh::Poly *ptr, const DynamicMesh::Poly *t)
{
  memcpy(ptr, t, sizeof(DynamicMesh::Poly));
};

// Line 6: range 000000000CE53AB9-000000000CE53AE3
void __cdecl copy_construct<DynamicSihouette::Poly>(DynamicSihouette::Poly *ptr, const DynamicSihouette::Poly *t)
{
  memcpy(ptr, t, sizeof(DynamicSihouette::Poly));
};

// Line 6: range 000000000CE54DC7-000000000CE54DF1
void __cdecl copy_construct<MinMaxAABB>(MinMaxAABB *ptr, const MinMaxAABB *t)
{
  memcpy(ptr, t, sizeof(MinMaxAABB));
};

// Line 6: range 000000000CE3A617-000000000CE3A641
void __cdecl copy_construct<NavMeshCarveShape>(NavMeshCarveShape *ptr, const NavMeshCarveShape *t)
{
  memcpy(ptr, t, sizeof(NavMeshCarveShape));
};

// Line 6: range 000000000CE4D67F-000000000CE4D777
void __cdecl copy_construct<NavMeshTile *>(NavMeshTile **ptr, NavMeshTile *const *t)
{
  NavMeshTile *v2; // rsi

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)t + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 7) & 7) >= *(_BYTE *)((((unsigned __int64)t + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 8LL);
  }
  v2 = *t;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)ptr + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 7) & 7) >= *(_BYTE *)((((unsigned __int64)ptr + 7) >> 3) + 0x7FFF8000) )
  {
    v2 = (NavMeshTile *)8;
    __asan_report_store_n(ptr, 8LL);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE4EC07-000000000CE4ECFF
void __cdecl copy_construct<NavMeshTile const*>(const NavMeshTile **ptr, const NavMeshTile *const *t)
{
  const NavMeshTile *v2; // rsi

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)t + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 7) & 7) >= *(_BYTE *)((((unsigned __int64)t + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 8LL);
  }
  v2 = *t;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)ptr + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 7) & 7) >= *(_BYTE *)((((unsigned __int64)ptr + 7) >> 3) + 0x7FFF8000) )
  {
    v2 = (const NavMeshTile *)8;
    __asan_report_store_n(ptr, 8LL);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE4A98B-000000000CE4AA83
void __cdecl copy_construct<RTTI const*>(const RTTI **ptr, const RTTI *const *t)
{
  const RTTI *v2; // rsi

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)t + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 7) & 7) >= *(_BYTE *)((((unsigned __int64)t + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 8LL);
  }
  v2 = *t;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)ptr + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 7) & 7) >= *(_BYTE *)((((unsigned __int64)ptr + 7) >> 3) + 0x7FFF8000) )
  {
    v2 = (const RTTI *)8;
    __asan_report_store_n(ptr, 8LL);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE5659F-000000000CE56697
void __cdecl copy_construct<Vector2f>(Vector2f *ptr, const Vector2f *t)
{
  Vector2f v2; // rsi

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&t->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&t->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 8LL);
  }
  v2 = *t;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&ptr->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&ptr->y + 3) >> 3) + 0x7FFF8000) )
  {
    v2 = (Vector2f)8LL;
    __asan_report_store_n(ptr, 8LL);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE47AEF-000000000CE47B19
void __cdecl copy_construct<Vector3f>(Vector3f *ptr, const Vector3f *t)
{
  memcpy(ptr, t, sizeof(Vector3f));
};

// Line 6: range 000000000CEB5502-000000000CEB558A
void __cdecl copy_construct<bool>(bool *ptr, const bool *t)
{
  bool v2; // cl

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(t);
  }
  v2 = *t;
  if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(ptr);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE47955-000000000CE47A4B
void __cdecl copy_construct<int>(int *ptr, const int *t)
{
  int v2; // esi

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)t + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 3) & 7) >= *(_BYTE *)((((unsigned __int64)t + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 4LL);
  }
  v2 = *t;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)ptr + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 3) & 7) >= *(_BYTE *)((((unsigned __int64)ptr + 3) >> 3) + 0x7FFF8000) )
  {
    v2 = 4;
    __asan_report_store_n(ptr, 4LL);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE4E3A9-000000000CE4E4B1
void __cdecl copy_construct<std::pair<NavMeshTile *,unsigned int>>(
        std::pair<NavMeshTile*,unsigned int> *ptr,
        const std::pair<NavMeshTile*,unsigned int> *t)
{
  NavMeshTile *first; // rcx
  __int64 v3; // rbx

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&t->second + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&t->second + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 16LL);
  }
  first = t->first;
  v3 = *(_QWORD *)&t->second;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&ptr->second + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&ptr->second + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(ptr, 16LL);
  }
  ptr->first = first;
  *(_QWORD *)&ptr->second = v3;
};

// Line 6: range 000000000CEBB3DE-000000000CEBB466
void __cdecl copy_construct<unsigned char>(unsigned __int8 *ptr, const unsigned __int8 *t)
{
  unsigned __int8 v2; // cl

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(t);
  }
  v2 = *t;
  if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(ptr);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE3F3DF-000000000CE3F4D5
void __cdecl copy_construct<unsigned int>(unsigned int *ptr, const unsigned int *t)
{
  unsigned int v2; // esi

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)t + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 3) & 7) >= *(_BYTE *)((((unsigned __int64)t + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 4LL);
  }
  v2 = *t;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)ptr + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 3) & 7) >= *(_BYTE *)((((unsigned __int64)ptr + 3) >> 3) + 0x7FFF8000) )
  {
    v2 = 4;
    __asan_report_store_n(ptr, 4LL);
  }
  *ptr = v2;
};

// Line 6: range 000000000CE5908B-000000000CE59183
void __cdecl copy_construct<unsigned short>(unsigned __int16 *ptr, const unsigned __int16 *t)
{
  unsigned __int16 v2; // si

  if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)t + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 1) & 7) >= *(_BYTE *)((((unsigned __int64)t + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(t, 2LL);
  }
  v2 = *t;
  if ( ((unsigned __int8)ptr & 7) >= *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)ptr + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ptr + 1) & 7) >= *(_BYTE *)((((unsigned __int64)ptr + 1) >> 3) + 0x7FFF8000) )
  {
    v2 = 2;
    __asan_report_store_n(ptr, 2LL);
  }
  *ptr = v2;
};

// Line 13: range 000000000CE56EB3-000000000CE56F0C
void __cdecl copy_construct_n<CarveResult>(CarveResult *ptr, size_t size, const CarveResult *init_value)
{
  size_t i; // [rsp+28h] [rbp-8h]

  for ( i = 0LL; i < size; ++i )
    copy_construct<CarveResult>(&ptr[i], init_value);
};

// Line 13: range 000000000CE579A1-000000000CE579F2
void __cdecl copy_construct_n<ClippedDetailMesh *>(
        ClippedDetailMesh **ptr,
        size_t size,
        ClippedDetailMesh *const *init_value)
{
  size_t i; // [rsp+28h] [rbp-8h]

  for ( i = 0LL; i < size; ++i )
    copy_construct<ClippedDetailMesh *>(&ptr[i], init_value);
};

// Line 13: range 000000000CE592CE-000000000CE59327
void __cdecl copy_construct_n<Vector3f>(Vector3f *ptr, size_t size, const Vector3f *init_value)
{
  size_t i; // [rsp+28h] [rbp-8h]

  for ( i = 0LL; i < size; ++i )
    copy_construct<Vector3f>(&ptr[i], init_value);
};

// Line 13: range 000000000CE51D53-000000000CE51D9C
void __cdecl copy_construct_n<bool>(bool *ptr, size_t size, const bool *init_value)
{
  size_t i; // [rsp+28h] [rbp-8h]

  for ( i = 0LL; i < size; ++i )
    copy_construct<bool>(&ptr[i], init_value);
};

// Line 13: range 000000000CE523E2-000000000CE52433
void __cdecl copy_construct_n<int>(int *ptr, size_t size, const int *init_value)
{
  size_t i; // [rsp+28h] [rbp-8h]

  for ( i = 0LL; i < size; ++i )
    copy_construct<int>(&ptr[i], init_value);
};

// Line 13: range 000000000CE58363-000000000CE583AC
void __cdecl copy_construct_n<unsigned char>(unsigned __int8 *ptr, size_t size, const unsigned __int8 *init_value)
{
  size_t i; // [rsp+28h] [rbp-8h]

  for ( i = 0LL; i < size; ++i )
    copy_construct<unsigned char>(&ptr[i], init_value);
};

// Line 13: range 000000000CE50D7C-000000000CE50DC9
void __cdecl copy_construct_n<unsigned short>(unsigned __int16 *ptr, size_t size, const unsigned __int16 *init_value)
{
  size_t i; // [rsp+28h] [rbp-8h]

  for ( i = 0LL; i < size; ++i )
    copy_construct<unsigned short>(&ptr[i], init_value);
};

// Line 22: range 000000000CE51563-000000000CE51587
void __cdecl destruct<DynamicMesh::Poly>(DynamicMesh::Poly *ptr)
{
  memset(ptr, 0, sizeof(DynamicMesh::Poly));
};

// Line 22: range 000000000CE540FB-000000000CE5411F
void __cdecl destruct<DynamicSihouette::Poly>(DynamicSihouette::Poly *ptr)
{
  memset(ptr, 0, sizeof(DynamicSihouette::Poly));
};

// Line 22: range 000000000CE568A7-000000000CE568CB
void __cdecl destruct<Vector2f>(Vector2f *ptr)
{
  memset(ptr, 0, sizeof(Vector2f));
};

// Line 22: range 000000000CE51588-000000000CE515AC
void __cdecl destruct<int>(int *ptr)
{
  memset(ptr, 0, sizeof(int));
};

// Line 30: range 000000000CE56A68-000000000CE56A9F
void __cdecl destruct_n<CarveResult>(CarveResult *ptr, size_t size)
{
  memset(ptr, 0, 24 * size);
};

// Line 30: range 000000000CE5781A-000000000CE57849
void __cdecl destruct_n<ClippedDetailMesh *>(ClippedDetailMesh **ptr, size_t size)
{
  memset(ptr, 0, 8 * size);
};

// Line 30: range 000000000CE54B64-000000000CE54B9B
void __cdecl destruct_n<CuttingResult>(CuttingResult *ptr, size_t size)
{
  memset(ptr, 0, 24 * size);
};

// Line 30: range 000000000CE5717C-000000000CE571B4
void __cdecl destruct_n<DetailMeshBVNode>(DetailMeshBVNode *ptr, size_t size)
{
  memset(ptr, 0, 28 * size);
};

// Line 30: range 000000000CE57062-000000000CE57099
void __cdecl destruct_n<DetailMeshPoly>(DetailMeshPoly *ptr, size_t size)
{
  memset(ptr, 0, 24 * size);
};

// Line 30: range 000000000CE527B4-000000000CE527EB
void __cdecl destruct_n<DynamicMesh::Edge>(DynamicMesh::Edge *ptr, size_t size)
{
  memset(ptr, 0, 12 * size);
};

// Line 30: range 000000000CE512CC-000000000CE51309
void __cdecl destruct_n<DynamicMesh::Poly>(DynamicMesh::Poly *ptr, size_t size)
{
  memset(ptr, 0, 26 * size);
};

// Line 30: range 000000000CE54024-000000000CE5405B
void __cdecl destruct_n<DynamicSihouette::Edge>(DynamicSihouette::Edge *ptr, size_t size)
{
  memset(ptr, 0, 12 * size);
};

// Line 30: range 000000000CE531F2-000000000CE5322A
void __cdecl destruct_n<DynamicSihouette::Poly>(DynamicSihouette::Poly *ptr, size_t size)
{
  memset(ptr, 0, 36 * size);
};

// Line 30: range 000000000CE547BE-000000000CE547F6
void __cdecl destruct_n<HavokSihouetteCutter::ObstacleCarveInfo>(
        HavokSihouetteCutter::ObstacleCarveInfo *ptr,
        size_t size)
{
  memset(ptr, 0, 144 * size);
};

// Line 30: range 000000000CE4D390-000000000CE4D3C7
void __cdecl destruct_n<MinMaxAABB>(MinMaxAABB *ptr, size_t size)
{
  memset(ptr, 0, 24 * size);
};

// Line 30: range 000000000CCA58B8-000000000CCA58EF
void __cdecl destruct_n<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array<int,false,4ul> const&,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles>(
        NavMesh::CalculateSurfacesConnectedRegions::SurfaceAllEdgeTiles *ptr,
        size_t size)
{
  memset(ptr, 0, 48 * size);
};

// Line 30: range 000000000CE3A1D0-000000000CE3A1FB
void __cdecl destruct_n<NavMeshCarveShape>(NavMeshCarveShape *ptr, size_t size)
{
  memset(ptr, 0, 92 * size);
};

// Line 30: range 000000000CE5690E-000000000CE56946
void __cdecl destruct_n<NavMeshCarving::ObstacleCarveInfo>(NavMeshCarving::ObstacleCarveInfo *ptr, size_t size)
{
  memset(ptr, 0, 136 * size);
};

// Line 30: range 000000000CE51064-000000000CE51093
void __cdecl destruct_n<NavMeshNode *>(NavMeshNode **ptr, size_t size)
{
  memset(ptr, 0, 8 * size);
};

// Line 30: range 000000000CE50C1E-000000000CE50C4C
void __cdecl destruct_n<NavMeshNode>(NavMeshNode *ptr, size_t size)
{
  memset(ptr, 0, 32 * size);
};

// Line 30: range 000000000CE4D234-000000000CE4D263
void __cdecl destruct_n<NavMeshTile *>(NavMeshTile **ptr, size_t size)
{
  memset(ptr, 0, 8 * size);
};

// Line 30: range 000000000CF41FB0-000000000CF41FDF
void __cdecl destruct_n<NavMeshTile const*>(const NavMeshTile **ptr, size_t size)
{
  memset(ptr, 0, 8 * size);
};

// Line 30: range 000000000CE511BA-000000000CE511E8
void __cdecl destruct_n<Plane>(Plane *ptr, size_t size)
{
  memset(ptr, 0, 16 * size);
};

// Line 30: range 000000000CE56F50-000000000CE56F7E
void __cdecl destruct_n<TileLocation>(TileLocation *ptr, size_t size)
{
  memset(ptr, 0, 32 * size);
};

// Line 30: range 000000000CE4BAAA-000000000CE4BAD8
void __cdecl destruct_n<TypeManager::Builder::Node>(TypeManager::Builder::Node *ptr, size_t size)
{
  memset(ptr, 0, 16 * size);
};

// Line 30: range 000000000CE5605C-000000000CE5608B
void __cdecl destruct_n<Vector2f>(Vector2f *ptr, size_t size)
{
  memset(ptr, 0, 8 * size);
};

// Line 30: range 000000000CE513EC-000000000CE51423
void __cdecl destruct_n<Vector3f>(Vector3f *ptr, size_t size)
{
  memset(ptr, 0, 12 * size);
};

// Line 30: range 000000000CE51DE0-000000000CE51E07
void __cdecl destruct_n<bool>(bool *ptr, size_t size)
{
  memset(ptr, 0, size);
};

// Line 30: range 000000000CE4712A-000000000CE47159
void __cdecl destruct_n<int>(int *ptr, size_t size)
{
  memset(ptr, 0, 4 * size);
};

// Line 30: range 000000000CE4E136-000000000CE4E164
void __cdecl destruct_n<std::pair<NavMeshTile *,unsigned int>>(std::pair<NavMeshTile*,unsigned int> *ptr, size_t size)
{
  memset(ptr, 0, 16 * size);
};

// Line 30: range 000000000CE477EA-000000000CE47811
void __cdecl destruct_n<unsigned char>(unsigned __int8 *ptr, size_t size)
{
  memset(ptr, 0, size);
};

// Line 30: range 000000000CE3F0D8-000000000CE3F107
void __cdecl destruct_n<unsigned int>(unsigned int *ptr, size_t size)
{
  memset(ptr, 0, 4 * size);
};

// Line 30: range 000000000CE48B5A-000000000CE48B89
void __cdecl destruct_n<unsigned long long>(unsigned __int64 *ptr, size_t size)
{
  memset(ptr, 0, 8 * size);
};

// Line 30: range 000000000CE50E0C-000000000CE50E37
void __cdecl destruct_n<unsigned short>(unsigned __int16 *ptr, size_t size)
{
  memset(ptr, 0, 2 * size);
};

// Line 36: range 000000000CE9EB85-000000000CE9EBB6
void __cdecl copy_construct_array<NavMeshCarveShape>(
        NavMeshCarveShape *ptr,
        size_t size,
        const NavMeshCarveShape *src_vec)
{
  memcpy(ptr, src_vec, 92 * size);
};

// Line 36: range 000000000D04FA0A-000000000D04FA3E
void __cdecl copy_construct_array<Plane>(Plane *ptr, size_t size, const Plane *src_vec)
{
  memcpy(ptr, src_vec, 16 * size);
};

// Line 36: range 000000000CEB5222-000000000CEB525F
void __cdecl copy_construct_array<Vector3f>(Vector3f *ptr, size_t size, const Vector3f *src_vec)
{
  memcpy(ptr, src_vec, 12 * size);
};

// Line 36: range 000000000D04FAAC-000000000D04FAE1
void __cdecl copy_construct_array<int>(int *ptr, size_t size, const int *src_vec)
{
  memcpy(ptr, src_vec, 4 * size);
};

// Line 36: range 000000000CEB5DB6-000000000CEB5DE3
void __cdecl copy_construct_array<unsigned char>(unsigned __int8 *ptr, size_t size, const unsigned __int8 *src_vec)
{
  memcpy(ptr, src_vec, size);
};

// Line 36: range 000000000D004AD1-000000000D004B06
void __cdecl copy_construct_array<unsigned int>(unsigned int *ptr, size_t size, const unsigned int *src_vec)
{
  memcpy(ptr, src_vec, 4 * size);
};
