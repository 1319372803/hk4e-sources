// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp

// Line 4: range 000000000CC9D82E-000000000CC9DACC
void __cdecl StaticNavMesh::StaticNavMesh(StaticNavMesh *const this)
{
  NavMesh *v1; // rbx
  std::less<int> comp; // [rsp+1Eh] [rbp-12h] BYREF
  stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> a; // [rsp+1Fh] [rbp-11h] BYREF

  Vector3f::Vector3f(&this->m_LegacyQueryExtents);
  Vector3f::Vector3f(&this->m_LegacyLinkQueryExtents);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMesh = 0LL;
  stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>::stl_allocator(&a);
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::vector_map(
    &this->m_LoadedSurfaces,
    &comp,
    &a);
  stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>::~stl_allocator(&a);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_ID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_ID);
  }
  this->m_ID = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activityID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activityID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activityID);
  }
  this->activityID = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->polygon_id);
  }
  this->polygon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_tag_hash);
  }
  this->scene_tag_hash = 0;
  v1 = (NavMesh *)operator new(0xC0uLL, 0x10uLL, "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp", 6);
  NavMesh::NavMesh(v1);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMesh = v1;
  ThreadSafeCountMgr::Add(CountTypeStaticNavMesh, 1);
};

// Line 9: range 000000000CC9DACE-000000000CC9DB61
void __cdecl StaticNavMesh::~StaticNavMesh(StaticNavMesh *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, v1);
  delete_internal<NavMesh>(this->m_NavMesh);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMesh = 0LL;
  ThreadSafeCountMgr::Add(CountTypeStaticNavMesh, -1);
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::~vector_map(&this->m_LoadedSurfaces);
};

