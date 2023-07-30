// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/ServerExpand/StaticNavMesh.h

// Line 18: range 000000000CCBA402-000000000CCBA449
uint32_t __cdecl StaticNavMesh::GetID(const StaticNavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_ID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_ID);
  }
  return this->m_ID;
};

// Line 31: range 000000000CCBA44A-000000000CCBA499
int32_t __cdecl StaticNavMesh::GetVersion(const StaticNavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->version);
  }
  return this->version;
};

// Line 32: range 000000000CCBA49A-000000000CCBA4F0
void __cdecl StaticNavMesh::SetVersion(StaticNavMesh *const this, int32_t value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = value;
};

// Line 33: range 000000000CCBA4F2-000000000CCBA539
int32_t __cdecl StaticNavMesh::GetActivityID(const StaticNavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->activityID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activityID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activityID);
  }
  return this->activityID;
};

// Line 34: range 000000000CCBA53A-000000000CCBA589
void __cdecl StaticNavMesh::SetActivityID(StaticNavMesh *const this, int32_t value)
{
  uint32_t v2; // ecx

  v2 = value;
  if ( *(_BYTE *)(((unsigned __int64)&this->activityID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activityID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activityID);
  }
  this->activityID = v2;
};

// Line 35: range 000000000CCBA58A-000000000CCBA5D9
uint32_t __cdecl StaticNavMesh::GetPolygonID(const StaticNavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->polygon_id);
  }
  return this->polygon_id;
};

// Line 36: range 000000000CCBA5DA-000000000CCBA621
uint32_t __cdecl StaticNavMesh::GetSceneTagHash(const StaticNavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_tag_hash);
  }
  return this->scene_tag_hash;
};

// Line 66: range 000000000CCBA622-000000000CCBA62F
const Vector3f *__cdecl StaticNavMesh::GetLegacyQueryExtents(const StaticNavMesh *const this)
{
  return &this->m_LegacyQueryExtents;
};

// Line 74: range 000000000CCBA630-000000000CCBA66A
NavMesh *__cdecl StaticNavMesh::GetNavMesh(const StaticNavMesh *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, v1);
  return this->m_NavMesh;
};

