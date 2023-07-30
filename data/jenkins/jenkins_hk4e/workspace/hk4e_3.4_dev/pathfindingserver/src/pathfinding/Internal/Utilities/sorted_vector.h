// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/sorted_vector.h

// Line 8: range 000000000D019850-000000000D019880
sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *__cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::operator=(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *a2)
{
  std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator=(&this->c, &a2->c);
  return this;
};

// Line 8: range 000000000CD5A870-000000000CD5A88A
void __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::~sorted_vector(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  std::vector<int,stl_allocator<int,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD74C98-000000000CD74CB6
void __cdecl sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::~sorted_vector(
        sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>::~vector(&this->c);
};

// Line 8: range 000000000CD7B70A-000000000CD7B728
void __cdecl sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::~sorted_vector(
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this)
{
  std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD7B63E-000000000CD7B65C
void __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::~sorted_vector(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD7B6CE-000000000CD7B6EC
void __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::~sorted_vector(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD7BAD2-000000000CD7BAF0
void __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::~sorted_vector(
        sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::~vector(&this->c);
};

// Line 8: range 000000000D04FC48-000000000D04FC75
void __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::sorted_vector(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *a2)
{
  std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector(&this->c, &a2->c);
};

// Line 8: range 000000000CF56D08-000000000CF56D35
void __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::sorted_vector(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *a2)
{
  std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector(&this->c, &a2->c);
};

// Line 8: range 000000000CE59EA0-000000000CE59EBE
void __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::~sorted_vector(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD7BB4A-000000000CD7BB77
void __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::sorted_vector(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *a2)
{
  std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::vector(
    &this->c,
    &a2->c);
};

// Line 8: range 000000000CD73722-000000000CD73740
void __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::~sorted_vector(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD7B746-000000000CD7B764
void __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::~sorted_vector(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD6EE3A-000000000CD6EE58
void __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::~sorted_vector(
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD7375E-000000000CD7377C
void __cdecl sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::~sorted_vector(
        sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this)
{
  std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD7BA24-000000000CD7BA42
void __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::~sorted_vector(
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this)
{
  std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::~vector(&this->c);
};

// Line 8: range 000000000CD736E6-000000000CD73704
void __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::~sorted_vector(
        sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::~vector(&this->c);
};

// Line 25: range 000000000CEB1DB2-000000000CEB1DBF
const sorted_vector<int,std::less<int>,stl_allocator<int,16> >::value_compare *__cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::get_compare(
        const sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  return (const sorted_vector<int,std::less<int>,stl_allocator<int,16> >::value_compare *)this;
};

// Line 25: range 000000000CEB7BD2-000000000CEB7BDF
const sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_compare *__cdecl sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::get_compare(
        const sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  return this;
};

// Line 25: range 000000000CEBBB26-000000000CEBBB33
const sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *__cdecl sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::get_compare(
        const sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CE9EF0A-000000000CE9EF17
const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *__cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::get_compare(
        const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CEBBA28-000000000CEBBA35
const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *__cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::get_compare(
        const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CEBF706-000000000CEBF713
const sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *__cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::get_compare(
        const sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CEBBF3C-000000000CEBBF49
const sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *__cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::get_compare(
        const sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CEB1F4C-000000000CEB1F59
const sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *__cdecl sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::get_compare(
        const sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CEBCB10-000000000CEBCB1D
const sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *__cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::get_compare(
        const sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CEB0F02-000000000CEB0F0F
const sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *__cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::get_compare(
        const sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CEB350C-000000000CEB3519
const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *__cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::get_compare(
        const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CEBC42C-000000000CEBC439
const sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *__cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::get_compare(
        const sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  return this;
};

// Line 25: range 000000000CE9F1CE-000000000CE9F1DB
const sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *__cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::get_compare(
        const sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  return this;
};

// Line 28: range 000000000CE41E70-000000000CE41E99
void __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::sorted_vector(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this,
        const std::less<int> *comp,
        const stl_allocator<int,16> *a)
{
  std::vector<int,stl_allocator<int,16>>::vector(&this->c, a);
};

// Line 28: range 000000000CE55138-000000000CE55165
void __cdecl sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::sorted_vector(
        sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this,
        const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_compare *comp,
        const std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > *a)
{
  std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>::vector(&this->c, a);
};

// Line 28: range 000000000CE5C094-000000000CE5C0C1
void __cdecl sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::sorted_vector(
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *comp,
        const stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> *a)
{
  std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CE5BB5C-000000000CE5BB89
void __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::sorted_vector(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *comp,
        const stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> *a)
{
  std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CE5BEA4-000000000CE5BED1
void __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::sorted_vector(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *comp,
        const stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> *a)
{
  std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CE5E4E8-000000000CE5E515
void __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::sorted_vector(
        sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *comp,
        const stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> *a)
{
  std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CF56B6E-000000000CF56B9B
void __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::sorted_vector(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *comp,
        const stl_allocator<std::pair<int,unsigned int>,16> *a)
{
  std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector(&this->c, a);
};

// Line 28: range 000000000CE4CBAE-000000000CE4CBDB
void __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::sorted_vector(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *comp,
        const stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> *a)
{
  std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CE5C294-000000000CE5C2C1
void __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::sorted_vector(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *comp,
        const stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> *a)
{
  std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CE47D50-000000000CE47D7D
void __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::sorted_vector(
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *comp,
        const stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> *a)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CE4D9C4-000000000CE4D9F1
void __cdecl sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::sorted_vector(
        sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *comp,
        const stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> *a)
{
  std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CE5D3F4-000000000CE5D421
void __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::sorted_vector(
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *comp,
        const stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> *a)
{
  std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::vector(
    &this->c,
    a);
};

// Line 28: range 000000000CE4C9AA-000000000CE4C9D7
void __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::sorted_vector(
        sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *comp,
        const stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> *a)
{
  std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::vector(
    &this->c,
    a);
};

// Line 32: range 000000000CE5568C-000000000CE556A5
bool __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::empty(
        const sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  return std::vector<int,stl_allocator<int,16>>::empty(&this->c);
};

// Line 32: range 000000000CE556A6-000000000CE556C3
bool __cdecl sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::empty(
        const sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  return std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>::empty(&this->c);
};

// Line 32: range 000000000CE5CF5E-000000000CE5CF7B
bool __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::empty(
        const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::empty(&this->c);
};

// Line 32: range 000000000CE3A642-000000000CE3A65F
bool __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::empty(
        const sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  return std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::empty(&this->c);
};

// Line 33: range 000000000CE3A67A-000000000CE3A697
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::size_type __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::size(
        const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::size(&this->c);
};

// Line 33: range 000000000CE5EE3C-000000000CE5EE59
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::size_type __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::size(
        const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::size(&this->c);
};

// Line 33: range 000000000CE3B4B6-000000000CE3B4D3
sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::size_type __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::size(
        const sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  return std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::size(&this->c);
};

// Line 35: range 000000000CE5CF32-000000000CE5CF4F
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::const_iterator __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(
        const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->c);
};

// Line 35: range 000000000CE5EE5A-000000000CE5EE77
sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(
        const sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  return std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->c);
};

// Line 35: range 000000000CE4E9E0-000000000CE4E9FD
sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::begin(
        const sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  return std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::begin(&this->c);
};

// Line 35: range 000000000CE4D52E-000000000CE4D54B
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::begin(
        const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::begin(&this->c);
};

// Line 36: range 000000000CF9E0E4-000000000CF9E0FD
sorted_vector<int,std::less<int>,stl_allocator<int,16> >::const_iterator __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(
        const sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  return std::vector<int,stl_allocator<int,16>>::end(&this->c);
};

// Line 36: range 000000000CE3A698-000000000CE3A6B5
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::const_iterator __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(
        const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->c);
};

// Line 36: range 000000000CE5D874-000000000CE5D891
sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(
        const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->c);
};

// Line 36: range 000000000CE5EE78-000000000CE5EE95
sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(
        const sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  return std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->c);
};

// Line 36: range 000000000CE5E28C-000000000CE5E2A9
sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(
        const sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this)
{
  return std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&this->c);
};

// Line 36: range 000000000CE4E0D6-000000000CE4E0F3
sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(
        const sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  return std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->c);
};

// Line 36: range 000000000CE4D54C-000000000CE4D569
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(
        const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->c);
};

// Line 36: range 000000000CE5E0FA-000000000CE5E117
sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(
        const sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  return std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&this->c);
};

// Line 36: range 000000000CE3B63A-000000000CE3B657
sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(
        const sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  return std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->c);
};

// Line 37: range 000000000CF4C3A0-000000000CF4C3B9
sorted_vector<int,std::less<int>,stl_allocator<int,16> >::iterator __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::begin(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  return std::vector<int,stl_allocator<int,16>>::begin(&this->c);
};

// Line 37: range 000000000CE556C4-000000000CE556E1
sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator __cdecl sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::begin(
        sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  return std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>::begin(&this->c);
};

// Line 37: range 000000000CE5C44A-000000000CE5C467
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->c);
};

// Line 37: range 000000000CE5C5F8-000000000CE5C615
sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::begin(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::begin(&this->c);
};

// Line 37: range 000000000CE5A88C-000000000CE5A8A9
sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::begin(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  return std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::begin(&this->c);
};

// Line 37: range 000000000CE5C656-000000000CE5C673
sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::begin(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  return std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::begin(&this->c);
};

// Line 38: range 000000000CE4D8DE-000000000CE4D8F7
sorted_vector<int,std::less<int>,stl_allocator<int,16> >::iterator __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  return std::vector<int,stl_allocator<int,16>>::end(&this->c);
};

// Line 38: range 000000000CE556E2-000000000CE556FF
sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator __cdecl sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::end(
        sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  return std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>::end(&this->c);
};

// Line 38: range 000000000CE59E74-000000000CE59E91
sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator __cdecl sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this)
{
  return std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(&this->c);
};

// Line 38: range 000000000CE5C468-000000000CE5C485
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->c);
};

// Line 38: range 000000000CE59CE2-000000000CE59CFF
sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  return std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->c);
};

// Line 38: range 000000000CE5E790-000000000CE5E7AD
sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(
        sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  return std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->c);
};

// Line 38: range 000000000CE5A3AC-000000000CE5A3C9
sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::end(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  return std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::end(&this->c);
};

// Line 38: range 000000000CE4DC5C-000000000CE4DC79
sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(
        sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this)
{
  return std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(&this->c);
};

// Line 38: range 000000000CE5B2CE-000000000CE5B2EB
sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this)
{
  return std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&this->c);
};

// Line 38: range 000000000CE4C8C0-000000000CE4C8DD
sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(
        sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  return std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->c);
};

// Line 38: range 000000000CE4F0D6-000000000CE4F0F3
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->c);
};

// Line 38: range 000000000CE5AA2C-000000000CE5AA49
sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  return std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&this->c);
};

