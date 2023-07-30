// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/ServerExpand/DynamicNavMesh.h

// Line 27: range 000000000D0198AC-000000000D0198D4
DynamicNavMeshTileExInfo *__cdecl DynamicNavMeshTileExInfo::operator=(
        DynamicNavMeshTileExInfo *const this,
        DynamicNavMeshTileExInfo *a2)
{
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator=(
    &this->m_polyLinks,
    &a2->m_polyLinks);
  return this;
};

// Line 27: range 000000000CE59EDC-000000000CE59F3C
void __cdecl DynamicNavMeshTileExInfo::DynamicNavMeshTileExInfo(DynamicNavMeshTileExInfo *const this)
{
  std::less<int> comp; // [rsp+1Eh] [rbp-12h] BYREF
  stl_allocator<std::pair<int,unsigned int>,16> a; // [rsp+1Fh] [rbp-11h] BYREF

  stl_allocator<std::pair<int,unsigned int>,16>::stl_allocator(&a);
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector_map(
    &this->m_polyLinks,
    &comp,
    &a);
  stl_allocator<std::pair<int,unsigned int>,16>::~stl_allocator(&a);
};

// Line 27: range 000000000CF56D5C-000000000CF56D81
void __cdecl DynamicNavMeshTileExInfo::DynamicNavMeshTileExInfo(
        DynamicNavMeshTileExInfo *const this,
        DynamicNavMeshTileExInfo *a2)
{
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector_map(
    &this->m_polyLinks,
    &a2->m_polyLinks);
};

// Line 27: range 000000000D04FC9C-000000000D04FCC1
void __cdecl DynamicNavMeshTileExInfo::DynamicNavMeshTileExInfo(
        DynamicNavMeshTileExInfo *const this,
        const DynamicNavMeshTileExInfo *a2)
{
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector_map(
    &this->m_polyLinks,
    &a2->m_polyLinks);
};

// Line 27: range 000000000CE59F3E-000000000CE59F58
void __cdecl DynamicNavMeshTileExInfo::~DynamicNavMeshTileExInfo(DynamicNavMeshTileExInfo *const this)
{
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::~vector_map(&this->m_polyLinks);
};

// Line 30: range 000000000CD56F6A-000000000CD56F83
bool __cdecl DynamicNavMeshTileExInfo::IsClear(const DynamicNavMeshTileExInfo *const this)
{
  return vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::empty(&this->m_polyLinks);
};

// Line 36: range 000000000CD7B782-000000000CD7B840
void __cdecl DynamicTPSStats::DynamicTPSStats(DynamicTPSStats *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->sum_query_path_req = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->success_query_path_req_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->success_query_path_req_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->success_query_path_req_count);
  }
  this->success_query_path_req_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stats_time >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->last_stats_time = 0LL;
};

// Line 59: range 000000000CD56F84-000000000CD57081
const NavMesh *__cdecl DynamicNavMesh::GetInternalNavMesh(const DynamicNavMesh *const this)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<StaticNavMesh>(&this->m_StaticNavMesh, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.h",
      "GetInternalNavMesh",
      62);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    common::milog::MiLogStream::operator()(&v3, "can't find static navmesh. uid=%u", this->m_UniqueToken);
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0LL;
  }
  else
  {
    v2 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    return StaticNavMesh::GetNavMesh(v2);
  }
};

// Line 70: range 000000000CD57082-000000000CD57093
const std::shared_ptr<StaticNavMesh> *__cdecl DynamicNavMesh::GetStaticNavMesh(const DynamicNavMesh *const this)
{
  return &this->m_StaticNavMesh;
};

// Line 74: range 000000000CD57094-000000000CD570E0
DynamicUniqueTokenType __cdecl DynamicNavMesh::GetUniqueToken(const DynamicNavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_UniqueToken);
  }
  return this->m_UniqueToken;
};

// Line 183: range 000000000CD570E2-000000000CD5712F
bool __cdecl DynamicNavMesh::IsUseHavokCut(const DynamicNavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->m_UseHavokCut);
  }
  return this->m_UseHavokCut;
};

// Line 184: range 000000000CD57130-000000000CD5716F
NavMeshManager *__cdecl DynamicNavMesh::GetMgrPtr(const DynamicNavMesh *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_MgrPtr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_MgrPtr, v1);
  return this->m_MgrPtr;
};

// Line 210: range 000000000CD57170-000000000CD571BF
void __cdecl DynamicNavMesh::SetObstacleTimeLimit(DynamicNavMesh *const this, uint64_t value)
{
  uint64_t v2; // rdx

  v2 = 1000 * value;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ObstacleTimeLimit >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ObstacleTimeLimit = v2;
};

