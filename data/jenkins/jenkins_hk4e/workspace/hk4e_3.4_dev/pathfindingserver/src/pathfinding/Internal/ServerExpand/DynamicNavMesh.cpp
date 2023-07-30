// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp

// Line 21: range 000000000D01D5EA-000000000D01D766
DynamicNavMeshTileInfo *__cdecl DynamicNavMeshTileInfo::operator=(
        DynamicNavMeshTileInfo *const this,
        DynamicNavMeshTileInfo *a2)
{
  NavMeshTileRef tileRef; // rdx
  SurfaceIDType surfaceID; // cx
  CarveResultStatus status; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2, a2);
  tileRef = a2->tileRef;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->tileRef = tileRef;
  if ( *(_BYTE *)(((unsigned __int64)&a2->surfaceID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->surfaceID >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->surfaceID);
  }
  surfaceID = a2->surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&this->surfaceID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->surfaceID >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->surfaceID);
  }
  this->surfaceID = surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&a2->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->status);
  }
  status = a2->status;
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->status);
  }
  this->status = status;
  std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::operator=(
    &this->removePolys,
    &a2->removePolys);
  return this;
};

// Line 21: range 000000000CE5D9F8-000000000CE5DAC5
void __cdecl DynamicNavMeshTileInfo::DynamicNavMeshTileInfo(DynamicNavMeshTileInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->tileRef = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->surfaceID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->surfaceID >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->surfaceID);
  }
  this->surfaceID = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->status);
  }
  this->status = kRestoreTile;
  std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::set(&this->removePolys);
};

// Line 21: range 000000000CF5BCAE-000000000CF5BE27
void __cdecl DynamicNavMeshTileInfo::DynamicNavMeshTileInfo(
        DynamicNavMeshTileInfo *const this,
        DynamicNavMeshTileInfo *a2)
{
  NavMeshTileRef tileRef; // rdx
  SurfaceIDType surfaceID; // cx
  CarveResultStatus status; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2, a2);
  tileRef = a2->tileRef;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->tileRef = tileRef;
  if ( *(_BYTE *)(((unsigned __int64)&a2->surfaceID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->surfaceID >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->surfaceID);
  }
  surfaceID = a2->surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&this->surfaceID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->surfaceID >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->surfaceID);
  }
  this->surfaceID = surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&a2->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->status);
  }
  status = a2->status;
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->status);
  }
  this->status = status;
  std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::set(
    &this->removePolys,
    &a2->removePolys);
};

// Line 21: range 000000000D052208-000000000D052381
void __cdecl DynamicNavMeshTileInfo::DynamicNavMeshTileInfo(
        DynamicNavMeshTileInfo *const this,
        const DynamicNavMeshTileInfo *a2)
{
  NavMeshTileRef tileRef; // rdx
  SurfaceIDType surfaceID; // cx
  CarveResultStatus status; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2, a2);
  tileRef = a2->tileRef;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->tileRef = tileRef;
  if ( *(_BYTE *)(((unsigned __int64)&a2->surfaceID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->surfaceID >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->surfaceID);
  }
  surfaceID = a2->surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&this->surfaceID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->surfaceID >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->surfaceID);
  }
  this->surfaceID = surfaceID;
  if ( *(_BYTE *)(((unsigned __int64)&a2->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->status);
  }
  status = a2->status;
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->status);
  }
  this->status = status;
  std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::set(
    &this->removePolys,
    &a2->removePolys);
};

// Line 21: range 000000000CE5DAC6-000000000CE5DAE4
void __cdecl DynamicNavMeshTileInfo::~DynamicNavMeshTileInfo(DynamicNavMeshTileInfo *const this)
{
  std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::~set(&this->removePolys);
};

// Line 29: range 000000000CD7BA60-000000000CD7BAD0
void __cdecl DynamicSurfaceInfo::DynamicSurfaceInfo(DynamicSurfaceInfo *const this)
{
  std::less<short unsigned int> comp; // [rsp+1Eh] [rbp-12h] BYREF
  stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> a; // [rsp+1Fh] [rbp-11h] BYREF

  MinMaxAABB::MinMaxAABB(&this->m_WorldBounds);
  stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>::stl_allocator(&a);
  vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::vector_map(
    &this->m_NavMeshTile,
    &comp,
    &a);
  stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>::~stl_allocator(&a);
};

// Line 29: range 000000000CDCBC5C-000000000CDCBC7A
void __cdecl DynamicSurfaceInfo::~DynamicSurfaceInfo(DynamicSurfaceInfo *const this)
{
  vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::~vector_map(&this->m_NavMeshTile);
};