// Line 16: range 000000000CC9DB62-000000000CC9E8DD
void __cdecl StaticNavMesh::AddMeshData(
        StaticNavMesh *const this,
        const std::shared_ptr<NavMeshData> *navMeshData,
        const Vector3f *position,
        const Quaternionf *rotation)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  float *p_agentRadius; // rax
  float agentRadius; // xmm1_4
  float v10; // xmm1_4
  char v11; // dl
  __int64 v12; // rsi
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  NavMesh *m_NavMesh; // r14
  int v16; // eax
  __int64 v17; // rsi
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const AutoOffMeshLinkData *v20; // rax
  __int64 v21; // rsi
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  NavMesh *v23; // rcx
  double v24; // xmm0_8
  std::shared_ptr<NavMeshData> *v25; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t NavMeshDataID; // edx
  StaticNavMesh *thisa; // [rsp+18h] [rbp-168h]
  unsigned __int16 surfaceID; // [rsp+2Ah] [rbp-156h]
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type v33; // [rsp+2Ch] [rbp-154h] BYREF
  int i; // [rsp+30h] [rbp-150h]
  int i_0; // [rsp+34h] [rbp-14Ch]
  int dataSize; // [rsp+38h] [rbp-148h]
  NavMeshStatus status; // [rsp+3Ch] [rbp-144h]
  __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > __lhs; // [rsp+40h] [rbp-140h] BYREF
  const NavMeshBuildSettings *settings; // [rsp+48h] [rbp-138h]
  const NavMeshTileDataVector *tiles; // [rsp+50h] [rbp-130h]
  const OffMeshLinkDataVector *offMeshLinks; // [rsp+58h] [rbp-128h]
  const AutoOffMeshLinkData *data; // [rsp+60h] [rbp-120h]
  NavMeshPolyRef ref; // [rsp+68h] [rbp-118h]
  const NavMeshTileData *tile; // [rsp+70h] [rbp-110h]
  const unsigned __int8 *byteData; // [rsp+78h] [rbp-108h]
  Vector3f v46; // [rsp+84h] [rbp-FCh] BYREF
  common::milog::MiLogStream v47; // [rsp+90h] [rbp-F0h] BYREF
  char v48[208]; // [rsp+B0h] [rbp-D0h] BYREF

  thisa = this;
  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (StaticNavMesh *const)160;
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 6 ref:44 64 64 7 conn:72";
  *(_QWORD *)(v4 + 16) = StaticNavMesh::AddMeshData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
  {
    this = (StaticNavMesh *const)&thisa->m_NavMesh;
    __asan_report_load8(&thisa->m_NavMesh, navMeshData);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
      0x11u,
      "void StaticNavMesh::AddMeshData(const std::shared_ptr<NavMeshData>&, const Vector3f&, const Quaternionf&)");
  }
  if ( std::operator==<NavMeshData>(navMeshData, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
      "AddMeshData",
      20);
    common::milog::MiLogStream::operator()(&v47, "navMeshData is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v47);
  }
  else
  {
    v7 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    settings = NavMeshData::GetNavMeshBuildSettings(v7);
    p_agentRadius = &settings->agentRadius;
    if ( *(_BYTE *)(((unsigned __int64)p_agentRadius >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_agentRadius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_agentRadius >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_agentRadius);
    }
    agentRadius = settings->agentRadius;
    if ( *(_BYTE *)(((unsigned __int64)&settings->agentHeight >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)settings + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentHeight >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&settings->agentHeight);
    }
    Vector3f::Vector3f(&v46, settings->agentRadius, settings->agentHeight, agentRadius);
    if ( *(char *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&thisa->m_LegacyQueryExtents.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)thisa + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->m_LegacyQueryExtents.z + 3) >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_store_n(thisa, 12LL);
    }
    thisa->m_LegacyQueryExtents = v46;
    if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&settings->agentRadius);
    }
    v10 = settings->agentRadius;
    if ( *(_BYTE *)(((unsigned __int64)&settings->agentClimb >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)settings + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentClimb >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&settings->agentClimb);
    }
    Vector3f::Vector3f(&v46, settings->agentRadius, settings->agentClimb, v10);
    v11 = *(_BYTE *)((((unsigned __int64)&thisa->m_LegacyLinkQueryExtents.z + 3) >> 3) + 0x7FFF8000);
    v12 = v11 != 0;
    if ( ((((unsigned __int8)thisa + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->m_LegacyLinkQueryExtents >> 3)
                                                          + 0x7FFF8000)
       && *(_BYTE *)(((unsigned __int64)&thisa->m_LegacyLinkQueryExtents >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v12 & ((((unsigned __int8)thisa + 23) & 7) >= v11) )
    {
      v12 = 12LL;
      __asan_report_store_n(&thisa->m_LegacyLinkQueryExtents, 12LL);
    }
    thisa->m_LegacyLinkQueryExtents = v46;
    v13 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    tiles = NavMeshData::GetNavMeshTiles(v13);
    v14 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    surfaceID = NavMeshData::GetSurfaceID(v14);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_NavMesh, v12);
    m_NavMesh = thisa->m_NavMesh;
    v16 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles);
    NavMesh::CreateSurface(
      m_NavMesh,
      surfaceID,
      v16,
      (unsigned __int64)settings,
      (unsigned __int64)position,
      (unsigned __int64)rotation);
    if ( !surfaceID )
    {
      __asan_handle_no_return(m_NavMesh);
      __assert_fail(
        "surfaceID != 0",
        "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
        0x21u,
        "void StaticNavMesh::AddMeshData(const std::shared_ptr<NavMeshData>&, const Vector3f&, const Quaternionf&)");
    }
    for ( i = 0; i < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles); ++i )
    {
      v17 = i;
      tile = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles, i);
      byteData = dynamic_array<unsigned char,false,1ul>::begin(&tile->m_MeshData);
      dataSize = dynamic_array<unsigned char,false,1ul>::size(&tile->m_MeshData);
      if ( byteData && dataSize )
      {
        *(_QWORD *)(v4 + 32) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_NavMesh, v17);
        status = NavMesh::AddTile(
                   thisa->m_NavMesh,
                   (unsigned __int64)byteData,
                   dataSize,
                   kTileLeakData,
                   surfaceID,
                   i,
                   (NavMeshTileRef *)(v4 + 32));
        if ( NavMeshStatusFailed(status) )
        {
          if ( NavMeshStatusDetail(status, 1u) || NavMeshStatusDetail(status, 2u) )
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
              "AddMeshData",
              53);
            common::milog::MiLogStream::operator()(
              &v47,
              "Loading NavMesh failed - wrong format. Please rebake the NavMesh.");
            common::milog::MiLogStream::~MiLogStream(&v47);
          }
          else
          {
            if ( NavMeshStatusDetail(status, 4u) )
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
                "AddMeshData",
                57);
              common::milog::MiLogStream::operator()(&v47, "Loading NavMesh failed - out of memory.");
            }
            else
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
                "AddMeshData",
                61);
              common::milog::MiLogStream::operator()(
                &v47,
                "Loading NavMesh tile #%d failed. Error code: %x",
                (unsigned int)i,
                status);
            }
            common::milog::MiLogStream::~MiLogStream(&v47);
          }
          goto LABEL_68;
        }
      }
    }
    v19 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    offMeshLinks = NavMeshData::GetOffMeshLinks(v19);
    for ( i_0 = 0; i_0 < std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::size(offMeshLinks); ++i_0 )
    {
      data = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::operator[](offMeshLinks, i_0);
      OffMeshConnectionParams::OffMeshConnectionParams((OffMeshConnectionParams *const)(v4 + 64));
      if ( ((unsigned __int8)data & 7) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&data->m_Start.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)data + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Start.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(data, 12LL);
      }
      v20 = data;
      *(_QWORD *)(v4 + 64) = *(_QWORD *)&data->m_Start.x;
      *(float *)(v4 + 72) = v20->m_Start.z;
      if ( (((unsigned __int8)data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_End >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&data->m_End >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&data->m_End.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)data + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_End.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(&data->m_End, 12LL);
      }
      *(Vector3f *)(v4 + 76) = data->m_End;
      Vector3f::Vector3f(&v46, 0.0, 1.0, 0.0);
      *(Vector3f *)(v4 + 88) = v46;
      *(_DWORD *)(v4 + 100) = 0;
      *(_DWORD *)(v4 + 104) = -1082130432;
      if ( *(_BYTE *)(((unsigned __int64)&data->m_LinkDirection >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)data + 31) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_LinkDirection >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&data->m_LinkDirection);
      }
      *(_BYTE *)(v4 + 108) = data->m_LinkDirection;
      if ( *(_BYTE *)(((unsigned __int64)&data->m_Area >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)data + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Area >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&data->m_Area);
      }
      *(_DWORD *)(v4 + 112) = 1 << data->m_Area;
      *(_BYTE *)(v4 + 116) = data->m_Area;
      v21 = (((_BYTE)data + 28) & 7u) + 1;
      if ( *(_BYTE *)(((unsigned __int64)&data->m_LinkType >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)data + 28) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&data->m_LinkType >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&data->m_LinkType);
      }
      *(_WORD *)(v4 + 118) = data->m_LinkType;
      *(_DWORD *)(v4 + 120) = 0;
      v22 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      *(_DWORD *)(v4 + 124) = NavMeshData::GetAgentTypeID(v22);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_NavMesh, v21);
      v23 = thisa->m_NavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&settings->agentClimb >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentClimb >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&settings->agentClimb);
      }
      *(float *)&v24 = settings->agentClimb;
      if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                               + 0x7FFF8000) )
      {
        v24 = __asan_report_load4(&settings->agentRadius);
      }
      ref = NavMesh::AddOffMeshConnection(
              v23,
              (const OffMeshConnectionParams *)(v4 + 64),
              settings->agentRadius,
              *(float *)&v24);
    }
    *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator *)(v4 + 32) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&thisa->m_LoadedSurfaces);
    v33 = surfaceID;
    __lhs._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find(
                         &thisa->m_LoadedSurfaces,
                         &v33)._M_current;
    if ( !__gnu_cxx::operator==<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            &__lhs,
            (const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 32)) )
    {
      __asan_handle_no_return(&__lhs);
      __assert_fail(
        "m_LoadedSurfaces.find(surfaceID) == m_LoadedSurfaces.end()",
        "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
        0x59u,
        "void StaticNavMesh::AddMeshData(const std::shared_ptr<NavMeshData>&, const Vector3f&, const Quaternionf&)");
    }
    v33 = surfaceID;
    v25 = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::operator[](
            &thisa->m_LoadedSurfaces,
            &v33);
    std::shared_ptr<NavMeshData>::operator=(v25, navMeshData);
    v26 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    NavMeshDataID = NavMeshData::GetNavMeshDataID(v26);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_ID >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->m_ID >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->m_ID);
    }
    thisa->m_ID = NavMeshDataID;
  }