// Line 211: range 000000000CD571C0-000000000CD57211
void __cdecl DynamicNavMesh::SetIsEditor(DynamicNavMesh *const this, bool value)
{
  if ( *(char *)(((unsigned __int64)&this->is_editor >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_editor);
  this->is_editor = value;
};

// Line 262: range 000000000CCA3A5E-000000000CCA3B70
void __cdecl DynamicNavMesh::GetSourceTileDataBoundsFast<GMToolHandler::onGMShowNavMeshReq(std::shared_ptr<common::minet::Packet>,proto::GMShowNavMeshReq const&,proto::GMShowNavMeshRsp &)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
        const DynamicNavMesh *const this,
        const MinMaxAABB *aabb,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        GMToolHandler::onGMShowNavMeshReq::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdi
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<StaticNavMesh>(&this->m_StaticNavMesh, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.h",
      "GetSourceTileDataBoundsFast",
      266);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    common::milog::MiLogStream::operator()(&v7, "can't find static navmesh. uid=%u", this->m_UniqueToken);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v4 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    StaticNavMesh::GetSourceTileDataBoundsFast<GMToolHandler::onGMShowNavMeshReq(std::shared_ptr<common::minet::Packet>,proto::GMShowNavMeshReq const&,proto::GMShowNavMeshRsp &)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
      v4,
      aabb,
      surfaces,
      callback);
  }
};

// Line 262: range 000000000CCA400C-000000000CCA411E
void __cdecl DynamicNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
        const DynamicNavMesh *const this,
        const MinMaxAABB *aabb,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdi
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<StaticNavMesh>(&this->m_StaticNavMesh, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.h",
      "GetSourceTileDataBoundsFast",
      266);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    common::milog::MiLogStream::operator()(&v7, "can't find static navmesh. uid=%u", this->m_UniqueToken);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v4 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    StaticNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
      v4,
      aabb,
      surfaces,
      callback);
  }
};

// Line 262: range 000000000CCA4234-000000000CCA4346
void __cdecl DynamicNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh*)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
        const DynamicNavMesh *const this,
        const MinMaxAABB *aabb,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdi
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<StaticNavMesh>(&this->m_StaticNavMesh, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.h",
      "GetSourceTileDataBoundsFast",
      266);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    common::milog::MiLogStream::operator()(&v7, "can't find static navmesh. uid=%u", this->m_UniqueToken);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v4 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    StaticNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
      v4,
      aabb,
      surfaces,
      callback);
  }
};

// Line 273: range 000000000CCA4120-000000000CCA4232
void __cdecl DynamicNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>(
        const DynamicNavMesh *const this,
        const dynamic_array<MinMaxAABB,true,4> *aabbs,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        HavokSihouetteCutter::PrepareCutting::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdi
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<StaticNavMesh>(&this->m_StaticNavMesh, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.h",
      "GetSourceTileDataBoundsFast",
      277);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    common::milog::MiLogStream::operator()(&v7, "can't find static navmesh. uid=%u", this->m_UniqueToken);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v4 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    StaticNavMesh::GetSourceTileDataBoundsFast<HavokSihouetteCutter::PrepareCutting(dynamic_array<HavokSihouetteCutter::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>(
      v4,
      aabbs,
      surfaces,
      callback);
  }
};

// Line 273: range 000000000CCA4348-000000000CCA445A
void __cdecl DynamicNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh*)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>(
        const DynamicNavMesh *const this,
        const dynamic_array<MinMaxAABB,true,4> *aabbs,
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *surfaces,
        NavMeshCarving::DoPrepareCarving::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *callback)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdi
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<StaticNavMesh>(&this->m_StaticNavMesh, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.h",
      "GetSourceTileDataBoundsFast",
      277);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    common::milog::MiLogStream::operator()(&v7, "can't find static navmesh. uid=%u", this->m_UniqueToken);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v4 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    StaticNavMesh::GetSourceTileDataBoundsFast<NavMeshCarving::DoPrepareCarving(dynamic_array<NavMeshCarving::ObstacleCarveInfo,true,8ul> &,std::vector<CarveData,stl_allocator<CarveData,16>> &,vector_set<int,std::less<int>,stl_allocator<int,16>> &,dynamic_array&<MinMaxAABB,true,4ul>,DynamicNavMesh *)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#2}>(
      v4,
      aabbs,
      surfaces,
      callback);
  }
};