// Line 43: range 000000000CD76020-000000000CD760D7
void __cdecl DynamicTileCallback::DynamicTileCallback(
        DynamicTileCallback *const this,
        DynamicNavMesh *dynamicNavMesh,
        DynamicSurfaceInfo *surface)
{
  int (**v3)(...); // rdx

  NavMeshTileMemoryCallback::NavMeshTileMemoryCallback(this);
  v3 = (int (**)(...))(&`vtable for'DynamicTileCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshTileMemoryCallback = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_surface >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_surface = surface;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_dynamicNavMesh = dynamicNavMesh;
};

// Line 49: range 000000000CD760D8-000000000CD76125
void __cdecl DynamicTileCallback::~DynamicTileCallback(DynamicTileCallback *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DynamicTileCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshTileMemoryCallback = v1;
  NavMeshTileMemoryCallback::~NavMeshTileMemoryCallback(this);
};

// Line 49: range 000000000CD76126-000000000CD76150
void __cdecl DynamicTileCallback::~DynamicTileCallback(DynamicTileCallback *const this)
{
  DynamicTileCallback::~DynamicTileCallback(this);
  operator delete(this, 0x18uLL);
};

// Line 50: range 000000000CD76152-000000000CD766F4
bool __cdecl DynamicTileCallback::IsValidPolyRef(const DynamicTileCallback *const this, const NavMeshTileRef *ref)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  NavMeshTile *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  const NavMesh *InternalNavMesh; // rcx
  NavMeshTileRef v14; // rsi
  TileLUT *p_m_TileLUT; // rbx
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __lhs; // [rsp+18h] [rbp-E8h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+20h] [rbp-E0h] BYREF
  FreeList<NavMeshTile,true> *m_tiles; // [rsp+28h] [rbp-D8h]
  const NavMeshTile *tile; // [rsp+30h] [rbp-D0h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type v21; // [rsp+38h] [rbp-C8h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-C0h] BYREF
  char v23[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 7 salt:60 48 4 5 it:60 64 4 7 type:60 80 4 5 ip:60 96 4 12 allocflag:60";
  *(_QWORD *)(v2 + 16) = DynamicTileCallback::IsValidPolyRef;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, ref);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, ref);
    m_tiles = &this->m_dynamicNavMesh->m_tiles;
    if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
      __asan_report_load8(ref, ref);
    if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(*ref) )
    {
      if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
        __asan_report_load8(ref, ref);
      NavMeshPolyRefHelper::DecodePolyId(
        (unsigned int *)(v2 + 32),
        (unsigned int *)(v2 + 96),
        (unsigned int *)(v2 + 48),
        (unsigned int *)(v2 + 64),
        (unsigned int *)(v2 + 80),
        *ref);
      if ( FreeList<NavMeshTile,true>::Capacity(m_tiles) > *(_DWORD *)(v2 + 48) )
      {
        v6 = FreeList<NavMeshTile,true>::operator[](m_tiles, *(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&v6->salt >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v6->salt >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v6->salt);
        }
        if ( v6->salt != *(_DWORD *)(v2 + 32) )
          goto LABEL_23;
        v7 = *(unsigned int *)(v2 + 48);
        v8 = (__int64)FreeList<NavMeshTile,true>::operator[](m_tiles, v7);
        if ( *(_BYTE *)(((unsigned __int64)(v8 + 16) >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(v8 + 16, v7);
        if ( *(_QWORD *)(v8 + 16) )
          v9 = 0;
        else
LABEL_23:
          v9 = 1;
        if ( v9 )
        {
          result = 0;
        }
        else
        {
          v10 = *(unsigned int *)(v2 + 48);
          v11 = (__int64)FreeList<NavMeshTile,true>::operator[](m_tiles, v10);
          if ( *(_BYTE *)(((unsigned __int64)(v11 + 16) >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8(v11 + 16, v10);
          v12 = *(_QWORD *)(v11 + 16);
          if ( *(_BYTE *)(((unsigned __int64)(v12 + 20) >> 3) + 0x7FFF8000) != 0
            && (char)(((v12 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v12 + 20) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12 + 20);
          }
          result = *(_DWORD *)(v12 + 20) > *(_DWORD *)(v2 + 80);
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, ref);
      InternalNavMesh = DynamicNavMesh::GetInternalNavMesh(this->m_dynamicNavMesh);
      if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
        __asan_report_load8(ref, ref);
      v14 = *ref;
      tile = NavMesh::GetTileByRef(InternalNavMesh, *ref);
      if ( !tile )
        goto LABEL_40;
      if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->header, v14);
      if ( tile->header )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_dynamicNavMesh, v14);
        __rhs._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_dynamicNavMesh->m_TileLUT)._M_current;
        p_m_TileLUT = &this->m_dynamicNavMesh->m_TileLUT;
        if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->header, v14);
        v21 = std::make_pair<int const&,int const&>(&tile->header->x, &tile->header->y);
        __lhs._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(
                             p_m_TileLUT,
                             &v21)._M_current;
        result = __gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                   &__lhs,
                   &__rhs);
      }
      else
      {
LABEL_40:
        result = 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "IsValidPolyRef",
      54);
    common::milog::MiLogStream::operator()(&v22, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0;
  }
  if ( v23 == (char *)v2 )
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
  return result;
};

// Line 81: range 000000000CD766F6-000000000CD76950
NavMeshTileRef __cdecl DynamicTileCallback::GetPolyRefBase(
        const DynamicTileCallback *const this,
        const NavMeshTile *tile)
{
  __int64 v4; // rbx
  const NavMeshTile *v5; // rax
  uint32_t it; // [rsp+1Ch] [rbp-44h]
  FreeList<NavMeshTile,true> *m_tiles; // [rsp+20h] [rbp-40h]
  const NavMeshTile *tiles_head; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  if ( !tile )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( !this->m_dynamicNavMesh )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  m_tiles = &this->m_dynamicNavMesh->m_tiles;
  if ( !FreeList<NavMeshTile,true>::Capacity(m_tiles) )
    return 0LL;
  tiles_head = FreeList<NavMeshTile,true>::begin(m_tiles);
  if ( tile < tiles_head || tile >= &tiles_head[FreeList<NavMeshTile,true>::Capacity(m_tiles)] )
    return 0LL;
  it = 678152731 * (((char *)tile - (char *)tiles_head) >> 3);
  if ( tile == FreeList<NavMeshTile,true>::operator[](m_tiles, it) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tile->salt);
    }
    return NavMeshPolyRefHelper::EncodePolyId(tile->salt, it, 0, 0, 1);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetPolyRefBase",
      94);
    v4 = FreeList<NavMeshTile,true>::Capacity(m_tiles);
    v5 = FreeList<NavMeshTile,true>::operator[](m_tiles, it);
    common::milog::MiLogStream::operator()(
      &v9,
      "tile=%p,  m_tiles->head=%p,   &(m_tiles[it])=%p,  it=%u,  capacity=%u",
      tile,
      tiles_head,
      v5,
      it,
      v4);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0LL;
  }
};

// Line 100: range 000000000CD76952-000000000CD76BAC
NavMeshTileRef __cdecl DynamicTileCallback::GetTileRef(const DynamicTileCallback *const this, const NavMeshTile *tile)
{
  __int64 v4; // rbx
  const NavMeshTile *v5; // rax
  uint32_t it; // [rsp+1Ch] [rbp-44h]
  FreeList<NavMeshTile,true> *m_tiles; // [rsp+20h] [rbp-40h]
  const NavMeshTile *tiles_head; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  if ( !tile )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( !this->m_dynamicNavMesh )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  m_tiles = &this->m_dynamicNavMesh->m_tiles;
  if ( !FreeList<NavMeshTile,true>::Capacity(m_tiles) )
    return 0LL;
  tiles_head = FreeList<NavMeshTile,true>::begin(m_tiles);
  if ( tile < tiles_head || tile >= &tiles_head[FreeList<NavMeshTile,true>::Capacity(m_tiles)] )
    return 0LL;
  it = 678152731 * (((char *)tile - (char *)tiles_head) >> 3);
  if ( tile == FreeList<NavMeshTile,true>::operator[](m_tiles, it) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tile->salt);
    }
    return NavMeshPolyRefHelper::EncodePolyId(tile->salt, it, 0, 0, 1);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetTileRef",
      113);
    v4 = FreeList<NavMeshTile,true>::Capacity(m_tiles);
    v5 = FreeList<NavMeshTile,true>::operator[](m_tiles, it);
    common::milog::MiLogStream::operator()(
      &v9,
      "tile=%p,  m_tiles->head=%p,   &(m_tiles[it])=%p,  it=%u,  capacity=%u",
      tile,
      tiles_head,
      v5,
      it,
      v4);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0LL;
  }
};

// Line 119: range 000000000CD76BAE-000000000CD76D22
NavMeshTile *__cdecl DynamicTileCallback::AllocTile(DynamicTileCallback *const this, unsigned int *ref)
{
  unsigned int v3; // ecx
  FreeList<NavMeshTile,true> *m_tiles; // [rsp+10h] [rbp-40h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, ref);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, ref);
    m_tiles = &this->m_dynamicNavMesh->m_tiles;
    v3 = FreeList<NavMeshTile,true>::Alloc(m_tiles);
    if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ref & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ref);
    }
    *ref = v3;
    if ( *ref == -1 )
      return 0LL;
    else
      return FreeList<NavMeshTile,true>::operator[](m_tiles, *ref);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "AllocTile",
      123);
    common::milog::MiLogStream::operator()(&v5, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0LL;
  }
};

// Line 140: range 000000000CD76D24-000000000CD76E9B
// local variable allocation has failed, the output may be wrong!
NavMeshTile *__cdecl DynamicTileCallback::GetTile(DynamicTileCallback *const this, unsigned int ref)
{
  FreeList<NavMeshTile,true> *m_tiles; // [rsp+10h] [rbp-40h]
  NavMeshTile *retTile; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
    m_tiles = &this->m_dynamicNavMesh->m_tiles;
    if ( ref != -1 && ref < FreeList<NavMeshTile,true>::Capacity(m_tiles) )
    {
      retTile = FreeList<NavMeshTile,true>::operator[](m_tiles, ref);
      if ( *(_BYTE *)(((unsigned __int64)&retTile->data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&retTile->data, ref);
      if ( retTile->data )
        return retTile;
      else
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetTile",
      144);
    common::milog::MiLogStream::operator()(&v6, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0LL;
  }
};

// Line 156: range 000000000CD76E9C-000000000CD77013
// local variable allocation has failed, the output may be wrong!
const NavMeshTile *__cdecl DynamicTileCallback::GetTile(const DynamicTileCallback *const this, unsigned int ref)
{
  FreeList<NavMeshTile,true> *m_tiles; // [rsp+10h] [rbp-40h]
  NavMeshTile *retTile; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
    m_tiles = &this->m_dynamicNavMesh->m_tiles;
    if ( ref != -1 && ref < FreeList<NavMeshTile,true>::Capacity(m_tiles) )
    {
      retTile = FreeList<NavMeshTile,true>::operator[](m_tiles, ref);
      if ( *(_BYTE *)(((unsigned __int64)&retTile->data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&retTile->data, ref);
      if ( retTile->data )
        return retTile;
      else
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetTile",
      160);
    common::milog::MiLogStream::operator()(&v6, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0LL;
  }
};

// Line 172: range 000000000CD77014-000000000CD77114
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicTileCallback::ReleaseTile(DynamicTileCallback *const this, unsigned int ref)
{
  common::milog::MiLogStream v2; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
    FreeList<NavMeshTile,true>::Release(&this->m_dynamicNavMesh->m_tiles, ref);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "ReleaseTile",
      176);
    common::milog::MiLogStream::operator()(&v2, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
};

// Line 182: range 000000000CD77116-000000000CD772D4
NavMeshLink *__cdecl DynamicTileCallback::AllocLink(DynamicTileCallback *const this, unsigned int *ref)
{
  unsigned int v3; // ecx
  FreeList<NavMeshLink,true> *m_links; // [rsp+10h] [rbp-40h]
  NavMeshLink *ret; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, ref);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, ref);
    m_links = &this->m_dynamicNavMesh->m_links;
    v3 = FreeList<NavMeshLink,true>::Alloc(m_links);
    if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ref & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ref);
    }
    *ref = v3;
    if ( *ref == -1 )
    {
      return 0LL;
    }
    else
    {
      ret = FreeList<NavMeshLink,true>::operator[](m_links, *ref);
      if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ref & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(ref);
      }
      *ref |= 0x80000000;
      return ret;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "AllocLink",
      186);
    common::milog::MiLogStream::operator()(&v6, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0LL;
  }
};

// Line 202: range 000000000CD772D6-000000000CD77400
// local variable allocation has failed, the output may be wrong!
NavMeshLink *__cdecl DynamicTileCallback::GetLink(DynamicTileCallback *const this, unsigned int ref)
{
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  if ( (ref & 0x80000000) == 0 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
  if ( this->m_dynamicNavMesh )
  {
    if ( ref == -1 )
    {
      return 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
      return FreeList<NavMeshLink,true>::operator[](&this->m_dynamicNavMesh->m_links, ref & 0x7FFFFFFF);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetLink",
      210);
    common::milog::MiLogStream::operator()(&v3, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0LL;
  }
};

// Line 222: range 000000000CD77402-000000000CD7752C
// local variable allocation has failed, the output may be wrong!
const NavMeshLink *__cdecl DynamicTileCallback::GetLink(const DynamicTileCallback *const this, unsigned int ref)
{
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  if ( (ref & 0x80000000) == 0 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
  if ( this->m_dynamicNavMesh )
  {
    if ( ref == -1 )
    {
      return 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
      return FreeList<NavMeshLink,true>::operator[](&this->m_dynamicNavMesh->m_links, ref & 0x7FFFFFFF);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetLink",
      230);
    common::milog::MiLogStream::operator()(&v3, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0LL;
  }
};

// Line 242: range 000000000CD7752E-000000000CD77647
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicTileCallback::ReleaseLink(DynamicTileCallback *const this, unsigned int ref)
{
  common::milog::MiLogStream v2; // [rsp+20h] [rbp-30h] BYREF

  if ( ref != -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
    if ( this->m_dynamicNavMesh )
    {
      if ( (ref & 0x80000000) != 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_dynamicNavMesh, *(_QWORD *)&ref);
        FreeList<NavMeshLink,true>::Release(&this->m_dynamicNavMesh->m_links, ref & 0x7FFFFFFF);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "ReleaseLink",
        250);
      common::milog::MiLogStream::operator()(&v2, "m_dynamicNavMesh is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v2);
    }
  }
};

// Line 261: range 000000000CD77648-000000000CD776DE
TileLUT *__cdecl DynamicTileCallback::GetTileLUT(DynamicTileCallback *const this)
{
  __int64 v1; // rsi
  DynamicNavMesh **p_m_dynamicNavMesh; // rax
  DynamicTileCallback *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_m_dynamicNavMesh = &this->m_dynamicNavMesh;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
  {
    this = (DynamicTileCallback *const)((char *)this + 16);
    __asan_report_load8(p_m_dynamicNavMesh, v1);
  }
  if ( !thisa->m_dynamicNavMesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_dynamicNavMesh != nullptr",
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      0x107u,
      "virtual TileLUT& DynamicTileCallback::GetTileLUT()");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_dynamicNavMesh, v1);
  return &thisa->m_dynamicNavMesh->m_TileLUT;
};

// Line 267: range 000000000CD776E0-000000000CD77770
MinMaxAABB *__cdecl DynamicTileCallback::GetWorldBounds(DynamicTileCallback *const this)
{
  __int64 v1; // rsi
  DynamicSurfaceInfo **p_m_surface; // rax
  DynamicTileCallback *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_m_surface = &this->m_surface;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_surface >> 3) + 0x7FFF8000) )
  {
    this = (DynamicTileCallback *const)((char *)this + 8);
    __asan_report_load8(p_m_surface, v1);
  }
  if ( !thisa->m_surface )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_surface != nullptr",
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      0x10Du,
      "virtual MinMaxAABB& DynamicTileCallback::GetWorldBounds()");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_surface >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_surface, v1);
  return &thisa->m_surface->m_WorldBounds;
};

// Line 274: range 000000000CD77772-000000000CD77865
// local variable allocation has failed, the output may be wrong!
const TileLUT *__cdecl DynamicTileCallback::GetTileLUT(const DynamicTileCallback *const this, SurfaceIDType surfaceId)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, surfaceId);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, surfaceId);
    return &this->m_dynamicNavMesh->m_TileLUT;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetTileLUT",
      278);
    common::milog::MiLogStream::operator()(&v3, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0LL;
  }
};

// Line 283: range 000000000CD77866-000000000CD77AA4
// local variable allocation has failed, the output may be wrong!
const MinMaxAABB *__cdecl DynamicTileCallback::GetWorldBounds(
        const DynamicTileCallback *const this,
        SurfaceIDType surfaceId)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const MinMaxAABB *result; // rax
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *p_m_DynamicNavMeshSurface; // rdx
  __int64 v7; // rax
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type v8; // [rsp+14h] [rbp-8Ch] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 it:290";
  *(_QWORD *)(v2 + 16) = DynamicTileCallback::GetWorldBounds;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, surfaceId);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, surfaceId);
    p_m_DynamicNavMeshSurface = &this->m_dynamicNavMesh->m_DynamicNavMeshSurface;
    v8 = surfaceId;
    *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v2 + 32) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(p_m_DynamicNavMeshSurface, &v8);
    __rhs._M_current = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_dynamicNavMesh->m_DynamicNavMeshSurface)._M_current;
    if ( __gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
           (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v2 + 32),
           &__rhs) )
    {
      result = 0LL;
    }
    else
    {
      v7 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(v7 + 8, &__rhs);
      result = *(const MinMaxAABB **)(v7 + 8);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetWorldBounds",
      287);
    common::milog::MiLogStream::operator()(&v10, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
  }
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

// Line 301: range 000000000CD77AA6-000000000CD7829C
void __fastcall DynamicTileCallback::AddTileLink(
        DynamicTileCallback *const this,
        const NavMeshTile *tile,
        NavMeshLink *link,
        unsigned int linkRef,
        int ip_0)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // rcx
  DynamicNavMesh *v9; // rax
  common::milog::MiLog *v10; // rsi
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // cl
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // cl
  __int64 v19; // rcx
  DynamicNavMesh *m_dynamicNavMesh; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // r14d
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type *v24; // rax
  _DWORD *v25; // rdx
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type *v26; // rax
  _DWORD *v27; // rdx
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type *v28; // rdi
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type *v29; // rax
  unsigned int *v30; // rdx
  unsigned int v31; // ecx
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type *v32; // rax
  _DWORD *v33; // rdx
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > __lhs; // [rsp+20h] [rbp-F0h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > __rhs; // [rsp+28h] [rbp-E8h] BYREF
  DynamicNavMeshTileExInfo *exInfo; // [rsp+30h] [rbp-E0h]
  vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *m_NavMeshTileExInfo; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v42; // [rsp+40h] [rbp-D0h] BYREF
  char v43[176]; // [rsp+60h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 6 ip:301 64 8 6 it:319 96 8 8 tile:301";
  *(_QWORD *)(v5 + 16) = DynamicTileCallback::AddTileLink;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  *(_QWORD *)(v5 + 96) = tile;
  *(_DWORD *)(v5 + 48) = ip_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_QWORD *)(v5 + 96) )
    {
      if ( link )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_dynamicNavMesh, tile);
        m_NavMeshTileExInfo = &this->m_dynamicNavMesh->m_NavMeshTileExInfo;
        *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v5 + 64) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find(m_NavMeshTileExInfo, (const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *)(v5 + 96));
        exInfo = 0LL;
        __rhs._M_current = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(m_NavMeshTileExInfo)._M_current;
        if ( __gnu_cxx::operator==<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>(
               (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v5 + 64),
               &__rhs) )
        {
          exInfo = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::operator[](
                     m_NavMeshTileExInfo,
                     (const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *)(v5 + 96));
        }
        else
        {
          exInfo = &__gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v5 + 64))->second;
        }
        __rhs._M_current = (std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> *)vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::end(&exInfo->m_polyLinks)._M_current;
        __lhs._M_current = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::find(
                             &exInfo->m_polyLinks,
                             (const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *)(v5 + 48))._M_current;
        if ( __gnu_cxx::operator==<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>(
               &__lhs,
               (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)&__rhs) )
        {
          v21 = *(_QWORD *)(v5 + 96);
          if ( *(_BYTE *)(((unsigned __int64)(v21 + 24) >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8(v21 + 24, &__rhs);
          v22 = *(_QWORD *)(v21 + 24) + 4LL * *(int *)(v5 + 48);
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0 && (char)((v22 & 7) + 3) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            __asan_report_load4(v22);
          v23 = *(_DWORD *)v22;
          v24 = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator[](
                  &exInfo->m_polyLinks,
                  (const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *)(v5 + 48));
          v25 = v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v24);
          }
          *v25 = v23;
        }
        v26 = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator[](
                &exInfo->m_polyLinks,
                (const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *)(v5 + 48));
        v27 = v26;
        v28 = (vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::mapped_type *)(((unsigned __int8)v26 & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          v28 = v26;
          __asan_report_load4(v26);
        }
        if ( linkRef == *v27 )
        {
          __asan_handle_no_return(v28);
          __assert_fail(
            "linkRef != exInfo->m_polyLinks[ip]",
            "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
            0x14Eu,
            "virtual void DynamicTileCallback::AddTileLink(const NavMeshTile*, NavMeshLink*, unsigned int, int)");
        }
        v29 = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator[](
                &exInfo->m_polyLinks,
                (const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *)(v5 + 48));
        v30 = v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        v31 = *v30;
        if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&link->next);
        }
        link->next = v31;
        v32 = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::operator[](
                &exInfo->m_polyLinks,
                (const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *)(v5 + 48));
        v33 = v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v32);
        }
        *v33 = linkRef;
      }
      else
      {
        v10 = &common::milog::MiLogDefault::default_log_obj_;
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
          "AddTileLink",
          315);
        v11 = *(_DWORD *)(v5 + 48);
        v12 = *(_QWORD *)(v5 + 96);
        if ( *(_BYTE *)(((unsigned __int64)(v12 + 16) >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8(v12 + 16, &common::milog::MiLogDefault::default_log_obj_);
        v13 = *(_QWORD *)(v12 + 16);
        v14 = *(_BYTE *)(((unsigned __int64)(v13 + 12) >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v14 != 0;
        if ( v14 != 0 && (char)(((v13 + 12) & 7) + 3) >= v14 )
          __asan_report_load4(v13 + 12);
        v15 = *(_DWORD *)(v13 + 12);
        v16 = *(_QWORD *)(v5 + 96);
        if ( *(_BYTE *)(((unsigned __int64)(v16 + 16) >> 3) + 0x7FFF8000) )
        {
          v15 = v16 + 16;
          v16 = __asan_report_load8(v16 + 16, v10);
        }
        v17 = *(_QWORD *)(v16 + 16);
        v18 = *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v18 != 0;
        if ( v18 != 0 && (char)(((v17 + 8) & 7) + 3) >= v18 )
        {
          v15 = v17 + 8;
          __asan_report_load4(v17 + 8);
        }
        v19 = *(unsigned int *)(v17 + 8);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        {
          v15 = (_DWORD)this + 16;
          __asan_report_load8(&this->m_dynamicNavMesh, v10);
        }
        m_dynamicNavMesh = this->m_dynamicNavMesh;
        if ( *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (_DWORD)m_dynamicNavMesh + 152;
          __asan_report_load4(&m_dynamicNavMesh->m_UniqueToken);
        }
        common::milog::MiLogStream::operator()(
          &v42,
          "link is nullptr. uid=%d, tile.x=%d, tile.y=%d ip=%d",
          m_dynamicNavMesh->m_UniqueToken,
          v19,
          v15,
          v11);
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "AddTileLink",
        310);
      v8 = *(unsigned int *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, &common::milog::MiLogDefault::default_log_obj_);
      v9 = this->m_dynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&v9->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v9->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(&v42, "tile is nullptr. uid=%d, ip=%d", v9->m_UniqueToken, v8);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "AddTileLink",
      305);
    common::milog::MiLogStream::operator()(&v42, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  if ( v43 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 340: range 000000000CD7829E-000000000CD787B0
__int64 __fastcall DynamicTileCallback::GetTileLink(
        const DynamicTileCallback *const this,
        const NavMeshTile *tile,
        int ip_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  __int64 v7; // rcx
  DynamicNavMesh *m_dynamicNavMesh; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > >::pointer v11; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > >::pointer v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > >::pointer v15; // rdx
  unsigned int *p_second; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > __rhs; // [rsp+20h] [rbp-F0h] BYREF
  vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *m_NavMeshTileExInfo; // [rsp+28h] [rbp-E8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-E0h] BYREF
  char v21[192]; // [rsp+50h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 6 ip:340 64 8 6 it:353 96 8 14 itpolyLink:358 128 8 8 tile:340";
  *(_QWORD *)(v3 + 16) = DynamicTileCallback::GetTileLink;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_QWORD *)(v3 + 128) = tile;
  *(_DWORD *)(v3 + 48) = ip_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_QWORD *)(v3 + 128) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, tile);
      m_NavMeshTileExInfo = &this->m_dynamicNavMesh->m_NavMeshTileExInfo;
      *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v3 + 64) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find(m_NavMeshTileExInfo, (const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *)(v3 + 128));
      __rhs._M_current = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(m_NavMeshTileExInfo)._M_current;
      if ( __gnu_cxx::operator==<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>(
             (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v3 + 64),
             &__rhs) )
      {
        v9 = *(_QWORD *)(v3 + 128);
        if ( *(_BYTE *)(((unsigned __int64)(v9 + 24) >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(v9 + 24, &__rhs);
        v10 = *(_QWORD *)(v9 + 24) + 4LL * *(int *)(v3 + 48);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v10);
        result = *(unsigned int *)v10;
      }
      else
      {
        v11 = __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 64));
        *(vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::iterator *)(v3 + 96) = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::find(&v11->second.m_polyLinks, (const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *)(v3 + 48));
        v12 = __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 64));
        __rhs._M_current = (std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> *)vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::end(&v12->second.m_polyLinks)._M_current;
        if ( __gnu_cxx::operator==<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>(
               (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)(v3 + 96),
               (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)&__rhs) )
        {
          v13 = *(_QWORD *)(v3 + 128);
          if ( *(_BYTE *)(((unsigned __int64)(v13 + 24) >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8(v13 + 24, &__rhs);
          v14 = *(_QWORD *)(v13 + 24) + 4LL * *(int *)(v3 + 48);
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && (char)((v14 & 7) + 3) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            __asan_report_load4(v14);
          result = *(unsigned int *)v14;
        }
        else
        {
          v15 = __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *const)(v3 + 96));
          p_second = &v15->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          result = v15->second;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "GetTileLink",
        349);
      v7 = *(unsigned int *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, &common::milog::MiLogDefault::default_log_obj_);
      m_dynamicNavMesh = this->m_dynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&m_dynamicNavMesh->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(
        &v20,
        "tile is nullptr. uid=%d, ip=%d",
        m_dynamicNavMesh->m_UniqueToken,
        v7);
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "GetTileLink",
      344);
    common::milog::MiLogStream::operator()(&v20, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  if ( v21 == (char *)v3 )
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

// Line 366: range 000000000CD787B2-000000000CD78D3B
void __fastcall DynamicTileCallback::RemoveTileLink(DynamicTileCallback *const this, const NavMeshTile *tile, int ip_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rcx
  DynamicNavMesh *m_dynamicNavMesh; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > >::pointer v8; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > >::pointer v9; // rax
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(DynamicTileCallback *const, _QWORD); // r14
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > >::pointer v12; // rdx
  unsigned int *p_second; // rax
  unsigned int next; // r14d
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > >::pointer v15; // rdx
  unsigned int *v16; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > >::pointer v17; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > >::pointer v18; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > __rhs; // [rsp+28h] [rbp-108h] BYREF
  vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *m_NavMeshTileExInfo; // [rsp+30h] [rbp-100h]
  NavMeshLink *link; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 6 ip:366 64 8 6 it:379 96 8 14 itpolyLink:384 128 8 8 tile:366";
  *(_QWORD *)(v3 + 16) = DynamicTileCallback::RemoveTileLink;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_QWORD *)(v3 + 128) = tile;
  *(_DWORD *)(v3 + 48) = ip_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_QWORD *)(v3 + 128) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, tile);
      m_NavMeshTileExInfo = &this->m_dynamicNavMesh->m_NavMeshTileExInfo;
      *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v3 + 64) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find(m_NavMeshTileExInfo, (const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *)(v3 + 128));
      __rhs._M_current = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(m_NavMeshTileExInfo)._M_current;
      if ( !__gnu_cxx::operator==<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v3 + 64),
              &__rhs) )
      {
        v8 = __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 64));
        *(vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::iterator *)(v3 + 96) = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::find(&v8->second.m_polyLinks, (const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *)(v3 + 48));
        v9 = __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 64));
        __rhs._M_current = (std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo> *)vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::end(&v9->second.m_polyLinks)._M_current;
        if ( !__gnu_cxx::operator!=<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>(
                (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *)&__rhs) )
          goto LABEL_30;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this, &__rhs);
        v10 = (unsigned __int64)(this->_vptr_NavMeshTileMemoryCallback + 10);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(this->_vptr_NavMeshTileMemoryCallback + 10, &__rhs);
        v11 = *(__int64 (__fastcall **)(DynamicTileCallback *const, _QWORD))v10;
        v12 = __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *const)(v3 + 96));
        p_second = &v12->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        link = (NavMeshLink *)v11(this, v12->second);
        if ( link )
        {
          if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&link->next);
          }
          next = link->next;
          v15 = __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > > *const)(v3 + 96));
          v16 = &v15->second;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v16);
          }
          v15->second = next;
        }
        else
        {
LABEL_30:
          v17 = __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 64));
          vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::erase(
            &v17->second.m_polyLinks,
            (const vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::key_type *)(v3 + 48));
          v18 = __gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 64));
          if ( DynamicNavMeshTileExInfo::IsClear(&v18->second) )
            vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::erase(
              m_NavMeshTileExInfo,
              *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v3 + 64));
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "RemoveTileLink",
        375);
      v6 = *(unsigned int *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, &common::milog::MiLogDefault::default_log_obj_);
      m_dynamicNavMesh = this->m_dynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&m_dynamicNavMesh->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(
        &v23,
        "tile is nullptr. uid=%d, ip=%d",
        m_dynamicNavMesh->m_UniqueToken,
        v6);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "RemoveTileLink",
      370);
    common::milog::MiLogStream::operator()(&v23, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( v24 == (char *)v3 )
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
};

// Line 401: range 000000000CD78D3C-000000000CD7907E
void __fastcall DynamicTileCallback::RemoveTileLinks(DynamicTileCallback *const this, const NavMeshTile *tile)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  DynamicNavMesh *m_dynamicNavMesh; // rax
  __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > __rhs; // [rsp+10h] [rbp-B0h] BYREF
  vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *m_NavMeshTileExInfo; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-A0h] BYREF
  char v9[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 6 it:414 64 8 8 tile:401";
  *(_QWORD *)(v2 + 16) = DynamicTileCallback::RemoveTileLinks;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(_QWORD *)(v2 + 64) = tile;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_QWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, tile);
      m_NavMeshTileExInfo = &this->m_dynamicNavMesh->m_NavMeshTileExInfo;
      *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v2 + 32) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find(m_NavMeshTileExInfo, (const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *)(v2 + 64));
      __rhs._M_current = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(m_NavMeshTileExInfo)._M_current;
      if ( !__gnu_cxx::operator==<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v2 + 32),
              &__rhs) )
        vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::erase(
          m_NavMeshTileExInfo,
          *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "RemoveTileLinks",
        410);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, &common::milog::MiLogDefault::default_log_obj_);
      m_dynamicNavMesh = this->m_dynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&m_dynamicNavMesh->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(&v8, "tile is nullptr. uid=%d", m_dynamicNavMesh->m_UniqueToken);
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "RemoveTileLinks",
      405);
    common::milog::MiLogStream::operator()(&v8, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  if ( v9 == (char *)v2 )
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

// Line 422: range 000000000CD79080-000000000CD794E9
void __fastcall DynamicTileCallback::ForeachTileLinks(
        DynamicTileCallback *const this,
        const NavMeshTile *tile,
        const NavMeshTileMemoryCallback::ForeachTileLinkCallbackHandle *callback)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  DynamicNavMesh *m_dynamicNavMesh; // rax
  __gnu_cxx::__normal_iterator<std::pair<int,unsigned int>*,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16> > >::reference v7; // rax
  _QWORD *v8; // rdx
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> >::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > *m_NavMeshTileExInfo; // [rsp+30h] [rbp-D0h]
  vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16> > *__for_range; // [rsp+38h] [rbp-C8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-C0h] BYREF
  char v15[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 6 it:435 64 8 8 tile:422 96 8 14 itPolyLink:440";
  *(_QWORD *)(v3 + 16) = DynamicTileCallback::ForeachTileLinks;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_QWORD *)(v3 + 64) = tile;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_QWORD *)(v3 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, tile);
      m_NavMeshTileExInfo = &this->m_dynamicNavMesh->m_NavMeshTileExInfo;
      *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v3 + 32) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::find(m_NavMeshTileExInfo, (const vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::key_type *)(v3 + 64));
      *(vector_map<const NavMeshTile*,DynamicNavMeshTileExInfo,std::less<const NavMeshTile*>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> >::iterator *)(v3 + 96) = vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::end(m_NavMeshTileExInfo);
      if ( !__gnu_cxx::operator==<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *)(v3 + 96)) )
      {
        __for_range = &__gnu_cxx::__normal_iterator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo> *,std::vector<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>*,std::vector<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> > > *const)(v3 + 32))->second.m_polyLinks;
        __for_begin._M_current = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::begin(__for_range)._M_current;
        __for_end._M_current = vector_map<int,unsigned int,std::less<int>,stl_allocator<std::pair<int,unsigned int>,16>>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>(
                  &__for_begin,
                  &__for_end) )
        {
          v7 = __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator*(&__for_begin);
          v8 = v7;
          if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v7, 8LL);
          }
          *(_QWORD *)(v3 + 96) = *v8;
          if ( !std::function<bool ()(int,unsigned int,NavMeshTileMemoryCallback *)>::operator()(
                  callback,
                  *(_DWORD *)(v3 + 96),
                  *(_DWORD *)(v3 + 100),
                  this) )
            break;
          __gnu_cxx::__normal_iterator<std::pair<int,unsigned int> *,std::vector<std::pair<int,unsigned int>,stl_allocator<std::pair<int,unsigned int>,16>>>::operator++(&__for_begin);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "ForeachTileLinks",
        431);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, &common::milog::MiLogDefault::default_log_obj_);
      m_dynamicNavMesh = this->m_dynamicNavMesh;
      if ( *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&m_dynamicNavMesh->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&m_dynamicNavMesh->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(&v14, "tile is nullptr. uid=%d", m_dynamicNavMesh->m_UniqueToken);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "ForeachTileLinks",
      426);
    common::milog::MiLogStream::operator()(&v14, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  if ( v15 == (char *)v3 )
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

// Line 448: range 000000000CD79526-000000000CD79B63
DynamicOffMeshConnection *__fastcall DynamicTileCallback::CreateOrGetOffMeshConnection(
        DynamicTileCallback *const this,
        __int64 index,
        const OffMeshConnection *con)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  DynamicOffMeshConnection *result; // rax
  __int64 v7; // rax
  DynamicOffMeshConnection *v8; // r14
  DynamicOffMeshConnection *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  NavMeshTileRef tileRef; // rdi
  DynamicOffMeshConnection *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  NavMeshTileRef v16; // rdi
  unsigned int firstLink; // ecx
  DynamicOffMeshConnection *v18; // r14
  unsigned __int64 v19; // rax
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __rhs; // [rsp+20h] [rbp-D0h] BYREF
  DynamicOffMeshConnection *dcon; // [rsp+28h] [rbp-C8h]
  vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *dcons; // [rsp+30h] [rbp-C0h]
  DynamicOffMeshConnection *dcon_0; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 index:448 64 8 6 it:457";
  *(_QWORD *)(v3 + 16) = DynamicTileCallback::CreateOrGetOffMeshConnection;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = index;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, index);
  if ( !this->m_dynamicNavMesh )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "CreateOrGetOffMeshConnection",
      452);
    common::milog::MiLogStream::operator()(&v25, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0LL;
    goto LABEL_32;
  }
  dcon = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, index);
  dcons = &this->m_dynamicNavMesh->m_DynamicOffMeshConnection;
  *(vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v3 + 64) = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find(dcons, (const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *)(v3 + 48));
  __rhs._M_current = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(dcons)._M_current;
  if ( __gnu_cxx::operator!=<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v3 + 64),
         &__rhs) )
  {
    v7 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7 + 8, &__rhs);
    dcon = *(DynamicOffMeshConnection **)(v7 + 8);
  }
  else
  {
    v8 = (DynamicOffMeshConnection *)operator new(
                                       0x68uLL,
                                       0x10uLL,
                                       "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                       464);
    DynamicOffMeshConnection::DynamicOffMeshConnection(v8);
    dcon_0 = v8;
    if ( !v8 )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "CreateOrGetOffMeshConnection",
        467);
      common::milog::MiLogStream::operator()(&v25, "DynamicOffMeshConnection alloc failed.");
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0LL;
      goto LABEL_32;
    }
    if ( *(char *)(((unsigned __int64)dcon_0 >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&dcon_0->endPoints[0].tileRef + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)dcon_0 + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&dcon_0->endPoints[0].tileRef + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(dcon_0, 48LL);
    }
    if ( *(char *)(((unsigned __int64)con->endPoints >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].tileRef + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)con + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].tileRef + 7) >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load_n(con->endPoints, 48LL);
    }
    v9 = dcon_0;
    v10 = *(_QWORD *)&con->endPoints[0].pos.z;
    *(_QWORD *)&dcon_0->endPoints[0].pos.x = *(_QWORD *)&con->endPoints[0].pos.x;
    *(_QWORD *)&v9->endPoints[0].pos.z = v10;
    v11 = *(_QWORD *)&con->endPoints[0].mapped[1].x;
    *(_QWORD *)&v9->endPoints[0].mapped[0].y = *(_QWORD *)&con->endPoints[0].mapped[0].y;
    *(_QWORD *)&v9->endPoints[0].mapped[1].x = v11;
    tileRef = con->endPoints[0].tileRef;
    *(_QWORD *)&v9->endPoints[0].mapped[1].z = *(_QWORD *)&con->endPoints[0].mapped[1].z;
    v9->endPoints[0].tileRef = tileRef;
    if ( *(char *)(((unsigned __int64)&dcon_0->endPoints[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&dcon_0->endPoints[1].tileRef + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)dcon_0 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&dcon_0->endPoints[1].tileRef + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(&dcon_0->endPoints[1], 48LL);
    }
    if ( *(char *)(((unsigned __int64)&con->endPoints[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].tileRef + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)con + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].tileRef + 7) >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load_n(&con->endPoints[1], 48LL);
    }
    v13 = dcon_0;
    v14 = *(_QWORD *)&con->endPoints[1].pos.z;
    *(_QWORD *)&dcon_0->endPoints[1].pos.x = *(_QWORD *)&con->endPoints[1].pos.x;
    *(_QWORD *)&v13->endPoints[1].pos.z = v14;
    v15 = *(_QWORD *)&con->endPoints[1].mapped[1].x;
    *(_QWORD *)&v13->endPoints[1].mapped[0].y = *(_QWORD *)&con->endPoints[1].mapped[0].y;
    *(_QWORD *)&v13->endPoints[1].mapped[1].x = v15;
    v16 = con->endPoints[1].tileRef;
    *(_QWORD *)&v13->endPoints[1].mapped[1].z = *(_QWORD *)&con->endPoints[1].mapped[1].z;
    v13->endPoints[1].tileRef = v16;
    if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&con->firstLink);
    }
    firstLink = con->firstLink;
    if ( *(_BYTE *)(((unsigned __int64)&dcon_0->firstLink >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dcon_0->firstLink >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&dcon_0->firstLink);
    }
    dcon_0->firstLink = firstLink;
    v18 = dcon_0;
    v19 = (unsigned __int64)vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::operator[](
                              dcons,
                              (const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *)(v3 + 48));
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_store8();
    *(_QWORD *)v19 = v18;
  }
  result = dcon;
LABEL_32:
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 479: range 000000000CD79B64-000000000CD79E37
__int64 __fastcall DynamicTileCallback::TryGetOffMeshConnection(
        DynamicTileCallback *const this,
        __int64 index,
        unsigned __int64 output)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  __int64 v7; // rax
  DynamicOffMeshConnection *v8; // rdx
  DynamicTileCallback *thisa; // [rsp+18h] [rbp-B8h]
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __rhs; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (DynamicTileCallback *const)96;
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 index:479 64 8 6 it:491";
  *(_QWORD *)(v3 + 16) = DynamicTileCallback::TryGetOffMeshConnection;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = index;
  if ( !output )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      0x1E3u,
      "virtual bool DynamicTileCallback::TryGetOffMeshConnection(unsigned int, DynamicOffMeshConnection**)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_dynamicNavMesh, index);
  if ( thisa->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_dynamicNavMesh, index);
    *(vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v3 + 64) = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find(&thisa->m_dynamicNavMesh->m_DynamicOffMeshConnection, (const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *)(v3 + 48));
    __rhs._M_current = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&thisa->m_dynamicNavMesh->m_DynamicOffMeshConnection)._M_current;
    if ( __gnu_cxx::operator==<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>(
           (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v3 + 64),
           &__rhs) )
    {
      result = 0LL;
    }
    else
    {
      v7 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(v7 + 8, &__rhs);
      v8 = *(DynamicOffMeshConnection **)(v7 + 8);
      if ( *(_BYTE *)((output >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)output = v8;
      result = 1LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "TryGetOffMeshConnection",
      488);
    common::milog::MiLogStream::operator()(&v12, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 499: range 000000000CD79E38-000000000CD7A122
void __fastcall DynamicTileCallback::ReleaseOffMeshConnection(DynamicTileCallback *const this, __int64 index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __rhs; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-A0h] BYREF
  char v9[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 index:499 64 8 6 it:506";
  *(_QWORD *)(v2 + 16) = DynamicTileCallback::ReleaseOffMeshConnection;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = index;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, index);
  if ( this->m_dynamicNavMesh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, index);
    *(vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v2 + 64) = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find(&this->m_dynamicNavMesh->m_DynamicOffMeshConnection, (const vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type *)(v2 + 48));
    __rhs._M_current = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&this->m_dynamicNavMesh->m_DynamicOffMeshConnection)._M_current;
    if ( !__gnu_cxx::operator==<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v2 + 64),
            &__rhs) )
    {
      v5 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v5 + 8) >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5 + 8, &__rhs);
      delete_internal<DynamicOffMeshConnection>(*(DynamicOffMeshConnection **)(v5 + 8));
      v6 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_store8();
      *(_QWORD *)(v6 + 8) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, &__rhs);
      vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::erase(
        &this->m_dynamicNavMesh->m_DynamicOffMeshConnection,
        *(vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::iterator *)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "ReleaseOffMeshConnection",
      503);
    common::milog::MiLogStream::operator()(&v8, "m_dynamicNavMesh is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  if ( v9 == (char *)v2 )
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

// Line 515: range 000000000CD7A124-000000000CD7A218
DynamicUniqueTokenType __cdecl DynamicTileCallback::GetUniqueTokon(DynamicTileCallback *const this)
{
  __int64 v1; // rsi
  DynamicNavMesh *m_dynamicNavMesh; // rax
  DynamicNavMesh *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, v1);
  if ( !this->m_dynamicNavMesh )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, v1);
  m_dynamicNavMesh = this->m_dynamicNavMesh;
  if ( *(char *)(((unsigned __int64)&m_dynamicNavMesh->print_obstacles >> 3) + 0x7FFF8000) < 0 )
    m_dynamicNavMesh = (DynamicNavMesh *)__asan_report_store1(&m_dynamicNavMesh->print_obstacles);
  m_dynamicNavMesh->print_obstacles = 1;
  v4 = this->m_dynamicNavMesh;
  if ( *(_BYTE *)(((unsigned __int64)&v4->m_UniqueToken >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v4->m_UniqueToken);
  }
  return v4->m_UniqueToken;
};

// Line 534: range 000000000CD7A2FA-000000000CD7A3AF
void __cdecl HavokDynamicTileCallback::HavokDynamicTileCallback(
        HavokDynamicTileCallback *const this,
        DynamicNavMesh *dynamicNavMesh,
        DynamicSurfaceInfo *surface,
        DynamicNavMeshTileInfo *tileInfo)
{
  int (**v4)(...); // rdx

  DynamicTileCallback::DynamicTileCallback(this, dynamicNavMesh, surface);
  v4 = (int (**)(...))(&`vtable for'HavokDynamicTileCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshTileMemoryCallback = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_tileInfo >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_tileInfo = tileInfo;
  std::list<DynamicNavMeshTileInfo *>::list(&this->m_tileInfoStack);
  std::list<DynamicSurfaceInfo *>::list(&this->m_surfaceInfoStack);
};

// Line 540: range 000000000CD7A41E-000000000CD7A448
void __cdecl HavokDynamicTileCallback::~HavokDynamicTileCallback(HavokDynamicTileCallback *const this)
{
  HavokDynamicTileCallback::~HavokDynamicTileCallback(this);
  operator delete(this, 0x50uLL);
};

// Line 540: range 000000000CD7A3B0-000000000CD7A41D
void __cdecl HavokDynamicTileCallback::~HavokDynamicTileCallback(HavokDynamicTileCallback *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HavokDynamicTileCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshTileMemoryCallback = v1;
  std::list<DynamicSurfaceInfo *>::~list(&this->m_surfaceInfoStack);
  std::list<DynamicNavMeshTileInfo *>::~list(&this->m_tileInfoStack);
  DynamicTileCallback::~DynamicTileCallback(this);
};

// Line 541: range 000000000CD7A44A-000000000CD7AD70
bool __cdecl HavokDynamicTileCallback::IsValidPolyRef(
        const HavokDynamicTileCallback *const this,
        const NavMeshPolyRef *ref)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  bool result; // al
  NavMeshTile *v7; // rax
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  DynamicNavMeshTileInfo *m_tileInfo; // rdx
  char v16; // cl
  DynamicNavMeshTileInfo *v17; // rdx
  const NavMesh *InternalNavMesh; // rcx
  NavMeshPolyRef v19; // rsi
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *p_m_DynamicNavMeshSurface; // rcx
  __int64 v21; // rax
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *p_m_NavMeshTile; // rcx
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >::pointer v23; // rax
  CarveResultStatus *p_status; // rax
  NavMeshPolyRef *refa; // [rsp+0h] [rbp-120h]
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type dataIndex; // [rsp+16h] [rbp-10Ah] BYREF
  std::_Rb_tree_const_iterator<long long unsigned int>::_Self __x; // [rsp+18h] [rbp-108h] BYREF
  std::_Rb_tree_const_iterator<long long unsigned int>::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  const NavMeshTile *tile; // [rsp+28h] [rbp-F8h]
  DynamicSurfaceInfo *surface; // [rsp+30h] [rbp-F0h]
  DynamicNavMeshTileInfo *tileInfo; // [rsp+38h] [rbp-E8h]
  char v32[224]; // [rsp+40h] [rbp-E0h] BYREF

  refa = (NavMeshPolyRef *)ref;
  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 8 salt:544 64 4 6 it:544 80 4 8 type:544 96 4 6 ip:544 112 4 13 allocflag:544 128 8 13 su"
                        "rfaceIt:567 160 8 10 tileIt:573";
  *(_QWORD *)(v2 + 16) = HavokDynamicTileCallback::IsValidPolyRef;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
    __asan_report_load8(ref, ref);
  if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(*ref) )
  {
    if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
      __asan_report_load8(ref, ref);
    v5 = (char *)(v2 + 112);
    NavMeshPolyRefHelper::DecodePolyId(
      (unsigned int *)(v2 + 48),
      (unsigned int *)(v2 + 112),
      (unsigned int *)(v2 + 64),
      (unsigned int *)(v2 + 80),
      (unsigned int *)(v2 + 96),
      *refa);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, v5);
    if ( FreeList<NavMeshTile,true>::Capacity(&this->m_dynamicNavMesh->m_tiles) > *(_DWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, v5);
      v9 = *(unsigned int *)(v2 + 64);
      v7 = FreeList<NavMeshTile,true>::operator[](&this->m_dynamicNavMesh->m_tiles, v9);
      v8 = *(_BYTE *)(((unsigned __int64)&v7->salt >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v8 != 0;
      if ( v8 != 0 && v8 <= 3 )
        __asan_report_load4(&v7->salt);
      if ( v7->salt != *(_DWORD *)(v2 + 48) )
        goto LABEL_23;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, v9);
      v9 = *(unsigned int *)(v2 + 64);
      v10 = (__int64)FreeList<NavMeshTile,true>::operator[](&this->m_dynamicNavMesh->m_tiles, v9);
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 16) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10 + 16, v9);
      if ( *(_QWORD *)(v10 + 16) )
        v11 = 0;
      else
