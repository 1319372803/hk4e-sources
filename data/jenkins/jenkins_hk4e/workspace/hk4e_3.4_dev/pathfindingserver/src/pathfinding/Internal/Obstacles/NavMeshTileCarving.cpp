// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp

// Line 36: range 000000000CDC6E66-000000000CDC6E94
void __cdecl ClippedDetailMesh::~ClippedDetailMesh(ClippedDetailMesh *const this)
{
  dynamic_array<unsigned short,false,2ul>::~dynamic_array(&this->triangles);
  dynamic_array<Vector3f,false,4ul>::~dynamic_array(&this->vertices);
};

// Line 38: range 000000000CD74D30-000000000CD74D97
void __cdecl ClippedDetailMesh::ClippedDetailMesh(ClippedDetailMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->polyIndex = 0;
  dynamic_array<Vector3f,false,4ul>::dynamic_array(&this->vertices);
  dynamic_array<unsigned short,false,2ul>::dynamic_array(&this->triangles);
};

// Line 64: range 000000000CD75198-000000000CD751E2
void __cdecl DetailMesh::~DetailMesh(DetailMesh *const this)
{
  dynamic_array<DetailMeshBVNode,false,4ul>::~dynamic_array(&this->bvNodes);
  dynamic_array<DetailMeshPoly,false,4ul>::~dynamic_array(&this->polys);
  dynamic_array<unsigned short,false,2ul>::~dynamic_array(&this->triangles);
  dynamic_array<Vector3f,false,4ul>::~dynamic_array(&this->vertices);
};

// Line 66: range 000000000CD74D98-000000000CD74DE2
void __cdecl DetailMesh::DetailMesh(DetailMesh *const this)
{
  dynamic_array<Vector3f,false,4ul>::dynamic_array(&this->vertices);
  dynamic_array<unsigned short,false,2ul>::dynamic_array(&this->triangles);
  dynamic_array<DetailMeshPoly,false,4ul>::dynamic_array(&this->polys);
  dynamic_array<DetailMeshBVNode,false,4ul>::dynamic_array(&this->bvNodes);
};

// Line 121: range 000000000CC7B972-000000000CC7C88C
CarveResultStatus __cdecl CarveNavMeshTile(
        unsigned __int8 **tileData,
        int *tileDataSize,
        const unsigned __int8 *sourceData,
        int sourceDataSize,
        const NavMeshCarveShape *shapes,
        int shapeCount,
        float carveDepth,
        float carveWidth,
        float quantSize,
        const Vector3f *position,
        const Quaternionf *rotation)
{
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  _DWORD *v13; // r12
  CarveResultStatus v14; // r14d
  __int64 n; // rax
  __int64 v16; // rax
  const NavMeshCarveShape *v17; // rdx
  const NavMeshCarveShape *v18; // rax
  __int64 v19; // rdx
  DetailHull *M_current; // r14
  size_t v21; // rax
  unsigned __int8 *v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  DetailHull *__last; // [rsp+0h] [rbp-25C0h]
  unsigned __int8 **tileDataa; // [rsp+38h] [rbp-2588h]
  bool validHull; // [rsp+47h] [rbp-2579h]
  int i; // [rsp+48h] [rbp-2578h]
  int i_0; // [rsp+4Ch] [rbp-2574h]
  __gnu_cxx::__normal_iterator<DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16> > > __i; // [rsp+58h] [rbp-2568h] BYREF
  __gnu_cxx::__normal_iterator<const DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16> > > __position; // [rsp+60h] [rbp-2560h] BYREF
  Vector3f lhs; // [rsp+6Ch] [rbp-2554h] BYREF
  Vector3f rhs; // [rsp+78h] [rbp-2548h] BYREF
  Vector3f inV; // [rsp+84h] [rbp-253Ch] BYREF
  char v43[9520]; // [rsp+90h] [rbp-2530h] BYREF

  tileDataa = tileData;
  v11 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    tileData = (unsigned __int8 **)9472;
    v12 = __asan_stack_malloc_8(9472LL);
    if ( v12 )
      v11 = v12;
  }
  *(_QWORD *)v11 = 1102416563LL;
  *(_QWORD *)(v11 + 8) = "10 32 12 14 tileOffset:142 64 24 8 hull:159 128 24 14 carveHulls:161 192 24 15 localBounds:190 "
                         "256 24 11 clipped:264 320 64 7 mat:155 416 92 14 localShape:164 544 96 14 detailMesh:147 672 15"
                         "2 8 tile:133 896 8312 15 dynamicMesh:240";
  *(_QWORD *)(v11 + 16) = CarveNavMeshTile;
  v13 = (_DWORD *)(v11 >> 3);
  v13[536862720] = -235802127;
  v13[536862721] = -219020288;
  v13[536862722] = -234881024;
  v13[536862723] = -218959118;
  v13[536862724] = -234881024;
  v13[536862725] = -218959118;
  v13[536862726] = -234881024;
  v13[536862727] = -218959118;
  v13[536862728] = -234881024;
  v13[536862729] = -218959118;
  v13[536862732] = -218959118;
  v13[536862735] = 0x4000000;
  v13[536862736] = -218959118;
  v13[536862740] = -218959118;
  v13[536862745] = -234881024;
  v13[536862746] = -218959118;
  v13[536862747] = -218959118;
  v13[536863007] = -218103808;
  v13[536863008] = -202116109;
  v13[536863009] = -202116109;
  v13[536863010] = -202116109;
  v13[536863011] = -202116109;
  v13[536863012] = -202116109;
  v13[536863013] = -202116109;
  v13[536863014] = -202116109;
  v13[536863015] = -202116109;
  if ( !sourceData )
  {
    __asan_handle_no_return(tileData);
    __assert_fail(
      "sourceData != __null",
      "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
      0x7Au,
      "CarveResultStatus CarveNavMeshTile(unsigned char**, int*, const unsigned char*, int, const NavMeshCarveShape*, int"
      ", float, float, float, const Vector3f&, const Quaternionf&)");
  }
  if ( sourceDataSize <= 0 )
  {
    __asan_handle_no_return(tileData);
    __assert_fail(
      "sourceDataSize > 0",
      "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
      0x7Bu,
      "CarveResultStatus CarveNavMeshTile(unsigned char**, int*, const unsigned char*, int, const NavMeshCarveShape*, int"
      ", float, float, float, const Vector3f&, const Quaternionf&)");
  }
  if ( *(_BYTE *)(((unsigned __int64)tileDataa >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *tileDataa = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)tileDataSize >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)tileDataSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tileDataSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(tileDataSize);
  }
  *tileDataSize = 0;
  if ( shapeCount )
  {
    NavMeshTile::NavMeshTile((NavMeshTile *const)(v11 + 672));
    if ( !PatchMeshTilePointers((NavMeshTile *)(v11 + 672), sourceData, sourceDataSize) )
    {
      v14 = kRemoveTile;
    }
    else
    {
      if ( !*(_QWORD *)(v11 + 688) )
      {
        __asan_handle_no_return(v11 + 672);
        __assert_fail(
          "tile.header != __null",
          "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
          0x8Cu,
          "CarveResultStatus CarveNavMeshTile(unsigned char**, int*, const unsigned char*, int, const NavMeshCarveShape*,"
          " int, float, float, float, const Vector3f&, const Quaternionf&)");
      }
      n = *(_QWORD *)(v11 + 688);
      if ( ((n + 56) & 7) >= *(_BYTE *)(((unsigned __int64)(n + 56) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)(n + 56) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(n + 67) >> 3) + 0x7FFF8000) != 0
        && ((n + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(n + 67) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n + 56, 12LL);
      }
      rhs = *(Vector3f *)(n + 56);
      v16 = *(_QWORD *)(v11 + 688);
      if ( ((v16 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)(v16 + 44) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)(v16 + 44) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(v16 + 55) >> 3) + 0x7FFF8000) != 0
        && ((v16 + 55) & 7) >= *(_BYTE *)(((unsigned __int64)(v16 + 55) >> 3) + 0x7FFF8000) )
      {
        v16 = __asan_report_load_n(v16 + 44, 12LL);
      }
      lhs = *(Vector3f *)(v16 + 44);
      inV = operator+(&lhs, &rhs);
      *(Vector3f *)(v11 + 32) = operator*(0.5, &inV);
      DetailMesh::DetailMesh((DetailMesh *const)(v11 + 544));
      UnpackDetailMesh((DetailMesh *)(v11 + 544), (const NavMeshTile *)(v11 + 672), (const Vector3f *)(v11 + 32));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v11 + 320));
      Matrix4x4f::SetTRInverse((Matrix4x4f *const)(v11 + 320), position, rotation);
      dynamic_array<Plane,false,4ul>::dynamic_array((dynamic_array<Plane,false,4> *const)(v11 + 64));
      dynamic_array<Plane,false,4ul>::reserve((dynamic_array<Plane,false,4> *const)(v11 + 64), 0x20uLL);
      std::vector<DetailHull,stl_allocator<DetailHull,16>>::vector((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 128));
      for ( i = 0; i < shapeCount; ++i )
      {
        NavMeshCarveShape::NavMeshCarveShape((NavMeshCarveShape *const)(v11 + 416));
        v17 = &shapes[i];
        if ( *(_BYTE *)(((unsigned __int64)&v17->shape >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v17 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->shape >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v17->shape);
        }
        *(_DWORD *)(v11 + 420) = v17->shape;
        *(Vector3f *)(v11 + 424) = Matrix4x4f::MultiplyPoint3((const Matrix4x4f *const)(v11 + 320), &shapes[i].center);
        v18 = &shapes[i];
        if ( (((unsigned __int8)v18 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v18->extents >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v18->extents >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v18->extents.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v18 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v18->extents.z + 3) >> 3) + 0x7FFF8000) )
        {
          v18 = (const NavMeshCarveShape *)__asan_report_load_n(&v18->extents, 12LL);
        }
        *(_QWORD *)(v11 + 436) = *(_QWORD *)&v18->extents.x;
        *(float *)(v11 + 444) = v18->extents.z;
        *(Vector3f *)(v11 + 448) = Matrix4x4f::MultiplyVector3((const Matrix4x4f *const)(v11 + 320), &shapes[i].xAxis);
        *(Vector3f *)(v11 + 460) = Matrix4x4f::MultiplyVector3((const Matrix4x4f *const)(v11 + 320), &shapes[i].yAxis);
        *(Vector3f *)(v11 + 472) = Matrix4x4f::MultiplyVector3((const Matrix4x4f *const)(v11 + 320), &shapes[i].zAxis);
        TransformAABBSlow(&shapes[i].bounds, (const Matrix4x4f *)(v11 + 320), (MinMaxAABB *)(v11 + 484));
        validHull = 0;
        if ( *(_DWORD *)(v11 + 420) )
        {
          if ( *(_DWORD *)(v11 + 420) == 1 )
            validHull = CalculateBoxHull(
                          (Hull *)(v11 + 64),
                          (const NavMeshCarveShape *)(v11 + 416),
                          (const Vector3f *)(v11 + 32),
                          carveDepth,
                          carveWidth);
        }
        else
        {
          validHull = CalculateCapsuleHull(
                        (Hull *)(v11 + 64),
                        (const NavMeshCarveShape *)(v11 + 416),
                        (const Vector3f *)(v11 + 32),
                        carveDepth,
                        carveWidth);
        }
        if ( validHull )
        {
          v19 = *(_QWORD *)(v11 + 492);
          *(_QWORD *)(v11 + 192) = *(_QWORD *)(v11 + 484);
          *(_QWORD *)(v11 + 200) = v19;
          *(_QWORD *)(v11 + 208) = *(_QWORD *)(v11 + 500);
          Vector3f::operator-=((Vector3f *const)(v11 + 192), (const Vector3f *)(v11 + 32));
          Vector3f::operator-=((Vector3f *const)(v11 + 204), (const Vector3f *)(v11 + 32));
          Vector3f::Vector3f(&rhs, -carveWidth, -carveDepth, -carveWidth);
          inV = operator*(&rhs, 1.415);
          Vector3f::operator+=((Vector3f *const)(v11 + 192), &inV);
          Vector3f::Vector3f(&rhs, carveWidth, 0.0, carveWidth);
          inV = operator*(&rhs, 1.415);
          Vector3f::operator+=((Vector3f *const)(v11 + 204), &inV);
          std::vector<DetailHull,stl_allocator<DetailHull,16>>::vector((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 256));
          if ( BuildDetailHulls(
                 (DetailHullContainer *)(v11 + 256),
                 (const Hull *)(v11 + 64),
                 (const MinMaxAABB *)(v11 + 192),
                 (const DetailMesh *)(v11 + 544),
                 (const NavMeshTile *)(v11 + 672),
                 (const Vector3f *)(v11 + 32),
                 quantSize) )
          {
            __last = std::vector<DetailHull,stl_allocator<DetailHull,16>>::end((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 256))._M_current;
            M_current = std::vector<DetailHull,stl_allocator<DetailHull,16>>::begin((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 256))._M_current;
            __i._M_current = std::vector<DetailHull,stl_allocator<DetailHull,16>>::end((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 128))._M_current;
            __gnu_cxx::__normal_iterator<DetailHull const*,std::vector<DetailHull,stl_allocator<DetailHull,16>>>::__normal_iterator<DetailHull*>(
              &__position,
              &__i);
            std::vector<DetailHull,stl_allocator<DetailHull,16>>::insert<__gnu_cxx::__normal_iterator<DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16>>>,void>(
              (std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 128),
              __position,
              (__gnu_cxx::__normal_iterator<DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16> > >)M_current,
              (__gnu_cxx::__normal_iterator<DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16> > >)__last);
          }
          std::vector<DetailHull,stl_allocator<DetailHull,16>>::~vector((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 256));
        }
      }
      DynamicMesh::DynamicMesh((DynamicMesh *const)(v11 + 896), quantSize);
      TileToDynamicMesh((const NavMeshTile *)(v11 + 672), (DynamicMesh *)(v11 + 896), (const Vector3f *)(v11 + 32));
      if ( !DynamicMesh::ClipPolys((DynamicMesh *const)(v11 + 896), (const DetailHullContainer *)(v11 + 128)) )
      {
        v14 = kRestoreTile;
      }
      else if ( DynamicMesh::PolyCount((const DynamicMesh *const)(v11 + 896)) )
      {
        ProjectNewVerticesToDetailMesh((DynamicMesh *)(v11 + 896), (const DetailMesh *)(v11 + 544));
        DynamicMesh::FindNeighbors((DynamicMesh *const)(v11 + 896));
        dynamic_array<ClippedDetailMesh *,false,8ul>::dynamic_array((dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 256));
        __position._M_current = 0LL;
        v21 = DynamicMesh::PolyCount((const DynamicMesh *const)(v11 + 896));
        dynamic_array<ClippedDetailMesh *,false,8ul>::resize_initialized(
          (dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 256),
          v21,
          (ClippedDetailMesh *const *)&__position,
          kIncreaseToExactSize);
        ClipDetailMeshes(
          (dynamic_array<ClippedDetailMesh*,false,8> *)(v11 + 256),
          (const DynamicMesh *)(v11 + 896),
          (const DetailMesh *)(v11 + 544),
          (const NavMeshTile *)(v11 + 672),
          (const Vector3f *)(v11 + 32),
          quantSize);
        v22 = DynamicMeshToTile(
                tileDataSize,
                (const DynamicMesh *)(v11 + 896),
                (const dynamic_array<ClippedDetailMesh*,false,8> *)(v11 + 256),
                (const NavMeshTile *)(v11 + 672),
                (const Vector3f *)(v11 + 32));
        if ( *(_BYTE *)(((unsigned __int64)tileDataa >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *tileDataa = v22;
        for ( i_0 = 0;
              i_0 < dynamic_array<ClippedDetailMesh *,false,8ul>::size((const dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 256));
              ++i_0 )
        {
          v23 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](
                                    (dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 256),
                                    i_0);
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8(v23, i_0);
          if ( *(_QWORD *)v23 )
          {
            v24 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](
                                      (dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 256),
                                      i_0);
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              v24 = __asan_report_load8(v24, i_0);
            delete_internal<ClippedDetailMesh>(*(ClippedDetailMesh **)v24);
            v25 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](
                                      (dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 256),
                                      i_0);
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
              v25 = __asan_report_store8();
            *(_QWORD *)v25 = 0LL;
          }
        }
        v14 = kReplaceTile;
        dynamic_array<ClippedDetailMesh *,false,8ul>::~dynamic_array((dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 256));
      }
      else
      {
        v14 = kReplaceTile;
      }
      DynamicMesh::~DynamicMesh((DynamicMesh *const)(v11 + 896));
      std::vector<DetailHull,stl_allocator<DetailHull,16>>::~vector((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 128));
      dynamic_array<Plane,false,4ul>::~dynamic_array((dynamic_array<Plane,false,4> *const)(v11 + 64));
      DetailMesh::~DetailMesh((DetailMesh *const)(v11 + 544));
    }
  }
  else
  {
    v14 = kRestoreTile;
  }
  if ( v43 == (char *)v11 )
  {
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v11 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v11 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v11 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v11 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v11 >> 3) + 0x7FFF847C) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8484) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF848C) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8494) = 0LL;
    *(_DWORD *)((v11 >> 3) + 0x7FFF849C) = 0;
  }
  else
  {
    *(_QWORD *)v11 = 1172321806LL;
    __asan_stack_free_8(v11, 9472LL, v43);
  }
  return v14;
};

// Line 283: range 000000000CC7C88D-000000000CC7CDC4
bool __cdecl PatchMeshTilePointers(NavMeshTile *tile, const unsigned __int8 *data, const int dataSize)
{
  uint32_t headerSize; // [rsp+20h] [rbp-30h]
  signed int vertsSize; // [rsp+24h] [rbp-2Ch]
  signed int polysSize; // [rsp+28h] [rbp-28h]
  signed int detailMeshesSize; // [rsp+2Ch] [rbp-24h]
  signed int detailVertsSize; // [rsp+30h] [rbp-20h]
  signed int detailTrisSize; // [rsp+34h] [rbp-1Ch]
  signed int bvtreeSize; // [rsp+38h] [rbp-18h]
  const unsigned __int8 *d; // [rsp+48h] [rbp-8h]
  NavMeshPoly *da; // [rsp+48h] [rbp-8h]
  const unsigned __int8 *db; // [rsp+48h] [rbp-8h]
  const unsigned __int8 *dc; // [rsp+48h] [rbp-8h]
  const unsigned __int8 *dd; // [rsp+48h] [rbp-8h]
  const unsigned __int8 *de; // [rsp+48h] [rbp-8h]
  unsigned int *df; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->header = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data);
  }
  if ( *(_DWORD *)data != 1145979222 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 4);
  }
  if ( *((_DWORD *)data + 1) != 17 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->header = (const NavMeshDataHeader *)data;
  headerSize = Align4(0x48u);
  if ( *(_BYTE *)(((unsigned __int64)(data + 24) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 24);
  }
  vertsSize = Align4(12 * *((_DWORD *)data + 6));
  if ( *(_BYTE *)(((unsigned __int64)(data + 20) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 20) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 20);
  }
  polysSize = Align4(32 * *((_DWORD *)data + 5));
  if ( *(_BYTE *)(((unsigned __int64)(data + 28) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 28) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 28);
  }
  detailMeshesSize = Align4(12 * *((_DWORD *)data + 7));
  if ( *(_BYTE *)(((unsigned __int64)(data + 32) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 32);
  }
  detailVertsSize = Align4(12 * *((_DWORD *)data + 8));
  if ( *(_BYTE *)(((unsigned __int64)(data + 36) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 36) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 36);
  }
  detailTrisSize = Align4(8 * *((_DWORD *)data + 9));
  if ( *(_BYTE *)(((unsigned __int64)(data + 40) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 40);
  }
  bvtreeSize = Align4(16 * *((_DWORD *)data + 10));
  if ( *(_BYTE *)(((unsigned __int64)(data + 20) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 20) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 20);
  }
  Align4(4 * *((_DWORD *)data + 5));
  d = &data[headerSize];
  if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->verts = (const Vector3f *)d;
  da = (NavMeshPoly *)&d[vertsSize];
  if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->polys = da;
  db = (const unsigned __int8 *)da + polysSize;
  if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->detailMeshes = (const NavMeshPolyDetail *)db;
  dc = &db[detailMeshesSize];
  if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->detailVerts = (const Vector3f *)dc;
  dd = &dc[detailVertsSize];
  if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->detailTris = (const NavMeshPolyDetailIndex *)dd;
  de = &dd[detailTrisSize];
  if ( *(_BYTE *)(((unsigned __int64)&tile->bvTree >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->bvTree = (const NavMeshBVNode *)de;
  df = (unsigned int *)&de[bvtreeSize];
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  tile->polyRegions = df;
  if ( !bvtreeSize )
    tile->bvTree = 0LL;
  return 1;
};

// Line 322: range 000000000CC7CDC5-000000000CC7D61E
// local variable allocation has failed, the output may be wrong!
int __cdecl SplitPolyByPlane(
        dynamic_array<Vector3f,false,4> *inside,
        const dynamic_array<Vector3f,false,4> *poly,
        const Plane *plane)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r12
  const Vector3f *v8; // rdx
  __m128i v9; // xmm0
  const Vector3f *v10; // rdx
  int v11; // xmm0_4
  char v12; // dl
  const float *v13; // rax
  _DWORD *v14; // rdx
  const float *v15; // rax
  unsigned int *v16; // rdx
  int result; // eax
  unsigned __int64 n; // rax
  size_t v19; // rdx
  char v20; // cl
  char v21; // dl
  __int64 v22; // xmm0_8
  float v23; // xmm1_4
  unsigned __int64 v24; // rax
  __int64 v25; // xmm0_8
  float v26; // xmm1_4
  unsigned __int64 v27; // rax
  float prevDist; // [rsp+28h] [rbp-198h]
  float currDist; // [rsp+2Ch] [rbp-194h]
  size_t iv; // [rsp+40h] [rbp-180h]
  size_t iv_0; // [rsp+48h] [rbp-178h]
  size_t vertexCount; // [rsp+50h] [rbp-170h]
  const Vector3f *currVert; // [rsp+60h] [rbp-160h]
  char v35[320]; // [rsp+80h] [rbp-140h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 288);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 15 minDistance:330 64 4 15 maxDistance:330 80 4 12 distance:335 96 12 12 prevVert:356 128 128 8 dist:327";
  *(_QWORD *)(v4 + 16) = SplitPolyByPlane;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -219020288;
  v7[536862728] = -202116109;
  vertexCount = dynamic_array<Vector3f,false,4ul>::size(poly);
  v8 = dynamic_array<Vector3f,false,4ul>::operator[](poly, 0LL);
  *(float *)v3.m128i_i32 = Plane::GetDistanceToPoint(plane, v8);
  *(_DWORD *)(v4 + 128) = _mm_cvtsi128_si32(v3);
  *(_DWORD *)(v4 + 64) = *(_DWORD *)(v4 + 128);
  v9 = (__m128i)*(unsigned int *)(v4 + 64);
  *(_DWORD *)(v4 + 48) = v9.m128i_i32[0];
  for ( iv = 1LL; iv < vertexCount; ++iv )
  {
    v10 = dynamic_array<Vector3f,false,4ul>::operator[](poly, iv);
    *(float *)v9.m128i_i32 = Plane::GetDistanceToPoint(plane, v10);
    *(_DWORD *)(v4 + 80) = _mm_cvtsi128_si32(v9);
    v11 = *(_DWORD *)(v4 + 80);
    v12 = *(_BYTE *)(((4 * iv + v4 + 128) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((4 * iv + v4 + 0x80) & 7) + 3) >= v12 )
      __asan_report_store4(4 * iv + v4 + 128);
    *(_DWORD *)&v6[4 * iv - 160] = v11;
    v13 = std::min<float>((const float *)(v4 + 48), (const float *)(v4 + 80));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    *(_DWORD *)(v4 + 48) = *v14;
    v15 = std::max<float>((const float *)(v4 + 64), (const float *)(v4 + 80));
    v16 = (unsigned int *)v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v9 = (__m128i)*v16;
    *(_DWORD *)(v4 + 64) = v9.m128i_i32[0];
  }
  if ( *(float *)(v4 + 64) > 0.0 )
  {
    if ( *(float *)(v4 + 48) <= 0.0 )
    {
      dynamic_array<Vector3f,false,4ul>::resize_uninitialized(inside, 0LL, kIncreaseToExactSize);
      n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](poly, vertexCount - 1);
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      *(_QWORD *)(v4 + 96) = *(_QWORD *)n;
      *(_DWORD *)(v4 + 104) = *(_DWORD *)(n + 8);
      v19 = vertexCount - 1;
      v20 = *(_BYTE *)(((v4 + 128 + 4 * (vertexCount - 1)) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((v4 + 0x80 + 4 * (vertexCount - 1)) & 7) + 3) >= v20 )
        __asan_report_load4(v4 + 128 + 4 * (vertexCount - 1));
      prevDist = *(float *)&v6[4 * v19 - 160];
      for ( iv_0 = 0LL; iv_0 < vertexCount; ++iv_0 )
      {
        currVert = dynamic_array<Vector3f,false,4ul>::operator[](poly, iv_0);
        v21 = *(_BYTE *)(((4 * iv_0 + v4 + 128) >> 3) + 0x7FFF8000);
        if ( v21 != 0 && (char)(((4 * iv_0 + v4 + 0x80) & 7) + 3) >= v21 )
          __asan_report_load4(4 * iv_0 + v4 + 128);
        currDist = *(float *)&v6[4 * iv_0 - 160];
        if ( currDist >= 0.0 || prevDist <= 0.0 )
        {
          if ( currDist > 0.0 && prevDist < 0.0 )
          {
            *(Vector3f *)&v25 = Lerp(
                                  (const Vector3f *)(v4 + 96),
                                  currVert,
                                  (float)-prevDist / (float)(currDist - prevDist));
            v27 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::push_back(inside);
            if ( (char)(v27 & 7) >= *(_BYTE *)((v27 >> 3) + 0x7FFF8000) && *(_BYTE *)((v27 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((v27 + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((v27 + 11) & 7) >= *(_BYTE *)(((v27 + 11) >> 3) + 0x7FFF8000) )
            {
              v27 = __asan_report_store_n(v27, 12LL);
            }
            *(_QWORD *)v27 = v25;
            *(float *)(v27 + 8) = v26;
          }
        }
        else
        {
          *(Vector3f *)&v22 = Lerp(
                                currVert,
                                (const Vector3f *)(v4 + 96),
                                (float)-currDist / (float)(prevDist - currDist));
          v24 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::push_back(inside);
          if ( (char)(v24 & 7) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) && *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v24 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v24 + 11) & 7) >= *(_BYTE *)(((v24 + 11) >> 3) + 0x7FFF8000) )
          {
            v24 = __asan_report_store_n(v24, 12LL);
          }
          *(_QWORD *)v24 = v22;
          *(float *)(v24 + 8) = v23;
        }
        if ( currDist <= 0.0 )
          dynamic_array<Vector3f,false,4ul>::push_back(inside, currVert);
        if ( ((unsigned __int8)currVert & 7) >= *(_BYTE *)(((unsigned __int64)currVert >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)currVert >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&currVert->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)currVert + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&currVert->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(currVert, 12LL);
        }
        *(_QWORD *)(v4 + 96) = *(_QWORD *)&currVert->x;
        *(float *)(v4 + 104) = currVert->z;
        prevDist = currDist;
      }
      result = 0;
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
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
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

// Line 390: range 000000000CC7D61F-000000000CC7D6C7
void __cdecl HullPolygonIntersection(
        dynamic_array<Vector3f,false,4> *inside,
        const dynamic_array<Plane,false,4> *hull,
        dynamic_array<Vector3f,false,4> *temp)
{
  const Plane *v3; // rdx
  int result; // [rsp+24h] [rbp-1Ch]
  size_t ic; // [rsp+28h] [rbp-18h]
  size_t planeCount; // [rsp+30h] [rbp-10h]

  planeCount = dynamic_array<Plane,false,4ul>::size(hull);
  for ( ic = 0LL; ic < planeCount; ++ic )
  {
    v3 = dynamic_array<Plane,false,4ul>::operator[](hull, ic);
    result = SplitPolyByPlane(temp, inside, v3);
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

// Line 413: range 000000000CD752F4-000000000CD75445
bool __cdecl DetailNodeXSorter::operator()(
        const DetailNodeXSorter *const this,
        const DetailMeshBVNode *ra,
        const DetailMeshBVNode *rb)
{
  float x; // xmm1_4
  float v4; // xmm1_4
  float a; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)ra >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ra & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ra >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(ra);
  }
  x = ra->min.x;
  if ( *(_BYTE *)(((unsigned __int64)&ra->max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)ra + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ra->max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&ra->max);
  }
  a = 0.5 * (float)(x + ra->max.x);
  if ( *(_BYTE *)(((unsigned __int64)rb >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rb);
  }
  v4 = rb->min.x;
  if ( *(_BYTE *)(((unsigned __int64)&rb->max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rb + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rb->max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rb->max);
  }
  return (float)(0.5 * (float)(v4 + rb->max.x)) > a;
};

// Line 423: range 000000000CD75446-000000000CD755A1
bool __cdecl DetailNodeYSorter::operator()(
        const DetailNodeYSorter *const this,
        const DetailMeshBVNode *ra,
        const DetailMeshBVNode *rb)
{
  float y; // xmm1_4
  float v4; // xmm1_4
  float a; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&ra->min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)ra + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ra->min.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&ra->min.y);
  }
  y = ra->min.y;
  if ( *(_BYTE *)(((unsigned __int64)&ra->max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)ra + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ra->max.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&ra->max.y);
  }
  a = 0.5 * (float)(y + ra->max.y);
  if ( *(_BYTE *)(((unsigned __int64)&rb->min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rb + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rb->min.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rb->min.y);
  }
  v4 = rb->min.y;
  if ( *(_BYTE *)(((unsigned __int64)&rb->max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rb + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rb->max.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rb->max.y);
  }
  return (float)(0.5 * (float)(v4 + rb->max.y)) > a;
};

// Line 433: range 000000000CD755A2-000000000CD756FD
bool __cdecl DetailNodeZSorter::operator()(
        const DetailNodeZSorter *const this,
        const DetailMeshBVNode *ra,
        const DetailMeshBVNode *rb)
{
  float z; // xmm1_4
  float v4; // xmm1_4
  float a; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&ra->min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)ra + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ra->min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&ra->min.z);
  }
  z = ra->min.z;
  if ( *(_BYTE *)(((unsigned __int64)&ra->max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)ra + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ra->max.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&ra->max.z);
  }
  a = 0.5 * (float)(z + ra->max.z);
  if ( *(_BYTE *)(((unsigned __int64)&rb->min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rb + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rb->min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rb->min.z);
  }
  v4 = rb->min.z;
  if ( *(_BYTE *)(((unsigned __int64)&rb->max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rb->max.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rb->max.z);
  }
  return (float)(0.5 * (float)(v4 + rb->max.z)) > a;
};

// Line 444: range 000000000CD756FE-000000000CD75955
bool __cdecl OverlapBoundsXZ(const Vector3f *amin, const Vector3f *amax, const Vector3f *bmin, const Vector3f *bmax)
{
  double v4; // xmm0_8
  float x; // xmm1_4
  double v7; // xmm0_8
  float z; // xmm1_4

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
    return 0;
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
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&amin->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amin + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&amin->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&amin->z);
  }
  *(float *)&v7 = amin->z;
  if ( *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmax + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load4(&bmax->z);
  }
  if ( *(float *)&v7 > bmax->z )
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
  return bmin->z <= z;
};

// Line 453: range 000000000CD75956-000000000CD75ADF
int __cdecl DetailLongestAxis(const Vector3f *v)
{
  float *v1; // rax
  float *v2; // rdx
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  float *v6; // rdx
  float *v7; // rax
  float *v8; // rdx
  float v10; // [rsp+4h] [rbp-1Ch]
  float v11; // [rsp+4h] [rbp-1Ch]
  int axis; // [rsp+1Ch] [rbp-4h]

  axis = 0;
  v1 = (float *)Vector3f::operator[](v, 1);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  v10 = *v2;
  v3 = (float *)Vector3f::operator[](v, 0);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  if ( v10 > *v4 )
    axis = 1;
  v5 = (float *)Vector3f::operator[](v, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v11 = *v6;
  v7 = (float *)Vector3f::operator[](v, axis);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  if ( v11 > *v8 )
    return 2;
  return axis;
};

// Line 465: range 000000000CC7D6C8-000000000CC7DD40
void __cdecl Subdivide(
        dynamic_array<DetailMeshBVNode,false,4> *nodes,
        dynamic_array<DetailMeshBVNode,false,4> *items,
        int imin,
        int imax)
{
  unsigned __int64 n; // rax
  DetailMeshBVNode *v5; // rax
  DetailMeshBVNode *v6; // r8
  const Vector3f *p_min; // rdi
  Vector3f *p_max; // rsi
  const Vector3f *v9; // rdi
  DetailMeshBVNode *v10; // rdx
  int *v11; // rax
  int idx; // ecx
  DetailMeshBVNode *v13; // rbx
  DetailMeshBVNode *v14; // rax
  DetailMeshBVNode *v15; // rbx
  DetailMeshBVNode *v16; // rax
  int v17; // ebx
  DetailMeshBVNode *v18; // rdx
  int *p_idx; // rax
  int i; // [rsp+20h] [rbp-40h]
  int inum; // [rsp+24h] [rbp-3Ch]
  int icur; // [rsp+28h] [rbp-38h]
  int axis; // [rsp+2Ch] [rbp-34h]
  DetailMeshBVNode *node; // [rsp+38h] [rbp-28h]
  Vector3f v; // [rsp+44h] [rbp-1Ch] BYREF

  inum = imax - imin;
  node = dynamic_array<DetailMeshBVNode,false,4ul>::push_back(nodes);
  icur = dynamic_array<DetailMeshBVNode,false,4ul>::size(nodes) - 1;
  n = (unsigned __int64)dynamic_array<DetailMeshBVNode,false,4ul>::operator[](items, imin);
  if ( ((unsigned __int8)node & 7) >= *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&node->min.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)node + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&node->min.z + 3) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_store_n(node, 12LL);
  }
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0 && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 12LL);
  }
  *(_QWORD *)&node->min.x = *(_QWORD *)n;
  node->min.z = *(float *)(n + 8);
  v5 = dynamic_array<DetailMeshBVNode,false,4ul>::operator[](items, imin);
  if ( (((unsigned __int8)node + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&node->max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&node->max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&node->max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)node + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&node->max.z + 3) >> 3) + 0x7FFF8000) )
  {
    v5 = (DetailMeshBVNode *)__asan_report_store_n(&node->max, 12LL);
  }
  if ( (((unsigned __int8)v5 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v5->max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v5->max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v5->max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v5 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->max.z + 3) >> 3) + 0x7FFF8000) )
  {
    v5 = (DetailMeshBVNode *)__asan_report_load_n(&v5->max, 12LL);
  }
  *(_QWORD *)&node->max.x = *(_QWORD *)&v5->max.x;
  node->max.z = v5->max.z;
  for ( i = imin + 1; i < imax; ++i )
  {
    v6 = dynamic_array<DetailMeshBVNode,false,4ul>::operator[](items, i);
    p_min = &node->min;
    if ( ((unsigned __int8)node & 7) >= *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&node->min.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)node + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&node->min.z + 3) >> 3) + 0x7FFF8000) )
    {
      p_min = &node->min;
      __asan_report_store_n(node, 12LL);
    }
    node->min = min(p_min, &v6->min);
    p_max = &dynamic_array<DetailMeshBVNode,false,4ul>::operator[](items, i)->max;
    v9 = &node->max;
    if ( (((unsigned __int8)node + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&node->max >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&node->max >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&node->max.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)node + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&node->max.z + 3) >> 3) + 0x7FFF8000) )
    {
      p_max = (Vector3f *)12;
      v9 = &node->max;
      __asan_report_store_n(&node->max, 12LL);
    }
    node->max = max(v9, p_max);
  }
  if ( imax - imin > 1 )
  {
    v = operator-(&node->max, &node->min);
    axis = DetailLongestAxis(&v);
    if ( axis )
    {
      v15 = &dynamic_array<DetailMeshBVNode,false,4ul>::begin(items)[imax];
      v16 = dynamic_array<DetailMeshBVNode,false,4ul>::begin(items);
      if ( axis == 1 )
        std::sort<DetailMeshBVNode *,DetailNodeYSorter>(&v16[imin], v15, (DetailNodeYSorter)imin);
      else
        std::sort<DetailMeshBVNode *,DetailNodeZSorter>(&v16[imin], v15, (DetailNodeZSorter)imin);
    }
    else
    {
      v13 = &dynamic_array<DetailMeshBVNode,false,4ul>::begin(items)[imax];
      v14 = dynamic_array<DetailMeshBVNode,false,4ul>::begin(items);
      std::sort<DetailMeshBVNode *,DetailNodeXSorter>(&v14[imin], v13, (DetailNodeXSorter)imin);
    }
    Subdivide(nodes, items, imin, inum / 2 + imin);
    Subdivide(nodes, items, inum / 2 + imin, imax);
    v17 = 1 - (dynamic_array<DetailMeshBVNode,false,4ul>::size(nodes) - icur);
    v18 = dynamic_array<DetailMeshBVNode,false,4ul>::operator[](nodes, icur);
    p_idx = &v18->idx;
    if ( *(_BYTE *)(((unsigned __int64)p_idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_idx);
    }
    v18->idx = v17;
  }
  else
  {
    v10 = dynamic_array<DetailMeshBVNode,false,4ul>::operator[](items, imin);
    v11 = &v10->idx;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    idx = v10->idx;
    if ( *(_BYTE *)(((unsigned __int64)&node->idx >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)node + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&node->idx);
    }
    node->idx = idx;
  }
};