LABEL_68:
  if ( v48 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 95: range 000000000CC9E8DE-000000000CC9FF94
// local variable allocation has failed, the output may be wrong!
void __cdecl StaticNavMesh::AddMeshData(
        StaticNavMesh *const this,
        const std::shared_ptr<NavMeshData> *navMeshData,
        bool can_not_repeat)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  SurfaceIDType *p_block_id; // rax
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::mapped_type *v8; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const BlockInfo *v10; // rdx
  uint32_t *p_activity_id; // rax
  __int64 activity_id; // rsi
  uint32_t v13; // r8d
  unsigned int m_ID; // edi
  __int64 tile_pos_y; // rcx
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  float *p_agentRadius; // rax
  float agentRadius; // xmm1_4
  float v19; // xmm1_4
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const AABB *SourceBounds; // rdx
  Vector3f *p_m_Extent; // rax
  double v24; // xmm0_8
  float tileSize; // xmm2_4
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  const AABB *v27; // rdx
  float *p_z; // rax
  double v29; // xmm0_8
  float v30; // xmm2_4
  __int64 v31; // rsi
  TileLUT *TileLUT; // rsi
  NavMesh *m_NavMesh; // r14
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  int v36; // eax
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::size_type v37; // r14
  __int64 v38; // rsi
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::size_type v41; // r14
  const AutoOffMeshLinkData *v42; // rax
  __int64 v43; // rsi
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  NavMesh *v45; // rcx
  double v46; // xmm0_8
  std::shared_ptr<NavMeshData> *v47; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  uint32_t NavMeshDataID; // edx
  uint32_t polygon_id; // ecx
  __int64 v51; // rsi
  uint32_t scene_tag_hash; // ecx
  char v53; // al
  unsigned int v54; // edi
  unsigned int tile_pos_x; // esi
  __int64 v56; // rcx
  int v57; // [rsp+8h] [rbp-1D8h]
  StaticNavMesh *thisa; // [rsp+18h] [rbp-1C8h]
  unsigned __int16 surfaceID; // [rsp+2Ah] [rbp-1B6h]
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type v62; // [rsp+2Ch] [rbp-1B4h] BYREF
  int i; // [rsp+30h] [rbp-1B0h]
  int i_0; // [rsp+34h] [rbp-1ACh]
  int block_tile_count_x; // [rsp+38h] [rbp-1A8h]
  int block_tile_count_y; // [rsp+3Ch] [rbp-1A4h]
  int dataSize; // [rsp+40h] [rbp-1A0h]
  NavMeshStatus status; // [rsp+44h] [rbp-19Ch]
  __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > __lhs; // [rsp+48h] [rbp-198h] BYREF
  const BlockInfo *blockInfo; // [rsp+50h] [rbp-190h]
  const NavMeshBuildSettings *settings; // [rsp+58h] [rbp-188h]
  const NavMeshTileDataVector *tiles; // [rsp+60h] [rbp-180h]
  const OffMeshLinkDataVector *offMeshLinks; // [rsp+68h] [rbp-178h]
  const AutoOffMeshLinkData *data; // [rsp+70h] [rbp-170h]
  NavMeshPolyRef ref; // [rsp+78h] [rbp-168h]
  const NavMeshTileData *tile; // [rsp+80h] [rbp-160h]
  const unsigned __int8 *byteData; // [rsp+88h] [rbp-158h]
  Vector3f pos; // [rsp+94h] [rbp-14Ch] BYREF
  Quaternionf rot; // [rsp+A0h] [rbp-140h] BYREF
  common::milog::MiLogStream v80; // [rsp+B0h] [rbp-130h] BYREF
  char v81[272]; // [rsp+D0h] [rbp-110h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (StaticNavMesh *const)224;
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 7 ref:139 64 32 11 tilelut:127 128 64 8 conn:169";
  *(_QWORD *)(v3 + 16) = StaticNavMesh::AddMeshData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -218959118;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
  {
    this = (StaticNavMesh *const)&thisa->m_NavMesh;
    __asan_report_load8(&thisa->m_NavMesh, navMeshData);
  }
  if ( !thisa->m_NavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_NavMesh",
      "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
      0x60u,
      "void StaticNavMesh::AddMeshData(const std::shared_ptr<NavMeshData>&, bool)");
  }
  if ( std::__shared_ptr<NavMeshData,(__gnu_cxx::_Lock_policy)2>::get(navMeshData) )
  {
    v6 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    blockInfo = NavMeshData::GetBlockInfo(v6);
    p_block_id = &blockInfo->block_id;
    if ( *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_block_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(p_block_id);
    }
    surfaceID = blockInfo->block_id;
    *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator *)(v3 + 32) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&thisa->m_LoadedSurfaces);
    v62 = surfaceID;
    __lhs._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find(
                         &thisa->m_LoadedSurfaces,
                         &v62)._M_current;
    if ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
           &__lhs,
           (const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v3 + 32)) )
    {
      if ( can_not_repeat )
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
          "AddMeshData",
          107);
        v62 = surfaceID;
        v8 = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::operator[](
               &thisa->m_LoadedSurfaces,
               &v62);
        v9 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
        v10 = NavMeshData::GetBlockInfo(v9);
        p_activity_id = &v10->activity_id;
        if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_activity_id);
        }
        activity_id = v10->activity_id;
        if ( *(_BYTE *)(((unsigned __int64)&blockInfo->activity_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)blockInfo + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blockInfo->activity_id >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&blockInfo->activity_id);
        }
        v13 = blockInfo->activity_id;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_ID >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_ID >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->m_ID);
        }
        m_ID = thisa->m_ID;
        if ( *(_BYTE *)(((unsigned __int64)&blockInfo->tile_pos_y >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)blockInfo + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&blockInfo->tile_pos_y >> 3)
                                                                 + 0x7FFF8000) )
        {
          m_ID = (_DWORD)blockInfo + 21;
          __asan_report_load1(&blockInfo->tile_pos_y);
        }
        tile_pos_y = (unsigned int)blockInfo->tile_pos_y;
        if ( *(_BYTE *)(((unsigned __int64)&blockInfo->tile_pos_x >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)blockInfo + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&blockInfo->tile_pos_x >> 3)
                                                                 + 0x7FFF8000) )
        {
          m_ID = (_DWORD)blockInfo + 20;
          __asan_report_load1(&blockInfo->tile_pos_x);
        }
        common::milog::MiLogStream::operator()(
          &v80,
          "block is repeat. block_x=%d, block_y=%d, scene_id=%d, new activity_id=%d, old activity_id=%d",
          (unsigned int)blockInfo->tile_pos_x,
          tile_pos_y,
          m_ID,
          v13,
          activity_id);
        common::milog::MiLogStream::~MiLogStream(&v80);
      }
    }
    else
    {
      v16 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      settings = NavMeshData::GetNavMeshBuildSettings(v16);
      p_agentRadius = &settings->agentRadius;
      if ( *(_BYTE *)(((unsigned __int64)p_agentRadius >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_agentRadius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_agentRadius >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_agentRadius);
      }
      agentRadius = settings->agentRadius;
      if ( *(_BYTE *)(((unsigned __int64)&settings->agentHeight >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentHeight >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&settings->agentHeight);
      }
      Vector3f::Vector3f(&pos, settings->agentRadius, settings->agentHeight, agentRadius);
      if ( *(char *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&thisa->m_LegacyQueryExtents.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)thisa + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->m_LegacyQueryExtents.z + 3) >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store_n(thisa, 12LL);
      }
      thisa->m_LegacyQueryExtents = pos;
      if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&settings->agentRadius);
      }
      v19 = settings->agentRadius;
      if ( *(_BYTE *)(((unsigned __int64)&settings->agentClimb >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentClimb >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&settings->agentClimb);
      }
      Vector3f::Vector3f(&pos, settings->agentRadius, settings->agentClimb, v19);
      if ( (((unsigned __int8)thisa + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->m_LegacyLinkQueryExtents >> 3)
                                                           + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&thisa->m_LegacyLinkQueryExtents >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&thisa->m_LegacyLinkQueryExtents.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)thisa + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->m_LegacyLinkQueryExtents.z + 3) >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store_n(&thisa->m_LegacyLinkQueryExtents, 12LL);
      }
      thisa->m_LegacyLinkQueryExtents = pos;
      v20 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      tiles = NavMeshData::GetNavMeshTiles(v20);
      v21 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      SourceBounds = NavMeshData::GetSourceBounds(v21);
      p_m_Extent = &SourceBounds->m_Extent;
      if ( *(_BYTE *)(((unsigned __int64)p_m_Extent >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_m_Extent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_m_Extent >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_m_Extent);
      }
      *(float *)&v24 = SourceBounds->m_Extent.x + SourceBounds->m_Extent.x;
      if ( *(_BYTE *)(((unsigned __int64)&settings->tileSize >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->tileSize >> 3)
                                                                + 0x7FFF8000) )
      {
        v24 = __asan_report_load4(&settings->tileSize);
      }
      tileSize = (float)settings->tileSize;
      if ( *(_BYTE *)(((unsigned __int64)&settings->cellSize >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->cellSize >> 3)
                                                                + 0x7FFF8000) )
      {
        v24 = __asan_report_load4(&settings->cellSize);
      }
      block_tile_count_x = FloorfToInt(*(float *)&v24 / (float)(settings->cellSize * tileSize));
      v26 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      v27 = NavMeshData::GetSourceBounds(v26);
      p_z = &v27->m_Extent.z;
      if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_z);
      }
      *(float *)&v29 = v27->m_Extent.z + v27->m_Extent.z;
      if ( *(_BYTE *)(((unsigned __int64)&settings->tileSize >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->tileSize >> 3)
                                                                + 0x7FFF8000) )
      {
        v29 = __asan_report_load4(&settings->tileSize);
      }
      v30 = (float)settings->tileSize;
      v31 = (((_BYTE)settings + 36) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&settings->cellSize >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->cellSize >> 3)
                                                                + 0x7FFF8000) )
      {
        v29 = __asan_report_load4(&settings->cellSize);
      }
      block_tile_count_y = FloorfToInt(*(float *)&v29 / (float)(settings->cellSize * v30));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_NavMesh, v31);
      TileLUT = NavMesh::GetTileLUT(thisa->m_NavMesh);
      vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::vector_map(
        (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const)(v3 + 64),
        TileLUT);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_NavMesh, TileLUT);
      m_NavMesh = thisa->m_NavMesh;
      v34 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      rot = NavMeshData::GetRotation(v34);
      v35 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      pos = NavMeshData::GetPosition(v35);
      v57 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles);
      v36 = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::size((const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const)(v3 + 64));
      NavMesh::CreateSurface(
        m_NavMesh,
        surfaceID,
        v57 + v36,
        (unsigned __int64)settings,
        (unsigned __int64)&pos,
        (unsigned __int64)&rot);
      for ( i = 0; ; ++i )
      {
        v37 = i;
        if ( v37 >= std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles) )
          break;
        v38 = i;
        tile = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles, i);
        byteData = dynamic_array<unsigned char,false,1ul>::begin(&tile->m_MeshData);
        dataSize = dynamic_array<unsigned char,false,1ul>::size(&tile->m_MeshData);
        if ( byteData && dataSize )
        {
          *(_QWORD *)(v3 + 32) = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->m_NavMesh, v38);
          status = NavMesh::AddTile(
                     thisa->m_NavMesh,
                     (unsigned __int64)byteData,
                     dataSize,
                     kTileLeakData,
                     surfaceID,
                     i,
                     (NavMeshTileRef *)(v3 + 32));
          if ( NavMeshStatusFailed(status) )
          {
            if ( NavMeshStatusDetail(status, 1u) || NavMeshStatusDetail(status, 2u) )
            {
              common::milog::MiLogStream::create(
                &v80,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
                "AddMeshData",
                150);
              common::milog::MiLogStream::operator()(
                &v80,
                "Loading NavMesh failed - wrong format. Please rebake the NavMesh.");
              common::milog::MiLogStream::~MiLogStream(&v80);
            }
            else
            {
              if ( NavMeshStatusDetail(status, 4u) )
              {
                common::milog::MiLogStream::create(
                  &v80,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
                  "AddMeshData",
                  154);
                common::milog::MiLogStream::operator()(&v80, "Loading NavMesh failed - out of memory.");
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v80,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
                  "AddMeshData",
                  158);
                common::milog::MiLogStream::operator()(
                  &v80,
                  "Loading NavMesh tile #%d failed. Error code: %x",
                  (unsigned int)i,
                  status);
              }
              common::milog::MiLogStream::~MiLogStream(&v80);
            }
            goto LABEL_116;
          }
        }
      }
      v40 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      offMeshLinks = NavMeshData::GetOffMeshLinks(v40);
      for ( i_0 = 0; ; ++i_0 )
      {
        v41 = i_0;
        if ( v41 >= std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::size(offMeshLinks) )
          break;
        data = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::operator[](offMeshLinks, i_0);
        OffMeshConnectionParams::OffMeshConnectionParams((OffMeshConnectionParams *const)(v3 + 128));
        if ( ((unsigned __int8)data & 7) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&data->m_Start.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)data + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Start.z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load_n(data, 12LL);
        }
        v42 = data;
        *(_QWORD *)(v3 + 128) = *(_QWORD *)&data->m_Start.x;
        *(float *)(v3 + 136) = v42->m_Start.z;
        if ( (((unsigned __int8)data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_End >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&data->m_End >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&data->m_End.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)data + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_End.z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(&data->m_End, 12LL);
        }
        *(Vector3f *)(v3 + 140) = data->m_End;
        Vector3f::Vector3f(&pos, 0.0, 1.0, 0.0);
        *(Vector3f *)(v3 + 152) = pos;
        *(_DWORD *)(v3 + 164) = 0;
        *(_DWORD *)(v3 + 168) = -1082130432;
        if ( *(_BYTE *)(((unsigned __int64)&data->m_LinkDirection >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)data + 31) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_LinkDirection >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&data->m_LinkDirection);
        }
        *(_BYTE *)(v3 + 172) = data->m_LinkDirection;
        if ( *(_BYTE *)(((unsigned __int64)&data->m_Area >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)data + 30) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Area >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&data->m_Area);
        }
        *(_DWORD *)(v3 + 176) = 1 << data->m_Area;
        *(_BYTE *)(v3 + 180) = data->m_Area;
        v43 = (((_BYTE)data + 28) & 7u) + 1;
        if ( *(_BYTE *)(((unsigned __int64)&data->m_LinkType >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)data + 28) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&data->m_LinkType >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(&data->m_LinkType);
        }
        *(_WORD *)(v3 + 182) = data->m_LinkType;
        *(_DWORD *)(v3 + 184) = 0;
        v44 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
        *(_DWORD *)(v3 + 188) = NavMeshData::GetAgentTypeID(v44);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->m_NavMesh, v43);
        v45 = thisa->m_NavMesh;
        if ( *(_BYTE *)(((unsigned __int64)&settings->agentClimb >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)settings + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentClimb >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&settings->agentClimb);
        }
        *(float *)&v46 = settings->agentClimb;
        if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                                 + 0x7FFF8000) )
        {
          v46 = __asan_report_load4(&settings->agentRadius);
        }
        ref = NavMesh::AddOffMeshConnection(
                v45,
                (const OffMeshConnectionParams *)(v3 + 128),
                settings->agentRadius,
                *(float *)&v46);
      }
      *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator *)(v3 + 32) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&thisa->m_LoadedSurfaces);
      v62 = surfaceID;
      __lhs._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find(
                           &thisa->m_LoadedSurfaces,
                           &v62)._M_current;
      if ( !__gnu_cxx::operator==<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
              &__lhs,
              (const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v3 + 32)) )
      {
        __asan_handle_no_return(&__lhs);
        __assert_fail(
          "m_LoadedSurfaces.find(surfaceID) == m_LoadedSurfaces.end()",
          "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
          0xBAu,
          "void StaticNavMesh::AddMeshData(const std::shared_ptr<NavMeshData>&, bool)");
      }
      v62 = surfaceID;
      v47 = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::operator[](
              &thisa->m_LoadedSurfaces,
              &v62);
      std::shared_ptr<NavMeshData>::operator=(v47, navMeshData);
      v48 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
      NavMeshDataID = NavMeshData::GetNavMeshDataID(v48);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_ID >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->m_ID >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&thisa->m_ID);
      }
      thisa->m_ID = NavMeshDataID;
      if ( *(_BYTE *)(((unsigned __int64)&blockInfo->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)blockInfo + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blockInfo->activity_id >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&blockInfo->activity_id);
      }
      StaticNavMesh::SetActivityID(thisa, blockInfo->activity_id);
      if ( *(_BYTE *)(((unsigned __int64)&blockInfo->polygon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)blockInfo + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blockInfo->polygon_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&blockInfo->polygon_id);
      }
      polygon_id = blockInfo->polygon_id;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->polygon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->polygon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&thisa->polygon_id);
      }
      thisa->polygon_id = polygon_id;
      v51 = (((_BYTE)blockInfo + 16) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&blockInfo->scene_tag_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)blockInfo + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blockInfo->scene_tag_hash >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&blockInfo->scene_tag_hash);
      }
      scene_tag_hash = blockInfo->scene_tag_hash;
      v53 = *(_BYTE *)(((unsigned __int64)&thisa->scene_tag_hash >> 3) + 0x7FFF8000);
      LOBYTE(v51) = v53 != 0;
      if ( v53 != 0 && v53 <= 3 )
        __asan_report_store4(&thisa->scene_tag_hash);
      thisa->scene_tag_hash = scene_tag_hash;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->m_NavMesh, v51);
      if ( NavMesh::GetMaxRegionId(thisa->m_NavMesh) > 0x7FFE )
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
          "AddMeshData",
          197);
        if ( *(_BYTE *)(((unsigned __int64)&blockInfo->tile_pos_y >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)blockInfo + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&blockInfo->tile_pos_y >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load1(&blockInfo->tile_pos_y);
        }
        v54 = blockInfo->tile_pos_y;
        if ( *(_BYTE *)(((unsigned __int64)&blockInfo->tile_pos_x >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)blockInfo + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&blockInfo->tile_pos_x >> 3)
                                                                 + 0x7FFF8000) )
        {
          v54 = (_DWORD)blockInfo + 20;
          __asan_report_load1(&blockInfo->tile_pos_x);
        }
        tile_pos_x = blockInfo->tile_pos_x;
        if ( *(_BYTE *)(((unsigned __int64)&blockInfo->activity_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)blockInfo + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blockInfo->activity_id >> 3)
                                                                  + 0x7FFF8000) )
        {
          v54 = (_DWORD)blockInfo + 8;
          __asan_report_load4(&blockInfo->activity_id);
        }
        v56 = blockInfo->activity_id;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->m_ID >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->m_ID >> 3) + 0x7FFF8000) <= 3 )
        {
          v54 = (_DWORD)thisa + 64;
          __asan_report_load4(&thisa->m_ID);
        }
        common::milog::MiLogStream::operator()(
          &v80,
          "GetMaxRegionId error! scene_id:%u, activity_id:%u, block_x=%d, block_y=%d",
          thisa->m_ID,
          v56,
          tile_pos_x,
          v54);
        common::milog::MiLogStream::~MiLogStream(&v80);
      }
