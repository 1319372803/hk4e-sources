// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMeshData.cpp

// Line 14: range 000000000D0735CD-000000000D073A1E
void __cdecl TransferMeshDataByteSwap<StreamedBinaryRead<false>>(
        StreamedBinaryRead<false> *transfer,
        dynamic_array<unsigned char,false,1> *data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rax
  int v9; // r13d
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 7 copy:18";
  *(_QWORD *)(v2 + 16) = TransferMeshDataByteSwap<StreamedBinaryRead<false>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( TransferBase::IsWriting(transfer) )
  {
    dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 32), data);
    if ( !dynamic_array<unsigned char,false,1ul>::empty((const dynamic_array<unsigned char,false,1> *const)(v2 + 32)) )
    {
      v5 = dynamic_array<unsigned char,false,1ul>::size((const dynamic_array<unsigned char,false,1> *const)(v2 + 32));
      v6 = dynamic_array<unsigned char,false,1ul>::operator[](
             (dynamic_array<unsigned char,false,1> *const)(v2 + 32),
             0LL);
      if ( NavMeshDataSwapEndian(v6, v5) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/NavMeshData.cpp",
          "TransferMeshDataByteSwap",
          21);
        common::milog::MiLogStream::operator()(&v12, "!NavMeshDataSwapEndian(&copy[0], copy.size())");
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
      v7 = dynamic_array<unsigned char,false,1ul>::operator[](
             (dynamic_array<unsigned char,false,1> *const)(v2 + 32),
             0LL);
      if ( NavMeshHeaderSwapEndian(v7) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/NavMeshData.cpp",
          "TransferMeshDataByteSwap",
          22);
        common::milog::MiLogStream::operator()(&v12, "!NavMeshHeaderSwapEndian(&copy[0])");
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
    }
    StreamedBinaryRead<false>::Transfer<dynamic_array<unsigned char,false,1ul>>(
      transfer,
      (dynamic_array<unsigned char,false,1> *)(v2 + 32),
      "m_MeshData",
      kNoTransferFlags);
    dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 32));
  }
  else
  {
    StreamedBinaryRead<false>::Transfer<dynamic_array<unsigned char,false,1ul>>(
      transfer,
      data,
      "m_MeshData",
      kNoTransferFlags);
    if ( StreamedBinaryRead<false>::IsReading(transfer) && !dynamic_array<unsigned char,false,1ul>::empty(data) )
    {
      v9 = dynamic_array<unsigned char,false,1ul>::size(data);
      v10 = dynamic_array<unsigned char,false,1ul>::operator[](data, 0LL);
      if ( NavMeshDataSwapEndian(v10, v9) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/NavMeshData.cpp",
          "TransferMeshDataByteSwap",
          32);
        common::milog::MiLogStream::operator()(&v12, "!NavMeshDataSwapEndian(&data[0], data.size())");
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
      v11 = dynamic_array<unsigned char,false,1ul>::operator[](data, 0LL);
      if ( NavMeshHeaderSwapEndian(v11) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/NavMeshData.cpp",
          "TransferMeshDataByteSwap",
          33);
        common::milog::MiLogStream::operator()(&v12, "!NavMeshHeaderSwapEndian(&data[0])");
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 38: range 000000000D047450-000000000D047645
void __cdecl NavMeshTileData::Transfer<StreamedBinaryRead<false>>(
        NavMeshTileData *const this,
        StreamedBinaryRead<false> *transfer)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  int i; // [rsp+10h] [rbp-20h]
  int polyCount; // [rsp+14h] [rbp-1Ch]
  uint32_t polyRegionsSize; // [rsp+18h] [rbp-18h]
  int oldSize; // [rsp+1Ch] [rbp-14h]
  unsigned __int8 *header; // [rsp+20h] [rbp-10h]
  unsigned int *navPolyRegions; // [rsp+28h] [rbp-8h]

  if ( !StreamedBinaryRead<false>::ConvertEndianess(transfer) )
    StreamedBinaryRead<false>::Transfer<dynamic_array<unsigned char,false,1ul>>(
      transfer,
      &this->m_MeshData,
      "m_MeshData",
      kNoTransferFlags);
  else
    TransferMeshDataByteSwap<StreamedBinaryRead<false>>(transfer, &this->m_MeshData);
  if ( StreamedBinaryRead<false>::IsReading(transfer) )
  {
    header = dynamic_array<unsigned char,false,1ul>::data(&this->m_MeshData);
    v2 = (unsigned __int64)(header + 4);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *((_DWORD *)header + 1) == 16 )
    {
      *((_DWORD *)header + 1) = 17;
      if ( *(_BYTE *)(((unsigned __int64)(header + 20) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(header + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(header + 20);
      }
      polyCount = *((_DWORD *)header + 5);
      polyRegionsSize = Align4(4 * polyCount);
      oldSize = dynamic_array<unsigned char,false,1ul>::size(&this->m_MeshData);
      dynamic_array<unsigned char,false,1ul>::resize_uninitialized(
        &this->m_MeshData,
        (int)(oldSize + polyRegionsSize),
        kIncreaseToExactSize);
      navPolyRegions = (unsigned int *)&dynamic_array<unsigned char,false,1ul>::data(&this->m_MeshData)[oldSize];
      for ( i = 0; i < polyCount; ++i )
      {
        v3 = (unsigned __int64)&navPolyRegions[i];
        if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
          && (char)(((4 * i + (_BYTE)navPolyRegions) & 7) + 3) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&navPolyRegions[i]);
        }
        *(_DWORD *)v3 = -1;
      }
    }
  }
  StreamedBinaryRead<false>::Transfer<Hash128>(transfer, &this->m_Hash, "m_Hash", kNoTransferFlags);
};

// Line 85: range 000000000CF46A72-000000000CF46B00
void __cdecl NavMeshParams::Transfer<StreamedBinaryRead<false>>(
        NavMeshParams *const this,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->walkableHeight, "walkableHeight", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->walkableRadius, "walkableRadius", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->walkableClimb, "walkableClimb", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->cellSize, "cellSize", kNoTransferFlags);
};