// Line 511: range 000000000CC7DD41-000000000CC7E40D
bool __cdecl BuildBVTree(
        dynamic_array<DetailMeshBVNode,false,4> *nodes,
        const Vector3f *vertices,
        unsigned __int16 *tris,
        int triCount)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  int *p_idx; // rax
  unsigned __int64 v8; // rdx
  Vector3f *p_max; // rdx
  unsigned __int16 *v10; // rcx
  unsigned __int16 *v11; // rcx
  unsigned __int16 *v12; // rcx
  unsigned __int16 *v13; // rcx
  bool result; // al
  int i; // [rsp+2Ch] [rbp-A4h]
  const unsigned __int16 *t; // [rsp+30h] [rbp-A0h]
  DetailMeshBVNode *it; // [rsp+38h] [rbp-98h]
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 9 items:515";
  *(_QWORD *)(v4 + 16) = BuildBVTree;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  dynamic_array<DetailMeshBVNode,false,4ul>::clear(nodes);
  dynamic_array<DetailMeshBVNode,false,4ul>::dynamic_array((dynamic_array<DetailMeshBVNode,false,4> *const)(v4 + 32));
  dynamic_array<DetailMeshBVNode,false,4ul>::resize_uninitialized(
    (dynamic_array<DetailMeshBVNode,false,4> *const)(v4 + 32),
    triCount,
    kIncreaseToExactSize);
  for ( i = 0; i < triCount; ++i )
  {
    t = &tris[4 * i];
    it = dynamic_array<DetailMeshBVNode,false,4ul>::operator[](
           (dynamic_array<DetailMeshBVNode,false,4> *const)(v4 + 32),
           i);
    p_idx = &it->idx;
    if ( *(_BYTE *)(((unsigned __int64)p_idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_idx);
    }
    it->idx = i;
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t);
    }
    v8 = (unsigned __int64)&vertices[*t];
    if ( (((unsigned __int8)it + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&it->max >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&it->max >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&it->max.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->max.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&it->max, 12LL);
    }
    if ( (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v8 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v8 + 11) & 7) >= *(_BYTE *)(((v8 + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v8, 12LL);
    }
    *(_QWORD *)&it->max.x = *(_QWORD *)v8;
    it->max.z = *(float *)(v8 + 8);
    p_max = &it->max;
    if ( ((unsigned __int8)it & 7) >= *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&it->min.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)it + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&it->min.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(it, 12LL);
    }
    if ( ((unsigned __int8)p_max & 7) >= *(_BYTE *)(((unsigned __int64)p_max >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)p_max >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&p_max->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p_max + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p_max->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(p_max, 12LL);
    }
    *(_QWORD *)&it->min.x = *(_QWORD *)&p_max->x;
    it->min.z = p_max->z;
    v10 = (unsigned __int16 *)(t + 1);
    if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t + 1);
    }
    it->min = min(&it->min, &vertices[*v10]);
    v11 = (unsigned __int16 *)(t + 1);
    if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t + 1);
    }
    it->max = max(&it->max, &vertices[*v11]);
    v12 = (unsigned __int16 *)(t + 2);
    if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t + 2);
    }
    it->min = min(&it->min, &vertices[*v12]);
    v13 = (unsigned __int16 *)(t + 2);
    if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t + 2);
    }
    it->max = max(&it->max, &vertices[*v13]);
  }
  Subdivide(nodes, (dynamic_array<DetailMeshBVNode,false,4> *)(v4 + 32), 0, triCount);
  dynamic_array<DetailMeshBVNode,false,4ul>::~dynamic_array((dynamic_array<DetailMeshBVNode,false,4> *const)(v4 + 32));
  result = 1;
  if ( v20 == (char *)v4 )
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

// Line 535: range 000000000CD75AE0-000000000CD75B21
void __cdecl QueryDetailBVTreeCallback::QueryDetailBVTreeCallback(QueryDetailBVTreeCallback *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'QueryDetailBVTreeCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_QueryDetailBVTreeCallback = v1;
};

// Line 543: range 000000000CC7E40E-000000000CC7EB37
void __cdecl QueryDetailBVTree(
        const DetailMesh *detailMesh,
        const DetailMeshPoly *poly,
        const Vector3f *queryMin,
        const Vector3f *queryMax,
        QueryDetailBVTreeCallback *callback)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  char *v7; // r12
  unsigned __int64 v8; // r13
  dynamic_array<DetailMeshBVNode,false,4> *p_bvNodes; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  void (__fastcall **v12)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD); // rax
  int triBase; // ecx
  int v14; // esi
  int v15; // eax
  char v16; // cl
  void (__fastcall **vptr_QueryDetailBVTreeCallback)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD); // rax
  int v18; // esi
  int v19; // eax
  char v20; // cl
  void (__fastcall **v21)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD); // rax
  bool overlap; // [rsp+3Eh] [rbp-102h]
  bool isLeafNode; // [rsp+3Fh] [rbp-101h]
  int batchCount; // [rsp+40h] [rbp-100h]
  int n; // [rsp+44h] [rbp-FCh]
  int j; // [rsp+48h] [rbp-F8h]
  const DetailMeshBVNode *nodes; // [rsp+50h] [rbp-F0h]
  const DetailMeshBVNode *node; // [rsp+58h] [rbp-E8h]
  char v33[224]; // [rsp+60h] [rbp-E0h] BYREF

  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 192);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 128 9 batch:545";
  *(_QWORD *)(v5 + 16) = QueryDetailBVTree;
  v8 = v5 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450900) = -202116109;
  batchCount = 0;
  if ( *(_BYTE *)(((unsigned __int64)&poly->bvCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)poly + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->bvCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&poly->bvCount);
  }
  if ( poly->bvCount <= 0 )
  {
    for ( j = 0; ; ++j )
    {
      v10 = (((_BYTE)poly + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&poly->triCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)poly + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->triCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&poly->triCount);
      }
      if ( j >= poly->triCount )
        break;
      if ( batchCount > 31 )
      {
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v10);
        vptr_QueryDetailBVTreeCallback = (void (__fastcall **)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD))callback->_vptr_QueryDetailBVTreeCallback;
        if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_QueryDetailBVTreeCallback >> 3) + 0x7FFF8000) )
          vptr_QueryDetailBVTreeCallback = (void (__fastcall **)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD))__asan_report_load8(callback->_vptr_QueryDetailBVTreeCallback, v10);
        (*vptr_QueryDetailBVTreeCallback)(callback, detailMesh, poly, v5 + 32, (unsigned int)batchCount);
        batchCount = 0;
      }
      if ( *(_BYTE *)(((unsigned __int64)&poly->triBase >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)poly + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->triBase >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&poly->triBase);
      }
      v18 = poly->triBase + j;
      v19 = batchCount++;
      v20 = *(_BYTE *)(((4LL * v19 + v5 + 32) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((4 * v19 + v5 - 64 + 96) & 7) + 3) >= v20 )
        v19 = __asan_report_store4(4LL * v19 + v5 + 32);
      *(_DWORD *)&v7[4 * v19 - 160] = v18;
    }
  }
  else
  {
    p_bvNodes = &detailMesh->bvNodes;
    if ( *(_BYTE *)(((unsigned __int64)&poly->bvBase >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)poly + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->bvBase >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&poly->bvBase);
    }
    nodes = dynamic_array<DetailMeshBVNode,false,4ul>::operator[](p_bvNodes, poly->bvBase);
    n = 0;
    while ( 1 )
    {
      v10 = (((_BYTE)poly + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&poly->bvCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)poly + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->bvCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&poly->bvCount);
      }
      if ( n >= poly->bvCount )
        break;
      node = &nodes[n];
      overlap = OverlapBoundsXZ(queryMin, queryMax, &node->min, &node->max);
      v11 = (((_BYTE)node + 24) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&node->idx >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)node + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->idx >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&node->idx);
      }
      isLeafNode = node->idx >= 0;
      if ( node->idx >= 0 && overlap )
      {
        if ( batchCount > 31 )
        {
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v11);
          v12 = (void (__fastcall **)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD))callback->_vptr_QueryDetailBVTreeCallback;
          if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_QueryDetailBVTreeCallback >> 3) + 0x7FFF8000) )
            v12 = (void (__fastcall **)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD))__asan_report_load8(callback->_vptr_QueryDetailBVTreeCallback, v11);
          (*v12)(callback, detailMesh, poly, v5 + 32, (unsigned int)batchCount);
          batchCount = 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)&poly->triBase >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)poly + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->triBase >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&poly->triBase);
        }
        triBase = poly->triBase;
        if ( *(_BYTE *)(((unsigned __int64)&node->idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)node + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&node->idx);
        }
        v14 = triBase + node->idx;
        v15 = batchCount++;
        v16 = *(_BYTE *)(((4LL * v15 + v5 + 32) >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)(((4 * v15 + v5 - 64 + 96) & 7) + 3) >= v16 )
          v15 = __asan_report_store4(4LL * v15 + v5 + 32);
        *(_DWORD *)&v7[4 * v15 - 160] = v14;
      }
      if ( overlap || isLeafNode )
      {
        ++n;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&node->idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)node + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&node->idx);
        }
        n -= node->idx;
      }
    }
  }
  if ( batchCount > 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, v10);
    v21 = (void (__fastcall **)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD))callback->_vptr_QueryDetailBVTreeCallback;
    if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_QueryDetailBVTreeCallback >> 3) + 0x7FFF8000) )
      v21 = (void (__fastcall **)(QueryDetailBVTreeCallback *, const DetailMesh *, const DetailMeshPoly *, unsigned __int64, _QWORD))__asan_report_load8(callback->_vptr_QueryDetailBVTreeCallback, v10);
    (*v21)(callback, detailMesh, poly, v5 + 32, (unsigned int)batchCount);
  }
  if ( v33 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 601: range 000000000CC7EB38-000000000CC7FEE6
void __cdecl UnpackDetailMesh(DetailMesh *detailMesh, const NavMeshTile *tile, const Vector3f *tileOffset)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const NavMeshDataHeader *header; // rdx
  const NavMeshDataHeader *v7; // rdx
  const NavMeshDataHeader *v8; // rdx
  const NavMeshDataHeader *v9; // rdx
  const NavMeshDataHeader *v10; // rdx
  int *p_detailMeshCount; // rdi
  int *p_triCount; // rsi
  int *p_bvBase; // rax
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rsi
  const Vector3f *verts; // rcx
  char v19; // dl
  const Vector3f *detailVerts; // rcx
  int triBase; // edi
  int triCount; // ecx
  const NavMeshPolyDetailIndex *detailTris; // rcx
  NavMeshPolyDetailIndex v24; // r14
  unsigned __int16 *v25; // rax
  NavMeshPolyDetailIndex *v26; // rdx
  __int16 *v27; // rcx
  __int16 v28; // r14
  dynamic_array<short unsigned int,false,2> *p_triangles; // rcx
  unsigned __int16 *v30; // rax
  _WORD *v31; // rdx
  __int16 *v32; // rcx
  __int16 v33; // r14
  dynamic_array<short unsigned int,false,2> *v34; // rcx
  unsigned __int16 *v35; // rax
  _WORD *v36; // rdx
  __int16 *v37; // rcx
  __int16 v38; // r14
  dynamic_array<short unsigned int,false,2> *v39; // rcx
  unsigned __int16 *v40; // rax
  _WORD *v41; // rdx
  const int *v42; // rax
  _DWORD *v43; // rdx
  char v44; // cl
  int *v45; // rax
  int v46; // r14d
  dynamic_array<short unsigned int,false,2> *v47; // rcx
  unsigned __int16 *v48; // r15
  DetailMesh *v49; // rcx
  Vector3f *v50; // rax
  int v51; // edi
  DetailMeshBVNode *v52; // r14
  dynamic_array<DetailMeshBVNode,false,4> *p_bvNodes; // rcx
  unsigned __int64 n; // rax
  __int64 v55; // rdi
  int bvTriCount; // [rsp+24h] [rbp-11Ch]
  int i; // [rsp+28h] [rbp-118h]
  int j; // [rsp+2Ch] [rbp-114h]
  int j_0; // [rsp+30h] [rbp-110h]
  int j_1; // [rsp+34h] [rbp-10Ch]
  int i_0; // [rsp+38h] [rbp-108h]
  int j_2; // [rsp+3Ch] [rbp-104h]
  int vertCount; // [rsp+40h] [rbp-100h]
  int polyCount; // [rsp+44h] [rbp-FCh]
  int detailVertCount; // [rsp+48h] [rbp-F8h]
  int detailTriCount; // [rsp+4Ch] [rbp-F4h]
  int detailPolyCount; // [rsp+50h] [rbp-F0h]
  int nodeCount; // [rsp+54h] [rbp-ECh]
  const NavMeshPoly *p; // [rsp+58h] [rbp-E8h]
  const NavMeshPolyDetail *pd; // [rsp+60h] [rbp-E0h]
  DetailMeshPoly *poly; // [rsp+68h] [rbp-D8h]
  const NavMeshPolyDetailIndex *t; // [rsp+70h] [rbp-D0h]
  DetailMeshPoly *poly_0; // [rsp+78h] [rbp-C8h]
  Vector3f v77; // [rsp+84h] [rbp-BCh] BYREF
  char v78[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 maxTriCount:616 64 24 9 nodes:663";
  *(_QWORD *)(v3 + 16) = UnpackDetailMesh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tile);
  header = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)header + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&header->vertCount);
  }
  vertCount = header->vertCount;
  v7 = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&v7->polyCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->polyCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->polyCount);
  }
  polyCount = v7->polyCount;
  v8 = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&v8->detailVertCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->detailVertCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->detailVertCount);
  }
  detailVertCount = v8->detailVertCount;
  v9 = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&v9->detailTriCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->detailTriCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->detailTriCount);
  }
  detailTriCount = v9->detailTriCount;
  v10 = tile->header;
  p_detailMeshCount = (int *)((((_BYTE)v10 + 28) & 7u) + 3);
  if ( *(_BYTE *)(((unsigned __int64)&v10->detailMeshCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->detailMeshCount >> 3) + 0x7FFF8000) )
  {
    p_detailMeshCount = &v10->detailMeshCount;
    __asan_report_load4(&v10->detailMeshCount);
  }
  detailPolyCount = v10->detailMeshCount;
  if ( polyCount != detailPolyCount )
  {
    __asan_handle_no_return(p_detailMeshCount);
    __assert_fail(
      "polyCount == detailPolyCount",
      "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
      0x261u,
      "void UnpackDetailMesh(DetailMesh&, const NavMeshTile*, const Vector3f&)");
  }
  dynamic_array<Vector3f,false,4ul>::reserve(&detailMesh->vertices, detailVertCount + vertCount);
  dynamic_array<unsigned short,false,2ul>::resize_uninitialized(
    &detailMesh->triangles,
    4 * detailTriCount,
    kIncreaseToExactSize);
  p_triCount = (int *)detailPolyCount;
  dynamic_array<DetailMeshPoly,false,4ul>::resize_uninitialized(
    &detailMesh->polys,
    detailPolyCount,
    kIncreaseToExactSize);
  bvTriCount = 0;
  *(_DWORD *)(v3 + 48) = 0;
  for ( i = 0; i < polyCount; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->polys, p_triCount);
    p = &tile->polys[i];
    if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->detailMeshes, p_triCount);
    pd = &tile->detailMeshes[i];
    poly = dynamic_array<DetailMeshPoly,false,4ul>::operator[](&detailMesh->polys, i);
    p_bvBase = &poly->bvBase;
    if ( *(_BYTE *)(((unsigned __int64)p_bvBase >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_bvBase & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_bvBase >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_bvBase);
    }
    poly->bvBase = 0;
    if ( *(_BYTE *)(((unsigned __int64)&poly->bvCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)poly + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->bvCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&poly->bvCount);
    }
    poly->bvCount = 0;
    v14 = dynamic_array<Vector3f,false,4ul>::size(&detailMesh->vertices);
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      v14 = (int)poly;
      __asan_report_store4(poly);
    }
    poly->vertBase = v14;
    if ( *(_BYTE *)(((unsigned __int64)&p->vertCount >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&p->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&p->vertCount);
    }
    v15 = p->vertCount;
    if ( *(_BYTE *)(((unsigned __int64)&pd->vertCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&pd->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&pd->vertCount);
    }
    v16 = pd->vertCount + v15;
    if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)poly + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&poly->vertCount);
    }
    poly->vertCount = v16;
    for ( j = 0; ; ++j )
    {
      v17 = ((_BYTE)p + 28) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&p->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)v17 >= *(_BYTE *)(((unsigned __int64)&p->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->vertCount);
      }
      if ( j >= p->vertCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->verts, v17);
      verts = tile->verts;
      v19 = *(_BYTE *)(((unsigned __int64)&p->verts[j] >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((2 * j + (_BYTE)p) & 7) + 1) >= v19 )
        __asan_report_load2(&p->verts[j]);
      v77 = operator-(&verts[p->verts[j]], tileOffset);
      dynamic_array<Vector3f,false,4ul>::push_back(&detailMesh->vertices, &v77);
    }
    for ( j_0 = 0; ; ++j_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&pd->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pd + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&pd->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&pd->vertCount);
      }
      if ( j_0 >= pd->vertCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->detailVerts, (((_BYTE)pd + 8) & 7u) + 1);
      detailVerts = tile->detailVerts;
      if ( *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pd & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pd);
      }
      v77 = operator-(&detailVerts[pd->vertBase + j_0], tileOffset);
      dynamic_array<Vector3f,false,4ul>::push_back(&detailMesh->vertices, &v77);
    }
    if ( *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pd->triBase);
    }
    triBase = pd->triBase;
    if ( *(_BYTE *)(((unsigned __int64)&poly->triBase >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)poly + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->triBase >> 3) + 0x7FFF8000) )
    {
      triBase = (_DWORD)poly + 8;
      __asan_report_store4(&poly->triBase);
    }
    poly->triBase = triBase;
    if ( *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&pd->triCount);
    }
    triCount = pd->triCount;
    if ( *(_BYTE *)(((unsigned __int64)&poly->triCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)poly + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->triCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&poly->triCount);
    }
    poly->triCount = triCount;
    for ( j_1 = 0; ; ++j_1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pd + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&pd->triCount);
      }
      if ( j_1 >= pd->triCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->detailTris, (((_BYTE)pd + 10) & 7u) + 1);
      detailTris = tile->detailTris;
      if ( *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pd + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pd->triBase);
      }
      t = &detailTris[4 * (pd->triBase + j_1)];
      if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(t);
      }
      v24 = *t;
      v25 = dynamic_array<unsigned short,false,2ul>::operator[](&detailMesh->triangles, 4 * (pd->triBase + j_1));
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(v25);
      }
      *v26 = v24;
      v27 = (__int16 *)(t + 1);
      if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(t + 1);
      }
      v28 = *v27;
      p_triangles = &detailMesh->triangles;
      if ( *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pd + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pd->triBase);
      }
      v30 = dynamic_array<unsigned short,false,2ul>::operator[](p_triangles, 4 * (pd->triBase + j_1) + 1);
      v31 = v30;
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v30 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(v30);
      }
      *v31 = v28;
      v32 = (__int16 *)(t + 2);
      if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(t + 2);
      }
      v33 = *v32;
      v34 = &detailMesh->triangles;
      if ( *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pd + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pd->triBase);
      }
      v35 = dynamic_array<unsigned short,false,2ul>::operator[](v34, 4 * (pd->triBase + j_1) + 2);
      v36 = v35;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v35 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(v35);
      }
      *v36 = v33;
      v37 = (__int16 *)(t + 3);
      if ( *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(t + 3);
      }
      v38 = *v37;
      v39 = &detailMesh->triangles;
      if ( *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pd + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pd->triBase);
      }
      v40 = dynamic_array<unsigned short,false,2ul>::operator[](v39, 4 * (pd->triBase + j_1) + 3);
      v41 = v40;
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(v40);
      }
      *v41 = v38;
    }
    p_triCount = (int *)((((_BYTE)poly + 12) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&poly->triCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)poly + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->triCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&poly->triCount);
    }
    if ( poly->triCount > 6 )
    {
      bvTriCount += poly->triCount;
      p_triCount = &poly->triCount;
      v42 = std::max<int>((const int *)(v3 + 48), &poly->triCount);
      v43 = v42;
      v44 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
      LOBYTE(p_triCount) = v44 != 0;
      if ( v44 != 0 && (char)(((unsigned __int8)v42 & 7) + 3) >= v44 )
        __asan_report_load4(v42);
      *(_DWORD *)(v3 + 48) = *v43;
    }
  }
  if ( bvTriCount > 0 )
  {
    dynamic_array<DetailMeshBVNode,false,4ul>::reserve(&detailMesh->bvNodes, 2 * bvTriCount);
    dynamic_array<DetailMeshBVNode,false,4ul>::dynamic_array((dynamic_array<DetailMeshBVNode,false,4> *const)(v3 + 64));
    dynamic_array<DetailMeshBVNode,false,4ul>::reserve(
      (dynamic_array<DetailMeshBVNode,false,4> *const)(v3 + 64),
      *(int *)(v3 + 48));
    for ( i_0 = 0; i_0 < polyCount; ++i_0 )
    {
      poly_0 = dynamic_array<DetailMeshPoly,false,4ul>::operator[](&detailMesh->polys, i_0);
      v45 = &poly_0->triCount;
      if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v45);
      }
      if ( poly_0->triCount > 6 )
      {
        v46 = poly_0->triCount;
        v47 = &detailMesh->triangles;
        if ( *(_BYTE *)(((unsigned __int64)&poly_0->triBase >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)poly_0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly_0->triBase >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&poly_0->triBase);
        }
        v48 = dynamic_array<unsigned short,false,2ul>::operator[](v47, 4 * poly_0->triBase);
        v49 = detailMesh;
        if ( *(_BYTE *)(((unsigned __int64)poly_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)poly_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(poly_0);
        }
        v50 = dynamic_array<Vector3f,false,4ul>::operator[](&v49->vertices, poly_0->vertBase);
        BuildBVTree((dynamic_array<DetailMeshBVNode,false,4> *)(v3 + 64), v50, v48, v46);
        nodeCount = dynamic_array<DetailMeshBVNode,false,4ul>::size((const dynamic_array<DetailMeshBVNode,false,4> *const)(v3 + 64));
        if ( nodeCount > 0 )
        {
          v51 = dynamic_array<DetailMeshBVNode,false,4ul>::size(&detailMesh->bvNodes);
          if ( *(_BYTE *)(((unsigned __int64)&poly_0->bvBase >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)poly_0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly_0->bvBase >> 3) + 0x7FFF8000) )
          {
            v51 = (_DWORD)poly_0 + 16;
            __asan_report_store4(&poly_0->bvBase);
          }
          poly_0->bvBase = v51;
          if ( *(_BYTE *)(((unsigned __int64)&poly_0->bvCount >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)poly_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly_0->bvCount >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store4(&poly_0->bvCount);
          }
          poly_0->bvCount = nodeCount;
          dynamic_array<DetailMeshBVNode,false,4ul>::resize_uninitialized(
            &detailMesh->bvNodes,
            poly_0->bvBase + nodeCount,
            kIncreaseToExactSize);
          for ( j_2 = 0; j_2 < nodeCount; ++j_2 )
          {
            v52 = dynamic_array<DetailMeshBVNode,false,4ul>::operator[](
                    (dynamic_array<DetailMeshBVNode,false,4> *const)(v3 + 64),
                    j_2);
            p_bvNodes = &detailMesh->bvNodes;
            if ( *(_BYTE *)(((unsigned __int64)&poly_0->bvBase >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)poly_0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly_0->bvBase >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&poly_0->bvBase);
            }
            n = (unsigned __int64)dynamic_array<DetailMeshBVNode,false,4ul>::operator[](p_bvNodes, poly_0->bvBase + j_2);
            if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((n + 27) >> 3) + 0x7FFF8000) != 0
              && (char)((n + 27) & 7) >= *(_BYTE *)(((n + 27) >> 3) + 0x7FFF8000) )
            {
              n = __asan_report_store_n(n, 28LL);
            }
            if ( ((unsigned __int8)v52 & 7) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v52->idx + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v52 + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&v52->idx + 3) >> 3) + 0x7FFF8000) )
            {
              n = __asan_report_load_n(v52, 28LL);
            }
            v55 = *(_QWORD *)&v52->min.z;
            *(_QWORD *)n = *(_QWORD *)&v52->min.x;
            *(_QWORD *)(n + 8) = v55;
            *(_QWORD *)(n + 16) = *(_QWORD *)&v52->max.y;
            *(_DWORD *)(n + 24) = v52->idx;
          }
        }
      }
    }
    dynamic_array<DetailMeshBVNode,false,4ul>::~dynamic_array((dynamic_array<DetailMeshBVNode,false,4> *const)(v3 + 64));
  }
  if ( v78 == (char *)v3 )
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

// Line 689: range 000000000CC7FEE7-000000000CC8045B
void __cdecl ClosestHeightToTriangleEdge(
        float *height,
        float *dmin,
        const Vector3f *samplePos,
        const Vector3f *va,
        const Vector3f *vb,
        const Vector3f *vc)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  float y; // xmm1_4
  float v12; // xmm0_4
  __m128i v13; // xmm0
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float d; // [rsp+3Ch] [rbp-64h]
  float da; // [rsp+3Ch] [rbp-64h]
  float db; // [rsp+3Ch] [rbp-64h]
  char v25[96]; // [rsp+40h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 4 5 t:690";
  *(_QWORD *)(v6 + 16) = ClosestHeightToTriangleEdge;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)dmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(dmin);
  }
  v9 = (__m128i)0x7F7FFFFFu;
  *dmin = 3.4028235e38;
  *(float *)v9.m128i_i32 = SqrDistancePointSegment2D((float *)(v6 + 32), samplePos, va, vb);
  d = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  if ( *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)dmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(dmin);
  }
  v10 = (__m128i)*(unsigned int *)dmin;
  if ( *(float *)v10.m128i_i32 > d )
  {
    if ( *(_BYTE *)(((unsigned __int64)&va->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)va + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&va->y);
    }
    y = va->y;
    if ( *(_BYTE *)(((unsigned __int64)&vb->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vb + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&vb->y);
    }
    v12 = (float)(*(float *)(v6 + 32) * (float)(vb->y - va->y)) + y;
    if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(height);
    }
    *height = v12;
    v10 = (__m128i)LODWORD(d);
    *dmin = d;
  }
  *(float *)v10.m128i_i32 = SqrDistancePointSegment2D((float *)(v6 + 32), samplePos, vb, vc);
  da = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  if ( *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)dmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(dmin);
  }
  v13 = (__m128i)*(unsigned int *)dmin;
  if ( *(float *)v13.m128i_i32 > da )
  {
    if ( *(_BYTE *)(((unsigned __int64)&vb->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vb + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&vb->y);
    }
    v14 = vb->y;
    if ( *(_BYTE *)(((unsigned __int64)&vc->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vc + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vc->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&vc->y);
    }
    v15 = (float)(*(float *)(v6 + 32) * (float)(vc->y - vb->y)) + v14;
    if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(height);
    }
    *height = v15;
    v13 = (__m128i)LODWORD(da);
    *dmin = da;
  }
  *(float *)v13.m128i_i32 = SqrDistancePointSegment2D((float *)(v6 + 32), samplePos, vc, va);
  db = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  if ( *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)dmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(dmin);
  }
  if ( *dmin > db )
  {
    if ( *(_BYTE *)(((unsigned __int64)&vc->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vc + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vc->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&vc->y);
    }
    v16 = vc->y;
    if ( *(_BYTE *)(((unsigned __int64)&va->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)va + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&va->y);
    }
    v17 = (float)(*(float *)(v6 + 32) * (float)(va->y - vc->y)) + v16;
    if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(height);
    }
    *height = v17;
    *dmin = db;
  }
  if ( v25 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 715: range 000000000CC8045C-000000000CC80765
void __cdecl PickDetailTriHeight(
        float *height,
        float *dmin,
        const Vector3f *samplePos,
        const Vector3f *va,
        const Vector3f *vb,
        const Vector3f *vc)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r13
  int v9; // xmm0_4
  int v10; // xmm0_4
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 5 h:716 64 4 8 dist:724";
  *(_QWORD *)(v6 + 16) = PickDetailTriHeight;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202116348;
  *(_DWORD *)(v6 + 48) = 0;
  if ( ClosestHeightPointTriangle((float *)(v6 + 48), samplePos, va, vb, vc) )
  {
    v9 = *(_DWORD *)(v6 + 48);
    if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(height);
    }
    *(_DWORD *)height = v9;
    if ( *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(dmin);
    }
    *dmin = 0.0;
  }
  if ( *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)dmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(dmin);
  }
  if ( *dmin > 0.0 )
  {
    ClosestHeightToTriangleEdge((float *)(v6 + 48), (float *)(v6 + 64), samplePos, va, vb, vc);
    if ( *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dmin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dmin);
    }
    if ( *dmin > *(float *)(v6 + 64) )
    {
      v10 = *(_DWORD *)(v6 + 48);
      if ( *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)height & 7) + 3) >= *(_BYTE *)(((unsigned __int64)height >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(height);
      }
      *(_DWORD *)height = v10;
      *dmin = *(float *)(v6 + 64);
    }
  }
  if ( v15 == (char *)v6 )
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