LABEL_23:
        v11 = 1;
      if ( v11 )
      {
        result = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_dynamicNavMesh, v9);
        v12 = *(unsigned int *)(v2 + 64);
        v13 = (__int64)FreeList<NavMeshTile,true>::operator[](&this->m_dynamicNavMesh->m_tiles, v12);
        if ( *(_BYTE *)(((unsigned __int64)(v13 + 16) >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(v13 + 16, v12);
        v14 = *(_QWORD *)(v13 + 16);
        if ( *(_BYTE *)(((unsigned __int64)(v14 + 20) >> 3) + 0x7FFF8000) != 0
          && (char)(((v14 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v14 + 20) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14 + 20);
        }
        result = *(_DWORD *)(v14 + 20) > *(_DWORD *)(v2 + 96);
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_tileInfo >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_tileInfo, ref);
    if ( this->m_tileInfo )
    {
      m_tileInfo = this->m_tileInfo;
      v16 = *(_BYTE *)(((unsigned __int64)&m_tileInfo->status >> 3) + 0x7FFF8000);
      LOBYTE(ref) = v16 != 0;
      if ( v16 != 0 && (char)((((_BYTE)m_tileInfo + 12) & 7) + 3) >= v16 )
        __asan_report_load4(&m_tileInfo->status);
      if ( m_tileInfo->status == kRemoveTile )
      {
        result = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_tileInfo >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_tileInfo, ref);
        v17 = this->m_tileInfo;
        if ( *(_BYTE *)(((unsigned __int64)&v17->status >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->status >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v17->status);
        }
        result = 1;
        if ( v17->status != kRestoreTile )
        {
          __y._M_node = std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::end(&this->m_tileInfo->removePolys)._M_node;
          __x._M_node = std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::find(
                          &this->m_tileInfo->removePolys,
                          refa)._M_node;
          if ( !std::operator==(&__x, &__y) )
            result = 0;
        }
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_dynamicNavMesh, ref);
      InternalNavMesh = DynamicNavMesh::GetInternalNavMesh(this->m_dynamicNavMesh);
      if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
        __asan_report_load8(ref, ref);
      v19 = *ref;
      tile = NavMesh::GetTileByRef(InternalNavMesh, *refa);
      if ( !tile )
        goto LABEL_57;
      if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->header, v19);
      if ( tile->header )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_dynamicNavMesh, v19);
        p_m_DynamicNavMeshSurface = &this->m_dynamicNavMesh->m_DynamicNavMeshSurface;
        if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
        {
          __asan_report_load2(tile);
        }
        *(_DWORD *)(v2 + 112) = tile->surfaceID;
        *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v2 + 128) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(p_m_DynamicNavMeshSurface, (const vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type *)(v2 + 112));
        __y._M_node = (std::_Rb_tree_const_iterator<long long unsigned int>::_Base_ptr)vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_dynamicNavMesh->m_DynamicNavMeshSurface)._M_current;
        if ( !__gnu_cxx::operator!=<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
                (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)&__y) )
          goto LABEL_79;
        v21 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)(v21 + 8) >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v21 + 8, &__y);
        surface = *(DynamicSurfaceInfo **)(v21 + 8);
        if ( !surface )
          goto LABEL_79;
        p_m_NavMeshTile = &surface->m_NavMeshTile;
        if ( *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)tile + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&tile->dataIndex);
        }
        dataIndex = tile->dataIndex;
        *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v2 + 160) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find(p_m_NavMeshTile, &dataIndex);
        __y._M_node = (std::_Rb_tree_const_iterator<long long unsigned int>::_Base_ptr)vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&surface->m_NavMeshTile)._M_current;
        if ( __gnu_cxx::operator!=<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
               (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v2 + 160),
               (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)&__y) )
        {
          v23 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v2 + 160));
          tileInfo = &v23->second;
          p_status = &v23->second.status;
          if ( *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_status & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_status);
          }
          if ( tileInfo->status == kRemoveTile )
          {
            result = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&tileInfo->status >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tileInfo + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tileInfo->status >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&tileInfo->status);
            }
            result = 1;
            if ( tileInfo->status != kRestoreTile )
            {
              __y._M_node = std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::end(&tileInfo->removePolys)._M_node;
              __x._M_node = std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::find(
                              &tileInfo->removePolys,
                              refa)._M_node;
              if ( !std::operator==(&__x, &__y) )
                result = 0;
            }
          }
        }
        else
        {
LABEL_79:
          result = 1;
        }
      }
      else
      {
LABEL_57:
        result = 0;
      }
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 588: range 000000000CD7AD72-000000000CD7AD80
bool __cdecl HavokDynamicTileCallback::NeedCheckSourceTile(const HavokDynamicTileCallback *const this)
{
  return 1;
};

// Line 591: range 000000000CD7AD82-000000000CD7B26E
void __cdecl HavokDynamicTileCallback::QueryTileExtInfo(HavokDynamicTileCallback *const this, const NavMeshTile *tile)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *p_m_DynamicNavMeshSurface; // rcx
  __int64 v6; // rax
  DynamicSurfaceInfo *v7; // rdx
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *p_m_NavMeshTile; // rcx
  DynamicNavMeshTileInfo *p_second; // rcx
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type dataIndex; // [rsp+12h] [rbp-8Eh] BYREF
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type surfaceID; // [rsp+14h] [rbp-8Ch] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+18h] [rbp-88h] BYREF
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 13 surfaceIt:605 64 8 10 tileIt:614";
  *(_QWORD *)(v2 + 16) = HavokDynamicTileCallback::QueryTileExtInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( !tile )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( this->m_dynamicNavMesh )
  {
    std::list<DynamicSurfaceInfo *>::emplace_back<DynamicSurfaceInfo *&>(
      &this->m_surfaceInfoStack,
      &this->m_surface,
      &this->m_surface);
    std::list<DynamicNavMeshTileInfo *>::emplace_back<DynamicNavMeshTileInfo *&>(
      &this->m_tileInfoStack,
      &this->m_tileInfo,
      &this->m_tileInfo);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_surface >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_surface = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, &this->m_tileInfo);
    p_m_DynamicNavMeshSurface = &this->m_dynamicNavMesh->m_DynamicNavMeshSurface;
    if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_load2(tile);
    }
    surfaceID = tile->surfaceID;
    *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v2 + 32) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(p_m_DynamicNavMeshSurface, &surfaceID);
    __rhs._M_current = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_dynamicNavMesh->m_DynamicNavMeshSurface)._M_current;
    if ( __gnu_cxx::operator!=<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
           (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v2 + 32),
           &__rhs) )
    {
      v6 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6 + 8, &__rhs);
      v7 = *(DynamicSurfaceInfo **)(v6 + 8);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_surface >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->m_surface = v7;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_tileInfo >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_tileInfo = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_surface >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_surface, &__rhs);
    if ( this->m_surface )
    {
      p_m_NavMeshTile = &this->m_surface->m_NavMeshTile;
      if ( *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tile + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&tile->dataIndex);
      }
      dataIndex = tile->dataIndex;
      *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v2 + 64) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find(p_m_NavMeshTile, &dataIndex);
      __rhs._M_current = (std::pair<int,DynamicSurfaceInfo*> *)vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&this->m_surface->m_NavMeshTile)._M_current;
      if ( __gnu_cxx::operator!=<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
             (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v2 + 64),
             (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)&__rhs) )
      {
        p_second = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v2 + 64))->second;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_tileInfo >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->m_tileInfo = p_second;
      }
    }
  }
  else
  {
LABEL_8:
    std::list<DynamicSurfaceInfo *>::emplace_back<DynamicSurfaceInfo *&>(
      &this->m_surfaceInfoStack,
      &this->m_surface,
      &this->m_surface);
    std::list<DynamicNavMeshTileInfo *>::emplace_back<DynamicNavMeshTileInfo *&>(
      &this->m_tileInfoStack,
      &this->m_tileInfo,
      &this->m_tileInfo);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_tileInfo >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_tileInfo = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_surface >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_surface = 0LL;
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

// Line 621: range 000000000CD7B270-000000000CD7B35E
void __cdecl HavokDynamicTileCallback::ResetTileExtInfo(HavokDynamicTileCallback *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rax
  DynamicSurfaceInfo *v3; // rdx
  unsigned __int64 v4; // rax
  DynamicNavMeshTileInfo *v5; // rdx

  v2 = (unsigned __int64)std::list<DynamicSurfaceInfo *>::back(&this->m_surfaceInfoStack);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2, v1);
  v3 = *(DynamicSurfaceInfo **)v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_surface >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_surface = v3;
  std::list<DynamicSurfaceInfo *>::pop_back(&this->m_surfaceInfoStack);
  v4 = (unsigned __int64)std::list<DynamicNavMeshTileInfo *>::back(&this->m_tileInfoStack);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4, v1);
  v5 = *(DynamicNavMeshTileInfo **)v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_tileInfo >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_tileInfo = v5;
  std::list<DynamicNavMeshTileInfo *>::pop_back(&this->m_tileInfoStack);
};

// Line 628: range 000000000CD7B360-000000000CD7B601
NavMeshTileRef __cdecl HavokDynamicTileCallback::GetPolyRefBase(
        const HavokDynamicTileCallback *const this,
        const NavMeshTile *tile)
{
  const NavMesh *InternalNavMesh; // rax
  __int64 v5; // rbx
  const NavMeshTile *v6; // rax
  uint32_t it; // [rsp+1Ch] [rbp-44h]
  FreeList<NavMeshTile,true> *m_tiles; // [rsp+20h] [rbp-40h]
  const NavMeshTile *tiles_head; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( !tile )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  if ( !this->m_dynamicNavMesh )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_dynamicNavMesh, tile);
  m_tiles = &this->m_dynamicNavMesh->m_tiles;
  if ( !FreeList<NavMeshTile,true>::Capacity(m_tiles) )
    return 0LL;
  tiles_head = FreeList<NavMeshTile,true>::begin(m_tiles);
  if ( tile < tiles_head || tile >= &tiles_head[FreeList<NavMeshTile,true>::Capacity(m_tiles)] )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_dynamicNavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_dynamicNavMesh, tile);
    InternalNavMesh = DynamicNavMesh::GetInternalNavMesh(this->m_dynamicNavMesh);
    return NavMesh::GetPolyRefBase(InternalNavMesh, tile, 0LL);
  }
  else
  {
    it = 678152731 * (((char *)tile - (char *)tiles_head) >> 3);
    if ( tile == FreeList<NavMeshTile,true>::operator[](m_tiles, it) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&tile->salt);
      }
      return NavMeshPolyRefHelper::EncodePolyId(tile->salt, it, 0, 0, 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "GetPolyRefBase",
        641);
      v5 = FreeList<NavMeshTile,true>::Capacity(m_tiles);
      v6 = FreeList<NavMeshTile,true>::operator[](m_tiles, it);
      common::milog::MiLogStream::operator()(
        &v10,
        "tile=%p,  m_tiles->head=%p,   &(m_tiles[it])=%p,  it=%u,  capacity=%u",
        tile,
        tiles_head,
        v6,
        it,
        v5);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 0LL;
    }
  }
};

// Line 649: range 000000000CC92E1E-000000000CC935F9
void __cdecl DynamicNavMesh::DynamicNavMesh(
        DynamicNavMesh *const this,
        DynamicUniqueTokenType uniqueToken,
        bool useHavokCut,
        NavMeshManager *mgr)
{
  NavMeshQuery *v4; // rbx
  HavokSihouetteCutter *v5; // rbx
  HavokDynamicTileCallback *v6; // rbx
  NavMeshCarving *v7; // rbx
  DynamicTileCallback *v8; // rbx
  time_t Now; // rax
  std::less<int> comp; // [rsp+2Eh] [rbp-12h] BYREF
  stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> a; // [rsp+2Fh] [rbp-11h] BYREF

  std::shared_ptr<PathfindingTimer>::shared_ptr(&this->obstacle_update_timer_ptr);
  std::shared_ptr<PathfindingTimer>::shared_ptr(&this->tps_stats_timer_ptr);
  std::shared_ptr<PathfindingTimer>::shared_ptr(&this->keep_alive_timer_ptr);
  if ( *(char *)(((unsigned __int64)&this->is_editor >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_editor);
  this->is_editor = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->m_UseHavokCut);
  }
  this->m_UseHavokCut = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshQuery = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshCarving = 0LL;
  std::shared_ptr<StaticNavMesh>::shared_ptr(&this->m_StaticNavMesh);
  stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>::stl_allocator(&a);
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::vector_map(
    &this->m_ObstacleInfo,
    &comp,
    &a);
  stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>::~stl_allocator(&a);
  std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::vector(&this->m_removeObstacleInfo);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_UniqueToken);
  }
  this->m_UniqueToken = 0;
  stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>::stl_allocator((stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> *const)&a);
  vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::vector_map(
    &this->m_DynamicNavMeshSurface,
    &comp,
    (const stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> *)&a);
  stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>::~stl_allocator((stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> *const)&a);
  FreeList<NavMeshTile,true>::FreeList(&this->m_tiles);
  FreeList<NavMeshLink,true>::FreeList(&this->m_links);
  stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>::stl_allocator((stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> *const)&a);
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::vector_map(
    &this->m_TileLUT,
    (const std::less<std::pair<int,int> > *)&comp,
    (const stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> *)&a);
  stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>::~stl_allocator((stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> *const)&a);
  stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>::stl_allocator((stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> *const)&a);
  vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::vector_map(
    &this->m_NavMeshTileExInfo,
    (const std::less<const NavMeshTile*> *)&comp,
    (const stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> *)&a);
  stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>::~stl_allocator((stl_allocator<std::pair<const NavMeshTile*,DynamicNavMeshTileExInfo>,16> *const)&a);
  stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>::stl_allocator((stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> *const)&a);
  vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::vector_map(
    &this->m_DynamicOffMeshConnection,
    (const std::less<unsigned int> *)&comp,
    (const stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> *)&a);
  stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>::~stl_allocator((stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> *const)&a);
  if ( *(char *)(((unsigned __int64)&this->print_obstacles >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->print_obstacles);
  this->print_obstacles = 0;
  DynamicTPSStats::DynamicTPSStats(&this->stats);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_UniqueToken);
  }
  this->m_UniqueToken = uniqueToken;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MgrPtr >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_MgrPtr = mgr;
  v4 = (NavMeshQuery *)operator new(0x70uLL, 0x10uLL, "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp", 653);
  NavMeshQuery::NavMeshQuery(v4, this, 4096);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshQuery = v4;
  if ( useHavokCut )
  {
    v5 = (HavokSihouetteCutter *)operator new(
                                   0xA8uLL,
                                   0x10uLL,
                                   "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                   656);
    HavokSihouetteCutter::HavokSihouetteCutter(v5, this);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_NavMeshCarving = v5;
    v6 = (HavokDynamicTileCallback *)operator new(
                                       0x50uLL,
                                       0x10uLL,
                                       "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                       657);
    HavokDynamicTileCallback::HavokDynamicTileCallback(v6, this, 0LL, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_DynamicTileCallback = v6;
  }
  else
  {
    v7 = (NavMeshCarving *)operator new(
                             0xA0uLL,
                             0x10uLL,
                             "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                             661);
    NavMeshCarving::NavMeshCarving(v7, this);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_NavMeshCarving = v7;
    v8 = (DynamicTileCallback *)operator new(
                                  0x18uLL,
                                  0x10uLL,
                                  "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                  662);
    DynamicTileCallback::DynamicTileCallback(v8, this, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_DynamicTileCallback = v8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->m_UseHavokCut);
  }
  this->m_UseHavokCut = useHavokCut;
  ThreadSafeCountMgr::Add(CountTypeDynamicNavMesh, 1);
  ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, 8);
  DynamicNavMesh::InitTimers(this);
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->stats.last_stats_time >> 3) + 0x7FFF8000) )
    Now = __asan_report_store8();
  this->stats.last_stats_time = Now;
};

// Line 676: range 000000000CC935FA-000000000CC938BA
void __cdecl DynamicNavMesh::~DynamicNavMesh(DynamicNavMesh *const this)
{
  ThreadSafeCountMgr::Add(CountTypeDynamicNavMesh, -1);
  ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, -8);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->m_UseHavokCut);
  }
  DynamicNavMesh::ClearAllObstacles(this, 1, this->m_UseHavokCut);
  std::__shared_ptr<StaticNavMesh,(__gnu_cxx::_Lock_policy)2>::reset(&this->m_StaticNavMesh);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshQuery, 1LL);
  delete_internal<NavMeshQuery>(this->m_NavMeshQuery);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshQuery = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshCarving, 1LL);
  delete_internal<ICarving>(this->m_NavMeshCarving);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMeshCarving = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicTileCallback, 1LL);
  delete_internal<DynamicTileCallback>(this->m_DynamicTileCallback);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_DynamicTileCallback = 0LL;
  std::__shared_ptr<PathfindingTimer,(__gnu_cxx::_Lock_policy)2>::reset(&this->obstacle_update_timer_ptr);
  std::__shared_ptr<PathfindingTimer,(__gnu_cxx::_Lock_policy)2>::reset(&this->keep_alive_timer_ptr);
  std::__shared_ptr<PathfindingTimer,(__gnu_cxx::_Lock_policy)2>::reset(&this->tps_stats_timer_ptr);
  vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::~vector_map(&this->m_DynamicOffMeshConnection);
  vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::~vector_map(&this->m_NavMeshTileExInfo);
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::~vector_map(&this->m_TileLUT);
  FreeList<NavMeshLink,true>::~FreeList(&this->m_links);
  FreeList<NavMeshTile,true>::~FreeList(&this->m_tiles);
  vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::~vector_map(&this->m_DynamicNavMeshSurface);
  std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::~vector(&this->m_removeObstacleInfo);
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::~vector_map(&this->m_ObstacleInfo);
  std::shared_ptr<StaticNavMesh>::~shared_ptr(&this->m_StaticNavMesh);
  std::shared_ptr<PathfindingTimer>::~shared_ptr(&this->keep_alive_timer_ptr);
  std::shared_ptr<PathfindingTimer>::~shared_ptr(&this->tps_stats_timer_ptr);
  std::shared_ptr<PathfindingTimer>::~shared_ptr(&this->obstacle_update_timer_ptr);
};

// Line 694: range 000000000CC938BC-000000000CC9392E
void __cdecl DynamicNavMesh::ClearAll(DynamicNavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->m_UseHavokCut);
  }
  DynamicNavMesh::ClearAllObstacles(this, 0, this->m_UseHavokCut);
  std::__shared_ptr<StaticNavMesh,(__gnu_cxx::_Lock_policy)2>::reset(&this->m_StaticNavMesh);
};

// Line 700: range 000000000CC93930-000000000CC94656
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicNavMesh::ClearAllObstacles(DynamicNavMesh *const this, bool do_release, bool useHavokCut)
{
  ICarving *m_NavMeshCarving; // rdx
  _QWORD *p_vptr_ICarving; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  HavokSihouetteCutter *v11; // rbx
  HavokDynamicTileCallback *v12; // rbx
  NavMeshCarving *v13; // rbx
  DynamicTileCallback *v14; // rbx
  unsigned int i; // [rsp+1Ch] [rbp-74h]
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *__for_range; // [rsp+30h] [rbp-60h]
  std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > *__for_range_0; // [rsp+38h] [rbp-58h]
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *__for_range_1; // [rsp+40h] [rbp-50h]
  vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > *__for_range_2; // [rsp+48h] [rbp-48h]
  std::pair<unsigned int,DynamicOffMeshConnection*> *it_1; // [rsp+50h] [rbp-40h]
  std::pair<int,DynamicSurfaceInfo*> *it_0; // [rsp+58h] [rbp-38h]
  NavMeshTile *tile; // [rsp+60h] [rbp-30h]
  NavMeshObstacle *ob; // [rsp+68h] [rbp-28h]
  NavMeshObstacle *obstacle; // [rsp+70h] [rbp-20h]
  std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *it; // [rsp+78h] [rbp-18h]

  DynamicNavMesh::StopUpdateObstacleTimer(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshCarving, do_release);
  m_NavMeshCarving = this->m_NavMeshCarving;
  p_vptr_ICarving = &m_NavMeshCarving->_vptr_ICarving;
  v5 = *(unsigned __int8 *)(((unsigned __int64)m_NavMeshCarving >> 3) + 0x7FFF8000);
  if ( (_BYTE)v5 )
    p_vptr_ICarving = (_QWORD *)__asan_report_load8(this->m_NavMeshCarving, v5);
  v6 = *p_vptr_ICarving + 32LL;
  v7 = *(unsigned __int8 *)((v6 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v7 )
    v6 = __asan_report_load8(v6, v7);
  (*(void (__fastcall **)(ICarving *))v6)(m_NavMeshCarving);
  __for_range = &this->m_ObstacleInfo;
  __for_begin._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->m_ObstacleInfo)._M_current;
  __for_end._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->m_ObstacleInfo)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
            &__for_begin,
            &__for_end) )
  {
    it = __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&it->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&it->second, &__for_end);
    delete_internal<NavMeshObstacle>(it->second.obstacle);
    if ( *(_BYTE *)(((unsigned __int64)&it->second >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    it->second.obstacle = 0LL;
    __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator++(&__for_begin);
  }
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::clear(&this->m_ObstacleInfo);
  __for_range_0 = &this->m_removeObstacleInfo;
  __for_begin._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::begin(&this->m_removeObstacleInfo)._M_current;
  __for_end._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>(
            (const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *)&__for_end) )
  {
    v8 = (unsigned __int64)__gnu_cxx::__normal_iterator<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>::operator*((const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *const)&__for_begin);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8, &__for_end);
    ob = *(NavMeshObstacle **)v8;
    obstacle = ob;
    if ( ob )
    {
      delete_internal<NavMeshObstacle>(obstacle);
      obstacle = 0LL;
    }
    __gnu_cxx::__normal_iterator<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>::operator++((__gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *const)&__for_begin);
  }
  std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::clear(&this->m_removeObstacleInfo);
  for ( i = 0; FreeList<NavMeshTile,true>::Capacity(&this->m_tiles) > i; ++i )
  {
    tile = FreeList<NavMeshTile,true>::operator[](&this->m_tiles, i);
    if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->header, i);
    if ( tile->header )
    {
      v9 = (((_BYTE)tile + 92) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tile + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&tile->flags);
      }
      if ( (tile->flags & 1) != 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->data, v9);
        if ( tile->data )
        {
          ThreadSafeCountMgr::Add(CountTypeTile, -1);
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&tile->dataSize);
          }
          v9 = (unsigned int)-tile->dataSize;
          ThreadSafeCountMgr::Add(CountTypeDynamicMemorySize, v9);
        }
        if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->data, v9);
        free_alloc_internal((void *)tile->data);
      }
      if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->data = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&tile->dataSize);
      }
      tile->dataSize = 0;
      if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->polyLinks, v9);
      free_alloc_internal(tile->polyLinks);
      if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->polyLinks = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->header = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tile + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&tile->flags);
      }
      tile->flags = 0;
      if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->polys = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->verts = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->detailMeshes = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->detailVerts = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->detailTris = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->bvTree >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->bvTree = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->polyRegions = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&tile->salt);
      }
      tile->salt = (unsigned __int16)(tile->salt + 1);
      if ( !tile->salt )
        ++tile->salt;
    }
  }
  if ( do_release )
    FreeList<NavMeshTile,true>::Clear(&this->m_tiles);
  else
    FreeList<NavMeshTile,true>::ClearNotResetCapacity(&this->m_tiles);
  if ( do_release )
    FreeList<NavMeshLink,true>::Clear(&this->m_links);
  else
    FreeList<NavMeshLink,true>::ClearNotResetCapacity(&this->m_links);
  __for_range_1 = &this->m_DynamicNavMeshSurface;
  __for_begin._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::begin(&this->m_DynamicNavMeshSurface)._M_current;
  __for_end._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)&__for_end) )
  {
    it_0 = __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&it_0->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&it_0->second, &__for_end);
    delete_internal<DynamicSurfaceInfo>(it_0->second);
    if ( *(_BYTE *)(((unsigned __int64)&it_0->second >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    it_0->second = 0LL;
    __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)&__for_begin);
  }
  vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::clear(&this->m_DynamicNavMeshSurface);
  vector_map<NavMeshTile const*,DynamicNavMeshTileExInfo,std::less<NavMeshTile const*>,stl_allocator<std::pair<NavMeshTile const*,DynamicNavMeshTileExInfo>,16>>::clear(&this->m_NavMeshTileExInfo);
  __for_range_2 = &this->m_DynamicOffMeshConnection;
  __for_begin._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::begin(&this->m_DynamicOffMeshConnection)._M_current;
  __for_end._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(__for_range_2)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)&__for_end) )
  {
    it_1 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&it_1->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&it_1->second, &__for_end);
    delete_internal<DynamicOffMeshConnection>(it_1->second);
    if ( *(_BYTE *)(((unsigned __int64)&it_1->second >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    it_1->second = 0LL;
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> *,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)&__for_begin);
  }
  vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::clear(&this->m_DynamicOffMeshConnection);
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::clear(&this->m_TileLUT);
  v10 = ((_BYTE)this + 49) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) != 0
    && (char)v10 >= *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->m_UseHavokCut);
  }
  if ( useHavokCut != this->m_UseHavokCut )
  {
    this->m_UseHavokCut = useHavokCut;
    FreeList<NavMeshLink,true>::Clear(&this->m_links);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_NavMeshCarving, v10);
    delete_internal<ICarving>(this->m_NavMeshCarving);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_NavMeshCarving = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_DynamicTileCallback, v10);
    delete_internal<DynamicTileCallback>(this->m_DynamicTileCallback);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_DynamicTileCallback = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_UseHavokCut >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->m_UseHavokCut);
    }
    if ( this->m_UseHavokCut )
    {
      v11 = (HavokSihouetteCutter *)operator new(
                                      0xA8uLL,
                                      0x10uLL,
                                      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                      772);
      HavokSihouetteCutter::HavokSihouetteCutter(v11, this);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->m_NavMeshCarving = v11;
      v12 = (HavokDynamicTileCallback *)operator new(
                                          0x50uLL,
                                          0x10uLL,
                                          "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                          773);
      HavokDynamicTileCallback::HavokDynamicTileCallback(v12, this, 0LL, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->m_DynamicTileCallback = v12;
    }
    else
    {
      v13 = (NavMeshCarving *)operator new(
                                0xA0uLL,
                                0x10uLL,
                                "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                777);
      NavMeshCarving::NavMeshCarving(v13, this);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->m_NavMeshCarving = v13;
      v14 = (DynamicTileCallback *)operator new(
                                     0x18uLL,
                                     0x10uLL,
                                     "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                     778);
      DynamicTileCallback::DynamicTileCallback(v14, this, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->m_DynamicTileCallback = v14;
    }
  }
};

// Line 785: range 000000000CC94658-000000000CC946C5
void __cdecl DynamicNavMesh::InitMeshData(
        DynamicNavMesh *const this,
        const std::shared_ptr<StaticNavMesh> *staticNavMesh,
        bool use_havok_cut)
{
  if ( std::__shared_ptr<StaticNavMesh,(__gnu_cxx::_Lock_policy)2>::get(&this->m_StaticNavMesh) )
  {
    DynamicNavMesh::ClearAllObstacles(this, 0, use_havok_cut);
    std::__shared_ptr<StaticNavMesh,(__gnu_cxx::_Lock_policy)2>::reset(&this->m_StaticNavMesh);
  }
  std::shared_ptr<StaticNavMesh>::operator=(&this->m_StaticNavMesh, staticNavMesh);
};

// Line 795: range 000000000CD7B841-000000000CD7BA03
bool __cdecl NeedLogObstacleInfo(const Vector3f *extent, const Vector3f *limit)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)extent >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)extent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(extent);
  }
  *(float *)&v2 = extent->x;
  if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(limit);
  }
  if ( *(float *)&v2 < limit->x )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&extent->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)extent + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extent->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&extent->y);
  }
  *(float *)&v3 = extent->y;
  if ( *(_BYTE *)(((unsigned __int64)&limit->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)limit + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&limit->y);
  }
  if ( *(float *)&v3 < limit->y )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&extent->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)extent + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extent->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&extent->z);
  }
  *(float *)&v4 = extent->z;
  if ( *(_BYTE *)(((unsigned __int64)&limit->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)limit + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&limit->z);
  }
  return *(float *)&v4 >= limit->z;
};

