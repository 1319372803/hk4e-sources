// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/vector_map.h

// Line 21: range 000000000D019882-000000000D0198AA
vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *__cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator=(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *a2)
{
  sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::operator=(
    &this->c,
    &a2->c);
  return this;
};

// Line 21: range 000000000CD74CB8-000000000CD74CD2
void __cdecl vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::~vector_map(
        vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD7B72A-000000000CD7B744
void __cdecl vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::~vector_map(
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this)
{
  sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD7B65E-000000000CD7B678
void __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::~vector_map(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD7B6EE-000000000CD7B708
void __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::~vector_map(
        vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD7BAF2-000000000CD7BB0C
void __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::~vector_map(
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000D04FC76-000000000D04FC9B
void __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector_map(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *a2)
{
  sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::sorted_vector(
    &this->c,
    &a2->c);
};

// Line 21: range 000000000CF56D36-000000000CF56D5B
void __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector_map(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *a2)
{
  sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::sorted_vector(
    &this->c,
    &a2->c);
};

// Line 21: range 000000000CE59EC0-000000000CE59EDA
void __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::~vector_map(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD7BB78-000000000CD7BB9D
void __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::vector_map(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *a2)
{
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::sorted_vector(
    &this->c,
    &a2->c);
};

// Line 21: range 000000000CD73742-000000000CD7375C
void __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::~vector_map(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD7B766-000000000CD7B780
void __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::~vector_map(
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD6EE5A-000000000CD6EE74
void __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::~vector_map(
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD7377E-000000000CD73798
void __cdecl vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::~vector_map(
        vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this)
{
  sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD7BA44-000000000CD7BA5E
void __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::~vector_map(
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this)
{
  sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::~sorted_vector(&this->c);
};

// Line 21: range 000000000CD73706-000000000CD73720
void __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::~vector_map(
        vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::~sorted_vector(&this->c);
};

// Line 41: range 000000000CEB7C16-000000000CEB7C42
bool __cdecl vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare::operator()(
        const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_compare *const this,
        const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_type *x,
        const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_type *y)
{
  return std::less<LocationCacheKeyData>::operator()(&this->comp, &x->first, &y->first);
};

// Line 41: range 000000000CEBD8D8-000000000CEBD904
bool __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare::operator()(
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *const this,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_type *x,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_type *y)
{
  return std::less<int>::operator()(&this->comp, &x->first, &y->first);
};

// Line 41: range 000000000CEBE758-000000000CEBE784
bool __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::operator()(
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *const this,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *x,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *y)
{
  return std::less<int>::operator()(&this->comp, &x->first, &y->first);
};

// Line 41: range 000000000CEB2080-000000000CEB20AC
bool __cdecl vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare::operator()(
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *const this,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *x,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *y)
{
  return std::less<unsigned long long>::operator()(&this->comp, &x->first, &y->first);
};

// Line 46: range 000000000CEBBB6A-000000000CEBBBDF
bool __cdecl vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare::operator()(
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *const this,
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *x,
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_type *y)
{
  const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *v3; // rcx
  const NavMeshTile *first; // rdx
  __int64 v5; // rsi

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
    __asan_report_load8(y, x);
  first = y->first;
  v5 = *(unsigned __int8 *)(((unsigned __int64)x >> 3) + 0x7FFF8000);
  if ( (_BYTE)v5 )
    __asan_report_load8(x, v5);
  return std::less<NavMeshTile const*>::operator()(&v3->comp, *x, first);
};

// Line 46: range 000000000CE9EF18-000000000CE9EF44
bool __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare::operator()(
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *const this,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::key_type *x,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_type *y)
{
  return std::less<int>::operator()(&this->comp, x, &y->first);
};

// Line 46: range 000000000CEBBA36-000000000CEBBA62
bool __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::operator()(
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *const this,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type *x,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *y)
{
  return std::less<int>::operator()(&this->comp, x, &y->first);
};

// Line 46: range 000000000CEBF74A-000000000CEBF776
bool __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare::operator()(
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *const this,
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type *x,
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_type *y)
{
  return std::less<int>::operator()(&this->comp, x, &y->first);
};

// Line 46: range 000000000CEBBF4A-000000000CEBBF76
bool __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare::operator()(
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *const this,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *x,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_type *y)
{
  return std::less<int>::operator()(&this->comp, x, (const int *)y);
};

// Line 46: range 000000000CEB3550-000000000CEB357C
bool __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::operator()(
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *const this,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *x,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_type *y)
{
  return std::less<std::pair<int,int>>::operator()(&this->comp, x, &y->first);
};

// Line 46: range 000000000CEBC43A-000000000CEBC466
bool __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare::operator()(
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *const this,
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *x,
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_type *y)
{
  return std::less<unsigned int>::operator()(&this->comp, x, &y->first);
};

// Line 46: range 000000000CE9F212-000000000CE9F23E
bool __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare::operator()(
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *const this,
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *x,
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_type *y)
{
  return std::less<unsigned int>::operator()(&this->comp, x, &y->first);
};

// Line 46: range 000000000CEB1F90-000000000CEB1FBC
bool __cdecl vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare::operator()(
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *const this,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::key_type *x,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *y)
{
  return std::less<unsigned long long>::operator()(&this->comp, x, &y->first);
};

// Line 46: range 000000000CEBCB54-000000000CEBCB80
bool __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::operator()(
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *const this,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type *x,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_type *y)
{
  return std::less<unsigned short>::operator()(&this->comp, x, &y->first);
};

// Line 46: range 000000000CEB0F46-000000000CEB0F72
bool __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::operator()(
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *const this,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *x,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_type *y)
{
  return std::less<unsigned short>::operator()(&this->comp, x, &y->first);
};

// Line 51: range 000000000D04FB5C-000000000D04FBD1
bool __cdecl vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare::operator()(
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *const this,
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_type *x,
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *y)
{
  const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *v3; // rcx
  const NavMeshTile *v4; // rdx
  __int64 v5; // rsi

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
    __asan_report_load8(y, x);
  v4 = *y;
  v5 = *(unsigned __int8 *)(((unsigned __int64)x >> 3) + 0x7FFF8000);
  if ( (_BYTE)v5 )
    __asan_report_load8(x, v5);
  return std::less<NavMeshTile const*>::operator()(&v3->comp, x->first, v4);
};

// Line 51: range 000000000D03D8F0-000000000D03D91C
bool __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare::operator()(
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *const this,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_type *x,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::key_type *y)
{
  return std::less<int>::operator()(&this->comp, &x->first, y);
};

// Line 51: range 000000000D04FB08-000000000D04FB34
bool __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::operator()(
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *const this,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *x,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type *y)
{
  return std::less<int>::operator()(&this->comp, &x->first, y);
};

// Line 51: range 000000000D052976-000000000D0529A2
bool __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare::operator()(
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *const this,
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_type *x,
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type *y)
{
  return std::less<int>::operator()(&this->comp, &x->first, y);
};

// Line 51: range 000000000D05024C-000000000D050278
bool __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare::operator()(
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *const this,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_type *x,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *y)
{
  return std::less<int>::operator()(&this->comp, (const int *)x, y);
};

// Line 51: range 000000000D04C14E-000000000D04C17A
bool __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::operator()(
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *const this,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_type *x,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *y)
{
  return std::less<std::pair<int,int>>::operator()(&this->comp, &x->first, y);
};

// Line 51: range 000000000D050BEA-000000000D050C16
bool __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare::operator()(
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *const this,
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_type *x,
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *y)
{
  return std::less<unsigned int>::operator()(&this->comp, &x->first, y);
};

// Line 51: range 000000000D03D944-000000000D03D970
bool __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare::operator()(
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *const this,
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_type *x,
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *y)
{
  return std::less<unsigned int>::operator()(&this->comp, &x->first, y);
};

// Line 51: range 000000000D04B552-000000000D04B57E
bool __cdecl vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare::operator()(
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *const this,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *x,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::key_type *y)
{
  return std::less<unsigned long long>::operator()(&this->comp, &x->first, y);
};

// Line 51: range 000000000D0512E4-000000000D051310
bool __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::operator()(
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *const this,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_type *x,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type *y)
{
  return std::less<unsigned short>::operator()(&this->comp, &x->first, y);
};

// Line 51: range 000000000D049514-000000000D049540
bool __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::operator()(
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *const this,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_type *x,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *y)
{
  return std::less<unsigned short>::operator()(&this->comp, &x->first, y);
};

// Line 57: range 000000000CE5508A-000000000CE55137
void __fastcall vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare::value_compare(
        vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_compare *const this,
        std::less<LocationCacheKeyData> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE5BFE6-000000000CE5C093
void __fastcall vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare::value_compare(
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare *const this,
        std::less<const NavMeshTile*> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE5BAAE-000000000CE5BB5B
void __fastcall vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare::value_compare(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare *const this,
        std::less<int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE5BDF6-000000000CE5BEA3
void __fastcall vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::value_compare(
        vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare *const this,
        std::less<int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE5E43A-000000000CE5E4E7
void __fastcall vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare::value_compare(
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare *const this,
        std::less<int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CF56AC0-000000000CF56B6D
void __fastcall vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare::value_compare(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare *const this,
        std::less<int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE4CB00-000000000CE4CBAD
void __fastcall vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::value_compare(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare *const this,
        std::less<std::pair<int,int> > c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE5C1E6-000000000CE5C293
void __fastcall vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare::value_compare(
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare *const this,
        std::less<unsigned int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE47CA2-000000000CE47D4F
void __fastcall vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare::value_compare(
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare *const this,
        std::less<unsigned int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE4D916-000000000CE4D9C3
void __fastcall vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare::value_compare(
        vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare *const this,
        std::less<long long unsigned int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE5D346-000000000CE5D3F3
void __fastcall vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::value_compare(
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare *const this,
        std::less<short unsigned int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000CE4C8FC-000000000CE4C9A9
void __fastcall vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::value_compare(
        vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare *const this,
        std::less<short unsigned int> c,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[80]; // [rsp+10h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 c:57";
  *(_QWORD *)(v7 + 16) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::value_compare;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 75: range 000000000CDC4810-000000000CDC484F
void __cdecl vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::vector_map(
        vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this,
        const std::less<LocationCacheKeyData> *comp,
        const std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare::value_compare(
    &v8,
    (std::less<LocationCacheKeyData>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDCAE0C-000000000CDCAE4B
void __cdecl vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::vector_map(
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        const std::less<const NavMeshTile*> *comp,
        const stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare::value_compare(
    &v8,
    (std::less<const NavMeshTile*>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDCA6FA-000000000CDCA739
void __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::vector_map(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        const std::less<int> *comp,
        const stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare::value_compare(
    &v8,
    (std::less<int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDCA94A-000000000CDCA989
void __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::vector_map(
        vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const std::less<int> *comp,
        const stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare::value_compare(
    &v8,
    (std::less<int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDCCE36-000000000CDCCE75
void __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::vector_map(
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const std::less<int> *comp,
        const stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare::value_compare(
    &v8,
    (std::less<int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CEBBC36-000000000CEBBC75
void __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::vector_map(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const std::less<int> *comp,
        const stl_allocator<std::pair<int,unsigned int>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare::value_compare(
    &v8,
    (std::less<int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDB9EC2-000000000CDB9F01
void __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::vector_map(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const std::less<std::pair<int,int> > *comp,
        const stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare::value_compare(
    &v8,
    (std::less<std::pair<int,int> >)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDCAF06-000000000CDCAF45
void __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::vector_map(
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const std::less<unsigned int> *comp,
        const stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare::value_compare(
    &v8,
    (std::less<unsigned int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDB6282-000000000CDB62C1
void __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::vector_map(
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const std::less<unsigned int> *comp,
        const stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare::value_compare(
    &v8,
    (std::less<unsigned int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDBB00C-000000000CDBB04B
void __cdecl vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::vector_map(
        vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this,
        const std::less<long long unsigned int> *comp,
        const stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare::value_compare(
    &v8,
    (std::less<long long unsigned int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDCC6D0-000000000CDCC70F
void __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::vector_map(
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const std::less<short unsigned int> *comp,
        const stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare::value_compare(
    &v8,
    (std::less<short unsigned int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 75: range 000000000CDB9DC8-000000000CDB9E07
void __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::vector_map(
        vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const std::less<short unsigned int> *comp,
        const stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> *a)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+0h] [rbp-40h]
  vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::value_compare v8; // [rsp+2Fh] [rbp-11h] BYREF

  vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare::value_compare(
    &v8,
    (std::less<short unsigned int>)comp,
    (__int64)a,
    v3,
    v4,
    v5,
    v6);
  sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::sorted_vector(
    &this->c,
    &v8,
    a);
};

// Line 85: range 000000000CDC4988-000000000CDC49A1
vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator __cdecl vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::begin(
        vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  return sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::begin(&this->c);
};

// Line 85: range 000000000CDCB162-000000000CDCB17B
vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->c);
};

// Line 85: range 000000000CDCBBC6-000000000CDCBBDF
vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::begin(
        vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::begin(&this->c);
};

// Line 85: range 000000000CDC9B0C-000000000CDC9B25
vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::begin(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  return sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::begin(&this->c);
};

// Line 85: range 000000000CDCBCE2-000000000CDCBCFB
vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::begin(
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::begin(&this->c);
};

// Line 86: range 000000000CDCC0EA-000000000CDCC103
vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::const_iterator __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->c);
};

// Line 86: range 000000000CDCD37C-000000000CDCD395
vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  return sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::begin(&this->c);
};

// Line 86: range 000000000CDBB806-000000000CDBB81F
vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::begin(
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::begin(&this->c);
};

// Line 86: range 000000000CDBAC76-000000000CDBAC8F
vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::begin(
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::begin(&this->c);
};

// Line 87: range 000000000CDC49A2-000000000CDC49BB
vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::iterator __cdecl vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::end(
        vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  return sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::end(&this->c);
};

// Line 87: range 000000000CDC9634-000000000CDC964D
vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator __cdecl vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this)
{
  return sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(&this->c);
};

// Line 87: range 000000000CDCB17C-000000000CDCB195
vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->c);
};

// Line 87: range 000000000CDC9542-000000000CDC955B
vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(
        vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->c);
};

// Line 87: range 000000000CDCD00C-000000000CDCD025
vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  return sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->c);
};

// Line 87: range 000000000CDC97FA-000000000CDC9813
vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::end(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  return sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::end(&this->c);
};

// Line 87: range 000000000CDBB100-000000000CDBB119
vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator __cdecl vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(
        vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end(&this->c);
};

// Line 87: range 000000000CDCA2CA-000000000CDCA2E3
vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&this->c);
};

// Line 87: range 000000000CDB9CD0-000000000CDB9CE9
vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(
        vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->c);
};

// Line 87: range 000000000CDBBBD0-000000000CDBBBE9
vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->c);
};

// Line 87: range 000000000CDC9D82-000000000CDC9D9B
vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&this->c);
};

// Line 87: range 000000000CDB6392-000000000CDB63AB
vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  return sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->c);
};

// Line 88: range 000000000CDA6F16-000000000CDA6F2F
vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::const_iterator __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->c);
};

// Line 88: range 000000000CDCC8EE-000000000CDCC907
vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->c);
};

// Line 88: range 000000000CDCD396-000000000CDCD3AF
vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this)
{
  return sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::end(&this->c);
};

// Line 88: range 000000000CDCCD18-000000000CDCCD31
vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&this->c);
};

// Line 88: range 000000000CDBB268-000000000CDBB281
vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->c);
};

// Line 88: range 000000000CDBAC90-000000000CDBACA9
vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->c);
};

// Line 88: range 000000000CDCCC26-000000000CDCCC3F
vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::const_iterator __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  return sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&this->c);
};

// Line 88: range 000000000CDA70C4-000000000CDA70DD
vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::const_iterator __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  return sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->c);
};

// Line 95: range 000000000CDC496E-000000000CDC4987
bool __cdecl vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::empty(
        const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this)
{
  return sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::empty(&this->c);
};

// Line 95: range 000000000CDCC360-000000000CDCC379
bool __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::empty(
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::empty(&this->c);
};

// Line 95: range 000000000CDA6EA6-000000000CDA6EBF
bool __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::empty(
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this)
{
  return sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::empty(&this->c);
};

// Line 96: range 000000000CDA6EFC-000000000CDA6F15
vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::size_type __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::size(
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  return sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::size(&this->c);
};

// Line 96: range 000000000CDCD362-000000000CDCD37B
vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::size_type __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::size(
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  return sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::size(&this->c);
};

// Line 100: range 000000000CDC492E-000000000CDC4952
std::pair<__gnu_cxx::__normal_iterator<std::pair<LocationCacheKeyData,LocationCacheData>*,std::vector<std::pair<LocationCacheKeyData,LocationCacheData>> >,bool> __cdecl vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::insert(
        vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > > *const this,
        const vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData> > >::value_type *x)
{
  return sorted_vector<std::pair<LocationCacheKeyData,LocationCacheData>,vector_map<LocationCacheKeyData,LocationCacheData,std::less<LocationCacheKeyData>,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::value_compare,std::allocator<std::pair<LocationCacheKeyData,LocationCacheData>>>::insert_one(
           &this->c,
           x);
};

// Line 100: range 000000000CDCBF08-000000000CDCBF2C
std::pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >,bool> __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::insert(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::value_type *x)
{
  return sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::insert_one(
           &this->c,
           x);
};

// Line 100: range 000000000CDCC8A2-000000000CDCC8C6
std::pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > >,bool> __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::insert(
        vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::value_type *x)
{
  return sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::insert_one(
           &this->c,
           x);
};

// Line 100: range 000000000CDBB1E6-000000000CDBB20A
std::pair<__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >,bool> __cdecl vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::insert(
        vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *x)
{
  return sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::insert_one(
           &this->c,
           x);
};

// Line 105: range 000000000CDC9A3C-000000000CDC9B0A
vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator __fastcall vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::erase(
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:105";
  *(_QWORD *)(v2 + 16) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v2 + 32) = position;
  result._M_current = sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::erase(
                        &this->c,
                        *(sorted_vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> > >::value_compare,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v2 + 32))._M_current;
  if ( v6 == (char *)v2 )
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

// Line 105: range 000000000CDCC37A-000000000CDCC448
vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __fastcall vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::erase(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:105";
  *(_QWORD *)(v2 + 16) = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v2 + 32) = position;
  result._M_current = sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::erase(
                        &this->c,
                        *(sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> > >::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v2 + 32))._M_current;
  if ( v6 == (char *)v2 )
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

// Line 105: range 000000000CDCCA36-000000000CDCCB04
vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator __fastcall vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:105";
  *(_QWORD *)(v2 + 16) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v2 + 32) = position;
  result._M_current = sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
                        &this->c,
                        *(sorted_vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo> > >::value_compare,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v2 + 32))._M_current;
  if ( v6 == (char *)v2 )
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

// Line 105: range 000000000CDC9FBE-000000000CDCA08C
vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __fastcall vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::erase(
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:105";
  *(_QWORD *)(v2 + 16) = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v2 + 32) = position;
  result._M_current = sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::erase(
                        &this->c,
                        *(sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection*>,vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*> > >::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v2 + 32))._M_current;
  if ( v6 == (char *)v2 )
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

// Line 105: range 000000000CDB6722-000000000CDB67F0
vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator __fastcall vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::erase(
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 position:105";
  *(_QWORD *)(v2 + 16) = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::erase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v2 + 32) = position;
  result._M_current = sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::erase(
                        &this->c,
                        *(sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> > > >::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v2 + 32))._M_current;
  if ( v6 == (char *)v2 )
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

// Line 106: range 000000000CDC9A16-000000000CDC9A3A
vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::size_type __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::erase(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *x)
{
  return sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::erase_one<int>(
           &this->c,
           x);
};

// Line 106: range 000000000CDCCBDA-000000000CDCCBFE
vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::size_type __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase_one<unsigned short>(
           &this->c,
           x);
};

// Line 106: range 000000000CDBA6C6-000000000CDBA6EA
vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::size_type __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::erase(
        vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::erase_one<unsigned short>(
           &this->c,
           x);
};

// Line 106: range 000000000CDBBE8E-000000000CDBBEB2
vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::size_type __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::erase(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *x)
{
  return sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::erase_one<std::pair<int,int>>(
           &this->c,
           x);
};

// Line 109: range 000000000CDCBCC6-000000000CDCBCE0
void __cdecl vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::clear(
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this)
{
  sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::clear(&this->c);
};

// Line 109: range 000000000CDCB2BC-000000000CDCB2D6
void __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::clear(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this)
{
  sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::clear(&this->c);
};

// Line 109: range 000000000CDCBCAA-000000000CDCBCC4
void __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::clear(
        vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this)
{
  sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::clear(&this->c);
};

// Line 109: range 000000000CDCBD94-000000000CDCBDAE
void __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::clear(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this)
{
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::clear(&this->c);
};

// Line 109: range 000000000CDCBD78-000000000CDCBD92
void __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::clear(
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this)
{
  sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::clear(&this->c);
};

// Line 109: range 000000000CDB6350-000000000CDB636A
void __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::clear(
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::clear(&this->c);
};

// Line 118: range 000000000CDC96CA-000000000CDC979C
vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::mapped_type *__cdecl vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::operator[](
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::mapped_type *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 temp:118";
  *(_QWORD *)(v2 + 16) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::operator[];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find_or_insert<NavMeshTile const*,DynamicNavMeshTileExInfo>(
    &this->c,
    (DynamicNavMeshTileExInfo **)(v2 + 32),
    x);
  result = *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::mapped_type **)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 118: range 000000000CDCD0A2-000000000CDCD174
vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::mapped_type *__cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::operator[](
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::mapped_type *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 temp:118";
  *(_QWORD *)(v2 + 16) = vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::operator[];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find_or_insert<int,std::shared_ptr<NavMeshData>>(
    &this->c,
    (std::shared_ptr<NavMeshData> **)(v2 + 32),
    x);
  result = *(vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::mapped_type **)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 118: range 000000000CDC9890-000000000CDC9962
vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type *__cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator[](
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 temp:118";
  *(_QWORD *)(v2 + 16) = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator[];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::find_or_insert<int,unsigned int>(
    &this->c,
    (unsigned int **)(v2 + 32),
    x);
  result = *(vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type **)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 118: range 000000000CDCCB06-000000000CDCCBD8
vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::mapped_type *__cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::operator[](
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::mapped_type *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 temp:118";
  *(_QWORD *)(v2 + 16) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::operator[];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find_or_insert<unsigned short,DynamicNavMeshTileInfo>(
    &this->c,
    (DynamicNavMeshTileInfo **)(v2 + 32),
    x);
  result = *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::mapped_type **)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 118: range 000000000CDBA550-000000000CDBA622
vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::mapped_type *__cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::operator[](
        vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::mapped_type *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 temp:118";
  *(_QWORD *)(v2 + 16) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::operator[];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find_or_insert<unsigned short,NavMesh::SurfaceData>(
    &this->c,
    (NavMesh::SurfaceData **)(v2 + 32),
    x);
  result = *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::mapped_type **)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 118: range 000000000CDBBA6C-000000000CDBBB3E
vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::mapped_type *__cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::operator[](
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::mapped_type *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 temp:118";
  *(_QWORD *)(v2 + 16) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::operator[];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find_or_insert<std::pair<int,int>,TileLookUpData>(
    &this->c,
    (TileLookUpData **)(v2 + 32),
    x);
  result = *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::mapped_type **)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 118: range 000000000CDC9E4E-000000000CDC9F20
vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::mapped_type *__cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::operator[](
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::mapped_type *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 temp:118";
  *(_QWORD *)(v2 + 16) = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::operator[];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find_or_insert<unsigned int,DynamicOffMeshConnection *>(
    &this->c,
    (DynamicOffMeshConnection ***)(v2 + 32),
    x);
  result = *(vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::mapped_type **)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 118: range 000000000CDB6562-000000000CDB6634
vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::mapped_type *__cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::operator[](
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::mapped_type *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 temp:118";
  *(_QWORD *)(v2 + 16) = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::operator[];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find_or_insert<unsigned int,std::shared_ptr<DynamicNavMesh>>(
    &this->c,
    (std::shared_ptr<DynamicNavMesh> **)(v2 + 32),
    x);
  result = *(vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::mapped_type **)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 120: range 000000000CDC960E-000000000CDC9632
vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator __cdecl vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find(
        vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *const this,
        const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *x)
{
  return sorted_vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::value_compare,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find<NavMeshTile const*>(
           &this->c,
           x);
};

// Line 120: range 000000000CDCBDB0-000000000CDCBDD4
vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __cdecl vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::find(
        vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *const this,
        const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::key_type *x)
{
  return sorted_vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::value_compare,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::find<int>(
           &this->c,
           x);
};

// Line 120: range 000000000CDC951C-000000000CDC9540
vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(
        vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type *x)
{
  return sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find<int>(
           &this->c,
           x);
};

// Line 120: range 000000000CDCCFE6-000000000CDCD00A
vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::iterator __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find(
        vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type *x)
{
  return sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find<int>(
           &this->c,
           x);
};

// Line 120: range 000000000CDC97D4-000000000CDC97F8
vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __cdecl vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::find(
        vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *const this,
        const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *x)
{
  return sorted_vector<std::pair<int,unsigned int>,vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::value_compare,stl_allocator<std::pair<int,unsigned int>,16>>::find<int>(
           &this->c,
           x);
};

// Line 120: range 000000000CDBB0DA-000000000CDBB0FE
vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator __cdecl vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::find(
        vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const this,
        const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned long long,unsigned short>,vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::value_compare,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::find<unsigned long long>(
           &this->c,
           x);
};

// Line 120: range 000000000CDCA2A4-000000000CDCA2C8
vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find(
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find<unsigned short>(
           &this->c,
           x);
};

// Line 120: range 000000000CDB9CAA-000000000CDB9CCE
vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
        vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find<unsigned short>(
           &this->c,
           x);
};

// Line 120: range 000000000CDBBB40-000000000CDBBB64
vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *x)
{
  return sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find<std::pair<int,int>>(
           &this->c,
           x);
};

// Line 120: range 000000000CDC9D5C-000000000CDC9D80
vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find(
        vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find<unsigned int>(
           &this->c,
           x);
};

// Line 120: range 000000000CDB636C-000000000CDB6390
vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find(
        vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find<unsigned int>(
           &this->c,
           x);
};

// Line 121: range 000000000CDCC8C8-000000000CDCC8EC
vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator __cdecl vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *const this,
        const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type *x)
{
  return sorted_vector<std::pair<int,DynamicSurfaceInfo *>,vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::value_compare,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find<int>(
           &this->c,
           x);
};

// Line 121: range 000000000CDCD878-000000000CDCD89C
vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::const_iterator __cdecl vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find(
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> > *const this,
        const vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData> >,16> >::key_type *x)
{
  return sorted_vector<std::pair<int,std::shared_ptr<NavMeshData>>,vector_map<int,std::shared_ptr<NavMeshData>,std::less<int>,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::value_compare,stl_allocator<std::pair<int,std::shared_ptr<NavMeshData>>,16>>::find<int>(
           &this->c,
           x);
};

// Line 121: range 000000000CDCCCF2-000000000CDCCD16
vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator __cdecl vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find(
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *const this,
        const vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::value_compare,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find<unsigned short>(
           &this->c,
           x);
};

// Line 121: range 000000000CDBB242-000000000CDBB266
vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator __cdecl vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > *const this,
        const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned short,NavMesh::SurfaceData>,vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::value_compare,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find<unsigned short>(
           &this->c,
           x);
};

// Line 121: range 000000000CDBB8E4-000000000CDBB908
vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *x)
{
  return sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find<std::pair<int,int>>(
           &this->c,
           x);
};

// Line 121: range 000000000CDCCC00-000000000CDCCC24
vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::const_iterator __cdecl vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find(
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *const this,
        const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned int,DynamicOffMeshConnection *>,vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::value_compare,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find<unsigned int>(
           &this->c,
           x);
};

// Line 121: range 000000000CDA709E-000000000CDA70C2
vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::const_iterator __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find(
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this,
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *x)
{
  return sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find<unsigned int>(
           &this->c,
           x);
};

// Line 133: range 000000000CDBA624-000000000CDBA649
void __cdecl vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::reserve(
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *const this,
        vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::size_type n)
{
  sorted_vector<std::pair<std::pair<int,int>,TileLookUpData>,vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::value_compare,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::reserve(
    &this->c,
    n);
};

// Line 1916: range 000000000CDA7084-000000000CDA709D
vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::size_type __cdecl vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::size(
        const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > *const this)
{
  return sorted_vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::value_compare,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::size(&this->c);
};