// Line 735: range 000000000CC80C09-000000000CC80E16
float __cdecl PickDetailPolyHeight(const DetailMesh *detailMesh, int polyIdx, const Vector3f *samplePos)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  float result; // xmm0_4
  const DetailMeshPoly *poly; // [rsp+28h] [rbp-E8h]
  char v9[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 12 13 sampleExt:761 64 12 12 queryMin:762 96 12 12 queryMax:763 128 32 12 callback:765";
  *(_QWORD *)(v3 + 16) = PickDetailPolyHeight;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -219020288;
  v5[536862725] = -202116109;
  poly = dynamic_array<DetailMeshPoly,false,4ul>::operator[](&detailMesh->polys, polyIdx);
  Vector3f::Vector3f((Vector3f *const)(v3 + 32), 0.1, 0.0, 0.1);
  *(Vector3f *)(v3 + 64) = operator-(samplePos, (const Vector3f *)(v3 + 32));
  *(Vector3f *)(v3 + 96) = operator+(samplePos, (const Vector3f *)(v3 + 32));
  PickDetailPolyHeight(DetailMesh const&,int,Vector3f const&)::PickHeightCallback::PickHeightCallback(
    (PickDetailPolyHeight::PickHeightCallback *const)(v3 + 128),
    samplePos);
  QueryDetailBVTree(
    detailMesh,
    poly,
    (const Vector3f *)(v3 + 64),
    (const Vector3f *)(v3 + 96),
    (QueryDetailBVTreeCallback *)(v3 + 128));
  result = *(float *)(v3 + 148);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 741: range 000000000CC80766-000000000CC80967
void __cdecl PickDetailPolyHeight(DetailMesh const&,int,Vector3f const&)::PickHeightCallback::PickHeightCallback(
        PickDetailPolyHeight::PickHeightCallback *const this,
        const Vector3f *pos)
{
  int (**v2)(...); // rcx
  float y; // xmm0_4

  QueryDetailBVTreeCallback::QueryDetailBVTreeCallback(this);
  v2 = (int (**)(...))&off_1EFAFF50;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_QueryDetailBVTreeCallback = v2;
  if ( *(char *)(((unsigned __int64)&this->samplePos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->samplePos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->samplePos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->samplePos, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->samplePos = *pos;
  if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->y);
  }
  y = pos->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height);
  }
  this->height = y;
  if ( *(_BYTE *)(((unsigned __int64)&this->dmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dmin);
  }
  this->dmin = 3.4028235e38;
};

// Line 746: range 000000000CC80968-000000000CC80C08
void __cdecl PickDetailPolyHeight(DetailMesh const&,int,Vector3f const&)::PickHeightCallback::process(
        PickDetailPolyHeight::PickHeightCallback *const this,
        const DetailMesh *detailMesh,
        const DetailMeshPoly *poly,
        const int *tris,
        int triCount)
{
  dynamic_array<short unsigned int,false,2> *p_triangles; // rdi
  unsigned __int64 v6; // rcx
  const DetailMesh *v7; // rcx
  int vertBase; // esi
  const dynamic_array<Vector3f,false,4> *p_vertices; // rdi
  int v10; // esi
  unsigned __int16 *v11; // rcx
  const dynamic_array<Vector3f,false,4> *v12; // rdi
  int v13; // esi
  unsigned __int16 *v14; // rcx
  const Vector3f *v15; // r8
  int i; // [rsp+3Ch] [rbp-24h]
  const unsigned __int16 *t; // [rsp+40h] [rbp-20h]
  const Vector3f *va; // [rsp+48h] [rbp-18h]
  const Vector3f *vb; // [rsp+50h] [rbp-10h]

  for ( i = 0; i < triCount; ++i )
  {
    p_triangles = &detailMesh->triangles;
    v6 = (unsigned __int64)&tris[i];
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i + (_BYTE)tris) & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      p_triangles = (dynamic_array<short unsigned int,false,2> *)&tris[i];
      __asan_report_load4(p_triangles);
    }
    t = dynamic_array<unsigned short,false,2ul>::operator[](p_triangles, 4 * *(_DWORD *)v6);
    v7 = detailMesh;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(poly);
    }
    vertBase = poly->vertBase;
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t);
    }
    va = dynamic_array<Vector3f,false,4ul>::operator[](&v7->vertices, vertBase + *t);
    p_vertices = &detailMesh->vertices;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      p_vertices = (const dynamic_array<Vector3f,false,4> *)poly;
      __asan_report_load4(poly);
    }
    v10 = poly->vertBase;
    v11 = (unsigned __int16 *)(t + 1);
    if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
    {
      p_vertices = (const dynamic_array<Vector3f,false,4> *)(t + 1);
      __asan_report_load2(t + 1);
    }
    vb = dynamic_array<Vector3f,false,4ul>::operator[](p_vertices, v10 + *v11);
    v12 = &detailMesh->vertices;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      v12 = (const dynamic_array<Vector3f,false,4> *)poly;
      __asan_report_load4(poly);
    }
    v13 = poly->vertBase;
    v14 = (unsigned __int16 *)(t + 2);
    if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
    {
      v12 = (const dynamic_array<Vector3f,false,4> *)(t + 2);
      __asan_report_load2(t + 2);
    }
    v15 = dynamic_array<Vector3f,false,4ul>::operator[](v12, v13 + *v14);
    PickDetailTriHeight(&this->height, &this->dmin, &this->samplePos, va, vb, v15);
  }
};

// Line 773: range 000000000CC80E17-000000000CC812B9
// local variable allocation has failed, the output may be wrong!
void __cdecl ProjectNewVerticesToDetailMesh(DynamicMesh *mesh, const DetailMesh *detailMesh)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint8_t *p_m_Status; // rax
  DynamicMesh::DataType *Data; // rax
  int *v8; // rdx
  int v9; // r14d
  char v10; // dl
  int *v11; // rax
  int *v12; // rdx
  int *v13; // rax
  int *v14; // rdx
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __m128i v17; // xmm0
  int t; // [rsp+18h] [rbp-D8h] BYREF
  int i; // [rsp+1Ch] [rbp-D4h]
  int j; // [rsp+20h] [rbp-D0h]
  int i_0; // [rsp+24h] [rbp-CCh]
  int vertCount; // [rsp+28h] [rbp-C8h]
  int polyCount; // [rsp+2Ch] [rbp-C4h]
  int sourcePolyIndex; // [rsp+30h] [rbp-C0h]
  int ip_0; // [rsp+34h] [rbp-BCh]
  const DynamicMesh::Poly *p; // [rsp+38h] [rbp-B8h]
  char v27[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 7 pos:800 64 24 20 vertexSourcePoly:777";
  *(_QWORD *)(v3 + 16) = ProjectNewVerticesToDetailMesh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  vertCount = DynamicMesh::VertCount(mesh);
  polyCount = DynamicMesh::PolyCount(mesh);
  dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v3 + 64));
  t = -1;
  dynamic_array<int,false,4ul>::resize_initialized(
    (dynamic_array<int,false,4> *const)(v3 + 64),
    vertCount,
    &t,
    kIncreaseToExactSize);
  for ( i = 0; i < polyCount; ++i )
  {
    p = DynamicMesh::GetPoly(mesh, i);
    p_m_Status = &p->m_Status;
    if ( *(_BYTE *)(((unsigned __int64)p_m_Status >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_m_Status & 7) >= *(_BYTE *)(((unsigned __int64)p_m_Status >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_m_Status);
    }
    if ( p->m_Status )
    {
      Data = (DynamicMesh::DataType *)DynamicMesh::GetData(mesh, i);
      v8 = Data;
      if ( *(_BYTE *)(((unsigned __int64)Data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)Data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(Data);
      }
      sourcePolyIndex = *v8;
      for ( j = 0; ; ++j )
      {
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        if ( j >= p->m_VertexCount )
          break;
        v9 = sourcePolyIndex;
        v10 = *(_BYTE *)(((unsigned __int64)&p->m_VertexIDs[j] >> 3) + 0x7FFF8000);
        if ( v10 != 0 && (char)(((2 * j + (_BYTE)p + 12) & 7) + 1) >= v10 )
          __asan_report_load2(&p->m_VertexIDs[j]);
        v11 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v3 + 64), p->m_VertexIDs[j]);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v11);
        }
        *v12 = v9;
      }
    }
  }
  for ( i_0 = 0; i_0 < vertCount; ++i_0 )
  {
    v13 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v3 + 64), i_0);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    ip_0 = *v14;
    if ( ip_0 != -1 )
    {
      *(Vector3f *)((char *)&v2 - 8) = DynamicMesh::GetVertex(mesh, i_0);
      v16 = v15;
      v17 = v2;
      *(_QWORD *)(v3 + 32) = v16;
      *(_DWORD *)(v3 + 40) = v2.m128i_i32[0];
      *(float *)v17.m128i_i32 = PickDetailPolyHeight(detailMesh, ip_0, (const Vector3f *)(v3 + 32));
      *(_DWORD *)(v3 + 36) = _mm_cvtsi128_si32(v17);
      DynamicMesh::SetVertex(mesh, i_0, (const Vector3f *)(v3 + 32));
    }
  }
  dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v3 + 64));
  if ( v27 == (char *)v3 )
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

// Line 807: range 000000000CC812BA-000000000CC817B8
// local variable allocation has failed, the output may be wrong!
void __cdecl ProjectNewVerticesToDetailMesh(DynamicSihouette *mesh, const DetailMesh *detailMesh)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rsi
  __int64 SourceTile; // rax
  __int64 v8; // rdx
  char v9; // dl
  DynamicSihouette::DataType m_polyId; // r14d
  int *v11; // rax
  DynamicSihouette::DataType *v12; // rdx
  int *v13; // rax
  int *v14; // rdx
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __m128i v17; // xmm0
  int t; // [rsp+18h] [rbp-D8h] BYREF
  int i; // [rsp+1Ch] [rbp-D4h]
  int j; // [rsp+20h] [rbp-D0h]
  int i_0; // [rsp+24h] [rbp-CCh]
  int vertCount; // [rsp+28h] [rbp-C8h]
  int polyCount; // [rsp+2Ch] [rbp-C4h]
  int sourceVertCount; // [rsp+30h] [rbp-C0h]
  int ip_0; // [rsp+34h] [rbp-BCh]
  const DynamicSihouette::Poly *p; // [rsp+38h] [rbp-B8h]
  char v28[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 7 pos:833 64 24 20 vertexSourcePoly:811";
  *(_QWORD *)(v3 + 16) = ProjectNewVerticesToDetailMesh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  vertCount = DynamicSihouette::VertCount(mesh);
  polyCount = DynamicSihouette::PolyCount(mesh);
  dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v3 + 64));
  t = -1;
  v6 = vertCount;
  dynamic_array<int,false,4ul>::resize_initialized(
    (dynamic_array<int,false,4> *const)(v3 + 64),
    vertCount,
    &t,
    kIncreaseToExactSize);
  SourceTile = (__int64)DynamicSihouette::GetSourceTile(mesh);
  if ( *(_BYTE *)(((unsigned __int64)(SourceTile + 16) >> 3) + 0x7FFF8000) )
    SourceTile = __asan_report_load8(SourceTile + 16, v6);
  v8 = *(_QWORD *)(SourceTile + 16);
  if ( *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000) != 0
    && (char)(((v8 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8 + 24);
  }
  sourceVertCount = *(_DWORD *)(v8 + 24);
  for ( i = 0; i < polyCount; ++i )
  {
    p = DynamicSihouette::GetPoly(mesh, i);
    for ( j = 0; ; ++j )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->m_VertexCount);
      }
      if ( j >= p->m_VertexCount )
        break;
      v9 = *(_BYTE *)(((unsigned __int64)&p->m_VertexIDs[j] >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)(((2 * (j + 8) + (_BYTE)p + 2) & 7) + 1) >= v9 )
        __asan_report_load2(&p->m_VertexIDs[j]);
      if ( sourceVertCount <= p->m_VertexIDs[j] )
      {
        if ( *(_BYTE *)(((unsigned __int64)&p->m_polyId >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->m_polyId >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&p->m_polyId);
        }
        m_polyId = p->m_polyId;
        v11 = dynamic_array<int,false,4ul>::operator[](
                (dynamic_array<int,false,4> *const)(v3 + 64),
                p->m_VertexIDs[j] - sourceVertCount);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v11);
        }
        *v12 = m_polyId;
      }
    }
  }
  for ( i_0 = 0; i_0 < vertCount; ++i_0 )
  {
    v13 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v3 + 64), i_0);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    ip_0 = *v14;
    if ( ip_0 != -1 )
    {
      *(Vector3f *)((char *)&v2 - 8) = DynamicSihouette::GetVertex(mesh, i_0 + sourceVertCount);
      v16 = v15;
      v17 = v2;
      *(_QWORD *)(v3 + 32) = v16;
      *(_DWORD *)(v3 + 40) = v2.m128i_i32[0];
      *(float *)v17.m128i_i32 = PickDetailPolyHeight(detailMesh, ip_0, (const Vector3f *)(v3 + 32));
      *(_DWORD *)(v3 + 36) = _mm_cvtsi128_si32(v17);
      DynamicSihouette::SetVertex(mesh, i_0, (const Vector3f *)(v3 + 32));
    }
  }
  DynamicSihouette::ReWelderVertices(mesh);
  dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v3 + 64));
  if ( v28 == (char *)v3 )
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

// Line 842: range 000000000CC817B9-000000000CC81ADD
void __cdecl CalcPolyDetailBounds(MinMaxAABB *bounds, const DetailMesh *detailMesh, const int ip_0)
{
  const DetailMeshPoly *v3; // rax
  const DetailMesh *v4; // rcx
  unsigned __int64 n; // rax
  Vector3f *p_m_Max; // rdx
  const DetailMesh *v7; // rcx
  const Vector3f *v8; // rdx
  int i; // [rsp+24h] [rbp-Ch]
  const DetailMeshPoly *poly; // [rsp+28h] [rbp-8h]

  v3 = dynamic_array<DetailMeshPoly,false,4ul>::operator[](&detailMesh->polys, ip_0);
  poly = v3;
  v4 = detailMesh;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](&v4->vertices, poly->vertBase);
  if ( (((unsigned __int8)bounds + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&bounds->m_Max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&bounds->m_Max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&bounds->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)bounds + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&bounds->m_Max.z + 3) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_store_n(&bounds->m_Max, 12LL);
  }
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0 && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 12LL);
  }
  bounds->m_Max = *(Vector3f *)n;
  p_m_Max = &bounds->m_Max;
  if ( ((unsigned __int8)bounds & 7) >= *(_BYTE *)(((unsigned __int64)bounds >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)bounds >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&bounds->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)bounds + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&bounds->m_Min.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(bounds, 12LL);
  }
  if ( ((unsigned __int8)p_m_Max & 7) >= *(_BYTE *)(((unsigned __int64)p_m_Max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)p_m_Max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p_m_Max->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p_m_Max + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p_m_Max->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(p_m_Max, 12LL);
  }
  *(_QWORD *)&bounds->m_Min.x = *(_QWORD *)&p_m_Max->x;
  bounds->m_Min.z = p_m_Max->z;
  for ( i = 1; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)poly + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&poly->vertCount);
    }
    if ( i >= poly->vertCount )
      break;
    v7 = detailMesh;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(poly);
    }
    v8 = dynamic_array<Vector3f,false,4ul>::operator[](&v7->vertices, poly->vertBase + i);
    MinMaxAABB::Encapsulate(bounds, v8);
  }
};

// Line 851: range 000000000CC81ADE-000000000CC81EC8
bool __cdecl HasBoundaryVertices(const Vertex2Array *verts, const Vector2f *bmin, const Vector2f *bmax)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const Vector2f *v6; // rax
  _DWORD *v7; // rdx
  const Vector2f *v8; // rdx
  float *p_y; // rax
  const Vector2f *v10; // rax
  const Vector2f *v11; // rax
  bool result; // al
  float v13; // [rsp+4h] [rbp-ECh]
  float v14; // [rsp+4h] [rbp-ECh]
  float v15; // [rsp+4h] [rbp-ECh]
  float v16; // [rsp+4h] [rbp-ECh]
  size_t i; // [rsp+28h] [rbp-C8h]
  char v19[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 8 vmin:854 64 8 8 vmax:854 96 8 8 dmin:863 128 8 8 dmax:869";
  *(_QWORD *)(v3 + 16) = HasBoundaryVertices;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  if ( !dynamic_array<Vector2f,false,4ul>::size(verts) )
  {
    __asan_handle_no_return(verts);
    __assert_fail(
      "verts.size() > 0",
      "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
      0x354u,
      "bool HasBoundaryVertices(const Vertex2Array&, const Vector2f&, const Vector2f&)");
  }
  v6 = dynamic_array<Vector2f,false,4ul>::operator[](verts, 0LL);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  *(_DWORD *)(v3 + 64) = *v7;
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 64);
  v8 = dynamic_array<Vector2f,false,4ul>::operator[](verts, 0LL);
  p_y = &v8->y;
  if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_y);
  }
  *(float *)(v3 + 68) = v8->y;
  *(_DWORD *)(v3 + 36) = *(_DWORD *)(v3 + 68);
  for ( i = 1LL; i < dynamic_array<Vector2f,false,4ul>::size(verts); ++i )
  {
    v10 = dynamic_array<Vector2f,false,4ul>::operator[](verts, i);
    *(Vector2f *)(v3 + 32) = min((const Vector2f *)(v3 + 32), v10);
    v11 = dynamic_array<Vector2f,false,4ul>::operator[](verts, i);
    *(Vector2f *)(v3 + 64) = max((const Vector2f *)(v3 + 64), v11);
  }
  *(Vector2f *)(v3 + 96) = operator-((const Vector2f *)(v3 + 32), bmin);
  v13 = Sqr<float>((const float *)(v3 + 96));
  if ( Sqr<float>(&MAGIC_EDGE_DISTANCE) <= v13 )
  {
    v14 = Sqr<float>((const float *)(v3 + 100));
    if ( Sqr<float>(&MAGIC_EDGE_DISTANCE) <= v14 )
    {
      *(Vector2f *)(v3 + 128) = operator-((const Vector2f *)(v3 + 64), bmax);
      v15 = Sqr<float>((const float *)(v3 + 128));
      if ( Sqr<float>(&MAGIC_EDGE_DISTANCE) <= v15 )
      {
        v16 = Sqr<float>((const float *)(v3 + 132));
        result = Sqr<float>(&MAGIC_EDGE_DISTANCE) > v16;
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
  }
  else
  {
    result = 1;
  }
  if ( v19 == (char *)v3 )
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
  return result;
};

// Line 881: range 000000000CC82958-000000000CC83BE2
bool __cdecl BuildDetailHulls(
        DetailHullContainer *detailHulls,
        const Hull *hull,
        const MinMaxAABB *bounds,
        const DetailMesh *detailMesh,
        const NavMeshTile *tile,
        const Vector3f *tileOffset,
        float quantSize)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  const NavMeshDataHeader *header; // rdx
  unsigned __int8 *v11; // rax
  _BYTE *v12; // rdx
  unsigned __int8 *v13; // rax
  _BYTE *v14; // rdx
  int *v15; // rax
  _DWORD *v16; // rdx
  char v17; // dl
  char v18; // dl
  unsigned __int8 *v19; // rax
  _BYTE *v20; // rdx
  unsigned __int8 *v21; // rax
  _BYTE *v22; // rdx
  bool v23; // r14
  size_t v24; // r14
  int *v25; // rax
  int *v26; // rdx
  int *v27; // rax
  int *v28; // rdx
  int v29; // r14d
  int *v30; // rax
  _DWORD *v31; // rdx
  dynamic_array<int,false,4> *p_polysIds; // rdi
  double v34; // xmm0_8
  const NavMeshDataHeader *v35; // rdx
  double v36; // xmm0_8
  const NavMeshDataHeader *v37; // rdx
  const NavMeshDataHeader *v38; // rdx
  double v39; // xmm0_8
  const NavMeshDataHeader *v40; // rdx
  float v41; // xmm1_4
  __m128i v42; // xmm0
  DetailHull *v43; // r14
  size_t v44; // rax
  Vector2f *v45; // rax
  _QWORD *v46; // rdx
  size_t Index; // rax
  Vector2f *v48; // rax
  Plane *v49; // rax
  unsigned __int8 t; // [rsp+47h] [rbp-379h] BYREF
  int ip_0; // [rsp+48h] [rbp-378h]
  int j; // [rsp+4Ch] [rbp-374h]
  int hi; // [rsp+50h] [rbp-370h]
  int i; // [rsp+54h] [rbp-36Ch]
  int i_0; // [rsp+58h] [rbp-368h]
  int polyCount; // [rsp+5Ch] [rbp-364h]
  int detailHullCount; // [rsp+60h] [rbp-360h]
  int convexHullCount; // [rsp+64h] [rbp-35Ch]
  float len; // [rsp+68h] [rbp-358h]
  int ip_1; // [rsp+6Ch] [rbp-354h]
  size_t nTouched; // [rsp+70h] [rbp-350h]
  const NavMeshPoly *poly; // [rsp+78h] [rbp-348h]
  DetailHull *detailHull; // [rsp+80h] [rbp-340h]
  const DetailMeshPoly *dpoly; // [rsp+88h] [rbp-338h]
  char v72[816]; // [rsp+90h] [rbp-330h] BYREF

  v7 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(768LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "17 32 4 6 ip:962 48 4 7 cur:974 64 4 7 nei:983 80 8 16 tileOffset2:1035 112 8 9 bmin:1036 144 8 "
                        "9 bmax:1037 176 8 14 position2:1054 208 8 9 dir2:1055 240 12 13 position:1061 272 12 11 normal:1"
                        "062 304 24 10 inside:926 368 24 8 temp:927 432 24 13 footPrint:928 496 24 11 visited:943 560 24 "
                        "9 stack:958 624 24 14 convexHull:997 688 48 13 callback:1011";
  *(_QWORD *)(v7 + 16) = BuildDetailHulls;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = 61956;
  v9[536862722] = -234881024;
  v9[536862723] = 62194;
  v9[536862723] = -234881024;
  v9[536862724] = 62194;
  v9[536862724] = -234881024;
  v9[536862725] = 62194;
  v9[536862725] = -234881024;
  v9[536862726] = 62194;
  v9[536862726] = -234881024;
  v9[536862727] = 62194;
  v9[536862727] = 0x4000000;
  v9[536862728] = 62194;
  v9[536862728] = 0x4000000;
  v9[536862729] = 62194;
  v9[536862730] = -218959360;
  v9[536862731] = 62194;
  v9[536862732] = -218959360;
  v9[536862733] = 62194;
  v9[536862734] = -218959360;
  v9[536862735] = 62194;
  v9[536862736] = -218959360;
  v9[536862737] = 62194;
  v9[536862738] = -218959360;
  v9[536862739] = 62194;
  v9[536862740] = -218959360;
  v9[536862741] = 62194;
  v9[536862743] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, hull);
  header = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&header->polyCount);
  }
  polyCount = header->polyCount;
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v7 + 304));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v7 + 368));
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 432));
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v7 + 304), 0x20uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v7 + 368), 0x20uLL);
  dynamic_array<Vector2f,false,4ul>::reserve((dynamic_array<Vector2f,false,4> *const)(v7 + 432), 0x20uLL);
  dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v7 + 496));
  t = 0;
  dynamic_array<unsigned char,false,1ul>::resize_initialized(
    (dynamic_array<unsigned char,false,1> *const)(v7 + 496),
    polyCount,
    &t,
    kIncreaseToExactSize);
  nTouched = 0LL;
  for ( ip_0 = 0; ip_0 < polyCount; ++ip_0 )
  {
    MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v7 + 624), 1);
    CalcPolyDetailBounds((MinMaxAABB *)(v7 + 624), detailMesh, ip_0);
    if ( IntersectAABBAABB(bounds, (const MinMaxAABB *)(v7 + 624)) )
    {
      v11 = dynamic_array<unsigned char,false,1ul>::operator[](
              (dynamic_array<unsigned char,false,1> *const)(v7 + 496),
              ip_0);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v11);
      }
      *v12 = 1;
      ++nTouched;
    }
  }
  dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v7 + 560));
  std::vector<DetailHull,stl_allocator<DetailHull,16>>::reserve(detailHulls, nTouched);
  for ( *(_DWORD *)(v7 + 32) = 0; polyCount > *(_DWORD *)(v7 + 32); ++*(_DWORD *)(v7 + 32) )
  {
    v13 = dynamic_array<unsigned char,false,1ul>::operator[](
            (dynamic_array<unsigned char,false,1> *const)(v7 + 496),
            *(int *)(v7 + 32));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v13);
    }
    if ( *v14 == 1 )
    {
      DetailHull::DetailHull((DetailHull *const)(v7 + 688));
      dynamic_array<int,false,4ul>::resize_uninitialized(
        (dynamic_array<int,false,4> *const)(v7 + 560),
        0LL,
        kIncreaseToExactSize);
      dynamic_array<int,false,4ul>::push_back((dynamic_array<int,false,4> *const)(v7 + 560), (const int *)(v7 + 32));
      while ( !dynamic_array<int,false,4ul>::empty((const dynamic_array<int,false,4> *const)(v7 + 560)) )
      {
        v15 = dynamic_array<int,false,4ul>::back((dynamic_array<int,false,4> *const)(v7 + 560));
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        *(_DWORD *)(v7 + 48) = *v16;
        dynamic_array<int,false,4ul>::pop_back((dynamic_array<int,false,4> *const)(v7 + 560));
        dynamic_array<int,false,4ul>::push_back((dynamic_array<int,false,4> *const)(v7 + 712), (const int *)(v7 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->polys, v7 + 48);
        poly = &tile->polys[*(int *)(v7 + 48)];
        for ( j = 0; ; ++j )
        {
          if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&poly->vertCount);
          }
          if ( j >= poly->vertCount )
            break;
          v17 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          if ( v17 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v17 )
            __asan_report_load2(&poly->neis[j]);
          if ( (__int16)poly->neis[j] > 0 )
          {
            v18 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
            if ( v18 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v18 )
              __asan_report_load2(&poly->neis[j]);
            *(_DWORD *)(v7 + 64) = poly->neis[j] - 1;
            v19 = dynamic_array<unsigned char,false,1ul>::operator[](
                    (dynamic_array<unsigned char,false,1> *const)(v7 + 496),
                    *(int *)(v7 + 64));
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v19 & 7) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(v19);
            }
            if ( *v20 == 1 )
            {
              v21 = dynamic_array<unsigned char,false,1ul>::operator[](
                      (dynamic_array<unsigned char,false,1> *const)(v7 + 496),
                      *(int *)(v7 + 64));
              v22 = v21;
              if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store1(v21);
              }
              *v22 = 2;
              dynamic_array<int,false,4ul>::push_back(
                (dynamic_array<int,false,4> *const)(v7 + 560),
                (const int *)(v7 + 64));
            }
          }
        }
      }
      std::vector<DetailHull,stl_allocator<DetailHull,16>>::push_back(
        detailHulls,
        (const std::vector<DetailHull,stl_allocator<DetailHull,16> >::value_type *)(v7 + 688));
      DetailHull::~DetailHull((DetailHull *const)(v7 + 688));
    }
  }
  if ( std::vector<DetailHull,stl_allocator<DetailHull,16>>::empty(detailHulls) )
  {
    v23 = 0;
  }
  else
  {
    dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 624));
    dynamic_array<Vector2f,false,4ul>::reserve((dynamic_array<Vector2f,false,4> *const)(v7 + 624), 0x20uLL);
    detailHullCount = std::vector<DetailHull,stl_allocator<DetailHull,16>>::size(detailHulls);
    for ( hi = 0; hi < detailHullCount; ++hi )
    {
      detailHull = std::vector<DetailHull,stl_allocator<DetailHull,16>>::operator[](detailHulls, hi);
      dynamic_array<Vector2f,false,4ul>::resize_uninitialized(
        (dynamic_array<Vector2f,false,4> *const)(v7 + 432),
        0LL,
        kIncreaseToExactSize);
      for ( i = 0; ; ++i )
      {
        v24 = i;
        if ( v24 >= dynamic_array<int,false,4ul>::size(&detailHull->polysIds) )
          break;
        v25 = dynamic_array<int,false,4ul>::operator[](&detailHull->polysIds, i);
        v26 = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        ip_1 = *v26;
        dpoly = dynamic_array<DetailMeshPoly,false,4ul>::operator[](&detailMesh->polys, ip_1);
        BuildDetailHulls(std::vector<DetailHull,stl_allocator<DetailHull,16>> &,dynamic_array<Plane,false,4ul> const&,MinMaxAABB const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::ClipCallback(
          (BuildDetailHulls::ClipCallback *const)(v7 + 688),
          hull,
          (dynamic_array<Vector3f,false,4> *)(v7 + 304),
          (dynamic_array<Vector3f,false,4> *)(v7 + 368),
          (dynamic_array<Vector2f,false,4> *)(v7 + 432));
        QueryDetailBVTree(detailMesh, dpoly, &bounds->m_Min, &bounds->m_Max, (QueryDetailBVTreeCallback *)(v7 + 688));
        if ( *(_BYTE *)(v7 + 728) != 1 )
        {
          v27 = dynamic_array<int,false,4ul>::back(&detailHull->polysIds);
          v28 = v27;
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v27);
          }
          v29 = *v28;
          v30 = dynamic_array<int,false,4ul>::operator[](&detailHull->polysIds, i);
          v31 = v30;
          if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v30);
          }
          *v31 = v29;
          dynamic_array<int,false,4ul>::pop_back(&detailHull->polysIds);
          --i;
        }
      }
      if ( dynamic_array<Vector2f,false,4ul>::empty((const dynamic_array<Vector2f,false,4> *const)(v7 + 432))
        || dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v7 + 432)) <= 2 )
      {
        goto LABEL_64;
      }
      CalculateConvexHull((Vertex2Array *)(v7 + 624), (Vertex2Array *)(v7 + 432));
      if ( *(_BYTE *)(((unsigned __int64)&tileOffset->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tileOffset + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tileOffset->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&tileOffset->z);
      }
      *(float *)&v34 = tileOffset->z;
      if ( *(_BYTE *)(((unsigned __int64)tileOffset >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)tileOffset & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tileOffset >> 3) + 0x7FFF8000) )
      {
        v34 = __asan_report_load4(tileOffset);
      }
      Vector2f::Vector2f((Vector2f *const)(v7 + 80), tileOffset->x, *(float *)&v34);
      if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->header, ((unsigned __int8)tileOffset & 7u) + 3);
      v35 = tile->header;
      if ( *(_BYTE *)(((unsigned __int64)&v35->bmin.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v35 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->bmin.z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&v35->bmin.z);
      }
      *(float *)&v36 = v35->bmin.z;
      v37 = tile->header;
      if ( *(_BYTE *)(((unsigned __int64)&v37->bmin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v37 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v37->bmin >> 3) + 0x7FFF8000) )
      {
        v36 = __asan_report_load4(&v37->bmin);
      }
      Vector2f::Vector2f((Vector2f *const)(v7 + 208), v37->bmin.x, *(float *)&v36);
      *(Vector2f *)(v7 + 112) = operator-((const Vector2f *)(v7 + 208), (const Vector2f *)(v7 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->header, v7 + 80);
      v38 = tile->header;
      if ( *(_BYTE *)(((unsigned __int64)&v38->bmax.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v38 + 64) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->bmax.z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&v38->bmax.z);
      }
      *(float *)&v39 = v38->bmax.z;
      v40 = tile->header;
      if ( *(_BYTE *)(((unsigned __int64)&v40->bmax >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v40 + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->bmax >> 3) + 0x7FFF8000) )
      {
        v39 = __asan_report_load4(&v40->bmax);
      }
      v41 = *(float *)&v39;
      v42 = _mm_cvtsi32_si128(LODWORD(v40->bmax.x));
      Vector2f::Vector2f((Vector2f *const)(v7 + 208), *(float *)v42.m128i_i32, v41);
      *(Vector2f *)(v7 + 144) = operator-((const Vector2f *)(v7 + 208), (const Vector2f *)(v7 + 80));
      if ( !HasBoundaryVertices(
              (const Vertex2Array *)(v7 + 624),
              (const Vector2f *)(v7 + 112),
              (const Vector2f *)(v7 + 144)) )
      {
        v42 = _mm_cvtsi32_si128(LODWORD(quantSize));
        SimplifyPolyline((Vertex2Array *)(v7 + 624), *(float *)v42.m128i_i32);
      }
      if ( dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v7 + 624)) <= 2 )
      {
LABEL_64:
        p_polysIds = &detailHull->polysIds;
        *(_DWORD *)(v7 + 64) = 0;
        dynamic_array<int,false,4ul>::resize_initialized(p_polysIds, 0LL, (const int *)(v7 + 64), kIncreaseToExactSize);
      }
      else
      {
        v43 = detailHull;
        v44 = dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v7 + 624));
        dynamic_array<Plane,false,4ul>::reserve(&v43->hull, v44);
        dynamic_array<Plane,false,4ul>::resize_uninitialized(&detailHull->hull, 0LL, kIncreaseToExactSize);
        convexHullCount = dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v7 + 624));
        for ( i_0 = 0; i_0 < convexHullCount; ++i_0 )
        {
          v45 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v7 + 624), i_0);
          v46 = v45;
          if ( ((unsigned __int8)v45 & 7) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v45->y + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v45 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v45->y + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v45, 8LL);
          }
          *(_QWORD *)(v7 + 176) = *v46;
          Index = NextIndex(i_0, convexHullCount);
          v48 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v7 + 624), Index);
          *(Vector2f *)v42.m128i_i8 = operator-(v48, (const Vector2f *)(v7 + 176));
          *(_QWORD *)(v7 + 208) = v42.m128i_i64[0];
          *(float *)v42.m128i_i32 = Magnitude((const Vector2f *)(v7 + 208));
          len = COERCE_FLOAT(_mm_cvtsi128_si32(v42));
          v42 = (__m128i)0x3727C5ACu;
          if ( len > 0.0000099999997 )
          {
            *(Vector2f *)(v7 + 208) = operator/((const Vector2f *)(v7 + 208), len);
            Vector3f::Vector3f((Vector3f *const)(v7 + 240), *(float *)(v7 + 176), 0.0, *(float *)(v7 + 180));
            v42 = (__m128i)_mm_xor_ps((__m128)*(unsigned int *)(v7 + 212), (__m128)0x80000000);
            Vector3f::Vector3f((Vector3f *const)(v7 + 272), *(float *)v42.m128i_i32, 0.0, *(float *)(v7 + 208));
            v49 = dynamic_array<Plane,false,4ul>::push_back(&detailHull->hull);
            Plane::SetNormalAndPosition(v49, (const Vector3f *)(v7 + 272), (const Vector3f *)(v7 + 240));
          }
        }
      }
    }
    v23 = 1;
    dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 624));
  }
  dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v7 + 560));
  dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v7 + 496));
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 432));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v7 + 368));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v7 + 304));
  if ( v72 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v9 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v9 + 2147450880 - (((_DWORD)v9 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v7 >> 3) + 0x7FFF805C) = 0;
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
    *(_QWORD *)((v7 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v23;
};

// Line 890: range 000000000CC81ECA-000000000CC82022
void __cdecl BuildDetailHulls(std::vector<DetailHull,stl_allocator<DetailHull,16>> &,dynamic_array<Plane,false,4ul> const&,MinMaxAABB const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::ClipCallback(
        BuildDetailHulls::ClipCallback *const this,
        const Hull *hull,
        dynamic_array<Vector3f,false,4> *inside,
        dynamic_array<Vector3f,false,4> *temp,
        dynamic_array<Vector2f,false,4> *footPrint)
{
  int (**v5)(...); // rcx

  QueryDetailBVTreeCallback::QueryDetailBVTreeCallback(this);
  v5 = (int (**)(...))&off_1EFAFF10;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_QueryDetailBVTreeCallback = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Hull >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Hull = hull;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Inside = inside;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Temp >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Temp = temp;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Footprint >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Footprint = footPrint;
  if ( *(char *)(((unsigned __int64)&this->m_Hit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->m_Hit);
  this->m_Hit = 0;
};

// Line 899: range 000000000CC82024-000000000CC82957
void __cdecl BuildDetailHulls(std::vector<DetailHull,stl_allocator<DetailHull,16>> &,dynamic_array<Plane,false,4ul> const&,MinMaxAABB const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::process(
        BuildDetailHulls::ClipCallback *const this,
        const DetailMesh *detailMesh,
        const DetailMeshPoly *poly,
        const int *tris,
        int triCount)
{
  dynamic_array<short unsigned int,false,2> *p_triangles; // rdi
  unsigned __int64 v6; // rcx
  size_t v7; // rsi
  const DetailMesh *v8; // rcx
  int vertBase; // esi
  size_t v10; // rsi
  const Vector3f *v11; // rbx
  unsigned __int64 n; // rax
  const dynamic_array<Vector3f,false,4> *p_vertices; // rdi
  int v14; // esi
  unsigned __int16 *v15; // rcx
  size_t v16; // rsi
  const Vector3f *v17; // rbx
  unsigned __int64 v18; // rax
  const dynamic_array<Vector3f,false,4> *v19; // rdi
  int v20; // esi
  unsigned __int16 *v21; // rcx
  size_t v22; // rsi
  const Vector3f *v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  dynamic_array<Vector3f,false,4> *m_Temp; // rdx
  const dynamic_array<Plane,false,4> *m_Hull; // rcx
  __int64 v28; // rsi
  const dynamic_array<Plane,false,4> *v29; // rsi
  Vector3f *v30; // rax
  float *p_x; // rdx
  float v32; // xmm0_4
  Vector3f *v33; // rdx
  float *p_z; // rax
  float z; // xmm0_4
  int i; // [rsp+38h] [rbp-28h]
  int i_0; // [rsp+3Ch] [rbp-24h]
  const unsigned __int16 *t; // [rsp+40h] [rbp-20h]
  Vector2f *v; // [rsp+48h] [rbp-18h]

  for ( i = 0; i < triCount; ++i )
  {
    p_triangles = &detailMesh->triangles;
    v6 = (unsigned __int64)&tris[i];
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i + (_BYTE)tris) & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      p_triangles = (dynamic_array<short unsigned int,false,2> *)&tris[i];
      __asan_report_load4(p_triangles);
    }
    v7 = 4 * *(_DWORD *)v6;
    t = dynamic_array<unsigned short,false,2ul>::operator[](p_triangles, v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Inside, v7);
    dynamic_array<Vector3f,false,4ul>::resize_uninitialized(this->m_Inside, 3uLL, kIncreaseToExactSize);
    v8 = detailMesh;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(poly);
    }
    vertBase = poly->vertBase;
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t);
    }
    v10 = vertBase + *t;
    v11 = dynamic_array<Vector3f,false,4ul>::operator[](&v8->vertices, v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Inside, v10);
    n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->m_Inside, 0LL);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(n, 12LL);
    }
    if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v11->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v11 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->z + 3) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(v11, 12LL);
    }
    *(_QWORD *)n = *(_QWORD *)&v11->x;
    *(float *)(n + 8) = v11->z;
    p_vertices = &detailMesh->vertices;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      p_vertices = (const dynamic_array<Vector3f,false,4> *)poly;
      __asan_report_load4(poly);
    }
    v14 = poly->vertBase;
    v15 = (unsigned __int16 *)(t + 1);
    if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
    {
      p_vertices = (const dynamic_array<Vector3f,false,4> *)(t + 1);
      __asan_report_load2(t + 1);
    }
    v16 = v14 + *v15;
    v17 = dynamic_array<Vector3f,false,4ul>::operator[](p_vertices, v16);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Inside, v16);
    v18 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->m_Inside, 1uLL);
    if ( (char)(v18 & 7) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) && *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v18 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v18 + 11) & 7) >= *(_BYTE *)(((v18 + 11) >> 3) + 0x7FFF8000) )
    {
      v18 = __asan_report_store_n(v18, 12LL);
    }
    if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v17->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v17 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v17->z + 3) >> 3) + 0x7FFF8000) )
    {
      v18 = __asan_report_load_n(v17, 12LL);
    }
    *(_QWORD *)v18 = *(_QWORD *)&v17->x;
    *(float *)(v18 + 8) = v17->z;
    v19 = &detailMesh->vertices;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      v19 = (const dynamic_array<Vector3f,false,4> *)poly;
      __asan_report_load4(poly);
    }
    v20 = poly->vertBase;
    v21 = (unsigned __int16 *)(t + 2);
    if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
    {
      v19 = (const dynamic_array<Vector3f,false,4> *)(t + 2);
      __asan_report_load2(t + 2);
    }
    v22 = v20 + *v21;
    v23 = dynamic_array<Vector3f,false,4ul>::operator[](v19, v22);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Inside, v22);
    v24 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->m_Inside, 2uLL);
    if ( (char)(v24 & 7) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) && *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v24 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v24 + 11) & 7) >= *(_BYTE *)(((v24 + 11) >> 3) + 0x7FFF8000) )
    {
      v24 = __asan_report_store_n(v24, 12LL);
    }
    v25 = ((_DWORD)v23 + 11) & 7;
    if ( ((unsigned __int8)v23 & 7) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v23->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v23 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v23->z + 3) >> 3) + 0x7FFF8000) )
    {
      v25 = 12LL;
      v24 = __asan_report_load_n(v23, 12LL);
    }
    *(_QWORD *)v24 = *(_QWORD *)&v23->x;
    *(float *)(v24 + 8) = v23->z;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Temp >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Temp, v25);
    m_Temp = this->m_Temp;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Hull >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Hull, v25);
    m_Hull = this->m_Hull;
    v28 = *(unsigned __int8 *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000);
    if ( (_BYTE)v28 )
      __asan_report_load8(&this->m_Inside, v28);
    v29 = m_Hull;
    HullPolygonIntersection(this->m_Inside, m_Hull, m_Temp);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_Inside, v29);
    if ( !dynamic_array<Vector3f,false,4ul>::empty(this->m_Inside) )
    {
      for ( i_0 = 0; ; ++i_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Inside, v29);
        if ( i_0 >= dynamic_array<Vector3f,false,4ul>::size(this->m_Inside) )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Footprint >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Footprint, v29);
        v = dynamic_array<Vector2f,false,4ul>::push_back(this->m_Footprint);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Inside, v29);
        v30 = dynamic_array<Vector3f,false,4ul>::operator[](this->m_Inside, i_0);
        p_x = &v30->x;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v32 = *p_x;
        if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v);
        }
        v->x = v32;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_Inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_Inside, ((unsigned __int8)v & 7u) + 3);
        v33 = dynamic_array<Vector3f,false,4ul>::operator[](this->m_Inside, i_0);
        p_z = &v33->z;
        if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_z);
        }
        z = v33->z;
        v29 = (const dynamic_array<Plane,false,4> *)((((_BYTE)v + 4) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&v->y);
        }
        v->y = z;
      }
      if ( *(char *)(((unsigned __int64)&this->m_Hit >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->m_Hit);
      this->m_Hit = 1;
    }
  }
};