// Line 80: range 000000000CCA4C30-000000000CCA554D
void __cdecl StaticNavMesh::GetSourceTileDataBoundsFast<GMToolHandler::onGMShowNavMeshReq(std::shared_ptr<common::minet::Packet>,proto::GMShowNavMeshReq const&,proto::GMShowNavMeshRsp &)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
        const StaticNavMesh *const this,
        const MinMaxAABB *aabb,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        GMToolHandler::onGMShowNavMeshReq::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >::pointer v7; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float *p_agentHeight; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  size_t v13; // rax
  int *v14; // rax
  int *v15; // rdx
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::size_type v16; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::const_reference v18; // rax
  SurfaceIDType surfaceID; // [rsp+2Ah] [rbp-2E6h]
  vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type v23; // [rsp+2Ch] [rbp-2E4h] BYREF
  float walkableHeight; // [rsp+30h] [rbp-2E0h]
  float walkableRadius; // [rsp+34h] [rbp-2DCh]
  float kOffsetRadius; // [rsp+38h] [rbp-2D8h]
  int tileIdx; // [rsp+3Ch] [rbp-2D4h]
  size_t i; // [rsp+40h] [rbp-2D0h]
  const std::shared_ptr<NavMeshData> *navMeshData; // [rsp+48h] [rbp-2C8h]
  const NavMeshTileDataVector *tiles; // [rsp+50h] [rbp-2C0h]
  const NavMeshBuildSettings *settings; // [rsp+58h] [rbp-2B8h]
  const NavMeshDataHeader *header; // [rsp+60h] [rbp-2B0h]
  Vector3f min; // [rsp+68h] [rbp-2A8h] BYREF
  Vector3f max; // [rsp+74h] [rbp-29Ch] BYREF
  MinMaxAABB v35; // [rsp+80h] [rbp-290h] BYREF
  char v36[624]; // [rsp+A0h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 8 6 end:82 64 8 5 it:83 96 12 13 minOffset:108 128 12 13 maxOffset:109 160 12 19 surfacePo"
                        "sition:111 192 16 19 surfaceRotation:112 224 24 11 outtiles:93 288 24 17 outTileIndices:94 352 2"
                        "4 10 bounds:119 416 32 7 loc:139 480 64 13 transform:113";
  *(_QWORD *)(v4 + 16) = StaticNavMesh::GetSourceTileDataBoundsFast<GMToolHandler::onGMShowNavMeshReq(std::shared_ptr<common::minet::Packet>,proto::GMShowNavMeshReq const&,proto::GMShowNavMeshRsp &)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -219020288;
  v6[536862726] = -219021312;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862729] = -234881024;
  v6[536862730] = -218959118;
  v6[536862731] = -234881024;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862737] = -202116109;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 32) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces);
  *(_QWORD *)(v4 + 64) = 0LL;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 64) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->m_LoadedSurfaces);
  while ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 64),
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 32)) )
  {
    navMeshData = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64))->second;
    v7 = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v7);
    }
    surfaceID = v7->first;
    v8 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    tiles = NavMeshData::GetNavMeshTiles(v8);
    dynamic_array<NavMeshTile const*,false,8ul>::dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
    dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v4 + 288));
    if ( vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(surfaces)
      || (v23 = surfaceID, vector_set<int,std::less<int>,stl_allocator<int,16>>::count(surfaces, &v23)) )
    {
      settings = StaticNavMesh::GetNavMeshBuildSettings(this, surfaceID);
      p_agentHeight = &settings->agentHeight;
      if ( *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_agentHeight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_agentHeight);
      }
      walkableHeight = settings->agentHeight;
      v11 = (((_BYTE)settings + 4) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&settings->agentRadius);
      }
      walkableRadius = settings->agentRadius;
      kOffsetRadius = 1.415 * walkableRadius;
      Vector3f::Vector3f(
        (Vector3f *const)(v4 + 96),
        -(float)(1.415 * walkableRadius),
        0.0,
        -(float)(1.415 * walkableRadius));
      Vector3f::Vector3f((Vector3f *const)(v4 + 128), kOffsetRadius, walkableHeight, kOffsetRadius);
      Vector3f::Vector3f((Vector3f *const)(v4 + 160));
      Quaternionf::Quaternionf((Quaternionf *const)(v4 + 192));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v4 + 480));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMesh, v11);
      NavMesh::GetSurfaceTransform(this->m_NavMesh, surfaceID, v4 + 160, v4 + 192);
      Matrix4x4f::SetTR((Matrix4x4f *const)(v4 + 480), (const Vector3f *)(v4 + 160), (const Quaternionf *)(v4 + 192));
      if ( ((unsigned __int8)aabb & 7) >= *(_BYTE *)(((unsigned __int64)aabb >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)aabb >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&aabb->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)aabb + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&aabb->m_Max.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(aabb, 24LL);
      }
      v12 = *(_QWORD *)&aabb->m_Min.z;
      *(_QWORD *)(v4 + 352) = *(_QWORD *)&aabb->m_Min.x;
      *(_QWORD *)(v4 + 360) = v12;
      *(_QWORD *)(v4 + 368) = *(_QWORD *)&aabb->m_Max.y;
      Vector3f::operator+=((Vector3f *const)(v4 + 352), (const Vector3f *)(v4 + 96));
      Vector3f::operator+=((Vector3f *const)(v4 + 364), (const Vector3f *)(v4 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMesh, v4 + 128);
      NavMesh::QueryTiles(
        this->m_NavMesh,
        surfaceID,
        (const MinMaxAABB *)(v4 + 352),
        (dynamic_array<const NavMeshTile*,false,8> *)(v4 + 224),
        (dynamic_array<int,false,4> *)(v4 + 288));
      for ( i = 0LL; ; ++i )
      {
        v13 = dynamic_array<NavMeshTile const*,false,8ul>::size((const dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
        if ( i >= v13 )
          break;
        v14 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v4 + 288), i);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        tileIdx = *v15;
        if ( tileIdx >= 0 )
        {
          v16 = tileIdx;
          if ( v16 < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles) )
          {
            v18 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles, tileIdx);
            header = (const NavMeshDataHeader *)dynamic_array<unsigned char,false,1ul>::begin(&v18->m_MeshData);
            TileLocation::TileLocation((TileLocation *const)(v4 + 416));
            max = operator+(&header->bmax, (const Vector3f *)(v4 + 128));
            min = operator+(&header->bmin, (const Vector3f *)(v4 + 96));
            MinMaxAABB::MinMaxAABB(&v35, &min, &max);
            TransformAABBSlow(&v35, (const Matrix4x4f *)(v4 + 480), (MinMaxAABB *)(v4 + 416));
            if ( IntersectAABBAABB((const MinMaxAABB *)(v4 + 416), (const MinMaxAABB *)(v4 + 352)) )
            {
              *(_WORD *)(v4 + 440) = surfaceID;
              *(_DWORD *)(v4 + 444) = tileIdx;
              GMToolHandler::onGMShowNavMeshReq(std::shared_ptr<common::minet::Packet>,proto::GMShowNavMeshReq const&,proto::GMShowNavMeshRsp &)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}::operator()(
                callback,
                (const TileLocation *)(v4 + 416),
                (const Vector3f *)(v4 + 160),
                (const Quaternionf *)(v4 + 192));
            }
          }
        }
      }
    }
    dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v4 + 288));
    dynamic_array<NavMeshTile const*,false,8ul>::~dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64));
  }
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 80: range 000000000CCA5C8A-000000000CCA65A7
void __cdecl StaticNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
        const StaticNavMesh *const this,
        const MinMaxAABB *aabb,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >::pointer v7; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float *p_agentHeight; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  size_t v13; // rax
  int *v14; // rax
  int *v15; // rdx
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::size_type v16; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::const_reference v18; // rax
  SurfaceIDType surfaceID; // [rsp+2Ah] [rbp-2E6h]
  vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type v23; // [rsp+2Ch] [rbp-2E4h] BYREF
  float walkableHeight; // [rsp+30h] [rbp-2E0h]
  float walkableRadius; // [rsp+34h] [rbp-2DCh]
  float kOffsetRadius; // [rsp+38h] [rbp-2D8h]
  int tileIdx; // [rsp+3Ch] [rbp-2D4h]
  size_t i; // [rsp+40h] [rbp-2D0h]
  const std::shared_ptr<NavMeshData> *navMeshData; // [rsp+48h] [rbp-2C8h]
  const NavMeshTileDataVector *tiles; // [rsp+50h] [rbp-2C0h]
  const NavMeshBuildSettings *settings; // [rsp+58h] [rbp-2B8h]
  const NavMeshDataHeader *header; // [rsp+60h] [rbp-2B0h]
  Vector3f min; // [rsp+68h] [rbp-2A8h] BYREF
  Vector3f max; // [rsp+74h] [rbp-29Ch] BYREF
  MinMaxAABB v35; // [rsp+80h] [rbp-290h] BYREF
  char v36[624]; // [rsp+A0h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 8 6 end:82 64 8 5 it:83 96 12 13 minOffset:108 128 12 13 maxOffset:109 160 12 19 surfacePo"
                        "sition:111 192 16 19 surfaceRotation:112 224 24 11 outtiles:93 288 24 17 outTileIndices:94 352 2"
                        "4 10 bounds:119 416 32 7 loc:139 480 64 13 transform:113";
  *(_QWORD *)(v4 + 16) = StaticNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -219020288;
  v6[536862726] = -219021312;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862729] = -234881024;
  v6[536862730] = -218959118;
  v6[536862731] = -234881024;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862737] = -202116109;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 32) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces);
  *(_QWORD *)(v4 + 64) = 0LL;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 64) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->m_LoadedSurfaces);
  while ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 64),
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 32)) )
  {
    navMeshData = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64))->second;
    v7 = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v7);
    }
    surfaceID = v7->first;
    v8 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    tiles = NavMeshData::GetNavMeshTiles(v8);
    dynamic_array<NavMeshTile const*,false,8ul>::dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
    dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v4 + 288));
    if ( vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(surfaces)
      || (v23 = surfaceID, vector_set<int,std::less<int>,stl_allocator<int,16>>::count(surfaces, &v23)) )
    {
      settings = StaticNavMesh::GetNavMeshBuildSettings(this, surfaceID);
      p_agentHeight = &settings->agentHeight;
      if ( *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_agentHeight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_agentHeight);
      }
      walkableHeight = settings->agentHeight;
      v11 = (((_BYTE)settings + 4) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&settings->agentRadius);
      }
      walkableRadius = settings->agentRadius;
      kOffsetRadius = 1.415 * walkableRadius;
      Vector3f::Vector3f(
        (Vector3f *const)(v4 + 96),
        -(float)(1.415 * walkableRadius),
        0.0,
        -(float)(1.415 * walkableRadius));
      Vector3f::Vector3f((Vector3f *const)(v4 + 128), kOffsetRadius, walkableHeight, kOffsetRadius);
      Vector3f::Vector3f((Vector3f *const)(v4 + 160));
      Quaternionf::Quaternionf((Quaternionf *const)(v4 + 192));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v4 + 480));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMesh, v11);
      NavMesh::GetSurfaceTransform(this->m_NavMesh, surfaceID, v4 + 160, v4 + 192);
      Matrix4x4f::SetTR((Matrix4x4f *const)(v4 + 480), (const Vector3f *)(v4 + 160), (const Quaternionf *)(v4 + 192));
      if ( ((unsigned __int8)aabb & 7) >= *(_BYTE *)(((unsigned __int64)aabb >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)aabb >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&aabb->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)aabb + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&aabb->m_Max.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(aabb, 24LL);
      }
      v12 = *(_QWORD *)&aabb->m_Min.z;
      *(_QWORD *)(v4 + 352) = *(_QWORD *)&aabb->m_Min.x;
      *(_QWORD *)(v4 + 360) = v12;
      *(_QWORD *)(v4 + 368) = *(_QWORD *)&aabb->m_Max.y;
      Vector3f::operator+=((Vector3f *const)(v4 + 352), (const Vector3f *)(v4 + 96));
      Vector3f::operator+=((Vector3f *const)(v4 + 364), (const Vector3f *)(v4 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMesh, v4 + 128);
      NavMesh::QueryTiles(
        this->m_NavMesh,
        surfaceID,
        (const MinMaxAABB *)(v4 + 352),
        (dynamic_array<const NavMeshTile*,false,8> *)(v4 + 224),
        (dynamic_array<int,false,4> *)(v4 + 288));
      for ( i = 0LL; ; ++i )
      {
        v13 = dynamic_array<NavMeshTile const*,false,8ul>::size((const dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
        if ( i >= v13 )
          break;
        v14 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v4 + 288), i);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        tileIdx = *v15;
        if ( tileIdx >= 0 )
        {
          v16 = tileIdx;
          if ( v16 < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles) )
          {
            v18 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles, tileIdx);
            header = (const NavMeshDataHeader *)dynamic_array<unsigned char,false,1ul>::begin(&v18->m_MeshData);
            TileLocation::TileLocation((TileLocation *const)(v4 + 416));
            max = operator+(&header->bmax, (const Vector3f *)(v4 + 128));
            min = operator+(&header->bmin, (const Vector3f *)(v4 + 96));
            MinMaxAABB::MinMaxAABB(&v35, &min, &max);
            TransformAABBSlow(&v35, (const Matrix4x4f *)(v4 + 480), (MinMaxAABB *)(v4 + 416));
            if ( IntersectAABBAABB((const MinMaxAABB *)(v4 + 416), (const MinMaxAABB *)(v4 + 352)) )
            {
              *(_WORD *)(v4 + 440) = surfaceID;
              *(_DWORD *)(v4 + 444) = tileIdx;
              HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}::operator()(
                callback,
                (const TileLocation *)(v4 + 416),
                (const Vector3f *)(v4 + 160),
                (const Quaternionf *)(v4 + 192));
            }
          }
        }
      }
    }
    dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v4 + 288));
    dynamic_array<NavMeshTile const*,false,8ul>::~dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64));
  }
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 80: range 000000000CCA6EFE-000000000CCA781B
void __cdecl StaticNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
        const StaticNavMesh *const this,
        const MinMaxAABB *aabb,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >::pointer v7; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float *p_agentHeight; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  size_t v13; // rax
  int *v14; // rax
  int *v15; // rdx
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::size_type v16; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::const_reference v18; // rax
  SurfaceIDType surfaceID; // [rsp+2Ah] [rbp-2E6h]
  vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type v23; // [rsp+2Ch] [rbp-2E4h] BYREF
  float walkableHeight; // [rsp+30h] [rbp-2E0h]
  float walkableRadius; // [rsp+34h] [rbp-2DCh]
  float kOffsetRadius; // [rsp+38h] [rbp-2D8h]
  int tileIdx; // [rsp+3Ch] [rbp-2D4h]
  size_t i; // [rsp+40h] [rbp-2D0h]
  const std::shared_ptr<NavMeshData> *navMeshData; // [rsp+48h] [rbp-2C8h]
  const NavMeshTileDataVector *tiles; // [rsp+50h] [rbp-2C0h]
  const NavMeshBuildSettings *settings; // [rsp+58h] [rbp-2B8h]
  const NavMeshDataHeader *header; // [rsp+60h] [rbp-2B0h]
  Vector3f min; // [rsp+68h] [rbp-2A8h] BYREF
  Vector3f max; // [rsp+74h] [rbp-29Ch] BYREF
  MinMaxAABB v35; // [rsp+80h] [rbp-290h] BYREF
  char v36[624]; // [rsp+A0h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 8 6 end:82 64 8 5 it:83 96 12 13 minOffset:108 128 12 13 maxOffset:109 160 12 19 surfacePo"
                        "sition:111 192 16 19 surfaceRotation:112 224 24 11 outtiles:93 288 24 17 outTileIndices:94 352 2"
                        "4 10 bounds:119 416 32 7 loc:139 480 64 13 transform:113";
  *(_QWORD *)(v4 + 16) = StaticNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -219020288;
  v6[536862726] = -219021312;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862729] = -234881024;
  v6[536862730] = -218959118;
  v6[536862731] = -234881024;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862737] = -202116109;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 32) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces);
  *(_QWORD *)(v4 + 64) = 0LL;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 64) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->m_LoadedSurfaces);
  while ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 64),
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 32)) )
  {
    navMeshData = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64))->second;
    v7 = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v7);
    }
    surfaceID = v7->first;
    v8 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    tiles = NavMeshData::GetNavMeshTiles(v8);
    dynamic_array<NavMeshTile const*,false,8ul>::dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
    dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v4 + 288));
    if ( vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(surfaces)
      || (v23 = surfaceID, vector_set<int,std::less<int>,stl_allocator<int,16>>::count(surfaces, &v23)) )
    {
      settings = StaticNavMesh::GetNavMeshBuildSettings(this, surfaceID);
      p_agentHeight = &settings->agentHeight;
      if ( *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_agentHeight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_agentHeight >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_agentHeight);
      }
      walkableHeight = settings->agentHeight;
      v11 = (((_BYTE)settings + 4) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->agentRadius >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&settings->agentRadius);
      }
      walkableRadius = settings->agentRadius;
      kOffsetRadius = 1.415 * walkableRadius;
      Vector3f::Vector3f(
        (Vector3f *const)(v4 + 96),
        -(float)(1.415 * walkableRadius),
        0.0,
        -(float)(1.415 * walkableRadius));
      Vector3f::Vector3f((Vector3f *const)(v4 + 128), kOffsetRadius, walkableHeight, kOffsetRadius);
      Vector3f::Vector3f((Vector3f *const)(v4 + 160));
      Quaternionf::Quaternionf((Quaternionf *const)(v4 + 192));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v4 + 480));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMesh, v11);
      NavMesh::GetSurfaceTransform(this->m_NavMesh, surfaceID, v4 + 160, v4 + 192);
      Matrix4x4f::SetTR((Matrix4x4f *const)(v4 + 480), (const Vector3f *)(v4 + 160), (const Quaternionf *)(v4 + 192));
      if ( ((unsigned __int8)aabb & 7) >= *(_BYTE *)(((unsigned __int64)aabb >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)aabb >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&aabb->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)aabb + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&aabb->m_Max.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(aabb, 24LL);
      }
      v12 = *(_QWORD *)&aabb->m_Min.z;
      *(_QWORD *)(v4 + 352) = *(_QWORD *)&aabb->m_Min.x;
      *(_QWORD *)(v4 + 360) = v12;
      *(_QWORD *)(v4 + 368) = *(_QWORD *)&aabb->m_Max.y;
      Vector3f::operator+=((Vector3f *const)(v4 + 352), (const Vector3f *)(v4 + 96));
      Vector3f::operator+=((Vector3f *const)(v4 + 364), (const Vector3f *)(v4 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMesh, v4 + 128);
      NavMesh::QueryTiles(
        this->m_NavMesh,
        surfaceID,
        (const MinMaxAABB *)(v4 + 352),
        (dynamic_array<const NavMeshTile*,false,8> *)(v4 + 224),
        (dynamic_array<int,false,4> *)(v4 + 288));
      for ( i = 0LL; ; ++i )
      {
        v13 = dynamic_array<NavMeshTile const*,false,8ul>::size((const dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
        if ( i >= v13 )
          break;
        v14 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v4 + 288), i);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        tileIdx = *v15;
        if ( tileIdx >= 0 )
        {
          v16 = tileIdx;
          if ( v16 < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles) )
          {
            v18 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles, tileIdx);
            header = (const NavMeshDataHeader *)dynamic_array<unsigned char,false,1ul>::begin(&v18->m_MeshData);
            TileLocation::TileLocation((TileLocation *const)(v4 + 416));
            max = operator+(&header->bmax, (const Vector3f *)(v4 + 128));
            min = operator+(&header->bmin, (const Vector3f *)(v4 + 96));
            MinMaxAABB::MinMaxAABB(&v35, &min, &max);
            TransformAABBSlow(&v35, (const Matrix4x4f *)(v4 + 480), (MinMaxAABB *)(v4 + 416));
            if ( IntersectAABBAABB((const MinMaxAABB *)(v4 + 416), (const MinMaxAABB *)(v4 + 352)) )
            {
              *(_WORD *)(v4 + 440) = surfaceID;
              *(_DWORD *)(v4 + 444) = tileIdx;
              NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}::operator()(
                callback,
                (const TileLocation *)(v4 + 416),
                (const Vector3f *)(v4 + 160),
                (const Quaternionf *)(v4 + 192));
            }
          }
        }
      }
    }
    dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v4 + 288));
    dynamic_array<NavMeshTile const*,false,8ul>::~dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 224));
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 64));
  }
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 158: range 000000000CCA65A8-000000000CCA6EFC
void __cdecl StaticNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>(
        const StaticNavMesh *const this,
        const dynamic_array<MinMaxAABB,true,4> *aabbs,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >::pointer v7; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float *p_agentHeight; // rax
  unsigned __int64 n; // rax
  __int64 v12; // rdi
  int *v13; // rax
  int *v14; // rdx
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::const_reference v16; // rax
  float walkableHeight; // [rsp+28h] [rbp-2E8h]
  float kOffsetRadius; // [rsp+30h] [rbp-2E0h]
  int tileIdx; // [rsp+34h] [rbp-2DCh]
  size_t i; // [rsp+38h] [rbp-2D8h]
  size_t i_0; // [rsp+40h] [rbp-2D0h]
  std::shared_ptr<NavMeshData> *navMeshData; // [rsp+48h] [rbp-2C8h]
  const std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *tiles; // [rsp+50h] [rbp-2C0h]
  const NavMeshBuildSettings *settings; // [rsp+58h] [rbp-2B8h]
  const unsigned __int8 *header; // [rsp+60h] [rbp-2B0h]
  Vector3f min; // [rsp+68h] [rbp-2A8h] BYREF
  Vector3f max; // [rsp+74h] [rbp-29Ch] BYREF
  char v31[656]; // [rsp+80h] [rbp-290h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(608LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "12 48 4 13 surfaceID:166 64 8 7 end:160 96 8 6 it:161 128 12 13 minOffset:185 160 12 13 maxOffse"
                        "t:186 192 12 19 surfacePosition:188 224 16 19 surfaceRotation:189 256 24 12 outtiles:171 320 24 "
                        "18 outTileIndices:172 384 24 10 bounds:200 448 32 7 loc:221 512 64 13 transform:190";
  *(_QWORD *)(v4 + 16) = StaticNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -219020288;
  v6[536862725] = -219020288;
  v6[536862726] = -219020288;
  v6[536862727] = -219021312;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862738] = -202116109;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 64) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces);
  *(_QWORD *)(v4 + 96) = 0LL;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 96) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->m_LoadedSurfaces);
  while ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 96),
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 64)) )
  {
    navMeshData = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 96))->second;
    v7 = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 48) = v7->first;
    v8 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    tiles = NavMeshData::GetNavMeshTiles(v8);
    dynamic_array<NavMeshTile const*,false,8ul>::dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 256));
    dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v4 + 320));
    if ( vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(surfaces)
      || vector_set<int,std::less<int>,stl_allocator<int,16>>::count(
           surfaces,
           (const vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type *)(v4 + 48)) )
    {
      settings = StaticNavMesh::GetNavMeshBuildSettings(this, *(_DWORD *)(v4 + 48));
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
      kOffsetRadius = 1.415 * settings->agentRadius;
      Vector3f::Vector3f((Vector3f *const)(v4 + 128), -kOffsetRadius, 0.0, -kOffsetRadius);
      Vector3f::Vector3f((Vector3f *const)(v4 + 160), kOffsetRadius, walkableHeight, kOffsetRadius);
      Vector3f::Vector3f((Vector3f *const)(v4 + 192));
      Quaternionf::Quaternionf((Quaternionf *const)(v4 + 224));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v4 + 512));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMesh, (((_BYTE)settings + 4) & 7u) + 3);
      NavMesh::GetSurfaceTransform(this->m_NavMesh, *(_DWORD *)(v4 + 48), v4 + 192, v4 + 224);
      Matrix4x4f::SetTR((Matrix4x4f *const)(v4 + 512), (const Vector3f *)(v4 + 192), (const Quaternionf *)(v4 + 224));
      for ( i = 0LL; i < dynamic_array<MinMaxAABB,true,4ul>::size(aabbs); ++i )
      {
        n = (unsigned __int64)dynamic_array<MinMaxAABB,true,4ul>::operator[](aabbs, i);
        if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(n, 24LL);
        }
        v12 = *(_QWORD *)(n + 8);
        *(_QWORD *)(v4 + 384) = *(_QWORD *)n;
        *(_QWORD *)(v4 + 392) = v12;
        *(_QWORD *)(v4 + 400) = *(_QWORD *)(n + 16);
        Vector3f::operator+=((Vector3f *const)(v4 + 384), (const Vector3f *)(v4 + 128));
        Vector3f::operator+=((Vector3f *const)(v4 + 396), (const Vector3f *)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_NavMesh, v4 + 160);
        NavMesh::QueryTiles(
          this->m_NavMesh,
          *(_DWORD *)(v4 + 48),
          (const MinMaxAABB *)(v4 + 384),
          (dynamic_array<const NavMeshTile*,false,8> *)(v4 + 256),
          (dynamic_array<int,false,4> *)(v4 + 320));
      }
      for ( i_0 = 0LL;
            i_0 < dynamic_array<NavMeshTile const*,false,8ul>::size((const dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 256));
            ++i_0 )
      {
        v13 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v4 + 320), i_0);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        tileIdx = *v14;
        if ( *v14 >= 0 && tileIdx < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles) )
        {
          v16 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles, tileIdx);
          header = dynamic_array<unsigned char,false,1ul>::begin(&v16->m_MeshData);
          TileLocation::TileLocation((TileLocation *const)(v4 + 448));
          max = operator+((const Vector3f *)(header + 56), (const Vector3f *)(v4 + 160));
          min = operator+((const Vector3f *)(header + 44), (const Vector3f *)(v4 + 128));
          MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v4 + 384), &min, &max);
          TransformAABBSlow((const MinMaxAABB *)(v4 + 384), (const Matrix4x4f *)(v4 + 512), (MinMaxAABB *)(v4 + 448));
          *(_WORD *)(v4 + 472) = *(_DWORD *)(v4 + 48);
          *(_DWORD *)(v4 + 476) = tileIdx;
          HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}::operator()(
            callback,
            (const TileLocation *)(v4 + 448),
            (const Vector3f *)(v4 + 192),
            (const Quaternionf *)(v4 + 224));
        }
      }
    }
    dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v4 + 320));
    dynamic_array<NavMeshTile const*,false,8ul>::~dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 256));
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 96));
  }
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 158: range 000000000CCA781C-000000000CCA8170
void __cdecl StaticNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>(
        const StaticNavMesh *const this,
        const dynamic_array<MinMaxAABB,true,4> *aabbs,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >::pointer v7; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float *p_agentHeight; // rax
  unsigned __int64 n; // rax
  __int64 v12; // rdi
  int *v13; // rax
  int *v14; // rdx
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::const_reference v16; // rax
  float walkableHeight; // [rsp+28h] [rbp-2E8h]
  float kOffsetRadius; // [rsp+30h] [rbp-2E0h]
  int tileIdx; // [rsp+34h] [rbp-2DCh]
  size_t i; // [rsp+38h] [rbp-2D8h]
  size_t i_0; // [rsp+40h] [rbp-2D0h]
  std::shared_ptr<NavMeshData> *navMeshData; // [rsp+48h] [rbp-2C8h]
  const std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *tiles; // [rsp+50h] [rbp-2C0h]
  const NavMeshBuildSettings *settings; // [rsp+58h] [rbp-2B8h]
  const unsigned __int8 *header; // [rsp+60h] [rbp-2B0h]
  Vector3f min; // [rsp+68h] [rbp-2A8h] BYREF
  Vector3f max; // [rsp+74h] [rbp-29Ch] BYREF
  char v31[656]; // [rsp+80h] [rbp-290h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(608LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "12 48 4 13 surfaceID:166 64 8 7 end:160 96 8 6 it:161 128 12 13 minOffset:185 160 12 13 maxOffse"
                        "t:186 192 12 19 surfacePosition:188 224 16 19 surfaceRotation:189 256 24 12 outtiles:171 320 24 "
                        "18 outTileIndices:172 384 24 10 bounds:200 448 32 7 loc:221 512 64 13 transform:190";
  *(_QWORD *)(v4 + 16) = StaticNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -219020288;
  v6[536862725] = -219020288;
  v6[536862726] = -219020288;
  v6[536862727] = -219021312;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862738] = -202116109;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 64) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->m_LoadedSurfaces);
  *(_QWORD *)(v4 + 96) = 0LL;
  *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v4 + 96) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->m_LoadedSurfaces);
  while ( __gnu_cxx::operator!=<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 96),
            (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v4 + 64)) )
  {
    navMeshData = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 96))->second;
    v7 = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 48) = v7->first;
    v8 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)navMeshData);
    tiles = NavMeshData::GetNavMeshTiles(v8);
    dynamic_array<NavMeshTile const*,false,8ul>::dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 256));
    dynamic_array<int,false,4ul>::dynamic_array((dynamic_array<int,false,4> *const)(v4 + 320));
    if ( vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(surfaces)
      || vector_set<int,std::less<int>,stl_allocator<int,16>>::count(
           surfaces,
           (const vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type *)(v4 + 48)) )
    {
      settings = StaticNavMesh::GetNavMeshBuildSettings(this, *(_DWORD *)(v4 + 48));
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
      kOffsetRadius = 1.415 * settings->agentRadius;
      Vector3f::Vector3f((Vector3f *const)(v4 + 128), -kOffsetRadius, 0.0, -kOffsetRadius);
      Vector3f::Vector3f((Vector3f *const)(v4 + 160), kOffsetRadius, walkableHeight, kOffsetRadius);
      Vector3f::Vector3f((Vector3f *const)(v4 + 192));
      Quaternionf::Quaternionf((Quaternionf *const)(v4 + 224));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v4 + 512));
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMesh, (((_BYTE)settings + 4) & 7u) + 3);
      NavMesh::GetSurfaceTransform(this->m_NavMesh, *(_DWORD *)(v4 + 48), v4 + 192, v4 + 224);
      Matrix4x4f::SetTR((Matrix4x4f *const)(v4 + 512), (const Vector3f *)(v4 + 192), (const Quaternionf *)(v4 + 224));
      for ( i = 0LL; i < dynamic_array<MinMaxAABB,true,4ul>::size(aabbs); ++i )
      {
        n = (unsigned __int64)dynamic_array<MinMaxAABB,true,4ul>::operator[](aabbs, i);
        if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(n, 24LL);
        }
        v12 = *(_QWORD *)(n + 8);
        *(_QWORD *)(v4 + 384) = *(_QWORD *)n;
        *(_QWORD *)(v4 + 392) = v12;
        *(_QWORD *)(v4 + 400) = *(_QWORD *)(n + 16);
        Vector3f::operator+=((Vector3f *const)(v4 + 384), (const Vector3f *)(v4 + 128));
        Vector3f::operator+=((Vector3f *const)(v4 + 396), (const Vector3f *)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_NavMesh, v4 + 160);
        NavMesh::QueryTiles(
          this->m_NavMesh,
          *(_DWORD *)(v4 + 48),
          (const MinMaxAABB *)(v4 + 384),
          (dynamic_array<const NavMeshTile*,false,8> *)(v4 + 256),
          (dynamic_array<int,false,4> *)(v4 + 320));
      }
      for ( i_0 = 0LL;
            i_0 < dynamic_array<NavMeshTile const*,false,8ul>::size((const dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 256));
            ++i_0 )
      {
        v13 = dynamic_array<int,false,4ul>::operator[]((dynamic_array<int,false,4> *const)(v4 + 320), i_0);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        tileIdx = *v14;
        if ( *v14 >= 0 && tileIdx < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(tiles) )
        {
          v16 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::operator[](tiles, tileIdx);
          header = dynamic_array<unsigned char,false,1ul>::begin(&v16->m_MeshData);
          TileLocation::TileLocation((TileLocation *const)(v4 + 448));
          max = operator+((const Vector3f *)(header + 56), (const Vector3f *)(v4 + 160));
          min = operator+((const Vector3f *)(header + 44), (const Vector3f *)(v4 + 128));
          MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v4 + 384), &min, &max);
          TransformAABBSlow((const MinMaxAABB *)(v4 + 384), (const Matrix4x4f *)(v4 + 512), (MinMaxAABB *)(v4 + 448));
          *(_WORD *)(v4 + 472) = *(_DWORD *)(v4 + 48);
          *(_DWORD *)(v4 + 476) = tileIdx;
          NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}::operator()(
            callback,
            (const TileLocation *)(v4 + 448),
            (const Vector3f *)(v4 + 192),
            (const Quaternionf *)(v4 + 224));
        }
      }
    }
    dynamic_array<int,false,4ul>::~dynamic_array((dynamic_array<int,false,4> *const)(v4 + 320));
    dynamic_array<NavMeshTile const*,false,8ul>::~dynamic_array((dynamic_array<const NavMeshTile*,false,8> *const)(v4 + 256));
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v4 + 96));
  }
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
};