// Line 802: range 000000000CC946C6-000000000CC9526C
void __cdecl DynamicNavMesh::RegisterObstacle(
        DynamicNavMesh *const this,
        const NavMeshObstacleData *obstacle_data,
        const Vector3f *log_limit)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rax
  char v7; // al
  NavMeshObstacle *v8; // r14
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >::pointer v9; // rax
  ICarving *m_NavMeshCarving; // rdx
  _QWORD *p_vptr_ICarving; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  const Vector3f *v15; // rdx
  float *v16; // rax
  const Vector3f *v17; // rdx
  float *v18; // rax
  const Vector3f *v19; // rax
  float *v20; // rdx
  NavMeshObstacleShape v21; // ebx
  unsigned int v22; // eax
  const Quaternionf *Rotation; // rdx
  float *p_w; // rax
  const Quaternionf *v26; // rdx
  float *p_z; // rax
  const Quaternionf *v28; // rdx
  float *p_y; // rax
  const Quaternionf *v30; // rax
  float *p_x; // rdx
  const Vector3f *Position; // rdx
  float *v33; // rax
  const Vector3f *v34; // rdx
  float *v35; // rax
  const Vector3f *v36; // rax
  float *v37; // rdx
  NavMeshObstacleShape Shape; // r14d
  unsigned int Handle; // ebx
  uint64_t VersionTimeStamp; // rcx
  double v41; // [rsp+8h] [rbp-1C8h]
  double v42; // [rsp+10h] [rbp-1C0h]
  double v43; // [rsp+18h] [rbp-1B8h]
  double x; // [rsp+20h] [rbp-1B0h]
  double v45; // [rsp+28h] [rbp-1A8h]
  double v46; // [rsp+28h] [rbp-1A8h]
  double v47; // [rsp+30h] [rbp-1A0h]
  double v48; // [rsp+30h] [rbp-1A0h]
  double v49; // [rsp+38h] [rbp-198h]
  double v50; // [rsp+38h] [rbp-198h]
  double v51; // [rsp+40h] [rbp-190h]
  double y; // [rsp+40h] [rbp-190h]
  double v53; // [rsp+48h] [rbp-188h]
  double z; // [rsp+48h] [rbp-188h]
  double v55; // [rsp+50h] [rbp-180h]
  double w; // [rsp+50h] [rbp-180h]
  int __x; // [rsp+7Ch] [rbp-154h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > __rhs; // [rsp+80h] [rbp-150h] BYREF
  NavMeshObstacle *obstacle; // [rsp+88h] [rbp-148h]
  DynamicNavMesh::NavMeshObstacleInfo *info; // [rsp+90h] [rbp-140h]
  Vector3f v63; // [rsp+98h] [rbp-138h]
  Vector3f v64; // [rsp+A4h] [rbp-12Ch]
  Vector3f v65; // [rsp+B0h] [rbp-120h]
  Vector3f v66; // [rsp+BCh] [rbp-114h]
  Vector3f v67; // [rsp+C8h] [rbp-108h]
  Vector3f v68; // [rsp+D4h] [rbp-FCh]
  std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> v69; // [rsp+E0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v70; // [rsp+100h] [rbp-D0h] BYREF
  char v71[176]; // [rsp+120h] [rbp-B0h] BYREF
  Vector3f v72; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v73; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v74; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f WorldExtents; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v76; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v77; // 0:xmm0_8.8,8:xmm1_4.4

  v3 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 6 it:803 64 16 8 info:822 96 16 10 result:825";
  *(_QWORD *)(v3 + 16) = DynamicNavMesh::RegisterObstacle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v3 + 32) = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::find(&this->m_ObstacleInfo, &obstacle_data->id);
  __rhs._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->m_ObstacleInfo)._M_current;
  if ( !__gnu_cxx::operator!=<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
          (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *)(v3 + 32),
          &__rhs) )
    goto LABEL_9;
  v6 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6 + 8, &__rhs);
  if ( *(_QWORD *)(v6 + 8) )
    v7 = 1;
  else
LABEL_9:
    v7 = 0;
  if ( !v7 )
  {
    v8 = (NavMeshObstacle *)operator new(
                              0x58uLL,
                              0x10uLL,
                              "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                              809);
    NavMeshObstacle::NavMeshObstacle(v8, obstacle_data);
    obstacle = v8;
    __rhs._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->m_ObstacleInfo)._M_current;
    if ( __gnu_cxx::operator!=<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
           (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *)(v3 + 32),
           &__rhs) )
    {
      v9 = __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *const)(v3 + 32));
      info = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)&v9->second.carveHandle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->second.carveHandle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v9->second.carveHandle);
      }
      if ( info->carveHandle != -1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_NavMeshCarving, &__rhs);
        m_NavMeshCarving = this->m_NavMeshCarving;
        p_vptr_ICarving = &m_NavMeshCarving->_vptr_ICarving;
        v12 = *(unsigned __int8 *)(((unsigned __int64)m_NavMeshCarving >> 3) + 0x7FFF8000);
        if ( (_BYTE)v12 )
          p_vptr_ICarving = (_QWORD *)__asan_report_load8(this->m_NavMeshCarving, v12);
        v13 = *p_vptr_ICarving + 24LL;
        v14 = *(unsigned __int8 *)((v13 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v14 )
          v13 = __asan_report_load8(v13, v14);
        (*(void (__fastcall **)(ICarving *, int *))v13)(m_NavMeshCarving, &info->carveHandle);
      }
      if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      info->obstacle = obstacle;
      if ( *(_BYTE *)(((unsigned __int64)&info->carveHandle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&info->carveHandle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&info->carveHandle);
      }
      info->carveHandle = -1;
      goto LABEL_35;
    }
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_DWORD *)(v3 + 72) = -1;
    *(_QWORD *)(v3 + 64) = obstacle;
    *(_DWORD *)(v3 + 72) = -1;
    __x = NavMeshObstacle::GetHandle(obstacle);
    std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>::pair<int,DynamicNavMesh::NavMeshObstacleInfo&,true>(
      &v69,
      &__x,
      (DynamicNavMesh::NavMeshObstacleInfo *)(v3 + 64));
    *(std::pair<__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >,bool> *)(v3 + 96) = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::insert(&this->m_ObstacleInfo, &v69);
    if ( *(_BYTE *)(v3 + 104) == 1 )
    {
LABEL_35:
      if ( log_limit && NeedLogObstacleInfo(&obstacle_data->m_Extend, log_limit) )
      {
        common::milog::MiLogStream::create(
          &v70,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
          "RegisterObstacle",
          840);
        Rotation = NavMeshObstacle::GetRotation(obstacle);
        p_w = &Rotation->w;
        if ( *(_BYTE *)(((unsigned __int64)p_w >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_w & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_w >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_w);
        }
        w = Rotation->w;
        v26 = NavMeshObstacle::GetRotation(obstacle);
        p_z = &v26->z;
        if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_z);
        }
        z = v26->z;
        v28 = NavMeshObstacle::GetRotation(obstacle);
        p_y = &v28->y;
        if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_y);
        }
        y = v28->y;
        v30 = NavMeshObstacle::GetRotation(obstacle);
        p_x = &v30->x;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v50 = *p_x;
        WorldExtents = NavMeshObstacle::GetWorldExtents(obstacle);
        v68 = WorldExtents;
        v48 = WorldExtents.z;
        v76 = NavMeshObstacle::GetWorldExtents(obstacle);
        v67 = v76;
        v46 = v76.y;
        v77 = NavMeshObstacle::GetWorldExtents(obstacle);
        v66 = v77;
        x = v77.x;
        Position = NavMeshObstacle::GetPosition(obstacle);
        v33 = &Position->z;
        if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v33);
        }
        v43 = Position->z;
        v34 = NavMeshObstacle::GetPosition(obstacle);
        v35 = &v34->y;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v35);
        }
        v42 = v34->y;
        v36 = NavMeshObstacle::GetPosition(obstacle);
        v37 = &v36->x;
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v36);
        }
        v41 = *v37;
        Shape = NavMeshObstacle::GetShape(obstacle);
        Handle = NavMeshObstacle::GetHandle(obstacle);
        VersionTimeStamp = NavMeshObstacle::GetVersionTimeStamp(obstacle);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->m_UniqueToken);
        }
        common::milog::MiLogStream::operator()(
          &v70,
          "Obstacle /*uid:%d, timestamp:,%lu, id*/%u,/*shape*/%d,/*pos*/%f,%f,%f,/*extend*/%f,%f,%f,/*rotation*/%f,%f,%f,%f",
          this->m_UniqueToken,
          VersionTimeStamp,
          Handle,
          (unsigned int)Shape,
          v41,
          v42,
          v43,
          x,
          v46,
          v48,
          v50,
          y,
          *(_QWORD *)&z,
          *(_QWORD *)&w);
        common::milog::MiLogStream::~MiLogStream(&v70);
      }
      DynamicNavMesh::StartUpdateObstacleTimer(this);
      goto LABEL_58;
    }
    common::milog::MiLogStream::create(
      &v70,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "RegisterObstacle",
      828);
    v72 = NavMeshObstacle::GetWorldExtents(obstacle);
    v65 = v72;
    v55 = v72.z;
    v73 = NavMeshObstacle::GetWorldExtents(obstacle);
    v64 = v73;
    v53 = v73.y;
    v74 = NavMeshObstacle::GetWorldExtents(obstacle);
    v63 = v74;
    v51 = v74.x;
    v15 = NavMeshObstacle::GetPosition(obstacle);
    v16 = &v15->z;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    v49 = v15->z;
    v17 = NavMeshObstacle::GetPosition(obstacle);
    v18 = &v17->y;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    v47 = v17->y;
    v19 = NavMeshObstacle::GetPosition(obstacle);
    v20 = &v19->x;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    v45 = *v20;
    v21 = NavMeshObstacle::GetShape(obstacle);
    v22 = NavMeshObstacle::GetHandle(obstacle);
    common::milog::MiLogStream::operator()(
      &v70,
      "add obstacle failed. [Obstacle] id = %d | shape = %d, center = [%.4f, %.4f, %.4f], extends = [%.4f, %.4f, %.4f]",
      v22,
      (unsigned int)v21,
      v45,
      v47,
      v49,
      v51,
      v53,
      v55);
    common::milog::MiLogStream::~MiLogStream(&v70);
    delete_internal<NavMeshObstacle>(obstacle);
    obstacle = 0LL;
  }
LABEL_58:
  if ( v71 == (char *)v3 )
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

// Line 853: range 000000000CC9526E-000000000CC95721
void __fastcall DynamicNavMesh::UnregisterObstacle(DynamicNavMesh *const this, int handle, const Vector3f *log_limit)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  char v7; // al
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > >::pointer v8; // rax
  ICarving *m_NavMeshCarving; // rdx
  _QWORD *p_vptr_ICarving; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  DynamicNavMesh::NavMeshObstacleInfo *v14; // rsi
  char v15; // al
  __int64 v16; // rcx
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > __rhs; // [rsp+20h] [rbp-C0h] BYREF
  DynamicNavMesh::NavMeshObstacleInfo *info; // [rsp+28h] [rbp-B8h]
  Vector3f extent; // [rsp+34h] [rbp-ACh] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 handle:852 64 8 6 it:854";
  *(_QWORD *)(v3 + 16) = DynamicNavMesh::UnregisterObstacle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = handle;
  *(vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v3 + 64) = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::find(&this->m_ObstacleInfo, (const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::key_type *)(v3 + 48));
  __rhs._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->m_ObstacleInfo)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *)(v3 + 64),
         &__rhs) )
  {
    goto LABEL_8;
  }
  v6 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6 + 8, &__rhs);
  if ( *(_QWORD *)(v6 + 8) )
    v7 = 0;
  else
LABEL_8:
    v7 = 1;
  if ( !v7 )
  {
    v8 = __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *const)(v3 + 64));
    info = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)&v8->second.carveHandle >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->second.carveHandle >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v8->second.carveHandle);
    }
    if ( info->carveHandle != -1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_NavMeshCarving, &__rhs);
      m_NavMeshCarving = this->m_NavMeshCarving;
      p_vptr_ICarving = &m_NavMeshCarving->_vptr_ICarving;
      v11 = *(unsigned __int8 *)(((unsigned __int64)m_NavMeshCarving >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 )
        p_vptr_ICarving = (_QWORD *)__asan_report_load8(this->m_NavMeshCarving, v11);
      v12 = *p_vptr_ICarving + 24LL;
      v13 = *(unsigned __int8 *)((v12 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v13 )
        v12 = __asan_report_load8(v12, v13);
      (*(void (__fastcall **)(ICarving *, int *))v12)(m_NavMeshCarving, &info->carveHandle);
      if ( *(_BYTE *)(((unsigned __int64)&info->carveHandle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&info->carveHandle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&info->carveHandle);
      }
      info->carveHandle = -1;
    }
    v14 = info;
    std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::emplace_back<NavMeshObstacle *&>(
      &this->m_removeObstacleInfo,
      &info->obstacle,
      (NavMeshObstacle **)&this->m_removeObstacleInfo);
    if ( !log_limit )
      goto LABEL_28;
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
      __asan_report_load8(info, v14);
    extent = NavMeshObstacle::GetWorldExtents(info->obstacle);
    if ( NeedLogObstacleInfo(&extent, log_limit) )
      v15 = 1;
    else
LABEL_28:
      v15 = 0;
    if ( v15 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "UnregisterObstacle",
        870);
      if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
        __asan_report_load8(info, &common::milog::MiLogDefault::default_log_obj_);
      v16 = (unsigned int)NavMeshObstacle::GetHandle(info->obstacle);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(&v21, "Obstacle /*uid:%d, id*/%u   delete", this->m_UniqueToken, v16);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    info->obstacle = 0LL;
    DynamicNavMesh::StartUpdateObstacleTimer(this);
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 880: range 000000000CC95722-000000000CC95929
void __cdecl DynamicNavMesh::ForeachNavMeshObstacle(
        const DynamicNavMesh *const this,
        const DynamicNavMesh::ForeachNavMeshObstacleCallbackHandle *callback)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 n; // rax
  NavMeshObstacle *v6; // rdi
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *__for_range; // [rsp+28h] [rbp-88h]
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 info:881";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::ForeachNavMeshObstacle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  __for_range = &this->m_ObstacleInfo;
  __for_begin._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->m_ObstacleInfo)._M_current;
  __for_end._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->m_ObstacleInfo)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> const*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
            &__for_begin,
            &__for_end) )
  {
    n = (unsigned __int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> const*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator*(&__for_begin);
    if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 24LL);
    }
    v6 = *(NavMeshObstacle **)(n + 8);
    *(_QWORD *)(v2 + 32) = *(_QWORD *)n;
    *(_QWORD *)(v2 + 40) = v6;
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(n + 16);
    if ( *(_QWORD *)(v2 + 40) )
      std::function<bool ()(NavMeshObstacle const*)>::operator()(callback, *(const NavMeshObstacle **)(v2 + 40));
    __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> const*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v2 )
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

