// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp

// Line 34: range 000000000CC77DB8-000000000CC77F39
void __cdecl NavMeshCarving::NavMeshCarving(NavMeshCarving *const this, DynamicNavMesh *dynamicNavMesh)
{
  int (**v2)(...); // rdx
  std::less<int> comp; // [rsp+1Eh] [rbp-12h] BYREF
  stl_allocator<int,16> a; // [rsp+1Fh] [rbp-11h] BYREF

  ICarving::ICarving(this);
  v2 = (int (**)(...))(&`vtable for'NavMeshCarving + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ICarving = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_DynamicNavMesh = 0LL;
  stl_allocator<int,16>::stl_allocator(&a);
  vector_set<int,std::less<int>,stl_allocator<int,16>>::vector_set(&this->m_DirtySurfaces, &comp, &a);
  stl_allocator<int,16>::~stl_allocator(&a);
  std::vector<CarveData,stl_allocator<CarveData,16>>::vector(&this->m_TileCarveData);
  dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::dynamic_array(&this->m_ObstacleInfo);
  dynamic_array<int,true,4ul>::dynamic_array(&this->m_ObstacleFreelist);
  dynamic_array<MinMaxAABB,true,4ul>::dynamic_array(&this->m_DirtyBounds);
  dynamic_array<CarveResult,true,8ul>::dynamic_array(&this->m_CarveResults);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_DynamicNavMesh = dynamicNavMesh;
};

// Line 39: range 000000000CC77F3A-000000000CC77FE9
void __cdecl NavMeshCarving::~NavMeshCarving(NavMeshCarving *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NavMeshCarving + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ICarving = v1;
  dynamic_array<CarveResult,true,8ul>::~dynamic_array(&this->m_CarveResults);
  dynamic_array<MinMaxAABB,true,4ul>::~dynamic_array(&this->m_DirtyBounds);
  dynamic_array<int,true,4ul>::~dynamic_array(&this->m_ObstacleFreelist);
  dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::~dynamic_array(&this->m_ObstacleInfo);
  std::vector<CarveData,stl_allocator<CarveData,16>>::~vector(&this->m_TileCarveData);
  vector_set<int,std::less<int>,stl_allocator<int,16>>::~vector_set(&this->m_DirtySurfaces);
  ICarving::~ICarving(this);
};

// Line 39: range 000000000CC77FEA-000000000CC78014
void __cdecl NavMeshCarving::~NavMeshCarving(NavMeshCarving *const this)
{
  NavMeshCarving::~NavMeshCarving(this);
  operator delete(this, 0xA0uLL);
};

// Line 45: range 000000000CC78016-000000000CC78066
void __cdecl NavMeshCarving::ClearAll(NavMeshCarving *const this)
{
  dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::clear(&this->m_ObstacleInfo);
  dynamic_array<int,true,4ul>::clear(&this->m_ObstacleFreelist);
  dynamic_array<MinMaxAABB,true,4ul>::clear(&this->m_DirtyBounds);
  dynamic_array<CarveResult,true,8ul>::clear(&this->m_CarveResults);
};

// Line 54: range 000000000CC78068-000000000CC782E9
void __cdecl NavMeshCarving::AddObstacle(NavMeshCarving *const this, NavMeshObstacle *obstacle, int *handle)
{
  int *v3; // rax
  int *v4; // rdx
  int v5; // ecx
  int v6; // edi
  dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8> *p_m_ObstacleInfo; // rcx
  NavMeshCarving *thisa; // [rsp+18h] [rbp-18h]
  NavMeshCarving::ObstacleCarveInfo *info; // [rsp+28h] [rbp-8h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshCarving *const)handle;
    __asan_report_load4(handle);
  }
  if ( *handle != -1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "handle == -1",
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      0x37u,
      "virtual void NavMeshCarving::AddObstacle(NavMeshObstacle&, int&)");
  }
  if ( !dynamic_array<int,true,4ul>::empty(&thisa->m_ObstacleFreelist) )
  {
    v3 = dynamic_array<int,true,4ul>::back(&thisa->m_ObstacleFreelist);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(handle);
    }
    *handle = v5;
    dynamic_array<int,true,4ul>::pop_back(&thisa->m_ObstacleFreelist);
  }
  else
  {
    v6 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::size(&thisa->m_ObstacleInfo);
    if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
    {
      v6 = (int)handle;
      __asan_report_store4(handle);
    }
    *handle = v6;
    dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::push_back(&thisa->m_ObstacleInfo);
  }
  p_m_ObstacleInfo = &thisa->m_ObstacleInfo;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(handle);
  }
  info = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](p_m_ObstacleInfo, *handle);
  if ( *(_BYTE *)(((unsigned __int64)&info->obstacle >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  info->obstacle = obstacle;
  if ( *(_BYTE *)(((unsigned __int64)&info->versionStamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&info->versionStamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&info->versionStamp);
  }
  info->versionStamp = -1;
  MinMaxAABB::Init(&info->bounds);
  memset(info, 0, 0x5CuLL);
};

// Line 74: range 000000000CC782EA-000000000CC784BF
void __cdecl NavMeshCarving::RemoveObstacle(NavMeshCarving *const this, int *handle)
{
  int v2; // ebx
  dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8> *p_m_ObstacleInfo; // rcx
  __int64 v4; // rax
  dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8> *v5; // rcx
  NavMeshCarving::ObstacleCarveInfo *v6; // rax
  NavMeshCarving *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    this = (NavMeshCarving *const)handle;
    __asan_report_load4(handle);
  }
  if ( *handle < 0
    || (v2 = *handle,
        this = (NavMeshCarving *const)&thisa->m_ObstacleInfo,
        v2 >= (int)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::size(&thisa->m_ObstacleInfo)) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "handle >= 0 && handle < (int)m_ObstacleInfo.size()",
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      0x4Bu,
      "virtual void NavMeshCarving::RemoveObstacle(int&)");
  }
  p_m_ObstacleInfo = &thisa->m_ObstacleInfo;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(handle);
  }
  v4 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](p_m_ObstacleInfo, *handle);
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 120) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 + 120) = 0LL;
  v5 = &thisa->m_ObstacleInfo;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(handle);
  }
  v6 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](v5, *handle);
  dynamic_array<MinMaxAABB,true,4ul>::push_back(&thisa->m_DirtyBounds, &v6->bounds);
  dynamic_array<int,true,4ul>::push_back(&thisa->m_ObstacleFreelist, handle);
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(handle);
  }
  *handle = -1;
};

// Line 83: range 000000000CC784C0-000000000CC78590
void __fastcall NavMeshCarving::SetSurfaceDirty(NavMeshCarving *const this, int surfaceID)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 surfaceID:82";
  *(_QWORD *)(v2 + 16) = NavMeshCarving::SetSurfaceDirty;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = surfaceID;
  vector_set<int,std::less<int>,stl_allocator<int,16>>::insert(
    &this->m_DirtySurfaces,
    (const vector_set<int,std::less<int>,stl_allocator<int,16> >::value_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 88: range 000000000CC78592-000000000CC78654
void __cdecl NavMeshCarving::PrepareCarving(NavMeshCarving *const this)
{
  __int64 v1; // rsi
  size_t v2; // rax
  CarveResult t; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicNavMesh, v1);
  NavMeshCarving::DoPrepareCarving(
    &this->m_ObstacleInfo,
    &this->m_TileCarveData,
    &this->m_DirtySurfaces,
    &this->m_DirtyBounds,
    this->m_DynamicNavMesh);
  memset(&t, 0, sizeof(t));
  v2 = std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData);
  dynamic_array<CarveResult,true,8ul>::resize_initialized(&this->m_CarveResults, v2, &t, kIncreaseToExactSize);
};

// Line 168: range 000000000CC78655-000000000CC78B83
// local variable allocation has failed, the output may be wrong!
void __cdecl CarveJobMultithreaded(CarveJobInfo *info, unsigned int i, DynamicNavMesh *dynamicNavMesh)
{
  float *p_agentHeight; // rax
  NavMeshCarveShape *v4; // rbx
  NavMeshCarveShape *v5; // rax
  int v6; // r13d
  NavMeshCarveShape *v7; // r8
  CarveResultStatus v8; // edi
  int *p_x; // rax
  int x; // ecx
  int y; // ecx
  int surfaceID; // [rsp+24h] [rbp-6Ch]
  int tileIndex; // [rsp+28h] [rbp-68h]
  float height; // [rsp+2Ch] [rbp-64h]
  float radius; // [rsp+30h] [rbp-60h]
  float quantSize; // [rsp+38h] [rbp-58h]
  int sourceDataSize; // [rsp+3Ch] [rbp-54h]
  CarveData *carveData; // [rsp+40h] [rbp-50h]
  CarveResult *res; // [rsp+48h] [rbp-48h]
  const NavMeshTileData *sourceTile; // [rsp+50h] [rbp-40h]
  const NavMeshBuildSettings *settings; // [rsp+58h] [rbp-38h]
  const unsigned __int8 *sourceData; // [rsp+60h] [rbp-30h]
  NavMeshDataHeader *header; // [rsp+68h] [rbp-28h]

  if ( *(_BYTE *)(((unsigned __int64)&info->carveDatas >> 3) + 0x7FFF8000) )
    __asan_report_load8(&info->carveDatas, *(_QWORD *)&i);
  carveData = &info->carveDatas[(unsigned __int64)i];
  if ( *(_BYTE *)(((unsigned __int64)carveData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)carveData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(carveData);
  }
  surfaceID = carveData->m_SurfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&carveData->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)carveData + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&carveData->m_TileDataIndex >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&carveData->m_TileDataIndex);
  }
  tileIndex = carveData->m_TileDataIndex;
  if ( *(_BYTE *)(((unsigned __int64)&info->results >> 3) + 0x7FFF8000) )
    __asan_report_load8(&info->results, (((_BYTE)carveData + 4) & 7u) + 3);
  res = &info->results[i];
  if ( *(_BYTE *)(((unsigned __int64)&res->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->status);
  }
  res->status = 2;
  if ( *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  res->carvedData = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&res->carvedDataSize >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&res->carvedDataSize >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&res->carvedDataSize);
  }
  res->carvedDataSize = 0;
  sourceTile = DynamicNavMesh::GetSourceTileData(dynamicNavMesh, surfaceID, tileIndex);
  if ( sourceTile )
  {
    settings = DynamicNavMesh::GetNavMeshBuildSettings(dynamicNavMesh, surfaceID);
    p_agentHeight = &settings->agentHeight;
    if ( *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_agentHeight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_agentHeight);
    }
    height = settings->agentHeight;
    if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&settings->agentRadius);
    }
    radius = settings->agentRadius;
    if ( *(_BYTE *)(((unsigned __int64)&settings->cellSize >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)settings + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->cellSize >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&settings->cellSize);
    }
    quantSize = settings->cellSize / 64.0;
    sourceData = dynamic_array<unsigned char,false,1ul>::begin(&sourceTile->m_MeshData);
    sourceDataSize = dynamic_array<unsigned char,false,1ul>::size(&sourceTile->m_MeshData);
    v4 = dynamic_array<NavMeshCarveShape,true,4ul>::end(&carveData->m_Shapes);
    v5 = dynamic_array<NavMeshCarveShape,true,4ul>::begin(&carveData->m_Shapes);
    std::sort<NavMeshCarveShape *,bool (*)(NavMeshCarveShape const&,NavMeshCarveShape const&)>(
      v5,
      v4,
      (bool (*)(const NavMeshCarveShape *, const NavMeshCarveShape *))CompareCarveShapes);
    v6 = dynamic_array<NavMeshCarveShape,true,4ul>::size(&carveData->m_Shapes);
    v7 = dynamic_array<NavMeshCarveShape,true,4ul>::begin(&carveData->m_Shapes);
    v8 = CarveNavMeshTile(
           &res->carvedData,
           &res->carvedDataSize,
           sourceData,
           sourceDataSize,
           v7,
           v6,
           height,
           radius,
           quantSize,
           &carveData->m_Position,
           &carveData->m_Rotation);
    if ( *(_BYTE *)(((unsigned __int64)&res->status >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)res + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->status >> 3) + 0x7FFF8000) )
    {
      v8 = (_DWORD)res + 12;
      __asan_report_store4(&res->status);
    }
    res->status = v8;
    header = (NavMeshDataHeader *)dynamic_array<unsigned char,false,1ul>::begin(&sourceTile->m_MeshData);
    p_x = &header->x;
    if ( *(_BYTE *)(((unsigned __int64)p_x >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_x & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_x >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_x);
    }
    x = header->x;
    if ( *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&res->x);
    }
    res->x = x;
    if ( *(_BYTE *)(((unsigned __int64)&header->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)header + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&header->y);
    }
    y = header->y;
    if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)res + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&res->y);
    }
    res->y = y;
  }
};

// Line 207: range 000000000CC78B84-000000000CC78BB6
void __cdecl NavMeshCarving::Carving(NavMeshCarving *const this)
{
  NavMeshCarving::PrepareCarving(this);
  NavMeshCarving::Carve(this);
  NavMeshCarving::ApplyCarveResults(this);
};

// Line 214: range 000000000CC78BB8-000000000CC78DC6
void __cdecl NavMeshCarving::Carve(NavMeshCarving *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<CarveData,stl_allocator<CarveData,16> >::size_type v4; // r14
  __int64 v5; // rsi
  int i; // [rsp+1Ch] [rbp-94h]
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 8 info:218";
  *(_QWORD *)(v1 + 16) = NavMeshCarving::Carve;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  v4 = std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData);
  if ( v4 != dynamic_array<CarveResult,true,8ul>::size(&this->m_CarveResults) )
  {
    __asan_handle_no_return(&this->m_CarveResults);
    __assert_fail(
      "m_TileCarveData.size() == m_CarveResults.size()",
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      0xD7u,
      "void NavMeshCarving::Carve()");
  }
  if ( !std::vector<CarveData,stl_allocator<CarveData,16>>::empty(&this->m_TileCarveData) )
  {
    *(_DWORD *)(v1 + 32) = std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData);
    *(_QWORD *)(v1 + 40) = std::vector<CarveData,stl_allocator<CarveData,16>>::operator[](&this->m_TileCarveData, 0LL);
    v5 = 0LL;
    *(_QWORD *)(v1 + 48) = dynamic_array<CarveResult,true,8ul>::operator[](&this->m_CarveResults, 0LL);
    for ( i = 0; i < *(_DWORD *)(v1 + 32); ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_DynamicNavMesh, v5);
      v5 = (unsigned int)i;
      CarveJobMultithreaded((CarveJobInfo *)(v1 + 32), i, this->m_DynamicNavMesh);
    }
  }
  if ( v7 == (char *)v1 )
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

// Line 232: range 000000000CC78DC8-000000000CC792B6
void __cdecl NavMeshCarving::ApplyCarveResults(NavMeshCarving *const this)
{
  std::vector<CarveData,stl_allocator<CarveData,16> >::size_type v1; // rbx
  dynamic_array<CarveResult,true,8> *p_m_CarveResults; // rdi
  dynamic_array<CarveResult,true,8> *v3; // rdi
  int *p_status; // rax
  __int64 v5; // rsi
  DynamicNavMesh *m_DynamicNavMesh; // rdi
  int y; // esi
  DynamicNavMesh *p_x; // rdi
  int v9; // esi
  DynamicNavMesh *p_y; // rdi
  int v11; // esi
  int surfaceID; // [rsp+1Ch] [rbp-34h]
  int tileIndex; // [rsp+20h] [rbp-30h]
  CarveResultStatus status; // [rsp+24h] [rbp-2Ch]
  size_t i; // [rsp+28h] [rbp-28h]
  std::vector<CarveData,stl_allocator<CarveData,16> >::reference carveData; // [rsp+30h] [rbp-20h]
  CarveResult *res; // [rsp+38h] [rbp-18h]

  v1 = std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData);
  p_m_CarveResults = &this->m_CarveResults;
  if ( v1 != dynamic_array<CarveResult,true,8ul>::size(p_m_CarveResults) )
  {
    __asan_handle_no_return(p_m_CarveResults);
    __assert_fail(
      "m_TileCarveData.size() == m_CarveResults.size()",
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      0xECu,
      "void NavMeshCarving::ApplyCarveResults()");
  }
  for ( i = 0LL; i < std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData); ++i )
  {
    carveData = std::vector<CarveData,stl_allocator<CarveData,16>>::operator[](&this->m_TileCarveData, i);
    if ( *(_BYTE *)(((unsigned __int64)carveData >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)carveData >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(carveData);
    }
    surfaceID = carveData->m_SurfaceID;
    if ( *(_BYTE *)(((unsigned __int64)&carveData->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)carveData + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&carveData->m_TileDataIndex >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&carveData->m_TileDataIndex);
    }
    tileIndex = carveData->m_TileDataIndex;
    v3 = &this->m_CarveResults;
    res = dynamic_array<CarveResult,true,8ul>::operator[](&this->m_CarveResults, i);
    p_status = &res->status;
    v5 = (((_BYTE)res + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_status & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) )
    {
      v3 = (dynamic_array<CarveResult,true,8> *)&res->status;
      __asan_report_load4(p_status);
    }
    status = res->status;
    if ( status == kRestoreTile )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_DynamicNavMesh, v5);
      m_DynamicNavMesh = this->m_DynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)res + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
      {
        m_DynamicNavMesh = (DynamicNavMesh *)&res->y;
        __asan_report_load4(&res->y);
      }
      y = res->y;
      if ( *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) <= 3 )
      {
        m_DynamicNavMesh = (DynamicNavMesh *)&res->x;
        __asan_report_load4(&res->x);
      }
      DynamicNavMesh::RestoreTile(m_DynamicNavMesh, surfaceID, tileIndex, res->x, y);
    }
    else if ( status )
    {
      if ( status != kRemoveTile )
      {
        __asan_handle_no_return(v3);
        __assert_fail(
          "status == kRemoveTile",
          "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
          0x106u,
          "void NavMeshCarving::ApplyCarveResults()");
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_DynamicNavMesh, v5);
      p_y = this->m_DynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)res + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
      {
        p_y = (DynamicNavMesh *)&res->y;
        __asan_report_load4(&res->y);
      }
      v11 = res->y;
      if ( *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) <= 3 )
      {
        p_y = (DynamicNavMesh *)&res->x;
        __asan_report_load4(&res->x);
      }
      DynamicNavMesh::RemoveTile(p_y, surfaceID, tileIndex, res->x, v11);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_DynamicNavMesh, v5);
      p_x = this->m_DynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)res + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
      {
        p_x = (DynamicNavMesh *)&res->y;
        __asan_report_load4(&res->y);
      }
      v9 = res->y;
      if ( *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) <= 3 )
      {
        p_x = (DynamicNavMesh *)&res->x;
        __asan_report_load4(&res->x);
      }
      DynamicNavMesh::RemoveTile(p_x, surfaceID, tileIndex, res->x, v9);
      if ( *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) )
        __asan_report_load8(res, (unsigned __int16)surfaceID);
      if ( res->carvedData )
      {
        if ( *(_BYTE *)(((unsigned __int64)&res->carvedDataSize >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&res->carvedDataSize >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&res->carvedDataSize);
        }
        if ( res->carvedDataSize > 0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_DynamicNavMesh, (unsigned __int16)surfaceID);
          DynamicNavMesh::ReplaceTile(
            this->m_DynamicNavMesh,
            surfaceID,
            tileIndex,
            res->carvedData,
            res->carvedDataSize);
        }
      }
    }
  }
  std::vector<CarveData,stl_allocator<CarveData,16>>::clear(&this->m_TileCarveData);
  dynamic_array<CarveResult,true,8ul>::clear(&this->m_CarveResults);
};

// Line 272: range 000000000CC79A14-000000000CC7A8A2
void __cdecl NavMeshCarving::DoPrepareCarving(
        dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8> *obstacleInfo,
        NavMeshCarving::CarveDatVector *tileCarvedData,
        NavMeshCarving::DirtySurfaceVector *dirtySurfaces,
        dynamic_array<MinMaxAABB,true,4> *dirtyBounds,
        DynamicNavMesh *dynamicNavMesh)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  size_t v9; // rsi
  __int64 v10; // rax
  NavMeshCarving::ObstacleCarveInfo *v11; // rax
  int versionStamp; // r14d
  size_t v13; // rsi
  __int64 v14; // rax
  MinMaxAABB *p_bounds; // rsi
  size_t v16; // rsi
  __int64 v17; // rax
  int v18; // r14d
  NavMeshCarving::ObstacleCarveInfo *v19; // rax
  NavMeshCarving::ObstacleCarveInfo *v20; // rax
  MinMaxAABB *v21; // rdx
  size_t v22; // rsi
  __int64 v23; // rax
  NavMeshCarving::ObstacleCarveInfo *n; // rax
  NavMeshCarveShape *v25; // rdx
  __int64 v26; // rdi
  NavMeshCarving::ObstacleCarveInfo *v27; // rax
  MinMaxAABB *v28; // rsi
  __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer v30; // rax
  __int64 v31; // rdi
  __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer v32; // rax
  __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer v33; // rdx
  Quaternionf *p_rotation; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  size_t v37; // rax
  size_t v38; // rsi
  std::less<LocationCacheKeyData> comp; // [rsp+3Ch] [rbp-2B4h] BYREF
  std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > a; // [rsp+3Dh] [rbp-2B3h] BYREF
  bool cachedIsDirty; // [rsp+3Fh] [rbp-2B1h]
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __lhs; // [rsp+40h] [rbp-2B0h] BYREF
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __rhs; // [rsp+48h] [rbp-2A8h] BYREF
  size_t i; // [rsp+50h] [rbp-2A0h]
  size_t j; // [rsp+58h] [rbp-298h]
  size_t obstacleCount; // [rsp+60h] [rbp-290h]
  NavMeshCarveShape *shape; // [rsp+68h] [rbp-288h]
  LocationCacheKeyData *infoKey; // [rsp+70h] [rbp-280h]
  NavMeshCarving::ObstacleCarveInfo *info; // [rsp+78h] [rbp-278h]
  char v56[624]; // [rsp+80h] [rbp-270h] BYREF

  v5 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(576LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 32 8 31 insertObstacleShapeCallback:295 64 8 21 dirtyAABBCallback:307 96 8 8 iter:357 128 8 7"
                        " end:357 160 24 21 dirtySurfaceAABBs:283 224 24 16 updateBounds:289 288 24 14 dummyempty:294 352"
                        " 24 19 worldTileBounds:360 416 32 13 locations:285 480 64 13 carveData:364";
  *(_QWORD *)(v5 + 16) = NavMeshCarving::DoPrepareCarving;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -234881024;
  v7[536862726] = -218959118;
  v7[536862727] = -234881024;
  v7[536862728] = -218959118;
  v7[536862729] = -234881024;
  v7[536862730] = -218959118;
  v7[536862731] = -234881024;
  v7[536862732] = -218959118;
  v7[536862734] = -218959118;
  v7[536862737] = -202116109;
  if ( !std::vector<CarveData,stl_allocator<CarveData,16>>::empty(tileCarvedData) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      "DoPrepareCarving",
      273);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v5 + 416),
      "Previously prepared Carve Data is unprocessed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 416));
    __asan_handle_no_return(v5 + 416);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      0x111u,
      "static void NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo, true>&, NavMeshCarvi"
      "ng::CarveDatVector&, NavMeshCarving::DirtySurfaceVector&, dynamic_array<MinMaxAABB, true>&, DynamicNavMesh*)");
  }
  if ( !dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::empty(obstacleInfo)
    || !dynamic_array<MinMaxAABB,true,4ul>::empty(dirtyBounds) )
  {
    dynamic_array<MinMaxAABB,false,4ul>::dynamic_array((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 160));
    std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>::allocator(&a);
    vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::vector_map(
      (vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 416),
      &comp,
      &a);
    std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>::~allocator(&a);
    dynamic_array<MinMaxAABB,true,4ul>::dynamic_array((dynamic_array<MinMaxAABB,true,4> *const)(v5 + 224));
    obstacleCount = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::size(obstacleInfo);
    stl_allocator<int,16>::stl_allocator((stl_allocator<int,16> *const)&a);
    vector_set<int,std::less<int>,stl_allocator<int,16>>::vector_set(
      (vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 288),
      (const std::less<int> *)&comp,
      (const stl_allocator<int,16> *)&a);
    stl_allocator<int,16>::~stl_allocator((stl_allocator<int,16> *const)&a);
    *(_QWORD *)(v5 + 32) = v5 + 416;
    *(_QWORD *)(v5 + 64) = v5 + 416;
    for ( i = 0LL; i < obstacleCount; ++i )
    {
      v9 = i;
      v10 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 120) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10 + 120, v9);
      if ( *(_QWORD *)(v10 + 120) )
      {
        v11 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
        if ( *(_BYTE *)(((unsigned __int64)&v11->versionStamp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->versionStamp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v11->versionStamp);
        }
        versionStamp = v11->versionStamp;
        v13 = i;
        v14 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
        if ( *(_BYTE *)(((unsigned __int64)(v14 + 120) >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(v14 + 120, v13);
        if ( versionStamp == NavMeshObstacle::GetVersionStamp(*(const NavMeshObstacle *const *)(v14 + 120)) )
        {
          if ( !vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(dirtySurfaces) )
          {
            p_bounds = &dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i)->bounds;
            DynamicNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh*)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
              dynamicNavMesh,
              p_bounds,
              dirtySurfaces,
              (NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *)(v5 + 32));
          }
        }
        else
        {
          v16 = i;
          v17 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)(v17 + 120) >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8(v17 + 120, v16);
          v18 = NavMeshObstacle::GetVersionStamp(*(const NavMeshObstacle *const *)(v17 + 120));
          v19 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)&v19->versionStamp >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v19->versionStamp >> 3) + 0x7FFF8000) <= 3 )
          {
            v19 = (NavMeshCarving::ObstacleCarveInfo *)__asan_report_store4(&v19->versionStamp);
          }
          v19->versionStamp = v18;
          v20 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( MinMaxAABB::IsValid(&v20->bounds) )
          {
            v21 = &dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i)->bounds;
            dynamic_array<MinMaxAABB,true,4ul>::push_back(dirtyBounds, v21);
          }
          shape = (NavMeshCarveShape *)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](
                                         obstacleInfo,
                                         i);
          v22 = i;
          v23 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)(v23 + 120) >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8(v23 + 120, v22);
          NavMeshObstacle::GetCarveShape(*(const NavMeshObstacle *const *)(v23 + 120), shape);
          n = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( (((unsigned __int8)n + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&n->bounds >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&n->bounds >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&n->bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)n + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&n->bounds.m_Max.z + 3) >> 3)
                                                            + 0x7FFF8000) )
          {
            n = (NavMeshCarving::ObstacleCarveInfo *)__asan_report_store_n(&n->bounds, 24LL);
          }
          if ( (((unsigned __int8)shape + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&shape->bounds >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&shape->bounds >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&shape->bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)shape + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&shape->bounds.m_Max.z + 3) >> 3)
                                                               + 0x7FFF8000) )
          {
            n = (NavMeshCarving::ObstacleCarveInfo *)__asan_report_load_n(&shape->bounds, 24LL);
          }
          v25 = shape;
          v26 = *(_QWORD *)&shape->bounds.m_Min.z;
          *(_QWORD *)&n->bounds.m_Min.x = *(_QWORD *)&shape->bounds.m_Min.x;
          *(_QWORD *)&n->bounds.m_Min.z = v26;
          *(_QWORD *)&n->bounds.m_Max.y = *(_QWORD *)&v25->bounds.m_Max.y;
          v27 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          dynamic_array<MinMaxAABB,true,4ul>::push_back(
            (dynamic_array<MinMaxAABB,true,4> *const)(v5 + 224),
            &v27->bounds);
          v28 = &dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i)->bounds;
          DynamicNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh*)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
            dynamicNavMesh,
            v28,
            (const vector_set<int,std::less<int>,stl_allocator<int,16> > *)(v5 + 288),
            (NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *)(v5 + 32));
        }
      }
    }
    if ( !vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::empty((const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 416))
      || !dynamic_array<MinMaxAABB,true,4ul>::empty(dirtyBounds)
      || !vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(dirtySurfaces) )
    {
      DynamicNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh*)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>(
        dynamicNavMesh,
        dirtyBounds,
        (const vector_set<int,std::less<int>,stl_allocator<int,16> > *)(v5 + 288),
        (NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *)(v5 + 64));
      *(vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator *)(v5 + 96) = vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::begin((vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 416));
      *(vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator *)(v5 + 128) = vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::end((vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 416));
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>(
                (const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *)(v5 + 96),
                (const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *)(v5 + 128)) )
        {
          vector_set<int,std::less<int>,stl_allocator<int,16>>::clear(dirtySurfaces);
          dynamic_array<MinMaxAABB,true,4ul>::resize_uninitialized(dirtyBounds, 0LL, kIncreaseToExactSize);
          goto LABEL_70;
        }
        infoKey = (LocationCacheKeyData *)__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
        v30 = __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
        if ( (((unsigned __int8)v30 + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&v30->second >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v30->second >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v30->second.bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v30 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v30->second.bounds.m_Max.z + 3) >> 3)
                                                           + 0x7FFF8000) )
        {
          v30 = (__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer)__asan_report_load_n(&v30->second, 24LL);
        }
        v31 = *(_QWORD *)&v30->second.bounds.m_Min.z;
        *(_QWORD *)(v5 + 352) = *(_QWORD *)&v30->second.bounds.m_Min.x;
        *(_QWORD *)(v5 + 360) = v31;
        *(_QWORD *)(v5 + 368) = *(_QWORD *)&v30->second.bounds.m_Max.y;
        __rhs._M_current = vector_set<int,std::less<int>,stl_allocator<int,16>>::end(dirtySurfaces)._M_current;
        __lhs._M_current = vector_set<int,std::less<int>,stl_allocator<int,16>>::find(
                             dirtySurfaces,
                             (const vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type *)infoKey)._M_current;
        cachedIsDirty = __gnu_cxx::operator!=<int *,std::vector<int,stl_allocator<int,16>>>(&__lhs, &__rhs);
        if ( *(_BYTE *)(((unsigned __int64)infoKey >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)infoKey & 7) + 3) >= *(_BYTE *)(((unsigned __int64)infoKey >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(infoKey);
        }
        CarveData::CarveData((CarveData *const)(v5 + 480), infoKey->surfaceID);
        v32 = __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
        if ( (((unsigned __int8)v32 + 32) & 7) >= *(_BYTE *)(((unsigned __int64)&v32->second.position >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v32->second.position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v32->second.position.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v32 + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&v32->second.position.z + 3) >> 3)
                                                           + 0x7FFF8000) )
        {
          v32 = (__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer)__asan_report_load_n(&v32->second.position, 12LL);
        }
        *(_QWORD *)(v5 + 488) = *(_QWORD *)&v32->second.position.x;
        *(float *)(v5 + 496) = v32->second.position.z;
        v33 = __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
        p_rotation = &v33->second.rotation;
        if ( ((unsigned __int8)p_rotation & 7) >= *(_BYTE *)(((unsigned __int64)p_rotation >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)p_rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&p_rotation->w + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p_rotation + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&p_rotation->w + 3) >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load_n(p_rotation, 16LL);
        }
        v35 = *(_QWORD *)&v33->second.rotation.x;
        v36 = *(_QWORD *)&v33->second.rotation.z;
        *(_QWORD *)(v5 + 500) = v35;
        *(_QWORD *)(v5 + 508) = v36;
        if ( *(_BYTE *)(((unsigned __int64)&infoKey->tileDataIndex >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)infoKey + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&infoKey->tileDataIndex >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&infoKey->tileDataIndex);
        }
        *(_DWORD *)(v5 + 484) = infoKey->tileDataIndex;
        if ( !cachedIsDirty )
          break;
        for ( j = 0LL; ; ++j )
        {
          v37 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::size(obstacleInfo);
          if ( j >= v37 )
            break;
          v38 = j;
          info = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, j);
          if ( *(_BYTE *)(((unsigned __int64)&info->obstacle >> 3) + 0x7FFF8000) )
            __asan_report_load8(&info->obstacle, v38);
          if ( info->obstacle && IntersectAABBAABB(&info->bounds, (const MinMaxAABB *)(v5 + 352)) )
            CarveData::AddShape((CarveData *const)(v5 + 480), &info->shape);
        }
        if ( !CarveData::Empty((const CarveData *const)(v5 + 480)) )
          goto LABEL_67;
LABEL_68:
        CarveData::~CarveData((CarveData *const)(v5 + 480));
        __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
      }
      if ( !NavMeshCarving::NeedsUpdateCollectCarveData(
              (CarveData *)(v5 + 480),
              (const MinMaxAABB *)(v5 + 352),
              (const dynamic_array<MinMaxAABB,true,4> *)(v5 + 224),
              dirtyBounds,
              obstacleInfo) )
        goto LABEL_68;
LABEL_67:
      std::vector<CarveData,stl_allocator<CarveData,16>>::push_back(
        tileCarvedData,
        (const std::vector<CarveData,stl_allocator<CarveData,16> >::value_type *)(v5 + 480));
      goto LABEL_68;
    }
LABEL_70:
    vector_set<int,std::less<int>,stl_allocator<int,16>>::~vector_set((vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 288));
    dynamic_array<MinMaxAABB,true,4ul>::~dynamic_array((dynamic_array<MinMaxAABB,true,4> *const)(v5 + 224));
    vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::~vector_map((vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 416));
    dynamic_array<MinMaxAABB,false,4ul>::~dynamic_array((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 160));
  }
  if ( v56 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8044) = 0;
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
  }
};

// Line 295: range 000000000CC792B8-000000000CC79664
void __cdecl NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}::operator()(
        const NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *const __closure,
        const TileLocation *tile,
        const Vector3f *surfPosition,
        const Quaternionf *surfRotation)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdx
  vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *locations; // r14
  std::pair<LocationCacheKeyData,LocationCacheData> v14; // [rsp+20h] [rbp-110h] BYREF
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 7 key:297 64 52 8 data:300";
  *(_QWORD *)(v4 + 16) = NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862723] = -217841664;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->m_SurfaceID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile + 24) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&tile->m_SurfaceID >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&tile->m_SurfaceID);
  }
  *(_DWORD *)(v4 + 32) = tile->m_SurfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&tile->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->m_TileDataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->m_TileDataIndex);
  }
  *(_DWORD *)(v4 + 36) = tile->m_TileDataIndex;
  LocationCacheData::LocationCacheData((LocationCacheData *const)(v4 + 64));
  if ( ((unsigned __int8)tile & 7) >= *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&tile->m_Bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)tile + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->m_Bounds.m_Max.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(tile, 24LL);
  }
  v7 = *(_QWORD *)&tile->m_Bounds.m_Min.z;
  *(_QWORD *)(v4 + 64) = *(_QWORD *)&tile->m_Bounds.m_Min.x;
  *(_QWORD *)(v4 + 72) = v7;
  *(_QWORD *)(v4 + 80) = *(_QWORD *)&tile->m_Bounds.m_Max.y;
  if ( ((unsigned __int8)surfPosition & 7) >= *(_BYTE *)(((unsigned __int64)surfPosition >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)surfPosition >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&surfPosition->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)surfPosition + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&surfPosition->z + 3) >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load_n(surfPosition, 12LL);
  }
  *(_QWORD *)(v4 + 88) = *(_QWORD *)&surfPosition->x;
  *(float *)(v4 + 96) = surfPosition->z;
  v8 = *(_BYTE *)((((unsigned __int64)&surfRotation->w + 3) >> 3) + 0x7FFF8000);
  v9 = v8 != 0;
  if ( (((unsigned __int8)surfRotation & 7) >= *(_BYTE *)(((unsigned __int64)surfRotation >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)surfRotation >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v9 & ((((unsigned __int8)surfRotation + 15) & 7) >= v8) )
  {
    v9 = 16LL;
    __asan_report_load_n(surfRotation, 16LL);
  }
  v10 = *(_QWORD *)&surfRotation->z;
  *(_QWORD *)(v4 + 100) = *(_QWORD *)&surfRotation->x;
  *(_QWORD *)(v4 + 108) = v10;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure, v9);
  locations = __closure->__locations;
  std::make_pair<LocationCacheKeyData &,LocationCacheData &>(
    &v14,
    (LocationCacheKeyData *)(v4 + 32),
    (LocationCacheData *)(v4 + 64));
  vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::insert(
    locations,
    &v14);
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 307: range 000000000CC79666-000000000CC79A12
void __cdecl NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}::operator()(
        const NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *const __closure,
        const TileLocation *tile,
        const Vector3f *surfPosition,
        const Quaternionf *surfRotation)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdx
  vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *locations; // r14
  std::pair<LocationCacheKeyData,LocationCacheData> v14; // [rsp+20h] [rbp-110h] BYREF
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 7 key:309 64 52 8 data:312";
  *(_QWORD *)(v4 + 16) = NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862723] = -217841664;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->m_SurfaceID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile + 24) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&tile->m_SurfaceID >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&tile->m_SurfaceID);
  }
  *(_DWORD *)(v4 + 32) = tile->m_SurfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&tile->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->m_TileDataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->m_TileDataIndex);
  }
  *(_DWORD *)(v4 + 36) = tile->m_TileDataIndex;
  LocationCacheData::LocationCacheData((LocationCacheData *const)(v4 + 64));
  if ( ((unsigned __int8)tile & 7) >= *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&tile->m_Bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)tile + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->m_Bounds.m_Max.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(tile, 24LL);
  }
  v7 = *(_QWORD *)&tile->m_Bounds.m_Min.z;
  *(_QWORD *)(v4 + 64) = *(_QWORD *)&tile->m_Bounds.m_Min.x;
  *(_QWORD *)(v4 + 72) = v7;
  *(_QWORD *)(v4 + 80) = *(_QWORD *)&tile->m_Bounds.m_Max.y;
  if ( ((unsigned __int8)surfPosition & 7) >= *(_BYTE *)(((unsigned __int64)surfPosition >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)surfPosition >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&surfPosition->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)surfPosition + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&surfPosition->z + 3) >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load_n(surfPosition, 12LL);
  }
  *(_QWORD *)(v4 + 88) = *(_QWORD *)&surfPosition->x;
  *(float *)(v4 + 96) = surfPosition->z;
  v8 = *(_BYTE *)((((unsigned __int64)&surfRotation->w + 3) >> 3) + 0x7FFF8000);
  v9 = v8 != 0;
  if ( (((unsigned __int8)surfRotation & 7) >= *(_BYTE *)(((unsigned __int64)surfRotation >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)surfRotation >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v9 & ((((unsigned __int8)surfRotation + 15) & 7) >= v8) )
  {
    v9 = 16LL;
    __asan_report_load_n(surfRotation, 16LL);
  }
  v10 = *(_QWORD *)&surfRotation->z;
  *(_QWORD *)(v4 + 100) = *(_QWORD *)&surfRotation->x;
  *(_QWORD *)(v4 + 108) = v10;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure, v9);
  locations = __closure->__locations;
  std::make_pair<LocationCacheKeyData &,LocationCacheData &>(
    &v14,
    (LocationCacheKeyData *)(v4 + 32),
    (LocationCacheData *)(v4 + 64));
  vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::insert(
    locations,
    &v14);
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 408: range 000000000CC7A8A4-000000000CC7B776
void __cdecl NavMeshCarving::DoPrepareCarvingOriginal(
        dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8> *obstacleInfo,
        NavMeshCarving::CarveDatVector *tileCarvedData,
        NavMeshCarving::DirtySurfaceVector *dirtySurfaces,
        dynamic_array<MinMaxAABB,true,4> *dirtyBounds,
        DynamicNavMesh *dynamicNavMesh)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v9; // rax
  NavMeshCarving::ObstacleCarveInfo *v10; // rax
  int versionStamp; // r14d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r14d
  NavMeshCarving::ObstacleCarveInfo *v15; // rax
  MinMaxAABB *p_bounds; // rdx
  __int64 v17; // rax
  NavMeshCarving::ObstacleCarveInfo *n; // rax
  NavMeshCarveShape *v19; // rdx
  __int64 v20; // rdi
  NavMeshCarving::ObstacleCarveInfo *v21; // rax
  size_t v23; // rax
  TileLocation *v24; // rax
  TileLocation *v25; // rcx
  __int64 v26; // rdx
  float *p_agentHeight; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  size_t v30; // rax
  size_t v31; // rsi
  bool cachedIsDirty; // [rsp+32h] [rbp-2DEh]
  vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type m_SurfaceID; // [rsp+34h] [rbp-2DCh] BYREF
  int currentSurfaceID; // [rsp+38h] [rbp-2D8h]
  float walkableHeight; // [rsp+3Ch] [rbp-2D4h]
  float walkableRadius; // [rsp+40h] [rbp-2D0h]
  float kOffsetRadius; // [rsp+44h] [rbp-2CCh]
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __lhs; // [rsp+48h] [rbp-2C8h] BYREF
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __rhs; // [rsp+50h] [rbp-2C0h] BYREF
  size_t i; // [rsp+58h] [rbp-2B8h]
  size_t i_0; // [rsp+60h] [rbp-2B0h]
  size_t j; // [rsp+68h] [rbp-2A8h]
  size_t obstacleCount; // [rsp+70h] [rbp-2A0h]
  NavMeshCarveShape *shape; // [rsp+78h] [rbp-298h]
  const NavMesh *navmesh; // [rsp+80h] [rbp-290h]
  TileLocation *loc; // [rsp+88h] [rbp-288h]
  const NavMeshBuildSettings *settings; // [rsp+90h] [rbp-280h]
  NavMeshCarving::ObstacleCarveInfo *info; // [rsp+98h] [rbp-278h]
  common::milog::MiLogStream v54; // [rsp+A0h] [rbp-270h] BYREF
  char v55[592]; // [rsp+C0h] [rbp-250h] BYREF

  v5 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(544LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 12 22 cachedTilePosition:452 64 16 22 cachedTileRotation:453 96 24 16 updateBounds:419 160 "
                        "24 13 locations:446 224 24 14 tileBounds:460 288 24 19 worldTileBounds:466 352 64 23 cachedTileT"
                        "ransform:454 448 64 13 carveData:488";
  *(_QWORD *)(v5 + 16) = NavMeshCarving::DoPrepareCarvingOriginal;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219021312;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862725] = -234881024;
  v7[536862726] = -218959118;
  v7[536862727] = -234881024;
  v7[536862728] = -218959118;
  v7[536862729] = -234881024;
  v7[536862730] = -218959118;
  v7[536862733] = -218959118;
  v7[536862736] = -202116109;
  if ( !std::vector<CarveData,stl_allocator<CarveData,16>>::empty(tileCarvedData) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      "DoPrepareCarvingOriginal",
      409);
    common::milog::MiLogStream::operator()(&v54, "Previously prepared Carve Data is unprocessed");
    common::milog::MiLogStream::~MiLogStream(&v54);
    __asan_handle_no_return(&v54);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      0x199u,
      "static void NavMeshCarving::DoPrepareCarvingOriginal(dynamic_array<NavMeshCarving::ObstacleCarveInfo, true>&, NavM"
      "eshCarving::CarveDatVector&, NavMeshCarving::DirtySurfaceVector&, dynamic_array<MinMaxAABB, true>&, DynamicNavMesh*)");
  }
  if ( !dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::empty(obstacleInfo)
    || !dynamic_array<MinMaxAABB,true,4ul>::empty(dirtyBounds) )
  {
    dynamic_array<MinMaxAABB,true,4ul>::dynamic_array((dynamic_array<MinMaxAABB,true,4> *const)(v5 + 96));
    obstacleCount = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::size(obstacleInfo);
    for ( i = 0LL; i < obstacleCount; ++i )
    {
      v9 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 120) >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9 + 120, i);
      if ( *(_QWORD *)(v9 + 120) )
      {
        v10 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
        if ( *(_BYTE *)(((unsigned __int64)&v10->versionStamp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->versionStamp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v10->versionStamp);
        }
        versionStamp = v10->versionStamp;
        v12 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
        if ( *(_BYTE *)(((unsigned __int64)(v12 + 120) >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8(v12 + 120, i);
        if ( versionStamp != NavMeshObstacle::GetVersionStamp(*(const NavMeshObstacle *const *)(v12 + 120)) )
        {
          v13 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)(v13 + 120) >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8(v13 + 120, i);
          v14 = NavMeshObstacle::GetVersionStamp(*(const NavMeshObstacle *const *)(v13 + 120));
          v15 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)&v15->versionStamp >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v15->versionStamp >> 3) + 0x7FFF8000) <= 3 )
          {
            v15 = (NavMeshCarving::ObstacleCarveInfo *)__asan_report_store4(&v15->versionStamp);
          }
          v15->versionStamp = v14;
          p_bounds = &dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i)->bounds;
          dynamic_array<MinMaxAABB,true,4ul>::push_back(dirtyBounds, p_bounds);
          shape = (NavMeshCarveShape *)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](
                                         obstacleInfo,
                                         i);
          v17 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)(v17 + 120) >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8(v17 + 120, i);
          NavMeshObstacle::GetCarveShape(*(const NavMeshObstacle *const *)(v17 + 120), shape);
          n = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( (((unsigned __int8)n + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&n->bounds >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&n->bounds >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&n->bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)n + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&n->bounds.m_Max.z + 3) >> 3)
                                                            + 0x7FFF8000) )
          {
            n = (NavMeshCarving::ObstacleCarveInfo *)__asan_report_store_n(&n->bounds, 24LL);
          }
          if ( (((unsigned __int8)shape + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&shape->bounds >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&shape->bounds >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&shape->bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)shape + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&shape->bounds.m_Max.z + 3) >> 3)
                                                               + 0x7FFF8000) )
          {
            n = (NavMeshCarving::ObstacleCarveInfo *)__asan_report_load_n(&shape->bounds, 24LL);
          }
          v19 = shape;
          v20 = *(_QWORD *)&shape->bounds.m_Min.z;
          *(_QWORD *)&n->bounds.m_Min.x = *(_QWORD *)&shape->bounds.m_Min.x;
          *(_QWORD *)&n->bounds.m_Min.z = v20;
          *(_QWORD *)&n->bounds.m_Max.y = *(_QWORD *)&v19->bounds.m_Max.y;
          v21 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          dynamic_array<MinMaxAABB,true,4ul>::push_back(
            (dynamic_array<MinMaxAABB,true,4> *const)(v5 + 96),
            &v21->bounds);
        }
      }
    }
    if ( !dynamic_array<MinMaxAABB,true,4ul>::empty((const dynamic_array<MinMaxAABB,true,4> *const)(v5 + 96))
      || !dynamic_array<MinMaxAABB,true,4ul>::empty(dirtyBounds)
      || !vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(dirtySurfaces) )
    {
      dynamic_array<TileLocation,false,4ul>::dynamic_array((dynamic_array<TileLocation,false,4> *const)(v5 + 160));
      DynamicNavMesh::GetSourceTileDataBounds(dynamicNavMesh, (dynamic_array<TileLocation,false,4> *)(v5 + 160));
      currentSurfaceID = 0;
      cachedIsDirty = 0;
      Vector3f::Vector3f((Vector3f *const)(v5 + 32));
      Quaternionf::Quaternionf((Quaternionf *const)(v5 + 64));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v5 + 352));
      navmesh = DynamicNavMesh::GetInternalNavMesh(dynamicNavMesh);
      for ( i_0 = 0LL; ; ++i_0 )
      {
        v23 = dynamic_array<TileLocation,false,4ul>::size((const dynamic_array<TileLocation,false,4> *const)(v5 + 160));
        if ( i_0 >= v23 )
        {
          vector_set<int,std::less<int>,stl_allocator<int,16>>::clear(dirtySurfaces);
          dynamic_array<MinMaxAABB,true,4ul>::resize_uninitialized(dirtyBounds, 0LL, kIncreaseToExactSize);
          dynamic_array<TileLocation,false,4ul>::~dynamic_array((dynamic_array<TileLocation,false,4> *const)(v5 + 160));
          goto LABEL_76;
        }
        v24 = dynamic_array<TileLocation,false,4ul>::operator[](
                (dynamic_array<TileLocation,false,4> *const)(v5 + 160),
                i_0);
        loc = v24;
        if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v24->m_Bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v24 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->m_Bounds.m_Max.z + 3) >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_load_n(v24, 24LL);
        }
        v25 = loc;
        v26 = *(_QWORD *)&loc->m_Bounds.m_Min.z;
        *(_QWORD *)(v5 + 224) = *(_QWORD *)&loc->m_Bounds.m_Min.x;
        *(_QWORD *)(v5 + 232) = v26;
        *(_QWORD *)(v5 + 240) = *(_QWORD *)&v25->m_Bounds.m_Max.y;
        if ( *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)loc + 24) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(&loc->m_SurfaceID);
        }
        settings = DynamicNavMesh::GetNavMeshBuildSettings(dynamicNavMesh, loc->m_SurfaceID);
        p_agentHeight = &settings->agentHeight;
        if ( *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_agentHeight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_agentHeight);
        }
        walkableHeight = settings->agentHeight;
        if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&settings->agentRadius);
        }
        walkableRadius = settings->agentRadius;
        v28 = *(_QWORD *)(v5 + 232);
        *(_QWORD *)(v5 + 288) = *(_QWORD *)(v5 + 224);
        *(_QWORD *)(v5 + 296) = v28;
        *(_QWORD *)(v5 + 304) = *(_QWORD *)(v5 + 240);
        kOffsetRadius = 1.415 * walkableRadius;
        *(float *)(v5 + 224) = *(float *)(v5 + 224) - (float)(1.415 * walkableRadius);
        *(float *)(v5 + 232) = *(float *)(v5 + 232) - kOffsetRadius;
        *(float *)(v5 + 236) = *(float *)(v5 + 236) + kOffsetRadius;
        *(float *)(v5 + 240) = *(float *)(v5 + 240) + walkableHeight;
        *(float *)(v5 + 244) = *(float *)(v5 + 244) + kOffsetRadius;
        if ( *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)loc + 24) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(&loc->m_SurfaceID);
        }
        if ( currentSurfaceID != loc->m_SurfaceID )
        {
          NavMesh::GetSurfaceTransform(navmesh, loc->m_SurfaceID, v5 + 32, v5 + 64);
          Matrix4x4f::SetTR((Matrix4x4f *const)(v5 + 352), (const Vector3f *)(v5 + 32), (const Quaternionf *)(v5 + 64));
          __rhs._M_current = vector_set<int,std::less<int>,stl_allocator<int,16>>::end(dirtySurfaces)._M_current;
          if ( *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)loc + 24) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&loc->m_SurfaceID);
          }
          m_SurfaceID = loc->m_SurfaceID;
          __lhs._M_current = vector_set<int,std::less<int>,stl_allocator<int,16>>::find(dirtySurfaces, &m_SurfaceID)._M_current;
          cachedIsDirty = __gnu_cxx::operator!=<int *,std::vector<int,stl_allocator<int,16>>>(&__lhs, &__rhs);
          if ( *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)loc + 24) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) )
          {
            __asan_report_load2(&loc->m_SurfaceID);
          }
          currentSurfaceID = loc->m_SurfaceID;
        }
        TransformAABBSlow((const MinMaxAABB *)(v5 + 224), (const Matrix4x4f *)(v5 + 352), (MinMaxAABB *)(v5 + 288));
        if ( *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)loc + 24) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(&loc->m_SurfaceID);
        }
        CarveData::CarveData((CarveData *const)(v5 + 448), loc->m_SurfaceID);
        if ( *(_BYTE *)(((unsigned __int64)&loc->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)loc + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loc->m_TileDataIndex >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&loc->m_TileDataIndex);
        }
        *(_DWORD *)(v5 + 452) = loc->m_TileDataIndex;
        *(_QWORD *)(v5 + 456) = *(_QWORD *)(v5 + 32);
        *(_DWORD *)(v5 + 464) = *(_DWORD *)(v5 + 40);
        v29 = *(_QWORD *)(v5 + 72);
        *(_QWORD *)(v5 + 468) = *(_QWORD *)(v5 + 64);
        *(_QWORD *)(v5 + 476) = v29;
        if ( !cachedIsDirty )
          break;
        for ( j = 0LL; ; ++j )
        {
          v30 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::size(obstacleInfo);
          if ( j >= v30 )
            break;
          v31 = j;
          info = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, j);
          if ( *(_BYTE *)(((unsigned __int64)&info->obstacle >> 3) + 0x7FFF8000) )
            __asan_report_load8(&info->obstacle, v31);
          if ( info->obstacle && IntersectAABBAABB(&info->bounds, (const MinMaxAABB *)(v5 + 288)) )
            CarveData::AddShape((CarveData *const)(v5 + 448), &info->shape);
        }
        if ( !CarveData::Empty((const CarveData *const)(v5 + 448)) )
          goto LABEL_73;
LABEL_74:
        CarveData::~CarveData((CarveData *const)(v5 + 448));
      }
      if ( !NavMeshCarving::NeedsUpdateCollectCarveData(
              (CarveData *)(v5 + 448),
              (const MinMaxAABB *)(v5 + 288),
              (const dynamic_array<MinMaxAABB,true,4> *)(v5 + 96),
              dirtyBounds,
              obstacleInfo) )
        goto LABEL_74;
LABEL_73:
      std::vector<CarveData,stl_allocator<CarveData,16>>::push_back(
        tileCarvedData,
        (const std::vector<CarveData,stl_allocator<CarveData,16> >::value_type *)(v5 + 448));
      goto LABEL_74;
    }
LABEL_76:
    dynamic_array<MinMaxAABB,true,4ul>::~dynamic_array((dynamic_array<MinMaxAABB,true,4> *const)(v5 + 96));
  }
  if ( v55 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 537: range 000000000CC7B778-000000000CC7B971
bool __cdecl NavMeshCarving::NeedsUpdateCollectCarveData(
        CarveData *carveData,
        const MinMaxAABB *bounds,
        const dynamic_array<MinMaxAABB,true,4> *updateBounds,
        const dynamic_array<MinMaxAABB,true,4> *dirtyBounds,
        const dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8> *obstacleInfo)
{
  __int64 v6; // rax
  MinMaxAABB *p_bounds; // rdx
  const NavMeshCarving::ObstacleCarveInfo *v8; // rdx
  bool dirtyOverlaps; // [rsp+37h] [rbp-39h]
  size_t i; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-30h] BYREF

  if ( !CarveData::Empty(carveData) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      "NeedsUpdateCollectCarveData",
      538);
    common::milog::MiLogStream::operator()(&v15, "Expects empty input");
    common::milog::MiLogStream::~MiLogStream(&v15);
    __asan_handle_no_return(&v15);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/Obstacles/NavMeshCarving.cpp",
      0x21Au,
      "static bool NavMeshCarving::NeedsUpdateCollectCarveData(CarveData&, const MinMaxAABB&, const dynamic_array<MinMaxA"
      "ABB, true>&, const dynamic_array<MinMaxAABB, true>&, const dynamic_array<NavMeshCarving::ObstacleCarveInfo, true>&)");
  }
  dirtyOverlaps = AnyOverlaps(dirtyBounds, bounds);
  if ( dirtyOverlaps || AnyOverlaps(updateBounds, bounds) )
  {
    for ( i = 0LL; i < dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::size(obstacleInfo); ++i )
    {
      v6 = (__int64)dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
      if ( *(_BYTE *)(((unsigned __int64)(v6 + 120) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6 + 120, i);
      if ( *(_QWORD *)(v6 + 120) )
      {
        p_bounds = &dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i)->bounds;
        if ( IntersectAABBAABB(p_bounds, bounds) )
        {
          v8 = dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          CarveData::AddShape(carveData, &v8->shape);
        }
      }
    }
  }
  return dirtyOverlaps || !CarveData::Empty(carveData);
};