// Line 1071: range 000000000CC83BE3-000000000CC83EA4
void __cdecl HullFromPoly(dynamic_array<Plane,false,4> *hull, const dynamic_array<Vector3f,false,4> *poly)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 n; // rax
  size_t Index; // rdx
  const Vector3f *v7; // rax
  Plane *v8; // rax
  int i; // [rsp+18h] [rbp-A8h]
  int vertCount; // [rsp+1Ch] [rbp-A4h]
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 12 13 position:1076 64 12 8 dir:1077 96 12 11 normal:1078";
  *(_QWORD *)(v2 + 16) = HullFromPoly;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862723] = -202177536;
  vertCount = dynamic_array<Vector3f,false,4ul>::size(poly);
  dynamic_array<Plane,false,4ul>::resize_uninitialized(hull, vertCount, kIncreaseToExactSize);
  for ( i = 0; i < vertCount; ++i )
  {
    n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](poly, i);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 12LL);
    }
    *(_QWORD *)(v2 + 32) = *(_QWORD *)n;
    *(_DWORD *)(v2 + 40) = *(_DWORD *)(n + 8);
    Index = NextIndex(i, vertCount);
    v7 = dynamic_array<Vector3f,false,4ul>::operator[](poly, Index);
    *(Vector3f *)(v2 + 64) = operator-(v7, (const Vector3f *)(v2 + 32));
    Vector3f::Vector3f((Vector3f *const)(v2 + 96), -*(float *)(v2 + 72), 0.0, *(float *)(v2 + 64));
    *(Vector3f *)(v2 + 96) = NormalizeSafe((const Vector3f *)(v2 + 96), &Vector3f::zero);
    v8 = dynamic_array<Plane,false,4ul>::operator[](hull, i);
    Plane::SetNormalAndPosition(v8, (const Vector3f *)(v2 + 96), (const Vector3f *)(v2 + 32));
  }
  if ( v11 == (char *)v2 )
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
};

// Line 1089: range 000000000CC84A55-000000000CC85725
// local variable allocation has failed, the output may be wrong!
void __cdecl ClipDetailMeshes(
        dynamic_array<ClippedDetailMesh*,false,8> *clipped,
        const DynamicMesh *mesh,
        const DetailMesh *detailMesh,
        const NavMeshTile *tile,
        const Vector3f *tileOffset,
        const float quantFactor)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  uint8_t *p_m_Status; // rax
  const DynamicMesh::DataType *Data; // rax
  int *v11; // rdx
  int *p_vertCount; // rax
  int v13; // ecx
  char v14; // dl
  __int64 v15; // xmm0_8
  float v16; // xmm1_4
  unsigned __int64 v17; // rax
  unsigned __int64 n; // rax
  __int64 v19; // rax
  Vector3f *v20; // rax
  Vector3f *v21; // rax
  ClippedDetailMesh *v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  Vector3f *v25; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  int i; // [rsp+38h] [rbp-3B8h]
  int j; // [rsp+3Ch] [rbp-3B4h]
  int j_0; // [rsp+40h] [rbp-3B0h]
  int j_1; // [rsp+44h] [rbp-3ACh]
  int polyCount; // [rsp+48h] [rbp-3A8h]
  int vertsCount; // [rsp+50h] [rbp-3A0h]
  int vertCount; // [rsp+54h] [rbp-39Ch]
  const DynamicMesh::Poly *p; // [rsp+58h] [rbp-398h]
  const DetailMeshPoly *dpoly; // [rsp+60h] [rbp-390h]
  ClippedDetailMesh *dmesh; // [rsp+68h] [rbp-388h]
  char v41[880]; // [rsp+80h] [rbp-370h] BYREF

  v6 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(832LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "9 32 12 17 queryPadding:1151 64 12 13 queryMin:1186 96 12 13 queryMax:1186 128 24 9 hull:1155 19"
                        "2 24 10 verts:1156 256 24 11 inside:1157 320 24 9 temp:1158 384 48 13 callback:1205 464 296 11 welder:1163";
  *(_QWORD *)(v6 + 16) = ClipDetailMeshes;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219020288;
  v8[536862722] = -219020288;
  v8[536862723] = -219020288;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862726] = -234881024;
  v8[536862727] = -218959118;
  v8[536862728] = -234881024;
  v8[536862729] = -218959118;
  v8[536862730] = -234881024;
  v8[536862731] = -218959118;
  v8[536862733] = -219021312;
  v8[536862734] = 62194;
  v8[536862743] = -218103808;
  v8[536862744] = -202116109;
  v8[536862745] = -202116109;
  Vector3f::Vector3f((Vector3f *const)(v6 + 32), quantFactor + quantFactor, 0.0, quantFactor + quantFactor);
  polyCount = DynamicMesh::PolyCount(mesh);
  dynamic_array<Plane,false,4ul>::dynamic_array((dynamic_array<Plane,false,4> *const)(v6 + 128));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 192));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 256));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 320));
  dynamic_array<Plane,false,4ul>::reserve((dynamic_array<Plane,false,4> *const)(v6 + 128), 8uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v6 + 192), 8uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v6 + 256), 0x20uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v6 + 320), 0x20uLL);
  VertexWelder<64>::VertexWelder((VertexWelder<64> *const)(v6 + 464), 0LL, quantFactor);
  for ( i = 0; i < polyCount; ++i )
  {
    p = DynamicMesh::GetPoly(mesh, i);
    p_m_Status = &p->m_Status;
    if ( *(_BYTE *)(((unsigned __int64)p_m_Status >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_m_Status & 7) >= *(_BYTE *)(((unsigned __int64)p_m_Status >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_m_Status);
    }
    if ( p->m_Status )
    {
      Data = DynamicMesh::GetData(mesh, i);
      v11 = (int *)Data;
      if ( *(_BYTE *)(((unsigned __int64)Data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)Data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(Data);
      }
      dpoly = dynamic_array<DetailMeshPoly,false,4ul>::operator[](&detailMesh->polys, *v11);
      p_vertCount = &dpoly->vertCount;
      if ( *(_BYTE *)(((unsigned __int64)p_vertCount >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_vertCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_vertCount);
      }
      v13 = dpoly->vertCount;
      if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->m_VertexCount);
      }
      if ( v13 != p->m_VertexCount )
      {
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        dynamic_array<Vector3f,false,4ul>::resize_uninitialized(
          (dynamic_array<Vector3f,false,4> *const)(v6 + 192),
          p->m_VertexCount,
          kIncreaseToExactSize);
        for ( j = 0; ; ++j )
        {
          if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&p->m_VertexCount);
          }
          if ( j >= p->m_VertexCount )
            break;
          v14 = *(_BYTE *)(((unsigned __int64)&p->m_VertexIDs[j] >> 3) + 0x7FFF8000);
          if ( v14 != 0 && (char)(((2 * j + (_BYTE)p + 12) & 7) + 1) >= v14 )
            __asan_report_load2(&p->m_VertexIDs[j]);
          *(Vector3f *)&v15 = DynamicMesh::GetVertex(mesh, p->m_VertexIDs[j]);
          v17 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](
                                    (dynamic_array<Vector3f,false,4> *const)(v6 + 192),
                                    j);
          if ( (char)(v17 & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) && *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v17 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v17 + 11) & 7) >= *(_BYTE *)(((v17 + 11) >> 3) + 0x7FFF8000) )
          {
            v17 = __asan_report_store_n(v17, 12LL);
          }
          *(_QWORD *)v17 = v15;
          *(float *)(v17 + 8) = v16;
        }
        HullFromPoly((dynamic_array<Plane,false,4> *)(v6 + 128), (const dynamic_array<Vector3f,false,4> *)(v6 + 192));
        Vector3f::Vector3f((Vector3f *const)(v6 + 64));
        Vector3f::Vector3f((Vector3f *const)(v6 + 96));
        n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](
                                (dynamic_array<Vector3f,false,4> *const)(v6 + 192),
                                0LL);
        if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(n, 12LL);
        }
        *(_QWORD *)(v6 + 96) = *(_QWORD *)n;
        *(_DWORD *)(v6 + 104) = *(_DWORD *)(n + 8);
        v19 = v6 + 96;
        if ( (char)((v6 + 96) & 7) >= *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v6 + 107) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 107) & 7) >= *(_BYTE *)(((v6 + 107) >> 3) + 0x7FFF8000) )
        {
          v19 = __asan_report_load_n(v6 + 96, 12LL);
        }
        *(_QWORD *)(v6 + 64) = *(_QWORD *)v19;
        *(_DWORD *)(v6 + 72) = *(_DWORD *)(v19 + 8);
        vertsCount = dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(v6 + 192));
        for ( j_0 = 0; j_0 < vertsCount; ++j_0 )
        {
          v20 = dynamic_array<Vector3f,false,4ul>::operator[]((dynamic_array<Vector3f,false,4> *const)(v6 + 192), j_0);
          *(Vector3f *)(v6 + 64) = min((const Vector3f *)(v6 + 64), v20);
          v21 = dynamic_array<Vector3f,false,4ul>::operator[]((dynamic_array<Vector3f,false,4> *const)(v6 + 192), j_0);
          *(Vector3f *)(v6 + 96) = max((const Vector3f *)(v6 + 96), v21);
        }
        Vector3f::operator-=((Vector3f *const)(v6 + 64), (const Vector3f *)(v6 + 32));
        Vector3f::operator+=((Vector3f *const)(v6 + 96), (const Vector3f *)(v6 + 32));
        v22 = (ClippedDetailMesh *)operator new(
                                     0x38uLL,
                                     0x10uLL,
                                     "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
                                     1197);
        ClippedDetailMesh::ClippedDetailMesh(v22);
        v23 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, i);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v23 = __asan_report_store8();
        *(_QWORD *)v23 = v22;
        v24 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, i);
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8(v24, i);
        dmesh = *(ClippedDetailMesh **)v24;
        if ( *(_BYTE *)((*(_QWORD *)v24 >> 3) + 0x7FFF8000LL) != 0
          && *(_BYTE *)((*(_QWORD *)v24 >> 3) + 0x7FFF8000LL) <= 3 )
        {
          __asan_report_store4(dmesh);
        }
        dmesh->polyIndex = i;
        VertexWelder<64>::SetVertexArray((VertexWelder<64> *const)(v6 + 464), &dmesh->vertices);
        VertexWelder<64>::Reset((VertexWelder<64> *const)(v6 + 464));
        ClipDetailMeshes(dynamic_array<ClippedDetailMesh *,false,8ul> &,DynamicMesh const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::ClipCallback(
          (ClipDetailMeshes::ClipCallback *const)(v6 + 384),
          dmesh,
          (dynamic_array<Plane,false,4> *)(v6 + 128),
          (DetailVertexWelder *)(v6 + 464),
          (dynamic_array<Vector3f,false,4> *)(v6 + 256),
          (dynamic_array<Vector3f,false,4> *)(v6 + 320));
        QueryDetailBVTree(
          detailMesh,
          dpoly,
          (const Vector3f *)(v6 + 64),
          (const Vector3f *)(v6 + 96),
          (QueryDetailBVTreeCallback *)(v6 + 384));
        vertCount = dynamic_array<Vector3f,false,4ul>::size(&dmesh->vertices);
        for ( j_1 = 0; j_1 < vertCount; ++j_1 )
        {
          v25 = dynamic_array<Vector3f,false,4ul>::operator[](&dmesh->vertices, j_1);
          Vector3f::operator+=(v25, tileOffset);
        }
        if ( dynamic_array<Vector3f,false,4ul>::size(&dmesh->vertices) <= 2
          || dynamic_array<unsigned short,false,2ul>::size(&dmesh->triangles) <= 2 )
        {
          v27 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, i);
          if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            v27 = __asan_report_load8(v27, i);
          delete_internal<ClippedDetailMesh>(*(ClippedDetailMesh **)v27);
          v28 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, i);
          if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            v28 = __asan_report_store8();
          *(_QWORD *)v28 = 0LL;
        }
      }
    }
  }
  VertexWelder<64>::~VertexWelder((VertexWelder<64> *const)(v6 + 464));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 320));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 256));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 192));
  dynamic_array<Plane,false,4ul>::~dynamic_array((dynamic_array<Plane,false,4> *const)(v6 + 128));
  if ( v41 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8064) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1100: range 000000000CC83EA6-000000000CC83FF8
void __cdecl ClipDetailMeshes(dynamic_array<ClippedDetailMesh *,false,8ul> &,DynamicMesh const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::ClipCallback(
        ClipDetailMeshes::ClipCallback *const this,
        ClippedDetailMesh *dmeshIn,
        dynamic_array<Plane,false,4> *hullIn,
        DetailVertexWelder *welderIn,
        dynamic_array<Vector3f,false,4> *insideIn,
        dynamic_array<Vector3f,false,4> *tempIn)
{
  int (**v6)(...); // rcx

  QueryDetailBVTreeCallback::QueryDetailBVTreeCallback(this);
  v6 = (int (**)(...))&off_1EFAFED0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_QueryDetailBVTreeCallback = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->dmesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->dmesh = dmeshIn;
  if ( *(_BYTE *)(((unsigned __int64)&this->hull >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->hull = hullIn;
  if ( *(_BYTE *)(((unsigned __int64)&this->welder >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->welder = welderIn;
  if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->inside = insideIn;
  if ( *(_BYTE *)(((unsigned __int64)&this->temp >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->temp = tempIn;
};

// Line 1110: range 000000000CC83FFA-000000000CC84A54
void __cdecl ClipDetailMeshes(dynamic_array<ClippedDetailMesh *,false,8ul> &,DynamicMesh const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::process(
        ClipDetailMeshes::ClipCallback *const this,
        const DetailMesh *detailMesh,
        const DetailMeshPoly *poly,
        const int *tris,
        int triCount)
{
  __m128i v5; // xmm0
  dynamic_array<short unsigned int,false,2> *p_triangles; // rdi
  unsigned __int64 v7; // rcx
  size_t v8; // rsi
  const DetailMesh *v9; // rcx
  int vertBase; // esi
  size_t v11; // rsi
  const Vector3f *v12; // rbx
  unsigned __int64 n; // rax
  const dynamic_array<Vector3f,false,4> *p_vertices; // rdi
  int v15; // esi
  const unsigned __int16 *v16; // rcx
  size_t v17; // rsi
  const Vector3f *v18; // rbx
  unsigned __int64 v19; // rax
  const dynamic_array<Vector3f,false,4> *v20; // rdi
  int v21; // esi
  const unsigned __int16 *v22; // rcx
  size_t v23; // rsi
  const Vector3f *v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  dynamic_array<Vector3f,false,4> *temp; // rdx
  dynamic_array<Plane,false,4> *hull; // rcx
  __int64 v29; // rsi
  dynamic_array<Plane,false,4> *v30; // rsi
  DetailVertexWelder *welder; // rbx
  Vector3f *v32; // rsi
  DetailVertexWelder *v33; // rbx
  const Vector3f *v34; // rsi
  DetailVertexWelder *v35; // rbx
  Vector3f *v36; // rsi
  __int64 v37; // rsi
  Vector3f *v38; // r12
  size_t v39; // rsi
  Vector3f *v40; // rbx
  Vector3f *v41; // rax
  dynamic_array<short unsigned int,false,2> *v42; // rdx
  dynamic_array<short unsigned int,false,2> *v43; // rdx
  dynamic_array<short unsigned int,false,2> *v44; // rdx
  unsigned __int16 v50; // [rsp+3Ah] [rbp-36h] BYREF
  int i; // [rsp+3Ch] [rbp-34h]
  int v1; // [rsp+40h] [rbp-30h]
  int i_0; // [rsp+44h] [rbp-2Ch]
  int vertexCount; // [rsp+48h] [rbp-28h]
  int v0; // [rsp+4Ch] [rbp-24h]
  int v2; // [rsp+50h] [rbp-20h]
  float triArea2; // [rsp+54h] [rbp-1Ch]
  const unsigned __int16 *t; // [rsp+58h] [rbp-18h]

  for ( i = 0; i < triCount; ++i )
  {
    p_triangles = &detailMesh->triangles;
    v7 = (unsigned __int64)&tris[i];
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i + (_BYTE)tris) & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      p_triangles = (dynamic_array<short unsigned int,false,2> *)&tris[i];
      *(double *)v5.m128i_i64 = __asan_report_load4(p_triangles);
    }
    v8 = 4 * *(_DWORD *)v7;
    t = dynamic_array<unsigned short,false,2ul>::operator[](p_triangles, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v8);
    dynamic_array<Vector3f,false,4ul>::resize_uninitialized(this->inside, 3uLL, kIncreaseToExactSize);
    v9 = detailMesh;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      *(double *)v5.m128i_i64 = __asan_report_load4(poly);
    }
    vertBase = poly->vertBase;
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t);
    }
    v11 = vertBase + *t;
    v12 = dynamic_array<Vector3f,false,4ul>::operator[](&v9->vertices, v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v11);
    n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 0LL);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(n, 12LL);
    }
    if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v12->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v12 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->z + 3) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(v12, 12LL);
    }
    *(_QWORD *)n = *(_QWORD *)&v12->x;
    *(float *)(n + 8) = v12->z;
    p_vertices = &detailMesh->vertices;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      p_vertices = (const dynamic_array<Vector3f,false,4> *)poly;
      *(double *)v5.m128i_i64 = __asan_report_load4(poly);
    }
    v15 = poly->vertBase;
    v16 = t + 1;
    if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
    {
      p_vertices = (const dynamic_array<Vector3f,false,4> *)(t + 1);
      __asan_report_load2(t + 1);
    }
    v17 = v15 + *v16;
    v18 = dynamic_array<Vector3f,false,4ul>::operator[](p_vertices, v17);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v17);
    v19 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 1uLL);
    if ( (char)(v19 & 7) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v19 + 11) & 7) >= *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) )
    {
      v19 = __asan_report_store_n(v19, 12LL);
    }
    if ( ((unsigned __int8)v18 & 7) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v18->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v18 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v18->z + 3) >> 3) + 0x7FFF8000) )
    {
      v19 = __asan_report_load_n(v18, 12LL);
    }
    *(_QWORD *)v19 = *(_QWORD *)&v18->x;
    *(float *)(v19 + 8) = v18->z;
    v20 = &detailMesh->vertices;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      v20 = (const dynamic_array<Vector3f,false,4> *)poly;
      *(double *)v5.m128i_i64 = __asan_report_load4(poly);
    }
    v21 = poly->vertBase;
    v22 = t + 2;
    if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
    {
      v20 = (const dynamic_array<Vector3f,false,4> *)(t + 2);
      __asan_report_load2(t + 2);
    }
    v23 = v21 + *v22;
    v24 = dynamic_array<Vector3f,false,4ul>::operator[](v20, v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v23);
    v25 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 2uLL);
    if ( (char)(v25 & 7) >= *(_BYTE *)((v25 >> 3) + 0x7FFF8000) && *(_BYTE *)((v25 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v25 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v25 + 11) & 7) >= *(_BYTE *)(((v25 + 11) >> 3) + 0x7FFF8000) )
    {
      v25 = __asan_report_store_n(v25, 12LL);
    }
    v26 = ((_DWORD)v24 + 11) & 7;
    if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v24->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v24 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->z + 3) >> 3) + 0x7FFF8000) )
    {
      v26 = 12LL;
      v25 = __asan_report_load_n(v24, 12LL);
    }
    *(_QWORD *)v25 = *(_QWORD *)&v24->x;
    *(float *)(v25 + 8) = v24->z;
    if ( *(_BYTE *)(((unsigned __int64)&this->temp >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->temp, v26);
    temp = this->temp;
    if ( *(_BYTE *)(((unsigned __int64)&this->hull >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->hull, v26);
    hull = this->hull;
    v29 = *(unsigned __int8 *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000);
    if ( (_BYTE)v29 )
      __asan_report_load8(&this->inside, v29);
    v30 = hull;
    HullPolygonIntersection(this->inside, hull, temp);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v30);
    vertexCount = dynamic_array<Vector3f,false,4ul>::size(this->inside);
    if ( vertexCount > 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->welder >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->welder, v30);
      welder = this->welder;
      if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->inside, v30);
      v32 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 0LL);
      v0 = VertexWelder<64>::AddUnique(welder, v32);
      if ( *(_BYTE *)(((unsigned __int64)&this->welder >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->welder, v32);
      v33 = this->welder;
      if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->inside, v32);
      v34 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 1uLL);
      v1 = VertexWelder<64>::AddUnique(v33, v34);
      for ( i_0 = 2; i_0 < vertexCount; ++i_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->welder >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->welder, v34);
        v35 = this->welder;
        if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->inside, v34);
        v36 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, i_0);
        v2 = VertexWelder<64>::AddUnique(v35, v36);
        if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->inside, v36);
        v37 = i_0;
        v38 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, i_0);
        if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->inside, v37);
        v39 = i_0 - 1;
        v40 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, v39);
        if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->inside, v39);
        v41 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 0LL);
        v34 = v40;
        *(float *)v5.m128i_i32 = TriArea2D(v41, v40, v38);
        triArea2 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
        v5 = (__m128i)0x38D1B717u;
        if ( triArea2 >= 0.000099999997 )
        {
          if ( v0 != v1 && v1 != v2 && v2 != v0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->dmesh >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->dmesh, v40);
            v42 = &this->dmesh->triangles;
            v50 = v0;
            dynamic_array<unsigned short,false,2ul>::push_back(v42, &v50);
            if ( *(_BYTE *)(((unsigned __int64)&this->dmesh >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->dmesh, &v50);
            v43 = &this->dmesh->triangles;
            v50 = v1;
            dynamic_array<unsigned short,false,2ul>::push_back(v43, &v50);
            if ( *(_BYTE *)(((unsigned __int64)&this->dmesh >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->dmesh, &v50);
            v44 = &this->dmesh->triangles;
            v50 = v2;
            v34 = (const Vector3f *)&v50;
            dynamic_array<unsigned short,false,2ul>::push_back(v44, &v50);
          }
          v1 = v2;
        }
        else
        {
          v1 = v2;
        }
      }
    }
  }
};

// Line 1221: range 000000000CC85726-000000000CC8575B
bool __cdecl AreColinear(const Vector3f *v, const Vector3f *u, const float cosAngleAccept)
{
  float v3; // xmm0_4

  v3 = Dot(v, u);
  return Abs(v3) > cosAngleAccept;
};

// Line 1228: range 000000000CC8575C-000000000CC8599F
float __cdecl DistancePointSegmentSqr(const Vector2f *pt, const Vector2f *s1, const Vector2f *s2)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __m128i v7; // xmm0
  float result; // xmm0_4
  float den; // [rsp+24h] [rbp-CCh]
  Vector2f lhs; // [rsp+28h] [rbp-C8h] BYREF
  char v12[192]; // [rsp+30h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 6 t:1234 64 8 7 ds:1229 96 8 7 dp:1230 128 8 9 diff:1236";
  *(_QWORD *)(v4 + 16) = DistancePointSegmentSqr;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  *(Vector2f *)(v4 + 64) = operator-(s2, s1);
  *(Vector2f *)v3.m128i_i8 = operator-(pt, s1);
  *(_QWORD *)(v4 + 96) = v3.m128i_i64[0];
  *(float *)v3.m128i_i32 = Dot((const Vector2f *)(v4 + 64), (const Vector2f *)(v4 + 64));
  den = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v7 = 0LL;
  if ( den == 0.0 )
  {
    result = Dot((const Vector2f *)(v4 + 96), (const Vector2f *)(v4 + 96));
  }
  else
  {
    *(float *)(v4 + 48) = Dot((const Vector2f *)(v4 + 64), (const Vector2f *)(v4 + 96)) / den;
    *(float *)v7.m128i_i32 = clamp01<float>((const float *)(v4 + 48));
    *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v7);
    lhs = operator*(*(const float *)(v4 + 48), (const Vector2f *)(v4 + 64));
    *(Vector2f *)(v4 + 128) = operator-(&lhs, (const Vector2f *)(v4 + 96));
    result = Dot((const Vector2f *)(v4 + 128), (const Vector2f *)(v4 + 128));
  }
  if ( v12 == (char *)v4 )
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

// Line 1241: range 000000000CC859A0-000000000CC85D3A
void __cdecl SimplifyPolyline(Vertex2Array *hull, float thr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  size_t Index; // rdx
  Vector2f *v6; // rax
  _QWORD *v7; // rdx
  Vector2f *v8; // rax
  _QWORD *v9; // rdx
  size_t v10; // rdx
  Vector2f *v11; // rax
  _QWORD *v12; // rdx
  Vector2f *v13; // rdx
  size_t i; // [rsp+10h] [rbp-B0h]
  size_t count; // [rsp+18h] [rbp-A8h]
  char v17[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 7 pa:1246 64 8 7 pb:1247 96 8 7 pc:1248";
  *(_QWORD *)(v2 + 16) = SimplifyPolyline;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  i = 0LL;
  count = dynamic_array<Vector2f,false,4ul>::size(hull);
  while ( i < count && count > 2 )
  {
    Index = PrevIndex(i, count);
    v6 = dynamic_array<Vector2f,false,4ul>::operator[](hull, Index);
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->y + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->y + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    *(_QWORD *)(v2 + 32) = *v7;
    v8 = dynamic_array<Vector2f,false,4ul>::operator[](hull, i);
    v9 = v8;
    if ( ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v8->y + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v8 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->y + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v8, 8LL);
    }
    *(_QWORD *)(v2 + 64) = *v9;
    v10 = NextIndex(i, count);
    v11 = dynamic_array<Vector2f,false,4ul>::operator[](hull, v10);
    v12 = v11;
    if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v11->y + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->y + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v11, 8LL);
    }
    *(_QWORD *)(v2 + 96) = *v12;
    if ( (float)(thr * thr) <= DistancePointSegmentSqr(
                                 (const Vector2f *)(v2 + 64),
                                 (const Vector2f *)(v2 + 32),
                                 (const Vector2f *)(v2 + 96)) )
    {
      ++i;
    }
    else
    {
      v13 = &dynamic_array<Vector2f,false,4ul>::begin(hull)[i];
      dynamic_array<Vector2f,false,4ul>::erase(hull, v13);
      --count;
    }
  }
  if ( v17 == (char *)v2 )
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
};