// Line 892: range 000000000CC9592A-000000000CC968CC
void __cdecl DynamicNavMesh::UpdateCarvingImmediately(DynamicNavMesh *const this)
{
  __int64 v1; // rsi
  common::tools::TimeUtils::Timer *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ICarving *m_NavMeshCarving; // rdx
  _QWORD *p_vptr_ICarving; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  CPUProfilingMgr *CPUProfilingMgr; // rdi
  uint64_t v12; // rcx
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::size_type v13; // rsi
  const Quaternionf *Rotation; // rdx
  float *p_w; // rax
  const Quaternionf *v16; // rdx
  float *p_z; // rax
  const Quaternionf *v18; // rdx
  float *p_y; // rax
  const Quaternionf *v20; // rax
  float *p_x; // rdx
  const Vector3f *Position; // rdx
  float *v23; // rax
  const Vector3f *v24; // rdx
  float *v25; // rax
  const Vector3f *v26; // rax
  float *v27; // rdx
  unsigned int Handle; // r14d
  uint64_t VersionTimeStamp; // rcx
  unsigned __int64 v30; // rax
  const Quaternionf *v31; // rdx
  float *v32; // rax
  const Quaternionf *v33; // rdx
  float *v34; // rax
  const Quaternionf *v35; // rdx
  float *v36; // rax
  const Quaternionf *v37; // rax
  float *v38; // rdx
  const Vector3f *v39; // rdx
  float *v40; // rax
  const Vector3f *v41; // rdx
  float *v42; // rax
  const Vector3f *v43; // rax
  float *v44; // rdx
  unsigned int v45; // r14d
  uint64_t v46; // rcx
  unsigned __int64 v47; // rax
  NavMeshObstacleShape Shape; // [rsp+4h] [rbp-18Ch]
  NavMeshObstacleShape v49; // [rsp+4h] [rbp-18Ch]
  double v50; // [rsp+8h] [rbp-188h]
  double v51; // [rsp+8h] [rbp-188h]
  double v52; // [rsp+10h] [rbp-180h]
  double v53; // [rsp+10h] [rbp-180h]
  double v54; // [rsp+18h] [rbp-178h]
  double v55; // [rsp+18h] [rbp-178h]
  double x; // [rsp+20h] [rbp-170h]
  double v57; // [rsp+20h] [rbp-170h]
  double v58; // [rsp+28h] [rbp-168h]
  double v59; // [rsp+28h] [rbp-168h]
  double v60; // [rsp+30h] [rbp-160h]
  double v61; // [rsp+30h] [rbp-160h]
  double v62; // [rsp+38h] [rbp-158h]
  double v63; // [rsp+38h] [rbp-158h]
  double y; // [rsp+40h] [rbp-150h]
  double v65; // [rsp+40h] [rbp-150h]
  double z; // [rsp+48h] [rbp-148h]
  double v67; // [rsp+48h] [rbp-148h]
  double w; // [rsp+50h] [rbp-140h]
  double v69; // [rsp+50h] [rbp-140h]
  unsigned int change_obstacle_count; // [rsp+60h] [rbp-130h]
  int cost_time; // [rsp+64h] [rbp-12Ch]
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __for_begin; // [rsp+68h] [rbp-128h] BYREF
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __for_end; // [rsp+70h] [rbp-120h] BYREF
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *__for_range; // [rsp+78h] [rbp-118h]
  std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > *__for_range_0; // [rsp+80h] [rbp-110h]
  NavMeshObstacle *obstacle_0; // [rsp+88h] [rbp-108h]
  std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *ob; // [rsp+90h] [rbp-100h]
  NavMeshObstacle *obstacle; // [rsp+98h] [rbp-F8h]
  std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > *__for_range_1; // [rsp+A0h] [rbp-F0h]
  NavMeshObstacle *ob_0; // [rsp+A8h] [rbp-E8h]
  NavMeshObstacle *obstacle_1; // [rsp+B0h] [rbp-E0h]
  Vector3f v83; // [rsp+B8h] [rbp-D8h]
  Vector3f v84; // [rsp+C4h] [rbp-CCh]
  Vector3f v85; // [rsp+D0h] [rbp-C0h]
  Vector3f v86; // [rsp+DCh] [rbp-B4h]
  Vector3f v87; // [rsp+E8h] [rbp-A8h]
  Vector3f v88; // [rsp+F4h] [rbp-9Ch]
  common::milog::MiLogStream v89; // [rsp+100h] [rbp-90h] BYREF
  char v90[112]; // [rsp+120h] [rbp-70h] BYREF
  Vector3f WorldExtents; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v92; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v93; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v94; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v95; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v96; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (common::tools::TimeUtils::Timer *)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (common::tools::TimeUtils::Timer *)v3;
  }
  v2->start_tv_.tv_sec = 1102416563LL;
  v2->start_tv_.tv_usec = (__suseconds_t)"1 32 16 9 timer:897";
  v2[1].start_tv_.tv_sec = (__time_t)DynamicNavMesh::UpdateCarvingImmediately;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshCarving, v1);
  if ( this->m_NavMeshCarving
    && std::__shared_ptr<StaticNavMesh,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->m_StaticNavMesh) )
  {
    common::tools::TimeUtils::Timer::Timer(v2 + 2);
    change_obstacle_count = DynamicNavMesh::UpdateNavMeshObstacles(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_NavMeshCarving, v1);
    m_NavMeshCarving = this->m_NavMeshCarving;
    p_vptr_ICarving = &m_NavMeshCarving->_vptr_ICarving;
    v8 = *(unsigned __int8 *)(((unsigned __int64)m_NavMeshCarving >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      p_vptr_ICarving = (_QWORD *)__asan_report_load8(this->m_NavMeshCarving, v8);
    v9 = *p_vptr_ICarving + 40LL;
    v10 = *(unsigned __int8 *)((v9 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v10 )
      v9 = __asan_report_load8(v9, v10);
    (*(void (__fastcall **)(ICarving *))v9)(m_NavMeshCarving);
    cost_time = common::tools::TimeUtils::Timer::time(v2 + 2);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_MgrPtr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_MgrPtr, v10);
    if ( this->m_MgrPtr )
    {
      CPUProfilingMgr = NavMeshManager::GetCPUProfilingMgr(this->m_MgrPtr);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        CPUProfilingMgr = (CPUProfilingMgr *)&this->m_UniqueToken;
        __asan_report_load4(&this->m_UniqueToken);
      }
      v10 = cost_time;
      CPUProfilingMgr::AddObstacleTotal(CPUProfilingMgr, cost_time, change_obstacle_count, this->m_UniqueToken);
    }
    v12 = cost_time;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ObstacleTimeLimit >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_ObstacleTimeLimit, v10);
    if ( v12 > this->m_ObstacleTimeLimit )
      goto LABEL_29;
    if ( *(char *)(((unsigned __int64)&this->print_obstacles >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->print_obstacles);
    if ( this->print_obstacles )
    {
LABEL_29:
      if ( *(char *)(((unsigned __int64)&this->print_obstacles >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->print_obstacles);
      this->print_obstacles = 0;
      common::milog::MiLogStream::create(
        &v89,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "UpdateCarvingImmediately",
        908);
      v13 = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::size(&this->m_ObstacleInfo);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(
        &v89,
        "carvingovertime uid:%d, cost_time:%d us, size=%lu",
        this->m_UniqueToken,
        (unsigned int)cost_time,
        v13);
      common::milog::MiLogStream::~MiLogStream(&v89);
      __for_range = &this->m_ObstacleInfo;
      __for_begin._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->m_ObstacleInfo)._M_current;
      __for_end._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->m_ObstacleInfo)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
                &__for_begin,
                &__for_end) )
      {
        ob = __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)&ob->second >> 3) + 0x7FFF8000) )
          __asan_report_load8(&ob->second, &__for_end);
        obstacle = ob->second.obstacle;
        common::milog::MiLogStream::create(
          &v89,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
          "UpdateCarvingImmediately",
          912);
        Rotation = NavMeshObstacle::GetRotation(obstacle);
        p_w = &Rotation->w;
        if ( *(_BYTE *)(((unsigned __int64)p_w >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_w & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_w >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_w);
        }
        w = Rotation->w;
        v16 = NavMeshObstacle::GetRotation(obstacle);
        p_z = &v16->z;
        if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_z);
        }
        z = v16->z;
        v18 = NavMeshObstacle::GetRotation(obstacle);
        p_y = &v18->y;
        if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_y);
        }
        y = v18->y;
        v20 = NavMeshObstacle::GetRotation(obstacle);
        p_x = &v20->x;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        v62 = *p_x;
        WorldExtents = NavMeshObstacle::GetWorldExtents(obstacle);
        v85 = WorldExtents;
        v60 = WorldExtents.z;
        v92 = NavMeshObstacle::GetWorldExtents(obstacle);
        v84 = v92;
        v58 = v92.y;
        v93 = NavMeshObstacle::GetWorldExtents(obstacle);
        v83 = v93;
        x = v93.x;
        Position = NavMeshObstacle::GetPosition(obstacle);
        v23 = &Position->z;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        v54 = Position->z;
        v24 = NavMeshObstacle::GetPosition(obstacle);
        v25 = &v24->y;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        v52 = v24->y;
        v26 = NavMeshObstacle::GetPosition(obstacle);
        v27 = &v26->x;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        v50 = *v27;
        Shape = NavMeshObstacle::GetShape(obstacle);
        Handle = NavMeshObstacle::GetHandle(obstacle);
        VersionTimeStamp = NavMeshObstacle::GetVersionTimeStamp(obstacle);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->m_UniqueToken);
        }
        common::milog::MiLogStream::operator()(
          &v89,
          "/* carvingovertime uid:%d, timestamp:,%lu, id*/%u,/*shape*/%d,/*pos*/%f,%f,%f,/*extend*/%f,%f,%f,/*rotation*/%f,%f,%f,%f   ",
          this->m_UniqueToken,
          VersionTimeStamp,
          Handle,
          (unsigned int)Shape,
          v50,
          v52,
          v54,
          x,
          v58,
          v60,
          v62,
          y,
          *(_QWORD *)&z,
          *(_QWORD *)&w);
        common::milog::MiLogStream::~MiLogStream(&v89);
        __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator++(&__for_begin);
      }
      __for_range_0 = &this->m_removeObstacleInfo;
      __for_begin._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::begin(&this->m_removeObstacleInfo)._M_current;
      __for_end._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>(
                (const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *)&__for_end) )
      {
        v30 = (unsigned __int64)__gnu_cxx::__normal_iterator<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>::operator*((const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *const)&__for_begin);
        if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
          v30 = __asan_report_load8(v30, &__for_end);
        obstacle_0 = *(NavMeshObstacle **)v30;
        common::milog::MiLogStream::create(
          &v89,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
          "UpdateCarvingImmediately",
          923);
        v31 = NavMeshObstacle::GetRotation(obstacle_0);
        v32 = &v31->w;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        v69 = v31->w;
        v33 = NavMeshObstacle::GetRotation(obstacle_0);
        v34 = &v33->z;
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v34);
        }
        v67 = v33->z;
        v35 = NavMeshObstacle::GetRotation(obstacle_0);
        v36 = &v35->y;
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v36);
        }
        v65 = v35->y;
        v37 = NavMeshObstacle::GetRotation(obstacle_0);
        v38 = &v37->x;
        if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v37);
        }
        v63 = *v38;
        v94 = NavMeshObstacle::GetWorldExtents(obstacle_0);
        v88 = v94;
        v61 = v94.z;
        v95 = NavMeshObstacle::GetWorldExtents(obstacle_0);
        v87 = v95;
        v59 = v95.y;
        v96 = NavMeshObstacle::GetWorldExtents(obstacle_0);
        v86 = v96;
        v57 = v96.x;
        v39 = NavMeshObstacle::GetPosition(obstacle_0);
        v40 = &v39->z;
        if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v40);
        }
        v55 = v39->z;
        v41 = NavMeshObstacle::GetPosition(obstacle_0);
        v42 = &v41->y;
        if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v42);
        }
        v53 = v41->y;
        v43 = NavMeshObstacle::GetPosition(obstacle_0);
        v44 = &v43->x;
        if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v43);
        }
        v51 = *v44;
        v49 = NavMeshObstacle::GetShape(obstacle_0);
        v45 = NavMeshObstacle::GetHandle(obstacle_0);
        v46 = NavMeshObstacle::GetVersionTimeStamp(obstacle_0);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->m_UniqueToken);
        }
        common::milog::MiLogStream::operator()(
          &v89,
          "/* carvingovertime uid:%d, timestamp:,%lu, id*/%u,/*shape*/%d,/*pos*/%f,%f,%f,/*extend*/%f,%f,%f,/*rotation*/%"
          "f,%f,%f,%f    delete",
          this->m_UniqueToken,
          v46,
          v45,
          (unsigned int)v49,
          v51,
          v53,
          v55,
          v57,
          v59,
          v61,
          v63,
          v65,
          *(_QWORD *)&v67,
          *(_QWORD *)&v69);
        common::milog::MiLogStream::~MiLogStream(&v89);
        __gnu_cxx::__normal_iterator<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>::operator++((__gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *const)&__for_begin);
      }
    }
    __for_range_1 = &this->m_removeObstacleInfo;
    __for_begin._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::begin(&this->m_removeObstacleInfo)._M_current;
    __for_end._M_current = (std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *)std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>(
              (const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *)&__for_end) )
    {
      v47 = (unsigned __int64)__gnu_cxx::__normal_iterator<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>::operator*((const __gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *const)&__for_begin);
      if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
        v47 = __asan_report_load8(v47, &__for_end);
      ob_0 = *(NavMeshObstacle **)v47;
      obstacle_1 = ob_0;
      if ( ob_0 )
      {
        delete_internal<NavMeshObstacle>(obstacle_1);
        obstacle_1 = 0LL;
      }
      __gnu_cxx::__normal_iterator<NavMeshObstacle **,std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>>::operator++((__gnu_cxx::__normal_iterator<NavMeshObstacle**,std::vector<NavMeshObstacle*,stl_allocator<NavMeshObstacle*,16> > > *const)&__for_begin);
    }
    std::vector<NavMeshObstacle *,stl_allocator<NavMeshObstacle *,16>>::clear(&this->m_removeObstacleInfo);
    common::tools::TimeUtils::Timer::~Timer(v2 + 2);
  }
  if ( v90 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->start_tv_.tv_sec = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 943: range 000000000CC968CE-000000000CC96D62
uint32_t __cdecl DynamicNavMesh::UpdateNavMeshObstacles(DynamicNavMesh *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5; // al
  uint32_t result; // eax
  char v7; // al
  ICarving *m_NavMeshCarving; // rcx
  _QWORD *p_vptr_ICarving; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  void (__fastcall *v13)(ICarving *, NavMeshObstacle *, int *); // r8
  int *p_carveHandle; // rdx
  __int64 v15; // rsi
  ICarving *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  uint32_t change_count; // [rsp+1Ch] [rbp-74h]
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > __rhs; // [rsp+20h] [rbp-70h] BYREF
  DynamicNavMesh::NavMeshObstacleInfo *info; // [rsp+28h] [rbp-68h]
  char v24[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 it:947";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::UpdateNavMeshObstacles;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::empty(&this->m_ObstacleInfo) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshCarving, v1);
  if ( this->m_NavMeshCarving )
    v5 = 0;
  else
LABEL_8:
    v5 = 1;
  if ( v5 )
  {
    result = 0;
  }
  else
  {
    change_count = 0;
    *(vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v2 + 32) = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&this->m_ObstacleInfo);
    while ( 1 )
    {
      __rhs._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&this->m_ObstacleInfo)._M_current;
      if ( !__gnu_cxx::operator!=<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *)(v2 + 32),
              &__rhs) )
        break;
      info = &__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *const)(v2 + 32))->second;
      if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
        __asan_report_load8(info, &__rhs);
      if ( info->obstacle )
      {
        if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
          __asan_report_load8(info, &__rhs);
        NavMeshObstacle::UpdateState(info->obstacle);
        if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
          __asan_report_load8(info, &__rhs);
        if ( !NavMeshObstacle::GetCarving(info->obstacle) )
          goto LABEL_27;
        if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
          __asan_report_load8(info, &__rhs);
        if ( NavMeshObstacle::GetMoveState(info->obstacle) )
LABEL_27:
          v7 = 0;
        else
          v7 = 1;
        if ( v7 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&info->carveHandle >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&info->carveHandle >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&info->carveHandle);
          }
          if ( info->carveHandle == -1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->m_NavMeshCarving, &__rhs);
            m_NavMeshCarving = this->m_NavMeshCarving;
            p_vptr_ICarving = &m_NavMeshCarving->_vptr_ICarving;
            v10 = *(unsigned __int8 *)(((unsigned __int64)m_NavMeshCarving >> 3) + 0x7FFF8000);
            if ( (_BYTE)v10 )
              p_vptr_ICarving = (_QWORD *)__asan_report_load8(this->m_NavMeshCarving, v10);
            v11 = *p_vptr_ICarving + 16LL;
            v12 = *(unsigned __int8 *)((v11 >> 3) + 0x7FFF8000);
            if ( (_BYTE)v12 )
              v11 = __asan_report_load8(v11, v12);
            v13 = *(void (__fastcall **)(ICarving *, NavMeshObstacle *, int *))v11;
            p_carveHandle = &info->carveHandle;
            v15 = *(unsigned __int8 *)(((unsigned __int64)info >> 3) + 0x7FFF8000);
            if ( (_BYTE)v15 )
              __asan_report_load8(info, v15);
            v13(m_NavMeshCarving, info->obstacle, p_carveHandle);
            ++change_count;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&info->carveHandle >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&info->carveHandle >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&info->carveHandle);
          }
          if ( info->carveHandle != -1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshCarving >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->m_NavMeshCarving, &__rhs);
            v16 = this->m_NavMeshCarving;
            v17 = &v16->_vptr_ICarving;
            v18 = *(unsigned __int8 *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
            if ( (_BYTE)v18 )
              v17 = (_QWORD *)__asan_report_load8(this->m_NavMeshCarving, v18);
            v19 = *v17 + 24LL;
            v20 = *(unsigned __int8 *)((v19 >> 3) + 0x7FFF8000);
            if ( (_BYTE)v20 )
              v19 = __asan_report_load8(v19, v20);
            (*(void (__fastcall **)(ICarving *, int *))v19)(v16, &info->carveHandle);
            ++change_count;
          }
        }
        __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator++(
          (__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>*,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > > *const)(v2 + 32),
          0);
      }
      else
      {
        *(vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v2 + 32) = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::erase(&this->m_ObstacleInfo, *(vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator *)(v2 + 32));
        ++change_count;
      }
    }
    result = change_count;
  }
  if ( v24 == (char *)v2 )
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

// Line 985: range 000000000CC96D64-000000000CC96F06
const NavMeshTile *__cdecl DynamicNavMesh::GetSourceTile(const DynamicNavMesh *const this, const TileLoc *loc)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  NavMesh *NavMesh; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  NavMesh *v8; // r14
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v9; // rdx
  TileLookUpData *p_second; // rax
  const NavMeshTile *result; // rax
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+10h] [rbp-80h] BYREF
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+18h] [rbp-78h]
  char v14[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 it:987";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::GetSourceTile;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v5);
  lut = NavMesh::GetTileLUT(NavMesh);
  *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v2 + 32) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, loc);
  __rhs._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
  if ( __gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v2 + 32),
         &__rhs) )
  {
    v7 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    v8 = StaticNavMesh::GetNavMesh(v7);
    v9 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v2 + 32));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = NavMesh::GetTile(v8, v9->second.tileNavMeshIndex);
  }
  else
  {
    result = 0LL;
  }
  if ( v14 == (char *)v2 )
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

// Line 996: range 000000000CC96F08-000000000CC96F42
const NavMeshTileData *__cdecl DynamicNavMesh::GetSourceTileData(
        const DynamicNavMesh *const this,
        SurfaceIDType surfaceID,
        int tileIndex)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  v3 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  return StaticNavMesh::GetSourceTileData(v3, surfaceID, tileIndex);
};

// Line 1001: range 000000000CC96F44-000000000CC96F78
void __cdecl DynamicNavMesh::GetSourceTileDataBounds(
        const DynamicNavMesh *const this,
        dynamic_array<TileLocation,false,4> *locations)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx

  v2 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  StaticNavMesh::GetSourceTileDataBounds(v2, locations);
};

// Line 1006: range 000000000CC96F7A-000000000CC96FAE
const NavMeshBuildSettings *__cdecl DynamicNavMesh::GetNavMeshBuildSettings(
        const DynamicNavMesh *const this,
        SurfaceIDType surfaceID)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax

  v2 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  return StaticNavMesh::GetNavMeshBuildSettings(v2, surfaceID);
};

// Line 1011: range 000000000CC96FB0-000000000CC97090
bool __cdecl DynamicNavMesh::MapPosition(
        const DynamicNavMesh *const this,
        NavMeshPolyRef *mappedPolyRef,
        Vector3f *mappedPosition,
        const Vector3f *position,
        const Vector3f *extents,
        const QueryFilter *filter)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshQuery, mappedPolyRef);
  if ( !this->m_NavMeshQuery )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshQuery, mappedPolyRef);
  NavMeshQuery::FindNearestPoly(this->m_NavMeshQuery, position, extents, filter, mappedPolyRef, mappedPosition);
  if ( *(_BYTE *)(((unsigned __int64)mappedPolyRef >> 3) + 0x7FFF8000) )
    __asan_report_load8(mappedPolyRef, position);
  return *mappedPolyRef != 0;
};

// Line 1021: range 000000000CC97092-000000000CC97239
void __cdecl DynamicNavMesh::InvalidateNavMeshHit(DynamicNavMesh *const this, NavMeshHit *hit)
{
  Vector3f v2; // [rsp+14h] [rbp-Ch] BYREF

  Vector3f::Vector3f(&v2, INFINITY, INFINITY, INFINITY);
  if ( ((unsigned __int8)hit & 7) >= *(_BYTE *)(((unsigned __int64)hit >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)hit >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&hit->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)hit + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&hit->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(hit, 12LL);
  }
  hit->position = v2;
  Vector3f::SetZero(&hit->normal);
  if ( *(_BYTE *)(((unsigned __int64)&hit->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)hit + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hit->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&hit->distance);
  }
  hit->distance = INFINITY;
  if ( *(_BYTE *)(((unsigned __int64)&hit->mask >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)hit + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hit->mask >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&hit->mask);
  }
  hit->mask = 0;
  if ( *(_BYTE *)(((unsigned __int64)&hit->hit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)hit + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hit->hit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&hit->hit);
  }
  hit->hit = 0;
};