LABEL_116:
      vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::~vector_map((vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const)(v3 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
      "AddMeshData",
      99);
    common::milog::MiLogStream::operator()(&v80, "navMeshData is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v80);
  }
  if ( v81 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 201: range 000000000CC9FF96-000000000CCA0028
void __cdecl StaticNavMesh::ForeachNavMeshData(
        const StaticNavMesh *const this,
        const StaticNavMesh::ForeachNavMeshCallbackHandle *callback)
{
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *__for_range; // [rsp+20h] [rbp-10h]
  const std::pair<int,std::shared_ptr<NavMeshData> > *surface; // [rsp+28h] [rbp-8h]

  __for_range = &this->m_LoadedSurfaces;
  __for_begin._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->m_LoadedSurfaces)._M_current;
  __for_end._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            &__for_begin,
            &__for_end) )
  {
    surface = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator*(&__for_begin);
    if ( !std::function<bool ()(std::shared_ptr<NavMeshData> const&)>::operator()(callback, &surface->second) )
      break;
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator++(&__for_begin);
  }
};

// Line 212: range 000000000CCA002A-000000000CCA05B5
void __cdecl StaticNavMesh::GetSourceTileDataBounds(
        const StaticNavMesh *const this,
        dynamic_array<TileLocation,false,4> *locations)
{
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char *v6; // rdi
  std::pair<int,std::shared_ptr<NavMeshData> > *v7; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::const_reference v9; // rax
  __int64 v10; // rdx
  SurfaceIDType v11; // di
  int i; // [rsp+18h] [rbp-108h]
  int surfaceID; // [rsp+1Ch] [rbp-104h]
  size_t totalTileCount; // [rsp+20h] [rbp-100h]
  std::shared_ptr<NavMeshData> *navMeshData_0; // [rsp+28h] [rbp-F8h]
  const std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *tiles_0; // [rsp+30h] [rbp-F0h]
  const unsigned __int8 *header; // [rsp+38h] [rbp-E8h]
  TileLocation *loc; // [rsp+40h] [rbp-E0h]
  std::shared_ptr<NavMeshData> *navMeshData; // [rsp+48h] [rbp-D8h]
  const std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *tiles; // [rsp+50h] [rbp-D0h]
  Vector3f min; // [rsp+58h] [rbp-C8h] BYREF
  Vector3f max; // [rsp+64h] [rbp-BCh] BYREF
  MinMaxAABB v23; // [rsp+70h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)v3;
  }
  v2->_M_current = (const std::pair<int,std::shared_ptr<NavMeshData> > *)1102416563;
  v2[1]._M_current = (const std::pair<int,std::shared_ptr<NavMeshData> > *)"2 32 8 7 end:214 64 8 6 it:215";
  v2[2]._M_current = (const std::pair<int,std::shared_ptr<NavMeshData> > *)StaticNavMesh::GetSourceTileDataBounds;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v2[4]._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces)._M_current;
  v2[8]._M_current = 0LL;
  totalTileCount = 0LL;
  v2[8]._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->m_LoadedSurfaces)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            v2 + 8,
            v2 + 4) )
  {
    navMeshData = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->(v2 + 8)->second;
    v5 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    tiles = NavMeshData::GetNavMeshTiles(v5);
    totalTileCount += std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles);
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator++(v2 + 8);
  }
  dynamic_array<TileLocation,false,4ul>::reserve(locations, totalTileCount);
  v2[8]._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->m_LoadedSurfaces)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            v2 + 8,
            v2 + 4) )
  {
    v6 = (char *)&v2[8];
    v7 = (std::pair<int,std::shared_ptr<NavMeshData> > *)__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->(v2 + 8);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (char *)v7;
      __asan_report_load4(v7);
    }
    surfaceID = v7->first;
    if ( !v7->first )
    {
      __asan_handle_no_return(v6);
      __assert_fail(
        "surfaceID != 0",
        "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
        0xE5u,
        "void StaticNavMesh::GetSourceTileDataBounds(dynamic_array<TileLocation>&) const");
    }
    navMeshData_0 = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->(v2 + 8)->second;
    v8 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData_0);
    tiles_0 = NavMeshData::GetNavMeshTiles(v8);
    for ( i = 0; i < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles_0); ++i )
    {
      v9 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles_0, i);
      header = dynamic_array<unsigned char,false,1ul>::begin(&v9->m_MeshData);
      loc = dynamic_array<TileLocation,false,4ul>::push_back(locations);
      if ( (((unsigned __int8)header + 56) & 7) >= *(_BYTE *)(((unsigned __int64)(header + 56) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)(header + 56) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(header + 67) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)header + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(header + 67) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(header + 56, 12LL);
      }
      max = *(Vector3f *)(header + 56);
      if ( (((unsigned __int8)header + 44) & 7) >= *(_BYTE *)(((unsigned __int64)(header + 44) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)(header + 44) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(header + 55) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)header + 55) & 7) >= *(_BYTE *)(((unsigned __int64)(header + 55) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(header + 44, 12LL);
      }
      min = *(Vector3f *)(header + 44);
      MinMaxAABB::MinMaxAABB(&v23, &min, &max);
      if ( ((unsigned __int8)loc & 7) >= *(_BYTE *)(((unsigned __int64)loc >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)loc >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&loc->m_Bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)loc + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&loc->m_Bounds.m_Max.z + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store_n(loc, 24LL);
      }
      v10 = *(_QWORD *)&v23.m_Min.z;
      *(_QWORD *)&loc->m_Bounds.m_Min.x = *(_QWORD *)&v23.m_Min.x;
      *(_QWORD *)&loc->m_Bounds.m_Min.z = v10;
      *(_QWORD *)&loc->m_Bounds.m_Max.y = *(_QWORD *)&v23.m_Max.y;
      v11 = surfaceID;
      if ( *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)loc + 24) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&loc->m_SurfaceID >> 3) + 0x7FFF8000) )
      {
        v11 = (_WORD)loc + 24;
        __asan_report_store2(&loc->m_SurfaceID);
      }
      loc->m_SurfaceID = v11;
      if ( *(_BYTE *)(((unsigned __int64)&loc->m_TileDataIndex >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)loc + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loc->m_TileDataIndex >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&loc->m_TileDataIndex);
      }
      loc->m_TileDataIndex = i;
    }
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator++(v2 + 8);
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const std::pair<int,std::shared_ptr<NavMeshData> > *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 245: range 000000000CCA05B6-000000000CCA071C
const NavMeshTileData *__cdecl StaticNavMesh::GetSourceTileData(
        const StaticNavMesh *const this,
        SurfaceIDType surfaceID,
        int tileDataIndex)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const NavMeshTileData *result; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type v9; // [rsp+14h] [rbp-7Ch] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  const std::shared_ptr<NavMeshData> *navMeshData; // [rsp+20h] [rbp-70h]
  const NavMeshTileDataVector *tiles; // [rsp+28h] [rbp-68h]
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 found:246";
  *(_QWORD *)(v3 + 16) = StaticNavMesh::GetSourceTileData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  v9 = surfaceID;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v3 + 32) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find(&this->m_LoadedSurfaces, &v9);
  __rhs._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v3 + 32),
         &__rhs) )
  {
    result = 0LL;
  }
  else
  {
    navMeshData = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v3 + 32))->second;
    v7 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    tiles = NavMeshData::GetNavMeshTiles(v7);
    result = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles, tileDataIndex);
  }
  if ( v13 == (char *)v3 )
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