// Line 1262: range 000000000CC85D3B-000000000CC86475
void __cdecl OffsetPolygon(Vertex2Array *dest, const Vertex2Array *poly, const float offset)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const Vector2f *v6; // rax
  _QWORD *v7; // rdx
  size_t Index; // rdx
  const Vector2f *v9; // rax
  _QWORD *v10; // rdx
  size_t v11; // rdx
  const Vector2f *v12; // rax
  _QWORD *v13; // rdx
  __m128i v14; // xmm0
  float v15; // xmm0_4
  __m128i v16; // xmm0
  int i; // [rsp+2Ch] [rbp-164h]
  int count; // [rsp+30h] [rbp-160h]
  float dot; // [rsp+34h] [rbp-15Ch]
  float dmr2; // [rsp+3Ch] [rbp-154h]
  Vector2f rhs; // [rsp+40h] [rbp-150h] BYREF
  Vector2f inV; // [rsp+48h] [rbp-148h] BYREF
  char v24[320]; // [rsp+50h] [rbp-140h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 9 curr:1268 64 8 9 prev:1269 96 8 9 next:1270 128 8 10 diffa:1271 160 8 10 diffb:1272 192"
                        " 8 8 dla:1276 224 8 8 dlb:1277 256 8 7 dm:1298";
  *(_QWORD *)(v3 + 16) = OffsetPolygon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -202116352;
  count = dynamic_array<Vector2f,false,4ul>::size(poly);
  dynamic_array<Vector2f,false,4ul>::resize_uninitialized(dest, 0LL, kIncreaseToExactSize);
  dynamic_array<Vector2f,false,4ul>::reserve(dest, count);
  for ( i = 0; i < count; ++i )
  {
    v6 = dynamic_array<Vector2f,false,4ul>::operator[](poly, i);
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->y + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->y + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    *(_QWORD *)(v3 + 32) = *v7;
    Index = PrevIndex(i, count);
    v9 = dynamic_array<Vector2f,false,4ul>::operator[](poly, Index);
    v10 = v9;
    if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v9->y + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v9 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->y + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v9, 8LL);
    }
    *(_QWORD *)(v3 + 64) = *v10;
    v11 = NextIndex(i, count);
    v12 = dynamic_array<Vector2f,false,4ul>::operator[](poly, v11);
    v13 = v12;
    if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v12->y + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->y + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v12, 8LL);
    }
    *(_QWORD *)(v3 + 96) = *v13;
    inV = operator-((const Vector2f *)(v3 + 32), (const Vector2f *)(v3 + 64));
    *(Vector2f *)(v3 + 128) = NormalizeSafe(&inV, &Vector2f::zero);
    inV = operator-((const Vector2f *)(v3 + 96), (const Vector2f *)(v3 + 32));
    *(Vector2f *)(v3 + 160) = NormalizeSafe(&inV, &Vector2f::zero);
    Vector2f::Vector2f((Vector2f *const)(v3 + 192), -*(float *)(v3 + 132), *(float *)(v3 + 128));
    v14 = (__m128i)_mm_xor_ps((__m128)*(unsigned int *)(v3 + 164), (__m128)0x80000000);
    Vector2f::Vector2f((Vector2f *const)(v3 + 224), *(float *)v14.m128i_i32, *(float *)(v3 + 160));
    *(float *)v14.m128i_i32 = Dot((const Vector2f *)(v3 + 128), (const Vector2f *)(v3 + 160));
    dot = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
    if ( dot >= -0.00174542 )
    {
      inV = operator+((const Vector2f *)(v3 + 192), (const Vector2f *)(v3 + 224));
      v16 = (__m128i)0x3F000000u;
      *(Vector2f *)v16.m128i_i8 = operator*(&inV, 0.5);
      *(_QWORD *)(v3 + 256) = v16.m128i_i64[0];
      *(float *)v16.m128i_i32 = Dot((const Vector2f *)(v3 + 256), (const Vector2f *)(v3 + 256));
      dmr2 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
      if ( dmr2 > 0.0 )
        Vector2f::operator*=((Vector2f *const)(v3 + 256), 1.0 / dmr2);
      rhs = operator*((const Vector2f *)(v3 + 256), offset);
      inV = operator+((const Vector2f *)(v3 + 32), &rhs);
      dynamic_array<Vector2f,false,4ul>::push_back(dest, &inV);
    }
    else
    {
      v15 = Abs(dot);
      rhs = operator*((const Vector2f *)(v3 + 128), (float)(0.75 * v15) + 0.25);
      inV = operator*(&rhs, offset);
      *(Vector2f *)(v3 + 256) = operator+((const Vector2f *)(v3 + 32), &inV);
      rhs = operator*((const Vector2f *)(v3 + 192), offset);
      inV = operator+((const Vector2f *)(v3 + 256), &rhs);
      dynamic_array<Vector2f,false,4ul>::push_back(dest, &inV);
      rhs = operator*((const Vector2f *)(v3 + 224), offset);
      inV = operator+((const Vector2f *)(v3 + 256), &rhs);
      dynamic_array<Vector2f,false,4ul>::push_back(dest, &inV);
    }
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1310: range 000000000CC86476-000000000CC87442
// local variable allocation has failed, the output may be wrong!
bool __cdecl CalculateCarveHullFromPoints(
        Hull *carveHull,
        const NavMeshCarveShape *shape,
        const Vector3f *tileOffset,
        const float carveDepth,
        const float carveWidth,
        const Vector3f *points,
        int pointCount)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  const Vector3f *v10; // rdx
  double v11; // xmm0_8
  unsigned __int64 v12; // rcx
  Vector2f *v13; // rax
  _QWORD *v14; // rdx
  bool v15; // r14
  Vector2f *v16; // rax
  _QWORD *v17; // rdx
  size_t Index; // rax
  Vector2f *v19; // rax
  Plane *v20; // rax
  float *v21; // rax
  float *v22; // rdx
  float v23; // r14d
  float *v24; // rax
  float *v25; // rdx
  float v26; // r14d
  float *v27; // rax
  float *v28; // rdx
  float v29; // r14d
  __m128i v30; // xmm0
  const float *v31; // rax
  _DWORD *v32; // rdx
  const float *v33; // rax
  unsigned int *v34; // rdx
  Plane *v35; // r14
  Plane *v36; // r14
  __m128i v37; // xmm0
  Plane *v38; // r14
  Plane *v39; // rax
  bool result; // al
  int i; // [rsp+40h] [rbp-2B0h]
  int i_0; // [rsp+44h] [rbp-2ACh]
  int i_1; // [rsp+48h] [rbp-2A8h]
  int hullCount; // [rsp+4Ch] [rbp-2A4h]
  Vector3f inNormal; // [rsp+54h] [rbp-29Ch] BYREF
  common::milog::MiLogStream v50; // [rsp+60h] [rbp-290h] BYREF
  char v51[624]; // [rsp+80h] [rbp-270h] BYREF

  v7 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(576LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "15 48 4 12 distMin:1363 64 4 12 distMax:1363 80 4 9 dist:1366 96 8 7 pt:1337 128 8 8 dir:1338 16"
                        "0 12 9 zero:1352 192 12 10 yAxis:1353 224 12 15 worldYAxis:1359 256 12 8 min:1380 288 12 8 max:1"
                        "381 320 12 13 position:1339 352 12 11 normal:1340 384 24 20 projectedPoints:1313 448 24 9 hull:1"
                        "314 512 24 15 hullOffset:1315";
  *(_QWORD *)(v7 + 16) = CalculateCarveHullFromPoints;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = -218959360;
  v9[536862724] = -218959360;
  v9[536862725] = -219020288;
  v9[536862726] = -219020288;
  v9[536862727] = -219020288;
  v9[536862728] = -219020288;
  v9[536862729] = -219020288;
  v9[536862730] = -219020288;
  v9[536862731] = -219020288;
  v9[536862732] = -234881024;
  v9[536862733] = -218959118;
  v9[536862734] = -234881024;
  v9[536862735] = -218959118;
  v9[536862736] = -218103808;
  v9[536862737] = -202116109;
  dynamic_array<Plane,false,4ul>::resize_uninitialized(carveHull, 0LL, kIncreaseToExactSize);
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 384));
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 448));
  dynamic_array<Vector2f,false,4ul>::dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 512));
  dynamic_array<Vector2f,false,4ul>::resize_uninitialized(
    (dynamic_array<Vector2f,false,4> *const)(v7 + 384),
    pointCount,
    kIncreaseToExactSize);
  dynamic_array<Vector2f,false,4ul>::reserve((dynamic_array<Vector2f,false,4> *const)(v7 + 448), pointCount + 1);
  dynamic_array<Vector2f,false,4ul>::reserve((dynamic_array<Vector2f,false,4> *const)(v7 + 512), pointCount + 1);
  for ( i = 0; i < pointCount; ++i )
  {
    v10 = &points[i];
    if ( *(_BYTE *)(((unsigned __int64)&v10->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v10->z);
    }
    *(float *)&v11 = v10->z;
    v12 = (unsigned __int64)&points[i];
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((12 * i + (_BYTE)points) & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    {
      v11 = __asan_report_load4(&points[i]);
    }
    Vector2f::Vector2f((Vector2f *const)(v7 + 128), *(float *)v12, *(float *)&v11);
    v13 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v7 + 384), i);
    v14 = v13;
    if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v13->y + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->y + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v13, 8LL);
    }
    *v14 = *(_QWORD *)(v7 + 128);
  }
  CalculateConvexHull((Vertex2Array *)(v7 + 448), (Vertex2Array *)(v7 + 384));
  SimplifyPolyline((Vertex2Array *)(v7 + 448), 0.1 * carveWidth);
  OffsetPolygon((Vertex2Array *)(v7 + 512), (const Vertex2Array *)(v7 + 448), carveWidth);
  if ( dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v7 + 512)) > 2 )
  {
    hullCount = dynamic_array<Vector2f,false,4ul>::size((const dynamic_array<Vector2f,false,4> *const)(v7 + 512));
    for ( i_0 = 0; i_0 < hullCount; ++i_0 )
    {
      v16 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v7 + 512), i_0);
      v17 = v16;
      if ( ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v16->y + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v16 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v16->y + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v16, 8LL);
      }
      *(_QWORD *)(v7 + 96) = *v17;
      Index = NextIndex(i_0, hullCount);
      v19 = dynamic_array<Vector2f,false,4ul>::operator[]((dynamic_array<Vector2f,false,4> *const)(v7 + 512), Index);
      *(Vector2f *)(v7 + 128) = operator-(v19, (const Vector2f *)(v7 + 96));
      Vector3f::Vector3f((Vector3f *const)(v7 + 320), *(float *)(v7 + 96), 0.0, *(float *)(v7 + 100));
      Vector3f::Vector3f((Vector3f *const)(v7 + 352), -*(float *)(v7 + 132), 0.0, *(float *)(v7 + 128));
      *(Vector3f *)(v7 + 352) = NormalizeSafe((const Vector3f *)(v7 + 352), &Vector3f::zero);
      if ( !IsNormalized((const Vector3f *)(v7 + 352), 0.001) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
          "CalculateCarveHullFromPoints",
          1344);
        common::milog::MiLogStream::operator()(
          &v50,
          "not a normalized. normal=(%f, %f, %f)",
          *(float *)(v7 + 352),
          *(float *)(v7 + 356),
          *(float *)(v7 + 360));
        common::milog::MiLogStream::~MiLogStream(&v50);
        v15 = 0;
        goto LABEL_46;
      }
      v20 = dynamic_array<Plane,false,4ul>::push_back(carveHull);
      Plane::SetNormalAndPosition(v20, (const Vector3f *)(v7 + 352), (const Vector3f *)(v7 + 320));
    }
    Vector3f::Vector3f((Vector3f *const)(v7 + 160), 0.0, 0.0, 0.0);
    *(_QWORD *)(v7 + 192) = *(_QWORD *)(v7 + 160);
    *(_DWORD *)(v7 + 200) = *(_DWORD *)(v7 + 168);
    v21 = (float *)std::max<float>(&shape->extents.y, &shape->extents.z);
    v22 = v21;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v21);
    }
    v23 = *v22;
    if ( *(_BYTE *)(((unsigned __int64)&shape->xAxis.y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shape + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->xAxis.y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&shape->xAxis.y);
    }
    *(Vector3f *)(v7 + 320) = operator*(&shape->xAxis, shape->xAxis.y);
    *(Vector3f *)(v7 + 352) = operator*((const Vector3f *)(v7 + 320), v23);
    Vector3f::operator+=((Vector3f *const)(v7 + 192), (const Vector3f *)(v7 + 352));
    v24 = (float *)std::max<float>(&shape->extents.z, &shape->extents.x);
    v25 = v24;
    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v24);
    }
    v26 = *v25;
    if ( *(_BYTE *)(((unsigned __int64)&shape->yAxis.y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shape + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->yAxis.y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&shape->yAxis.y);
    }
    *(Vector3f *)(v7 + 320) = operator*(&shape->yAxis, shape->yAxis.y);
    *(Vector3f *)(v7 + 352) = operator*((const Vector3f *)(v7 + 320), v26);
    Vector3f::operator+=((Vector3f *const)(v7 + 192), (const Vector3f *)(v7 + 352));
    v27 = (float *)std::max<float>(&shape->extents.x, &shape->extents.y);
    v28 = v27;
    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v27);
    }
    v29 = *v28;
    if ( *(_BYTE *)(((unsigned __int64)&shape->zAxis.y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shape + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->zAxis.y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&shape->zAxis.y);
    }
    *(Vector3f *)(v7 + 320) = operator*(&shape->zAxis, shape->zAxis.y);
    *(Vector3f *)(v7 + 352) = operator*((const Vector3f *)(v7 + 320), v29);
    Vector3f::operator+=((Vector3f *const)(v7 + 192), (const Vector3f *)(v7 + 352));
    *(Vector3f *)(v7 + 192) = NormalizeSafe((const Vector3f *)(v7 + 192), &Vector3f::zero);
    Vector3f::Vector3f((Vector3f *const)(v7 + 224), 0.0, 1.0, 0.0);
    if ( CompareApproximately((const Vector3f *)(v7 + 192), (const Vector3f *)(v7 + 160), 0.0000099999997) )
    {
      *(_QWORD *)(v7 + 192) = *(_QWORD *)(v7 + 224);
      *(_DWORD *)(v7 + 200) = *(_DWORD *)(v7 + 232);
    }
    *(_DWORD *)(v7 + 48) = 2139095039;
    v30 = (__m128i)0xFF7FFFFF;
    *(_DWORD *)(v7 + 64) = -8388609;
    for ( i_1 = 0; i_1 < pointCount; ++i_1 )
    {
      *(float *)v30.m128i_i32 = Dot(&points[i_1], (const Vector3f *)(v7 + 192));
      *(_DWORD *)(v7 + 80) = _mm_cvtsi128_si32(v30);
      v31 = std::min<float>((const float *)(v7 + 48), (const float *)(v7 + 80));
      v32 = v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      *(_DWORD *)(v7 + 48) = *v32;
      v33 = std::max<float>((const float *)(v7 + 64), (const float *)(v7 + 80));
      v34 = (unsigned int *)v33;
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v33);
      }
      v30 = (__m128i)*v34;
      *(_DWORD *)(v7 + 64) = v30.m128i_i32[0];
    }
    v35 = dynamic_array<Plane,false,4ul>::push_back(carveHull);
    *(Vector3f *)(v7 + 352) = operator*((const Vector3f *)(v7 + 192), *(float *)(v7 + 48) - carveDepth);
    *(Vector3f *)(v7 + 320) = Vector3f::operator-((const Vector3f *const)(v7 + 192));
    Plane::SetNormalAndPosition(v35, (const Vector3f *)(v7 + 320), (const Vector3f *)(v7 + 352));
    v36 = dynamic_array<Plane,false,4ul>::push_back(carveHull);
    *(Vector3f *)(v7 + 352) = operator*((const Vector3f *)(v7 + 192), *(const float *)(v7 + 64));
    Plane::SetNormalAndPosition(v36, (const Vector3f *)(v7 + 192), (const Vector3f *)(v7 + 352));
    v37 = (__m128i)0x41200000u;
    *(float *)v37.m128i_i32 = Deg2Rad(10.0);
    *(float *)v37.m128i_i32 = Cos(*(float *)v37.m128i_i32);
    if ( !AreColinear(
            (const Vector3f *)(v7 + 192),
            (const Vector3f *)(v7 + 224),
            COERCE_CONST_FLOAT(_mm_cvtsi128_si32(v37))) )
    {
      *(Vector3f *)(v7 + 256) = operator-(&shape->bounds.m_Min, tileOffset);
      *(Vector3f *)(v7 + 288) = operator-(&shape->bounds.m_Max, tileOffset);
      v38 = dynamic_array<Plane,false,4ul>::push_back(carveHull);
      *(Vector3f *)(v7 + 320) = operator*(carveDepth, &Vector3f::yAxis);
      *(Vector3f *)(v7 + 352) = operator-((const Vector3f *)(v7 + 256), (const Vector3f *)(v7 + 320));
      inNormal = Vector3f::operator-((const Vector3f *const)(v7 + 224));
      Plane::SetNormalAndPosition(v38, &inNormal, (const Vector3f *)(v7 + 352));
      v39 = dynamic_array<Plane,false,4ul>::push_back(carveHull);
      Plane::SetNormalAndPosition(v39, (const Vector3f *)(v7 + 224), (const Vector3f *)(v7 + 288));
    }
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
LABEL_46:
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 512));
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 448));
  dynamic_array<Vector2f,false,4ul>::~dynamic_array((dynamic_array<Vector2f,false,4> *const)(v7 + 384));
  result = v15;
  if ( v51 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8040) = 0LL;
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
    *(_QWORD *)((v7 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1394: range 000000000CC87443-000000000CC879D3
bool __cdecl CalculateBoxHull(
        Hull *carveHull,
        const NavMeshCarveShape *shape,
        const Vector3f *tileOffset,
        const float carveDepth,
        const float carveWidth)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  Vector3f *v9; // r15
  Vector3f *p_center; // rdi
  unsigned __int64 v11; // rax
  float x; // eax
  float y; // eax
  float z; // eax
  bool result; // al
  int i; // [rsp+30h] [rbp-E0h]
  Vector3f inV; // [rsp+34h] [rbp-DCh] BYREF
  char v22[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 96 8 box:1396";
  *(_QWORD *)(v5 + 16) = CalculateBoxHull;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450896) = -202116109;
  v8 = 7LL;
  v9 = (Vector3f *)(v5 + 32);
  while ( v8 >= 0 )
  {
    Vector3f::Vector3f(v9++);
    --v8;
  }
  for ( i = 0; i <= 7; ++i )
  {
    p_center = &shape->center;
    v11 = v5 + 32 + 12LL * i;
    if ( (char)((v5 - 96 + 0x80 + 12 * i) & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000)
      && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 0x80 + 12 * i + 11) & 7) >= *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) )
    {
      p_center = (Vector3f *)(v5 + 32 + 12LL * i);
      __asan_report_store_n(v11, 12LL);
    }
    *(Vector3f *)(v5 + 160 + 12LL * i - 128) = operator-(p_center, tileOffset);
    if ( (i & 1) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&shape->extents >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shape + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->extents >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&shape->extents);
      }
      x = shape->extents.x;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&shape->extents >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shape + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->extents >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&shape->extents);
      }
      x = COERCE_FLOAT(_mm_cvtsi128_si32((__m128i)_mm_xor_ps((__m128)LODWORD(shape->extents.x), (__m128)0x80000000)));
    }
    inV = operator*(&shape->xAxis, x);
    Vector3f::operator+=((Vector3f *const)(v5 + 32 + 12LL * i), &inV);
    if ( (i & 2) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&shape->extents.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shape + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->extents.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&shape->extents.y);
      }
      y = shape->extents.y;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&shape->extents.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shape + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->extents.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&shape->extents.y);
      }
      y = COERCE_FLOAT(_mm_cvtsi128_si32((__m128i)_mm_xor_ps((__m128)LODWORD(shape->extents.y), (__m128)0x80000000)));
    }
    inV = operator*(&shape->yAxis, y);
    Vector3f::operator+=((Vector3f *const)(v5 + 32 + 12LL * i), &inV);
    if ( (i & 4) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&shape->extents.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shape + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->extents.z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&shape->extents.z);
      }
      z = shape->extents.z;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&shape->extents.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shape + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->extents.z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&shape->extents.z);
      }
      z = COERCE_FLOAT(_mm_cvtsi128_si32((__m128i)_mm_xor_ps((__m128)LODWORD(shape->extents.z), (__m128)0x80000000)));
    }
    inV = operator*(&shape->zAxis, z);
    Vector3f::operator+=((Vector3f *const)(v5 + 32 + 12LL * i), &inV);
  }
  result = CalculateCarveHullFromPoints(
             carveHull,
             shape,
             tileOffset,
             carveDepth,
             carveWidth,
             (const Vector3f *)(v5 + 32),
             8);
  if ( v22 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
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

// Line 1410: range 000000000CC879D4-000000000CC887B1
// local variable allocation has failed, the output may be wrong!
bool __cdecl CalculateCapsuleHull(
        Hull *carveHull,
        const NavMeshCarveShape *shape,
        const Vector3f *tileOffset,
        const float carveDepth,
        const float carveWidth)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char *v7; // rbx
  _DWORD *v8; // r12
  __int64 v9; // r14
  Vector3f *v10; // r15
  __int128 v11; // xmm1 OVERLAPPED
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __int128 v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int128 v17; // xmm1
  int v18; // edx
  char v19; // cl
  __int64 v20; // rax
  int v21; // edx
  char v22; // cl
  int v23; // edx
  char v24; // cl
  __int64 v25; // xmm0_8
  __int64 v26; // xmm0_8
  __int64 v27; // xmm0_8
  __int64 v28; // xmm0_8
  __int64 v29; // xmm0_8
  __int64 v30; // xmm0_8
  __int64 v31; // rax
  int v32; // edx
  char v33; // cl
  __int64 v34; // rax
  int v35; // edx
  char v36; // cl
  int v37; // edx
  char v38; // cl
  bool result; // al
  int n; // [rsp+34h] [rbp-33Ch]
  int na; // [rsp+34h] [rbp-33Ch]
  int nb; // [rsp+34h] [rbp-33Ch]
  int nc; // [rsp+34h] [rbp-33Ch]
  int nd; // [rsp+34h] [rbp-33Ch]
  int ne; // [rsp+34h] [rbp-33Ch]
  int i; // [rsp+38h] [rbp-338h]
  unsigned int radiusScale; // [rsp+3Ch] [rbp-334h]
  float h; // [rsp+40h] [rbp-330h]
  float r; // [rsp+44h] [rbp-32Ch]
  unsigned int angle; // [rsp+48h] [rbp-328h]
  float dx_0; // [rsp+4Ch] [rbp-324h]
  float dz; // [rsp+50h] [rbp-320h]
  Vector3f rhs; // [rsp+54h] [rbp-31Ch] BYREF
  Vector3f lhs; // [rsp+60h] [rbp-310h] BYREF
  Vector3f v58; // [rsp+6Ch] [rbp-304h] BYREF
  __int64 v59; // [rsp+78h] [rbp-2F8h]
  int v60; // [rsp+80h] [rbp-2F0h]
  Vector3f v61; // [rsp+84h] [rbp-2ECh]
  Vector3f v62; // [rsp+90h] [rbp-2E0h]
  __int64 v63; // [rsp+9Ch] [rbp-2D4h]
  int v64; // [rsp+A4h] [rbp-2CCh]
  Vector3f v65; // [rsp+A8h] [rbp-2C8h] BYREF
  Vector3f v66; // [rsp+B4h] [rbp-2BCh] BYREF
  char v67[688]; // [rsp+C0h] [rbp-2B0h] BYREF

  v5 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(640LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 640);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 11 radius:1415 48 4 11 height:1415 64 12 11 center:1427 96 12 7 ax:1433 128 12 7 az:1434 "
                        "160 408 13 cylinder:1420";
  *(_QWORD *)(v5 + 16) = CalculateCapsuleHull;
  v8 = (_DWORD *)(v5 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -219020288;
  v8[536862723] = -219020288;
  v8[536862724] = -219020288;
  v8[536862737] = -218103808;
  v8[536862738] = -202116109;
  v8[536862739] = -202116109;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 48) = 0;
  FitCapsuleToExtents((float *)(v5 + 32), (float *)(v5 + 48), &shape->extents);
  v9 = 33LL;
  v10 = (Vector3f *)(v5 + 160);
  while ( v9 >= 0 )
  {
    Vector3f::Vector3f(v10++);
    --v9;
  }
  n = 0;
  *(float *)&radiusScale = 1.0 / Cos(0.39269909);
  h = (float)(0.70710677 * *(float *)(v5 + 32)) * *(float *)&radiusScale;
  v11 = radiusScale;
  r = *(float *)(v5 + 32) * *(float *)&radiusScale;
  *(Vector3f *)((char *)&v11 - 8) = operator-(&shape->center, tileOffset);
  v13 = v12;
  v14 = v11;
  *(_QWORD *)(v5 + 64) = v13;
  *(_DWORD *)(v5 + 72) = v11;
  for ( i = 0; i <= 7; ++i )
  {
    *(float *)&v14 = (float)i / 8.0;
    v17 = v14;
    *(float *)&angle = (float)(3.1415927 * *(float *)&v14) + (float)(3.1415927 * *(float *)&v14);
    v15 = _mm_cvtsi32_si128(angle);
    *(float *)v15.m128i_i32 = Cos(*(float *)v15.m128i_i32);
    dx_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    v16 = _mm_cvtsi32_si128(angle);
    *(float *)v16.m128i_i32 = Sin(*(float *)v16.m128i_i32);
    dz = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
    *(Vector3f *)((char *)&v17 - 8) = operator*(&shape->xAxis, dx_0);
    *(_QWORD *)(v5 + 96) = v16.m128i_i64[0];
    *(_DWORD *)(v5 + 104) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator*(&shape->zAxis, dz);
    *(_QWORD *)(v5 + 128) = v16.m128i_i64[0];
    *(_DWORD *)(v5 + 136) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator*(&shape->yAxis, *(const float *)(v5 + 48));
    *(_QWORD *)&v66.x = v16.m128i_i64[0];
    LODWORD(v66.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator*((const Vector3f *)(v5 + 128), r);
    *(_QWORD *)&v58.x = v16.m128i_i64[0];
    LODWORD(v58.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator*((const Vector3f *)(v5 + 96), r);
    *(_QWORD *)&rhs.x = v16.m128i_i64[0];
    LODWORD(rhs.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator+((const Vector3f *)(v5 + 64), &rhs);
    *(_QWORD *)&lhs.x = v16.m128i_i64[0];
    LODWORD(lhs.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator+(&lhs, &v58);
    *(_QWORD *)&v65.x = v16.m128i_i64[0];
    LODWORD(v65.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator-(&v65, &v66);
    v59 = v16.m128i_i64[0];
    v60 = v17;
    v18 = n;
    na = n + 1;
    v19 = *(_BYTE *)(((v5 + 160 + 12LL * v18) >> 3) + 0x7FFF8000);
    if ( (char)((v5 - 96 + 12 * v18) & 7) >= v19 && v19 != 0
      || *(_BYTE *)(((v5 + 160 + 12LL * v18 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 12 * v18 + 11) & 7) >= *(_BYTE *)(((v5 + 160 + 12LL * v18 + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160 + 12LL * v18, 12LL);
    }
    v20 = (__int64)&v7[12 * v18 - 480];
    *(_QWORD *)v20 = v59;
    *(_DWORD *)(v20 + 8) = v60;
    v66 = operator*(&shape->yAxis, *(const float *)(v5 + 48));
    v58 = operator*((const Vector3f *)(v5 + 128), r);
    rhs = operator*((const Vector3f *)(v5 + 96), r);
    lhs = operator+((const Vector3f *)(v5 + 64), &rhs);
    v65 = operator+(&lhs, &v58);
    v61 = operator+(&v65, &v66);
    v21 = na;
    nb = na + 1;
    v22 = *(_BYTE *)(((v5 + 160 + 12LL * v21) >> 3) + 0x7FFF8000);
    if ( (char)((v5 - 96 + 12 * v21) & 7) >= v22 && v22 != 0
      || *(_BYTE *)(((v5 + 160 + 12LL * v21 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 12 * v21 + 11) & 7) >= *(_BYTE *)(((v5 + 160 + 12LL * v21 + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160 + 12LL * v21, 12LL);
    }
    *(Vector3f *)&v7[12 * v21 - 480] = v61;
    v66 = operator*(&shape->yAxis, *(float *)(v5 + 48) + h);
    v58 = operator*((const Vector3f *)(v5 + 128), h);
    rhs = operator*((const Vector3f *)(v5 + 96), h);
    lhs = operator+((const Vector3f *)(v5 + 64), &rhs);
    v65 = operator+(&lhs, &v58);
    v62 = operator-(&v65, &v66);
    v23 = nb;
    nc = nb + 1;
    v24 = *(_BYTE *)(((v5 + 160 + 12LL * v23) >> 3) + 0x7FFF8000);
    if ( (char)((v5 - 96 + 12 * v23) & 7) >= v24 && v24 != 0
      || *(_BYTE *)(((v5 + 160 + 12LL * v23 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 12 * v23 + 11) & 7) >= *(_BYTE *)(((v5 + 160 + 12LL * v23 + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160 + 12LL * v23, 12LL);
    }
    *(Vector3f *)&v7[12 * v23 - 480] = v62;
    *(Vector3f *)((char *)&v17 - 8) = operator*(&shape->yAxis, *(float *)(v5 + 48) + h);
    *(_QWORD *)&v66.x = v25;
    LODWORD(v66.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator*((const Vector3f *)(v5 + 128), h);
    *(_QWORD *)&v58.x = v26;
    LODWORD(v58.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator*((const Vector3f *)(v5 + 96), h);
    *(_QWORD *)&rhs.x = v27;
    LODWORD(rhs.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator+((const Vector3f *)(v5 + 64), &rhs);
    *(_QWORD *)&lhs.x = v28;
    LODWORD(lhs.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator+(&lhs, &v58);
    *(_QWORD *)&v65.x = v29;
    LODWORD(v65.z) = v17;
    *(Vector3f *)((char *)&v17 - 8) = operator+(&v65, &v66);
    v31 = v30;
    v14 = v17;
    v63 = v31;
    v64 = v17;
    v32 = nc;
    n = nc + 1;
    v33 = *(_BYTE *)(((v5 + 160 + 12LL * v32) >> 3) + 0x7FFF8000);
    if ( (char)((v5 - 96 + 12 * v32) & 7) >= v33 && v33 != 0
      || *(_BYTE *)(((v5 + 160 + 12LL * v32 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 12 * v32 + 11) & 7) >= *(_BYTE *)(((v5 + 160 + 12LL * v32 + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160 + 12LL * v32, 12LL);
    }
    v34 = (__int64)&v7[12 * v32 - 480];
    *(_QWORD *)v34 = v63;
    *(_DWORD *)(v34 + 8) = v64;
  }
  v66 = operator*(&shape->yAxis, *(float *)(v5 + 48) + r);
  v65 = operator-((const Vector3f *)(v5 + 64), &v66);
  v35 = n;
  nd = n + 1;
  v36 = *(_BYTE *)(((v5 + 160 + 12LL * v35) >> 3) + 0x7FFF8000);
  if ( (char)((v5 - 96 + 12 * v35) & 7) >= v36 && v36 != 0
    || *(_BYTE *)(((v5 + 160 + 12LL * v35 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 - 96 + 12 * v35 + 11) & 7) >= *(_BYTE *)(((v5 + 160 + 12LL * v35 + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 160 + 12LL * v35, 12LL);
  }
  *(Vector3f *)&v7[12 * v35 - 480] = v65;
  v58 = operator*(&shape->yAxis, *(float *)(v5 + 48) + r);
  v66 = operator+((const Vector3f *)(v5 + 64), &v58);
  v37 = nd;
  ne = nd + 1;
  v38 = *(_BYTE *)(((v5 + 160 + 12LL * v37) >> 3) + 0x7FFF8000);
  if ( (char)((v5 - 96 + 12 * v37) & 7) >= v38 && v38 != 0
    || *(_BYTE *)(((v5 + 160 + 12LL * v37 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 - 96 + 12 * v37 + 11) & 7) >= *(_BYTE *)(((v5 + 160 + 12LL * v37 + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 160 + 12LL * v37, 12LL);
  }
  *(Vector3f *)&v7[12 * v37 - 480] = v66;
  result = CalculateCarveHullFromPoints(
             carveHull,
             shape,
             tileOffset,
             carveDepth,
             carveWidth,
             (const Vector3f *)(v5 + 160),
             ne);
  if ( v67 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1451: range 000000000CC887B2-000000000CC89208
void __cdecl WritePortalFlags(
        const Vector3f *verts,
        NavMeshPoly *polys,
        const int polyCount,
        const NavMeshDataHeader *sourceHeader)
{
  char v4; // dl
  char v5; // dl
  int v6; // ecx
  int v7; // eax
  unsigned __int64 v8; // rax
  double v9; // xmm0_8
  double v10; // xmm0_8
  __m128i x_low; // xmm0
  __m128i v12; // xmm0
  float *v13; // rax
  float *v14; // rdx
  char v15; // al
  __m128i z_low; // xmm0
  __m128i v17; // xmm0
  float *v18; // rax
  float *v19; // rdx
  char v20; // al
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  float *v23; // rax
  float *v24; // rdx
  char v25; // al
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  float *v28; // rax
  float *v29; // rdx
  char v30; // al
  char v31; // dl
  unsigned __int16 nei; // [rsp+2Ah] [rbp-46h]
  float __a; // [rsp+2Ch] [rbp-44h] BYREF
  float __b; // [rsp+30h] [rbp-40h] BYREF
  int ip_0; // [rsp+34h] [rbp-3Ch]
  int iv; // [rsp+38h] [rbp-38h]
  int ivn; // [rsp+3Ch] [rbp-34h]
  float dx_0; // [rsp+40h] [rbp-30h]
  float dz; // [rsp+44h] [rbp-2Ch]
  const Vector3f *bmax; // [rsp+48h] [rbp-28h]
  const Vector3f *bmin; // [rsp+50h] [rbp-20h]
  NavMeshPoly *poly; // [rsp+58h] [rbp-18h]
  const Vector3f *vert; // [rsp+60h] [rbp-10h]
  const Vector3f *nextVert; // [rsp+68h] [rbp-8h]

  bmax = &sourceHeader->bmax;
  bmin = &sourceHeader->bmin;
  for ( ip_0 = 0; ip_0 < polyCount; ++ip_0 )
  {
    poly = &polys[ip_0];
    for ( iv = 0; ; ++iv )
    {
      if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&poly->vertCount);
      }
      if ( iv >= poly->vertCount )
        break;
      v4 = *(_BYTE *)(((unsigned __int64)&poly->neis[iv] >> 3) + 0x7FFF8000);
      if ( v4 != 0 && (char)(((2 * iv + (_BYTE)poly + 12) & 7) + 1) >= v4 )
        __asan_report_load2(&poly->neis[iv]);
      if ( !poly->neis[iv] )
      {
        v5 = *(_BYTE *)(((unsigned __int64)&poly->verts[iv] >> 3) + 0x7FFF8000);
        if ( v5 != 0 && (char)(((2 * iv + (_BYTE)poly) & 7) + 1) >= v5 )
          __asan_report_load2(&poly->verts[iv]);
        vert = &verts[poly->verts[iv]];
        v6 = iv + 1;
        if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&poly->vertCount);
        }
        if ( v6 == poly->vertCount )
          v7 = 0;
        else
          v7 = iv + 1;
        ivn = v7;
        v8 = (unsigned __int64)&poly->verts[v7];
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 1) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          __asan_report_load2(v8);
        nextVert = &verts[poly->verts[ivn]];
        if ( *(_BYTE *)(((unsigned __int64)nextVert >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)nextVert & 7) + 3) >= *(_BYTE *)(((unsigned __int64)nextVert >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(nextVert);
        }
        *(float *)&v9 = nextVert->x;
        if ( *(_BYTE *)(((unsigned __int64)vert >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)vert & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vert >> 3) + 0x7FFF8000) )
        {
          v9 = __asan_report_load4(vert);
        }
        dx_0 = *(float *)&v9 - vert->x;
        if ( *(_BYTE *)(((unsigned __int64)&nextVert->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)nextVert + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&nextVert->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&nextVert->z);
        }
        *(float *)&v10 = nextVert->z;
        if ( *(_BYTE *)(((unsigned __int64)&vert->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)vert + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vert->z >> 3) + 0x7FFF8000) )
        {
          v10 = __asan_report_load4(&vert->z);
        }
        dz = *(float *)&v10 - vert->z;
        nei = 0;
        if ( dz >= 0.0 )
          goto LABEL_38;
        x_low = (__m128i)LODWORD(nextVert->x);
        if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
        {
          *(double *)x_low.m128i_i64 = __asan_report_load4(bmax);
        }
        *(float *)x_low.m128i_i32 = Abs(*(float *)x_low.m128i_i32 - bmax->x);
        LODWORD(__b) = _mm_cvtsi128_si32(x_low);
        if ( *(_BYTE *)(((unsigned __int64)vert >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)vert & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vert >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(vert);
        }
        v12 = (__m128i)LODWORD(vert->x);
        if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
        {
          *(double *)v12.m128i_i64 = __asan_report_load4(bmax);
        }
        *(float *)v12.m128i_i32 = Abs(*(float *)v12.m128i_i32 - bmax->x);
        LODWORD(__a) = _mm_cvtsi128_si32(v12);
        v13 = (float *)std::max<float>(&__a, &__b);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        if ( *v14 >= 0.0099999998 )
LABEL_38:
          v15 = 0;
        else
          v15 = 1;
        if ( v15 )
        {
          nei = 0x8000;
        }
        else
        {
          if ( dx_0 <= 0.0 )
            goto LABEL_54;
          if ( *(_BYTE *)(((unsigned __int64)&nextVert->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)nextVert + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&nextVert->z >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&nextVert->z);
          }
          z_low = (__m128i)LODWORD(nextVert->z);
          if ( *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)bmax + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) )
          {
            *(double *)z_low.m128i_i64 = __asan_report_load4(&bmax->z);
          }
          *(float *)z_low.m128i_i32 = Abs(*(float *)z_low.m128i_i32 - bmax->z);
          LODWORD(__b) = _mm_cvtsi128_si32(z_low);
          if ( *(_BYTE *)(((unsigned __int64)&vert->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)vert + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vert->z >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&vert->z);
          }
          v17 = (__m128i)LODWORD(vert->z);
          if ( *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)bmax + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) )
          {
            *(double *)v17.m128i_i64 = __asan_report_load4(&bmax->z);
          }
          *(float *)v17.m128i_i32 = Abs(*(float *)v17.m128i_i32 - bmax->z);
          LODWORD(__a) = _mm_cvtsi128_si32(v17);
          v18 = (float *)std::max<float>(&__a, &__b);
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          if ( *v19 >= 0.0099999998 )
LABEL_54:
            v20 = 0;
          else
            v20 = 1;
          if ( v20 )
          {
            nei = -32766;
          }
          else
          {
            if ( dz <= 0.0 )
              goto LABEL_70;
            if ( *(_BYTE *)(((unsigned __int64)nextVert >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)nextVert & 7) + 3) >= *(_BYTE *)(((unsigned __int64)nextVert >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(nextVert);
            }
            v21 = (__m128i)LODWORD(nextVert->x);
            if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
            {
              *(double *)v21.m128i_i64 = __asan_report_load4(bmin);
            }
            *(float *)v21.m128i_i32 = Abs(*(float *)v21.m128i_i32 - bmin->x);
            LODWORD(__b) = _mm_cvtsi128_si32(v21);
            if ( *(_BYTE *)(((unsigned __int64)vert >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)vert & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vert >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(vert);
            }
            v22 = (__m128i)LODWORD(vert->x);
            if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
            {
              *(double *)v22.m128i_i64 = __asan_report_load4(bmin);
            }
            *(float *)v22.m128i_i32 = Abs(*(float *)v22.m128i_i32 - bmin->x);
            LODWORD(__a) = _mm_cvtsi128_si32(v22);
            v23 = (float *)std::max<float>(&__a, &__b);
            v24 = v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            if ( *v24 >= 0.0099999998 )
LABEL_70:
              v25 = 0;
            else
              v25 = 1;
            if ( v25 )
            {
              nei = -32764;
            }
            else
            {
              if ( dx_0 >= 0.0 )
                goto LABEL_86;
              if ( *(_BYTE *)(((unsigned __int64)&nextVert->z >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)nextVert + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&nextVert->z >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&nextVert->z);
              }
              v26 = (__m128i)LODWORD(nextVert->z);
              if ( *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)bmin + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) )
              {
                *(double *)v26.m128i_i64 = __asan_report_load4(&bmin->z);
              }
              *(float *)v26.m128i_i32 = Abs(*(float *)v26.m128i_i32 - bmin->z);
              LODWORD(__b) = _mm_cvtsi128_si32(v26);
              if ( *(_BYTE *)(((unsigned __int64)&vert->z >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)vert + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vert->z >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(&vert->z);
              }
              v27 = (__m128i)LODWORD(vert->z);
              if ( *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)bmin + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) )
              {
                *(double *)v27.m128i_i64 = __asan_report_load4(&bmin->z);
              }
              *(float *)v27.m128i_i32 = Abs(*(float *)v27.m128i_i32 - bmin->z);
              LODWORD(__a) = _mm_cvtsi128_si32(v27);
              v28 = (float *)std::max<float>(&__a, &__b);
              v29 = v28;
              if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v28);
              }
              if ( *v29 >= 0.0099999998 )
LABEL_86:
                v30 = 0;
              else
                v30 = 1;
              if ( v30 )
                nei = -32762;
            }
          }
        }
        v31 = *(_BYTE *)(((unsigned __int64)&poly->neis[iv] >> 3) + 0x7FFF8000);
        if ( v31 != 0 && (char)(((2 * iv + (_BYTE)poly + 12) & 7) + 1) >= v31 )
          __asan_report_store2(&poly->neis[iv]);
        poly->neis[iv] = nei;
      }
    }
  }
};

// Line 1495: range 000000000CC89209-000000000CC895B8
int __cdecl SimplePolygonTriangulation(
        NavMeshPolyDetail *dtl,
        NavMeshPolyDetailIndex *dtris,
        int detailTriBase,
        const int polygonVertexCount)
{
  int v4; // ecx
  NavMeshPolyDetailIndex v5; // cx
  _WORD *v6; // rcx
  _WORD *v7; // rcx
  __int16 v8; // r8
  _WORD *v9; // rcx
  __int16 *v10; // rcx
  __int16 v11; // ax
  _WORD *v12; // rcx
  __int16 v13; // si
  __int16 *v14; // rcx
  __int16 v15; // ax
  _WORD *v16; // rcx
  __int16 v17; // si
  int j; // [rsp+24h] [rbp-Ch]
  NavMeshPolyDetailIndex *t; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)dtl >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)dtl & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dtl >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(dtl);
  }
  dtl->vertBase = 0;
  if ( *(_BYTE *)(((unsigned __int64)&dtl->vertCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dtl + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&dtl->vertCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&dtl->vertCount);
  }
  dtl->vertCount = 0;
  v4 = detailTriBase;
  if ( *(_BYTE *)(((unsigned __int64)&dtl->triBase >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dtl + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dtl->triBase >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&dtl->triBase);
  }
  dtl->triBase = v4;
  v5 = polygonVertexCount - 2;
  if ( *(_BYTE *)(((unsigned __int64)&dtl->triCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dtl + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&dtl->triCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&dtl->triCount);
  }
  dtl->triCount = v5;
  for ( j = 2; j < polygonVertexCount; ++j )
  {
    t = &dtris[4 * detailTriBase];
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((8 * detailTriBase + (_BYTE)dtris) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(&dtris[4 * detailTriBase]);
    }
    *t = 0;
    v6 = t + 1;
    if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(t + 1);
    }
    *v6 = j - 1;
    v7 = t + 2;
    v8 = j;
    if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(t + 2);
    }
    *v7 = v8;
    v9 = t + 3;
    if ( *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store2(t + 3);
    }
    *v9 = 4;
    if ( j == 2 )
    {
      v10 = (__int16 *)(t + 3);
      if ( *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(t + 3);
      }
      v11 = *v10;
      v12 = t + 3;
      v13 = v11 | 1;
      if ( *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(t + 3);
      }
      *v12 = v13;
    }
    if ( j == polygonVertexCount - 1 )
    {
      v14 = (__int16 *)(t + 3);
      if ( *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(t + 3);
      }
      v15 = *v14;
      v16 = t + 3;
      v17 = v15 | 0x10;
      if ( *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(t + 3);
      }
      *v16 = v17;
    }
    ++detailTriBase;
  }
  return detailTriBase;
};

// Line 1522: range 000000000CC895B9-000000000CC8977F
unsigned __int8 __cdecl GetEdgeFlags(const Vector3f *va, const dynamic_array<Vector3f,false,4> *poly)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const Vector3f *v6; // r13
  const Vector3f *v7; // rax
  int v8; // eax
  unsigned __int8 result; // al
  unsigned __int8 flags; // [rsp+13h] [rbp-7Dh]
  int i; // [rsp+14h] [rbp-7Ch]
  int j; // [rsp+18h] [rbp-78h]
  int npoly; // [rsp+1Ch] [rbp-74h]
  char v14[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 t:1529";
  *(_QWORD *)(v3 + 16) = GetEdgeFlags;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'GetEdgeFlags(Vector3f const&,dynamic_array<Vector3f,false,4ul> const&)::thrSqr
    && __cxa_guard_acquire(&`guard variable for'GetEdgeFlags(Vector3f const&,dynamic_array<Vector3f,false,4ul> const&)::thrSqr) )
  {
    *(float *)v2.m128i_i32 = Sqr<float>(&MAGIC_EDGE_DISTANCE);
    LODWORD(GetEdgeFlags(Vector3f const&,dynamic_array<Vector3f,false,4ul> const&)::thrSqr) = _mm_cvtsi128_si32(v2);
    __cxa_guard_release(&`guard variable for'GetEdgeFlags(Vector3f const&,dynamic_array<Vector3f,false,4ul> const&)::thrSqr);
  }
  npoly = dynamic_array<Vector3f,false,4ul>::size(poly);
  flags = 0;
  i = 0;
  j = npoly - 1;
  while ( i < npoly )
  {
    v6 = dynamic_array<Vector3f,false,4ul>::operator[](poly, i);
    v7 = dynamic_array<Vector3f,false,4ul>::operator[](poly, j);
    if ( GetEdgeFlags(Vector3f const&,dynamic_array<Vector3f,false,4ul> const&)::thrSqr > SqrDistancePointSegment2D(
                                                                                            (float *)(v3 + 32),
                                                                                            va,
                                                                                            v7,
                                                                                            v6) )
      flags |= 1 << j;
    v8 = i++;
    j = v8;
  }
  result = flags;
  if ( v14 == (char *)v3 )
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

// Line 1537: range 000000000CC89780-000000000CC897CB
unsigned __int8 __cdecl GetTriFlags(const unsigned __int8 va, const unsigned __int8 vb, const unsigned __int8 vc)
{
  unsigned __int8 flags; // [rsp+1Bh] [rbp-1h]

  flags = (vb & va) != 0;
  if ( (vc & vb) != 0 )
    flags |= 4u;
  if ( (va & vc) != 0 )
    flags |= 0x10u;
  return flags;
};

// Line 1552: range 000000000CC897CC-000000000CC89B63
void __cdecl TileToDynamicMesh(const NavMeshTile *tile, DynamicMesh *mesh, const Vector3f *tileOffset)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const NavMeshDataHeader *header; // rdx
  const NavMeshDataHeader *v7; // rdx
  unsigned __int64 p_v; // rsi
  const NavMeshTile *tilea; // [rsp+18h] [rbp-98h]
  int iv; // [rsp+2Ch] [rbp-84h]
  int vertCount; // [rsp+30h] [rbp-80h]
  int polyCount; // [rsp+34h] [rbp-7Ch]
  const NavMeshPoly *srcPoly; // [rsp+38h] [rbp-78h]
  Vector3f v; // [rsp+44h] [rbp-6Ch] BYREF
  char v17[96]; // [rsp+50h] [rbp-60h] BYREF

  tilea = tile;
  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    tile = (const NavMeshTile *)64;
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 ip:1566";
  *(_QWORD *)(v3 + 16) = TileToDynamicMesh;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( !tilea )
  {
    __asan_handle_no_return(tile);
    __assert_fail(
      "tile != __null",
      "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
      0x612u,
      "void TileToDynamicMesh(const NavMeshTile*, DynamicMesh&, const Vector3f&)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
  {
    tile = (const NavMeshTile *)&tilea->header;
    __asan_report_load8(&tilea->header, mesh);
  }
  if ( !tilea->header )
  {
    __asan_handle_no_return(tile);
    __assert_fail(
      "tile->header != __null",
      "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
      0x613u,
      "void TileToDynamicMesh(const NavMeshTile*, DynamicMesh&, const Vector3f&)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tilea->header, mesh);
  header = tilea->header;
  if ( *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)header + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&header->vertCount);
  }
  vertCount = header->vertCount;
  v7 = tilea->header;
  if ( *(_BYTE *)(((unsigned __int64)&v7->polyCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->polyCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->polyCount);
  }
  polyCount = v7->polyCount;
  p_v = (unsigned int)vertCount;
  DynamicMesh::Reserve(mesh, vertCount, polyCount);
  for ( iv = 0; iv < vertCount; ++iv )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tilea->verts >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->verts, p_v);
    v = operator-(&tilea->verts[iv], tileOffset);
    p_v = (unsigned __int64)&v;
    DynamicMesh::AddVertex(mesh, &v);
  }
  for ( *(_DWORD *)(v3 + 32) = 0; polyCount > *(_DWORD *)(v3 + 32); ++*(_DWORD *)(v3 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->polys, p_v);
    srcPoly = &tilea->polys[*(int *)(v3 + 32)];
    if ( *(_BYTE *)(((unsigned __int64)&srcPoly->vertCount >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)srcPoly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&srcPoly->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&srcPoly->vertCount);
    }
    p_v = (unsigned __int64)srcPoly;
    DynamicMesh::AddPolygon(mesh, srcPoly->verts, (const DynamicMesh::DataType *)(v3 + 32), srcPoly->vertCount);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1582: range 000000000CC89B64-000000000CC8A803
unsigned __int8 *__cdecl DynamicMeshToTile(
        int *dataSize,
        const DynamicMesh *mesh,
        const dynamic_array<ClippedDetailMesh*,false,8> *clipped,
        const NavMeshTile *sourceTile,
        const Vector3f *tileOffset)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned __int8 *result; // rax
  const Vector3f *v9; // rsi
  Vector3f *v10; // r14
  const NavMeshDataHeader *header; // rdx
  char v12; // cl
  unsigned int *v13; // rdx
  int v14; // eax
  DynamicMesh::DataType *Data; // rax
  int *v16; // rdx
  char v17; // cl
  __int64 v18; // rsi
  int v19; // edi
  unsigned __int8 m_VertexCount; // cl
  unsigned int *v21; // rcx
  int v22; // ecx
  int v23; // ecx
  unsigned __int8 area; // [rsp+37h] [rbp-149h]
  int iv; // [rsp+38h] [rbp-148h]
  int ip_0; // [rsp+3Ch] [rbp-144h]
  int vertCount; // [rsp+40h] [rbp-140h]
  int polyCount; // [rsp+44h] [rbp-13Ch]
  signed int headSize; // [rsp+50h] [rbp-130h]
  uint32_t vertSize; // [rsp+54h] [rbp-12Ch]
  uint32_t polySize; // [rsp+58h] [rbp-128h]
  uint32_t detailMeshesSize; // [rsp+5Ch] [rbp-124h]
  uint32_t detailVertsSize; // [rsp+60h] [rbp-120h]
  uint32_t detailTrisSize; // [rsp+64h] [rbp-11Ch]
  int32_t newSize; // [rsp+70h] [rbp-110h]
  unsigned int defaultRegion; // [rsp+78h] [rbp-108h]
  int sourcePolyIndex; // [rsp+7Ch] [rbp-104h]
  const NavMeshDataHeader *sourceHeader; // [rsp+80h] [rbp-100h]
  unsigned __int8 *newTile; // [rsp+88h] [rbp-F8h]
  Vector3f *verts; // [rsp+98h] [rbp-E8h]
  NavMeshPoly *polys; // [rsp+A0h] [rbp-E0h]
  unsigned int *polyRegions; // [rsp+C0h] [rbp-C0h]
  const DynamicMesh::Poly *p; // [rsp+C8h] [rbp-B8h]
  const NavMeshPoly *srcPoly; // [rsp+D0h] [rbp-B0h]
  NavMeshPoly *poly; // [rsp+D8h] [rbp-A8h]
  Vector3f lhs; // [rsp+E4h] [rbp-9Ch] BYREF
  char v51[144]; // [rsp+F0h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 20 detailVertCount:1594 64 4 19 detailTriCount:1595";
  *(_QWORD *)(v5 + 16) = DynamicMeshToTile;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  vertCount = DynamicMesh::VertCount(mesh);
  polyCount = DynamicMesh::PolyCount(mesh);
  if ( *(_BYTE *)(((unsigned __int64)&sourceTile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&sourceTile->header, mesh);
  sourceHeader = sourceTile->header;
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 64) = 0;
  RequirementsForDetailMeshMixed((int *)(v5 + 48), (int *)(v5 + 64), mesh, sourceTile, clipped);
  headSize = Align4(0x48u);
  vertSize = Align4(12 * vertCount);
  polySize = Align4(32 * polyCount);
  detailMeshesSize = Align4(12 * polyCount);
  detailVertsSize = Align4(12 * *(_DWORD *)(v5 + 48));
  detailTrisSize = Align4(8 * *(_DWORD *)(v5 + 64));
  newSize = detailMeshesSize + detailVertsSize + detailTrisSize + polySize + vertSize + headSize + Align4(4 * polyCount);
  ThreadSafeCountMgr::Add(CountTypeTile, 1);
  ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, newSize);
  newTile = (unsigned __int8 *)malloc_internal(
                                 newSize,
                                 0x10uLL,
                                 kAllocateOptionNone,
                                 "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
                                 1615);
  if ( newTile )
  {
    if ( *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dataSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(dataSize);
    }
    *dataSize = newSize;
    v9 = 0LL;
    memset(newTile, 0, newSize);
    verts = (Vector3f *)&newTile[headSize];
    polys = (NavMeshPoly *)&newTile[headSize + vertSize];
    polyRegions = (unsigned int *)&newTile[headSize
                                         + vertSize
                                         + polySize
                                         + detailMeshesSize
                                         + detailVertsSize
                                         + detailTrisSize];
    for ( iv = 0; iv < vertCount; ++iv )
    {
      lhs = DynamicMesh::GetVertex(mesh, iv);
      v10 = &verts[iv];
      if ( ((12 * iv + (unsigned __int8)verts) & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v10->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v10 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v10, 12LL);
      }
      v9 = tileOffset;
      *v10 = operator+(&lhs, tileOffset);
    }
    if ( *(_BYTE *)(((unsigned __int64)&sourceTile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&sourceTile->header, v9);
    header = sourceTile->header;
    v12 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v12 != 0;
    if ( v12 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v12 )
      __asan_report_load4(&header->polyCount);
    if ( header->polyCount <= 0 )
      goto LABEL_28;
    if ( *(_BYTE *)(((unsigned __int64)&sourceTile->polyRegions >> 3) + 0x7FFF8000) )
      __asan_report_load8(&sourceTile->polyRegions, v9);
    v13 = sourceTile->polyRegions;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(sourceTile->polyRegions);
    }
    if ( *v13 == -1 )
LABEL_28:
      v14 = -1;
    else
      v14 = -2;
    defaultRegion = v14;
    for ( ip_0 = 0; ip_0 < polyCount; ++ip_0 )
    {
      p = DynamicMesh::GetPoly(mesh, ip_0);
      v18 = ip_0;
      Data = (DynamicMesh::DataType *)DynamicMesh::GetData(mesh, ip_0);
      v16 = Data;
      v17 = *(_BYTE *)(((unsigned __int64)Data >> 3) + 0x7FFF8000);
      LOBYTE(v18) = v17 != 0;
      if ( v17 != 0 && (char)(((unsigned __int8)Data & 7) + 3) >= v17 )
        __asan_report_load4(Data);
      sourcePolyIndex = *v16;
      if ( *(_BYTE *)(((unsigned __int64)&sourceTile->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&sourceTile->polys, v18);
      srcPoly = &sourceTile->polys[sourcePolyIndex];
      poly = &polys[ip_0];
      memcpy(poly, p->m_VertexIDs, 0xCuLL);
      memcpy(poly->neis, p, sizeof(poly->neis));
      if ( *(_BYTE *)(((unsigned __int64)&srcPoly->area >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)srcPoly + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&srcPoly->area >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&srcPoly->area);
      }
      area = srcPoly->area;
      v19 = 1 << area;
      if ( *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)poly + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) )
      {
        v19 = (_DWORD)poly + 24;
        __asan_report_store4(&poly->flags);
      }
      poly->flags = v19;
      if ( *(_BYTE *)(((unsigned __int64)&poly->area >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->area >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&poly->area);
      }
      poly->area = area;
      if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->m_VertexCount);
      }
      m_VertexCount = p->m_VertexCount;
      if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&poly->vertCount);
      }
      poly->vertCount = m_VertexCount;
      v21 = &polyRegions[ip_0];
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * ip_0 + (_BYTE)polyRegions) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&polyRegions[ip_0]);
      }
      *v21 = defaultRegion;
    }
    WritePortalFlags(verts, polys, polyCount, sourceHeader);
    WriteDetailMeshMixed(
      (NavMeshPolyDetail *)&newTile[headSize + vertSize + polySize],
      (Vector3f *)&newTile[headSize + vertSize + polySize + detailMeshesSize],
      (NavMeshPolyDetailIndex *)&newTile[headSize + vertSize + polySize + detailMeshesSize + detailVertsSize],
      mesh,
      sourceTile,
      tileOffset,
      clipped,
      *(_DWORD *)(v5 + 64),
      *(_DWORD *)(v5 + 48));
    memcpy(newTile, sourceHeader, 0x48uLL);
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 20) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 20) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 20);
    }
    *((_DWORD *)newTile + 5) = polyCount;
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 24) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 24);
    }
    *((_DWORD *)newTile + 6) = vertCount;
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 28) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 28) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 28);
    }
    *((_DWORD *)newTile + 7) = polyCount;
    v22 = *(_DWORD *)(v5 + 48);
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 32) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 32);
    }
    *((_DWORD *)newTile + 8) = v22;
    v23 = *(_DWORD *)(v5 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 36) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 36) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 36);
    }
    *((_DWORD *)newTile + 9) = v23;
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 40) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 40);
    }
    *((_DWORD *)newTile + 10) = 0;
    result = newTile;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dataSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(dataSize);
    }
    *dataSize = 0;
    result = 0LL;
  }
  if ( v51 == (char *)v5 )
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
  return result;
};