// Line 1031: range 000000000CC9723A-000000000CC978B9
// local variable allocation has failed, the output may be wrong!
bool __cdecl DynamicNavMesh::Raycast(
        DynamicNavMesh *const this,
        NavMeshHit *hit,
        const Vector3f *sourcePosition,
        const Vector3f *targetPosition,
        const QueryFilter *filter)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 LegacyQueryExtents; // rax
  bool result; // al
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __m128i v14; // xmm0
  float v15; // ecx
  int PolyFlags; // edi
  int v17; // ecx
  bool blocked; // [rsp+3Fh] [rbp-151h]
  NavMeshStatus status; // [rsp+40h] [rbp-150h]
  Vector3f inV; // [rsp+44h] [rbp-14Ch] BYREF
  char v24[320]; // [rsp+50h] [rbp-140h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 8 18 mappedPolyRef:1032 80 12 19 mappedPosition:1033 112 12 8 ext:1034 144 12 9 lpos:1051 1"
                        "76 12 8 pos:1053 208 40 11 result:1041";
  *(_QWORD *)(v5 + 16) = DynamicNavMesh::Raycast;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = 0x4000000;
  v7[536862723] = 62194;
  v7[536862723] = 0x4000000;
  v7[536862724] = 62194;
  v7[536862724] = 0x4000000;
  v7[536862725] = 62194;
  v7[536862725] = 0x4000000;
  v7[536862726] = 62194;
  v7[536862727] = -218103808;
  v7[536862728] = -202116109;
  Vector3f::Vector3f((Vector3f *const)(v5 + 80));
  v8 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  LegacyQueryExtents = (unsigned __int64)StaticNavMesh::GetLegacyQueryExtents(v8);
  if ( (char)(LegacyQueryExtents & 7) >= *(_BYTE *)((LegacyQueryExtents >> 3) + 0x7FFF8000)
    && *(_BYTE *)((LegacyQueryExtents >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((LegacyQueryExtents + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((LegacyQueryExtents + 11) & 7) >= *(_BYTE *)(((LegacyQueryExtents + 11) >> 3) + 0x7FFF8000) )
  {
    LegacyQueryExtents = __asan_report_load_n(LegacyQueryExtents, 12LL);
  }
  *(_QWORD *)(v5 + 112) = *(_QWORD *)LegacyQueryExtents;
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(LegacyQueryExtents + 8);
  if ( !DynamicNavMesh::MapPosition(
          this,
          (NavMeshPolyRef *)(v5 + 48),
          (Vector3f *)(v5 + 80),
          sourcePosition,
          (const Vector3f *)(v5 + 112),
          filter) )
    goto LABEL_7;
  NavMeshRaycastResult::NavMeshRaycastResult((NavMeshRaycastResult *const)(v5 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshQuery, v5 + 48);
  status = NavMeshQuery::Raycast(
             this->m_NavMeshQuery,
             *(_QWORD *)(v5 + 48),
             (const Vector3f *)(v5 + 80),
             targetPosition,
             filter,
             (NavMeshRaycastResult *)(v5 + 208),
             0LL,
             0LL,
             0);
  if ( NavMeshStatusFailed(status) )
  {
LABEL_7:
    DynamicNavMesh::InvalidateNavMeshHit(this, hit);
    result = 0;
  }
  else
  {
    *(Vector3f *)(v5 + 144) = Lerp((const Vector3f *)(v5 + 80), targetPosition, *(float *)(v5 + 208));
    Vector3f::Vector3f((Vector3f *const)(v5 + 176));
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_NavMeshQuery, targetPosition);
    NavMeshQuery::ProjectToPoly(
      this->m_NavMeshQuery,
      (Vector3f *)(v5 + 176),
      *(_QWORD *)(v5 + 232),
      (const Vector3f *)(v5 + 144));
    v11 = *(unsigned int *)(v5 + 208);
    blocked = *(float *)&v11 < 1.0;
    if ( ((unsigned __int8)hit & 7) >= *(_BYTE *)(((unsigned __int64)hit >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)hit >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&hit->position.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)hit + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&hit->position.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(hit, 12LL);
    }
    *(_QWORD *)&hit->position.x = *(_QWORD *)(v5 + 176);
    hit->position.z = *(float *)(v5 + 184);
    if ( (((unsigned __int8)hit + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&hit->normal >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&hit->normal >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&hit->normal.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)hit + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&hit->normal.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&hit->normal, 12LL);
    }
    hit->normal = *(Vector3f *)(v5 + 212);
    *(Vector3f *)((char *)&v11 - 8) = operator-(&hit->position, sourcePosition);
    v13 = v12;
    v14 = (__m128i)v11;
    *(_QWORD *)&inV.x = v13;
    LODWORD(inV.z) = v11;
    *(float *)v14.m128i_i32 = Magnitude(&inV);
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
    if ( *(_BYTE *)(((unsigned __int64)&hit->distance >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)hit + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hit->distance >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&hit->distance);
    }
    hit->distance = v15;
    PolyFlags = DynamicNavMesh::GetPolyFlags(this, *(_QWORD *)(v5 + 240));
    if ( *(_BYTE *)(((unsigned __int64)&hit->mask >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)hit + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hit->mask >> 3) + 0x7FFF8000) )
    {
      PolyFlags = (_DWORD)hit + 28;
      __asan_report_store4(&hit->mask);
    }
    hit->mask = PolyFlags;
    v17 = blocked;
    if ( *(_BYTE *)(((unsigned __int64)&hit->hit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)hit + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hit->hit >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&hit->hit);
    }
    hit->hit = v17;
    result = blocked;
  }
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1068: range 000000000CC978BA-000000000CC986BA
int __cdecl DynamicNavMesh::CalculatePolygonPath(
        DynamicNavMesh *const this,
        NavMeshPath *path,
        const Vector3f *sourcePosition,
        const Vector3f *targetPosition,
        const QueryFilter *filter,
        const Vector3f *sourceExtend,
        const Vector3f *targetExtend)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  int result; // eax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const Vector3f *v13; // rax
  double v14; // xmm2_8
  double v15; // xmm1_8
  const Vector3f *v16; // rax
  double v17; // xmm2_8
  double v18; // xmm1_8
  double z; // xmm5_8
  double y; // xmm4_8
  double x; // xmm3_8
  double v22; // xmm2_8
  double v23; // xmm1_8
  int PolygonCapacity; // r14d
  NavMeshPolyRef *PolygonPath; // rsi
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  NavMesh *NavMesh; // rax
  unsigned int TimeStamp; // edx
  __int64 v30; // rcx
  double v31; // xmm5_8
  double v32; // xmm4_8
  double v33; // xmm3_8
  double v34; // xmm2_8
  double v35; // xmm1_8
  unsigned __int64 v36; // rax
  NavMeshStatus status; // [rsp+38h] [rbp-158h]
  NavMeshStatus statusa; // [rsp+38h] [rbp-158h]
  NavMeshStatus status_0; // [rsp+3Ch] [rbp-154h]
  NavMeshQuery *query; // [rsp+40h] [rbp-150h]
  const Vector3f *ext; // [rsp+48h] [rbp-148h]
  NavMeshPolyRef lastPolyRef; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v48; // [rsp+60h] [rbp-130h] BYREF
  char v49[272]; // [rsp+80h] [rbp-110h] BYREF

  v7 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(224LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "6 48 4 17 polygonCount:1106 64 8 18 targetPolyRef:1087 96 8 18 sourcePolyRef:1097 128 12 20 targ"
                        "etMappedPos:1082 160 12 20 sourceMappedPos:1083 192 12 21 partialTargetPos:1150";
  *(_QWORD *)(v7 + 16) = DynamicNavMesh::CalculatePolygonPath;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -219020288;
  v9[536862725] = -219020288;
  v9[536862726] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshQuery, path);
  if ( !this->m_NavMeshQuery )
  {
    result = 0;
    goto LABEL_85;
  }
  if ( !IsFinite(sourcePosition) || !IsFinite(targetPosition) )
  {
    result = 0;
    goto LABEL_85;
  }
  Vector3f::Vector3f((Vector3f *const)(v7 + 128));
  Vector3f::Vector3f((Vector3f *const)(v7 + 160));
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMeshQuery, path);
  query = this->m_NavMeshQuery;
  v12 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  ext = StaticNavMesh::GetLegacyQueryExtents(v12);
  if ( targetExtend )
    v13 = targetExtend;
  else
    v13 = ext;
  NavMeshQuery::FindNearestPoly(query, targetPosition, v13, filter, (NavMeshPolyRef *)(v7 + 64), (Vector3f *)(v7 + 128));
  if ( *(_QWORD *)(v7 + 64) )
  {
    if ( sourceExtend )
      v16 = sourceExtend;
    else
      v16 = ext;
    NavMeshQuery::FindNearestPoly(
      query,
      sourcePosition,
      v16,
      filter,
      (NavMeshPolyRef *)(v7 + 96),
      (Vector3f *)(v7 + 160));
    if ( *(_QWORD *)(v7 + 96) )
    {
      *(_DWORD *)(v7 + 48) = 0;
      status = NavMeshQuery::CheckHasPathToTarget(query, *(_QWORD *)(v7 + 96), *(_QWORD *)(v7 + 64));
      if ( NavMeshStatusFailed(status) )
      {
        NavMeshPath::SetStatus(path, kPathInvalid);
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
          "CalculatePolygonPath",
          1112);
        if ( *(_BYTE *)(((unsigned __int64)&targetPosition->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)targetPosition + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&targetPosition->z >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&targetPosition->z);
        }
        z = targetPosition->z;
        if ( *(_BYTE *)(((unsigned __int64)&targetPosition->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)targetPosition + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&targetPosition->y >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&targetPosition->y);
        }
        y = targetPosition->y;
        if ( *(_BYTE *)(((unsigned __int64)targetPosition >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)targetPosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)targetPosition >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(targetPosition);
        }
        x = targetPosition->x;
        if ( *(_BYTE *)(((unsigned __int64)&sourcePosition->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)sourcePosition + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sourcePosition->z >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&sourcePosition->z);
        }
        v22 = sourcePosition->z;
        if ( *(_BYTE *)(((unsigned __int64)&sourcePosition->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)sourcePosition + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sourcePosition->y >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&sourcePosition->y);
        }
        v23 = sourcePosition->y;
        if ( *(_BYTE *)(((unsigned __int64)sourcePosition >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)sourcePosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sourcePosition >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(sourcePosition);
        }
        common::milog::MiLogStream::operator()(
          &v48,
          "[query path] sourcePoly not connect targetPoly.[%.4f,%.4f,%.4f]=>[%.4f,%.4f,%.4f], status=%#X",
          sourcePosition->x,
          v23,
          v22,
          x,
          y,
          z,
          status);
        common::milog::MiLogStream::~MiLogStream(&v48);
        result = 0;
      }
      else
      {
        statusa = NavMeshQuery::InitSlicedFindPath(
                    query,
                    *(_QWORD *)(v7 + 96),
                    *(_QWORD *)(v7 + 64),
                    (const Vector3f *)(v7 + 160),
                    (const Vector3f *)(v7 + 128),
                    filter);
        if ( !NavMeshStatusFailed(statusa) )
          statusa = NavMeshQuery::UpdateSlicedFindPath(query, 0xFFFF, 0LL);
        if ( !NavMeshStatusFailed(statusa) )
          statusa = NavMeshQuery::FinalizeSlicedFindPath(query, (int *)(v7 + 48));
        NavMeshPath::ReservePolygons(path, *(_DWORD *)(v7 + 48));
        if ( !NavMeshStatusFailed(statusa) )
        {
          PolygonCapacity = NavMeshPath::GetPolygonCapacity(path);
          PolygonPath = NavMeshPath::GetPolygonPath(path);
          statusa = NavMeshQuery::GetPath(query, PolygonPath, (int *)(v7 + 48), PolygonCapacity);
        }
        v26 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
        NavMesh = StaticNavMesh::GetNavMesh(v26);
        TimeStamp = NavMesh::GetTimeStamp(NavMesh);
        NavMeshPath::SetTimeStamp(path, TimeStamp);
        NavMeshPath::SetPolygonCount(path, *(_DWORD *)(v7 + 48));
        NavMeshPath::SetSourcePosition(path, (const Vector3f *)(v7 + 160));
        NavMeshPath::SetTargetPosition(path, (const Vector3f *)(v7 + 128));
        if ( NavMeshStatusFailed(statusa) || !*(_DWORD *)(v7 + 48) )
        {
          NavMeshPath::SetStatus(path, kPathInvalid);
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
            "CalculatePolygonPath",
            1134);
          v30 = *(unsigned int *)(v7 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&targetPosition->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)targetPosition + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&targetPosition->z >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&targetPosition->z);
          }
          v31 = targetPosition->z;
          if ( *(_BYTE *)(((unsigned __int64)&targetPosition->y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)targetPosition + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&targetPosition->y >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&targetPosition->y);
          }
          v32 = targetPosition->y;
          if ( *(_BYTE *)(((unsigned __int64)targetPosition >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)targetPosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)targetPosition >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(targetPosition);
          }
          v33 = targetPosition->x;
          if ( *(_BYTE *)(((unsigned __int64)&sourcePosition->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)sourcePosition + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sourcePosition->z >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&sourcePosition->z);
          }
          v34 = sourcePosition->z;
          if ( *(_BYTE *)(((unsigned __int64)&sourcePosition->y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)sourcePosition + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sourcePosition->y >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&sourcePosition->y);
          }
          v35 = sourcePosition->y;
          if ( *(_BYTE *)(((unsigned __int64)sourcePosition >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)sourcePosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sourcePosition >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(sourcePosition);
          }
          common::milog::MiLogStream::operator()(
            &v48,
            "[query path] kPathInvalid [%.4f,%.4f,%.4f]=>[%.4f,%.4f,%.4f], status=%#X, polygonCount=%d",
            sourcePosition->x,
            v35,
            v34,
            v33,
            v32,
            v31,
            statusa,
            v30);
          common::milog::MiLogStream::~MiLogStream(&v48);
          result = 0;
        }
        else
        {
          if ( NavMeshStatusDetail(statusa, 0x40u) )
          {
            v36 = (unsigned __int64)&NavMeshPath::GetPolygonPath(path)[*(int *)(v7 + 48) - 1];
            if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
              v36 = __asan_report_load8(v36, 64LL);
            lastPolyRef = *(_QWORD *)v36;
            Vector3f::Vector3f((Vector3f *const)(v7 + 192));
            status_0 = NavMeshQuery::ClosestPointOnPoly(
                         query,
                         lastPolyRef,
                         (const Vector3f *)(v7 + 128),
                         (Vector3f *)(v7 + 192));
            if ( NavMeshStatusFailed(status_0) )
            {
              NavMeshPath::SetStatus(path, kPathInvalid);
              result = 0;
              goto LABEL_85;
            }
            NavMeshPath::SetStatus(path, kPathPartial);
            NavMeshPath::SetTargetPosition(path, (const Vector3f *)(v7 + 192));
            if ( NavMeshStatusDetail(status_0, 0x20u) )
              NavMeshPath::SetTimeStamp(path, 0);
          }
          else
          {
            NavMeshPath::SetStatus(path, kPathComplete);
          }
          result = *(_DWORD *)(v7 + 48);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "CalculatePolygonPath",
        1103);
      if ( *(_BYTE *)(((unsigned __int64)&sourcePosition->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sourcePosition + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sourcePosition->z >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&sourcePosition->z);
      }
      v17 = sourcePosition->z;
      if ( *(_BYTE *)(((unsigned __int64)&sourcePosition->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sourcePosition + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sourcePosition->y >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&sourcePosition->y);
      }
      v18 = sourcePosition->y;
      if ( *(_BYTE *)(((unsigned __int64)sourcePosition >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)sourcePosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sourcePosition >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(sourcePosition);
      }
      common::milog::MiLogStream::operator()(
        &v48,
        "[query path] source[%.4f,%.4f,%.4f] pos is invalid.",
        sourcePosition->x,
        v18,
        v17);
      common::milog::MiLogStream::~MiLogStream(&v48);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "CalculatePolygonPath",
      1093);
    if ( *(_BYTE *)(((unsigned __int64)&targetPosition->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)targetPosition + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&targetPosition->z >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&targetPosition->z);
    }
    v14 = targetPosition->z;
    if ( *(_BYTE *)(((unsigned __int64)&targetPosition->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)targetPosition + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&targetPosition->y >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&targetPosition->y);
    }
    v15 = targetPosition->y;
    if ( *(_BYTE *)(((unsigned __int64)targetPosition >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)targetPosition & 7) + 3) >= *(_BYTE *)(((unsigned __int64)targetPosition >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(targetPosition);
    }
    common::milog::MiLogStream::operator()(
      &v48,
      "[query path] target[%.4f,%.4f,%.4f] pos is invalid.",
      targetPosition->x,
      v15,
      v14);
    common::milog::MiLogStream::~MiLogStream(&v48);
    result = 0;
  }
LABEL_85:
  if ( v49 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1174: range 000000000CC986BC-000000000CC98D5F
int __cdecl DynamicNavMesh::CalculatePathCorners(
        const DynamicNavMesh *const this,
        Vector3f *corners,
        int maxCorners,
        const NavMeshPath *path)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v8; // r14d
  void *v9; // rsp
  __int64 v10; // rax
  void *v11; // rsp
  size_t v12; // rsi
  __int64 v13; // rax
  NavMeshPolyRef *v14; // r15
  unsigned __int8 *v15; // r14
  const NavMeshPolyRef *PolygonPath; // rax
  const NavMeshQuery *v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-1C0h] BYREF
  char *v20; // [rsp+8h] [rbp-1B8h]
  const NavMeshPath *patha; // [rsp+10h] [rbp-1B0h]
  int pathSize; // [rsp+18h] [rbp-1A8h]
  int maxCornersa; // [rsp+1Ch] [rbp-1A4h] BYREF
  Vector3f *cornersa; // [rsp+20h] [rbp-1A0h]
  const DynamicNavMesh *thisa; // [rsp+28h] [rbp-198h]
  NavMeshStatus result; // [rsp+34h] [rbp-18Ch]
  void *ptr_; // [rsp+38h] [rbp-188h]
  void *ptr__0; // [rsp+40h] [rbp-180h]
  size_t size_; // [rsp+48h] [rbp-178h]
  size_t alignment_; // [rsp+50h] [rbp-170h]
  size_t kMAX_TEMP_STACK_SIZE; // [rsp+58h] [rbp-168h]
  size_t allocaSize_; // [rsp+60h] [rbp-160h]
  size_t size__0; // [rsp+68h] [rbp-158h]
  size_t alignment__0; // [rsp+70h] [rbp-150h]
  size_t kMAX_TEMP_STACK_SIZE_0; // [rsp+78h] [rbp-148h]
  size_t allocaSize__0; // [rsp+80h] [rbp-140h]
  const NavMeshQuery *query; // [rsp+88h] [rbp-138h]
  char v38[256]; // [rsp+90h] [rbp-130h] BYREF
  char v39[48]; // [rsp+190h] [rbp-30h] BYREF

  thisa = this;
  cornersa = corners;
  maxCornersa = maxCorners;
  patha = path;
  v4 = (unsigned __int64)v38;
  v20 = v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 16 cornerCount:1178 64 8 9 refs:1182 96 8 18 autoFree_refs:1183 128 8 10 flags:1184 160 8"
                        " 19 autoFree_flags:1185 192 12 14 sourcePos:1180 224 12 14 targetPos:1181";
  *(_QWORD *)(v4 + 16) = DynamicNavMesh::CalculatePathCorners;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -219020288;
  v6[536862727] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMeshQuery >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_NavMeshQuery, corners);
  if ( !thisa->m_NavMeshQuery || !cornersa || maxCornersa <= 1 || NavMeshPath::GetPolygonCount(patha) <= 0 )
  {
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = 0;
    *(Vector3f *)(v4 + 192) = NavMeshPath::GetSourcePosition(patha);
    *(Vector3f *)(v4 + 224) = NavMeshPath::GetTargetPosition(patha);
    AutoFree::AutoFree((AutoFree *const)(v4 + 96));
    ptr_ = 0LL;
    size_ = 8LL * maxCornersa;
    alignment_ = GetTypeAlignmentFromPointer<unsigned long long>((unsigned __int64 *const *)(v4 + 64));
    if ( size_ )
    {
      kMAX_TEMP_STACK_SIZE = 2000LL;
      allocaSize_ = size_ + alignment_ - 1;
      if ( allocaSize_ <= 0x7CF )
      {
        v9 = alloca(16 * ((32 - (allocaSize_ & 0x1F) + 64 + allocaSize_ + 39) / 0x10));
        __asan_alloca_poison((((unsigned __int64)&maxCornersa + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32, allocaSize_);
        ptr_ = (void *)((((unsigned __int64)&maxCornersa + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32);
      }
      if ( !ptr_ )
      {
        ptr_ = malloc_internal(
                 size_,
                 alignment_,
                 kAllocateOptionNone,
                 "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                 1183);
        AutoFree::Init((AutoFree *const)(v4 + 96), ptr_);
      }
    }
    v10 = (__int64)AlignPtr(ptr_, alignment_);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8();
    *(_QWORD *)(v4 + 64) = v10;
    AutoFree::AutoFree((AutoFree *const)(v4 + 160));
    ptr__0 = 0LL;
    size__0 = maxCornersa;
    alignment__0 = GetTypeAlignmentFromPointer<unsigned char>((unsigned __int8 *const *)(v4 + 128));
    if ( size__0 )
    {
      kMAX_TEMP_STACK_SIZE_0 = 2000LL;
      allocaSize__0 = size__0 + alignment__0 - 1;
      if ( allocaSize__0 <= 0x7CF )
      {
        v11 = alloca(16 * ((32 - (allocaSize__0 & 0x1F) + 64 + allocaSize__0 + 39) / 0x10));
        __asan_alloca_poison((((unsigned __int64)&maxCornersa + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32, allocaSize__0);
        ptr__0 = (void *)((((unsigned __int64)&maxCornersa + 3) & 0xFFFFFFFFFFFFFFE0LL) + 32);
      }
      if ( !ptr__0 )
      {
        ptr__0 = malloc_internal(
                   size__0,
                   alignment__0,
                   kAllocateOptionNone,
                   "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                   1185);
        AutoFree::Init((AutoFree *const)(v4 + 160), ptr__0);
      }
    }
    v12 = alignment__0;
    v13 = (__int64)AlignPtr(ptr__0, alignment__0);
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      v13 = __asan_report_store8();
    *(_QWORD *)(v4 + 128) = v13;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_NavMeshQuery >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->m_NavMeshQuery, v12);
    query = thisa->m_NavMeshQuery;
    v14 = *(NavMeshPolyRef **)(v4 + 64);
    v15 = *(unsigned __int8 **)(v4 + 128);
    pathSize = NavMeshPath::GetPolygonCount(patha);
    PolygonPath = NavMeshPath::GetPolygonPath(patha);
    v17 = query;
    result = NavMeshQuery::FindStraightPath(
               query,
               (const Vector3f *)(v4 + 192),
               (const Vector3f *)(v4 + 224),
               PolygonPath,
               pathSize,
               cornersa,
               v15,
               v14,
               (int *)(v4 + 48),
               maxCornersa);
    if ( maxCornersa < *(_DWORD *)(v4 + 48) )
    {
      __asan_handle_no_return(v17);
      __assert_fail(
        "cornerCount <= maxCorners",
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        0x4A8u,
        "int DynamicNavMesh::CalculatePathCorners(Vector3f*, int, const NavMeshPath&) const");
    }
    if ( NavMeshStatusFailed(result) )
      v8 = 0;
    else
      v8 = *(_DWORD *)(v4 + 48);
    AutoFree::~AutoFree((AutoFree *const)(v4 + 160));
    AutoFree::~AutoFree((AutoFree *const)(v4 + 96));
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  __asan_allocas_unpoison(&v19, v39);
  return v8;
};

// Line 1251: range 000000000CC98D60-000000000CC98F94
void __cdecl DynamicNavMesh::StartUpdateObstacleTimer(DynamicNavMesh *const this)
{
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned int (__fastcall *v5)(std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, _QWORD, const char *, const char *, __int64, _QWORD, __int64); // r12
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 ID; // rdx
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<PathfindingTimer>(&this->obstacle_update_timer_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "StartUpdateObstacleTimer",
      1254);
    common::milog::MiLogStream::operator()(&v8, "obstacle_update_timer_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v1 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    if ( !common::tools::MiTimer::isActive(v1) )
    {
      v2 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
      v3 = v2;
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2, 0LL);
      v4 = (unsigned __int64)(v3->_vptr_MiTimer + 3);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(v3->_vptr_MiTimer + 3, 0LL);
      v5 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, _QWORD, const char *, const char *, __int64, _QWORD, __int64))v4;
      if ( std::operator!=<StaticNavMesh>(&this->m_StaticNavMesh, 0LL) )
      {
        v6 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
        ID = StaticNavMesh::GetID(v6);
      }
      else
      {
        ID = 0LL;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->m_UniqueToken);
      }
      if ( v5(
             v3,
             1LL,
             0LL,
             "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
             "StartUpdateObstacleTimer",
             1260LL,
             this->m_UniqueToken,
             ID) )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
          "StartUpdateObstacleTimer",
          1262);
        common::milog::MiLogStream::operator()(&v8, "startMs failed");
        common::milog::MiLogStream::~MiLogStream(&v8);
      }
    }
  }
};

// Line 1269: range 000000000CC98F96-000000000CC99142
void __cdecl DynamicNavMesh::StopUpdateObstacleTimer(DynamicNavMesh *const this)
{
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rdi
  common::milog::MiLogStream v2; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<PathfindingTimer>(&this->obstacle_update_timer_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "StopUpdateObstacleTimer",
      1272);
    common::milog::MiLogStream::operator()(&v2, "obstacle_update_timer_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
  else
  {
    v1 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    common::tools::MiTimer::cancel(v1);
  }
};

// Line 1286: range 000000000CC99144-000000000CC99394
void __cdecl DynamicNavMesh::InitTimers(DynamicNavMesh *const this)
{
  DynamicNavMesh **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  DynamicNavMesh **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  DynamicNavMesh *v5; // [rsp+18h] [rbp-88h] BYREF
  void (*__f)(DynamicNavMesh *, unsigned __int64); // [rsp+20h] [rbp-80h] BYREF
  __int64 v7; // [rsp+28h] [rbp-78h]
  std::_Bind<void (DynamicNavMesh::*(DynamicNavMesh*,std::_Placeholder<1>))(long unsigned int)> __args_0; // [rsp+30h] [rbp-70h] BYREF
  common::milog::MiLogStream v9; // [rsp+60h] [rbp-40h] BYREF

  v5 = this;
  __f = (void (*)(DynamicNavMesh *, unsigned __int64))DynamicNavMesh::ProcUpdateNavMeshObstacleInTimer;
  v7 = 0LL;
  std::bind<void (DynamicNavMesh::*)(unsigned long),DynamicNavMesh*,std::_Placeholder<1> const&>(
    (std::_Bind_helper<false,void (DynamicNavMesh::*)(long unsigned int),DynamicNavMesh*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
    &__f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  common::tools::perf::make_shared<PathfindingTimer,std::_Bind<void (DynamicNavMesh::*)(unsigned long) ()(DynamicNavMesh*,std::_Placeholder<1>)>>(
    (common::tools::perf::allocator<PathfindingTimer,PathfindingTimer> *)&__args_0,
    (std::_Bind<void (DynamicNavMesh::*(DynamicNavMesh*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
  std::shared_ptr<PathfindingTimer>::operator=(
    &this->obstacle_update_timer_ptr,
    (std::shared_ptr<PathfindingTimer> *)&__args_0);
  std::shared_ptr<PathfindingTimer>::~shared_ptr((std::shared_ptr<PathfindingTimer> *const)&__args_0);
  if ( std::operator==<PathfindingTimer>(&this->obstacle_update_timer_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "InitTimers",
      1290);
    common::milog::MiLogStream::operator()(&v9, "create PathfindingTimer failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = this;
    __f = (void (*)(DynamicNavMesh *, unsigned __int64))DynamicNavMesh::ProcDeleteSelfInTimer;
    v7 = 0LL;
    std::bind<void (DynamicNavMesh::*)(unsigned long),DynamicNavMesh*,std::_Placeholder<1> const&>(
      (std::_Bind_helper<false,void (DynamicNavMesh::*)(long unsigned int),DynamicNavMesh*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
      &__f,
      &v5,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v3,
      v4);
    common::tools::perf::make_shared<PathfindingTimer,std::_Bind<void (DynamicNavMesh::*)(unsigned long) ()(DynamicNavMesh*,std::_Placeholder<1>)>>(
      (common::tools::perf::allocator<PathfindingTimer,PathfindingTimer> *)&__args_0,
      (std::_Bind<void (DynamicNavMesh::*(DynamicNavMesh*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
    std::shared_ptr<PathfindingTimer>::operator=(
      &this->keep_alive_timer_ptr,
      (std::shared_ptr<PathfindingTimer> *)&__args_0);
    std::shared_ptr<PathfindingTimer>::~shared_ptr((std::shared_ptr<PathfindingTimer> *const)&__args_0);
    if ( std::operator==<PathfindingTimer>(&this->keep_alive_timer_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "InitTimers",
        1296);
      common::milog::MiLogStream::operator()(&v9, "create PathfindingTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
  }
};

// Line 1313: range 000000000CC99396-000000000CC993E8
void __cdecl DynamicNavMesh::CancelTimers(DynamicNavMesh *const this)
{
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  v1 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  common::tools::MiTimer::cancel(v1);
  v2 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->keep_alive_timer_ptr);
  common::tools::MiTimer::cancel(v2);
  v3 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tps_stats_timer_ptr);
  common::tools::MiTimer::cancel(v3);
};

// Line 1320: range 000000000CC993EA-000000000CC99D08
void __cdecl DynamicNavMesh::ProcUpdateNavMeshObstacleInTimer(DynamicNavMesh *const this, uint64_t player_time_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  unsigned __int64 p_thread_index; // rdi
  unsigned __int64 v8; // rax
  int *v9; // rdx
  int v10; // r14d
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  DynamicUniqueTokenType m_UniqueToken; // r14d
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::size_type v13; // rax
  unsigned __int64 n; // rax
  NavMeshObstacle *v15; // rdi
  const Quaternionf *Rotation; // rdx
  float *p_w; // rax
  const Quaternionf *v18; // rdx
  float *p_z; // rax
  const Quaternionf *v20; // rdx
  float *p_y; // rax
  const Quaternionf *v22; // rax
  float *p_x; // rdx
  const Vector3f *Position; // rdx
  float *v25; // rax
  const Vector3f *v26; // rdx
  float *v27; // rax
  const Vector3f *v28; // rax
  float *v29; // rdx
  unsigned int v30; // r14d
  __int64 Handle; // rcx
  unsigned int v32; // esi
  __int64 v33; // rcx
  NavMeshObstacleShape Shape; // [rsp+Ch] [rbp-164h]
  double v35; // [rsp+10h] [rbp-160h]
  double v36; // [rsp+18h] [rbp-158h]
  double v37; // [rsp+20h] [rbp-150h]
  double x; // [rsp+28h] [rbp-148h]
  double v39; // [rsp+30h] [rbp-140h]
  double v40; // [rsp+38h] [rbp-138h]
  double v41; // [rsp+40h] [rbp-130h]
  double y; // [rsp+48h] [rbp-128h]
  double z; // [rsp+50h] [rbp-120h]
  double w; // [rsp+58h] [rbp-118h]
  DynamicNavMesh *thisa; // [rsp+68h] [rbp-108h]
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __for_begin; // [rsp+78h] [rbp-F8h] BYREF
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> >::iterator __for_end; // [rsp+80h] [rbp-F0h] BYREF
  vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16> > *__for_range; // [rsp+88h] [rbp-E8h]
  NavMeshObstacle *obstacle; // [rsp+90h] [rbp-E0h]
  Vector3f v50; // [rsp+9Ch] [rbp-D4h]
  Vector3f v51; // [rsp+A8h] [rbp-C8h]
  Vector3f v52; // [rsp+B4h] [rbp-BCh]
  common::milog::MiLogStream v53; // [rsp+C0h] [rbp-B0h] BYREF
  char v54[144]; // [rsp+E0h] [rbp-90h] BYREF
  Vector3f WorldExtents; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v56; // 0:xmm0_8.8,8:xmm1_4.4
  Vector3f v57; // 0:xmm0_8.8,8:xmm1_4.4

  thisa = this;
  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (DynamicNavMesh *const)96;
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 7 ob:1323";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::ProcUpdateNavMeshObstacleInTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE(this);
  v6 = (_BYTE *)v5;
  p_thread_index = v5 & 7;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)p_thread_index >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    p_thread_index = v5;
    __asan_report_load1(v5);
  }
  if ( !*v6 )
    goto LABEL_12;
  v8 = ZTWN11ThreadLocal17work_thread_indexE(p_thread_index);
  v9 = (int *)v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v8);
  v10 = *v9;
  p_thread_index = (unsigned __int64)thisa;
  v11 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)thisa);
  if ( *(_BYTE *)(((unsigned __int64)&v11->thread_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->thread_index >> 3) + 0x7FFF8000) <= 3 )
  {
    p_thread_index = (unsigned __int64)&v11->thread_index;
    __asan_report_load4(&v11->thread_index);
  }
  if ( v10 != v11->thread_index )
  {
LABEL_12:
    __asan_handle_no_return(p_thread_index);
    __assert_fail(
      "ThreadLocal::is_in_work_thread && ThreadLocal::work_thread_index == obstacle_update_timer_ptr->thread_index",
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      0x529u,
      "void DynamicNavMesh::ProcUpdateNavMeshObstacleInTimer(uint64_t)");
  }
  common::milog::MiLogStream::create(
    &v53,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
    "ProcUpdateNavMeshObstacleInTimer",
    1322);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_UniqueToken >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->m_UniqueToken);
  }
  m_UniqueToken = thisa->m_UniqueToken;
  v13 = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::size(&thisa->m_ObstacleInfo);
  common::milog::MiLogStream::operator()(&v53, "[Obstacle] size = %lu, uid=%u", v13, m_UniqueToken);
  common::milog::MiLogStream::~MiLogStream(&v53);
  __for_range = &thisa->m_ObstacleInfo;
  __for_begin._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::begin(&thisa->m_ObstacleInfo)._M_current;
  __for_end._M_current = vector_map<int,DynamicNavMesh::NavMeshObstacleInfo,std::less<int>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>::end(&thisa->m_ObstacleInfo)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>(
            &__for_begin,
            &__for_end) )
  {
    n = (unsigned __int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator*(&__for_begin);
    if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 24LL);
    }
    v15 = *(NavMeshObstacle **)(n + 8);
    *(_QWORD *)(v2 + 32) = *(_QWORD *)n;
    *(_QWORD *)(v2 + 40) = v15;
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(n + 16);
    obstacle = *(NavMeshObstacle **)(v2 + 40);
    if ( obstacle )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "ProcUpdateNavMeshObstacleInTimer",
        1328);
      Rotation = NavMeshObstacle::GetRotation(obstacle);
      p_w = &Rotation->w;
      if ( *(_BYTE *)(((unsigned __int64)p_w >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_w & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_w >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_w);
      }
      w = Rotation->w;
      v18 = NavMeshObstacle::GetRotation(obstacle);
      p_z = &v18->z;
      if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_z);
      }
      z = v18->z;
      v20 = NavMeshObstacle::GetRotation(obstacle);
      p_y = &v20->y;
      if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_y);
      }
      y = v20->y;
      v22 = NavMeshObstacle::GetRotation(obstacle);
      p_x = &v22->x;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      v41 = *p_x;
      WorldExtents = NavMeshObstacle::GetWorldExtents(obstacle);
      v52 = WorldExtents;
      v40 = WorldExtents.z;
      v56 = NavMeshObstacle::GetWorldExtents(obstacle);
      v51 = v56;
      v39 = v56.y;
      v57 = NavMeshObstacle::GetWorldExtents(obstacle);
      v50 = v57;
      x = v57.x;
      Position = NavMeshObstacle::GetPosition(obstacle);
      v25 = &Position->z;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      v37 = Position->z;
      v26 = NavMeshObstacle::GetPosition(obstacle);
      v27 = &v26->y;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v27);
      }
      v36 = v26->y;
      v28 = NavMeshObstacle::GetPosition(obstacle);
      v29 = &v28->x;
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v28);
      }
      v35 = *v29;
      Shape = NavMeshObstacle::GetShape(obstacle);
      v30 = *(_DWORD *)(v2 + 48);
      Handle = (unsigned int)NavMeshObstacle::GetHandle(obstacle);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(
        &v53,
        "[Obstacle] uid=%u id=%d|carvinghandle=%d|shape=%d, center=[%.4f,%.4f,%.4f], extends=[%.4f,%.4f,%.4f], rotation=["
        "%.4f,%.4f,%.4f,%.4f] ",
        thisa->m_UniqueToken,
        Handle,
        v30,
        (unsigned int)Shape,
        v35,
        v36,
        v37,
        x,
        v39,
        v40,
        v41,
        y,
        *(_QWORD *)&z,
        *(_QWORD *)&w);
      common::milog::MiLogStream::~MiLogStream(&v53);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        "ProcUpdateNavMeshObstacleInTimer",
        1340);
      v32 = *(_DWORD *)(v2 + 48);
      v33 = *(unsigned int *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->m_UniqueToken >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->m_UniqueToken);
      }
      common::milog::MiLogStream::operator()(
        &v53,
        "[Obstacle] uid=%u id=%d|carvinghandle=%d, delete.",
        thisa->m_UniqueToken,
        v33,
        v32);
      common::milog::MiLogStream::~MiLogStream(&v53);
    }
    __gnu_cxx::__normal_iterator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo> *,std::vector<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,stl_allocator<std::pair<int,DynamicNavMesh::NavMeshObstacleInfo>,16>>>::operator++(&__for_begin);
  }
  DynamicNavMesh::UpdateCarvingImmediately(thisa);
  if ( v54 == (char *)v2 )
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

