// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp

// Line 32: range 000000000CC6FBAE-000000000CC6FCFE
void __cdecl HavokSihouetteCutter::HavokSihouetteCutter(
        HavokSihouetteCutter *const this,
        DynamicNavMesh *dynamicNavMesh)
{
  int (**v2)(...); // rdx
  std::less<int> comp; // [rsp+1Eh] [rbp-12h] BYREF
  stl_allocator<int,16> a; // [rsp+1Fh] [rbp-11h] BYREF

  ICarving::ICarving(this);
  v2 = (int (**)(...))(&`vtable for'HavokSihouetteCutter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ICarving = v2;
  stl_allocator<int,16>::stl_allocator(&a);
  vector_set<int,std::less<int>,stl_allocator<int,16>>::vector_set(&this->m_DirtySurfaces, &comp, &a);
  stl_allocator<int,16>::~stl_allocator(&a);
  std::vector<CarveData,stl_allocator<CarveData,16>>::vector(&this->m_TileCarveData);
  dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::dynamic_array(&this->m_ObstacleInfo);
  dynamic_array<int,true,4ul>::dynamic_array(&this->m_ObstacleFreelist);
  dynamic_array<MinMaxAABB,true,4ul>::dynamic_array(&this->m_DirtyBounds);
  dynamic_array<CuttingResult,true,8ul>::dynamic_array(&this->m_CuttingResults);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_DynamicNavMesh = dynamicNavMesh;
};

// Line 37: range 000000000CC6FD00-000000000CC6FDAF
void __cdecl HavokSihouetteCutter::~HavokSihouetteCutter(HavokSihouetteCutter *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HavokSihouetteCutter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ICarving = v1;
  dynamic_array<CuttingResult,true,8ul>::~dynamic_array(&this->m_CuttingResults);
  dynamic_array<MinMaxAABB,true,4ul>::~dynamic_array(&this->m_DirtyBounds);
  dynamic_array<int,true,4ul>::~dynamic_array(&this->m_ObstacleFreelist);
  dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::~dynamic_array(&this->m_ObstacleInfo);
  std::vector<CarveData,stl_allocator<CarveData,16>>::~vector(&this->m_TileCarveData);
  vector_set<int,std::less<int>,stl_allocator<int,16>>::~vector_set(&this->m_DirtySurfaces);
  ICarving::~ICarving(this);
};

// Line 37: range 000000000CC6FDB0-000000000CC6FDDA
void __cdecl HavokSihouetteCutter::~HavokSihouetteCutter(HavokSihouetteCutter *const this)
{
  HavokSihouetteCutter::~HavokSihouetteCutter(this);
  operator delete(this, 0xA8uLL);
};

// Line 42: range 000000000CC6FDDC-000000000CC6FE2C
void __cdecl HavokSihouetteCutter::ClearAll(HavokSihouetteCutter *const this)
{
  dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::clear(&this->m_ObstacleInfo);
  dynamic_array<int,true,4ul>::clear(&this->m_ObstacleFreelist);
  dynamic_array<MinMaxAABB,true,4ul>::clear(&this->m_DirtyBounds);
  dynamic_array<CuttingResult,true,8ul>::clear(&this->m_CuttingResults);
};

// Line 50: range 000000000CC6FE2E-000000000CC700E5
void __cdecl HavokSihouetteCutter::AddObstacle(
        HavokSihouetteCutter *const this,
        NavMeshObstacle *obstacle,
        int *handle)
{
  int *v3; // rax
  int *v4; // rdx
  int v5; // ecx
  int v6; // edi
  dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8> *p_m_ObstacleInfo; // rcx
  HavokSihouetteCutter *thisa; // [rsp+18h] [rbp-18h]
  HavokSihouetteCutter::ObstacleCarveInfo *info; // [rsp+28h] [rbp-8h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    this = (HavokSihouetteCutter *const)handle;
    __asan_report_load4(handle);
  }
  if ( *handle != -1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "handle == -1",
      "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
      0x33u,
      "virtual void HavokSihouetteCutter::AddObstacle(NavMeshObstacle&, int&)");
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
    v6 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::size(&thisa->m_ObstacleInfo);
    if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
    {
      v6 = (int)handle;
      __asan_report_store4(handle);
    }
    *handle = v6;
    dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::push_back(&thisa->m_ObstacleInfo);
  }
  p_m_ObstacleInfo = &thisa->m_ObstacleInfo;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(handle);
  }
  info = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](p_m_ObstacleInfo, *handle);
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
  if ( *(_BYTE *)(((unsigned __int64)&info->cost_time >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  info->cost_time = 0LL;
  memset(info, 0, 0x5CuLL);
};

// Line 71: range 000000000CC700E6-000000000CC702BB
void __cdecl HavokSihouetteCutter::RemoveObstacle(HavokSihouetteCutter *const this, int *handle)
{
  int v2; // ebx
  dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8> *p_m_ObstacleInfo; // rcx
  __int64 v4; // rax
  dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8> *v5; // rcx
  HavokSihouetteCutter::ObstacleCarveInfo *v6; // rax
  HavokSihouetteCutter *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    this = (HavokSihouetteCutter *const)handle;
    __asan_report_load4(handle);
  }
  if ( *handle < 0
    || (v2 = *handle,
        this = (HavokSihouetteCutter *const)&thisa->m_ObstacleInfo,
        v2 >= (int)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::size(&thisa->m_ObstacleInfo)) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "handle >= 0 && handle < (int)m_ObstacleInfo.size()",
      "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
      0x48u,
      "virtual void HavokSihouetteCutter::RemoveObstacle(int&)");
  }
  p_m_ObstacleInfo = &thisa->m_ObstacleInfo;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(handle);
  }
  v4 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](p_m_ObstacleInfo, *handle);
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 120) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 + 120) = 0LL;
  v5 = &thisa->m_ObstacleInfo;
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(handle);
  }
  v6 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](v5, *handle);
  dynamic_array<MinMaxAABB,true,4ul>::push_back(&thisa->m_DirtyBounds, &v6->bounds);
  dynamic_array<int,true,4ul>::push_back(&thisa->m_ObstacleFreelist, handle);
  if ( *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)handle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(handle);
  }
  *handle = -1;
};

// Line 80: range 000000000CC702BC-000000000CC703C9
void __cdecl HavokSihouetteCutter::Carving(HavokSihouetteCutter *const this)
{
  __int64 v1; // rsi
  NavMeshManager *MgrPtr; // rax
  CPUProfilingMgr *CPUProfilingMgr; // rax
  CPUProfilingModeType Mode; // edx
  size_t v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicNavMesh, v1);
  MgrPtr = DynamicNavMesh::GetMgrPtr(this->m_DynamicNavMesh);
  CPUProfilingMgr = NavMeshManager::GetCPUProfilingMgr(MgrPtr);
  Mode = CPUProfilingMgr::GetMode(CPUProfilingMgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_CPUProfilingMode);
  }
  this->m_CPUProfilingMode = Mode;
  HavokSihouetteCutter::PrepareCutting(
    this,
    &this->m_ObstacleInfo,
    &this->m_TileCarveData,
    &this->m_DirtySurfaces,
    &this->m_DirtyBounds);
  v5 = std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData);
  dynamic_array<CuttingResult,true,8ul>::resize_uninitialized(&this->m_CuttingResults, v5, kIncreaseToExactSize);
  HavokSihouetteCutter::Cutting(this);
  HavokSihouetteCutter::ApplyCuttingResult(this);
};

// Line 98: range 000000000CC703CA-000000000CC707BA
bool __cdecl HavokSihouetteCutter::NeedsUpdateCollectCarveData(
        HavokSihouetteCutter *const this,
        CarveData *carveData,
        const MinMaxAABB *bounds,
        const dynamic_array<MinMaxAABB,true,4> *updateBounds,
        const dynamic_array<MinMaxAABB,true,4> *dirtyBounds,
        const dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8> *obstacleInfo)
{
  common::tools::TimeUtils::Timer *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v10; // rax
  MinMaxAABB *p_bounds; // rdx
  const HavokSihouetteCutter::ObstacleCarveInfo *v12; // rdx
  int v13; // r14d
  __int64 v14; // rax
  bool result; // al
  bool dirtyOverlaps; // [rsp+37h] [rbp-99h]
  size_t i; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v6 = (common::tools::TimeUtils::Timer *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = (common::tools::TimeUtils::Timer *)v7;
  }
  v6->start_tv_.tv_sec = 1102416563LL;
  v6->start_tv_.tv_usec = (__suseconds_t)"1 32 16 9 timer:110";
  v6[1].start_tv_.tv_sec = (__time_t)HavokSihouetteCutter::NeedsUpdateCollectCarveData;
  v8 = (unsigned __int64)v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  if ( !CarveData::Empty(carveData) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
      "NeedsUpdateCollectCarveData",
      99);
    common::milog::MiLogStream::operator()(&v22, "Expects empty input");
    common::milog::MiLogStream::~MiLogStream(&v22);
    __asan_handle_no_return(&v22);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
      0x63u,
      "bool HavokSihouetteCutter::NeedsUpdateCollectCarveData(CarveData&, const MinMaxAABB&, const dynamic_array<MinMaxAA"
      "BB, true>&, const dynamic_array<MinMaxAABB, true>&, const dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo, true>&)");
  }
  dirtyOverlaps = AnyOverlaps(dirtyBounds, bounds);
  if ( dirtyOverlaps || AnyOverlaps(updateBounds, bounds) )
  {
    for ( i = 0LL; i < dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::size(obstacleInfo); ++i )
    {
      v10 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 120) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10 + 120, i);
      if ( *(_QWORD *)(v10 + 120) )
      {
        common::tools::TimeUtils::Timer::Timer(v6 + 2);
        p_bounds = &dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i)->bounds;
        if ( IntersectAABBAABB(p_bounds, bounds) )
        {
          v12 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          CarveData::AddShape(carveData, &v12->shape);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->m_CPUProfilingMode);
        }
        if ( this->m_CPUProfilingMode == CPMT_DETAIL_LOG )
        {
          v13 = common::tools::TimeUtils::Timer::time(v6 + 2);
          v14 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](
                           &this->m_ObstacleInfo,
                           i);
          if ( *(_BYTE *)(((unsigned __int64)(v14 + 136) >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8(v14 + 136, i);
          *(_QWORD *)(v14 + 136) += v13;
        }
        common::tools::TimeUtils::Timer::~Timer(v6 + 2);
      }
    }
  }
  result = dirtyOverlaps || !CarveData::Empty(carveData);
  if ( v23 == (char *)v6 )
  {
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v6->start_tv_.tv_sec = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 131: range 000000000CC70F18-000000000CC71FB6
void __cdecl HavokSihouetteCutter::PrepareCutting(
        HavokSihouetteCutter *const this,
        dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8> *obstacleInfo,
        HavokSihouetteCutter::CarveDataVector *tileCarvedData,
        HavokSihouetteCutter::DirtySurfaceVector *dirtySurfaces,
        dynamic_array<MinMaxAABB,true,4> *dirtyBounds)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  size_t v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  HavokSihouetteCutter::ObstacleCarveInfo *v12; // rax
  int versionStamp; // r14d
  size_t v14; // rsi
  __int64 v15; // rax
  HavokSihouetteCutter::ObstacleCarveInfo *v16; // rax
  size_t v17; // rsi
  __int64 v18; // rax
  int v19; // r14d
  HavokSihouetteCutter::ObstacleCarveInfo *v20; // rax
  HavokSihouetteCutter::ObstacleCarveInfo *v21; // rax
  MinMaxAABB *p_bounds; // rdx
  size_t v23; // rsi
  __int64 v24; // rax
  HavokSihouetteCutter::ObstacleCarveInfo *n; // rax
  NavMeshCarveShape *v26; // rdx
  __int64 v27; // rdi
  HavokSihouetteCutter::ObstacleCarveInfo *v28; // rax
  HavokSihouetteCutter::ObstacleCarveInfo *v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  uint32_t v32; // edi
  __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer v34; // rax
  __int64 v35; // rdi
  __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer v36; // rax
  __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer v37; // rdx
  Quaternionf *p_rotation; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  size_t v41; // rax
  size_t v42; // rsi
  std::less<LocationCacheKeyData> comp; // [rsp+34h] [rbp-2DCh] BYREF
  std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > a; // [rsp+35h] [rbp-2DBh] BYREF
  bool cachedIsDirty; // [rsp+37h] [rbp-2D9h]
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __lhs; // [rsp+38h] [rbp-2D8h] BYREF
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __rhs; // [rsp+40h] [rbp-2D0h] BYREF
  size_t i; // [rsp+48h] [rbp-2C8h]
  size_t j; // [rsp+50h] [rbp-2C0h]
  DynamicNavMesh *dynamicNavMesh; // [rsp+58h] [rbp-2B8h]
  size_t obstacleCount; // [rsp+60h] [rbp-2B0h]
  NavMeshCarveShape *shape; // [rsp+68h] [rbp-2A8h]
  LocationCacheKeyData *infoKey; // [rsp+70h] [rbp-2A0h]
  HavokSihouetteCutter::ObstacleCarveInfo *info; // [rsp+78h] [rbp-298h]
  char v61[656]; // [rsp+80h] [rbp-290h] BYREF

  v5 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(608LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "11 32 8 31 insertObstacleShapeCallback:155 64 8 21 dirtyAABBCallback:167 96 8 8 iter:233 128 8 7"
                        " end:233 160 16 9 timer:199 192 24 21 dirtySurfaceAABBs:143 256 24 16 updateBounds:149 320 24 14"
                        " dummyempty:154 384 24 19 worldTileBounds:236 448 32 13 locations:145 512 64 13 carveData:240";
  *(_QWORD *)(v5 + 16) = HavokSihouetteCutter::PrepareCutting;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -219021312;
  v7[536862726] = -234881024;
  v7[536862727] = -218959118;
  v7[536862728] = -234881024;
  v7[536862729] = -218959118;
  v7[536862730] = -234881024;
  v7[536862731] = -218959118;
  v7[536862732] = -234881024;
  v7[536862733] = -218959118;
  v7[536862735] = -218959118;
  v7[536862738] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicNavMesh, obstacleInfo);
  dynamicNavMesh = this->m_DynamicNavMesh;
  if ( !std::vector<CarveData,stl_allocator<CarveData,16>>::empty(tileCarvedData) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
      "PrepareCutting",
      133);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v5 + 448),
      "Previously prepared Carve Data is unprocessed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 448));
    __asan_handle_no_return(v5 + 448);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
      0x85u,
      "void HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo, true>&, HavokSiho"
      "uetteCutter::CarveDataVector&, HavokSihouetteCutter::DirtySurfaceVector&, dynamic_array<MinMaxAABB, true>&)");
  }
  if ( !dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::empty(obstacleInfo)
    || !dynamic_array<MinMaxAABB,true,4ul>::empty(dirtyBounds) )
  {
    dynamic_array<MinMaxAABB,true,4ul>::dynamic_array((dynamic_array<MinMaxAABB,true,4> *const)(v5 + 192));
    std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>::allocator(&a);
    vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::vector_map(
      (vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 448),
      &comp,
      &a);
    std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>::~allocator(&a);
    dynamic_array<MinMaxAABB,true,4ul>::dynamic_array((dynamic_array<MinMaxAABB,true,4> *const)(v5 + 256));
    obstacleCount = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::size(obstacleInfo);
    stl_allocator<int,16>::stl_allocator((stl_allocator<int,16> *const)&a);
    vector_set<int,std::less<int>,stl_allocator<int,16>>::vector_set(
      (vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 320),
      (const std::less<int> *)&comp,
      (const stl_allocator<int,16> *)&a);
    stl_allocator<int,16>::~stl_allocator((stl_allocator<int,16> *const)&a);
    *(_QWORD *)(v5 + 32) = v5 + 448;
    *(_QWORD *)(v5 + 64) = v5 + 448;
    for ( i = 0LL; i < obstacleCount; ++i )
    {
      v9 = i;
      v10 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 120) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10 + 120, v9);
      if ( *(_QWORD *)(v10 + 120) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->m_CPUProfilingMode);
        }
        if ( this->m_CPUProfilingMode == CPMT_DETAIL_LOG )
        {
          v11 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)(v11 + 136) >> 3) + 0x7FFF8000) )
            v11 = __asan_report_store8();
          *(_QWORD *)(v11 + 136) = 0LL;
        }
        v12 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
        if ( *(_BYTE *)(((unsigned __int64)&v12->versionStamp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->versionStamp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v12->versionStamp);
        }
        versionStamp = v12->versionStamp;
        v14 = i;
        v15 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
        if ( *(_BYTE *)(((unsigned __int64)(v15 + 120) >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(v15 + 120, v14);
        if ( versionStamp == NavMeshObstacle::GetVersionStamp(*(const NavMeshObstacle *const *)(v15 + 120)) )
        {
          if ( !vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(dirtySurfaces) )
          {
            v16 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
            DynamicNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
              dynamicNavMesh,
              &v16->bounds,
              dirtySurfaces,
              (HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *)(v5 + 32));
          }
        }
        else
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v5 + 160));
          v17 = i;
          v18 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)(v18 + 120) >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8(v18 + 120, v17);
          v19 = NavMeshObstacle::GetVersionStamp(*(const NavMeshObstacle *const *)(v18 + 120));
          v20 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)&v20->versionStamp >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v20->versionStamp >> 3) + 0x7FFF8000) <= 3 )
          {
            v20 = (HavokSihouetteCutter::ObstacleCarveInfo *)__asan_report_store4(&v20->versionStamp);
          }
          v20->versionStamp = v19;
          v21 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( MinMaxAABB::IsValid(&v21->bounds) )
          {
            p_bounds = &dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i)->bounds;
            dynamic_array<MinMaxAABB,true,4ul>::push_back(dirtyBounds, p_bounds);
          }
          shape = (NavMeshCarveShape *)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](
                                         obstacleInfo,
                                         i);
          v23 = i;
          v24 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( *(_BYTE *)(((unsigned __int64)(v24 + 120) >> 3) + 0x7FFF8000) )
            v24 = __asan_report_load8(v24 + 120, v23);
          NavMeshObstacle::GetCarveShape(*(const NavMeshObstacle *const *)(v24 + 120), shape);
          n = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          if ( (((unsigned __int8)n + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&n->bounds >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&n->bounds >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&n->bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)n + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&n->bounds.m_Max.z + 3) >> 3)
                                                            + 0x7FFF8000) )
          {
            n = (HavokSihouetteCutter::ObstacleCarveInfo *)__asan_report_store_n(&n->bounds, 24LL);
          }
          if ( (((unsigned __int8)shape + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&shape->bounds >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&shape->bounds >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&shape->bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)shape + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&shape->bounds.m_Max.z + 3) >> 3)
                                                               + 0x7FFF8000) )
          {
            n = (HavokSihouetteCutter::ObstacleCarveInfo *)__asan_report_load_n(&shape->bounds, 24LL);
          }
          v26 = shape;
          v27 = *(_QWORD *)&shape->bounds.m_Min.z;
          *(_QWORD *)&n->bounds.m_Min.x = *(_QWORD *)&shape->bounds.m_Min.x;
          *(_QWORD *)&n->bounds.m_Min.z = v27;
          *(_QWORD *)&n->bounds.m_Max.y = *(_QWORD *)&v26->bounds.m_Max.y;
          v28 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          dynamic_array<MinMaxAABB,true,4ul>::push_back(
            (dynamic_array<MinMaxAABB,true,4> *const)(v5 + 256),
            &v28->bounds);
          v29 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
          DynamicNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
            dynamicNavMesh,
            &v29->bounds,
            (const vector_set<int,std::less<int>,stl_allocator<int,16> > *)(v5 + 320),
            (HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *)(v5 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->m_CPUProfilingMode);
          }
          if ( this->m_CPUProfilingMode == CPMT_DETAIL_LOG )
          {
            v30 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v5 + 160));
            v31 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, i);
            if ( *(_BYTE *)(((unsigned __int64)(v31 + 136) >> 3) + 0x7FFF8000) )
              v31 = __asan_report_store8();
            *(_QWORD *)(v31 + 136) = v30;
            v32 = i;
            if ( *(_BYTE *)(((unsigned __int64)shape >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)shape & 7) + 3) >= *(_BYTE *)(((unsigned __int64)shape >> 3) + 0x7FFF8000) )
            {
              v32 = (unsigned int)shape;
              __asan_report_store4(shape);
            }
            shape->id = v32;
          }
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v5 + 160));
        }
      }
    }
    if ( !vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::empty((const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 448))
      || !dynamic_array<MinMaxAABB,true,4ul>::empty(dirtyBounds)
      || !vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(dirtySurfaces) )
    {
      DynamicNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>(
        dynamicNavMesh,
        dirtyBounds,
        (const vector_set<int,std::less<int>,stl_allocator<int,16> > *)(v5 + 320),
        (HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *)(v5 + 64));
      *(vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator *)(v5 + 96) = vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::begin((vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 448));
      *(vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator *)(v5 + 128) = vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::end((vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 448));
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>(
                (const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *)(v5 + 96),
                (const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *)(v5 + 128)) )
        {
          vector_set<int,std::less<int>,stl_allocator<int,16>>::clear(dirtySurfaces);
          dynamic_array<MinMaxAABB,true,4ul>::resize_uninitialized(dirtyBounds, 0LL, kIncreaseToExactSize);
          goto LABEL_86;
        }
        infoKey = (LocationCacheKeyData *)__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
        v34 = __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
        if ( (((unsigned __int8)v34 + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&v34->second >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v34->second >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v34->second.bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v34 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v34->second.bounds.m_Max.z + 3) >> 3)
                                                           + 0x7FFF8000) )
        {
          v34 = (__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer)__asan_report_load_n(&v34->second, 24LL);
        }
        v35 = *(_QWORD *)&v34->second.bounds.m_Min.z;
        *(_QWORD *)(v5 + 384) = *(_QWORD *)&v34->second.bounds.m_Min.x;
        *(_QWORD *)(v5 + 392) = v35;
        *(_QWORD *)(v5 + 400) = *(_QWORD *)&v34->second.bounds.m_Max.y;
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
        CarveData::CarveData((CarveData *const)(v5 + 512), infoKey->surfaceID);
        v36 = __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
        if ( (((unsigned __int8)v36 + 32) & 7) >= *(_BYTE *)(((unsigned __int64)&v36->second.position >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v36->second.position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v36->second.position.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v36 + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&v36->second.position.z + 3) >> 3)
                                                           + 0x7FFF8000) )
        {
          v36 = (__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >::pointer)__asan_report_load_n(&v36->second.position, 12LL);
        }
        *(_QWORD *)(v5 + 520) = *(_QWORD *)&v36->second.position.x;
        *(float *)(v5 + 528) = v36->second.position.z;
        v37 = __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
        p_rotation = &v37->second.rotation;
        if ( ((unsigned __int8)p_rotation & 7) >= *(_BYTE *)(((unsigned __int64)p_rotation >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)p_rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&p_rotation->w + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p_rotation + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&p_rotation->w + 3) >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load_n(p_rotation, 16LL);
        }
        v39 = *(_QWORD *)&v37->second.rotation.x;
        v40 = *(_QWORD *)&v37->second.rotation.z;
        *(_QWORD *)(v5 + 532) = v39;
        *(_QWORD *)(v5 + 540) = v40;
        if ( *(_BYTE *)(((unsigned __int64)&infoKey->tileDataIndex >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)infoKey + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&infoKey->tileDataIndex >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&infoKey->tileDataIndex);
        }
        *(_DWORD *)(v5 + 516) = infoKey->tileDataIndex;
        if ( !cachedIsDirty )
          break;
        for ( j = 0LL; ; ++j )
        {
          v41 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::size(obstacleInfo);
          if ( j >= v41 )
            break;
          v42 = j;
          info = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](obstacleInfo, j);
          if ( *(_BYTE *)(((unsigned __int64)&info->obstacle >> 3) + 0x7FFF8000) )
            __asan_report_load8(&info->obstacle, v42);
          if ( info->obstacle && IntersectAABBAABB(&info->bounds, (const MinMaxAABB *)(v5 + 384)) )
            CarveData::AddShape((CarveData *const)(v5 + 512), &info->shape);
        }
        if ( !CarveData::Empty((const CarveData *const)(v5 + 512)) )
          goto LABEL_83;
LABEL_84:
        CarveData::~CarveData((CarveData *const)(v5 + 512));
        __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *const)(v5 + 96));
      }
      if ( !HavokSihouetteCutter::NeedsUpdateCollectCarveData(
              this,
              (CarveData *)(v5 + 512),
              (const MinMaxAABB *)(v5 + 384),
              (const dynamic_array<MinMaxAABB,true,4> *)(v5 + 256),
              dirtyBounds,
              obstacleInfo) )
        goto LABEL_84;
LABEL_83:
      std::vector<CarveData,stl_allocator<CarveData,16>>::push_back(
        tileCarvedData,
        (const std::vector<CarveData,stl_allocator<CarveData,16> >::value_type *)(v5 + 512));
      goto LABEL_84;
    }
LABEL_86:
    vector_set<int,std::less<int>,stl_allocator<int,16>>::~vector_set((vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 320));
    dynamic_array<MinMaxAABB,true,4ul>::~dynamic_array((dynamic_array<MinMaxAABB,true,4> *const)(v5 + 256));
    vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::~vector_map((vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const)(v5 + 448));
    dynamic_array<MinMaxAABB,true,4ul>::~dynamic_array((dynamic_array<MinMaxAABB,true,4> *const)(v5 + 192));
  }
  if ( v61 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v5 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 155: range 000000000CC707BC-000000000CC70B68
void __cdecl HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}::operator()(
        const HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *const __closure,
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
  *(_QWORD *)(v4 + 8) = "2 32 8 7 key:157 64 52 8 data:160";
  *(_QWORD *)(v4 + 16) = HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}::operator();
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

// Line 167: range 000000000CC70B6A-000000000CC70F16
void __cdecl HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}::operator()(
        const HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *const __closure,
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
  *(_QWORD *)(v4 + 8) = "2 32 8 7 key:169 64 52 8 data:172";
  *(_QWORD *)(v4 + 16) = HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}::operator();
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

// Line 284: range 000000000CC71FB8-000000000CC7233C
void __cdecl HavokSihouetteCutter::Cutting(HavokSihouetteCutter *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::vector<CarveData,stl_allocator<CarveData,16> >::size_type v4; // r14
  NavMeshCarveShape *v5; // rax
  NavMeshCarveShape *v6; // rdx
  size_t id; // rsi
  __int64 v8; // rax
  int i; // [rsp+18h] [rbp-C8h]
  int i_0; // [rsp+1Ch] [rbp-C4h]
  int cost_time; // [rsp+20h] [rbp-C0h]
  int size; // [rsp+24h] [rbp-BCh]
  dynamic_array<NavMeshCarveShape,true,4> *shapes; // [rsp+28h] [rbp-B8h]
  char v14[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 9 timer:294 64 24 8 info:286";
  *(_QWORD *)(v1 + 16) = HavokSihouetteCutter::Cutting;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  v4 = std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData);
  if ( v4 != dynamic_array<CuttingResult,true,8ul>::size(&this->m_CuttingResults) )
  {
    __asan_handle_no_return(&this->m_CuttingResults);
    __assert_fail(
      "m_TileCarveData.size() == m_CuttingResults.size()",
      "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
      0x11Du,
      "void HavokSihouetteCutter::Cutting()");
  }
  *(_DWORD *)(v1 + 64) = std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData);
  *(_QWORD *)(v1 + 72) = std::vector<CarveData,stl_allocator<CarveData,16>>::operator[](&this->m_TileCarveData, 0LL);
  *(_QWORD *)(v1 + 80) = dynamic_array<CuttingResult,true,8ul>::operator[](&this->m_CuttingResults, 0LL);
  for ( i = 0; i < *(_DWORD *)(v1 + 64); ++i )
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 32));
    HavokSihouetteCutter::CuttingJobMultithreaded(this, (HavokSihouetteCutter::CarveJobInfo *)(v1 + 64), i);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_CPUProfilingMode);
    }
    if ( this->m_CPUProfilingMode == CPMT_DETAIL_LOG )
    {
      cost_time = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 32));
      shapes = (dynamic_array<NavMeshCarveShape,true,4> *)(((__int64)i << 6) + *(_QWORD *)(v1 + 72) + 40);
      i_0 = 0;
      size = dynamic_array<NavMeshCarveShape,true,4ul>::size(shapes);
      while ( i_0 < size )
      {
        v5 = dynamic_array<NavMeshCarveShape,true,4ul>::operator[](shapes, i_0);
        v6 = v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v5);
        }
        id = v6->id;
        v8 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](
                        &this->m_ObstacleInfo,
                        id);
        if ( *(_BYTE *)(((unsigned __int64)(v8 + 136) >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(v8 + 136, id);
        *(_QWORD *)(v8 + 136) += cost_time;
        ++i_0;
      }
    }
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 32));
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 312: range 000000000CC7233E-000000000CC72808
void __cdecl HavokSihouetteCutter::CuttingJobMultithreaded(
        HavokSihouetteCutter *const this,
        HavokSihouetteCutter::CarveJobInfo *info,
        unsigned int i)
{
  __int64 v3; // rsi
  float *p_agentHeight; // rax
  NavMeshCarveShape *v5; // rbx
  NavMeshCarveShape *v6; // rax
  int v7; // r13d
  NavMeshCarveShape *v8; // r8
  CarveResultStatus v9; // edi
  int *p_x; // rax
  int x; // ecx
  int y; // ecx
  int surfaceID; // [rsp+2Ch] [rbp-74h]
  int tileIndex; // [rsp+30h] [rbp-70h]
  float height; // [rsp+34h] [rbp-6Ch]
  float radius; // [rsp+38h] [rbp-68h]
  float quantSize; // [rsp+40h] [rbp-60h]
  int sourceDataSize; // [rsp+44h] [rbp-5Ch]
  CarveData *carveData; // [rsp+48h] [rbp-58h]
  const DynamicNavMesh *dynamicNavMesh; // [rsp+50h] [rbp-50h]
  CuttingResult *res; // [rsp+58h] [rbp-48h]
  const NavMeshTileData *sourceTile; // [rsp+60h] [rbp-40h]
  const NavMeshBuildSettings *settings; // [rsp+68h] [rbp-38h]
  const unsigned __int8 *sourceData; // [rsp+70h] [rbp-30h]
  NavMeshDataHeader *header; // [rsp+78h] [rbp-28h]

  if ( *(_BYTE *)(((unsigned __int64)&info->carveDatas >> 3) + 0x7FFF8000) )
    __asan_report_load8(&info->carveDatas, info);
  carveData = &info->carveDatas[(unsigned __int64)i];
  if ( *(_BYTE *)(((unsigned __int64)carveData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)carveData >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(carveData);
  }
  surfaceID = carveData->m_SurfaceID;
  v3 = (((_BYTE)carveData + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&carveData->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)carveData + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&carveData->m_TileDataIndex >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&carveData->m_TileDataIndex);
  }
  tileIndex = carveData->m_TileDataIndex;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicNavMesh, v3);
  dynamicNavMesh = this->m_DynamicNavMesh;
  if ( *(_BYTE *)(((unsigned __int64)&info->results >> 3) + 0x7FFF8000) )
    __asan_report_load8(&info->results, v3);
  res = &info->results[i];
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
    v5 = dynamic_array<NavMeshCarveShape,true,4ul>::end(&carveData->m_Shapes);
    v6 = dynamic_array<NavMeshCarveShape,true,4ul>::begin(&carveData->m_Shapes);
    std::sort<NavMeshCarveShape *,bool (*)(NavMeshCarveShape const&,NavMeshCarveShape const&)>(
      v6,
      v5,
      (bool (*)(const NavMeshCarveShape *, const NavMeshCarveShape *))CompareCarveShapes);
    v7 = dynamic_array<NavMeshCarveShape,true,4ul>::size(&carveData->m_Shapes);
    v8 = dynamic_array<NavMeshCarveShape,true,4ul>::begin(&carveData->m_Shapes);
    v9 = CutCarveNavmeshTile(
           &res->carvedData,
           &res->carvedDataSize,
           sourceData,
           sourceDataSize,
           v8,
           v7,
           height,
           radius,
           quantSize,
           &carveData->m_Position,
           &carveData->m_Rotation);
    if ( *(_BYTE *)(((unsigned __int64)&res->status >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)res + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->status >> 3) + 0x7FFF8000) )
    {
      v9 = (_DWORD)res + 12;
      __asan_report_store4(&res->status);
    }
    res->status = v9;
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

// Line 359: range 000000000CC7280A-000000000CC73211
void __cdecl HavokSihouetteCutter::ApplyCuttingResult(HavokSihouetteCutter *const this)
{
  size_t id; // rsi
  common::tools::TimeUtils::Timer *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::vector<CarveData,stl_allocator<CarveData,16> >::size_type v5; // r14
  dynamic_array<CuttingResult,true,8> *p_m_CuttingResults; // rdi
  dynamic_array<CuttingResult,true,8> *v7; // rdi
  int *p_status; // rax
  __int64 v9; // rsi
  DynamicNavMesh *m_DynamicNavMesh; // rdi
  int y; // esi
  int v12; // r8d
  DynamicNavMesh *p_x; // rdi
  int v14; // esi
  int v15; // r8d
  DynamicNavMesh *p_y; // rdi
  int v17; // esi
  int v18; // r8d
  NavMeshCarveShape *v19; // rax
  NavMeshCarveShape *v20; // rdx
  __int64 v21; // rax
  NavMeshManager *MgrPtr; // rax
  DynamicUniqueTokenType UniqueToken; // edi
  const NavMeshObstacle *obstacle; // rdx
  int i_0; // [rsp+10h] [rbp-C0h]
  uint32_t i_1; // [rsp+14h] [rbp-BCh]
  uint32_t size_0; // [rsp+18h] [rbp-B8h]
  int surfaceID; // [rsp+1Ch] [rbp-B4h]
  int tileIndex; // [rsp+20h] [rbp-B0h]
  CarveResultStatus status; // [rsp+24h] [rbp-ACh]
  int cost_time; // [rsp+28h] [rbp-A8h]
  int size; // [rsp+2Ch] [rbp-A4h]
  size_t i; // [rsp+30h] [rbp-A0h]
  CPUProfilingMgr *cpuMgr; // [rsp+38h] [rbp-98h]
  HavokSihouetteCutter::ObstacleCarveInfo *info; // [rsp+40h] [rbp-90h]
  std::vector<CarveData,stl_allocator<CarveData,16> >::reference carveData; // [rsp+48h] [rbp-88h]
  CuttingResult *res; // [rsp+50h] [rbp-80h]
  char v39[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (common::tools::TimeUtils::Timer *)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (common::tools::TimeUtils::Timer *)v3;
  }
  v2->start_tv_.tv_sec = 1102416563LL;
  v2->start_tv_.tv_usec = (__suseconds_t)"1 32 16 9 timer:366";
  v2[1].start_tv_.tv_sec = (__time_t)HavokSihouetteCutter::ApplyCuttingResult;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData);
  p_m_CuttingResults = &this->m_CuttingResults;
  if ( v5 != dynamic_array<CuttingResult,true,8ul>::size(&this->m_CuttingResults) )
  {
    __asan_handle_no_return(p_m_CuttingResults);
    __assert_fail(
      "m_TileCarveData.size() == m_CuttingResults.size()",
      "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
      0x168u,
      "void HavokSihouetteCutter::ApplyCuttingResult()");
  }
  for ( i = 0LL; i < std::vector<CarveData,stl_allocator<CarveData,16>>::size(&this->m_TileCarveData); ++i )
  {
    common::tools::TimeUtils::Timer::Timer(v2 + 2);
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
    v7 = &this->m_CuttingResults;
    res = dynamic_array<CuttingResult,true,8ul>::operator[](&this->m_CuttingResults, i);
    p_status = &res->status;
    v9 = (((_BYTE)res + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_status & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) )
    {
      v7 = (dynamic_array<CuttingResult,true,8> *)&res->status;
      __asan_report_load4(p_status);
    }
    status = res->status;
    if ( status == kRestoreTile )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_DynamicNavMesh, v9);
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
      v12 = y;
      id = (unsigned __int16)surfaceID;
      DynamicNavMesh::HavokRestoreTile(m_DynamicNavMesh, surfaceID, tileIndex, res->x, v12);
    }
    else if ( status )
    {
      if ( status != kRemoveTile )
      {
        __asan_handle_no_return(v7);
        __assert_fail(
          "status == kRemoveTile",
          "./src/pathfinding/Internal/Obstacles/HavokSihouetteCutter.cpp",
          0x185u,
          "void HavokSihouetteCutter::ApplyCuttingResult()");
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_DynamicNavMesh, v9);
      p_y = this->m_DynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)res + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
      {
        p_y = (DynamicNavMesh *)&res->y;
        __asan_report_load4(&res->y);
      }
      v17 = res->y;
      if ( *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) <= 3 )
      {
        p_y = (DynamicNavMesh *)&res->x;
        __asan_report_load4(&res->x);
      }
      v18 = v17;
      id = (unsigned __int16)surfaceID;
      DynamicNavMesh::RemoveTile(p_y, surfaceID, tileIndex, res->x, v18);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_DynamicNavMesh, v9);
      p_x = this->m_DynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)res + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
      {
        p_x = (DynamicNavMesh *)&res->y;
        __asan_report_load4(&res->y);
      }
      v14 = res->y;
      if ( *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&res->x >> 3) + 0x7FFF8000) <= 3 )
      {
        p_x = (DynamicNavMesh *)&res->x;
        __asan_report_load4(&res->x);
      }
      v15 = v14;
      id = (unsigned __int16)surfaceID;
      DynamicNavMesh::RemoveTile(p_x, surfaceID, tileIndex, res->x, v15);
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
          id = (unsigned __int16)surfaceID;
          DynamicNavMesh::HavokReplaceTile(
            this->m_DynamicNavMesh,
            surfaceID,
            tileIndex,
            res->carvedData,
            res->carvedDataSize);
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_CPUProfilingMode);
    }
    if ( this->m_CPUProfilingMode == CPMT_DETAIL_LOG )
    {
      cost_time = common::tools::TimeUtils::Timer::time(v2 + 2);
      i_0 = 0;
      size = dynamic_array<NavMeshCarveShape,true,4ul>::size(&carveData->m_Shapes);
      while ( i_0 < size )
      {
        v19 = dynamic_array<NavMeshCarveShape,true,4ul>::operator[](&carveData->m_Shapes, i_0);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        id = v20->id;
        v21 = (__int64)dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](
                         &this->m_ObstacleInfo,
                         id);
        if ( *(_BYTE *)(((unsigned __int64)(v21 + 136) >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v21 + 136, id);
        *(_QWORD *)(v21 + 136) += cost_time;
        ++i_0;
      }
    }
    common::tools::TimeUtils::Timer::~Timer(v2 + 2);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_CPUProfilingMode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_CPUProfilingMode);
  }
  if ( this->m_CPUProfilingMode == CPMT_DETAIL_LOG )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_DynamicNavMesh, id);
    MgrPtr = DynamicNavMesh::GetMgrPtr(this->m_DynamicNavMesh);
    cpuMgr = NavMeshManager::GetCPUProfilingMgr(MgrPtr);
    i_1 = 0;
    size_0 = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::size(&this->m_ObstacleInfo);
    while ( i_1 < size_0 )
    {
      info = dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul>::operator[](&this->m_ObstacleInfo, i_1);
      if ( *(_BYTE *)(((unsigned __int64)&info->obstacle >> 3) + 0x7FFF8000) )
        __asan_report_load8(&info->obstacle, i_1);
      if ( info->obstacle )
      {
        if ( *(_BYTE *)(((unsigned __int64)&info->cost_time >> 3) + 0x7FFF8000) )
          __asan_report_load8(&info->cost_time, i_1);
        if ( info->cost_time )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicNavMesh >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_DynamicNavMesh, i_1);
          UniqueToken = DynamicNavMesh::GetUniqueToken(this->m_DynamicNavMesh);
          if ( *(_BYTE *)(((unsigned __int64)&info->obstacle >> 3) + 0x7FFF8000) )
          {
            UniqueToken = (_DWORD)info + 120;
            __asan_report_load8(&info->obstacle, i_1);
          }
          obstacle = info->obstacle;
          if ( *(_BYTE *)(((unsigned __int64)&info->cost_time >> 3) + 0x7FFF8000) )
          {
            UniqueToken = (_DWORD)info + 136;
            __asan_report_load8(&info->cost_time, i_1);
          }
          CPUProfilingMgr::AddObstacleInfo(cpuMgr, info->cost_time, obstacle, UniqueToken);
          if ( *(_BYTE *)(((unsigned __int64)&info->cost_time >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          info->cost_time = 0LL;
        }
      }
      ++i_1;
    }
  }
  std::vector<CarveData,stl_allocator<CarveData,16>>::clear(&this->m_TileCarveData);
  dynamic_array<CuttingResult,true,8ul>::clear(&this->m_CuttingResults);
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->start_tv_.tv_sec = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