// Line 1692: range 000000000CC8A804-000000000CC8ABAE
void __cdecl RequirementsForDetailMeshMixed(
        int *detailVertCount,
        int *detailTriCount,
        const DynamicMesh *mesh,
        const NavMeshTile *sourceTile,
        const dynamic_array<ClippedDetailMesh*,false,8> *clipped)
{
  DynamicMesh::DataType *Data; // rax
  int *v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int vertCount; // [rsp+3Ch] [rbp-24h]
  int triCount; // [rsp+40h] [rbp-20h]
  int ip_0; // [rsp+44h] [rbp-1Ch]
  int polyCount; // [rsp+48h] [rbp-18h]
  int sourcePolyIndex; // [rsp+4Ch] [rbp-14h]
  const DynamicMesh::Poly *p; // [rsp+50h] [rbp-10h]
  const NavMeshPolyDetail *sourceDetail; // [rsp+58h] [rbp-8h]

  vertCount = 0;
  triCount = 0;
  polyCount = DynamicMesh::PolyCount(mesh);
  for ( ip_0 = 0; ip_0 < polyCount; ++ip_0 )
  {
    p = DynamicMesh::GetPoly(mesh, ip_0);
    Data = (DynamicMesh::DataType *)DynamicMesh::GetData(mesh, ip_0);
    v6 = Data;
    if ( *(_BYTE *)(((unsigned __int64)Data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)Data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(Data);
    }
    sourcePolyIndex = *v6;
    v7 = ((_BYTE)p + 25) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&p->m_Status >> 3) + 0x7FFF8000) != 0
      && (char)v7 >= *(_BYTE *)(((unsigned __int64)&p->m_Status >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&p->m_Status);
    }
    if ( p->m_Status )
    {
      v8 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8, ip_0);
      if ( *(_QWORD *)v8 )
      {
        v9 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(v9, ip_0);
        vertCount += dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(*(_QWORD *)v9 + 8LL));
        v10 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(v10, ip_0);
        triCount += dynamic_array<unsigned short,false,2ul>::size((const dynamic_array<short unsigned int,false,2> *const)(*(_QWORD *)v10 + 32LL))
                  / 3;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        triCount += p->m_VertexCount - 2;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&sourceTile->detailMeshes >> 3) + 0x7FFF8000) )
        __asan_report_load8(&sourceTile->detailMeshes, v7);
      sourceDetail = &sourceTile->detailMeshes[sourcePolyIndex];
      if ( *(_BYTE *)(((unsigned __int64)&sourceDetail->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sourceDetail + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&sourceDetail->vertCount >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load2(&sourceDetail->vertCount);
      }
      vertCount += sourceDetail->vertCount;
      if ( *(_BYTE *)(((unsigned __int64)&sourceDetail->triCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sourceDetail + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&sourceDetail->triCount >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load2(&sourceDetail->triCount);
      }
      triCount += sourceDetail->triCount;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)detailVertCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)detailVertCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)detailVertCount >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(detailVertCount);
  }
  *detailVertCount = vertCount;
  if ( *(_BYTE *)(((unsigned __int64)detailTriCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)detailTriCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)detailTriCount >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_store4(detailTriCount);
  }
  *detailTriCount = triCount;
};