// Line 257: range 000000000CCA071E-000000000CCA091C
const NavMeshBuildSettings *__cdecl StaticNavMesh::GetNavMeshBuildSettings(
        const StaticNavMesh *const this,
        SurfaceIDType surfaceID)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const NavMeshBuildSettings *result; // rax
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type v7; // [rsp+1Ch] [rbp-94h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > __rhs; // [rsp+20h] [rbp-90h] BYREF
  const std::shared_ptr<NavMeshData> *navMeshData; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 found:258";
  *(_QWORD *)(v2 + 16) = StaticNavMesh::GetNavMeshBuildSettings;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v7 = surfaceID;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v2 + 32) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find(&this->m_LoadedSurfaces, &v7);
  __rhs._M_current = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces)._M_current;
  if ( !__gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v2 + 32),
          &__rhs) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
      "GetNavMeshBuildSettings",
      259);
    common::milog::MiLogStream::operator()(&v10, "The navmesh surface with ID: %d wasn't found", surfaceID);
    common::milog::MiLogStream::~MiLogStream(&v10);
    __asan_handle_no_return(&v10);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/ServerExpand/StaticNavMesh.cpp",
      0x103u,
      "const NavMeshBuildSettings& StaticNavMesh::GetNavMeshBuildSettings(SurfaceIDType) const");
  }
  navMeshData = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v2 + 32))->second;
  v5 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
  result = NavMeshData::GetNavMeshBuildSettings(v5);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