// Line 38: range 000000000CE48018-000000000CE48035
sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  return std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->c);
};

// Line 44: range 000000000CF4C3BA-000000000CF4C3DB
sorted_vector<int,std::less<int>,stl_allocator<int,16> >::value_compare __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::value_comp(
        const sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  sorted_vector<int,std::less<int>,stl_allocator<int,16> >::value_compare v1; // bl

  sorted_vector<int,std::less<int>,stl_allocator<int,16>>::get_compare(this);
  return v1;
};

// Line 47: range 000000000CEB168A-000000000CEB186A
void __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::sort_clear_duplicates(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int *M_current; // r14
  sorted_vector<int,std::less<int>,stl_allocator<int,16> >::iterator v5; // rax
  std::less<int> v6; // dl
  int *v7; // r14
  std::vector<int,stl_allocator<int,16> >::iterator v8; // rax
  std::less<int> v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // [rsp+0h] [rbp-A0h]
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __i; // [rsp+18h] [rbp-88h] BYREF
  __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16> > > __first; // [rsp+20h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __rhs; // [rsp+28h] [rbp-78h] BYREF
  char v17[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 newEnd:54";
  *(_QWORD *)(v1 + 16) = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::sort_clear_duplicates;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( !sorted_vector<int,std::less<int>,stl_allocator<int,16>>::empty(this) )
  {
    sorted_vector<int,std::less<int>,stl_allocator<int,16>>::value_comp(this);
    M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(this)._M_current;
    v5._M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::begin(this)._M_current;
    std::stable_sort<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,std::less<int>>(
      v5,
      (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >)M_current,
      v6);
    sorted_vector<int,std::less<int>,stl_allocator<int,16>>::value_comp(this);
    v7 = std::vector<int,stl_allocator<int,16>>::end(&this->c)._M_current;
    v8._M_current = std::vector<int,stl_allocator<int,16>>::begin(&this->c)._M_current;
    *(__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v1 + 32) = remove_duplicates<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,std::less<int>>(
                                                                                                  v8,
                                                                                                  (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >)v7,
                                                                                                  v9,
                                                                                                  v10,
                                                                                                  v11,
                                                                                                  v12,
                                                                                                  v13);
    __rhs._M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(this)._M_current;
    if ( __gnu_cxx::operator!=<int *,std::vector<int,stl_allocator<int,16>>>(
           (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v1 + 32),
           &__rhs) )
    {
      __i._M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(this)._M_current;
      __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16>>>::__normal_iterator<int *>(
        (__gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16> > > *const)&__rhs,
        &__i);
      __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16>>>::__normal_iterator<int *>(
        &__first,
        (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v1 + 32));
      std::vector<int,stl_allocator<int,16>>::erase(
        &this->c,
        __first,
        (std::vector<int,stl_allocator<int,16> >::const_iterator)__rhs._M_current);
    }
    sorted_vector<int,std::less<int>,stl_allocator<int,16>>::verify_duplicates_and_sorted(this);
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 000000000CE59F7A-000000000CE5A245
void __cdecl sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find_or_insert<NavMeshTile const*,DynamicNavMeshTileExInfo>(
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        DynamicNavMeshTileExInfo **mappedT,
        const NavMeshTile *const *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *compare; // r14
  const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_type *v7; // rdx
  DynamicNavMeshTileExInfo *p_second; // rcx
  DynamicNavMeshTileExInfo *v10; // rcx
  __gnu_cxx::__normal_iterator<const std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > __position; // [rsp+20h] [rbp-D0h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > __rhs; // [rsp+28h] [rbp-C8h] BYREF
  DynamicNavMeshTileExInfo __y; // [rsp+30h] [rbp-C0h] BYREF
  std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> __x; // [rsp+50h] [rbp-A0h] BYREF
  char v16[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 i:65";
  *(_QWORD *)(v3 + 16) = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find_or_insert<NavMeshTile const*,DynamicNavMeshTileExInfo>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v3 + 32) = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::lower_bound<NavMeshTile const*>(this, k);
  __rhs._M_current = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v3 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::get_compare(this),
        v7 = __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 32)),
        vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare::operator()(
          compare,
          k,
          v7)) )
  {
    memset(&__y.m_polyLinks.c.c, 0, sizeof(__y.m_polyLinks.c.c));
    DynamicNavMeshTileExInfo::DynamicNavMeshTileExInfo(&__y);
    std::make_pair<NavMeshTile const* const&,DynamicNavMeshTileExInfo>(&__x, k, &__y);
    __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> const*,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v3 + 32));
    __rhs._M_current = std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::insert(
                         &this->c,
                         __position,
                         &__x)._M_current;
    p_second = &__gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->(&__rhs)->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = p_second;
    std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>::~pair(&__x);
    DynamicNavMeshTileExInfo::~DynamicNavMeshTileExInfo(&__y);
  }
  else
  {
    v10 = &__gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = v10;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 000000000CE5E7DC-000000000CE5EA86
void __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find_or_insert<int,std::shared_ptr<NavMeshData>>(
        sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        std::shared_ptr<NavMeshData> **mappedT,
        const int *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *compare; // r14
  const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_type *v7; // rdx
  std::shared_ptr<NavMeshData> *p_second; // rcx
  std::shared_ptr<NavMeshData> *v10; // rcx
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > __position; // [rsp+20h] [rbp-B0h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > __rhs; // [rsp+28h] [rbp-A8h] BYREF
  std::shared_ptr<NavMeshData> __y; // [rsp+30h] [rbp-A0h] BYREF
  std::pair<int,std::shared_ptr<NavMeshData> > __x; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 i:65";
  *(_QWORD *)(v3 + 16) = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find_or_insert<int,std::shared_ptr<NavMeshData>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator *)(v3 + 32) = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::lower_bound<int>(this, k);
  __rhs._M_current = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v3 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::get_compare(this),
        v7 = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v3 + 32)),
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare::operator()(
          compare,
          k,
          v7)) )
  {
    std::shared_ptr<NavMeshData>::shared_ptr(&__y);
    std::make_pair<int const&,std::shared_ptr<NavMeshData>>(&__x, k, &__y);
    __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>>*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v3 + 32));
    __rhs._M_current = std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::insert(
                         &this->c,
                         __position,
                         &__x)._M_current;
    p_second = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->(&__rhs)->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = p_second;
    std::pair<int,std::shared_ptr<NavMeshData>>::~pair(&__x);
    std::shared_ptr<NavMeshData>::~shared_ptr(&__y);
  }
  else
  {
    v10 = &__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v3 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = v10;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 000000000CE5A3D8-000000000CE5A619
void __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::find_or_insert<int,unsigned int>(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        unsigned int **mappedT,
        const int *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *compare; // r14
  const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_type *v7; // rdx
  unsigned int *p_second; // rcx
  unsigned int *v10; // rcx
  unsigned int __y; // [rsp+24h] [rbp-8Ch] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > __position; // [rsp+28h] [rbp-88h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > v14; // [rsp+30h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > __rhs; // [rsp+38h] [rbp-78h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 i:65";
  *(_QWORD *)(v3 + 16) = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::find_or_insert<int,unsigned int>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::iterator *)(v3 + 32) = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::lower_bound<int>(this, k);
  __rhs._M_current = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)(v3 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::get_compare(this),
        v7 = __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *const)(v3 + 32)),
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare::operator()(
          compare,
          k,
          v7)) )
  {
    __y = 0;
    __rhs._M_current = (std::pair<int,unsigned int> *)std::make_pair<int const&,unsigned int>(k, &__y);
    __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> const*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::__normal_iterator<std::pair<int,unsigned int>*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)(v3 + 32));
    v14._M_current = std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::insert(
                       &this->c,
                       __position,
                       (std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_type *)&__rhs)._M_current;
    p_second = &__gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator->(&v14)->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = p_second;
  }
  else
  {
    v10 = &__gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *const)(v3 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = v10;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 000000000CE4ED00-000000000CE4EF60
void __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find_or_insert<std::pair<int,int>,TileLookUpData>(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        TileLookUpData **mappedT,
        const std::pair<int,int> *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *compare; // r14
  const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_type *v7; // rdx
  TileLookUpData *p_second; // rcx
  TileLookUpData *v10; // rcx
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __position; // [rsp+28h] [rbp-98h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > v13; // [rsp+30h] [rbp-90h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+38h] [rbp-88h] BYREF
  std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_type __x; // [rsp+40h] [rbp-80h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 i:65";
  *(_QWORD *)(v3 + 16) = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find_or_insert<std::pair<int,int>,TileLookUpData>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v3 + 32) = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::lower_bound<std::pair<int,int>>(this, k);
  __rhs._M_current = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v3 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::get_compare(this),
        v7 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v3 + 32)),
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::operator()(
          compare,
          k,
          v7)) )
  {
    TileLookUpData::TileLookUpData((TileLookUpData *const)&__rhs, -1, -1);
    __x = std::make_pair<std::pair<int,int> const&,TileLookUpData>(k, (TileLookUpData *)&__rhs);
    __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v3 + 32));
    v13._M_current = std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::insert(
                       &this->c,
                       __position,
                       &__x)._M_current;
    p_second = &__gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->(&v13)->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = p_second;
  }
  else
  {
    v10 = &__gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v3 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = v10;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 000000000CE5AA58-000000000CE5ACAE
void __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find_or_insert<unsigned int,DynamicOffMeshConnection *>(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        DynamicOffMeshConnection ***mappedT,
        const unsigned int *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *compare; // r14
  const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_type *v7; // rdx
  std::pair<unsigned int,DynamicOffMeshConnection*> v9; // rax
  DynamicOffMeshConnection **p_second; // rcx
  DynamicOffMeshConnection **v11; // rcx
  DynamicOffMeshConnection *__y; // [rsp+28h] [rbp-98h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __position; // [rsp+30h] [rbp-90h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __rhs; // [rsp+38h] [rbp-88h] BYREF
  std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_type __x; // [rsp+40h] [rbp-80h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 i:65";
  *(_QWORD *)(v3 + 16) = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find_or_insert<unsigned int,DynamicOffMeshConnection *>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v3 + 32) = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::lower_bound<unsigned int>(this, k);
  __rhs._M_current = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v3 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::get_compare(this),
        v7 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v3 + 32)),
        vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare::operator()(
          compare,
          k,
          v7)) )
  {
    __y = 0LL;
    v9 = std::make_pair<unsigned int const&,DynamicOffMeshConnection *>(k, &__y);
    __x.first = v9.first;
    __x.second = v9.second;
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> const*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *>*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v3 + 32));
    __rhs._M_current = std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::insert(
                         &this->c,
                         __position,
                         &__x)._M_current;
    p_second = &__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator->(&__rhs)->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = p_second;
  }
  else
  {
    v11 = &__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v3 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = v11;
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

// Line 63: range 000000000CE481BC-000000000CE48466
void __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find_or_insert<unsigned int,std::shared_ptr<DynamicNavMesh>>(
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        std::shared_ptr<DynamicNavMesh> **mappedT,
        const unsigned int *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *compare; // r14
  const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_type *v7; // rdx
  std::shared_ptr<DynamicNavMesh> *p_second; // rcx
  std::shared_ptr<DynamicNavMesh> *v10; // rcx
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __position; // [rsp+20h] [rbp-B0h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __rhs; // [rsp+28h] [rbp-A8h] BYREF
  std::shared_ptr<DynamicNavMesh> __y; // [rsp+30h] [rbp-A0h] BYREF
  std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > __x; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 i:65";
  *(_QWORD *)(v3 + 16) = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find_or_insert<unsigned int,std::shared_ptr<DynamicNavMesh>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v3 + 32) = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::lower_bound<unsigned int>(this, k);
  __rhs._M_current = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v3 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::get_compare(this),
        v7 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *const)(v3 + 32)),
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare::operator()(
          compare,
          k,
          v7)) )
  {
    std::shared_ptr<DynamicNavMesh>::shared_ptr(&__y);
    std::make_pair<unsigned int const&,std::shared_ptr<DynamicNavMesh>>(&__x, k, &__y);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> const*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v3 + 32));
    __rhs._M_current = std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::insert(
                         &this->c,
                         __position,
                         &__x)._M_current;
    p_second = &__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator->(&__rhs)->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = p_second;
    std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>::~pair(&__x);
    std::shared_ptr<DynamicNavMesh>::~shared_ptr(&__y);
  }
  else
  {
    v10 = &__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *const)(v3 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = v10;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 000000000CE5DB06-000000000CE5DE08
void __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find_or_insert<unsigned short,DynamicNavMeshTileInfo>(
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        DynamicNavMeshTileInfo **mappedT,
        const unsigned __int16 *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *compare; // r14
  const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_type *v7; // rdx
  DynamicNavMeshTileInfo *p_second; // rcx
  DynamicNavMeshTileInfo *v10; // rcx
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > __position; // [rsp+20h] [rbp-110h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > __rhs; // [rsp+28h] [rbp-108h] BYREF
  DynamicNavMeshTileInfo __y; // [rsp+30h] [rbp-100h] BYREF
  std::pair<short unsigned int,DynamicNavMeshTileInfo> __x; // [rsp+70h] [rbp-C0h] BYREF
  char v16[112]; // [rsp+C0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 i:65";
  *(_QWORD *)(v3 + 16) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find_or_insert<unsigned short,DynamicNavMeshTileInfo>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v3 + 32) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::lower_bound<unsigned short>(this, k);
  __rhs._M_current = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v3 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::get_compare(this),
        v7 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v3 + 32)),
        vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::operator()(
          compare,
          k,
          v7)) )
  {
    memset(&__y, 0, sizeof(__y));
    DynamicNavMeshTileInfo::DynamicNavMeshTileInfo(&__y);
    std::make_pair<unsigned short const&,DynamicNavMeshTileInfo>(&__x, k, &__y);
    __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> const*,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo>*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v3 + 32));
    __rhs._M_current = std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::insert(
                         &this->c,
                         __position,
                         &__x)._M_current;
    p_second = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->(&__rhs)->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = p_second;
    std::pair<unsigned short,DynamicNavMeshTileInfo>::~pair(&__x);
    DynamicNavMeshTileInfo::~DynamicNavMeshTileInfo(&__y);
  }
  else
  {
    v10 = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v3 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = v10;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 000000000CE4CD7C-000000000CE4D03D
void __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find_or_insert<unsigned short,NavMesh::SurfaceData>(
        sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        NavMesh::SurfaceData **mappedT,
        const unsigned __int16 *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *compare; // r14
  const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_type *v7; // rdx
  NavMesh::SurfaceData *p_second; // rcx
  NavMesh::SurfaceData *v10; // rcx
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __position; // [rsp+20h] [rbp-1E0h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+28h] [rbp-1D8h] BYREF
  NavMesh::SurfaceData __y; // [rsp+30h] [rbp-1D0h] BYREF
  std::pair<short unsigned int,NavMesh::SurfaceData> __x; // [rsp+E0h] [rbp-120h] BYREF
  char v16[112]; // [rsp+190h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 i:65";
  *(_QWORD *)(v3 + 16) = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find_or_insert<unsigned short,NavMesh::SurfaceData>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator *)(v3 + 32) = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::lower_bound<unsigned short>(this, k);
  __rhs._M_current = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v3 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::get_compare(this),
        v7 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v3 + 32)),
        vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::operator()(
          compare,
          k,
          v7)) )
  {
    memset(&__y, 0, sizeof(__y));
    NavMesh::SurfaceData::SurfaceData(&__y);
    std::make_pair<unsigned short const&,NavMesh::SurfaceData>(&__x, k, &__y);
    __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData>*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v3 + 32));
    __rhs._M_current = std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::insert(
                         &this->c,
                         __position,
                         &__x)._M_current;
    p_second = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->(&__rhs)->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = p_second;
    std::pair<unsigned short,NavMesh::SurfaceData>::~pair(&__x);
    NavMesh::SurfaceData::~SurfaceData(&__y);
  }
  else
  {
    v10 = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v3 + 32))->second;
    if ( *(_BYTE *)(((unsigned __int64)mappedT >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *mappedT = v10;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 74: range 000000000CE56C28-000000000CE56DFA
std::pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >,bool> __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::insert_one(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this,
        const sorted_vector<int,std::less<int>,stl_allocator<int,16> >::value_type *x)
{
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::less<int> *compare; // r14
  const int *v6; // rdx
  bool __y; // [rsp+1Fh] [rbp-81h] BYREF
  __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16> > > __position; // [rsp+20h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __rhs; // [rsp+28h] [rbp-78h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF
  std::pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >,bool> result; // 0:rax.9

  v2 = (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)v3;
  }
  v2->_M_current = (int *)1102416563;
  v2[1]._M_current = (int *)"1 32 8 4 i:76";
  v2[2]._M_current = (int *)sorted_vector<int,std::less<int>,stl_allocator<int,16>>::insert_one;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v2[4]._M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::lower_bound<int>(this, x)._M_current;
  __rhs._M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<int *,std::vector<int,stl_allocator<int,16>>>(v2 + 4, &__rhs)
    || (compare = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator*(v2 + 4),
        std::less<int>::operator()(compare, x, v6)) )
  {
    __y = 1;
    __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16>>>::__normal_iterator<int *>(
      &__position,
      v2 + 4);
    __rhs._M_current = std::vector<int,stl_allocator<int,16>>::insert(&this->c, __position, x)._M_current;
    result = std::make_pair<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,bool>(
               &__rhs,
               &__y);
  }
  else
  {
    __y = 0;
    result = std::make_pair<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>> &,bool>(
               v2 + 4,
               &__y);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_current = (int *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 74: range 000000000CE554B4-000000000CE5568A
std::pair<__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >,bool> __cdecl sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::insert_one(
        sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this,
        const sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_type *x)
{
  __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_compare *compare; // r14
  const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_type *v6; // rdx
  bool __y; // [rsp+1Fh] [rbp-81h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > __position; // [rsp+20h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > __rhs; // [rsp+28h] [rbp-78h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF
  std::pair<__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >,bool> result; // 0:rax.9

  v2 = (__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> > *)v3;
  }
  v2->_M_current = (std::pair<LocationCacheKeyData,LocationCacheData> *)1102416563;
  v2[1]._M_current = (std::pair<LocationCacheKeyData,LocationCacheData> *)"1 32 8 4 i:76";
  v2[2]._M_current = (std::pair<LocationCacheKeyData,LocationCacheData> *)sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::insert_one;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v2[4]._M_current = sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::lower_bound<std::pair<LocationCacheKeyData,LocationCacheData>>(
                       this,
                       x)._M_current;
  __rhs._M_current = sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>(
         v2 + 4,
         &__rhs)
    || (compare = sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::operator*(v2 + 4),
        vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    __y = 1;
    __gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> const*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*>(
      &__position,
      v2 + 4);
    __rhs._M_current = std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>::insert(&this->c, __position, x)._M_current;
    result = std::make_pair<__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>,bool>(
               &__rhs,
               &__y);
  }
  else
  {
    __y = 0;
    result = std::make_pair<__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>> &,bool>(
               v2 + 4,
               &__y);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_current = (std::pair<LocationCacheKeyData,LocationCacheData> *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 74: range 000000000CE5C828-000000000CE5C9FE
std::pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >,bool> __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::insert_one(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_type *x)
{
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *compare; // r14
  const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_type *v6; // rdx
  bool __y; // [rsp+1Fh] [rbp-81h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > __position; // [rsp+20h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > __rhs; // [rsp+28h] [rbp-78h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF
  std::pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >,bool> result; // 0:rax.9

  v2 = (__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *)v3;
  }
  v2->_M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)1102416563;
  v2[1]._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)"1 32 8 4 i:76";
  v2[2]._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::insert_one;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v2[4]._M_current = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::lower_bound<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>>(
                       this,
                       x)._M_current;
  __rhs._M_current = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
         v2 + 4,
         &__rhs)
    || (compare = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator*(v2 + 4),
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    __y = 1;
    __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> const*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*>(
      &__position,
      v2 + 4);
    __rhs._M_current = std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::insert(
                         &this->c,
                         __position,
                         x)._M_current;
    result = std::make_pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>,bool>(
               &__rhs,
               &__y);
  }
  else
  {
    __y = 0;
    result = std::make_pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>> &,bool>(
               v2 + 4,
               &__y);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 74: range 000000000CE5D536-000000000CE5D70C
std::pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >,bool> __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::insert_one(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *x)
{
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *compare; // r14
  const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *v6; // rdx
  bool __y; // [rsp+1Fh] [rbp-81h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __position; // [rsp+20h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+28h] [rbp-78h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF
  std::pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >,bool> result; // 0:rax.9

  v2 = (__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)v3;
  }
  v2->_M_current = (std::pair<int,DynamicSurfaceInfo*> *)1102416563;
  v2[1]._M_current = (std::pair<int,DynamicSurfaceInfo*> *)"1 32 8 4 i:76";
  v2[2]._M_current = (std::pair<int,DynamicSurfaceInfo*> *)sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::insert_one;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v2[4]._M_current = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::lower_bound<std::pair<int,DynamicSurfaceInfo *>>(
                       this,
                       x)._M_current;
  __rhs._M_current = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
         v2 + 4,
         &__rhs)
    || (compare = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator*(v2 + 4),
        vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    __y = 1;
    __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> const*,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::__normal_iterator<std::pair<int,DynamicSurfaceInfo *>*>(
      &__position,
      v2 + 4);
    __rhs._M_current = std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::insert(
                         &this->c,
                         __position,
                         x)._M_current;
    result = std::make_pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>,bool>(
               &__rhs,
               &__y);
  }
  else
  {
    __y = 0;
    result = std::make_pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>> &,bool>(
               v2 + 4,
               &__y);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_current = (std::pair<int,DynamicSurfaceInfo*> *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 74: range 000000000CE4DD98-000000000CE4DF6E
std::pair<__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >,bool> __cdecl sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::insert_one(
        sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this,
        const sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *x)
{
  __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *compare; // r14
  const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *v6; // rdx
  bool __y; // [rsp+1Fh] [rbp-81h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > __position; // [rsp+20h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > __rhs; // [rsp+28h] [rbp-78h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF
  std::pair<__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >,bool> result; // 0:rax.9

  v2 = (__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > *)v3;
  }
  v2->_M_current = (std::pair<long long unsigned int,short unsigned int> *)1102416563;
  v2[1]._M_current = (std::pair<long long unsigned int,short unsigned int> *)"1 32 8 4 i:76";
  v2[2]._M_current = (std::pair<long long unsigned int,short unsigned int> *)sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::insert_one;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v2[4]._M_current = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::lower_bound<std::pair<unsigned long long,unsigned short>>(
                       this,
                       x)._M_current;
  __rhs._M_current = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>(
         v2 + 4,
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>::operator*(v2 + 4),
        vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    __y = 1;
    __gnu_cxx::__normal_iterator<std::pair<unsigned long long,unsigned short> const*,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>::__normal_iterator<std::pair<unsigned long long,unsigned short>*>(
      &__position,
      v2 + 4);
    __rhs._M_current = std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::insert(
                         &this->c,
                         __position,
                         x)._M_current;
    result = std::make_pair<__gnu_cxx::__normal_iterator<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>,bool>(
               &__rhs,
               &__y);
  }
  else
  {
    __y = 0;
    result = std::make_pair<__gnu_cxx::__normal_iterator<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>> &,bool>(
               v2 + 4,
               &__y);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_current = (std::pair<long long unsigned int,short unsigned int> *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 84: range 000000000CF4C92A-000000000CF4C934
void __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::verify_duplicates_and_sorted(
        const sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  ;
};

// Line 92: range 000000000CE5A61A-000000000CE5A7A2
sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::size_type __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::erase_one<int>(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *compare; // r14
  const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::size_type result; // rax
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 i:94";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::erase_one<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::lower_bound<int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *const)(v2 + 32)),
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result = 0LL;
  }
  else
  {
    __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> const*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::__normal_iterator<std::pair<int,unsigned int>*>(
      (__gnu_cxx::__normal_iterator<const std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *const)&__rhs,
      (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)(v2 + 32));
    std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::erase(
      &this->c,
      (std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> >::const_iterator)__rhs._M_current);
    result = 1LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 92: range 000000000CE5DE0A-000000000CE5DF92
sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::size_type __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase_one<unsigned short>(
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const unsigned __int16 *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *compare; // r14
  const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::size_type result; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 i:94";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase_one<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::lower_bound<unsigned short>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v2 + 32)),
        vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result = 0LL;
  }
  else
  {
    __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> const*,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo>*>(
      (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)&__rhs,
      (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v2 + 32));
    std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
      &this->c,
      (std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator)__rhs._M_current);
    result = 1LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 92: range 000000000CE4D068-000000000CE4D1F0
sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::size_type __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::erase_one<unsigned short>(
        sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const unsigned __int16 *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *compare; // r14
  const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::size_type result; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 i:94";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::erase_one<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::lower_bound<unsigned short>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v2 + 32)),
        vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result = 0LL;
  }
  else
  {
    __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData>*>(
      (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)&__rhs,
      (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v2 + 32));
    std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::erase(
      &this->c,
      (std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator)__rhs._M_current);
    result = 1LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 92: range 000000000CE4F198-000000000CE4F320
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::size_type __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::erase_one<std::pair<int,int>>(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const std::pair<int,int> *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *compare; // r14
  const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::size_type result; // rax
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 i:94";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::erase_one<std::pair<int,int>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::lower_bound<std::pair<int,int>>(this, x);
  __rhs._M_current = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v2 + 32)),
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result = 0LL;
  }
  else
  {
    __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*>(
      (__gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)&__rhs,
      (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v2 + 32));
    std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::erase(
      &this->c,
      (std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator)__rhs._M_current);
    result = 1LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 104: range 000000000CE5A7A4-000000000CE5A88A
sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator __fastcall sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::erase(
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > __position; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:104";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v2 + 32) = position;
  __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> const*,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>*>(
    &__position,
    (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v2 + 32));
  result._M_current = std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::erase(
                        &this->c,
                        __position)._M_current;
  if ( v7 == (char *)v2 )
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

// Line 104: range 000000000CE5CF7C-000000000CE5D062
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __fastcall sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::erase(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > __position; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:104";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v2 + 32) = position;
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> const*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*>(
    &__position,
    (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *)(v2 + 32));
  result._M_current = std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::erase(
                        &this->c,
                        __position)._M_current;
  if ( v7 == (char *)v2 )
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

// Line 104: range 000000000CE5D8A0-000000000CE5D986
sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator __fastcall sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > __position; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:104";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v2 + 32) = position;
  __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> const*,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo>*>(
    &__position,
    (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v2 + 32));
  result._M_current = std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
                        &this->c,
                        __position)._M_current;
  if ( v7 == (char *)v2 )
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

// Line 104: range 000000000CE5ACB0-000000000CE5AD96
sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __fastcall sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::erase(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __position; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:104";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v2 + 32) = position;
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> const*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *>*>(
    &__position,
    (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v2 + 32));
  result._M_current = std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::erase(
                        &this->c,
                        __position)._M_current;
  if ( v7 == (char *)v2 )
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

// Line 104: range 000000000CE48754-000000000CE4883A
sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator __fastcall sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::erase(
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __position; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:104";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v2 + 32) = position;
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> const*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>*>(
    &__position,
    (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v2 + 32));
  result._M_current = std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::erase(
                        &this->c,
                        __position)._M_current;
  if ( v7 == (char *)v2 )
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

// Line 108: range 000000000CE55C1A-000000000CE55C34
void __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::clear(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  std::vector<int,stl_allocator<int,16>>::clear(&this->c);
};

// Line 108: range 000000000CE5C636-000000000CE5C654
void __cdecl sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::clear(
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this)
{
  std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::clear(&this->c);
};

// Line 108: range 000000000CE5C494-000000000CE5C4B2
void __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::clear(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::clear(&this->c);
};

// Line 108: range 000000000CE5C616-000000000CE5C634
void __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::clear(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::clear(&this->c);
};

// Line 108: range 000000000CE5C694-000000000CE5C6B2
void __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::clear(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::clear(&this->c);
};

// Line 108: range 000000000CE5C674-000000000CE5C692
void __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::clear(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::clear(&this->c);
};

// Line 108: range 000000000CE47E92-000000000CE47EB0
void __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::clear(
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::clear(&this->c);
};

// Line 111: range 000000000CF42080-000000000CF421DB
sorted_vector<int,std::less<int>,stl_allocator<int,16> >::size_type __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::count_one<int>(
        const sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::less<int> *compare; // r14
  const int *v6; // rdx
  bool v7; // al
  sorted_vector<int,std::less<int>,stl_allocator<int,16> >::size_type result; // rax
  __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:113";
  *(_QWORD *)(v2 + 16) = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::count_one<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<int,std::less<int>,stl_allocator<int,16> >::const_iterator *)(v2 + 32) = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::lower_bound<int>(
                                                                                             this,
                                                                                             x);
  __rhs._M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(this)._M_current;
  v7 = 1;
  if ( !__gnu_cxx::operator==<int const*,std::vector<int,stl_allocator<int,16>>>(
          (const __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16> > > *)(v2 + 32),
          &__rhs) )
  {
    compare = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::get_compare(this);
    v6 = __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16>>>::operator*((const __gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16> > > *const)(v2 + 32));
    if ( !std::less<int>::operator()(compare, x, v6) )
      v7 = 0;
  }
  result = !v7;
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE4D778-000000000CE4D8DC
sorted_vector<int,std::less<int>,stl_allocator<int,16> >::iterator __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::find<int>(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::less<int> *compare; // r14
  const int *v6; // rdx
  sorted_vector<int,std::less<int>,stl_allocator<int,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::find<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<int,std::less<int>,stl_allocator<int,16> >::iterator *)(v2 + 32) = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::lower_bound<int>(
                                                                                       this,
                                                                                       x);
  __rhs._M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<int *,std::vector<int,stl_allocator<int,16>>>(
         (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator*((const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v2 + 32)),
        std::less<int>::operator()(compare, x, v6)) )
  {
    result._M_current = sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(int **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE59D0E-000000000CE59E72
sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator __cdecl sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find<NavMeshTile const*>(
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        const NavMeshTile *const *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *compare; // r14
  const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find<NavMeshTile const*>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::lower_bound<NavMeshTile const*>(this, x);
  __rhs._M_current = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v2 + 32)),
        vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE5C6B4-000000000CE5C818
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::find<int>(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *compare; // r14
  const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::find<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::lower_bound<int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *const)(v2 + 32)),
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE59B7C-000000000CE59CE0
sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find<int>(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *compare; // r14
  const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::lower_bound<int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v2 + 32)),
        vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<int,DynamicSurfaceInfo*> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE5E62A-000000000CE5E78E
sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find<int>(
        sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *compare; // r14
  const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::lower_bound<int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v2 + 32)),
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<int,std::shared_ptr<NavMeshData> > **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE5A246-000000000CE5A3AA
sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::find<int>(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *compare; // r14
  const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::find<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::lower_bound<int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *const)(v2 + 32)),
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<int,unsigned int> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE4DAF6-000000000CE4DC5A
sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::find<unsigned long long>(
        sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this,
        const unsigned __int64 *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *compare; // r14
  const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::find<unsigned long long>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::lower_bound<unsigned long long>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > *const)(v2 + 32)),
        vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<long long unsigned int,short unsigned int> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE5B168-000000000CE5B2CC
sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find<unsigned short>(
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const unsigned __int16 *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *compare; // r14
  const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::lower_bound<unsigned short>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v2 + 32)),
        vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<short unsigned int,DynamicNavMeshTileInfo> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE4C75A-000000000CE4C8BE
sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find<unsigned short>(
        sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const unsigned __int16 *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *compare; // r14
  const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::lower_bound<unsigned short>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v2 + 32)),
        vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<short unsigned int,NavMesh::SurfaceData> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE4EF62-000000000CE4F0C6
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find<std::pair<int,int>>(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const std::pair<int,int> *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *compare; // r14
  const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find<std::pair<int,int>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::lower_bound<std::pair<int,int>>(this, x);
  __rhs._M_current = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v2 + 32)),
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<std::pair<int,int>,TileLookUpData> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE5A8C6-000000000CE5AA2A
sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find<unsigned int>(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const unsigned int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *compare; // r14
  const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find<unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::lower_bound<unsigned int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v2 + 32)),
        vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<unsigned int,DynamicOffMeshConnection*> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 121: range 000000000CE47EB2-000000000CE48016
sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find<unsigned int>(
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const unsigned int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *compare; // r14
  const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator result; // rax
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:123";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find<unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::lower_bound<unsigned int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *const)(v2 + 32)),
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 131: range 000000000CE5D70E-000000000CE5D872
sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find<int>(
        const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *compare; // r14
  const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:133";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator *)(v2 + 32) = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::lower_bound<int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> const*,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> const*,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v2 + 32)),
        vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(const std::pair<int,DynamicSurfaceInfo*> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 131: range 000000000CE5F034-000000000CE5F198
sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find<int>(
        const sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *compare; // r14
  const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:133";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator *)(v2 + 32) = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::lower_bound<int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > > *const)(v2 + 32)),
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(const std::pair<int,std::shared_ptr<NavMeshData> > **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 131: range 000000000CE5E126-000000000CE5E28A
sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find<unsigned short>(
        const sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const unsigned __int16 *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *compare; // r14
  const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:133";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::lower_bound<unsigned short>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,DynamicNavMeshTileInfo> const*,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> const*,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v2 + 32)),
        vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(const std::pair<short unsigned int,DynamicNavMeshTileInfo> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 131: range 000000000CE4DF70-000000000CE4E0D4
sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find<unsigned short>(
        const sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const unsigned __int16 *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *compare; // r14
  const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:133";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::lower_bound<unsigned short>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v2 + 32)),
        vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(const std::pair<short unsigned int,NavMesh::SurfaceData> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 131: range 000000000CE4E9FE-000000000CE4EB62
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find<std::pair<int,int>>(
        const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const std::pair<int,int> *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *compare; // r14
  const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:133";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find<std::pair<int,int>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v2 + 32) = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::lower_bound<std::pair<int,int>>(this, x);
  __rhs._M_current = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v2 + 32)),
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(const std::pair<std::pair<int,int>,TileLookUpData> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 131: range 000000000CE5DF94-000000000CE5E0F8
sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find<unsigned int>(
        const sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const unsigned int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *compare; // r14
  const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::const_iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:133";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find<unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::const_iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::lower_bound<unsigned int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned int,DynamicOffMeshConnection *> const*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> const*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v2 + 32)),
        vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(const std::pair<unsigned int,DynamicOffMeshConnection*> **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 131: range 000000000CE3B4D4-000000000CE3B638
sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find<unsigned int>(
        const sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const unsigned int *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *compare; // r14
  const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_type *v6; // rdx
  sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::const_iterator result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __rhs; // [rsp+18h] [rbp-78h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:133";
  *(_QWORD *)(v2 + 16) = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find<unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::const_iterator *)(v2 + 32) = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::lower_bound<unsigned int>(this, x);
  __rhs._M_current = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(this)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> const*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v2 + 32),
         &__rhs)
    || (compare = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::get_compare(this),
        v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> const*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *const)(v2 + 32)),
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare::operator()(
          compare,
          x,
          v6)) )
  {
    result._M_current = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(this)._M_current;
  }
  else
  {
    result._M_current = *(const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > **)(v2 + 32);
  }
  if ( v10 == (char *)v2 )
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

// Line 141: range 000000000CEB1D5E-000000000CEB1DB1
sorted_vector<int,std::less<int>,stl_allocator<int,16> >::iterator __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::lower_bound<int>(
        sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this,
        const int *x)
{
  int *M_current; // rbx
  int *v3; // rcx

  sorted_vector<int,std::less<int>,stl_allocator<int,16>>::get_compare(this);
  M_current = std::vector<int,stl_allocator<int,16>>::end(&this->c)._M_current;
  v3 = std::vector<int,stl_allocator<int,16>>::begin(&this->c)._M_current;
  return std::lower_bound<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,int,std::less<int>>(
           (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >)v3,
           (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >)M_current,
           x,
           (std::less<int>)v3);
};

// Line 141: range 000000000CEB7ABE-000000000CEB7B54
sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator __cdecl sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::lower_bound<std::pair<LocationCacheKeyData,LocationCacheData>>(
        sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this,
        const std::pair<LocationCacheKeyData,LocationCacheData> *x)
{
  const sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_compare *compare; // rbx
  std::pair<LocationCacheKeyData,LocationCacheData> *M_current; // r12
  std::pair<LocationCacheKeyData,LocationCacheData> *v4; // rcx

  compare = sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::get_compare(this);
  M_current = std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData> *,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>>>,std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >)M_current,
           x,
           (vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_compare)v4);
};

// Line 141: range 000000000CEBBA8E-000000000CEBBB24
sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator __cdecl sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::lower_bound<NavMeshTile const*>(
        sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        const NavMeshTile *const *x)
{
  const sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *compare; // rbx
  std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> *M_current; // r12
  std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> *v4; // rcx

  compare = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::get_compare(this);
  M_current = std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>,NavMeshTile const*,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > >)M_current,
           x,
           (vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEBD7A8-000000000CEBD83E
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::lower_bound<int>(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        const int *x)
{
  const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *compare; // rbx
  std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *M_current; // r12
  std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *v4; // rcx

  compare = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::get_compare(this);
  M_current = std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>,int,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >)M_current,
           x,
           (vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEBD840-000000000CEBD8D6
sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::lower_bound<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>>(
        sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        const std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *x)
{
  const sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *compare; // rbx
  std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *M_current; // r12
  std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *v4; // rcx

  compare = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::get_compare(this);
  M_current = std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>,std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >)M_current,
           x,
           (vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEBB990-000000000CEBBA26
sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::lower_bound<int>(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const int *x)
{
  const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *compare; // rbx
  std::pair<int,DynamicSurfaceInfo*> *M_current; // r12
  std::pair<int,DynamicSurfaceInfo*> *v4; // rcx

  compare = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::get_compare(this);
  M_current = std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>,int,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >)M_current,
           x,
           (vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEBE6C0-000000000CEBE756
sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::lower_bound<std::pair<int,DynamicSurfaceInfo *>>(
        sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const std::pair<int,DynamicSurfaceInfo*> *x)
{
  const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *compare; // rbx
  std::pair<int,DynamicSurfaceInfo*> *M_current; // r12
  std::pair<int,DynamicSurfaceInfo*> *v4; // rcx

  compare = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::get_compare(this);
  M_current = std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>,std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >)M_current,
           x,
           (vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEBF66E-000000000CEBF704
sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::lower_bound<int>(
        sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const int *x)
{
  const sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *compare; // rbx
  std::pair<int,std::shared_ptr<NavMeshData> > *M_current; // r12
  std::pair<int,std::shared_ptr<NavMeshData> > *v4; // rcx

  compare = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::get_compare(this);
  M_current = std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> *,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>,int,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >)M_current,
           x,
           (vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare)v4);
};

// Line 141: range 000000000CEBBEA4-000000000CEBBF3A
sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __cdecl sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::lower_bound<int>(
        sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const int *x)
{
  const sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int> > >::value_compare,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *compare; // rbx
  std::pair<int,unsigned int> *M_current; // r12
  std::pair<int,unsigned int> *v4; // rcx

  compare = sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::get_compare(this);
  M_current = std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>,int,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > >)M_current,
           x,
           (vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEB1FE8-000000000CEB207E
sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::lower_bound<std::pair<unsigned long long,unsigned short>>(
        sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this,
        const std::pair<long long unsigned int,short unsigned int> *x)
{
  const sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *compare; // rbx
  std::pair<long long unsigned int,short unsigned int> *M_current; // r12
  std::pair<long long unsigned int,short unsigned int> *v4; // rcx

  compare = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>,std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >)M_current,
           x,
           (vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEB1EB4-000000000CEB1F4A
sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::lower_bound<unsigned long long>(
        sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this,
        const unsigned __int64 *x)
{
  const sorted_vector<std::pair<long long unsigned int,short unsigned int>,vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int> > >::value_compare,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *compare; // rbx
  std::pair<long long unsigned int,short unsigned int> *M_current; // r12
  std::pair<long long unsigned int,short unsigned int> *v4; // rcx

  compare = sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>,unsigned long long,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >)M_current,
           x,
           (vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEBCA78-000000000CEBCB0E
sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::lower_bound<unsigned short>(
        sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const unsigned __int16 *x)
{
  const sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *compare; // rbx
  std::pair<short unsigned int,DynamicNavMeshTileInfo> *M_current; // r12
  std::pair<short unsigned int,DynamicNavMeshTileInfo> *v4; // rcx

  compare = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>,unsigned short,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >)M_current,
           x,
           (vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEB0E6A-000000000CEB0F00
sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::lower_bound<unsigned short>(
        sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const unsigned __int16 *x)
{
  const sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *compare; // rbx
  std::pair<short unsigned int,NavMesh::SurfaceData> *M_current; // r12
  std::pair<short unsigned int,NavMesh::SurfaceData> *v4; // rcx

  compare = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>,unsigned short,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >)M_current,
           x,
           (vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEB37CE-000000000CEB3864
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::lower_bound<std::pair<int,int>>(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const std::pair<int,int> *x)
{
  const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *compare; // rbx
  std::pair<std::pair<int,int>,TileLookUpData> *M_current; // r12
  std::pair<std::pair<int,int>,TileLookUpData> *v4; // rcx

  compare = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::get_compare(this);
  M_current = std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>,std::pair<int,int>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >)M_current,
           x,
           (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEBC394-000000000CEBC42A
sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::lower_bound<unsigned int>(
        sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const unsigned int *x)
{
  const sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *compare; // rbx
  std::pair<unsigned int,DynamicOffMeshConnection*> *M_current; // r12
  std::pair<unsigned int,DynamicOffMeshConnection*> *v4; // rcx

  compare = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>,unsigned int,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > >)M_current,
           x,
           (vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare)v4);
};

// Line 141: range 000000000CEAD41E-000000000CEAD4B4
sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::lower_bound<unsigned int>(
        sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const unsigned int *x)
{
  const sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *compare; // rbx
  std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > *M_current; // r12
  std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > *v4; // rcx

  compare = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>,unsigned int,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > >)v4,
           (__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > >)M_current,
           x,
           (vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare)v4);
};

// Line 147: range 000000000CF9E090-000000000CF9E0E3
sorted_vector<int,std::less<int>,stl_allocator<int,16> >::const_iterator __cdecl sorted_vector<int,std::less<int>,stl_allocator<int,16>>::lower_bound<int>(
        const sorted_vector<int,std::less<int>,stl_allocator<int,16> > *const this,
        const int *x)
{
  const int *M_current; // rbx
  const int *v3; // rcx

  sorted_vector<int,std::less<int>,stl_allocator<int,16>>::get_compare(this);
  M_current = std::vector<int,stl_allocator<int,16>>::end(&this->c)._M_current;
  v3 = std::vector<int,stl_allocator<int,16>>::begin(&this->c)._M_current;
  return std::lower_bound<__gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16>>>,int,std::less<int>>(
           (__gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16> > >)v3,
           (__gnu_cxx::__normal_iterator<int const*,std::vector<int,stl_allocator<int,16> > >)M_current,
           x,
           (std::less<int>)v3);
};

// Line 147: range 000000000CEBECE0-000000000CEBED76
sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator __cdecl sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::lower_bound<int>(
        const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const int *x)
{
  const sorted_vector<std::pair<int,DynamicSurfaceInfo*>,vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*> > >::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *compare; // rbx
  const std::pair<int,DynamicSurfaceInfo*> *M_current; // r12
  const std::pair<int,DynamicSurfaceInfo*> *v4; // rcx

  compare = sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::get_compare(this);
  M_current = std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> const*,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>,int,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >)M_current,
           x,
           (vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare)v4);
};

// Line 147: range 000000000CEBFBFA-000000000CEBFC90
sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __cdecl sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::lower_bound<int>(
        const sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const int *x)
{
  const sorted_vector<std::pair<int,std::shared_ptr<NavMeshData> >,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> > > >::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *compare; // rbx
  const std::pair<int,std::shared_ptr<NavMeshData> > *M_current; // r12
  const std::pair<int,std::shared_ptr<NavMeshData> > *v4; // rcx

  compare = sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::get_compare(this);
  M_current = std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<int,std::shared_ptr<NavMeshData>> const*,std::vector<std::pair<int,std::shared_ptr<NavMeshData>>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>>,int,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >)v4,
           (__gnu_cxx::__normal_iterator<const std::pair<int,std::shared_ptr<NavMeshData> >*,std::vector<std::pair<int,std::shared_ptr<NavMeshData> >,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > >)M_current,
           x,
           (vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare)v4);
};

// Line 147: range 000000000CEBF356-000000000CEBF3EC
sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::lower_bound<unsigned short>(
        const sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const unsigned __int16 *x)
{
  const sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *compare; // rbx
  const std::pair<short unsigned int,DynamicNavMeshTileInfo> *M_current; // r12
  const std::pair<short unsigned int,DynamicNavMeshTileInfo> *v4; // rcx

  compare = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> const*,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>,unsigned short,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >)M_current,
           x,
           (vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare)v4);
};

// Line 147: range 000000000CEB2608-000000000CEB269E
sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::lower_bound<unsigned short>(
        const sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const unsigned __int16 *x)
{
  const sorted_vector<std::pair<short unsigned int,NavMesh::SurfaceData>,vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData> > >::value_compare,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *compare; // rbx
  const std::pair<short unsigned int,NavMesh::SurfaceData> *M_current; // r12
  const std::pair<short unsigned int,NavMesh::SurfaceData> *v4; // rcx

  compare = sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>,unsigned short,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >)M_current,
           x,
           (vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare)v4);
};

// Line 147: range 000000000CEB3474-000000000CEB350A
sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::lower_bound<std::pair<int,int>>(
        const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const std::pair<int,int> *x)
{
  const sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *compare; // rbx
  const std::pair<std::pair<int,int>,TileLookUpData> *M_current; // r12
  const std::pair<std::pair<int,int>,TileLookUpData> *v4; // rcx

  compare = sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::get_compare(this);
  M_current = std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>,std::pair<int,int>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >)M_current,
           x,
           (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare)v4);
};

// Line 147: range 000000000CEBF1B6-000000000CEBF24C
sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::lower_bound<unsigned int>(
        const sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const unsigned int *x)
{
  const sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *compare; // rbx
  const std::pair<unsigned int,DynamicOffMeshConnection*> *M_current; // r12
  const std::pair<unsigned int,DynamicOffMeshConnection*> *v4; // rcx

  compare = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> const*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>,unsigned int,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > >)v4,
           (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > >)M_current,
           x,
           (vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare)v4);
};

// Line 147: range 000000000CE9F0BA-000000000CE9F150
sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::const_iterator __cdecl sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::lower_bound<unsigned int>(
        const sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const unsigned int *x)
{
  const sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *compare; // rbx
  const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > *M_current; // r12
  const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > *v4; // rcx

  compare = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::get_compare(this);
  M_current = std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->c)._M_current;
  v4 = std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::begin(&this->c)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)compare & 7) >= *(_BYTE *)(((unsigned __int64)compare >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(compare);
  }
  return std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> const*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>,unsigned int,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare>(
           (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > >)v4,
           (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > >)M_current,
           x,
           (vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare)v4);
};

// Line 176: range 000000000CE4D03E-000000000CE4D067
void __cdecl sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::reserve(
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData> > >::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::size_type n)
{
  std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::reserve(
    &this->c,
    n);
};