// Line 1347: range 000000000CC99D0A-000000000CC9A077
void __fastcall DynamicNavMesh::RefreshAliveTimer(DynamicNavMesh *const this, uint64_t delay_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r13
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, __int64); // r14
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 ID; // rdx
  __int64 m_UniqueToken; // rsi
  __int64 v14; // rax
  __int64 *v15; // rax
  unsigned int retcode; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 13 delay_ms:1346";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::RefreshAliveTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = delay_ms;
  v5 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->keep_alive_timer_ptr);
  if ( common::tools::MiTimer::isActive(v5) )
  {
    v6 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->keep_alive_timer_ptr);
    common::tools::MiTimer::cancel(v6);
  }
  v7 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->keep_alive_timer_ptr);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v7, delay_ms);
  v9 = (unsigned __int64)(v8->_vptr_MiTimer + 3);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(v8->_vptr_MiTimer + 3, delay_ms);
  v10 = *(__int64 (__fastcall **)(std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, __int64))v9;
  if ( std::operator!=<StaticNavMesh>(&this->m_StaticNavMesh, 0LL) )
  {
    v11 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    ID = StaticNavMesh::GetID(v11);
  }
  else
  {
    ID = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_UniqueToken);
  }
  m_UniqueToken = this->m_UniqueToken;
  if ( *(char *)(((unsigned __int64)&this->is_editor >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_editor);
  if ( this->is_editor )
  {
    LODWORD(v14) = 10800000;
  }
  else
  {
    v15 = (__int64 *)(v2 + 32);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      v15 = (__int64 *)__asan_report_load8(v2 + 32, m_UniqueToken);
    v14 = *v15;
  }
  retcode = v10(
              v8,
              (unsigned int)v14,
              0LL,
              "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
              "RefreshAliveTimer",
              1352LL,
              m_UniqueToken,
              ID);
  if ( retcode )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "RefreshAliveTimer",
      1355);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    common::milog::MiLogStream::operator()(
      &v17,
      "can't start keep_alive_timer, uid:%u, error:%d",
      this->m_UniqueToken,
      retcode);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1360: range 000000000CC9A078-000000000CC9A116
void __cdecl DynamicNavMesh::ProcDeleteSelfInTimer(DynamicNavMesh *const this, uint64_t time_ms)
{
  NavMeshManager *m_MgrPtr; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->m_MgrPtr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_MgrPtr, time_ms);
  if ( this->m_MgrPtr )
  {
    m_MgrPtr = this->m_MgrPtr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    NavMeshManager::RemoveDynamicNavMesh(m_MgrPtr, this->m_UniqueToken);
  }
};

// Line 1366: range 000000000CC9A118-000000000CC9A65F
void __cdecl DynamicNavMesh::ProcUpdateNavmeshTpsStats(DynamicNavMesh *const this, uint64_t time_ms)
{
  unsigned __int64 v2; // rax
  _BYTE *v3; // rdx
  std::shared_ptr<PathfindingTimer> *p_tps_stats_timer_ptr; // rdi
  unsigned __int64 v5; // rax
  int *v6; // rdx
  int v7; // ebx
  std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  char v9; // dl
  float v10; // xmm0_4
  DynamicUniqueTokenType m_UniqueToken; // r12d
  __int64 v12; // rbx
  __int64 v13; // rax
  double v14; // [rsp+8h] [rbp-A8h]
  float query_path_tps; // [rsp+28h] [rbp-88h]
  __int64 now_time; // [rsp+30h] [rbp-80h]
  __int64 time_stamp; // [rsp+38h] [rbp-78h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-70h] BYREF
  std::string v20; // [rsp+60h] [rbp-50h] BYREF
  std::string v21; // [rsp+80h] [rbp-30h] BYREF

  v2 = ZTWN11ThreadLocal17is_in_work_threadE(this);
  v3 = (_BYTE *)v2;
  p_tps_stats_timer_ptr = (std::shared_ptr<PathfindingTimer> *)(v2 & 7);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)p_tps_stats_timer_ptr >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    p_tps_stats_timer_ptr = (std::shared_ptr<PathfindingTimer> *)v2;
    __asan_report_load1(v2);
  }
  if ( !*v3 )
    goto LABEL_9;
  v5 = ZTWN11ThreadLocal17work_thread_indexE(p_tps_stats_timer_ptr);
  v6 = (int *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v5);
  v7 = *v6;
  p_tps_stats_timer_ptr = &this->tps_stats_timer_ptr;
  v8 = std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PathfindingTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tps_stats_timer_ptr);
  v9 = *(_BYTE *)(((unsigned __int64)&v8->thread_index >> 3) + 0x7FFF8000);
  LOBYTE(time_ms) = v9 != 0;
  if ( v9 != 0 && v9 <= 3 )
  {
    p_tps_stats_timer_ptr = (std::shared_ptr<PathfindingTimer> *)&v8->thread_index;
    __asan_report_load4(&v8->thread_index);
  }
  if ( v7 != v8->thread_index )
  {
LABEL_9:
    __asan_handle_no_return(p_tps_stats_timer_ptr);
    __assert_fail(
      "ThreadLocal::is_in_work_thread && ThreadLocal::work_thread_index == tps_stats_timer_ptr->thread_index",
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      0x557u,
      "void DynamicNavMesh::ProcUpdateNavmeshTpsStats(uint64_t)");
  }
  now_time = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->stats.last_stats_time >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->stats.last_stats_time, time_ms);
  time_stamp = now_time - this->stats.last_stats_time;
  if ( time_stamp > 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->stats >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stats >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->stats);
    }
    query_path_tps = (float)(int)this->stats.sum_query_path_req / (float)(int)time_stamp;
    if ( this->stats.sum_query_path_req )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->stats.success_query_path_req_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stats.success_query_path_req_count >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->stats.success_query_path_req_count);
      }
      v10 = (float)(100.0 * (float)(int)this->stats.success_query_path_req_count)
          / (float)(int)this->stats.sum_query_path_req;
    }
    else
    {
      v10 = 100.0;
    }
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      "ProcUpdateNavmeshTpsStats",
      1374);
    v14 = v10;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_UniqueToken >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_UniqueToken);
    }
    m_UniqueToken = this->m_UniqueToken;
    common::tools::TimeUtils::getStrByTime[abi:cxx11](&v21, now_time);
    v12 = std::string::c_str(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&this->stats.last_stats_time >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->stats.last_stats_time, now_time);
    common::tools::TimeUtils::getStrByTime[abi:cxx11](&v20, this->stats.last_stats_time);
    v13 = std::string::c_str(&v20);
    common::milog::MiLogStream::operator()(
      &v19,
      "[%s --- %s][%lus]uid query_path_tps success_percent,%u,%f/s,%f%%",
      v13,
      v12,
      time_stamp,
      m_UniqueToken,
      query_path_tps,
      v14);
    std::string::~string(&v20);
    std::string::~string(&v21);
    common::milog::MiLogStream::~MiLogStream(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->stats.last_stats_time >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->stats.last_stats_time = now_time;
    if ( *(_BYTE *)(((unsigned __int64)&this->stats >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stats >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->stats);
    }
    this->stats.sum_query_path_req = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->stats.success_query_path_req_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stats.success_query_path_req_count >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->stats.success_query_path_req_count);
    }
    this->stats.success_query_path_req_count = 0;
  }
};

// Line 1390: range 000000000CC9A660-000000000CC9A843
DynamicSurfaceInfo *__fastcall DynamicNavMesh::CreateSurfaceInfo(DynamicNavMesh *const this, SurfaceIDType surfaceID)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  NavMesh *NavMesh; // rax
  DynamicSurfaceInfo *result; // rax
  DynamicSurfaceInfo *v8; // r14
  std::pair<int,DynamicSurfaceInfo*> v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 2 14 surfaceID:1389 64 8 16 surfaceInfo:1396";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::CreateSurfaceInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -202116352;
  *(_WORD *)(v2 + 48) = surfaceID;
  v5 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v5);
  if ( NavMesh::GetSurfaceSettings(NavMesh, *(_WORD *)(v2 + 48)) )
  {
    v8 = (DynamicSurfaceInfo *)operator new(
                                 0x38uLL,
                                 0x10uLL,
                                 "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
                                 1396);
    DynamicSurfaceInfo::DynamicSurfaceInfo(v8);
    *(_QWORD *)(v2 + 64) = v8;
    MinMaxAABB::Init(*(MinMaxAABB *const *)(v2 + 64));
    std::pair<int,DynamicSurfaceInfo *>::pair<unsigned short &,DynamicSurfaceInfo *&,true>(
      &v9,
      (unsigned __int16 *)(v2 + 48),
      (DynamicSurfaceInfo **)(v2 + 64));
    vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::insert(
      &this->m_DynamicNavMeshSurface,
      &v9);
    result = *(DynamicSurfaceInfo **)(v2 + 64);
  }
  else
  {
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
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
  return result;
};

// Line 1403: range 000000000CC9A844-000000000CC9AC3E
const NavMeshTile *__cdecl DynamicNavMesh::GetTile(
        const DynamicNavMesh *const this,
        SurfaceIDType surfaceID,
        int tileDataIndex)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  const NavMeshTile *result; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  NavMesh *NavMesh; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  NavMesh *v15; // r14
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v16; // rdx
  TileLookUpData *p_second; // rax
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type v19; // [rsp+12h] [rbp-BEh] BYREF
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type v20; // [rsp+14h] [rbp-BCh] BYREF
  DynamicSurfaceInfo *surfaceInfo; // [rsp+18h] [rbp-B8h]
  const NavMeshTileData *sourceData; // [rsp+20h] [rbp-B0h]
  const NavMeshDataHeader *header; // [rsp+28h] [rbp-A8h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+30h] [rbp-A0h]
  __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+38h] [rbp-98h] BYREF
  char v26[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 14 surfaceIt:1404 64 8 17 sourceTileIt:1424";
  *(_QWORD *)(v3 + 16) = DynamicNavMesh::GetTile;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  v20 = surfaceID;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator *)(v3 + 32) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(&this->m_DynamicNavMeshSurface, &v20);
  __rhs._M_current = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_DynamicNavMeshSurface)._M_current;
  if ( !__gnu_cxx::operator!=<std::pair<int,DynamicSurfaceInfo *> const*,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v3 + 32),
          &__rhs) )
    goto LABEL_15;
  v6 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> const*,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6 + 8, &__rhs);
  surfaceInfo = *(DynamicSurfaceInfo **)(v6 + 8);
  v19 = tileDataIndex;
  *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v3 + 64) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find(&surfaceInfo->m_NavMeshTile, &v19);
  __rhs._M_current = (const std::pair<int,DynamicSurfaceInfo*> *)vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&surfaceInfo->m_NavMeshTile)._M_current;
  if ( __gnu_cxx::operator!=<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v3 + 64),
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)&__rhs) )
  {
    v7 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7 + 8, &__rhs);
    if ( *(_QWORD *)(v7 + 8) )
    {
      v8 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8 + 8, &__rhs);
      v9 = NavMeshPolyRefHelper::DecodePolyIdTile(*(_QWORD *)(v8 + 8));
      result = FreeList<NavMeshTile,true>::operator[](&this->m_tiles, v9);
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
LABEL_15:
    v11 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    sourceData = StaticNavMesh::GetSourceTileData(v11, surfaceID, tileDataIndex);
    header = (const NavMeshDataHeader *)dynamic_array<unsigned char,false,1ul>::begin(&sourceData->m_MeshData);
    v12 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    NavMesh = StaticNavMesh::GetNavMesh(v12);
    lut = NavMesh::GetTileLUT(NavMesh);
    __rhs._M_current = (const std::pair<int,DynamicSurfaceInfo*> *)std::make_pair<int const&,int const&>(
                                                                     &header->x,
                                                                     &header->y);
    *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v3 + 64) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)&__rhs);
    __rhs._M_current = (const std::pair<int,DynamicSurfaceInfo*> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
    if ( __gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
           (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v3 + 64),
           (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__rhs) )
    {
      v14 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
      v15 = StaticNavMesh::GetNavMesh(v14);
      v16 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v3 + 64));
      p_second = &v16->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = NavMesh::GetTile(v15, v16->second.tileNavMeshIndex);
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1432: range 000000000CC9AC40-000000000CC9B1AA
void __fastcall DynamicNavMesh::RestoreTile(
        DynamicNavMesh *const this,
        SurfaceIDType surfaceID,
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type tileIndex,
        int tileX,
        int tileY)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  NavMesh *NavMesh; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  NavMesh *v13; // r14
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v14; // rdx
  TileLookUpData *p_second; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >::pointer v16; // rdx
  CarveResultStatus *p_status; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  NavMesh *v19; // r15
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >::pointer v20; // rax
  char v21; // dl
  DynamicNavMesh *v22; // rsi
  SurfaceIDType v23; // r14
  __int64 v24; // rax
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type v28; // [rsp+2Ah] [rbp-136h] BYREF
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type v29; // [rsp+2Ch] [rbp-134h] BYREF
  const NavMeshTile *sourceTile; // [rsp+30h] [rbp-130h]
  DynamicSurfaceInfo *surfaceInfo; // [rsp+38h] [rbp-128h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+40h] [rbp-120h]
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+48h] [rbp-118h] BYREF
  char v34[272]; // [rsp+50h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 10 tileX:1431 48 4 10 tileY:1431 64 8 14 surfaceIt:1433 96 8 7 it:1439 128 8 17 sourceTil"
                        "eIt:1447 160 24 13 callback:1454";
  *(_QWORD *)(v5 + 16) = DynamicNavMesh::RestoreTile;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218103808;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 32) = tileX;
  *(_DWORD *)(v5 + 48) = tileY;
  v29 = surfaceID;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v5 + 64) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(&this->m_DynamicNavMeshSurface, &v29);
  __rhs._M_current = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_DynamicNavMeshSurface)._M_current;
  if ( !__gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
          (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v5 + 64),
          &__rhs) )
  {
    v8 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 8, &__rhs);
    surfaceInfo = *(DynamicSurfaceInfo **)(v8 + 8);
    v28 = tileIndex;
    *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v5 + 96) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find(&surfaceInfo->m_NavMeshTile, &v28);
    __rhs._M_current = (std::pair<int,DynamicSurfaceInfo*> *)vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&surfaceInfo->m_NavMeshTile)._M_current;
    if ( !__gnu_cxx::operator==<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v5 + 96),
            (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)&__rhs) )
    {
      v9 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 96));
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9 + 8, &__rhs);
      if ( *(_QWORD *)(v9 + 8) )
      {
        v10 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
        NavMesh = StaticNavMesh::GetNavMesh(v10);
        lut = NavMesh::GetTileLUT(NavMesh);
        __rhs._M_current = (std::pair<int,DynamicSurfaceInfo*> *)std::make_pair<int &,int &>(
                                                                   (int *)(v5 + 32),
                                                                   (int *)(v5 + 48));
        *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v5 + 128) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)&__rhs);
        sourceTile = 0LL;
        __rhs._M_current = (std::pair<int,DynamicSurfaceInfo*> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
        if ( __gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
               (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v5 + 128),
               (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__rhs) )
        {
          v12 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
          v13 = StaticNavMesh::GetNavMesh(v12);
          v14 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 128));
          p_second = &v14->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          sourceTile = NavMesh::GetTile(v13, v14->second.tileNavMeshIndex);
        }
        v16 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 96));
        p_status = &v16->second.status;
        if ( *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_status & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_status);
        }
        v16->second.status = kRestoreTile;
        v22 = this;
        DynamicTileCallback::DynamicTileCallback((DynamicTileCallback *const)(v5 + 160), this, surfaceInfo);
        v18 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
        v19 = StaticNavMesh::GetNavMesh(v18);
        v20 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 96));
        v21 = *(_BYTE *)(((unsigned __int64)&v20->second.surfaceID >> 3) + 0x7FFF8000);
        LOBYTE(v22) = v21 != 0;
        if ( v21 != 0 && v21 <= 1 )
          v20 = (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >::pointer)__asan_report_load2(&v20->second.surfaceID);
        v23 = v20->second.surfaceID;
        v24 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8(v24 + 8, v22);
        NavMesh::RestoreTile(v19, *(_QWORD *)(v24 + 8), v23, sourceTile, (NavMeshTileMemoryCallback *)(v5 + 160));
        DynamicTileCallback::~DynamicTileCallback((DynamicTileCallback *const)(v5 + 160));
      }
      vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
        &surfaceInfo->m_NavMeshTile,
        *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v5 + 96));
    }
  }
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1462: range 000000000CC9B1AC-000000000CC9B766
void __fastcall DynamicNavMesh::HavokRestoreTile(
        DynamicNavMesh *const this,
        SurfaceIDType surfaceID,
        vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type tileIndex,
        int tileX,
        int tileY)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  NavMesh *NavMesh; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  NavMesh *v13; // r14
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v14; // rdx
  TileLookUpData *p_second; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >::pointer v16; // rdx
  CarveResultStatus *p_status; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >::pointer v18; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  NavMesh *v20; // r15
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >::pointer v21; // rax
  char v22; // dl
  DynamicNavMesh *v23; // rsi
  SurfaceIDType v24; // r14
  __int64 v25; // rax
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type v29; // [rsp+2Ah] [rbp-176h] BYREF
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type v30; // [rsp+2Ch] [rbp-174h] BYREF
  const NavMeshTile *sourceTile; // [rsp+30h] [rbp-170h]
  DynamicSurfaceInfo *surfaceInfo; // [rsp+38h] [rbp-168h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+40h] [rbp-160h]
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+48h] [rbp-158h] BYREF
  char v35[336]; // [rsp+50h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 10 tileX:1461 64 4 10 tileY:1461 80 8 14 surfaceIt:1463 112 8 7 it:1469 144 8 17 sourceTi"
                        "leIt:1477 176 80 13 callback:1484";
  *(_QWORD *)(v5 + 16) = DynamicNavMesh::HavokRestoreTile;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 48) = tileX;
  *(_DWORD *)(v5 + 64) = tileY;
  v30 = surfaceID;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v5 + 80) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(&this->m_DynamicNavMeshSurface, &v30);
  __rhs._M_current = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_DynamicNavMeshSurface)._M_current;
  if ( !__gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
          (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v5 + 80),
          &__rhs) )
  {
    v8 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v5 + 80));
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 8, &__rhs);
    surfaceInfo = *(DynamicSurfaceInfo **)(v8 + 8);
    v29 = tileIndex;
    *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v5 + 112) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find(&surfaceInfo->m_NavMeshTile, &v29);
    __rhs._M_current = (std::pair<int,DynamicSurfaceInfo*> *)vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&surfaceInfo->m_NavMeshTile)._M_current;
    if ( !__gnu_cxx::operator==<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v5 + 112),
            (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)&__rhs) )
    {
      v9 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 112));
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9 + 8, &__rhs);
      if ( *(_QWORD *)(v9 + 8) )
      {
        v10 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
        NavMesh = StaticNavMesh::GetNavMesh(v10);
        lut = NavMesh::GetTileLUT(NavMesh);
        __rhs._M_current = (std::pair<int,DynamicSurfaceInfo*> *)std::make_pair<int &,int &>(
                                                                   (int *)(v5 + 48),
                                                                   (int *)(v5 + 64));
        *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v5 + 144) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)&__rhs);
        sourceTile = 0LL;
        __rhs._M_current = (std::pair<int,DynamicSurfaceInfo*> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
        if ( __gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
               (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v5 + 144),
               (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__rhs) )
        {
          v12 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
          v13 = StaticNavMesh::GetNavMesh(v12);
          v14 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 144));
          p_second = &v14->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          sourceTile = NavMesh::GetTile(v13, v14->second.tileNavMeshIndex);
        }
        v16 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 112));
        p_status = &v16->second.status;
        if ( *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_status & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_status);
        }
        v16->second.status = kRestoreTile;
        v18 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 112));
        v23 = this;
        HavokDynamicTileCallback::HavokDynamicTileCallback(
          (HavokDynamicTileCallback *const)(v5 + 176),
          this,
          surfaceInfo,
          &v18->second);
        v19 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
        v20 = StaticNavMesh::GetNavMesh(v19);
        v21 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 112));
        v22 = *(_BYTE *)(((unsigned __int64)&v21->second.surfaceID >> 3) + 0x7FFF8000);
        LOBYTE(v23) = v22 != 0;
        if ( v22 != 0 && v22 <= 1 )
          v21 = (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > >::pointer)__asan_report_load2(&v21->second.surfaceID);
        v24 = v21->second.surfaceID;
        v25 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> *,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v5 + 112));
        if ( *(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8(v25 + 8, v23);
        NavMesh::RestoreTile(v20, *(_QWORD *)(v25 + 8), v24, sourceTile, (NavMeshTileMemoryCallback *)(v5 + 176));
        HavokDynamicTileCallback::~HavokDynamicTileCallback((HavokDynamicTileCallback *const)(v5 + 176));
      }
      vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
        &surfaceInfo->m_NavMeshTile,
        *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::iterator *)(v5 + 112));
    }
  }
  if ( v35 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1492: range 000000000CC9B768-000000000CC9BC39
void __fastcall DynamicNavMesh::RemoveTile(
        DynamicNavMesh *const this,
        SurfaceIDType surfaceID,
        int tileIndex,
        int tileX,
        int tileY)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rax
  DynamicNavMeshTileInfo *v9; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const NavMesh *NavMesh; // rdi
  SurfaceIDType v12; // dx
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *v13; // rax
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *v14; // rdx
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type v19; // [rsp+2Ah] [rbp-F6h] BYREF
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type v20; // [rsp+2Ch] [rbp-F4h] BYREF
  DynamicSurfaceInfo *surfaceInfo; // [rsp+30h] [rbp-F0h]
  DynamicNavMeshTileInfo *tileinfo; // [rsp+38h] [rbp-E8h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type v23; // [rsp+40h] [rbp-E0h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+48h] [rbp-D8h] BYREF
  char v25[208]; // [rsp+50h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 10 tileX:1491 48 4 10 tileY:1491 64 8 14 surfaceIt:1493 96 24 13 callback:1510";
  *(_QWORD *)(v5 + 16) = DynamicNavMesh::RemoveTile;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 32) = tileX;
  *(_DWORD *)(v5 + 48) = tileY;
  v20 = surfaceID;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v5 + 64) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(&this->m_DynamicNavMeshSurface, &v20);
  surfaceInfo = 0LL;
  __rhs._M_current = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_DynamicNavMeshSurface)._M_current;
  if ( __gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v5 + 64),
         &__rhs) )
  {
    surfaceInfo = DynamicNavMesh::CreateSurfaceInfo(this, surfaceID);
    if ( !surfaceInfo )
      goto LABEL_25;
  }
  else
  {
    v8 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 8, &__rhs);
    surfaceInfo = *(DynamicSurfaceInfo **)(v8 + 8);
  }
  v19 = tileIndex;
  v9 = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::operator[](
         &surfaceInfo->m_NavMeshTile,
         &v19);
  tileinfo = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9, &v19);
  if ( tileinfo->tileRef )
  {
    DynamicTileCallback::DynamicTileCallback((DynamicTileCallback *const)(v5 + 96), this, surfaceInfo);
    v10 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    NavMesh = StaticNavMesh::GetNavMesh(v10);
    if ( *(_BYTE *)(((unsigned __int64)&tileinfo->surfaceID >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tileinfo->surfaceID >> 3) + 0x7FFF8000) <= 1 )
    {
      NavMesh = (const NavMesh *)&tileinfo->surfaceID;
      __asan_report_load2(&tileinfo->surfaceID);
    }
    v12 = tileinfo->surfaceID;
    if ( *(_BYTE *)(((unsigned __int64)tileinfo >> 3) + 0x7FFF8000) )
    {
      NavMesh = (const NavMesh *)tileinfo;
      __asan_report_load8(tileinfo, this);
    }
    NavMesh::RemoveTile(NavMesh, tileinfo->tileRef, v12, 0LL, 0LL, (NavMeshTileMemoryCallback *)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)tileinfo >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    tileinfo->tileRef = 0LL;
    DynamicTileCallback::~DynamicTileCallback((DynamicTileCallback *const)(v5 + 96));
  }
  TileLookUpData::TileLookUpData((TileLookUpData *const)&__rhs, -1, tileIndex);
  v23 = std::make_pair<int &,int &>((int *)(v5 + 32), (int *)(v5 + 48));
  v13 = (__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::operator[](&this->m_TileLUT, &v23);
  v14 = v13;
  if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v13->_M_current + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->_M_current + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v13, 8LL);
  }
  v14->_M_current = __rhs._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&tileinfo->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tileinfo + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tileinfo->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&tileinfo->status);
  }
  tileinfo->status = kRemoveTile;