// Line 93: range 000000000CB745BC-000000000CB749D0
void __cdecl NavMeshData::NavMeshData(NavMeshData *const this)
{
  int (**v1)(...); // rdx
  __int64 v2; // rdx
  Vector3f v3; // [rsp+14h] [rbp-1Ch] BYREF

  v1 = (int (**)(...))(&`vtable for'NavMeshData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshData = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_SurfaceID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_SurfaceID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_SurfaceID);
  }
  this->m_SurfaceID = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshDataID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_NavMeshDataID >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_NavMeshDataID);
  }
  this->m_NavMeshDataID = 0;
  NavMeshBuildSettings::NavMeshBuildSettings(&this->m_NavMeshBuildSettings);
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::vector(&this->m_NavMeshTiles);
  std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::vector(&this->m_OffMeshLinks);
  std::vector<NavMeshObstacleData,stl_allocator<NavMeshObstacleData,16>>::vector(&this->m_NavMeshObstacleData);
  AABB::AABB(&this->m_SourceBounds);
  Quaternionf::Quaternionf(&this->m_Rotation);
  Vector3f::Vector3f(&this->m_Position);
  BlockInfo::BlockInfo(&this->m_BlockInfo);
  if ( *(char *)(((unsigned __int64)&this->m_SourceBounds >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_SourceBounds.m_Extent.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 89) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_SourceBounds.m_Extent.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_SourceBounds, 24LL);
  }
  if ( (char)((unsigned __int64)&AABB::zero & 7) >= *(_BYTE *)(((unsigned __int64)&AABB::zero >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&AABB::zero >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&AABB::zero.m_Extent.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)&AABB::zero.m_Extent.z + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&AABB::zero.m_Extent.z + 3) >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load_n(&AABB::zero, 24LL);
  }
  v2 = *(_QWORD *)&AABB::zero.m_Center.z;
  *(_QWORD *)&this->m_SourceBounds.m_Center.x = *(_QWORD *)&AABB::zero.m_Center.x;
  *(_QWORD *)&this->m_SourceBounds.m_Center.z = v2;
  *(_QWORD *)&this->m_SourceBounds.m_Extent.y = *(_QWORD *)&AABB::zero.m_Extent.y;
  if ( *(_WORD *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->m_Rotation, &AABB::zero);
  this->m_Rotation = Quaternionf::identity();
  Vector3f::Vector3f(&v3, 0.0, 0.0, 0.0);
  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 61) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Position, 12LL);
  }
  this->m_Position = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_AgentTypeID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_AgentTypeID >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_AgentTypeID);
  }
  this->m_AgentTypeID = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_BuildDebugVis >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_BuildDebugVis = 0LL;
  ThreadSafeCountMgr::Add(CountTypeNavMeshData, 1);
};

// Line 103: range 000000000CB749D2-000000000CB74A52
void __cdecl NavMeshData::~NavMeshData(NavMeshData *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NavMeshData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshData = v1;
  ThreadSafeCountMgr::Add(CountTypeNavMeshData, -1);
  std::vector<NavMeshObstacleData,stl_allocator<NavMeshObstacleData,16>>::~vector(&this->m_NavMeshObstacleData);
  std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::~vector(&this->m_OffMeshLinks);
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::~vector(&this->m_NavMeshTiles);
};

// Line 113: range 000000000CB74A54-000000000CB74A5A
void __cdecl NavMeshData::InitializeClass()
{
  ;
};

// Line 120: range 000000000CB74A5C-000000000CB74A62
void __cdecl NavMeshData::CleanupClass()
{
  ;
};

// Line 124: range 000000000CB74A64-000000000CB74A6E
void __cdecl NavMeshData::MainThreadCleanup(NavMeshData *const this)
{
  ;
};

// Line 134: range 000000000CB74A70-000000000CB75073
void __cdecl NavMeshData::UpdateTiles(
        NavMeshData *const this,
        const dynamic_array<int,false,4> *removeTileIDs,
        NavMeshTileDataVector *newTiles,
        dynamic_array<int,false,4> *newTileIDs)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::size_type v7; // rax
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v8; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v9; // rax
  Hash128 *p_m_Hash; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v11; // rax
  int *v12; // rax
  int *v13; // rdx
  int v14; // r14d
  int v15; // r14d
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v16; // rax
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v17; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v18; // rax
  Hash128 *v19; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v20; // rax
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v21; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v22; // rax
  Hash128 *v23; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::reference v24; // rax
  int i; // [rsp+20h] [rbp-E0h]
  int i_0; // [rsp+24h] [rbp-DCh]
  int i_1; // [rsp+28h] [rbp-D8h]
  int i_2; // [rsp+2Ch] [rbp-D4h]
  int newCount; // [rsp+30h] [rbp-D0h]
  NavMeshTileData *data; // [rsp+38h] [rbp-C8h]
  Hash128 rhs; // [rsp+40h] [rbp-C0h] BYREF
  char v34[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 idx:164 64 24 9 stash:140";
  *(_QWORD *)(v4 + 16) = NavMeshData::UpdateTiles;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  dynamic_array<int,false,4ul>::clear(newTileIDs);
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::vector((std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64));
  v7 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(&this->m_NavMeshTiles);
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::resize(
    (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64),
    v7);
  for ( i = 0; i < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(&this->m_NavMeshTiles); ++i )
  {
    v8 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
           (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64),
           i);
    v9 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](&this->m_NavMeshTiles, i);
    dynamic_array<unsigned char,false,1ul>::swap(&v8->m_MeshData, &v9->m_MeshData);
    p_m_Hash = &std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](&this->m_NavMeshTiles, i)->m_Hash;
    v11 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
            (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64),
            i);
    Hash128::operator=(&v11->m_Hash, p_m_Hash);
  }
  for ( i_0 = 0; i_0 < dynamic_array<int,false,4ul>::size(removeTileIDs); ++i_0 )
  {
    v12 = (int *)dynamic_array<int,false,4ul>::operator[](removeTileIDs, i_0);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    data = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
             (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64),
             *v13);
    Hash128::Hash128(&rhs);
    Hash128::operator=(&data->m_Hash, &rhs);
    dynamic_array<unsigned char,false,1ul>::clear(&data->m_MeshData);
  }
  v14 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(&this->m_NavMeshTiles);
  v15 = v14 - dynamic_array<int,false,4ul>::size(removeTileIDs);
  newCount = v15 + std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(newTiles);
  if ( newCount < 0 )
  {
    __asan_handle_no_return(newTiles);
    __assert_fail(
      "newCount >= 0",
      "./src/pathfinding/Internal/NavMeshData.cpp",
      0xA0u,
      "void NavMeshData::UpdateTiles(const dynamic_array<int>&, NavMeshTileDataVector&, dynamic_array<int>&)");
  }
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::resize(&this->m_NavMeshTiles, newCount);
  *(_DWORD *)(v4 + 48) = 0;
  for ( i_1 = 0;
        i_1 < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size((const std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64));
        ++i_1 )
  {
    v16 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
            (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64),
            i_1);
    if ( !dynamic_array<unsigned char,false,1ul>::empty(&v16->m_MeshData) )
    {
      v17 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
              &this->m_NavMeshTiles,
              *(int *)(v4 + 48));
      v18 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
              (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64),
              i_1);
      dynamic_array<unsigned char,false,1ul>::swap(&v17->m_MeshData, &v18->m_MeshData);
      v19 = &std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
               (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64),
               i_1)->m_Hash;
      v20 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
              &this->m_NavMeshTiles,
              *(int *)(v4 + 48));
      Hash128::operator=(&v20->m_Hash, v19);
      ++*(_DWORD *)(v4 + 48);
    }
  }
  for ( i_2 = 0; i_2 < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(newTiles); ++i_2 )
  {
    v21 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
            &this->m_NavMeshTiles,
            *(int *)(v4 + 48));
    v22 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](newTiles, i_2);
    dynamic_array<unsigned char,false,1ul>::swap(&v21->m_MeshData, &v22->m_MeshData);
    v23 = &std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](newTiles, i_2)->m_Hash;
    v24 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](
            &this->m_NavMeshTiles,
            *(int *)(v4 + 48));
    Hash128::operator=(&v24->m_Hash, v23);
    dynamic_array<int,false,4ul>::push_back(newTileIDs, (const int *)(v4 + 48));
    ++*(_DWORD *)(v4 + 48);
  }
  if ( newCount < *(_DWORD *)(v4 + 48) )
  {
    __asan_handle_no_return(newTiles);
    __assert_fail(
      "idx <= newCount",
      "./src/pathfinding/Internal/NavMeshData.cpp",
      0xB7u,
      "void NavMeshData::UpdateTiles(const dynamic_array<int>&, NavMeshTileDataVector&, dynamic_array<int>&)");
  }
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::resize(&this->m_NavMeshTiles, *(int *)(v4 + 48));
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::clear(newTiles);
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::~vector((std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v4 + 64));
  if ( v34 == (char *)v4 )
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
};

// Line 190: range 000000000CB75074-000000000CB7507E
void __cdecl NavMeshData::AwakeFromLoad(NavMeshData *const this)
{
  ;
};

// Line 257: range 000000000CB7507F-000000000CB751E4
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl ToWorldPosition(const Vector3f *translation, const Quaternionf *rotation, const Vector3f *position)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // xmm1_4
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8
  __int64 v9; // [rsp+8h] [rbp-E8h]
  const Vector3f *positiona; // [rsp+28h] [rbp-C8h]
  const Quaternionf *rotationa; // [rsp+30h] [rbp-C0h]
  const Vector3f *translationa; // [rsp+38h] [rbp-B8h]
  __int64 v13; // [rsp+44h] [rbp-ACh]
  float v14; // [rsp+4Ch] [rbp-A4h]
  char v15[160]; // [rsp+50h] [rbp-A0h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  translationa = translation;
  rotationa = rotation;
  positiona = position;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 64 7 mat:259";
  *(_QWORD *)(v3 + 16) = ToWorldPosition;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450892) = -202116109;
  Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v3 + 32));
  Matrix4x4f::SetTR((Matrix4x4f *const)(v3 + 32), translationa, rotationa);
  *(Vector3f *)(&v6 - 2) = Matrix4x4f::MultiplyPoint3((const Matrix4x4f *const)(v3 + 32), positiona);
  v13 = v7;
  v14 = v6;
  v9 = v7;
  if ( v15 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = v9;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v6;
  return result;
};

// Line 268: range 000000000CB751E6-000000000CB758EB
void __cdecl NavMeshData::GetTriangles(
        const NavMeshData *const this,
        dynamic_array<Vector3f,false,4> *output,
        dynamic_array<int,false,4> *indices)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::size_type v6; // r14
  const unsigned __int8 *v7; // rax
  unsigned __int64 v8; // rdx
  int v9; // ecx
  char v10; // dl
  char v11; // dl
  int v13; // [rsp+24h] [rbp-DCh] BYREF
  int i; // [rsp+28h] [rbp-D8h]
  int vertid; // [rsp+2Ch] [rbp-D4h]
  int polyid; // [rsp+30h] [rbp-D0h]
  int vertid_0; // [rsp+34h] [rbp-CCh]
  int vertStart; // [rsp+38h] [rbp-C8h]
  int headerSize; // [rsp+3Ch] [rbp-C4h]
  int vertsSize; // [rsp+40h] [rbp-C0h]
  int polysSize; // [rsp+44h] [rbp-BCh]
  const NavMeshTileData *tile; // [rsp+48h] [rbp-B8h]
  const unsigned __int8 *data; // [rsp+50h] [rbp-B0h]
  const NavMeshDataHeader *header; // [rsp+58h] [rbp-A8h]
  const unsigned __int8 *d; // [rsp+60h] [rbp-A0h]
  const Vector3f *verts; // [rsp+68h] [rbp-98h]
  NavMeshPoly *polys; // [rsp+70h] [rbp-90h]
  NavMeshPoly *poly; // [rsp+78h] [rbp-88h]
  Vector3f t; // [rsp+84h] [rbp-7Ch] BYREF
  char v30[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 7 pos:293";
  *(_QWORD *)(v3 + 16) = NavMeshData::GetTriangles;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  vertStart = 0;
  for ( i = 0; ; ++i )
  {
    v6 = i;
    if ( v6 >= std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(&this->m_NavMeshTiles) )
      break;
    tile = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](&this->m_NavMeshTiles, i);
    v7 = dynamic_array<unsigned char,false,1ul>::begin(&tile->m_MeshData);
    data = v7;
    header = (const NavMeshDataHeader *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    if ( header->magic == 1145979222 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&header->version >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->version >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&header->version);
      }
      if ( header->version == 17 )
      {
        vertStart = dynamic_array<Vector3f,false,4ul>::size(output);
        headerSize = Align4(0x48u);
        if ( *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)header + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&header->vertCount);
        }
        vertsSize = Align4(12 * header->vertCount);
        if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&header->polyCount);
        }
        polysSize = Align4(32 * header->polyCount);
        d = &data[headerSize];
        verts = (const Vector3f *)d;
        d += vertsSize;
        polys = (NavMeshPoly *)d;
        d += polysSize;
        for ( vertid = 0; ; ++vertid )
        {
          if ( *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)header + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&header->vertCount);
          }
          if ( vertid >= header->vertCount )
            break;
          v8 = (unsigned __int64)&verts[vertid];
          if ( (((unsigned __int8)verts + 12 * vertid) & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000)
            && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v8 + 11) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)verts + 12 * vertid + 11) & 7) >= *(_BYTE *)(((v8 + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(&verts[vertid], 12LL);
          }
          *(_QWORD *)(v3 + 32) = *(_QWORD *)v8;
          *(_DWORD *)(v3 + 40) = *(_DWORD *)(v8 + 8);
          t = ToWorldPosition(&this->m_Position, &this->m_Rotation, (const Vector3f *)(v3 + 32));
          dynamic_array<Vector3f,false,4ul>::push_back(output, &t);
        }
        for ( polyid = 0; ; ++polyid )
        {
          if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&header->polyCount);
          }
          if ( polyid >= header->polyCount )
            break;
          poly = &polys[polyid];
          for ( vertid_0 = 2; ; ++vertid_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&poly->vertCount);
            }
            if ( vertid_0 >= poly->vertCount )
              break;
            if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)poly & 7) + 1) >= *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(poly);
            }
            v13 = poly->verts[0] + vertStart;
            dynamic_array<int,false,4ul>::push_back(indices, &v13);
            v9 = vertid_0 - 1;
            v10 = *(_BYTE *)(((unsigned __int64)&poly->verts[vertid_0 - 1] >> 3) + 0x7FFF8000);
            if ( v10 != 0 && (char)(((2 * (vertid_0 - 1) + (_BYTE)poly) & 7) + 1) >= v10 )
              __asan_report_load2(&poly->verts[vertid_0 - 1]);
            v13 = poly->verts[v9] + vertStart;
            dynamic_array<int,false,4ul>::push_back(indices, &v13);
            v11 = *(_BYTE *)(((unsigned __int64)&poly->verts[vertid_0] >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (char)(((2 * vertid_0 + (_BYTE)poly) & 7) + 1) >= v11 )
              __asan_report_load2(&poly->verts[vertid_0]);
            v13 = poly->verts[vertid_0] + vertStart;
            dynamic_array<int,false,4ul>::push_back(indices, &v13);
          }
        }
      }
    }
  }
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 311: range 000000000CB758EC-000000000CB75DB8
bool __cdecl NavMeshData::LoadFromFile(NavMeshData *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::_Ios_Openmode v5; // eax
  std::_Ios_Openmode v6; // eax
  const char *v7; // rax
  bool v8; // r15
  __mbstate_t v9; // rdx
  size_t FileLength; // rdx
  bool result; // al
  std::size_t size; // [rsp+18h] [rbp-438h]
  char *dataPtr; // [rsp+20h] [rbp-430h]
  CachedReader *cache; // [rsp+28h] [rbp-428h]
  std::fpos<__mbstate_t> v15; // [rsp+30h] [rbp-420h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-410h] BYREF
  char v17[1008]; // [rsp+60h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 24 12 fileData:322 112 24 18 memCacheReader:329 176 88 14 readStream:330 304 520 7 ifs:313";
  *(_QWORD *)(v2 + 16) = NavMeshData::LoadFromFile;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862745] = -218103808;
  v4[536862746] = -202116109;
  v4[536862747] = -202116109;
  v4[536862748] = -202116109;
  v4[536862749] = -202116109;
  v5 = std::operator|(_S_in, _S_bin);
  v6 = std::operator|(v5, _S_ate);
  std::ifstream::basic_ifstream(v2 + 304, str, (unsigned int)v6);
  if ( (unsigned __int8)std::ios::good(v2 + 560) != 1 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/NavMeshData.cpp",
      "LoadFromFile",
      316);
    v7 = (const char *)std::string::c_str(str);
    common::milog::MiLogStream::operator()(&v16, "can't load file:%s", v7);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v8 = 0;
  }
  else
  {
    v15._M_off = std::istream::tellg((std::istream *)(v2 + 304));
    v15._M_state = v9;
    size = std::fpos<__mbstate_t>::operator long(&v15);
    dynamic_array<unsigned char,false,1ul>::dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 48), size);
    dataPtr = (char *)dynamic_array<unsigned char,false,1ul>::data((dynamic_array<unsigned char,false,1> *const)(v2 + 48));
    std::istream::seekg((std::istream *)(v2 + 304), 0LL, _S_beg);
    std::istream::read((std::istream *)(v2 + 304), dataPtr, size);
    std::ifstream::close(v2 + 304);
    MemoryCacheReader::MemoryCacheReader(
      (MemoryCacheReader *const)(v2 + 112),
      (dynamic_array<unsigned char,false,1> *)(v2 + 48));
    StreamedBinaryRead<false>::StreamedBinaryRead((StreamedBinaryRead<false> *const)(v2 + 176));
    cache = StreamedBinaryRead<false>::Init((StreamedBinaryRead<false> *const)(v2 + 176), kNoTransferInstructionFlags);
    FileLength = MemoryCacheReader::GetFileLength((MemoryCacheReader *const)(v2 + 112));
    CachedReader::InitRead(cache, (CacheReaderBase *)(v2 + 112), 0LL, FileLength);
    NavMeshData::TransferForServer<StreamedBinaryRead<false>>(this, (StreamedBinaryRead<false> *)(v2 + 176));
    CachedReader::End(cache);
    v8 = 1;
    StreamedBinaryRead<false>::~StreamedBinaryRead((StreamedBinaryRead<false> *const)(v2 + 176));
    MemoryCacheReader::~MemoryCacheReader((MemoryCacheReader *const)(v2 + 112));
    dynamic_array<unsigned char,false,1ul>::~dynamic_array((dynamic_array<unsigned char,false,1> *const)(v2 + 48));
  }
  std::ifstream::~ifstream(v2 + 304);
  result = v8;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 343: range 000000000CDB5F04-000000000CDB6227
void __cdecl NavMeshData::TransferForServer<StreamedBinaryRead<false>>(
        NavMeshData *const this,
        StreamedBinaryRead<false> *transfer)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 params:359";
  *(_QWORD *)(v2 + 16) = NavMeshData::TransferForServer<StreamedBinaryRead<false>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  TransferBase::SetVersion(transfer, 3);
  StreamedBinaryRead<false>::Transfer<unsigned int>(
    transfer,
    &this->m_NavMeshDataID,
    "m_NavMeshDataID",
    kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>(
    transfer,
    &this->m_NavMeshTiles,
    "m_NavMeshTiles",
    kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<NavMeshBuildSettings>(
    transfer,
    &this->m_NavMeshBuildSettings,
    "m_NavMeshBuildSettings",
    kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>(
    transfer,
    &this->m_OffMeshLinks,
    "m_OffMeshLinks",
    kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<AABB>(transfer, &this->m_SourceBounds, "m_SourceBounds", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<Quaternionf>(transfer, &this->m_Rotation, "m_Rotation", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<Vector3f>(transfer, &this->m_Position, "m_Position", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<int>(transfer, &this->m_AgentTypeID, "m_AgentTypeID", kNoTransferFlags);
  if ( TransferBase::IsOldVersion(transfer, 1) )
  {
    StreamedBinaryRead<false>::Transfer<NavMeshParams>(
      transfer,
      (NavMeshParams *)(v2 + 32),
      "m_NavMeshParams",
      kNoTransferFlags);
    v5 = *(float *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshBuildSettings.agentHeight >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_NavMeshBuildSettings.agentHeight >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->m_NavMeshBuildSettings.agentHeight);
    }
    this->m_NavMeshBuildSettings.agentHeight = v5;
    v6 = *(float *)(v2 + 36);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshBuildSettings.agentRadius >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_NavMeshBuildSettings.agentRadius >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->m_NavMeshBuildSettings.agentRadius);
    }
    this->m_NavMeshBuildSettings.agentRadius = v6;
    v7 = *(float *)(v2 + 40);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshBuildSettings.agentClimb >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_NavMeshBuildSettings.agentClimb >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->m_NavMeshBuildSettings.agentClimb);
    }
    this->m_NavMeshBuildSettings.agentClimb = v7;
    v8 = *(float *)(v2 + 44);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshBuildSettings.cellSize >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_NavMeshBuildSettings.cellSize >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->m_NavMeshBuildSettings.cellSize);
    }
    this->m_NavMeshBuildSettings.cellSize = v8;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 369: range 000000000CB75DBA-000000000CB75FA2
void __cdecl NavMeshData::InitBlockInfo(NavMeshData *const this, const BlockInfo *info)
{
  __int64 v2; // rdx
  __int16 v3; // si
  SurfaceIDType v4; // di

  if ( *(char *)(((unsigned __int64)&this->m_BlockInfo >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->m_BlockInfo.tile_pos_y + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 48 + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->m_BlockInfo.tile_pos_y + 2) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_BlockInfo, 24LL);
  }
  if ( ((unsigned __int8)info & 7) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&info->tile_pos_y + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)info + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&info->tile_pos_y + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(info, 24LL);
  }
  v2 = *(_QWORD *)&info->activity_id;
  *(_QWORD *)&this->m_BlockInfo.data_id = *(_QWORD *)&info->data_id;
  *(_QWORD *)&this->m_BlockInfo.activity_id = v2;
  *(_QWORD *)&this->m_BlockInfo.scene_tag_hash = *(_QWORD *)&info->scene_tag_hash;
  if ( *(_BYTE *)(((unsigned __int64)&info->tile_pos_x >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)info + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&info->tile_pos_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&info->tile_pos_x);
  }
  v3 = info->tile_pos_x << 8;
  if ( *(_BYTE *)(((unsigned __int64)&info->tile_pos_y >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)info + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&info->tile_pos_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&info->tile_pos_y);
  }
  v4 = v3 | (unsigned __int8)info->tile_pos_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_BlockInfo.block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_BlockInfo.block_id >> 3)
                                                        + 0x7FFF8000) )
  {
    v4 = (_WORD)this + 212;
    __asan_report_store2(&this->m_BlockInfo.block_id);
  }
  this->m_BlockInfo.block_id = v4;
};