// Line 1743: range 000000000CC8ABAF-000000000CC8BF23
void __cdecl WriteDetailMeshMixed(
        NavMeshPolyDetail *detail,
        Vector3f *dverts,
        NavMeshPolyDetailIndex *dtris,
        const DynamicMesh *mesh,
        const NavMeshTile *sourceTile,
        const Vector3f *tileOffset,
        const dynamic_array<ClippedDetailMesh*,false,8> *clipped,
        const int detailTriCount,
        const int detailVertCount)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r12
  uint8_t *p_m_Status; // rax
  DynamicMesh::DataType *Data; // rax
  int *v14; // rdx
  char v15; // cl
  __int64 v16; // rsi
  int v17; // ecx
  NavMeshPolyDetailIndex v18; // cx
  int v19; // ecx
  __int64 v20; // rsi
  NavMeshPolyDetailIndex v21; // cx
  char v22; // dl
  size_t v23; // r8
  const Vector3f *detailVerts; // rcx
  size_t v25; // rsi
  const NavMeshPolyDetailIndex *detailTris; // rcx
  unsigned __int64 v27; // rax
  char v28; // dl
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // ecx
  NavMeshPolyDetailIndex v32; // di
  int v33; // ecx
  NavMeshPolyDetailIndex v34; // di
  Vector3f *v35; // rdx
  unsigned __int64 v36; // rcx
  Vector3f *v37; // rax
  unsigned __int8 EdgeFlags; // r14
  unsigned __int8 *v39; // rax
  unsigned __int8 *v40; // rdx
  __int16 m_VertexCount; // r14
  unsigned __int16 *v42; // rax
  _WORD *v43; // rdx
  NavMeshPolyDetailIndex v44; // cx
  __int16 v45; // r14
  unsigned __int16 *v46; // rax
  _WORD *v47; // rdx
  _WORD *v48; // rcx
  __int16 v49; // si
  __int16 v50; // r14
  unsigned __int16 *v51; // rax
  _WORD *v52; // rdx
  _WORD *v53; // rcx
  __int16 v54; // si
  unsigned __int64 v55; // rax
  unsigned __int16 *v56; // rdx
  unsigned __int8 *v57; // rax
  unsigned __int8 *v58; // rdx
  unsigned __int8 v59; // r15
  unsigned __int64 v60; // rax
  unsigned __int16 *v61; // rdx
  unsigned __int8 *v62; // rax
  unsigned __int8 *v63; // rdx
  unsigned __int8 v64; // r14
  unsigned __int64 v65; // rax
  unsigned __int16 *v66; // rdx
  unsigned __int8 *v67; // rax
  const unsigned __int8 *v68; // rdx
  unsigned __int8 TriFlags; // al
  _WORD *v70; // rcx
  __int16 v71; // si
  int detailVertBase; // [rsp+44h] [rbp-13Ch]
  int detailTriBase; // [rsp+48h] [rbp-138h]
  int ip_0; // [rsp+4Ch] [rbp-134h]
  int j; // [rsp+50h] [rbp-130h]
  int j_0; // [rsp+54h] [rbp-12Ch]
  int j_1; // [rsp+58h] [rbp-128h]
  int j_2; // [rsp+5Ch] [rbp-124h]
  int polyCount; // [rsp+60h] [rbp-120h]
  int vertCount; // [rsp+64h] [rbp-11Ch]
  int triCount; // [rsp+68h] [rbp-118h]
  int sourcePolyIndex; // [rsp+6Ch] [rbp-114h]
  NavMeshPolyDetail *dtl; // [rsp+70h] [rbp-110h]
  const DynamicMesh::Poly *p; // [rsp+78h] [rbp-108h]
  ClippedDetailMesh *clip; // [rsp+80h] [rbp-100h]
  NavMeshPolyDetailIndex *t; // [rsp+88h] [rbp-F8h]
  const NavMeshPolyDetail *sourceDetail; // [rsp+90h] [rbp-F0h]
  Vector3f rhs; // [rsp+98h] [rbp-E8h] BYREF
  Vector3f v95; // [rsp+A4h] [rbp-DCh]
  char v96[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v9 = (unsigned __int64)v96;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(160LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "2 32 24 14 edgeFlags:1750 96 24 9 poly:1751";
  *(_QWORD *)(v9 + 16) = WriteDetailMeshMixed;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -234881024;
  v11[536862722] = -218959118;
  v11[536862723] = -218103808;
  v11[536862724] = -202116109;
  detailVertBase = 0;
  detailTriBase = 0;
  dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v9 + 32));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v9 + 96));
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v9 + 96), 6uLL);
  polyCount = DynamicMesh::PolyCount(mesh);
  for ( ip_0 = 0; ip_0 < polyCount; ++ip_0 )
  {
    dtl = &detail[ip_0];
    p = DynamicMesh::GetPoly(mesh, ip_0);
    p_m_Status = &p->m_Status;
    if ( *(_BYTE *)(((unsigned __int64)p_m_Status >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_m_Status & 7) >= *(_BYTE *)(((unsigned __int64)p_m_Status >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_m_Status);
    }
    if ( p->m_Status )
    {
      v27 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load8(v27, ip_0);
      if ( *(_QWORD *)v27 )
      {
        Vector3f::Vector3f(&rhs);
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        dynamic_array<Vector3f,false,4ul>::resize_initialized(
          (dynamic_array<Vector3f,false,4> *const)(v9 + 96),
          p->m_VertexCount,
          &rhs,
          kIncreaseToExactSize);
        for ( j = 0; ; ++j )
        {
          if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&p->m_VertexCount);
          }
          if ( j >= p->m_VertexCount )
            break;
          v28 = *(_BYTE *)(((unsigned __int64)&p->m_VertexIDs[j] >> 3) + 0x7FFF8000);
          if ( v28 != 0 && (char)(((2 * j + (_BYTE)p + 12) & 7) + 1) >= v28 )
            __asan_report_load2(&p->m_VertexIDs[j]);
          rhs = DynamicMesh::GetVertex(mesh, p->m_VertexIDs[j]);
          v95 = operator+(tileOffset, &rhs);
          v29 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](
                                    (dynamic_array<Vector3f,false,4> *const)(v9 + 96),
                                    j);
          if ( (char)(v29 & 7) >= *(_BYTE *)((v29 >> 3) + 0x7FFF8000) && *(_BYTE *)((v29 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v29 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v29 + 11) & 7) >= *(_BYTE *)(((v29 + 11) >> 3) + 0x7FFF8000) )
          {
            v29 = __asan_report_store_n(v29, 12LL);
          }
          *(Vector3f *)v29 = v95;
        }
        v30 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
        if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
          v30 = __asan_report_load8(v30, ip_0);
        clip = *(ClippedDetailMesh **)v30;
        vertCount = dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(*(_QWORD *)v30 + 8LL));
        triCount = dynamic_array<unsigned short,false,2ul>::size(&clip->triangles) / 3;
        v31 = detailVertBase;
        if ( *(_BYTE *)(((unsigned __int64)dtl >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dtl & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dtl >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(dtl);
        }
        dtl->vertBase = v31;
        v32 = vertCount;
        if ( *(_BYTE *)(((unsigned __int64)&dtl->vertCount >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dtl + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&dtl->vertCount >> 3) + 0x7FFF8000) )
        {
          v32 = (_WORD)dtl + 8;
          __asan_report_store2(&dtl->vertCount);
        }
        dtl->vertCount = v32;
        v33 = detailTriBase;
        if ( *(_BYTE *)(((unsigned __int64)&dtl->triBase >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dtl + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dtl->triBase >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&dtl->triBase);
        }
        dtl->triBase = v33;
        v34 = triCount;
        if ( *(_BYTE *)(((unsigned __int64)&dtl->triCount >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dtl + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&dtl->triCount >> 3) + 0x7FFF8000) )
        {
          v34 = (_WORD)dtl + 10;
          __asan_report_store2(&dtl->triCount);
        }
        dtl->triCount = v34;
        for ( j_0 = 0; j_0 < vertCount; ++j_0 )
        {
          v35 = dynamic_array<Vector3f,false,4ul>::operator[](&clip->vertices, j_0);
          v36 = (unsigned __int64)&dverts[detailVertBase + j_0];
          if ( (((unsigned __int8)dverts + 12 * (detailVertBase + j_0)) & 7) >= *(_BYTE *)((v36 >> 3) + 0x7FFF8000)
            && *(_BYTE *)((v36 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v36 + 11) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)dverts + 12 * (detailVertBase + j_0) + 11) & 7) >= *(_BYTE *)(((v36 + 11) >> 3)
                                                                                              + 0x7FFF8000) )
          {
            __asan_report_store_n(&dverts[detailVertBase + j_0], 12LL);
          }
          if ( ((unsigned __int8)v35 & 7) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v35->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v35 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v35->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v35, 12LL);
          }
          *(_QWORD *)v36 = *(_QWORD *)&v35->x;
          *(float *)(v36 + 8) = v35->z;
        }
        dynamic_array<unsigned char,false,1ul>::resize_uninitialized(
          (dynamic_array<unsigned char,false,1> *const)(v9 + 32),
          vertCount,
          kIncreaseToExactSize);
        for ( j_1 = 0; j_1 < vertCount; ++j_1 )
        {
          v37 = dynamic_array<Vector3f,false,4ul>::operator[](&clip->vertices, j_1);
          EdgeFlags = GetEdgeFlags(v37, (const dynamic_array<Vector3f,false,4> *)(v9 + 96));
          v39 = dynamic_array<unsigned char,false,1ul>::operator[](
                  (dynamic_array<unsigned char,false,1> *const)(v9 + 32),
                  j_1);
          v40 = v39;
          if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v39 & 7) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v39);
          }
          *v40 = EdgeFlags;
        }
        for ( j_2 = 0; j_2 < triCount; ++j_2 )
        {
          t = &dtris[4 * detailTriBase + 4 * j_2];
          if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&p->m_VertexCount);
          }
          m_VertexCount = p->m_VertexCount;
          v42 = dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2);
          v43 = v42;
          if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v42 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v42);
          }
          v44 = m_VertexCount + *v43;
          if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
          {
            __asan_report_store2(t);
          }
          *t = v44;
          if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&p->m_VertexCount);
          }
          v45 = p->m_VertexCount;
          v46 = dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2 + 1);
          v47 = v46;
          if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v46 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v46);
          }
          v48 = t + 1;
          v49 = v45 + *v47;
          if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store2(t + 1);
          }
          *v48 = v49;
          if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&p->m_VertexCount);
          }
          v50 = p->m_VertexCount;
          v51 = dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2 + 2);
          v52 = v51;
          if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v51 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(v51);
          }
          v53 = t + 2;
          v54 = v50 + *v52;
          if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store2(t + 2);
          }
          *v53 = v54;
          v55 = (unsigned __int64)dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2 + 2);
          v56 = (unsigned __int16 *)v55;
          if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) != 0 && (char)((v55 & 7) + 1) >= *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
            __asan_report_load2(v55);
          v57 = dynamic_array<unsigned char,false,1ul>::operator[](
                  (dynamic_array<unsigned char,false,1> *const)(v9 + 32),
                  *v56);
          v58 = v57;
          if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v57 & 7) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v57);
          }
          v59 = *v58;
          v60 = (unsigned __int64)dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2 + 1);
          v61 = (unsigned __int16 *)v60;
          if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) != 0 && (char)((v60 & 7) + 1) >= *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
            __asan_report_load2(v60);
          v62 = dynamic_array<unsigned char,false,1ul>::operator[](
                  (dynamic_array<unsigned char,false,1> *const)(v9 + 32),
                  *v61);
          v63 = v62;
          if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v62 & 7) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v62);
          }
          v64 = *v63;
          v65 = (unsigned __int64)dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2);
          v66 = (unsigned __int16 *)v65;
          if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) != 0 && (char)((v65 & 7) + 1) >= *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
            __asan_report_load2(v65);
          v67 = dynamic_array<unsigned char,false,1ul>::operator[](
                  (dynamic_array<unsigned char,false,1> *const)(v9 + 32),
                  *v66);
          v68 = v67;
          if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v67 & 7) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v67);
          }
          TriFlags = GetTriFlags(*v68, v64, v59);
          v70 = t + 3;
          v71 = TriFlags;
          if ( *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)t + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store2(t + 3);
          }
          *v70 = v71;
        }
        detailVertBase += vertCount;
        detailTriBase += triCount;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        detailTriBase = SimplePolygonTriangulation(dtl, dtris, detailTriBase, p->m_VertexCount);
      }
    }
    else
    {
      v16 = ip_0;
      Data = (DynamicMesh::DataType *)DynamicMesh::GetData(mesh, ip_0);
      v14 = Data;
      v15 = *(_BYTE *)(((unsigned __int64)Data >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v15 != 0;
      if ( v15 != 0 && (char)(((unsigned __int8)Data & 7) + 3) >= v15 )
        __asan_report_load4(Data);
      sourcePolyIndex = *v14;
      if ( *(_BYTE *)(((unsigned __int64)&sourceTile->detailMeshes >> 3) + 0x7FFF8000) )
        __asan_report_load8(&sourceTile->detailMeshes, v16);
      sourceDetail = &sourceTile->detailMeshes[sourcePolyIndex];
      v17 = detailVertBase;
      if ( *(_BYTE *)(((unsigned __int64)dtl >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dtl & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dtl >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(dtl);
      }
      dtl->vertBase = v17;
      if ( *(_BYTE *)(((unsigned __int64)&sourceDetail->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sourceDetail + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&sourceDetail->vertCount >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load2(&sourceDetail->vertCount);
      }
      v18 = sourceDetail->vertCount;
      if ( *(_BYTE *)(((unsigned __int64)&dtl->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dtl + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&dtl->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_store2(&dtl->vertCount);
      }
      dtl->vertCount = v18;
      v19 = detailTriBase;
      if ( *(_BYTE *)(((unsigned __int64)&dtl->triBase >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dtl + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dtl->triBase >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&dtl->triBase);
      }
      dtl->triBase = v19;
      v20 = (((_BYTE)sourceDetail + 10) & 7u) + 1;
      if ( *(_BYTE *)(((unsigned __int64)&sourceDetail->triCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sourceDetail + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&sourceDetail->triCount >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load2(&sourceDetail->triCount);
      }
      v21 = sourceDetail->triCount;
      v22 = *(_BYTE *)(((unsigned __int64)&dtl->triCount >> 3) + 0x7FFF8000);
      LOBYTE(v20) = v22 != 0;
      if ( v22 != 0 && (char)((((_BYTE)dtl + 10) & 7) + 1) >= v22 )
        __asan_report_store2(&dtl->triCount);
      dtl->triCount = v21;
      v23 = 12LL * sourceDetail->vertCount;
      if ( *(_BYTE *)(((unsigned __int64)&sourceTile->detailVerts >> 3) + 0x7FFF8000) )
        __asan_report_load8(&sourceTile->detailVerts, v20);
      detailVerts = sourceTile->detailVerts;
      if ( *(_BYTE *)(((unsigned __int64)sourceDetail >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)sourceDetail & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sourceDetail >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(sourceDetail);
      }
      memcpy(&dverts[detailVertBase], &detailVerts[sourceDetail->vertBase], v23);
      v25 = 8LL * sourceDetail->triCount;
      if ( *(_BYTE *)(((unsigned __int64)&sourceTile->detailTris >> 3) + 0x7FFF8000) )
        __asan_report_load8(&sourceTile->detailTris, v25);
      detailTris = sourceTile->detailTris;
      if ( *(_BYTE *)(((unsigned __int64)&sourceDetail->triBase >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sourceDetail + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sourceDetail->triBase >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&sourceDetail->triBase);
      }
      memcpy(&dtris[4 * detailTriBase], &detailTris[4 * sourceDetail->triBase], v25);
      detailVertBase += sourceDetail->vertCount;
      detailTriBase += sourceDetail->triCount;
    }
  }
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v9 + 96));
  dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v9 + 32));
  if ( v96 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1838: range 000000000CC8BF24-000000000CC8BF3C
void __cdecl CalculateHullWireMesh(
        dynamic_array<Vector3f,false,4> *lines,
        const NavMeshCarveShape *shape,
        const float carveDepth,
        const float carveWidth)
{
  ;
};

// Line 1926: range 000000000CC8CAED-000000000CC8D75A
// local variable allocation has failed, the output may be wrong!
void __cdecl ClipDetailMeshes(
        dynamic_array<ClippedDetailMesh*,false,8> *clipped,
        const DynamicSihouette *mesh,
        const DetailMesh *detailMesh,
        const NavMeshTile *tile,
        const Vector3f *tileOffset,
        const float quantFactor)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  dynamic_array<DetailMeshPoly,false,4> *p_polys; // rcx
  DynamicSihouette::DataType *p_m_polyId; // rax
  int *p_vertCount; // rax
  int v12; // ecx
  char v13; // dl
  __int64 v14; // xmm0_8
  float v15; // xmm1_4
  unsigned __int64 v16; // rax
  unsigned __int64 n; // rax
  __int64 v18; // rax
  Vector3f *v19; // rax
  Vector3f *v20; // rax
  ClippedDetailMesh *v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  Vector3f *v24; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  int i; // [rsp+3Ch] [rbp-3B4h]
  int j; // [rsp+40h] [rbp-3B0h]
  int j_0; // [rsp+44h] [rbp-3ACh]
  int j_1; // [rsp+48h] [rbp-3A8h]
  int polyCount; // [rsp+4Ch] [rbp-3A4h]
  int vertsCount; // [rsp+50h] [rbp-3A0h]
  int vertCount; // [rsp+54h] [rbp-39Ch]
  const DynamicSihouette::Poly *p; // [rsp+58h] [rbp-398h]
  const DetailMeshPoly *dpoly; // [rsp+60h] [rbp-390h]
  ClippedDetailMesh *dmesh; // [rsp+68h] [rbp-388h]
  char v40[880]; // [rsp+80h] [rbp-370h] BYREF

  v6 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(832LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "9 32 12 17 queryPadding:1988 64 12 13 queryMin:2020 96 12 13 queryMax:2020 128 24 9 hull:1992 19"
                        "2 24 10 verts:1993 256 24 11 inside:1994 320 24 9 temp:1995 384 48 13 callback:2039 464 296 11 welder:2000";
  *(_QWORD *)(v6 + 16) = ClipDetailMeshes;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219020288;
  v8[536862722] = -219020288;
  v8[536862723] = -219020288;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862726] = -234881024;
  v8[536862727] = -218959118;
  v8[536862728] = -234881024;
  v8[536862729] = -218959118;
  v8[536862730] = -234881024;
  v8[536862731] = -218959118;
  v8[536862733] = -219021312;
  v8[536862734] = 62194;
  v8[536862743] = -218103808;
  v8[536862744] = -202116109;
  v8[536862745] = -202116109;
  Vector3f::Vector3f((Vector3f *const)(v6 + 32), quantFactor + quantFactor, 0.0, quantFactor + quantFactor);
  polyCount = DynamicSihouette::PolyCount(mesh);
  dynamic_array<Plane,false,4ul>::dynamic_array((dynamic_array<Plane,false,4> *const)(v6 + 128));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 192));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 256));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 320));
  dynamic_array<Plane,false,4ul>::reserve((dynamic_array<Plane,false,4> *const)(v6 + 128), 8uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v6 + 192), 8uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v6 + 256), 0x20uLL);
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v6 + 320), 0x20uLL);
  VertexWelder<64>::VertexWelder((VertexWelder<64> *const)(v6 + 464), 0LL, quantFactor);
  for ( i = 0; i < polyCount; ++i )
  {
    p = DynamicSihouette::GetPoly(mesh, i);
    p_polys = &detailMesh->polys;
    p_m_polyId = &p->m_polyId;
    if ( *(_BYTE *)(((unsigned __int64)p_m_polyId >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_m_polyId & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_m_polyId >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_m_polyId);
    }
    dpoly = dynamic_array<DetailMeshPoly,false,4ul>::operator[](p_polys, p->m_polyId);
    p_vertCount = &dpoly->vertCount;
    if ( *(_BYTE *)(((unsigned __int64)p_vertCount >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_vertCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_vertCount);
    }
    v12 = dpoly->vertCount;
    if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&p->m_VertexCount);
    }
    if ( v12 != p->m_VertexCount )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->m_VertexCount);
      }
      dynamic_array<Vector3f,false,4ul>::resize_uninitialized(
        (dynamic_array<Vector3f,false,4> *const)(v6 + 192),
        p->m_VertexCount,
        kIncreaseToExactSize);
      for ( j = 0; ; ++j )
      {
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        if ( j >= p->m_VertexCount )
          break;
        v13 = *(_BYTE *)(((unsigned __int64)&p->m_VertexIDs[j] >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (char)(((2 * (j + 8) + (_BYTE)p + 2) & 7) + 1) >= v13 )
          __asan_report_load2(&p->m_VertexIDs[j]);
        *(Vector3f *)&v14 = DynamicSihouette::GetVertex(mesh, p->m_VertexIDs[j]);
        v16 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](
                                  (dynamic_array<Vector3f,false,4> *const)(v6 + 192),
                                  j);
        if ( (char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) && *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v16 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v16 + 11) & 7) >= *(_BYTE *)(((v16 + 11) >> 3) + 0x7FFF8000) )
        {
          v16 = __asan_report_store_n(v16, 12LL);
        }
        *(_QWORD *)v16 = v14;
        *(float *)(v16 + 8) = v15;
      }
      HullFromPoly((dynamic_array<Plane,false,4> *)(v6 + 128), (const dynamic_array<Vector3f,false,4> *)(v6 + 192));
      Vector3f::Vector3f((Vector3f *const)(v6 + 64));
      Vector3f::Vector3f((Vector3f *const)(v6 + 96));
      n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](
                              (dynamic_array<Vector3f,false,4> *const)(v6 + 192),
                              0LL);
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      *(_QWORD *)(v6 + 96) = *(_QWORD *)n;
      *(_DWORD *)(v6 + 104) = *(_DWORD *)(n + 8);
      v18 = v6 + 96;
      if ( (char)((v6 + 96) & 7) >= *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v6 + 107) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 + 107) & 7) >= *(_BYTE *)(((v6 + 107) >> 3) + 0x7FFF8000) )
      {
        v18 = __asan_report_load_n(v6 + 96, 12LL);
      }
      *(_QWORD *)(v6 + 64) = *(_QWORD *)v18;
      *(_DWORD *)(v6 + 72) = *(_DWORD *)(v18 + 8);
      vertsCount = dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(v6 + 192));
      for ( j_0 = 0; j_0 < vertsCount; ++j_0 )
      {
        v19 = dynamic_array<Vector3f,false,4ul>::operator[]((dynamic_array<Vector3f,false,4> *const)(v6 + 192), j_0);
        *(Vector3f *)(v6 + 64) = min((const Vector3f *)(v6 + 64), v19);
        v20 = dynamic_array<Vector3f,false,4ul>::operator[]((dynamic_array<Vector3f,false,4> *const)(v6 + 192), j_0);
        *(Vector3f *)(v6 + 96) = max((const Vector3f *)(v6 + 96), v20);
      }
      Vector3f::operator-=((Vector3f *const)(v6 + 64), (const Vector3f *)(v6 + 32));
      Vector3f::operator+=((Vector3f *const)(v6 + 96), (const Vector3f *)(v6 + 32));
      v21 = (ClippedDetailMesh *)operator new(
                                   0x38uLL,
                                   0x10uLL,
                                   "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
                                   2031);
      ClippedDetailMesh::ClippedDetailMesh(v21);
      v22 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, i);
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_store8();
      *(_QWORD *)v22 = v21;
      v23 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, i);
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8(v23, i);
      dmesh = *(ClippedDetailMesh **)v23;
      if ( *(_BYTE *)((*(_QWORD *)v23 >> 3) + 0x7FFF8000LL) != 0
        && *(_BYTE *)((*(_QWORD *)v23 >> 3) + 0x7FFF8000LL) <= 3 )
      {
        __asan_report_store4(dmesh);
      }
      dmesh->polyIndex = i;
      VertexWelder<64>::SetVertexArray((VertexWelder<64> *const)(v6 + 464), &dmesh->vertices);
      VertexWelder<64>::Reset((VertexWelder<64> *const)(v6 + 464));
      ClipDetailMeshes(dynamic_array<ClippedDetailMesh *,false,8ul> &,DynamicSihouette const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::ClipCallback(
        (ClipDetailMeshes::ClipCallback *const)(v6 + 384),
        dmesh,
        (dynamic_array<Plane,false,4> *)(v6 + 128),
        (DetailVertexWelder *)(v6 + 464),
        (dynamic_array<Vector3f,false,4> *)(v6 + 256),
        (dynamic_array<Vector3f,false,4> *)(v6 + 320));
      QueryDetailBVTree(
        detailMesh,
        dpoly,
        (const Vector3f *)(v6 + 64),
        (const Vector3f *)(v6 + 96),
        (QueryDetailBVTreeCallback *)(v6 + 384));
      vertCount = dynamic_array<Vector3f,false,4ul>::size(&dmesh->vertices);
      for ( j_1 = 0; j_1 < vertCount; ++j_1 )
      {
        v24 = dynamic_array<Vector3f,false,4ul>::operator[](&dmesh->vertices, j_1);
        Vector3f::operator+=(v24, tileOffset);
      }
      if ( dynamic_array<Vector3f,false,4ul>::size(&dmesh->vertices) <= 2
        || dynamic_array<unsigned short,false,2ul>::size(&dmesh->triangles) <= 2 )
      {
        v26 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, i);
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          v26 = __asan_report_load8(v26, i);
        delete_internal<ClippedDetailMesh>(*(ClippedDetailMesh **)v26);
        v27 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, i);
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          v27 = __asan_report_store8();
        *(_QWORD *)v27 = 0LL;
      }
    }
  }
  VertexWelder<64>::~VertexWelder((VertexWelder<64> *const)(v6 + 464));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 320));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 256));
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v6 + 192));
  dynamic_array<Plane,false,4ul>::~dynamic_array((dynamic_array<Plane,false,4> *const)(v6 + 128));
  if ( v40 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8064) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1937: range 000000000CC8BF3E-000000000CC8C090
void __cdecl ClipDetailMeshes(dynamic_array<ClippedDetailMesh *,false,8ul> &,DynamicSihouette const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::ClipCallback(
        ClipDetailMeshes::ClipCallback *const this,
        ClippedDetailMesh *dmeshIn,
        dynamic_array<Plane,false,4> *hullIn,
        DetailVertexWelder *welderIn,
        dynamic_array<Vector3f,false,4> *insideIn,
        dynamic_array<Vector3f,false,4> *tempIn)
{
  int (**v6)(...); // rcx

  QueryDetailBVTreeCallback::QueryDetailBVTreeCallback(this);
  v6 = (int (**)(...))&off_1EFAFE90;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_QueryDetailBVTreeCallback = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->dmesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->dmesh = dmeshIn;
  if ( *(_BYTE *)(((unsigned __int64)&this->hull >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->hull = hullIn;
  if ( *(_BYTE *)(((unsigned __int64)&this->welder >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->welder = welderIn;
  if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->inside = insideIn;
  if ( *(_BYTE *)(((unsigned __int64)&this->temp >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->temp = tempIn;
};

// Line 1947: range 000000000CC8C092-000000000CC8CAEC
void __cdecl ClipDetailMeshes(dynamic_array<ClippedDetailMesh *,false,8ul> &,DynamicSihouette const&,DetailMesh const&,NavMeshTile const*,Vector3f const&,float)::ClipCallback::process(
        ClipDetailMeshes::ClipCallback *const this,
        const DetailMesh *detailMesh,
        const DetailMeshPoly *poly,
        const int *tris,
        int triCount)
{
  __m128i v5; // xmm0
  dynamic_array<short unsigned int,false,2> *p_triangles; // rdi
  unsigned __int64 v7; // rcx
  size_t v8; // rsi
  const DetailMesh *v9; // rcx
  int vertBase; // esi
  size_t v11; // rsi
  const Vector3f *v12; // rbx
  unsigned __int64 n; // rax
  const dynamic_array<Vector3f,false,4> *p_vertices; // rdi
  int v15; // esi
  const unsigned __int16 *v16; // rcx
  size_t v17; // rsi
  const Vector3f *v18; // rbx
  unsigned __int64 v19; // rax
  const dynamic_array<Vector3f,false,4> *v20; // rdi
  int v21; // esi
  const unsigned __int16 *v22; // rcx
  size_t v23; // rsi
  const Vector3f *v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  dynamic_array<Vector3f,false,4> *temp; // rdx
  dynamic_array<Plane,false,4> *hull; // rcx
  __int64 v29; // rsi
  dynamic_array<Plane,false,4> *v30; // rsi
  DetailVertexWelder *welder; // rbx
  Vector3f *v32; // rsi
  DetailVertexWelder *v33; // rbx
  const Vector3f *v34; // rsi
  DetailVertexWelder *v35; // rbx
  Vector3f *v36; // rsi
  __int64 v37; // rsi
  Vector3f *v38; // r12
  size_t v39; // rsi
  Vector3f *v40; // rbx
  Vector3f *v41; // rax
  dynamic_array<short unsigned int,false,2> *v42; // rdx
  dynamic_array<short unsigned int,false,2> *v43; // rdx
  dynamic_array<short unsigned int,false,2> *v44; // rdx
  unsigned __int16 v50; // [rsp+3Ah] [rbp-36h] BYREF
  int i; // [rsp+3Ch] [rbp-34h]
  int v1; // [rsp+40h] [rbp-30h]
  int i_0; // [rsp+44h] [rbp-2Ch]
  int vertexCount; // [rsp+48h] [rbp-28h]
  int v0; // [rsp+4Ch] [rbp-24h]
  int v2; // [rsp+50h] [rbp-20h]
  float triArea2; // [rsp+54h] [rbp-1Ch]
  const unsigned __int16 *t; // [rsp+58h] [rbp-18h]

  for ( i = 0; i < triCount; ++i )
  {
    p_triangles = &detailMesh->triangles;
    v7 = (unsigned __int64)&tris[i];
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i + (_BYTE)tris) & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      p_triangles = (dynamic_array<short unsigned int,false,2> *)&tris[i];
      *(double *)v5.m128i_i64 = __asan_report_load4(p_triangles);
    }
    v8 = 4 * *(_DWORD *)v7;
    t = dynamic_array<unsigned short,false,2ul>::operator[](p_triangles, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v8);
    dynamic_array<Vector3f,false,4ul>::resize_uninitialized(this->inside, 3uLL, kIncreaseToExactSize);
    v9 = detailMesh;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      *(double *)v5.m128i_i64 = __asan_report_load4(poly);
    }
    vertBase = poly->vertBase;
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(t);
    }
    v11 = vertBase + *t;
    v12 = dynamic_array<Vector3f,false,4ul>::operator[](&v9->vertices, v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v11);
    n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 0LL);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(n, 12LL);
    }
    if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v12->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v12 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->z + 3) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(v12, 12LL);
    }
    *(_QWORD *)n = *(_QWORD *)&v12->x;
    *(float *)(n + 8) = v12->z;
    p_vertices = &detailMesh->vertices;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      p_vertices = (const dynamic_array<Vector3f,false,4> *)poly;
      *(double *)v5.m128i_i64 = __asan_report_load4(poly);
    }
    v15 = poly->vertBase;
    v16 = t + 1;
    if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
    {
      p_vertices = (const dynamic_array<Vector3f,false,4> *)(t + 1);
      __asan_report_load2(t + 1);
    }
    v17 = v15 + *v16;
    v18 = dynamic_array<Vector3f,false,4ul>::operator[](p_vertices, v17);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v17);
    v19 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 1uLL);
    if ( (char)(v19 & 7) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v19 + 11) & 7) >= *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) )
    {
      v19 = __asan_report_store_n(v19, 12LL);
    }
    if ( ((unsigned __int8)v18 & 7) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v18->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v18 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v18->z + 3) >> 3) + 0x7FFF8000) )
    {
      v19 = __asan_report_load_n(v18, 12LL);
    }
    *(_QWORD *)v19 = *(_QWORD *)&v18->x;
    *(float *)(v19 + 8) = v18->z;
    v20 = &detailMesh->vertices;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)poly & 7) + 3) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
    {
      v20 = (const dynamic_array<Vector3f,false,4> *)poly;
      *(double *)v5.m128i_i64 = __asan_report_load4(poly);
    }
    v21 = poly->vertBase;
    v22 = t + 2;
    if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
    {
      v20 = (const dynamic_array<Vector3f,false,4> *)(t + 2);
      __asan_report_load2(t + 2);
    }
    v23 = v21 + *v22;
    v24 = dynamic_array<Vector3f,false,4ul>::operator[](v20, v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v23);
    v25 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 2uLL);
    if ( (char)(v25 & 7) >= *(_BYTE *)((v25 >> 3) + 0x7FFF8000) && *(_BYTE *)((v25 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v25 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v25 + 11) & 7) >= *(_BYTE *)(((v25 + 11) >> 3) + 0x7FFF8000) )
    {
      v25 = __asan_report_store_n(v25, 12LL);
    }
    v26 = ((_DWORD)v24 + 11) & 7;
    if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v24->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v24 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->z + 3) >> 3) + 0x7FFF8000) )
    {
      v26 = 12LL;
      v25 = __asan_report_load_n(v24, 12LL);
    }
    *(_QWORD *)v25 = *(_QWORD *)&v24->x;
    *(float *)(v25 + 8) = v24->z;
    if ( *(_BYTE *)(((unsigned __int64)&this->temp >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->temp, v26);
    temp = this->temp;
    if ( *(_BYTE *)(((unsigned __int64)&this->hull >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->hull, v26);
    hull = this->hull;
    v29 = *(unsigned __int8 *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000);
    if ( (_BYTE)v29 )
      __asan_report_load8(&this->inside, v29);
    v30 = hull;
    HullPolygonIntersection(this->inside, hull, temp);
    if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->inside, v30);
    vertexCount = dynamic_array<Vector3f,false,4ul>::size(this->inside);
    if ( vertexCount > 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->welder >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->welder, v30);
      welder = this->welder;
      if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->inside, v30);
      v32 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 0LL);
      v0 = VertexWelder<64>::AddUnique(welder, v32);
      if ( *(_BYTE *)(((unsigned __int64)&this->welder >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->welder, v32);
      v33 = this->welder;
      if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->inside, v32);
      v34 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 1uLL);
      v1 = VertexWelder<64>::AddUnique(v33, v34);
      for ( i_0 = 2; i_0 < vertexCount; ++i_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->welder >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->welder, v34);
        v35 = this->welder;
        if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->inside, v34);
        v36 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, i_0);
        v2 = VertexWelder<64>::AddUnique(v35, v36);
        if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->inside, v36);
        v37 = i_0;
        v38 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, i_0);
        if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->inside, v37);
        v39 = i_0 - 1;
        v40 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, v39);
        if ( *(_BYTE *)(((unsigned __int64)&this->inside >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->inside, v39);
        v41 = dynamic_array<Vector3f,false,4ul>::operator[](this->inside, 0LL);
        v34 = v40;
        *(float *)v5.m128i_i32 = TriArea2D(v41, v40, v38);
        triArea2 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
        v5 = (__m128i)0x38D1B717u;
        if ( triArea2 >= 0.000099999997 )
        {
          if ( v0 != v1 && v1 != v2 && v2 != v0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->dmesh >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->dmesh, v40);
            v42 = &this->dmesh->triangles;
            v50 = v0;
            dynamic_array<unsigned short,false,2ul>::push_back(v42, &v50);
            if ( *(_BYTE *)(((unsigned __int64)&this->dmesh >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->dmesh, &v50);
            v43 = &this->dmesh->triangles;
            v50 = v1;
            dynamic_array<unsigned short,false,2ul>::push_back(v43, &v50);
            if ( *(_BYTE *)(((unsigned __int64)&this->dmesh >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->dmesh, &v50);
            v44 = &this->dmesh->triangles;
            v50 = v2;
            v34 = (const Vector3f *)&v50;
            dynamic_array<unsigned short,false,2ul>::push_back(v44, &v50);
          }
          v1 = v2;
        }
        else
        {
          v1 = v2;
        }
      }
    }
  }
};

// Line 2061: range 000000000CC8D75B-000000000CC8D98B
void __cdecl RequirementsForDetailMeshMixed(
        int *detailVertCount,
        int *detailTriCount,
        const DynamicSihouette *mesh,
        const NavMeshTile *sourceTile,
        const dynamic_array<ClippedDetailMesh*,false,8> *clipped)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int vertCount; // [rsp+38h] [rbp-18h]
  int triCount; // [rsp+3Ch] [rbp-14h]
  int ip_0; // [rsp+40h] [rbp-10h]
  int polyCount; // [rsp+44h] [rbp-Ch]
  const DynamicSihouette::Poly *p; // [rsp+48h] [rbp-8h]

  vertCount = 0;
  triCount = 0;
  polyCount = DynamicSihouette::PolyCount(mesh);
  for ( ip_0 = 0; ip_0 < polyCount; ++ip_0 )
  {
    p = DynamicSihouette::GetPoly(mesh, ip_0);
    v5 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5, ip_0);
    if ( *(_QWORD *)v5 )
    {
      v6 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6, ip_0);
      vertCount += dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(*(_QWORD *)v6 + 8LL));
      v7 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(v7, ip_0);
      triCount += dynamic_array<unsigned short,false,2ul>::size((const dynamic_array<short unsigned int,false,2> *const)(*(_QWORD *)v7 + 32LL))
                / 3;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->m_VertexCount);
      }
      triCount += p->m_VertexCount - 2;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)detailVertCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)detailVertCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)detailVertCount >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(detailVertCount);
  }
  *detailVertCount = vertCount;
  if ( *(_BYTE *)(((unsigned __int64)detailTriCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)detailTriCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)detailTriCount >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_store4(detailTriCount);
  }
  *detailTriCount = triCount;
};