LABEL_25:
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1519: range 000000000CC9BC3A-000000000CC9C07D
void __cdecl DynamicNavMesh::ReplaceTile(
        DynamicNavMesh *const this,
        SurfaceIDType surfaceID,
        int tileIndex,
        unsigned __int8 *tileData,
        int tileDataSize)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  NavMesh *NavMesh; // rax
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *p_m_NavMeshTile; // rdi
  DynamicNavMeshTileInfo *v12; // rax
  NavMeshTileRef v13; // rdx
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type v17; // [rsp+26h] [rbp-EAh] BYREF
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type v18; // [rsp+28h] [rbp-E8h] BYREF
  NavMeshStatus status; // [rsp+2Ch] [rbp-E4h]
  DynamicSurfaceInfo *surfaceInfo; // [rsp+30h] [rbp-E0h]
  DynamicNavMeshTileInfo *tileinfo; // [rsp+38h] [rbp-D8h]
  char v22[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 8 14 surfaceIt:1520 64 8 8 ref:1532 96 24 13 callback:1531";
  *(_QWORD *)(v5 + 16) = DynamicNavMesh::ReplaceTile;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  v18 = surfaceID;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v5 + 32) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(&this->m_DynamicNavMeshSurface, &v18);
  surfaceInfo = 0LL;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v5 + 64) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_DynamicNavMeshSurface);
  if ( __gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v5 + 32),
         (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v5 + 64)) )
  {
    surfaceInfo = DynamicNavMesh::CreateSurfaceInfo(this, surfaceID);
    if ( !surfaceInfo )
      goto LABEL_24;
  }
  else
  {
    v8 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 8, v5 + 64);
    surfaceInfo = *(DynamicSurfaceInfo **)(v8 + 8);
  }
  DynamicTileCallback::DynamicTileCallback((DynamicTileCallback *const)(v5 + 96), this, surfaceInfo);
  *(_QWORD *)(v5 + 64) = 0LL;
  v9 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v9);
  status = NavMesh::AddTile(
             NavMesh,
             (unsigned __int64)tileData,
             tileDataSize,
             kTileFreeData,
             surfaceID,
             tileIndex,
             (NavMeshTileRef *)(v5 + 64),
             (NavMeshTileMemoryCallback *)(v5 + 96));
  if ( NavMeshStatusFailed(status) )
  {
    free_alloc_internal(tileData);
  }
  else
  {
    v17 = tileIndex;
    p_m_NavMeshTile = &surfaceInfo->m_NavMeshTile;
    v12 = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::operator[](
            &surfaceInfo->m_NavMeshTile,
            &v17);
    tileinfo = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      p_m_NavMeshTile = (vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *)v12;
      __asan_report_load8(v12, &v17);
    }
    if ( tileinfo->tileRef )
    {
      __asan_handle_no_return(p_m_NavMeshTile);
      __assert_fail(
        "tileinfo.tileRef == 0",
        "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
        0x604u,
        "void DynamicNavMesh::ReplaceTile(SurfaceIDType, int, unsigned char*, int)");
    }
    if ( *(_BYTE *)(((unsigned __int64)&tileinfo->status >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tileinfo + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tileinfo->status >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&tileinfo->status);
    }
    tileinfo->status = kReplaceTile;
    v13 = *(_QWORD *)(v5 + 64);
    if ( *(_BYTE *)(((unsigned __int64)tileinfo >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    tileinfo->tileRef = v13;
    if ( *(_BYTE *)(((unsigned __int64)&tileinfo->surfaceID >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tileinfo->surfaceID >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&tileinfo->surfaceID);
    }
    tileinfo->surfaceID = surfaceID;
  }
  DynamicTileCallback::~DynamicTileCallback((DynamicTileCallback *const)(v5 + 96));
LABEL_24:
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1548: range 000000000CC9C07E-000000000CC9C57F
void __cdecl DynamicNavMesh::HavokReplaceTile(
        DynamicNavMesh *const this,
        SurfaceIDType surfaceID,
        int tileIndex,
        unsigned __int8 *tileData,
        int tileDataSize)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rax
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *p_m_NavMeshTile; // rdi
  DynamicNavMeshTileInfo *v10; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  NavMesh *NavMesh; // rax
  NavMeshTileRef v13; // rdx
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type v18; // [rsp+26h] [rbp-12Ah] BYREF
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type v19; // [rsp+28h] [rbp-128h] BYREF
  NavMeshStatus status; // [rsp+2Ch] [rbp-124h]
  DynamicSurfaceInfo *surfaceInfo; // [rsp+30h] [rbp-120h]
  DynamicNavMeshTileInfo *tileinfo; // [rsp+38h] [rbp-118h]
  char v23[272]; // [rsp+40h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 8 14 surfaceIt:1549 80 8 8 ref:1561 112 80 13 callback:1566";
  *(_QWORD *)(v5 + 16) = DynamicNavMesh::HavokReplaceTile;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862726] = -202116109;
  v19 = surfaceID;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v5 + 48) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(&this->m_DynamicNavMeshSurface, &v19);
  surfaceInfo = 0LL;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::iterator *)(v5 + 80) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_DynamicNavMeshSurface);
  if ( __gnu_cxx::operator==<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v5 + 48),
         (const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v5 + 80)) )
  {
    surfaceInfo = DynamicNavMesh::CreateSurfaceInfo(this, surfaceID);
    if ( !surfaceInfo )
      goto LABEL_26;
  }
  else
  {
    v8 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> *,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 8, v5 + 80);
    surfaceInfo = *(DynamicSurfaceInfo **)(v8 + 8);
  }
  *(_QWORD *)(v5 + 80) = 0LL;
  v18 = tileIndex;
  p_m_NavMeshTile = &surfaceInfo->m_NavMeshTile;
  v10 = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::operator[](
          &surfaceInfo->m_NavMeshTile,
          &v18);
  tileinfo = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    p_m_NavMeshTile = (vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *)v10;
    __asan_report_load8(v10, &v18);
  }
  if ( tileinfo->tileRef )
  {
    __asan_handle_no_return(p_m_NavMeshTile);
    __assert_fail(
      "tileinfo.tileRef == 0",
      "./src/pathfinding/Internal/ServerExpand/DynamicNavMesh.cpp",
      0x61Bu,
      "void DynamicNavMesh::HavokReplaceTile(SurfaceIDType, int, unsigned char*, int)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tileinfo->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tileinfo + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tileinfo->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&tileinfo->status);
  }
  tileinfo->status = kRestoreTile;
  HavokDynamicTileCallback::HavokDynamicTileCallback(
    (HavokDynamicTileCallback *const)(v5 + 112),
    this,
    surfaceInfo,
    tileinfo);
  v11 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v11);
  status = NavMesh::AddHavokTile(
             NavMesh,
             (NavMeshDataHeader *)tileData,
             tileDataSize,
             1,
             surfaceID,
             tileIndex,
             (NavMeshTileRef *)(v5 + 80),
             (NavMeshTileMemoryCallback *)(v5 + 112),
             &tileinfo->removePolys);
  if ( NavMeshStatusFailed(status) )
  {
    free_alloc_internal(tileData);
    v18 = tileIndex;
    vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::erase(
      &surfaceInfo->m_NavMeshTile,
      &v18);
  }
  else
  {
    v13 = *(_QWORD *)(v5 + 80);
    if ( *(_BYTE *)(((unsigned __int64)tileinfo >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    tileinfo->tileRef = v13;
    if ( *(_BYTE *)(((unsigned __int64)&tileinfo->surfaceID >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tileinfo->surfaceID >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_store2(&tileinfo->surfaceID);
    }
    tileinfo->surfaceID = surfaceID;
    if ( *(_BYTE *)(((unsigned __int64)&tileinfo->status >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tileinfo + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tileinfo->status >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&tileinfo->status);
    }
    tileinfo->status = kReplaceTile;
  }
  HavokDynamicTileCallback::~HavokDynamicTileCallback((HavokDynamicTileCallback *const)(v5 + 112));
LABEL_26:
  if ( v23 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1591: range 000000000CC9C580-000000000CC9C630
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicNavMesh::QueryPolygons(
        const DynamicNavMesh *const this,
        int typeID,
        const Vector3f *center,
        const Vector3f *extents,
        NavMeshProcessCallback *callback)
{
  DynamicTileCallback *m_DynamicTileCallback; // rdx
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  NavMesh *NavMesh; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicTileCallback, *(_QWORD *)&typeID);
  m_DynamicTileCallback = this->m_DynamicTileCallback;
  if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  callback->m_memoryCallback = m_DynamicTileCallback;
  v6 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v6);
  NavMesh::QueryPolygons(NavMesh, typeID, center, extents, callback);
};

// Line 1597: range 000000000CC9C632-000000000CC9C66D
const OffMeshConnection *__cdecl DynamicNavMesh::GetOffMeshConnection(
        const DynamicNavMesh *const this,
        const NavMeshPolyRef ref)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  NavMesh *NavMesh; // rdx

  v2 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v2);
  return NavMesh::GetOffMeshConnection(NavMesh, ref);
};

// Line 1602: range 000000000CC9C66E-000000000CC9C80F
const DynamicOffMeshConnection *__cdecl DynamicNavMesh::GetDynamicOffMeshConnection(
        const DynamicNavMesh *const this,
        const NavMeshPolyRef ref)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  NavMesh *NavMesh; // rdx
  __int64 v7; // rax
  const DynamicOffMeshConnection *result; // rax
  vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::key_type v9; // [rsp+1Ch] [rbp-84h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > __rhs; // [rsp+20h] [rbp-80h] BYREF
  const OffMeshConnection *con; // [rsp+28h] [rbp-78h]
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 it:1607";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::GetDynamicOffMeshConnection;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v5);
  con = NavMesh::GetOffMeshConnection(NavMesh, ref);
  if ( con
    && (v9 = NavMeshPolyRefHelper::DecodePolyIdPoly(ref),
        *(vector_map<unsigned int,DynamicOffMeshConnection*,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> >::const_iterator *)(v2 + 32) = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::find(&this->m_DynamicOffMeshConnection, &v9),
        __rhs._M_current = vector_map<unsigned int,DynamicOffMeshConnection *,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>::end(&this->m_DynamicOffMeshConnection)._M_current,
        __gnu_cxx::operator!=<std::pair<unsigned int,DynamicOffMeshConnection *> const*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *)(v2 + 32),
          &__rhs)) )
  {
    v7 = (__int64)__gnu_cxx::__normal_iterator<std::pair<unsigned int,DynamicOffMeshConnection *> const*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection *>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,DynamicOffMeshConnection*>*,std::vector<std::pair<unsigned int,DynamicOffMeshConnection*>,stl_allocator<std::pair<unsigned int,DynamicOffMeshConnection*>,16> > > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7 + 8, &__rhs);
    result = *(const DynamicOffMeshConnection **)(v7 + 8);
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
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

// Line 1617: range 000000000CC9C810-000000000CC9CB41
bool __cdecl DynamicNavMesh::IsValidPoly(
        const DynamicNavMesh *const this,
        const NavMeshTile *tile,
        const uint16_t *ref)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > *p_m_DynamicNavMeshSurface; // rcx
  __int64 v7; // rax
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > *p_m_NavMeshTile; // rcx
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  NavMesh *NavMesh; // rdx
  bool result; // al
  vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::key_type dataIndex; // [rsp+2Ah] [rbp-C6h] BYREF
  vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::key_type surfaceID; // [rsp+2Ch] [rbp-C4h] BYREF
  std::_Rb_tree_const_iterator<long long unsigned int>::_Self __x; // [rsp+30h] [rbp-C0h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > __rhs; // [rsp+38h] [rbp-B8h] BYREF
  const DynamicSurfaceInfo *surfaceInfo; // [rsp+40h] [rbp-B0h]
  const DynamicNavMeshTileInfo *tileInfo; // [rsp+48h] [rbp-A8h]
  char v18[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 surfaceIt:1618 64 8 11 tileIt:1622 96 8 12 polyRef:1626";
  *(_QWORD *)(v3 + 16) = DynamicNavMesh::IsValidPoly;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  p_m_DynamicNavMeshSurface = &this->m_DynamicNavMeshSurface;
  if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(tile);
  }
  surfaceID = tile->surfaceID;
  *(vector_map<int,DynamicSurfaceInfo*,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> >::const_iterator *)(v3 + 32) = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::find(p_m_DynamicNavMeshSurface, &surfaceID);
  __rhs._M_current = vector_map<int,DynamicSurfaceInfo *,std::less<int>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>::end(&this->m_DynamicNavMeshSurface)._M_current;
  if ( !__gnu_cxx::operator!=<std::pair<int,DynamicSurfaceInfo *> const*,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *)(v3 + 32),
          &__rhs) )
    goto LABEL_13;
  v7 = (__int64)__gnu_cxx::__normal_iterator<std::pair<int,DynamicSurfaceInfo *> const*,std::vector<std::pair<int,DynamicSurfaceInfo *>,stl_allocator<std::pair<int,DynamicSurfaceInfo *>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<int,DynamicSurfaceInfo*>*,std::vector<std::pair<int,DynamicSurfaceInfo*>,stl_allocator<std::pair<int,DynamicSurfaceInfo*>,16> > > *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7 + 8, &__rhs);
  surfaceInfo = *(const DynamicSurfaceInfo **)(v7 + 8);
  p_m_NavMeshTile = &surfaceInfo->m_NavMeshTile;
  if ( *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->dataIndex);
  }
  dataIndex = tile->dataIndex;
  *(vector_map<short unsigned int,DynamicNavMeshTileInfo,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> >::const_iterator *)(v3 + 64) = vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::find(p_m_NavMeshTile, &dataIndex);
  __rhs._M_current = (const std::pair<int,DynamicSurfaceInfo*> *)vector_map<unsigned short,DynamicNavMeshTileInfo,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>::end(&surfaceInfo->m_NavMeshTile)._M_current;
  if ( __gnu_cxx::operator!=<std::pair<unsigned short,DynamicNavMeshTileInfo> const*,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)(v3 + 64),
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *)&__rhs) )
  {
    tileInfo = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,DynamicNavMeshTileInfo> const*,std::vector<std::pair<unsigned short,DynamicNavMeshTileInfo>,stl_allocator<std::pair<unsigned short,DynamicNavMeshTileInfo>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,DynamicNavMeshTileInfo>*,std::vector<std::pair<short unsigned int,DynamicNavMeshTileInfo>,stl_allocator<std::pair<short unsigned int,DynamicNavMeshTileInfo>,16> > > *const)(v3 + 64))->second;
    v9 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    NavMesh = StaticNavMesh::GetNavMesh(v9);
    *(_QWORD *)(v3 + 96) = NavMesh::GetTileRef(NavMesh, tile);
    __rhs._M_current = (const std::pair<int,DynamicSurfaceInfo*> *)std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::end(&tileInfo->removePolys)._M_node;
    __x._M_node = std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::find(
                    &tileInfo->removePolys,
                    (const std::set<long long unsigned int,std::less<long long unsigned int>,stl_allocator<long long unsigned int,16> >::key_type *)(v3 + 96))._M_node;
    result = std::operator==(&__x, (const std::_Rb_tree_const_iterator<long long unsigned int>::_Self *)&__rhs);
  }
  else
  {
LABEL_13:
    result = 1;
  }
  if ( v18 == (char *)v3 )
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
  return result;
};

// Line 1639: range 000000000CC9CB42-000000000CC9CBBF
NavMeshStatus __cdecl DynamicNavMesh::GetTileAndPolyByRef(
        const DynamicNavMesh *const this,
        const NavMeshPolyRef ref,
        const NavMeshTile **tile,
        const NavMeshPoly **poly)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  const NavMesh *NavMesh; // rdi

  v4 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
  {
    NavMesh = (const NavMesh *)&this->m_DynamicTileCallback;
    __asan_report_load8(&this->m_DynamicTileCallback, ref);
  }
  return NavMesh::GetTileAndPolyByRef(NavMesh, ref, tile, poly, this->m_DynamicTileCallback);
};

// Line 1651: range 000000000CC9CBC0-000000000CC9CC47
int __cdecl DynamicNavMesh::GetPolyGeometry(
        const DynamicNavMesh *const this,
        NavMeshPolyRef ref,
        Vector3f *verts,
        NavMeshPolyRef *neighbours,
        int maxNeisPerEdge)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const NavMesh *NavMesh; // rdi

  v5 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
  {
    NavMesh = (const NavMesh *)&this->m_DynamicTileCallback;
    __asan_report_load8(&this->m_DynamicTileCallback, ref);
  }
  return NavMesh::GetPolyGeometry(NavMesh, ref, verts, neighbours, maxNeisPerEdge, this->m_DynamicTileCallback);
};

// Line 1657: range 000000000CC9CC48-000000000CC9CD59
const NavMeshTile *__cdecl DynamicNavMesh::GetTileByRef(const DynamicNavMesh *const this, NavMeshTileRef ref)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  NavMesh *NavMesh; // rdx
  unsigned int tileIndex; // [rsp+10h] [rbp-10h]
  unsigned int tileSalt; // [rsp+14h] [rbp-Ch]
  const NavMeshTile *tile; // [rsp+18h] [rbp-8h]

  if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(ref) )
  {
    if ( ref )
    {
      tileIndex = NavMeshPolyRefHelper::DecodePolyIdTile(ref);
      tileSalt = NavMeshPolyRefHelper::DecodePolyIdSalt(ref);
      if ( tileIndex < FreeList<NavMeshTile,true>::Capacity(&this->m_tiles) )
      {
        tile = FreeList<NavMeshTile,true>::operator[](&this->m_tiles, tileIndex);
        if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&tile->salt);
        }
        if ( tileSalt == tile->salt )
          return tile;
        else
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v3 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    NavMesh = StaticNavMesh::GetNavMesh(v3);
    return NavMesh::GetTileByRef(NavMesh, ref);
  }
};

// Line 1683: range 000000000CC9CD5A-000000000CC9CFB2
void __cdecl DynamicNavMesh::GetTileAndPolyByRefUnsafe(
        const DynamicNavMesh *const this,
        const NavMeshPolyRef ref,
        const NavMeshTile **tile,
        const NavMeshPoly **poly)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  const NavMeshTile *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  const NavMeshPoly *v10; // rcx
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  NavMesh *NavMesh; // rdi
  char v15[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 9 salt:1687 48 4 7 it:1687 64 4 9 type:1687 80 4 7 ip:1687 96 4 14 allocflag:1687";
  *(_QWORD *)(v4 + 16) = DynamicNavMesh::GetTileAndPolyByRefUnsafe;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(ref) )
  {
    NavMeshPolyRefHelper::DecodePolyId(
      (unsigned int *)(v4 + 32),
      (unsigned int *)(v4 + 96),
      (unsigned int *)(v4 + 48),
      (unsigned int *)(v4 + 64),
      (unsigned int *)(v4 + 80),
      ref);
    v7 = FreeList<NavMeshTile,true>::operator[](&this->m_tiles, *(_DWORD *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *tile = v7;
    v8 = *(unsigned int *)(v4 + 48);
    v9 = (__int64)FreeList<NavMeshTile,true>::operator[](&this->m_tiles, v8);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 32) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9 + 32, v8);
    v10 = (const NavMeshPoly *)(*(_QWORD *)(v9 + 32) + 32LL * *(unsigned int *)(v4 + 80));
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *poly = v10;
  }
  else
  {
    v11 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    NavMesh = StaticNavMesh::GetNavMesh(v11);
    NavMesh::GetTileAndPolyByRefUnsafe(NavMesh, ref, tile, poly);
  }
  if ( v15 == (char *)v4 )
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

// Line 1700: range 000000000CC9CFB4-000000000CC9D104
__int64 __fastcall DynamicNavMesh::IsValidPolyRef(const DynamicNavMesh *const this, NavMeshPolyRef ref)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rsi
  unsigned __int64 v5; // r12
  DynamicTileCallback *m_DynamicTileCallback; // rdx
  _QWORD *p_vptr_NavMeshTileMemoryCallback; // rax
  unsigned __int64 v8; // rax
  __int64 result; // rax
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ref:1699";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::IsValidPolyRef;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = ref;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicTileCallback, v4);
  m_DynamicTileCallback = this->m_DynamicTileCallback;
  p_vptr_NavMeshTileMemoryCallback = &m_DynamicTileCallback->_vptr_NavMeshTileMemoryCallback;
  if ( *(_BYTE *)(((unsigned __int64)m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    p_vptr_NavMeshTileMemoryCallback = (_QWORD *)__asan_report_load8(this->m_DynamicTileCallback, v4);
  v8 = *p_vptr_NavMeshTileMemoryCallback + 32LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8, v4);
  result = (*(__int64 (__fastcall **)(DynamicTileCallback *, unsigned __int64))v8)(m_DynamicTileCallback, v2 + 32);
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

// Line 1705: range 000000000CC9D106-000000000CC9D173
NavMeshPolyRef __cdecl DynamicNavMesh::GetPolyRefBase(const DynamicNavMesh *const this, const NavMeshTile *tile)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  NavMesh *NavMesh; // rcx

  v2 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicTileCallback, tile);
  return NavMesh::GetPolyRefBase(NavMesh, tile, this->m_DynamicTileCallback);
};

// Line 1710: range 000000000CC9D174-000000000CC9D374
unsigned int __cdecl DynamicNavMesh::GetPolyFlags(const DynamicNavMesh *const this, NavMeshPolyRef ref)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const NavMesh *NavMesh; // rdi
  NavMeshStatus TileAndPolyByRef; // eax
  unsigned int result; // eax
  __int64 v9; // rdx
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  NavMesh *v11; // rdx
  char v13[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 tile:1713 64 8 9 poly:1714";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::GetPolyFlags;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(ref) )
  {
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    v5 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    NavMesh = StaticNavMesh::GetNavMesh(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    {
      NavMesh = (const NavMesh *)&this->m_DynamicTileCallback;
      __asan_report_load8(&this->m_DynamicTileCallback, ref);
    }
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         NavMesh,
                         ref,
                         (const NavMeshTile **)(v2 + 32),
                         (const NavMeshPoly **)(v2 + 64),
                         this->m_DynamicTileCallback);
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = 0;
    }
    else
    {
      v9 = *(_QWORD *)(v2 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((v9 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v9 + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9 + 24);
      }
      result = *(_DWORD *)(v9 + 24);
    }
  }
  else
  {
    v10 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    v11 = StaticNavMesh::GetNavMesh(v10);
    result = NavMesh::GetPolyFlags(v11, ref);
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
  return result;
};

// Line 1726: range 000000000CC9D376-000000000CC9D574
unsigned __int8 __cdecl DynamicNavMesh::GetPolyArea(const DynamicNavMesh *const this, NavMeshPolyRef ref)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const NavMesh *NavMesh; // rdi
  NavMeshStatus TileAndPolyByRef; // eax
  unsigned __int8 result; // al
  __int64 v9; // rdx
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  NavMesh *v11; // rdx
  char v13[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 tile:1729 64 8 9 poly:1730";
  *(_QWORD *)(v2 + 16) = DynamicNavMesh::GetPolyArea;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(ref) )
  {
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    v5 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    NavMesh = StaticNavMesh::GetNavMesh(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    {
      NavMesh = (const NavMesh *)&this->m_DynamicTileCallback;
      __asan_report_load8(&this->m_DynamicTileCallback, ref);
    }
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         NavMesh,
                         ref,
                         (const NavMeshTile **)(v2 + 32),
                         (const NavMeshPoly **)(v2 + 64),
                         this->m_DynamicTileCallback);
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = 0;
    }
    else
    {
      v9 = *(_QWORD *)(v2 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 29) >> 3) + 0x7FFF8000) != 0
        && ((v9 + 29) & 7) >= *(_BYTE *)(((unsigned __int64)(v9 + 29) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v9 + 29);
      }
      result = *(_BYTE *)(v9 + 29);
    }
  }
  else
  {
    v10 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    v11 = StaticNavMesh::GetNavMesh(v10);
    result = NavMesh::GetPolyArea(v11, ref);
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
  return result;
};

// Line 1742: range 000000000CC9D576-000000000CC9D5E3
const NavMeshLink *__cdecl DynamicNavMesh::GetFirstLink(const DynamicNavMesh *const this, NavMeshPolyRef ref)
{
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  NavMesh *NavMesh; // rcx

  v2 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicTileCallback, ref);
  return NavMesh::GetFirstLink(NavMesh, ref, this->m_DynamicTileCallback);
};

// Line 1747: range 000000000CC9D5E4-000000000CC9D6BC
// local variable allocation has failed, the output may be wrong!
const NavMeshLink *__cdecl DynamicNavMesh::GetLink(const DynamicNavMesh *const this, unsigned int i)
{
  DynamicTileCallback *m_DynamicTileCallback; // rdx
  _QWORD *p_vptr_NavMeshTileMemoryCallback; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  NavMesh *NavMesh; // rax

  if ( (i & 0x80000000) == 0 )
  {
    v8 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
    NavMesh = StaticNavMesh::GetNavMesh(v8);
    return NavMesh::GetLink(NavMesh, i);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_DynamicTileCallback, *(_QWORD *)&i);
    m_DynamicTileCallback = this->m_DynamicTileCallback;
    p_vptr_NavMeshTileMemoryCallback = &m_DynamicTileCallback->_vptr_NavMeshTileMemoryCallback;
    v4 = *(unsigned __int8 *)(((unsigned __int64)m_DynamicTileCallback >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      p_vptr_NavMeshTileMemoryCallback = (_QWORD *)__asan_report_load8(this->m_DynamicTileCallback, v4);
    v5 = *p_vptr_NavMeshTileMemoryCallback + 80LL;
    v6 = *(unsigned __int8 *)((v5 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 )
      v5 = __asan_report_load8(v5, v6);
    return (const NavMeshLink *)(*(__int64 (__fastcall **)(DynamicTileCallback *, _QWORD))v5)(m_DynamicTileCallback, i);
  }
};

// Line 1756: range 000000000CC9D6BE-000000000CC9D76E
const NavMeshLink *__cdecl DynamicNavMesh::GetNextLink(const DynamicNavMesh *const this, const NavMeshLink *link)
{
  if ( !link )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&link->next);
  }
  if ( link->next == -1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&link->next);
  }
  return DynamicNavMesh::GetLink(this, link->next);
};

// Line 1763: range 000000000CC9D770-000000000CC9D82C
// local variable allocation has failed, the output may be wrong!
bool __cdecl DynamicNavMesh::IntersectSurface(
        const DynamicNavMesh *const this,
        SurfaceIDType surfaceID,
        int typeID,
        const Vector3f *cen,
        const Vector3f *ext,
        NavMeshMatchFirstCallback *callback)
{
  DynamicTileCallback *m_DynamicTileCallback; // rdx
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  NavMesh *NavMesh; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->m_DynamicTileCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_DynamicTileCallback, surfaceID);
  m_DynamicTileCallback = this->m_DynamicTileCallback;
  if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  callback->m_memoryCallback = m_DynamicTileCallback;
  v7 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->m_StaticNavMesh);
  NavMesh = StaticNavMesh::GetNavMesh(v7);
  return NavMesh::IntersectSurface(NavMesh, surfaceID, typeID, cen, ext, callback);
};