// Line 2102: range 000000000CC8D98C-000000000CC8E85E
void __cdecl WriteDetailMeshMixed(
        NavMeshPolyDetail *detail,
        Vector3f *dverts,
        NavMeshPolyDetailIndex *dtris,
        const DynamicSihouette *mesh,
        const NavMeshTile *sourceTile,
        const dynamic_array<ClippedDetailMesh*,false,8> *clipped,
        const int detailTriCount,
        const int detailVertCount)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  unsigned __int64 v11; // rax
  char v12; // dl
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // ecx
  NavMeshPolyDetailIndex v16; // di
  int v17; // ecx
  NavMeshPolyDetailIndex v18; // di
  Vector3f *v19; // rdx
  unsigned __int64 v20; // rcx
  Vector3f *v21; // rax
  unsigned __int8 EdgeFlags; // r14
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rdx
  __int16 m_VertexCount; // r14
  unsigned __int16 *v26; // rax
  _WORD *v27; // rdx
  NavMeshPolyDetailIndex v28; // cx
  __int16 v29; // r14
  unsigned __int16 *v30; // rax
  _WORD *v31; // rdx
  _WORD *v32; // rcx
  __int16 v33; // si
  __int16 v34; // r14
  unsigned __int16 *v35; // rax
  _WORD *v36; // rdx
  _WORD *v37; // rcx
  __int16 v38; // si
  unsigned __int64 v39; // rax
  unsigned __int16 *v40; // rdx
  unsigned __int8 *v41; // rax
  unsigned __int8 *v42; // rdx
  unsigned __int8 v43; // r15
  unsigned __int64 v44; // rax
  unsigned __int16 *v45; // rdx
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rdx
  unsigned __int8 v48; // r14
  unsigned __int64 v49; // rax
  unsigned __int16 *v50; // rdx
  unsigned __int8 *v51; // rax
  const unsigned __int8 *v52; // rdx
  unsigned __int8 TriFlags; // al
  _WORD *v54; // rcx
  __int16 v55; // si
  int detailVertBase; // [rsp+40h] [rbp-130h]
  int detailTriBase; // [rsp+44h] [rbp-12Ch]
  int ip_0; // [rsp+48h] [rbp-128h]
  int j; // [rsp+4Ch] [rbp-124h]
  int j_0; // [rsp+50h] [rbp-120h]
  int j_1; // [rsp+54h] [rbp-11Ch]
  int j_2; // [rsp+58h] [rbp-118h]
  int polyCount; // [rsp+5Ch] [rbp-114h]
  int vertCount; // [rsp+60h] [rbp-110h]
  int triCount; // [rsp+64h] [rbp-10Ch]
  NavMeshPolyDetail *dtl; // [rsp+68h] [rbp-108h]
  const DynamicSihouette::Poly *p; // [rsp+70h] [rbp-100h]
  ClippedDetailMesh *clip; // [rsp+78h] [rbp-F8h]
  NavMeshPolyDetailIndex *t; // [rsp+80h] [rbp-F0h]
  Vector3f v75; // [rsp+88h] [rbp-E8h] BYREF
  Vector3f Vertex; // [rsp+94h] [rbp-DCh]
  char v77[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v8 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(160LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 32 24 14 edgeFlags:2109 96 24 9 poly:2110";
  *(_QWORD *)(v8 + 16) = WriteDetailMeshMixed;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234881024;
  v10[536862722] = -218959118;
  v10[536862723] = -218103808;
  v10[536862724] = -202116109;
  detailVertBase = 0;
  detailTriBase = 0;
  dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v8 + 32));
  dynamic_array<Vector3f,false,4ul>::dynamic_array((dynamic_array<Vector3f,false,4> *const)(v8 + 96));
  dynamic_array<Vector3f,false,4ul>::reserve((dynamic_array<Vector3f,false,4> *const)(v8 + 96), 6uLL);
  polyCount = DynamicSihouette::PolyCount(mesh);
  for ( ip_0 = 0; ip_0 < polyCount; ++ip_0 )
  {
    dtl = &detail[ip_0];
    p = DynamicSihouette::GetPoly(mesh, ip_0);
    v11 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11, ip_0);
    if ( *(_QWORD *)v11 )
    {
      Vector3f::Vector3f(&v75);
      if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->m_VertexCount);
      }
      dynamic_array<Vector3f,false,4ul>::resize_initialized(
        (dynamic_array<Vector3f,false,4> *const)(v8 + 96),
        p->m_VertexCount,
        &v75,
        kIncreaseToExactSize);
      for ( j = 0; ; ++j )
      {
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        if ( j >= p->m_VertexCount )
          break;
        v12 = *(_BYTE *)(((unsigned __int64)&p->m_VertexIDs[j] >> 3) + 0x7FFF8000);
        if ( v12 != 0 && (char)(((2 * (j + 8) + (_BYTE)p + 2) & 7) + 1) >= v12 )
          __asan_report_load2(&p->m_VertexIDs[j]);
        Vertex = DynamicSihouette::GetVertex(mesh, p->m_VertexIDs[j]);
        v13 = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](
                                  (dynamic_array<Vector3f,false,4> *const)(v8 + 96),
                                  j);
        if ( (char)(v13 & 7) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) && *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v13 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v13 + 11) & 7) >= *(_BYTE *)(((v13 + 11) >> 3) + 0x7FFF8000) )
        {
          v13 = __asan_report_store_n(v13, 12LL);
        }
        *(Vector3f *)v13 = Vertex;
      }
      v14 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](clipped, ip_0);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(v14, ip_0);
      clip = *(ClippedDetailMesh **)v14;
      vertCount = dynamic_array<Vector3f,false,4ul>::size((const dynamic_array<Vector3f,false,4> *const)(*(_QWORD *)v14 + 8LL));
      triCount = dynamic_array<unsigned short,false,2ul>::size(&clip->triangles) / 3;
      v15 = detailVertBase;
      if ( *(_BYTE *)(((unsigned __int64)dtl >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dtl & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dtl >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(dtl);
      }
      dtl->vertBase = v15;
      v16 = vertCount;
      if ( *(_BYTE *)(((unsigned __int64)&dtl->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dtl + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&dtl->vertCount >> 3) + 0x7FFF8000) )
      {
        v16 = (_WORD)dtl + 8;
        __asan_report_store2(&dtl->vertCount);
      }
      dtl->vertCount = v16;
      v17 = detailTriBase;
      if ( *(_BYTE *)(((unsigned __int64)&dtl->triBase >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dtl + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dtl->triBase >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&dtl->triBase);
      }
      dtl->triBase = v17;
      v18 = triCount;
      if ( *(_BYTE *)(((unsigned __int64)&dtl->triCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dtl + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&dtl->triCount >> 3) + 0x7FFF8000) )
      {
        v18 = (_WORD)dtl + 10;
        __asan_report_store2(&dtl->triCount);
      }
      dtl->triCount = v18;
      for ( j_0 = 0; j_0 < vertCount; ++j_0 )
      {
        v19 = dynamic_array<Vector3f,false,4ul>::operator[](&clip->vertices, j_0);
        v20 = (unsigned __int64)&dverts[detailVertBase + j_0];
        if ( (((unsigned __int8)dverts + 12 * (detailVertBase + j_0)) & 7) >= *(_BYTE *)((v20 >> 3) + 0x7FFF8000)
          && *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v20 + 11) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dverts + 12 * (detailVertBase + j_0) + 11) & 7) >= *(_BYTE *)(((v20 + 11) >> 3)
                                                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(&dverts[detailVertBase + j_0], 12LL);
        }
        if ( ((unsigned __int8)v19 & 7) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v19->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v19 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v19->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v19, 12LL);
        }
        *(_QWORD *)v20 = *(_QWORD *)&v19->x;
        *(float *)(v20 + 8) = v19->z;
      }
      dynamic_array<unsigned char,false,1ul>::resize_uninitialized(
        (dynamic_array<unsigned char,false,1> *const)(v8 + 32),
        vertCount,
        kIncreaseToExactSize);
      for ( j_1 = 0; j_1 < vertCount; ++j_1 )
      {
        v21 = dynamic_array<Vector3f,false,4ul>::operator[](&clip->vertices, j_1);
        EdgeFlags = GetEdgeFlags(v21, (const dynamic_array<Vector3f,false,4> *)(v8 + 96));
        v23 = dynamic_array<unsigned char,false,1ul>::operator[](
                (dynamic_array<unsigned char,false,1> *const)(v8 + 32),
                j_1);
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v23 & 7) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v23);
        }
        *v24 = EdgeFlags;
      }
      for ( j_2 = 0; j_2 < triCount; ++j_2 )
      {
        t = &dtris[4 * detailTriBase + 4 * j_2];
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        m_VertexCount = p->m_VertexCount;
        v26 = dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2);
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v26);
        }
        v28 = m_VertexCount + *v27;
        if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(t);
        }
        *t = v28;
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        v29 = p->m_VertexCount;
        v30 = dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2 + 1);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v30);
        }
        v32 = t + 1;
        v33 = v29 + *v31;
        if ( *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)t + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 1) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(t + 1);
        }
        *v32 = v33;
        if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->m_VertexCount);
        }
        v34 = p->m_VertexCount;
        v35 = dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2 + 2);
        v36 = v35;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v35 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(v35);
        }
        v37 = t + 2;
        v38 = v34 + *v36;
        if ( *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)t + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 2) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(t + 2);
        }
        *v37 = v38;
        v39 = (unsigned __int64)dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2 + 2);
        v40 = (unsigned __int16 *)v39;
        if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) != 0 && (char)((v39 & 7) + 1) >= *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
          __asan_report_load2(v39);
        v41 = dynamic_array<unsigned char,false,1ul>::operator[](
                (dynamic_array<unsigned char,false,1> *const)(v8 + 32),
                *v40);
        v42 = v41;
        if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v41 & 7) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v41);
        }
        v43 = *v42;
        v44 = (unsigned __int64)dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2 + 1);
        v45 = (unsigned __int16 *)v44;
        if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) != 0 && (char)((v44 & 7) + 1) >= *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
          __asan_report_load2(v44);
        v46 = dynamic_array<unsigned char,false,1ul>::operator[](
                (dynamic_array<unsigned char,false,1> *const)(v8 + 32),
                *v45);
        v47 = v46;
        if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v46 & 7) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v46);
        }
        v48 = *v47;
        v49 = (unsigned __int64)dynamic_array<unsigned short,false,2ul>::operator[](&clip->triangles, 3 * j_2);
        v50 = (unsigned __int16 *)v49;
        if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) != 0 && (char)((v49 & 7) + 1) >= *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
          __asan_report_load2(v49);
        v51 = dynamic_array<unsigned char,false,1ul>::operator[](
                (dynamic_array<unsigned char,false,1> *const)(v8 + 32),
                *v50);
        v52 = v51;
        if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v51 & 7) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v51);
        }
        TriFlags = GetTriFlags(*v52, v48, v43);
        v54 = t + 3;
        v55 = TriFlags;
        if ( *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)t + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(t + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store2(t + 3);
        }
        *v54 = v55;
      }
      detailVertBase += vertCount;
      detailTriBase += triCount;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->m_VertexCount);
      }
      detailTriBase = SimplePolygonTriangulation(dtl, dtris, detailTriBase, p->m_VertexCount);
    }
  }
  dynamic_array<Vector3f,false,4ul>::~dynamic_array((dynamic_array<Vector3f,false,4> *const)(v8 + 96));
  dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v8 + 32));
  if ( v77 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2184: range 000000000CC8E85F-000000000CC8F78C
unsigned __int8 *__cdecl DynamicMeshToTile(
        int *dataSize,
        const DynamicSihouette *mesh,
        const dynamic_array<ClippedDetailMesh*,false,8> *clipped,
        const NavMeshTile *sourceTile)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int8 *result; // rax
  __int64 v8; // rsi
  size_t v9; // rsi
  Vector3f *v10; // r14
  const NavMeshDataHeader *header; // rdx
  char v12; // cl
  unsigned int *v13; // rdx
  int v14; // eax
  DynamicSihouette::DataType *p_m_polyId; // rax
  int v16; // edi
  unsigned __int8 m_VertexCount; // cl
  unsigned int *v18; // rcx
  int v19; // ecx
  int v20; // ecx
  unsigned __int8 area; // [rsp+2Bh] [rbp-1A5h]
  int iv; // [rsp+2Ch] [rbp-1A4h]
  int ip_0; // [rsp+30h] [rbp-1A0h]
  int ip_1; // [rsp+34h] [rbp-19Ch]
  int vertCount; // [rsp+38h] [rbp-198h]
  int polyCount; // [rsp+3Ch] [rbp-194h]
  signed int headSize; // [rsp+48h] [rbp-188h]
  uint32_t vertSize; // [rsp+4Ch] [rbp-184h]
  uint32_t polySize; // [rsp+50h] [rbp-180h]
  uint32_t detailMeshesSize; // [rsp+54h] [rbp-17Ch]
  uint32_t detailVertsSize; // [rsp+58h] [rbp-178h]
  uint32_t detailTrisSize; // [rsp+5Ch] [rbp-174h]
  uint32_t polyRegionsSize; // [rsp+64h] [rbp-16Ch]
  uint32_t polyNeiCSize; // [rsp+68h] [rbp-168h]
  int32_t newSize; // [rsp+70h] [rbp-160h]
  unsigned int defaultRegion; // [rsp+78h] [rbp-158h]
  int sourcePolyIndex; // [rsp+7Ch] [rbp-154h]
  uint8_t *polyNeiC; // [rsp+80h] [rbp-150h]
  const NavMeshDataHeader *sourceHeader; // [rsp+88h] [rbp-148h]
  unsigned __int8 *newTile; // [rsp+90h] [rbp-140h]
  Vector3f *verts; // [rsp+A0h] [rbp-130h]
  NavMeshPoly *polys; // [rsp+A8h] [rbp-128h]
  unsigned int *polyRegions; // [rsp+C8h] [rbp-108h]
  const DynamicSihouette::Poly *p; // [rsp+D8h] [rbp-F8h]
  const NavMeshPoly *srcPoly; // [rsp+E0h] [rbp-F0h]
  NavMeshPoly *poly; // [rsp+E8h] [rbp-E8h]
  const DynamicSihouette::Poly *p_0; // [rsp+F0h] [rbp-E0h]
  char v51[208]; // [rsp+100h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 20 removePolyCount:2195 64 4 20 detailVertCount:2196 80 4 19 detailTriCount:2197 96 24 10 bound:2241";
  *(_QWORD *)(v4 + 16) = DynamicMeshToTile;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  vertCount = DynamicSihouette::VertCount(mesh);
  polyCount = DynamicSihouette::PolyCount(mesh);
  if ( *(_BYTE *)(((unsigned __int64)&sourceTile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&sourceTile->header, mesh);
  sourceHeader = sourceTile->header;
  *(_DWORD *)(v4 + 48) = DynamicSihouette::RemovePolyCount(mesh);
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  RequirementsForDetailMeshMixed((int *)(v4 + 64), (int *)(v4 + 80), mesh, sourceTile, clipped);
  headSize = Align4(0x48u);
  vertSize = Align4(12 * vertCount);
  polySize = Align4(32 * polyCount);
  detailMeshesSize = Align4(12 * polyCount);
  detailVertsSize = Align4(12 * *(_DWORD *)(v4 + 64));
  detailTrisSize = Align4(8 * *(_DWORD *)(v4 + 80));
  polyRegionsSize = Align4(4 * polyCount);
  polyNeiCSize = Align4(6 * polyCount);
  newSize = polyNeiCSize
          + polyRegionsSize
          + detailMeshesSize
          + detailVertsSize
          + detailTrisSize
          + polySize
          + vertSize
          + headSize
          + Align4(2 * (*(_DWORD *)(v4 + 48) + 1));
  ThreadSafeCountMgr::Add(CountTypeTile, 1);
  ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, newSize);
  newTile = (unsigned __int8 *)malloc_internal(
                                 newSize,
                                 0x10uLL,
                                 kAllocateOptionNone,
                                 "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
                                 2219);
  if ( newTile )
  {
    if ( *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dataSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(dataSize);
    }
    *dataSize = newSize;
    memset(newTile, 0, newSize);
    verts = (Vector3f *)&newTile[headSize];
    polys = (NavMeshPoly *)&newTile[headSize + vertSize];
    polyRegions = (unsigned int *)&newTile[headSize
                                         + vertSize
                                         + polySize
                                         + detailMeshesSize
                                         + detailVertsSize
                                         + detailTrisSize];
    polyNeiC = &newTile[headSize
                      + vertSize
                      + polySize
                      + detailMeshesSize
                      + detailVertsSize
                      + detailTrisSize
                      + polyRegionsSize];
    v8 = 1LL;
    MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v4 + 96), 1);
    for ( iv = 0; iv < vertCount; ++iv )
    {
      v9 = iv;
      v10 = &verts[iv];
      if ( ((12 * iv + (unsigned __int8)verts) & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v10->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v10 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->z + 3) >> 3) + 0x7FFF8000) )
      {
        v9 = 12LL;
        __asan_report_store_n(v10, 12LL);
      }
      *v10 = DynamicSihouette::GetVertex(mesh, v9);
      v8 = (__int64)&verts[iv];
      MinMaxAABB::Encapsulate((MinMaxAABB *const)(v4 + 96), (const Vector3f *)v8);
    }
    if ( *(_BYTE *)(((unsigned __int64)&sourceTile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&sourceTile->header, v8);
    header = sourceTile->header;
    v12 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v12 != 0;
    if ( v12 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v12 )
      __asan_report_load4(&header->polyCount);
    if ( header->polyCount <= 0 )
      goto LABEL_28;
    if ( *(_BYTE *)(((unsigned __int64)&sourceTile->polyRegions >> 3) + 0x7FFF8000) )
      __asan_report_load8(&sourceTile->polyRegions, v8);
    v13 = sourceTile->polyRegions;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(sourceTile->polyRegions);
    }
    if ( *v13 == -1 )
LABEL_28:
      v14 = -1;
    else
      v14 = -2;
    defaultRegion = v14;
    for ( ip_0 = 0; ip_0 < polyCount; ++ip_0 )
    {
      p = DynamicSihouette::GetPoly(mesh, ip_0);
      p_m_polyId = &p->m_polyId;
      if ( *(_BYTE *)(((unsigned __int64)p_m_polyId >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_m_polyId & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_m_polyId >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_m_polyId);
      }
      sourcePolyIndex = p->m_polyId;
      if ( *(_BYTE *)(((unsigned __int64)&sourceTile->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&sourceTile->polys, (((_BYTE)p + 32) & 7u) + 3);
      srcPoly = &sourceTile->polys[sourcePolyIndex];
      poly = &polys[ip_0];
      memcpy(poly, p->m_VertexIDs, 0xCuLL);
      memcpy(poly->neis, p, sizeof(poly->neis));
      if ( *(_BYTE *)(((unsigned __int64)&srcPoly->area >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)srcPoly + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&srcPoly->area >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&srcPoly->area);
      }
      area = srcPoly->area;
      v16 = 1 << area;
      if ( *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)poly + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly->flags >> 3) + 0x7FFF8000) )
      {
        v16 = (_DWORD)poly + 24;
        __asan_report_store4(&poly->flags);
      }
      poly->flags = v16;
      if ( *(_BYTE *)(((unsigned __int64)&poly->area >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->area >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&poly->area);
      }
      poly->area = area;
      if ( *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&p->m_VertexCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->m_VertexCount);
      }
      m_VertexCount = p->m_VertexCount;
      if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&poly->vertCount);
      }
      poly->vertCount = m_VertexCount;
      v18 = &polyRegions[ip_0];
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * ip_0 + (_BYTE)polyRegions) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&polyRegions[ip_0]);
      }
      *v18 = defaultRegion;
    }
    for ( ip_1 = 0; ip_1 < polyCount; ++ip_1 )
    {
      p_0 = DynamicSihouette::GetPoly(mesh, ip_1);
      memcpy(polyNeiC, p_0->m_NeighboursC, 6uLL);
      polyNeiC += 6;
    }
    DynamicSihouette::CopyRemovePoly(
      mesh,
      (unsigned __int16 *)&newTile[headSize
                                 + vertSize
                                 + polySize
                                 + detailMeshesSize
                                 + detailVertsSize
                                 + detailTrisSize
                                 + polyRegionsSize
                                 + polyNeiCSize],
      (const int *)(v4 + 48));
    WritePortalFlags(verts, polys, polyCount, sourceHeader);
    WriteDetailMeshMixed(
      (NavMeshPolyDetail *)&newTile[headSize + vertSize + polySize],
      (Vector3f *)&newTile[headSize + vertSize + polySize + detailMeshesSize],
      (NavMeshPolyDetailIndex *)&newTile[headSize + vertSize + polySize + detailMeshesSize + detailVertsSize],
      mesh,
      sourceTile,
      clipped,
      *(_DWORD *)(v4 + 80),
      *(_DWORD *)(v4 + 64));
    memcpy(newTile, sourceHeader, 0x48uLL);
    if ( (((unsigned __int8)newTile + 44) & 7) >= *(_BYTE *)(((unsigned __int64)(newTile + 44) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)(newTile + 44) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(newTile + 55) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)newTile + 55) & 7) >= *(_BYTE *)(((unsigned __int64)(newTile + 55) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(newTile + 44, 12LL);
    }
    *(_QWORD *)(newTile + 44) = *(_QWORD *)(v4 + 96);
    *((_DWORD *)newTile + 13) = *(_DWORD *)(v4 + 104);
    if ( (((unsigned __int8)newTile + 56) & 7) >= *(_BYTE *)(((unsigned __int64)(newTile + 56) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)(newTile + 56) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(newTile + 67) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)newTile + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(newTile + 67) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(newTile + 56, 12LL);
    }
    *((_QWORD *)newTile + 7) = *(_QWORD *)(v4 + 108);
    *((_DWORD *)newTile + 16) = *(_DWORD *)(v4 + 116);
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 20) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 20) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 20);
    }
    *((_DWORD *)newTile + 5) = polyCount;
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 24) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 24);
    }
    *((_DWORD *)newTile + 6) = vertCount;
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 28) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 28) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 28);
    }
    *((_DWORD *)newTile + 7) = polyCount;
    v19 = *(_DWORD *)(v4 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 32) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 32);
    }
    *((_DWORD *)newTile + 8) = v19;
    v20 = *(_DWORD *)(v4 + 80);
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 36) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 36) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 36);
    }
    *((_DWORD *)newTile + 9) = v20;
    if ( *(_BYTE *)(((unsigned __int64)(newTile + 40) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newTile + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(newTile + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(newTile + 40);
    }
    *((_DWORD *)newTile + 10) = 0;
    result = newTile;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dataSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(dataSize);
    }
    *dataSize = 0;
    result = 0LL;
  }
  if ( v51 == (char *)v4 )
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

// Line 2309: range 000000000CC8F78D-000000000CC9073E
CarveResultStatus __cdecl CutCarveNavmeshTile(
        unsigned __int8 **tileData,
        int *tileDataSize,
        const unsigned __int8 *sourceData,
        int sourceDataSize,
        const NavMeshCarveShape *shapes,
        int shapeCount,
        float carveDepth,
        float carveWidth,
        float quantSize,
        const Vector3f *position,
        const Quaternionf *rotation)
{
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  _DWORD *v13; // r12
  CarveResultStatus v14; // r14d
  __int64 n; // rax
  __int64 v16; // rax
  const NavMeshCarveShape *v17; // rdx
  const NavMeshCarveShape *v18; // rax
  __int64 v19; // rdx
  DetailHull *M_current; // r14
  size_t v21; // rsi
  __int64 v22; // rdx
  char v23; // al
  size_t v24; // rax
  unsigned __int8 *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  DetailHull *__last; // [rsp+0h] [rbp-2620h]
  unsigned __int8 **tileDataa; // [rsp+38h] [rbp-25E8h]
  bool validHull; // [rsp+47h] [rbp-25D9h]
  int i; // [rsp+48h] [rbp-25D8h]
  int i_0; // [rsp+4Ch] [rbp-25D4h]
  __gnu_cxx::__normal_iterator<DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16> > > __i; // [rsp+58h] [rbp-25C8h] BYREF
  __gnu_cxx::__normal_iterator<const DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16> > > __position; // [rsp+60h] [rbp-25C0h] BYREF
  Vector3f lhs; // [rsp+6Ch] [rbp-25B4h] BYREF
  Vector3f rhs; // [rsp+78h] [rbp-25A8h] BYREF
  Vector3f inV; // [rsp+84h] [rbp-259Ch] BYREF
  char v47[9616]; // [rsp+90h] [rbp-2590h] BYREF

  tileDataa = tileData;
  v11 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    tileData = (unsigned __int8 **)9568;
    v12 = __asan_stack_malloc_8(9568LL);
    if ( v12 )
      v11 = v12;
  }
  *(_QWORD *)v11 = 1102416563LL;
  *(_QWORD *)(v11 + 8) = "10 48 12 15 tileOffset:2330 80 24 9 hull:2347 144 24 15 carveHulls:2349 208 24 16 localBounds:2"
                         "378 272 24 12 clipped:2494 336 64 8 mat:2343 432 92 15 localShape:2352 560 96 15 detailMesh:233"
                         "5 688 152 9 tile:2321 912 8392 16 dynamicMesh:2437";
  *(_QWORD *)(v11 + 16) = CutCarveNavmeshTile;
  v13 = (_DWORD *)(v11 >> 3);
  v13[536862720] = -235802127;
  v13[536862721] = 61937;
  v13[536862721] = 0x4000000;
  v13[536862722] = 62194;
  v13[536862723] = -218959360;
  v13[536862724] = 62194;
  v13[536862725] = -218959360;
  v13[536862726] = 62194;
  v13[536862727] = -218959360;
  v13[536862728] = 62194;
  v13[536862729] = -218959360;
  v13[536862730] = 62194;
  v13[536862732] = -219021312;
  v13[536862733] = 62194;
  v13[536862736] = -219020288;
  v13[536862737] = 62194;
  v13[536862740] = -219021312;
  v13[536862741] = 62194;
  v13[536862746] = -218959360;
  v13[536862747] = -218959118;
  v13[536862748] = 62194;
  v13[536863010] = -218103808;
  v13[536863011] = -202116109;
  v13[536863012] = -202116109;
  v13[536863013] = -202116109;
  v13[536863014] = -202116109;
  v13[536863015] = -202116109;
  v13[536863016] = -202116109;
  v13[536863017] = -202116109;
  v13[536863018] = -202116109;
  if ( !sourceData )
  {
    __asan_handle_no_return(tileData);
    __assert_fail(
      "sourceData != __null",
      "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
      0x906u,
      "CarveResultStatus CutCarveNavmeshTile(unsigned char**, int*, const unsigned char*, int, const NavMeshCarveShape*, "
      "int, float, float, float, const Vector3f&, const Quaternionf&)");
  }
  if ( sourceDataSize <= 0 )
  {
    __asan_handle_no_return(tileData);
    __assert_fail(
      "sourceDataSize > 0",
      "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
      0x907u,
      "CarveResultStatus CutCarveNavmeshTile(unsigned char**, int*, const unsigned char*, int, const NavMeshCarveShape*, "
      "int, float, float, float, const Vector3f&, const Quaternionf&)");
  }
  if ( *(_BYTE *)(((unsigned __int64)tileDataa >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *tileDataa = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)tileDataSize >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)tileDataSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tileDataSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(tileDataSize);
  }
  *tileDataSize = 0;
  if ( shapeCount )
  {
    NavMeshTile::NavMeshTile((NavMeshTile *const)(v11 + 688));
    if ( !PatchMeshTilePointers((NavMeshTile *)(v11 + 688), sourceData, sourceDataSize) )
    {
      v14 = kRemoveTile;
    }
    else
    {
      if ( !*(_QWORD *)(v11 + 704) )
      {
        __asan_handle_no_return(v11 + 688);
        __assert_fail(
          "tile.header != __null",
          "./src/pathfinding/Internal/Obstacles/NavMeshTileCarving.cpp",
          0x918u,
          "CarveResultStatus CutCarveNavmeshTile(unsigned char**, int*, const unsigned char*, int, const NavMeshCarveShap"
          "e*, int, float, float, float, const Vector3f&, const Quaternionf&)");
      }
      n = *(_QWORD *)(v11 + 704);
      if ( ((n + 56) & 7) >= *(_BYTE *)(((unsigned __int64)(n + 56) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)(n + 56) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(n + 67) >> 3) + 0x7FFF8000) != 0
        && ((n + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(n + 67) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n + 56, 12LL);
      }
      rhs = *(Vector3f *)(n + 56);
      v16 = *(_QWORD *)(v11 + 704);
      if ( ((v16 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)(v16 + 44) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)(v16 + 44) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(v16 + 55) >> 3) + 0x7FFF8000) != 0
        && ((v16 + 55) & 7) >= *(_BYTE *)(((unsigned __int64)(v16 + 55) >> 3) + 0x7FFF8000) )
      {
        v16 = __asan_report_load_n(v16 + 44, 12LL);
      }
      lhs = *(Vector3f *)(v16 + 44);
      inV = operator+(&lhs, &rhs);
      *(Vector3f *)(v11 + 48) = operator*(0.5, &inV);
      DetailMesh::DetailMesh((DetailMesh *const)(v11 + 560));
      UnpackDetailMesh((DetailMesh *)(v11 + 560), (const NavMeshTile *)(v11 + 688), (const Vector3f *)(v11 + 48));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v11 + 336));
      Matrix4x4f::SetTRInverse((Matrix4x4f *const)(v11 + 336), position, rotation);
      dynamic_array<Plane,false,4ul>::dynamic_array((dynamic_array<Plane,false,4> *const)(v11 + 80));
      dynamic_array<Plane,false,4ul>::reserve((dynamic_array<Plane,false,4> *const)(v11 + 80), 0x20uLL);
      std::vector<DetailHull,stl_allocator<DetailHull,16>>::vector((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 144));
      for ( i = 0; i < shapeCount; ++i )
      {
        NavMeshCarveShape::NavMeshCarveShape((NavMeshCarveShape *const)(v11 + 432));
        v17 = &shapes[i];
        if ( *(_BYTE *)(((unsigned __int64)&v17->shape >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v17 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->shape >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v17->shape);
        }
        *(_DWORD *)(v11 + 436) = v17->shape;
        *(Vector3f *)(v11 + 440) = Matrix4x4f::MultiplyPoint3((const Matrix4x4f *const)(v11 + 336), &shapes[i].center);
        v18 = &shapes[i];
        if ( (((unsigned __int8)v18 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v18->extents >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v18->extents >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v18->extents.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v18 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v18->extents.z + 3) >> 3) + 0x7FFF8000) )
        {
          v18 = (const NavMeshCarveShape *)__asan_report_load_n(&v18->extents, 12LL);
        }
        *(_QWORD *)(v11 + 452) = *(_QWORD *)&v18->extents.x;
        *(float *)(v11 + 460) = v18->extents.z;
        *(Vector3f *)(v11 + 464) = Matrix4x4f::MultiplyVector3((const Matrix4x4f *const)(v11 + 336), &shapes[i].xAxis);
        *(Vector3f *)(v11 + 476) = Matrix4x4f::MultiplyVector3((const Matrix4x4f *const)(v11 + 336), &shapes[i].yAxis);
        *(Vector3f *)(v11 + 488) = Matrix4x4f::MultiplyVector3((const Matrix4x4f *const)(v11 + 336), &shapes[i].zAxis);
        TransformAABBSlow(&shapes[i].bounds, (const Matrix4x4f *)(v11 + 336), (MinMaxAABB *)(v11 + 500));
        validHull = 0;
        if ( *(_DWORD *)(v11 + 436) )
        {
          if ( *(_DWORD *)(v11 + 436) == 1 )
            validHull = CalculateBoxHull(
                          (Hull *)(v11 + 80),
                          (const NavMeshCarveShape *)(v11 + 432),
                          (const Vector3f *)(v11 + 48),
                          carveDepth,
                          carveWidth);
        }
        else
        {
          validHull = CalculateCapsuleHull(
                        (Hull *)(v11 + 80),
                        (const NavMeshCarveShape *)(v11 + 432),
                        (const Vector3f *)(v11 + 48),
                        carveDepth,
                        carveWidth);
        }
        if ( validHull )
        {
          v19 = *(_QWORD *)(v11 + 508);
          *(_QWORD *)(v11 + 208) = *(_QWORD *)(v11 + 500);
          *(_QWORD *)(v11 + 216) = v19;
          *(_QWORD *)(v11 + 224) = *(_QWORD *)(v11 + 516);
          Vector3f::operator-=((Vector3f *const)(v11 + 208), (const Vector3f *)(v11 + 48));
          Vector3f::operator-=((Vector3f *const)(v11 + 220), (const Vector3f *)(v11 + 48));
          Vector3f::Vector3f(&rhs, -carveWidth, -carveDepth, -carveWidth);
          inV = operator*(&rhs, 1.415);
          Vector3f::operator+=((Vector3f *const)(v11 + 208), &inV);
          Vector3f::Vector3f(&rhs, carveWidth, 0.0, carveWidth);
          inV = operator*(&rhs, 1.415);
          Vector3f::operator+=((Vector3f *const)(v11 + 220), &inV);
          std::vector<DetailHull,stl_allocator<DetailHull,16>>::vector((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 272));
          if ( BuildDetailHulls(
                 (DetailHullContainer *)(v11 + 272),
                 (const Hull *)(v11 + 80),
                 (const MinMaxAABB *)(v11 + 208),
                 (const DetailMesh *)(v11 + 560),
                 (const NavMeshTile *)(v11 + 688),
                 (const Vector3f *)(v11 + 48),
                 quantSize) )
          {
            __last = std::vector<DetailHull,stl_allocator<DetailHull,16>>::end((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 272))._M_current;
            M_current = std::vector<DetailHull,stl_allocator<DetailHull,16>>::begin((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 272))._M_current;
            __i._M_current = std::vector<DetailHull,stl_allocator<DetailHull,16>>::end((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 144))._M_current;
            __gnu_cxx::__normal_iterator<DetailHull const*,std::vector<DetailHull,stl_allocator<DetailHull,16>>>::__normal_iterator<DetailHull*>(
              &__position,
              &__i);
            std::vector<DetailHull,stl_allocator<DetailHull,16>>::insert<__gnu_cxx::__normal_iterator<DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16>>>,void>(
              (std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 144),
              __position,
              (__gnu_cxx::__normal_iterator<DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16> > >)M_current,
              (__gnu_cxx::__normal_iterator<DetailHull*,std::vector<DetailHull,stl_allocator<DetailHull,16> > >)__last);
          }
          std::vector<DetailHull,stl_allocator<DetailHull,16>>::~vector((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 272));
        }
      }
      DynamicSihouette::DynamicSihouette(
        (DynamicSihouette *const)(v11 + 912),
        quantSize,
        (const NavMeshTile *)(v11 + 688),
        (const Vector3f *)(v11 + 48));
      if ( !DynamicSihouette::ClipPolys((DynamicSihouette *const)(v11 + 912), (const DetailHullContainer *)(v11 + 144)) )
      {
        v14 = kRestoreTile;
      }
      else
      {
        if ( DynamicSihouette::PolyCount((const DynamicSihouette *const)(v11 + 912)) )
          goto LABEL_44;
        v21 = DynamicSihouette::RemovePolyCount((const DynamicSihouette *const)(v11 + 912));
        v22 = *(_QWORD *)(v11 + 704);
        if ( *(_BYTE *)(((unsigned __int64)(v22 + 20) >> 3) + 0x7FFF8000) != 0
          && (char)(((v22 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v22 + 20) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22 + 20);
        }
        if ( v21 != *(_DWORD *)(v22 + 20) )
LABEL_44:
          v23 = 0;
        else
          v23 = 1;
        if ( v23 )
        {
          v14 = kRemoveTile;
        }
        else
        {
          ProjectNewVerticesToDetailMesh((DynamicSihouette *)(v11 + 912), (const DetailMesh *)(v11 + 560));
          DynamicSihouette::FindNeighbors((DynamicSihouette *const)(v11 + 912));
          dynamic_array<ClippedDetailMesh *,false,8ul>::dynamic_array((dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 272));
          __position._M_current = 0LL;
          v24 = DynamicSihouette::PolyCount((const DynamicSihouette *const)(v11 + 912));
          dynamic_array<ClippedDetailMesh *,false,8ul>::resize_initialized(
            (dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 272),
            v24,
            (ClippedDetailMesh *const *)&__position,
            kIncreaseToExactSize);
          ClipDetailMeshes(
            (dynamic_array<ClippedDetailMesh*,false,8> *)(v11 + 272),
            (const DynamicSihouette *)(v11 + 912),
            (const DetailMesh *)(v11 + 560),
            (const NavMeshTile *)(v11 + 688),
            (const Vector3f *)(v11 + 48),
            quantSize);
          DynamicSihouette::OffsetMeshToTileLocation((DynamicSihouette *const)(v11 + 912));
          v25 = DynamicMeshToTile(
                  tileDataSize,
                  (const DynamicSihouette *)(v11 + 912),
                  (const dynamic_array<ClippedDetailMesh*,false,8> *)(v11 + 272),
                  (const NavMeshTile *)(v11 + 688));
          if ( *(_BYTE *)(((unsigned __int64)tileDataa >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *tileDataa = v25;
          for ( i_0 = 0;
                i_0 < dynamic_array<ClippedDetailMesh *,false,8ul>::size((const dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 272));
                ++i_0 )
          {
            v26 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](
                                      (dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 272),
                                      i_0);
            if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
              v26 = __asan_report_load8(v26, i_0);
            if ( *(_QWORD *)v26 )
            {
              v27 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](
                                        (dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 272),
                                        i_0);
              if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                v27 = __asan_report_load8(v27, i_0);
              delete_internal<ClippedDetailMesh>(*(ClippedDetailMesh **)v27);
              v28 = (unsigned __int64)dynamic_array<ClippedDetailMesh *,false,8ul>::operator[](
                                        (dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 272),
                                        i_0);
              if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
                v28 = __asan_report_store8();
              *(_QWORD *)v28 = 0LL;
            }
          }
          v14 = kReplaceTile;
          dynamic_array<ClippedDetailMesh *,false,8ul>::~dynamic_array((dynamic_array<ClippedDetailMesh*,false,8> *const)(v11 + 272));
        }
      }
      DynamicSihouette::~DynamicSihouette((DynamicSihouette *const)(v11 + 912));
      std::vector<DetailHull,stl_allocator<DetailHull,16>>::~vector((std::vector<DetailHull,stl_allocator<DetailHull,16> > *const)(v11 + 144));
      dynamic_array<Plane,false,4ul>::~dynamic_array((dynamic_array<Plane,false,4> *const)(v11 + 80));
      DetailMesh::~DetailMesh((DetailMesh *const)(v11 + 560));
    }
  }
  else
  {
    v14 = kRestoreTile;
  }
  if ( v47 == (char *)v11 )
  {
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v11 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v11 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8488) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8490) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8498) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF84A0) = 0LL;
    *(_DWORD *)((v11 >> 3) + 0x7FFF84A8) = 0;
  }
  else
  {
    *(_QWORD *)v11 = 1172321806LL;
    __asan_stack_free_8(v11, 9568LL, v47);
  }
  return v14;
};
