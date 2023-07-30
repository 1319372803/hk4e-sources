// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/NavMesh.cpp

// Line 49: range 000000000CDBA4AE-000000000CDBA4D8
void __cdecl NaMeshDefaultMemoryCallback::~NaMeshDefaultMemoryCallback(NaMeshDefaultMemoryCallback *const this)
{
  NaMeshDefaultMemoryCallback::~NaMeshDefaultMemoryCallback(this);
  operator delete(this, 0x18uLL);
};

// Line 49: range 000000000CDBA460-000000000CDBA4AD
void __cdecl NaMeshDefaultMemoryCallback::~NaMeshDefaultMemoryCallback(NaMeshDefaultMemoryCallback *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NaMeshDefaultMemoryCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshTileMemoryCallback = v1;
  NavMeshTileMemoryCallback::~NavMeshTileMemoryCallback(this);
};

// Line 53: range 000000000CD727E2-000000000CD72895
void __cdecl NaMeshDefaultMemoryCallback::NaMeshDefaultMemoryCallback(
        NaMeshDefaultMemoryCallback *const this,
        NavMesh *navMesh)
{
  int (**v2)(...); // rdx

  NavMeshTileMemoryCallback::NavMeshTileMemoryCallback(this);
  v2 = (int (**)(...))(&`vtable for'NaMeshDefaultMemoryCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshTileMemoryCallback = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMesh = navMesh;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_surfaceData >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_surfaceData = 0LL;
};

// Line 59: range 000000000CD72896-000000000CD728D9
void __cdecl NaMeshDefaultMemoryCallback::ResetSurfaceData(
        NaMeshDefaultMemoryCallback *const this,
        NavMesh::SurfaceData *surfaceData)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_surfaceData >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_surfaceData = surfaceData;
};

// Line 64: range 000000000CD728DA-000000000CD7294B
bool __cdecl NaMeshDefaultMemoryCallback::IsValidPolyRef(
        const NaMeshDefaultMemoryCallback *const this,
        const NavMeshTileRef *ref)
{
  NavMesh *m_NavMesh; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, ref);
  m_NavMesh = this->m_NavMesh;
  if ( *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000) )
    __asan_report_load8(ref, ref);
  return NavMesh::IsValidPolyRef(m_NavMesh, *ref);
};

// Line 69: range 000000000CD7294C-000000000CD72A6C
NavMeshTileRef __cdecl NaMeshDefaultMemoryCallback::GetPolyRefBase(
        const NaMeshDefaultMemoryCallback *const this,
        const NavMeshTile *tile)
{
  unsigned int it; // [rsp+1Ch] [rbp-4h]

  if ( !tile )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, tile);
  it = 678152731 * (((char *)tile - (char *)FreeList<NavMeshTile,false>::operator[](&this->m_NavMesh->m_tiles, 0)) >> 3);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, 0LL);
  if ( it >= FreeList<NavMeshTile,false>::Capacity(&this->m_NavMesh->m_tiles) )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tile->salt);
  }
  return NavMeshPolyRefHelper::EncodePolyId(tile->salt, it, 0, 0, 0);
};

// Line 79: range 000000000CD72A6E-000000000CD72B8E
NavMeshTileRef __cdecl NaMeshDefaultMemoryCallback::GetTileRef(
        const NaMeshDefaultMemoryCallback *const this,
        const NavMeshTile *tile)
{
  unsigned int it; // [rsp+1Ch] [rbp-4h]

  if ( !tile )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, tile);
  it = 678152731 * (((char *)tile - (char *)FreeList<NavMeshTile,false>::operator[](&this->m_NavMesh->m_tiles, 0)) >> 3);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, 0LL);
  if ( it >= FreeList<NavMeshTile,false>::Capacity(&this->m_NavMesh->m_tiles) )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tile->salt);
  }
  return NavMeshPolyRefHelper::EncodePolyId(tile->salt, it, 0, 0, 0);
};

// Line 89: range 000000000CD72B90-000000000CD72C6D
NavMeshTile *__cdecl NaMeshDefaultMemoryCallback::AllocTile(NaMeshDefaultMemoryCallback *const this, unsigned int *ref)
{
  unsigned int v2; // ecx
  char v3; // dl
  unsigned int *refa; // [rsp+0h] [rbp-10h]

  refa = ref;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, ref);
  v2 = FreeList<NavMeshTile,false>::Alloc(&this->m_NavMesh->m_tiles);
  v3 = *(_BYTE *)(((unsigned __int64)ref >> 3) + 0x7FFF8000);
  LOBYTE(ref) = v3 != 0;
  if ( v3 != 0 && (char)(((unsigned __int8)refa & 7) + 3) >= v3 )
    __asan_report_store4(refa);
  *refa = v2;
  if ( *refa == -1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, ref);
  return FreeList<NavMeshTile,false>::operator[](&this->m_NavMesh->m_tiles, *refa);
};

// Line 99: range 000000000CD72C6E-000000000CD72CBC
// local variable allocation has failed, the output may be wrong!
NavMeshTile *__cdecl NaMeshDefaultMemoryCallback::GetTile(NaMeshDefaultMemoryCallback *const this, unsigned int ref)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, *(_QWORD *)&ref);
  return FreeList<NavMeshTile,false>::operator[](&this->m_NavMesh->m_tiles, ref);
};

// Line 104: range 000000000CD72CBE-000000000CD72D0C
// local variable allocation has failed, the output may be wrong!
const NavMeshTile *__cdecl NaMeshDefaultMemoryCallback::GetTile(
        const NaMeshDefaultMemoryCallback *const this,
        unsigned int ref)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, *(_QWORD *)&ref);
  return FreeList<NavMeshTile,false>::operator[](&this->m_NavMesh->m_tiles, ref);
};

// Line 109: range 000000000CD72D0E-000000000CD72D5D
// local variable allocation has failed, the output may be wrong!
void __cdecl NaMeshDefaultMemoryCallback::ReleaseTile(NaMeshDefaultMemoryCallback *const this, unsigned int ref)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, *(_QWORD *)&ref);
  FreeList<NavMeshTile,false>::Release(&this->m_NavMesh->m_tiles, ref);
};

// Line 114: range 000000000CD72D5E-000000000CD72D70
NavMeshLink *__cdecl NaMeshDefaultMemoryCallback::AllocLink(NaMeshDefaultMemoryCallback *const this, unsigned int *ref)
{
  return 0LL;
};

// Line 119: range 000000000CD72D72-000000000CD72E0E
// local variable allocation has failed, the output may be wrong!
NavMeshLink *__cdecl NaMeshDefaultMemoryCallback::GetLink(NaMeshDefaultMemoryCallback *const this, unsigned int ref)
{
  int refa; // [rsp+4h] [rbp-Ch]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, *(_QWORD *)&ref);
  refa = FreeList<NavMeshLink,false>::Alloc(&this->m_NavMesh->m_links);
  if ( refa == -1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, *(_QWORD *)&ref);
  return FreeList<NavMeshLink,false>::operator[](&this->m_NavMesh->m_links, refa);
};

// Line 129: range 000000000CD72E10-000000000CD72EAC
// local variable allocation has failed, the output may be wrong!
const NavMeshLink *__cdecl NaMeshDefaultMemoryCallback::GetLink(
        const NaMeshDefaultMemoryCallback *const this,
        unsigned int ref)
{
  int refa; // [rsp+4h] [rbp-Ch]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, *(_QWORD *)&ref);
  refa = FreeList<NavMeshLink,false>::Alloc(&this->m_NavMesh->m_links);
  if ( refa == -1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, *(_QWORD *)&ref);
  return FreeList<NavMeshLink,false>::operator[](&this->m_NavMesh->m_links, refa);
};

// Line 139: range 000000000CD72EAE-000000000CD72F00
// local variable allocation has failed, the output may be wrong!
void __cdecl NaMeshDefaultMemoryCallback::ReleaseLink(NaMeshDefaultMemoryCallback *const this, unsigned int ref)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, *(_QWORD *)&ref);
  FreeList<NavMeshLink,false>::Release(&this->m_NavMesh->m_links, ref);
};

// Line 144: range 000000000CD72F02-000000000CD72F40
TileLUT *__cdecl NaMeshDefaultMemoryCallback::GetTileLUT(NaMeshDefaultMemoryCallback *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, v1);
  return &this->m_NavMesh->m_TileLUT;
};

// Line 149: range 000000000CD72F42-000000000CD72F80
MinMaxAABB *__cdecl NaMeshDefaultMemoryCallback::GetWorldBounds(NaMeshDefaultMemoryCallback *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_surfaceData >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_surfaceData, v1);
  return &this->m_surfaceData->m_WorldBounds;
};

// Line 153: range 000000000CD72F82-000000000CD72FC6
// local variable allocation has failed, the output may be wrong!
const TileLUT *__cdecl NaMeshDefaultMemoryCallback::GetTileLUT(
        const NaMeshDefaultMemoryCallback *const this,
        SurfaceIDType surfaceId)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, surfaceId);
  return &this->m_NavMesh->m_TileLUT;
};

// Line 157: range 000000000CD72FC8-000000000CD7314B
const MinMaxAABB *__fastcall NaMeshDefaultMemoryCallback::GetWorldBounds(
        const NaMeshDefaultMemoryCallback *const this,
        __int64 surfaceId)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const MinMaxAABB *result; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 2 13 surfaceId:157 64 8 6 it:159";
  *(_QWORD *)(v2 + 16) = NaMeshDefaultMemoryCallback::GetWorldBounds;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -202116352;
  *(_WORD *)(v2 + 48) = surfaceId;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_NavMesh, surfaceId);
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator *)(v2 + 64) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_NavMesh->m_SurfaceIDToData, (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v2 + 48));
  __rhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_NavMesh->m_SurfaceIDToData)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v2 + 64),
         &__rhs) )
  {
    result = 0LL;
  }
  else
  {
    result = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v2 + 64))->second.m_WorldBounds;
  }
  if ( v7 == (char *)v2 )
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

// Line 170: range 000000000CD7314C-000000000CD73307
void __cdecl NaMeshDefaultMemoryCallback::AddTileLink(
        NaMeshDefaultMemoryCallback *const this,
        const NavMeshTile *tile,
        NavMeshLink *link,
        unsigned int linkRef,
        int ip_0)
{
  unsigned __int64 v5; // rcx
  char v6; // dl
  __int64 v7; // rdi
  unsigned int *v8; // rcx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rcx
  const NavMeshTile *tilea; // [rsp+10h] [rbp-10h]

  tilea = tile;
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->polyLinks, tile);
  v5 = (unsigned __int64)&tile->polyLinks[ip_0];
  v6 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
  LOBYTE(tile) = v6 != 0;
  v7 = ((LOBYTE(tilea->polyLinks) + 4 * (_BYTE)ip_0) & 7u) + 3;
  if ( v6 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * ip_0) & 7) + 3) >= v6 )
  {
    v7 = (__int64)&tilea->polyLinks[ip_0];
    __asan_report_load4(v7);
  }
  if ( linkRef == *(_DWORD *)v5 )
  {
    __asan_handle_no_return(v7);
    __assert_fail(
      "linkRef != tile->polyLinks[ip]",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xACu,
      "virtual void NaMeshDefaultMemoryCallback::AddTileLink(const NavMeshTile*, NavMeshLink*, unsigned int, int)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tilea->polyLinks, tile);
  v8 = &tilea->polyLinks[ip_0];
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(tilea->polyLinks) + 4 * ip_0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tilea->polyLinks[ip_0]);
  }
  v9 = *v8;
  if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&link->next);
  }
  link->next = v9;
  v10 = (unsigned __int64)&tilea->polyLinks[ip_0];
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(tilea->polyLinks) + 4 * ip_0) & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&tilea->polyLinks[ip_0]);
  }
  *(_DWORD *)v10 = linkRef;
};

// Line 178: range 000000000CD73308-000000000CD7331D
DynamicOffMeshConnection *__cdecl NaMeshDefaultMemoryCallback::CreateOrGetOffMeshConnection(
        NaMeshDefaultMemoryCallback *const this,
        unsigned int index,
        const OffMeshConnection *con)
{
  return 0LL;
};

// Line 182: range 000000000CD7331E-000000000CD73333
bool __cdecl NaMeshDefaultMemoryCallback::TryGetOffMeshConnection(
        NaMeshDefaultMemoryCallback *const this,
        unsigned int index,
        DynamicOffMeshConnection **output)
{
  return 0;
};

// Line 186: range 000000000CD73334-000000000CD73341
void __cdecl NaMeshDefaultMemoryCallback::ReleaseOffMeshConnection(
        NaMeshDefaultMemoryCallback *const this,
        unsigned int index)
{
  ;
};

// Line 197: range 000000000CC1ACC7-000000000CC1AF0C
MinMaxAABB *__cdecl GetWorldTileBounds(MinMaxAABB *retstr, const NavMeshTile *tile)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  MinMaxAABB *p_tileBounds; // [rsp+8h] [rbp-A8h]
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  p_tileBounds = retstr;
  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    retstr = (MinMaxAABB *)128;
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 7 mat:203";
  *(_QWORD *)(v2 + 16) = GetWorldTileBounds;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
  {
    retstr = (MinMaxAABB *)&tile->header;
    __asan_report_load8(&tile->header, tile);
  }
  if ( !tile->header )
  {
    __asan_handle_no_return(retstr);
    __assert_fail(
      "tile.header",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xC6u,
      "MinMaxAABB GetWorldTileBounds(const NavMeshTile&)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tile);
  MinMaxAABB::MinMaxAABB(p_tileBounds, &tile->header->bmin, &tile->header->bmax);
  if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->transformed);
  }
  if ( tile->transformed )
  {
    Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v2 + 32));
    Matrix4x4f::SetTR((Matrix4x4f *const)(v2 + 32), &tile->position, &tile->rotation);
    TransformAABBSlow(p_tileBounds, (const Matrix4x4f *)(v2 + 32), p_tileBounds);
  }
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return p_tileBounds;
};

// Line 213: range 000000000CC1AF0D-000000000CC1B475
bool __cdecl OverlapSlabs(
        const Vector2f *amin,
        const Vector2f *amax,
        const Vector2f *bmin,
        const Vector2f *bmax,
        const float px,
        const float py)
{
  float *v6; // rax
  float *v7; // rdx
  float *v8; // rax
  float *v9; // rdx
  double v11; // xmm0_8
  float x; // xmm1_4
  double v13; // xmm0_8
  float v14; // xmm1_4
  __m128i v15; // xmm0
  float __a; // [rsp+34h] [rbp-3Ch] BYREF
  float __b; // [rsp+38h] [rbp-38h] BYREF
  float minx; // [rsp+3Ch] [rbp-34h]
  float maxx; // [rsp+40h] [rbp-30h]
  float ad; // [rsp+44h] [rbp-2Ch]
  float ak; // [rsp+48h] [rbp-28h]
  float bd; // [rsp+4Ch] [rbp-24h]
  float bk; // [rsp+50h] [rbp-20h]
  float aminy; // [rsp+54h] [rbp-1Ch]
  float amaxy; // [rsp+58h] [rbp-18h]
  float bminy; // [rsp+5Ch] [rbp-14h]
  float bmaxy; // [rsp+60h] [rbp-10h]
  float dmin; // [rsp+64h] [rbp-Ch]
  float dmax; // [rsp+68h] [rbp-8h]
  float thr; // [rsp+6Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(bmin);
  }
  __b = bmin->x + px;
  if ( *(_BYTE *)(((unsigned __int64)amin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)amin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)amin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(amin);
  }
  __a = amin->x + px;
  v6 = (float *)std::max<float>(&__a, &__b);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  minx = *v7;
  if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(bmax);
  }
  __b = bmax->x - px;
  if ( *(_BYTE *)(((unsigned __int64)amax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)amax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)amax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(amax);
  }
  __a = amax->x - px;
  v8 = (float *)std::min<float>(&__a, &__b);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  maxx = *v9;
  if ( minx > maxx )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&amax->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amax + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&amax->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&amax->y);
  }
  *(float *)&v11 = amax->y;
  if ( *(_BYTE *)(((unsigned __int64)&amin->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amin + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&amin->y >> 3) + 0x7FFF8000) )
  {
    v11 = __asan_report_load4(&amin->y);
  }
  *(float *)&v11 = *(float *)&v11 - amin->y;
  if ( *(_BYTE *)(((unsigned __int64)amax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)amax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)amax >> 3) + 0x7FFF8000) )
  {
    v11 = __asan_report_load4(amax);
  }
  x = amax->x;
  if ( *(_BYTE *)(((unsigned __int64)amin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)amin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)amin >> 3) + 0x7FFF8000) )
  {
    v11 = __asan_report_load4(amin);
  }
  ad = *(float *)&v11 / (float)(x - amin->x);
  ak = amin->y - (float)(amin->x * ad);
  if ( *(_BYTE *)(((unsigned __int64)&bmax->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmax + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&bmax->y);
  }
  *(float *)&v13 = bmax->y;
  if ( *(_BYTE *)(((unsigned __int64)&bmin->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmin + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmin->y >> 3) + 0x7FFF8000) )
  {
    v13 = __asan_report_load4(&bmin->y);
  }
  *(float *)&v13 = *(float *)&v13 - bmin->y;
  if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
  {
    v13 = __asan_report_load4(bmax);
  }
  v14 = bmax->x;
  if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
  {
    v13 = __asan_report_load4(bmin);
  }
  bd = *(float *)&v13 / (float)(v14 - bmin->x);
  bk = bmin->y - (float)(bmin->x * bd);
  aminy = (float)(ad * minx) + ak;
  amaxy = (float)(ad * maxx) + ak;
  bminy = (float)(bd * minx) + bk;
  bmaxy = (float)(bd * maxx) + bk;
  dmin = bminy - aminy;
  dmax = bmaxy - amaxy;
  if ( (float)((float)(bminy - aminy) * (float)(bmaxy - amaxy)) < 0.0 )
    return 1;
  v15 = (__m128i)LODWORD(py);
  __b = *(float *)v15.m128i_i32 + *(float *)v15.m128i_i32;
  *(float *)v15.m128i_i32 = Sqr<float>(&__b);
  thr = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
  return thr >= (float)(dmin * dmin) || thr >= (float)(dmax * dmax);
};

// Line 249: range 000000000CC1B476-000000000CC1B56D
bool __cdecl OverlapDetailSlabs(
        const Vector2f *aslabs,
        const int acount,
        const Vector2f *bslabs,
        const int bcount,
        const float px,
        const float py)
{
  int i; // [rsp+28h] [rbp-28h]
  int j; // [rsp+2Ch] [rbp-24h]

  for ( i = 0; i < acount - 1; ++i )
  {
    for ( j = 0; j < bcount - 1; ++j )
    {
      if ( OverlapSlabs(&aslabs[i], &aslabs[i + 1], &bslabs[j], &bslabs[j + 1], px, py) )
        return 1;
    }
  }
  return 0;
};

// Line 266: range 000000000CC1B56E-000000000CC1B621
float __cdecl GetSlabCoord(const Vector3f *va, const int side)
{
  if ( side && side != 4 )
  {
    if ( side == 2 || side == 6 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)va + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&va->z);
      }
      return va->z;
    }
    else
    {
      return 0.0;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)va & 7) + 3) >= *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(va);
    }
    return va->x;
  }
};

// Line 275: range 000000000CC1B622-000000000CC1BDBC
void __cdecl MakeDetailEdgeSlabs(Vector2f *slabs, const Vector3f *pts, const int npts, const int side)
{
  float z; // xmm1_4
  const Vector3f *v5; // rdx
  unsigned __int64 v6; // rsi
  float v7; // xmm0_4
  const Vector3f *v8; // rcx
  Vector2f *v9; // rdx
  float v10; // xmm0_4
  const Vector3f *v11; // rdx
  unsigned __int64 v12; // rsi
  float v13; // xmm0_4
  const Vector3f *v14; // rcx
  Vector2f *v15; // rdx
  float v16; // xmm0_4
  float x; // xmm1_4
  unsigned __int64 v18; // rcx
  char v19; // dl
  float v20; // xmm0_4
  const Vector3f *v21; // rcx
  Vector2f *v22; // rdx
  float v23; // xmm0_4
  unsigned __int64 v24; // rcx
  char v25; // dl
  float v26; // xmm0_4
  const Vector3f *v27; // rcx
  Vector2f *v28; // rdx
  float y; // xmm0_4
  int i; // [rsp+20h] [rbp-20h]
  int i_0; // [rsp+24h] [rbp-1Ch]
  int i_1; // [rsp+28h] [rbp-18h]
  int i_2; // [rsp+2Ch] [rbp-14h]
  const Vector3f *vb; // [rsp+38h] [rbp-8h]

  vb = &pts[npts - 1];
  if ( side && side != 4 )
  {
    if ( side != 2 && side != 6 )
    {
      __asan_handle_no_return(slabs);
      __assert_fail(
        "false",
        "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
        0x13Fu,
        "void MakeDetailEdgeSlabs(Vector2f*, const Vector3f*, int, int)");
    }
    if ( *(_BYTE *)(((unsigned __int64)pts >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pts & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pts >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pts);
    }
    x = pts->x;
    if ( *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)vb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(vb);
    }
    if ( vb->x <= x )
    {
      for ( i_2 = 0; i_2 < npts; ++i_2 )
      {
        v24 = (unsigned __int64)&slabs[i_2];
        v25 = *(_BYTE *)(((unsigned __int64)&pts[npts - 1 - i_2] >> 3) + 0x7FFF8000);
        if ( v25 != 0 && (char)(((12 * (npts - 1 - i_2) + (_BYTE)pts) & 7) + 3) >= v25 )
          __asan_report_load4(&pts[npts - 1 - i_2]);
        v26 = pts[npts - 1 - i_2].x;
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0 && (char)((v24 & 7) + 3) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          __asan_report_store4(v24);
        *(float *)v24 = v26;
        v27 = &pts[npts - 1 - i_2];
        v28 = &slabs[i_2];
        if ( *(_BYTE *)(((unsigned __int64)&v27->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v27 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v27->y);
        }
        y = v27->y;
        if ( *(_BYTE *)(((unsigned __int64)&v28->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v28 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&v28->y);
        }
        v28->y = y;
      }
    }
    else
    {
      for ( i_1 = 0; i_1 < npts; ++i_1 )
      {
        v18 = (unsigned __int64)&slabs[i_1];
        v19 = *(_BYTE *)(((unsigned __int64)&pts[i_1] >> 3) + 0x7FFF8000);
        if ( v19 != 0 && (char)(((12 * i_1 + (_BYTE)pts) & 7) + 3) >= v19 )
          __asan_report_load4(&pts[i_1]);
        v20 = pts[i_1].x;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          __asan_report_store4(v18);
        *(float *)v18 = v20;
        v21 = &pts[i_1];
        v22 = &slabs[i_1];
        if ( *(_BYTE *)(((unsigned __int64)&v21->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v21 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v21->y);
        }
        v23 = v21->y;
        if ( *(_BYTE *)(((unsigned __int64)&v22->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v22 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&v22->y);
        }
        v22->y = v23;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&pts->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pts + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pts->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pts->z);
    }
    z = pts->z;
    if ( *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vb + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&vb->z);
    }
    if ( vb->z <= z )
    {
      for ( i_0 = 0; i_0 < npts; ++i_0 )
      {
        v11 = &pts[npts - 1 - i_0];
        v12 = (unsigned __int64)&slabs[i_0];
        if ( *(_BYTE *)(((unsigned __int64)&v11->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v11 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v11->z);
        }
        v13 = v11->z;
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          __asan_report_store4(v12);
        *(float *)v12 = v13;
        v14 = &pts[npts - 1 - i_0];
        v15 = &slabs[i_0];
        if ( *(_BYTE *)(((unsigned __int64)&v14->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v14 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v14->y);
        }
        v16 = v14->y;
        if ( *(_BYTE *)(((unsigned __int64)&v15->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&v15->y);
        }
        v15->y = v16;
      }
    }
    else
    {
      for ( i = 0; i < npts; ++i )
      {
        v5 = &pts[i];
        v6 = (unsigned __int64)&slabs[i];
        if ( *(_BYTE *)(((unsigned __int64)&v5->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v5 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v5->z);
        }
        v7 = v5->z;
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          __asan_report_store4(v6);
        *(float *)v6 = v7;
        v8 = &pts[i];
        v9 = &slabs[i];
        if ( *(_BYTE *)(((unsigned __int64)&v8->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v8->y);
        }
        v10 = v8->y;
        if ( *(_BYTE *)(((unsigned __int64)&v9->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&v9->y);
        }
        v9->y = v10;
      }
    }
  }
};

// Line 331: range 000000000CC1BDBD-000000000CC1C6BF
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl ClosestPtPointTriangle(const Vector3f *p, const Vector3f *a, const Vector3f *b, const Vector3f *c)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  __m128i v19; // xmm0
  float z; // xmm1_4
  __int64 v21; // xmm0_8
  __int64 v22; // [rsp+8h] [rbp-188h]
  float d1; // [rsp+44h] [rbp-14Ch]
  float d2; // [rsp+48h] [rbp-148h]
  float d3; // [rsp+4Ch] [rbp-144h]
  float d4; // [rsp+50h] [rbp-140h]
  float vc; // [rsp+54h] [rbp-13Ch]
  float d5; // [rsp+5Ch] [rbp-134h]
  float d6; // [rsp+60h] [rbp-130h]
  float vb; // [rsp+64h] [rbp-12Ch]
  float va; // [rsp+6Ch] [rbp-124h]
  float denom; // [rsp+74h] [rbp-11Ch]
  Vector3f v35; // [rsp+80h] [rbp-110h] BYREF
  Vector3f lhs; // [rsp+8Ch] [rbp-104h] BYREF
  Vector3f rhs; // [rsp+98h] [rbp-F8h] BYREF
  Vector3f v38; // [rsp+A4h] [rbp-ECh]
  char v39[224]; // [rsp+B0h] [rbp-E0h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v5 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 12 6 ab:333 64 12 6 ac:334 96 12 6 ap:335 128 12 6 bp:346 160 12 6 cp:365";
  *(_QWORD *)(v5 + 16) = ClosestPtPointTriangle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -219020288;
  v7[536862724] = -219020288;
  v7[536862725] = -202177536;
  *(Vector3f *)((char *)&v4 - 8) = operator-(b, a);
  *(_QWORD *)(v5 + 32) = v8;
  *(_DWORD *)(v5 + 40) = v4.m128i_i32[0];
  *(Vector3f *)((char *)&v4 - 8) = operator-(c, a);
  *(_QWORD *)(v5 + 64) = v9;
  *(_DWORD *)(v5 + 72) = v4.m128i_i32[0];
  *(Vector3f *)((char *)&v4 - 8) = operator-(p, a);
  v11 = v10;
  v12 = v4;
  *(_QWORD *)(v5 + 96) = v11;
  *(_DWORD *)(v5 + 104) = v4.m128i_i32[0];
  Dot((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 96));
  d1 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  *(float *)v12.m128i_i32 = Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 96));
  d2 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  if ( d1 > 0.0 || d2 > 0.0 )
  {
    *(Vector3f *)((char *)&v4 - 8) = operator-(p, b);
    v14 = v13;
    v15 = v4;
    *(_QWORD *)(v5 + 128) = v14;
    *(_DWORD *)(v5 + 136) = v4.m128i_i32[0];
    Dot((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 128));
    d3 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    *(float *)v15.m128i_i32 = Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 128));
    d4 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    if ( d3 < 0.0 || d3 < d4 )
    {
      v16 = (__m128i)LODWORD(d3);
      vc = (float)(d1 * d4) - (float)(d3 * d2);
      if ( vc > 0.0 || (v16 = 0LL, d1 < 0.0) || d3 > 0.0 )
      {
        *(Vector3f *)((char *)&v16 - 8) = operator-(p, c);
        v18 = v17;
        v19 = v16;
        *(_QWORD *)(v5 + 160) = v18;
        *(_DWORD *)(v5 + 168) = v16.m128i_i32[0];
        Dot((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 160));
        d5 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
        *(float *)v19.m128i_i32 = Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 160));
        d6 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
        if ( d6 < 0.0 || d6 < d5 )
        {
          vb = (float)(d5 * d2) - (float)(d1 * d6);
          if ( vb > 0.0 || d2 < 0.0 || d6 > 0.0 )
          {
            va = (float)(d3 * d6) - (float)(d5 * d4);
            if ( va > 0.0 || (float)(d4 - d3) < 0.0 || (float)(d5 - d6) < 0.0 )
            {
              denom = 1.0 / (float)((float)(va + vb) + vc);
              rhs = operator*(vc * denom, (const Vector3f *)(v5 + 64));
              v35 = operator*(vb * denom, (const Vector3f *)(v5 + 32));
              lhs = operator+(a, &v35);
              v38 = operator+(&lhs, &rhs);
            }
            else
            {
              v38 = Lerp(b, c, (float)(d4 - d3) / (float)((float)(d5 - d6) + (float)(d4 - d3)));
            }
          }
          else
          {
            rhs = operator*(d2 / (float)(d2 - d6), (const Vector3f *)(v5 + 64));
            v38 = operator+(a, &rhs);
          }
        }
        else
        {
          if ( ((unsigned __int8)c & 7) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&c->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)c + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&c->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(c, 12LL);
          }
          v38 = *c;
        }
      }
      else
      {
        rhs = operator*(d1 / (float)(d1 - d3), (const Vector3f *)(v5 + 32));
        v38 = operator+(a, &rhs);
      }
    }
    else
    {
      if ( ((unsigned __int8)b & 7) >= *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&b->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)b + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&b->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(b, 12LL);
      }
      v38 = *b;
    }
  }
  else
  {
    if ( ((unsigned __int8)a & 7) >= *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&a->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)a + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&a->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(a, 12LL);
    }
    v38 = *a;
  }
  v22 = *(_QWORD *)&v38.x;
  z = v38.z;
  if ( v39 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v21 = v22;
  result.x = *(float *)&v21;
  result.y = *((float *)&v21 + 1);
  result.z = z;
  return result;
};

// Line 401: range 000000000CD73342-000000000CD736E4
bool __cdecl OverlapQuantBounds(
        const unsigned __int16 *amin,
        const unsigned __int16 *amax,
        const unsigned __int16 *bmin,
        const unsigned __int16 *bmax)
{
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // cx
  char v6; // al
  const unsigned __int16 *v7; // rcx
  unsigned __int16 v8; // si
  const unsigned __int16 *v9; // rcx
  const unsigned __int16 *v10; // rcx
  unsigned __int16 v11; // si
  const unsigned __int16 *v12; // rcx
  char v13; // al
  const unsigned __int16 *v14; // rcx
  unsigned __int16 v15; // si
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rcx
  unsigned __int16 v18; // si
  const unsigned __int16 *v19; // rcx
  bool overlap; // [rsp+2Fh] [rbp-1h]
  bool overlapa; // [rsp+2Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)amin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)amin & 7) + 1) >= *(_BYTE *)(((unsigned __int64)amin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(amin);
  }
  v4 = *amin;
  if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmax & 7) + 1) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(bmax);
  }
  if ( v4 > *bmax )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)amax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)amax & 7) + 1) >= *(_BYTE *)(((unsigned __int64)amax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(amax);
  }
  v5 = *amax;
  if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmin & 7) + 1) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(bmin);
  }
  if ( v5 < *bmin )
LABEL_12:
    v6 = 0;
  else
    v6 = 1;
  overlap = v6;
  v7 = amin + 1;
  if ( *(_BYTE *)(((unsigned __int64)(amin + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amin + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(amin + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(amin + 1);
  }
  v8 = *v7;
  v9 = bmax + 1;
  if ( *(_BYTE *)(((unsigned __int64)(bmax + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmax + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(bmax + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(bmax + 1);
  }
  if ( v8 > *v9 )
    goto LABEL_25;
  v10 = amax + 1;
  if ( *(_BYTE *)(((unsigned __int64)(amax + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amax + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(amax + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(amax + 1);
  }
  v11 = *v10;
  v12 = bmin + 1;
  if ( *(_BYTE *)(((unsigned __int64)(bmin + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmin + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(bmin + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(bmin + 1);
  }
  if ( v11 >= *v12 && overlap )
    v13 = 1;
  else
LABEL_25:
    v13 = 0;
  overlapa = v13;
  v14 = amin + 2;
  if ( *(_BYTE *)(((unsigned __int64)(amin + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amin + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(amin + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(amin + 2);
  }
  v15 = *v14;
  v16 = bmax + 2;
  if ( *(_BYTE *)(((unsigned __int64)(bmax + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmax + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(bmax + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(bmax + 2);
  }
  if ( v15 > *v16 )
    return 0;
  v17 = amax + 2;
  if ( *(_BYTE *)(((unsigned __int64)(amax + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)amax + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(amax + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(amax + 2);
  }
  v18 = *v17;
  v19 = bmin + 2;
  if ( *(_BYTE *)(((unsigned __int64)(bmin + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bmin + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(bmin + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(bmin + 2);
  }
  return v18 >= *v19 && overlapa;
};

// Line 411: range 000000000CC1C6C0-000000000CC1C950
void __cdecl NavMesh::NavMesh(NavMesh *const this)
{
  NaMeshDefaultMemoryCallback *v1; // rbx
  std::less<short unsigned int> comp; // [rsp+1Eh] [rbp-12h] BYREF
  stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> a; // [rsp+1Fh] [rbp-11h] BYREF

  stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>::stl_allocator(&a);
  vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::vector_map(
    &this->m_SurfaceIDToData,
    &comp,
    &a);
  stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>::~stl_allocator(&a);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->m_globalSurfaceRegionIds);
  stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>::stl_allocator((stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> *const)&a);
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::vector_map(
    &this->m_TileLUT,
    (const std::less<std::pair<int,int> > *)&comp,
    (const stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> *)&a);
  stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>::~stl_allocator((stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> *const)&a);
  FreeList<NavMeshTile,false>::FreeList(&this->m_tiles);
  FreeList<NavMeshLink,false>::FreeList(&this->m_links);
  FreeList<OffMeshConnection,false>::FreeList(&this->m_offMeshConnections);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_firstOffMeshConnection);
  }
  this->m_firstOffMeshConnection = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_timeStamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_timeStamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_timeStamp);
  }
  this->m_timeStamp = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_maxRegionId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_maxRegionId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_maxRegionId);
  }
  this->m_maxRegionId = 0;
  v1 = (NaMeshDefaultMemoryCallback *)operator new(
                                        0x18uLL,
                                        0x10uLL,
                                        "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                                        416);
  NaMeshDefaultMemoryCallback::NaMeshDefaultMemoryCallback(v1, this);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_defaultMemoryCallback = v1;
};

// Line 419: range 000000000CC1C952-000000000CC1CC09
void __cdecl NavMesh::~NavMesh(NavMesh *const this)
{
  __int64 v1; // rsi
  unsigned int i; // [rsp+14h] [rbp-Ch]
  NavMeshTile *tile; // [rsp+18h] [rbp-8h]

  for ( i = 0; FreeList<NavMeshTile,false>::Capacity(&this->m_tiles) > i; ++i )
  {
    v1 = i;
    tile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, i);
    if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->header, i);
    if ( tile->header )
    {
      v1 = (((_BYTE)tile + 92) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tile + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&tile->flags);
      }
      if ( (tile->flags & 1) != 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->data, v1);
        free_alloc_internal((void *)tile->data);
        if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        tile->data = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&tile->dataSize);
        }
        tile->dataSize = 0;
      }
      if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->polyLinks, v1);
      free_alloc_internal(tile->polyLinks);
      if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      tile->polyLinks = 0LL;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_defaultMemoryCallback, v1);
  delete_internal<NaMeshDefaultMemoryCallback>(this->m_defaultMemoryCallback);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_defaultMemoryCallback = 0LL;
  FreeList<OffMeshConnection,false>::~FreeList(&this->m_offMeshConnections);
  FreeList<NavMeshLink,false>::~FreeList(&this->m_links);
  FreeList<NavMeshTile,false>::~FreeList(&this->m_tiles);
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::~vector_map(&this->m_TileLUT);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->m_globalSurfaceRegionIds);
  vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::~vector_map(&this->m_SurfaceIDToData);
};

// Line 440: range 000000000CC1CC0A-000000000CC1CFC7
NavMesh::SurfaceData *__fastcall NavMesh::CreateSurface(
        NavMesh *const this,
        SurfaceIDType surfaceID,
        int reserveTileCount,
        unsigned __int64 settings,
        unsigned __int64 pos,
        unsigned __int64 rot)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::mapped_type *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  char v13; // dl
  __int64 v14; // rsi
  __int64 v15; // rdx
  NavMesh::SurfaceData *result; // rax
  NavMesh::SurfaceData *data; // [rsp+38h] [rbp-68h]
  char v23[96]; // [rsp+40h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 2 13 surfaceID:438";
  *(_QWORD *)(v6 + 16) = NavMesh::CreateSurface;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116350;
  *(_WORD *)(v6 + 32) = surfaceID;
  v9 = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::operator[](
         &this->m_SurfaceIDToData,
         (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v6 + 32));
  data = v9;
  if ( *(char *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v9->m_Settings.generateDetailMap + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v9 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->m_Settings.generateDetailMap + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_store_n(v9, 56LL);
  }
  if ( (char)(settings & 7) >= *(_BYTE *)((settings >> 3) + 0x7FFF8000) && *(_BYTE *)((settings >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((settings + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((settings + 55) & 7) >= *(_BYTE *)(((settings + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(settings, 56LL);
  }
  v10 = *(_QWORD *)(settings + 8);
  *(_QWORD *)&data->m_Settings.agentTypeID = *(_QWORD *)settings;
  *(_QWORD *)&data->m_Settings.agentHeight = v10;
  v11 = *(_QWORD *)(settings + 24);
  *(_QWORD *)&data->m_Settings.agentClimb = *(_QWORD *)(settings + 16);
  *(_QWORD *)&data->m_Settings.maxJumpAcrossDistance = v11;
  v12 = *(_QWORD *)(settings + 40);
  *(_QWORD *)&data->m_Settings.manualCellSize = *(_QWORD *)(settings + 32);
  *(_QWORD *)&data->m_Settings.manualTileSize = v12;
  *(_QWORD *)&data->m_Settings.accuratePlacement = *(_QWORD *)(settings + 48);
  if ( *(char *)(((unsigned __int64)&data->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&data->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&data->m_Position, 12LL);
  }
  v13 = *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000);
  v14 = v13 != 0;
  if ( ((char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v14 & ((char)((pos + 11) & 7) >= v13) )
  {
    v14 = 12LL;
    __asan_report_load_n(pos, 12LL);
  }
  *(_QWORD *)&data->m_Position.x = *(_QWORD *)pos;
  data->m_Position.z = *(float *)(pos + 8);
  if ( *(_WORD *)(((unsigned __int64)&data->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_store16(&data->m_Rotation, v14);
  if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((rot + 15) >> 3) + 0x7FFF8000) != 0
    && (char)((rot + 15) & 7) >= *(_BYTE *)(((rot + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(rot, 16LL);
  }
  v15 = *(_QWORD *)(rot + 8);
  *(_QWORD *)&data->m_Rotation.x = *(_QWORD *)rot;
  *(_QWORD *)&data->m_Rotation.z = v15;
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::reserve(
    &this->m_TileLUT,
    reserveTileCount);
  result = data;
  if ( v23 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 453: range 000000000CC1CFC8-000000000CC1D1AA
void __fastcall NavMesh::RemoveSurface(NavMesh *const this, SurfaceIDType surfaceID)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __lhs; // [rsp+20h] [rbp-90h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+28h] [rbp-88h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-80h] BYREF
  char v8[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 2 13 surfaceID:452";
  *(_QWORD *)(v2 + 16) = NavMesh::RemoveSurface;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116350;
  *(_WORD *)(v2 + 32) = surfaceID;
  __rhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
  __lhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
                       &this->m_SurfaceIDToData,
                       (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v2 + 32))._M_current;
  if ( !__gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
          &__lhs,
          &__rhs) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      "RemoveSurface",
      454);
    common::milog::MiLogStream::operator()(
      &v7,
      "Trying to remove NavMesh Surface with unknown id: %i",
      *(unsigned __int16 *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    __asan_handle_no_return(&v7);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x1C6u,
      "void NavMesh::RemoveSurface(SurfaceIDType)");
  }
  vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::erase(
    &this->m_SurfaceIDToData,
    (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 459: range 000000000CC1D1AC-000000000CC20BB7
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMesh::CalculateSurfacesConnectedRegions(
        NavMesh *const this,
        const dynamic_array<int,false,4> *surfaceIDs,
        const dynamic_array<Vector3f,false,4> *centers,
        const Vector3f *size,
        int areaMask)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char *v7; // rbx
  _DWORD *v8; // r12
  size_t v9; // r14
  const int *v10; // r14
  const int *v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // r14
  const int *v16; // rax
  _DWORD *v17; // rdx
  unsigned int *v18; // rax
  unsigned int *v19; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer n; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  const Vector3f *v24; // rdx
  float *v25; // rax
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer v26; // rax
  __int64 v27; // rdx
  const Vector3f *v28; // rdx
  float *p_y; // rax
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer v30; // rax
  char v31; // al
  size_t v32; // r14
  const int *v33; // rax
  _DWORD *v34; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer v35; // rax
  const Vector3f *v36; // rax
  MinMaxAABB *v37; // rax
  MinMaxAABB *v38; // r14
  MinMaxAABB *v39; // r14
  MinMaxAABB *v40; // rax
  MinMaxAABB *v41; // rax
  MinMaxAABB *v42; // rdx
  const Vector3f *v43; // rax
  MinMaxAABB *v44; // rax
  MinMaxAABB *v45; // r14
  MinMaxAABB *v46; // r14
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer v47; // rax
  MinMaxAABB *v48; // rax
  MinMaxAABB *v49; // r14
  MinMaxAABB *v50; // r14
  MinMaxAABB *v51; // rax
  char v52; // dl
  NavMeshTile **v53; // rdx
  char v54; // dl
  int v55; // ecx
  char v56; // dl
  char v57; // dl
  __int64 v58; // rsi
  unsigned __int64 v59; // rax
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v60; // rdx
  TileLookUpData *p_second; // rax
  __int64 tileNavMeshIndex; // rsi
  const NavMeshTile *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rax
  NavMeshPolyRef v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rax
  NavMeshPolyRef v73; // rcx
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  char v76; // dl
  __int64 v77; // rax
  __int64 v78; // rdx
  int v79; // ecx
  char v80; // dl
  __int64 v81; // rax
  __int64 v82; // rdx
  char v83; // cl
  char v84; // dl
  unsigned __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  int v89; // ecx
  char v90; // dl
  __int64 v91; // rax
  __int64 v92; // rdx
  char v93; // cl
  char v94; // dl
  unsigned __int64 v95; // rax
  __int64 v96; // rcx
  size_t v97; // r14
  __int64 v98; // rsi
  unsigned __int64 v99; // rax
  NavMeshTile *v100; // rsi
  const NavMeshDataHeader *header; // rdx
  NavMeshPolyRef v102; // rsi
  unsigned int PolyFlags; // eax
  unsigned int *v104; // rcx
  __int64 v105; // rsi
  NavMeshLink *v106; // rax
  NavMeshPolyRef ref; // rsi
  unsigned int v108; // eax
  unsigned int v109; // eax
  char *v110; // rsi
  size_t v111; // r14
  const int *v112; // rax
  _DWORD *v113; // rdx
  size_t v114; // r14
  const int *v115; // rax
  _DWORD *v116; // rdx
  MinMaxAABB *v117; // r14
  MinMaxAABB *v118; // rax
  double v119; // xmm0_8
  double v120; // xmm0_8
  double v121; // xmm0_8
  double v122; // xmm0_8
  MinMaxAABB *v123; // rax
  MinMaxAABB *v124; // rax
  double v125; // xmm0_8
  double v126; // xmm0_8
  double v127; // xmm0_8
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rsi
  NavMesh::CalculateSurfacesConnectedRegions::SurfaceAllEdgeTiles *v131; // r14
  int v132; // ecx
  NavMesh::CalculateSurfacesConnectedRegions::SurfaceAllEdgeTiles *v133; // rdx
  int v134; // esi
  unsigned __int64 v135; // rax
  NavMesh::CalculateSurfacesConnectedRegions::SurfaceAllEdgeTiles *v136; // r14
  int v137; // ecx
  char v138; // dl
  const NavMeshTile *v139; // rsi
  int *v140; // rdi
  unsigned __int64 v141; // rax
  const NavMeshTile *v142; // rdx
  unsigned __int64 v143; // rax
  __int64 v144; // rsi
  size_t v145; // r14
  __int64 v146; // rsi
  unsigned __int64 v147; // rax
  NavMeshTile *v148; // rsi
  const NavMeshDataHeader *v149; // rdx
  unsigned int v150; // eax
  __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >::pointer v151; // rax
  __int64 second; // rsi
  unsigned __int64 v153; // rcx
  size_t v154; // r14
  __int64 v155; // rsi
  unsigned __int64 v156; // rax
  size_t v157; // r14
  __int64 v158; // rsi
  std::less<int> comp; // [rsp+3Ch] [rbp-614h] BYREF
  stl_allocator<int,16> a; // [rsp+3Dh] [rbp-613h] BYREF
  vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type __y; // [rsp+3Eh] [rbp-612h] BYREF
  vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type surfaceID; // [rsp+40h] [rbp-610h] BYREF
  int agentTypeID; // [rsp+44h] [rbp-60Ch]
  int tileSize; // [rsp+48h] [rbp-608h]
  float cellSize; // [rsp+4Ch] [rbp-604h]
  float centerY; // [rsp+50h] [rbp-600h]
  int i; // [rsp+54h] [rbp-5FCh]
  int i_0; // [rsp+58h] [rbp-5F8h]
  int dir; // [rsp+5Ch] [rbp-5F4h]
  int j; // [rsp+60h] [rbp-5F0h]
  int j_0; // [rsp+64h] [rbp-5ECh]
  int dir_0; // [rsp+68h] [rbp-5E8h]
  int i_1; // [rsp+6Ch] [rbp-5E4h]
  int j_1; // [rsp+70h] [rbp-5E0h]
  unsigned int linkId; // [rsp+74h] [rbp-5DCh]
  int i_2; // [rsp+78h] [rbp-5D8h]
  int j_2; // [rsp+7Ch] [rbp-5D4h]
  int dir_1; // [rsp+80h] [rbp-5D0h]
  int t; // [rsp+84h] [rbp-5CCh]
  unsigned int regionID; // [rsp+88h] [rbp-5C8h]
  int i_3; // [rsp+8Ch] [rbp-5C4h]
  int j_3; // [rsp+90h] [rbp-5C0h]
  int i_4; // [rsp+94h] [rbp-5BCh]
  int i_5; // [rsp+98h] [rbp-5B8h]
  int dir_2; // [rsp+9Ch] [rbp-5B4h]
  unsigned int mask; // [rsp+A0h] [rbp-5B0h]
  float kEpsinon; // [rsp+A4h] [rbp-5ACh]
  int index_1; // [rsp+A8h] [rbp-5A8h]
  int polyCount_1; // [rsp+ACh] [rbp-5A4h]
  int lengtha; // [rsp+B0h] [rbp-5A0h]
  int lengthb; // [rsp+B4h] [rbp-59Ch]
  int polyCount_0; // [rsp+B8h] [rbp-598h]
  int index; // [rsp+BCh] [rbp-594h]
  int polyCount; // [rsp+C0h] [rbp-590h]
  int index_0; // [rsp+C4h] [rbp-58Ch]
  int k_0; // [rsp+C8h] [rbp-588h]
  int k; // [rsp+CCh] [rbp-584h]
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __i; // [rsp+D0h] [rbp-580h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+D8h] [rbp-578h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > v205; // [rsp+E0h] [rbp-570h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > v206; // [rsp+E8h] [rbp-568h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > v207; // [rsp+F0h] [rbp-560h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > v208; // [rsp+F8h] [rbp-558h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > v209; // [rsp+100h] [rbp-550h] BYREF
  NavMesh::CalculateSurfacesConnectedRegions::SurfaceAllEdgeTiles *surfaceEdgeTiles_0; // [rsp+108h] [rbp-548h]
  NavMeshTile **tileArray_0; // [rsp+110h] [rbp-540h]
  NavMeshTile *tile_1; // [rsp+118h] [rbp-538h]
  NavMeshTile *tile_0; // [rsp+120h] [rbp-530h]
  NavMeshPolyRef base_1; // [rsp+128h] [rbp-528h]
  NavMeshPolyRef polyRef_0; // [rsp+130h] [rbp-520h]
  Vector3f *bmin; // [rsp+138h] [rbp-518h]
  Vector3f *bmax; // [rsp+140h] [rbp-510h]
  NavMeshTile **tilesa; // [rsp+148h] [rbp-508h]
  NavMeshTile **tilesb; // [rsp+150h] [rbp-500h]
  NavMeshTile *tile; // [rsp+158h] [rbp-4F8h]
  NavMeshPolyRef base_0; // [rsp+160h] [rbp-4F0h]
  NavMeshPolyRef polyRef; // [rsp+168h] [rbp-4E8h]
  NavMeshLink *link; // [rsp+170h] [rbp-4E0h]
  NavMeshTile *neiTile; // [rsp+178h] [rbp-4D8h]
  MinMaxAABB *rawMinMaxLocalBounds_0; // [rsp+180h] [rbp-4D0h]
  MinMaxAABB *rawMinMaxGlobalBounds_0; // [rsp+188h] [rbp-4C8h]
  MinMaxAABB *rawMinMaxLocalBounds; // [rsp+190h] [rbp-4C0h]
  MinMaxAABB *rawMinMaxGlobalBounds; // [rsp+198h] [rbp-4B8h]
  NavMesh::CalculateSurfacesConnectedRegions::SurfaceAllEdgeTiles *surfaceEdgeTiles; // [rsp+1A0h] [rbp-4B0h]
  NavMeshTile ***tileArray; // [rsp+1A8h] [rbp-4A8h]
  const TileLUT *tileTable; // [rsp+1B0h] [rbp-4A0h]
  NavMeshPolyRef base; // [rsp+1B8h] [rbp-498h]
  common::milog::MiLogStream v233; // [rsp+1C0h] [rbp-490h] BYREF
  char v234[1136]; // [rsp+1E0h] [rbp-470h] BYREF

  v5 = (unsigned __int64)v234;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1088LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 1088);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "21 48 8 14 surfaceIta:735 80 8 15 rootPolyRef:843 112 8 6 it:844 144 8 13 surfaceIt:513 176 12 1"
                        "0 extent:551 208 12 26 globalSpaceRootInWorld:552 240 12 16 boundCentera:764 272 12 16 boundCent"
                        "erb:765 304 16 12 rotation:509 336 16 9 grids:605 368 16 18 gridEdgeLength:606 400 24 12 allTile"
                        "s:486 464 24 15 allSurfaces:488 528 24 28 allSurfaceRawLocalBounds:495 592 24 29 allSurfaceRawGl"
                        "obalBounds:496 656 24 23 allSurfaceEdgeTiles:501 720 24 18 rawLocalBounds:583 784 24 11 overlap:"
                        "745 848 32 19 rootPolyRegions:828 912 36 5 m:590 992 56 12 settings:522";
  *(_QWORD *)(v5 + 16) = NavMesh::CalculateSurfacesConnectedRegions;
  v8 = (_DWORD *)(v5 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61937;
  v8[536862721] = -234881024;
  v8[536862722] = 62194;
  v8[536862722] = -234881024;
  v8[536862723] = 62194;
  v8[536862723] = -234881024;
  v8[536862724] = 62194;
  v8[536862724] = -234881024;
  v8[536862725] = 62194;
  v8[536862725] = 0x4000000;
  v8[536862726] = 62194;
  v8[536862726] = 0x4000000;
  v8[536862727] = 62194;
  v8[536862727] = 0x4000000;
  v8[536862728] = 62194;
  v8[536862728] = 0x4000000;
  v8[536862729] = 62194;
  v8[536862730] = 62194;
  v8[536862731] = 62194;
  v8[536862732] = 62194;
  v8[536862733] = -218959360;
  v8[536862734] = 62194;
  v8[536862735] = -218959360;
  v8[536862736] = 62194;
  v8[536862737] = -218959360;
  v8[536862738] = 62194;
  v8[536862739] = -218959360;
  v8[536862740] = 62194;
  v8[536862741] = -218959360;
  v8[536862742] = 62194;
  v8[536862743] = -218959360;
  v8[536862744] = 62194;
  v8[536862745] = -218959360;
  v8[536862746] = 62194;
  v8[536862747] = -219021312;
  v8[536862748] = 62194;
  v8[536862749] = -234618880;
  v8[536862750] = -218959118;
  v8[536862752] = -218103808;
  v8[536862753] = -202116109;
  mask = areaMask;
  kEpsinon = 0.0000099999997;
  if ( !dynamic_array<int,false,4ul>::size(surfaceIDs) )
  {
    common::milog::MiLogStream::create(
      &v233,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      "CalculateSurfacesConnectedRegions",
      476);
    common::milog::MiLogStream::operator()(&v233, "Surface array is null in connected regions calculation");
    common::milog::MiLogStream::~MiLogStream(&v233);
    goto LABEL_326;
  }
  v9 = dynamic_array<int,false,4ul>::size(surfaceIDs);
  if ( v9 != dynamic_array<Vector3f,false,4ul>::size(centers) )
  {
    common::milog::MiLogStream::create(
      &v233,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      "CalculateSurfacesConnectedRegions",
      482);
    common::milog::MiLogStream::operator()(&v233, "Size of surface data vectors are not consistent");
    common::milog::MiLogStream::~MiLogStream(&v233);
    goto LABEL_326;
  }
  dynamic_array<NavMeshTile *,false,8ul>::dynamic_array((dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400));
  stl_allocator<int,16>::stl_allocator(&a);
  vector_set<int,std::less<int>,stl_allocator<int,16>>::vector_set(
    (vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 464),
    &comp,
    &a);
  stl_allocator<int,16>::~stl_allocator(&a);
  v10 = dynamic_array<int,false,4ul>::end(surfaceIDs);
  v11 = dynamic_array<int,false,4ul>::begin(surfaceIDs);
  vector_set<int,std::less<int>,stl_allocator<int,16>>::assign_clear_duplicates<int const*>(
    (vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 464),
    v11,
    v10);
  dynamic_array<MinMaxAABB,false,4ul>::dynamic_array((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 528));
  dynamic_array<MinMaxAABB,false,4ul>::dynamic_array((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592));
  v12 = dynamic_array<int,false,4ul>::size(surfaceIDs);
  dynamic_array<MinMaxAABB,false,4ul>::resize_uninitialized(
    (dynamic_array<MinMaxAABB,false,4> *const)(v5 + 528),
    v12,
    kIncreaseToExactSize);
  v13 = dynamic_array<int,false,4ul>::size(surfaceIDs);
  dynamic_array<MinMaxAABB,false,4ul>::resize_uninitialized(
    (dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592),
    v13,
    kIncreaseToExactSize);
  dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::dynamic_array((dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656));
  v14 = dynamic_array<int,false,4ul>::size(surfaceIDs);
  dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::resize_uninitialized(
    (dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656),
    v14,
    kIncreaseToExactSize);
  agentTypeID = 0;
  tileSize = 0;
  cellSize = 0.0;
  centerY = 0.0;
  *(Quaternionf *)(v5 + 304) = Quaternionf::identity();
  for ( i = 0; ; ++i )
  {
    v15 = i;
    if ( v15 >= dynamic_array<int,false,4ul>::size(surfaceIDs) )
      break;
    v16 = dynamic_array<int,false,4ul>::operator[](surfaceIDs, i);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    __y = *v17;
    __i._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
                       &this->m_SurfaceIDToData,
                       &__y)._M_current;
    __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData>*>(
      (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 144),
      &__i);
    __rhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
    if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::pair<unsigned short,NavMesh::SurfaceData>*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
           (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 144),
           &__rhs) )
    {
      common::milog::MiLogStream::create(
        &v233,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
        "CalculateSurfacesConnectedRegions",
        516);
      v18 = (unsigned int *)dynamic_array<int,false,4ul>::operator[](surfaceIDs, i);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      common::milog::MiLogStream::operator()(&v233, "Cannot find surface by unknown surfaceID %d", *v19);
      common::milog::MiLogStream::~MiLogStream(&v233);
    }
    else
    {
      n = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 144));
      if ( *(char *)(((unsigned __int64)&n->second >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&n->second.m_Settings.generateDetailMap + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)n + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.m_Settings.generateDetailMap + 3) >> 3)
                                                       + 0x7FFF8000) )
      {
        n = (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer)__asan_report_load_n(&n->second, 56LL);
      }
      v21 = *(_QWORD *)&n->second.m_Settings.agentHeight;
      *(_QWORD *)(v5 + 992) = *(_QWORD *)&n->second.m_Settings.agentTypeID;
      *(_QWORD *)(v5 + 1000) = v21;
      v22 = *(_QWORD *)&n->second.m_Settings.maxJumpAcrossDistance;
      *(_QWORD *)(v5 + 1008) = *(_QWORD *)&n->second.m_Settings.agentClimb;
      *(_QWORD *)(v5 + 1016) = v22;
      v23 = *(_QWORD *)&n->second.m_Settings.manualTileSize;
      *(_QWORD *)(v5 + 1024) = *(_QWORD *)&n->second.m_Settings.manualCellSize;
      *(_QWORD *)(v5 + 1032) = v23;
      *(_QWORD *)(v5 + 1040) = *(_QWORD *)&n->second.m_Settings.accuratePlacement;
      if ( i )
      {
        if ( agentTypeID != *(_DWORD *)(v5 + 992)
          || tileSize != *(_DWORD *)(v5 + 1036)
          || std::abs(cellSize - *(float *)(v5 + 1028)) > 0.0000099999997 )
        {
          goto LABEL_31;
        }
        v28 = dynamic_array<Vector3f,false,4ul>::operator[](centers, i);
        p_y = &v28->y;
        if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_y);
        }
        if ( std::abs(centerY - v28->y) <= 0.0000099999997
          && (v30 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 144)),
              CompareApproximately((const Quaternionf *)(v5 + 304), &v30->second.m_Rotation, 0.0000099999997)) )
        {
          v31 = 0;
        }
        else
        {
LABEL_31:
          v31 = 1;
        }
        if ( v31 )
        {
          common::milog::MiLogStream::create(
            &v233,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
            "CalculateSurfacesConnectedRegions",
            539);
          common::milog::MiLogStream::operator()(
            &v233,
            "Surfaces for connected region calculation must have the same building setting");
          common::milog::MiLogStream::~MiLogStream(&v233);
          goto LABEL_325;
        }
      }
      else
      {
        agentTypeID = *(_DWORD *)(v5 + 992);
        tileSize = *(_DWORD *)(v5 + 1036);
        cellSize = *(float *)(v5 + 1028);
        v24 = dynamic_array<Vector3f,false,4ul>::operator[](centers, 0LL);
        v25 = &v24->y;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        centerY = v24->y;
        v26 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 144));
        if ( *(_WORD *)(((unsigned __int64)&v26->second.m_Rotation >> 3) + 0x7FFF8000) )
          __asan_report_load16(&v26->second.m_Rotation);
        v27 = *(_QWORD *)&v26->second.m_Rotation.z;
        *(_QWORD *)(v5 + 304) = *(_QWORD *)&v26->second.m_Rotation.x;
        *(_QWORD *)(v5 + 312) = v27;
      }
    }
  }
  *(Vector3f *)(v5 + 176) = operator/(size, 2.0);
  if ( *(char *)(((unsigned __int64)&Vector3f::zero >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&Vector3f::zero.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)&Vector3f::zero.z + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Vector3f::zero.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load_n(&Vector3f::zero, 12LL);
  }
  *(Vector3f *)(v5 + 208) = Vector3f::zero;
  for ( i_0 = 0; ; ++i_0 )
  {
    v32 = i_0;
    if ( v32 >= dynamic_array<int,false,4ul>::size(surfaceIDs) )
      break;
    v33 = dynamic_array<int,false,4ul>::operator[](surfaceIDs, i_0);
    v34 = v33;
    if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v33);
    }
    __y = *v34;
    v205._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
                        &this->m_SurfaceIDToData,
                        &__y)._M_current;
    __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData>*>(
      (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 80),
      &v205);
    v206._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
    if ( !__gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::pair<unsigned short,NavMesh::SurfaceData>*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 80),
            &v206) )
    {
      if ( i_0 )
      {
        v43 = dynamic_array<Vector3f,false,4ul>::operator[](centers, i_0);
        AABB::AABB((AABB *const)(v5 + 720), v43, (const Vector3f *)(v5 + 176));
        v44 = dynamic_array<MinMaxAABB,false,4ul>::operator[]((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 528), i_0);
        rawMinMaxLocalBounds_0 = v44;
        if ( ((unsigned __int8)v44 & 7) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v44->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v44 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v44->m_Min.z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v44, 12LL);
        }
        v45 = rawMinMaxLocalBounds_0;
        v45->m_Min = operator-((const Vector3f *)(v5 + 720), (const Vector3f *)(v5 + 732));
        if ( (((unsigned __int8)rawMinMaxLocalBounds_0 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&rawMinMaxLocalBounds_0->m_Max >> 3)
                                                                              + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&rawMinMaxLocalBounds_0->m_Max >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rawMinMaxLocalBounds_0->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rawMinMaxLocalBounds_0 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&rawMinMaxLocalBounds_0->m_Max.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(&rawMinMaxLocalBounds_0->m_Max, 12LL);
        }
        v46 = rawMinMaxLocalBounds_0;
        v46->m_Max = operator+((const Vector3f *)(v5 + 720), (const Vector3f *)(v5 + 732));
        Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v5 + 912));
        *(Quaternionf *)(v5 + 368) = Inverse((const Quaternionf *)(v5 + 304));
        QuaternionToMatrix((const Quaternionf *)(v5 + 368), (Matrix3x3f *)(v5 + 912));
        v47 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 80));
        *(Vector3f *)(v5 + 240) = operator-(&v47->second.m_Position, (const Vector3f *)(v5 + 208));
        *(Vector3f *)(v5 + 272) = Matrix3x3f::MultiplyPoint3(
                                    (const Matrix3x3f *const)(v5 + 912),
                                    (const Vector3f *)(v5 + 240));
        AABB::AABB((AABB *const)(v5 + 784));
        *(Quaternionf *)(v5 + 368) = Quaternionf::identity();
        TransformAABB(
          (const AABB *)(v5 + 720),
          (const Vector3f *)(v5 + 272),
          (const Quaternionf *)(v5 + 368),
          (AABB *)(v5 + 784));
        v48 = dynamic_array<MinMaxAABB,false,4ul>::operator[]((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592), i_0);
        rawMinMaxGlobalBounds_0 = v48;
        if ( ((unsigned __int8)v48 & 7) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v48->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v48 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v48->m_Min.z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v48, 12LL);
        }
        v49 = rawMinMaxGlobalBounds_0;
        v49->m_Min = operator-((const Vector3f *)(v5 + 784), (const Vector3f *)(v5 + 796));
        if ( (((unsigned __int8)rawMinMaxGlobalBounds_0 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&rawMinMaxGlobalBounds_0->m_Max >> 3)
                                                                               + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&rawMinMaxGlobalBounds_0->m_Max >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rawMinMaxGlobalBounds_0->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rawMinMaxGlobalBounds_0 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&rawMinMaxGlobalBounds_0->m_Max.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store_n(&rawMinMaxGlobalBounds_0->m_Max, 12LL);
        }
        v50 = rawMinMaxGlobalBounds_0;
        v50->m_Max = operator+((const Vector3f *)(v5 + 784), (const Vector3f *)(v5 + 796));
      }
      else
      {
        v35 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 80));
        if ( *(char *)(((unsigned __int64)&v35->second.m_Position >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v35->second.m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v35 + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&v35->second.m_Position.z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          v35 = (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer)__asan_report_load_n(&v35->second.m_Position, 12LL);
        }
        *(_QWORD *)(v5 + 208) = *(_QWORD *)&v35->second.m_Position.x;
        *(float *)(v5 + 216) = v35->second.m_Position.z;
        v36 = dynamic_array<Vector3f,false,4ul>::operator[](centers, i_0);
        AABB::AABB((AABB *const)(v5 + 784), v36, (const Vector3f *)(v5 + 176));
        v37 = dynamic_array<MinMaxAABB,false,4ul>::operator[]((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 528), i_0);
        rawMinMaxLocalBounds = v37;
        if ( ((unsigned __int8)v37 & 7) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v37->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v37 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v37->m_Min.z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v37, 12LL);
        }
        v38 = rawMinMaxLocalBounds;
        v38->m_Min = operator-((const Vector3f *)(v5 + 784), (const Vector3f *)(v5 + 796));
        if ( (((unsigned __int8)rawMinMaxLocalBounds + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&rawMinMaxLocalBounds->m_Max >> 3)
                                                                            + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&rawMinMaxLocalBounds->m_Max >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rawMinMaxLocalBounds->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rawMinMaxLocalBounds + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&rawMinMaxLocalBounds->m_Max.z
                                                                              + 3) >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(&rawMinMaxLocalBounds->m_Max, 12LL);
        }
        v39 = rawMinMaxLocalBounds;
        v39->m_Max = operator+((const Vector3f *)(v5 + 784), (const Vector3f *)(v5 + 796));
        v40 = dynamic_array<MinMaxAABB,false,4ul>::operator[]((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592), i_0);
        rawMinMaxGlobalBounds = v40;
        if ( ((unsigned __int8)v40 & 7) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v40->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v40 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v40->m_Min.z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v40, 12LL);
        }
        if ( ((unsigned __int8)rawMinMaxLocalBounds & 7) >= *(_BYTE *)(((unsigned __int64)rawMinMaxLocalBounds >> 3)
                                                                     + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)rawMinMaxLocalBounds >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rawMinMaxLocalBounds->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rawMinMaxLocalBounds + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rawMinMaxLocalBounds->m_Min.z
                                                                              + 3) >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load_n(rawMinMaxLocalBounds, 12LL);
        }
        v41 = rawMinMaxGlobalBounds;
        v42 = rawMinMaxLocalBounds;
        *(_QWORD *)&rawMinMaxGlobalBounds->m_Min.x = *(_QWORD *)&rawMinMaxLocalBounds->m_Min.x;
        v41->m_Min.z = v42->m_Min.z;
        if ( (((unsigned __int8)rawMinMaxGlobalBounds + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&rawMinMaxGlobalBounds->m_Max >> 3)
                                                                             + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&rawMinMaxGlobalBounds->m_Max >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rawMinMaxGlobalBounds->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rawMinMaxGlobalBounds + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&rawMinMaxGlobalBounds->m_Max.z
                                                                               + 3) >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_store_n(&rawMinMaxGlobalBounds->m_Max, 12LL);
        }
        if ( (((unsigned __int8)rawMinMaxLocalBounds + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&rawMinMaxLocalBounds->m_Max >> 3)
                                                                            + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&rawMinMaxLocalBounds->m_Max >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rawMinMaxLocalBounds->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rawMinMaxLocalBounds + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&rawMinMaxLocalBounds->m_Max.z
                                                                              + 3) >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load_n(&rawMinMaxLocalBounds->m_Max, 12LL);
        }
        rawMinMaxGlobalBounds->m_Max = rawMinMaxLocalBounds->m_Max;
      }
      v51 = dynamic_array<MinMaxAABB,false,4ul>::operator[]((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 528), i_0);
      LocalBoundsToGrid(
        v51,
        tileSize,
        cellSize,
        (int *)(v5 + 344),
        (int *)(v5 + 336),
        (int *)(v5 + 348),
        (int *)(v5 + 340));
      *(_DWORD *)(v5 + 376) = *(_DWORD *)(v5 + 340) - *(_DWORD *)(v5 + 348) + 1;
      *(_DWORD *)(v5 + 368) = *(_DWORD *)(v5 + 376);
      *(_DWORD *)(v5 + 380) = *(_DWORD *)(v5 + 336) - *(_DWORD *)(v5 + 344) + 1;
      *(_DWORD *)(v5 + 372) = *(_DWORD *)(v5 + 380);
      surfaceEdgeTiles = dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::operator[](
                           (dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656),
                           i_0);
      for ( dir = 0; dir <= 7; dir += 2 )
      {
        index = dir / 2;
        tileArray = &surfaceEdgeTiles->edgeTiles[dir / 2];
        v52 = *(_BYTE *)(((4LL * (dir / 2) + v5 + 368) >> 3) + 0x7FFF8000);
        if ( v52 != 0 && (char)(((4 * (dir / 2) + v5 + 112) & 7) + 3) >= v52 )
          __asan_report_load4(4LL * (dir / 2) + v5 + 368);
        v53 = (NavMeshTile **)malloc_internal(
                                8LL * *(int *)&v7[4 * index - 720],
                                0x10uLL,
                                kAllocateOptionNone,
                                "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                                618);
        if ( *(_BYTE *)(((unsigned __int64)tileArray >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *tileArray = v53;
        v54 = *(_BYTE *)(((4LL * index + v5 + 368) >> 3) + 0x7FFF8000);
        if ( v54 != 0 && (char)(((4 * index + v5 + 112) & 7) + 3) >= v54 )
          __asan_report_load4(4LL * index + v5 + 368);
        v55 = *(_DWORD *)&v7[4 * index - 720];
        v56 = *(_BYTE *)(((unsigned __int64)&surfaceEdgeTiles->edgeLength[index] >> 3) + 0x7FFF8000);
        if ( v56 != 0 && (char)(((4 * (index + 8) + (_BYTE)surfaceEdgeTiles) & 7) + 3) >= v56 )
          __asan_report_store4(&surfaceEdgeTiles->edgeLength[index]);
        surfaceEdgeTiles->edgeLength[index] = v55;
        for ( j = 0; ; ++j )
        {
          v57 = *(_BYTE *)(((4LL * index + v5 + 368) >> 3) + 0x7FFF8000);
          v58 = ((4 * (_BYTE)index + (_BYTE)v5 + 112) & 7u) + 3;
          if ( v57 != 0 && (char)(((4 * index + v5 + 112) & 7) + 3) >= v57 )
            __asan_report_load4(4LL * index + v5 + 368);
          if ( j >= *(_DWORD *)&v7[4 * index - 720] )
            break;
          if ( *(_BYTE *)(((unsigned __int64)tileArray >> 3) + 0x7FFF8000) )
            __asan_report_load8(tileArray, v58);
          v59 = (unsigned __int64)&(*tileArray)[j];
          if ( *(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
            v59 = __asan_report_store8();
          *(_QWORD *)v59 = 0LL;
        }
      }
      tileTable = &this->m_TileLUT;
      *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v5 + 112) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::begin(&this->m_TileLUT);
      while ( 1 )
      {
        v207._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(tileTable)._M_current;
        if ( !__gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v5 + 112),
                &v207) )
          break;
        v60 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 112));
        p_second = &v60->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        tileNavMeshIndex = (unsigned int)v60->second.tileNavMeshIndex;
        *(_QWORD *)(v5 + 144) = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, tileNavMeshIndex);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->m_defaultMemoryCallback, tileNavMeshIndex);
        v63 = *(const NavMeshTile **)(v5 + 144);
        base = NavMesh::GetPolyRefBase(this, v63, this->m_defaultMemoryCallback);
        v64 = *(_QWORD *)(v5 + 144);
        if ( *(_BYTE *)(((unsigned __int64)(v64 + 16) >> 3) + 0x7FFF8000) )
          v64 = __asan_report_load8(v64 + 16, v63);
        v65 = *(_QWORD *)(v64 + 16);
        if ( *(_BYTE *)(((unsigned __int64)(v65 + 20) >> 3) + 0x7FFF8000) != 0
          && (char)(((v65 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v65 + 20) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v65 + 20);
        }
        polyCount = *(_DWORD *)(v65 + 20);
        v66 = *(_QWORD *)(v5 + 144);
        v67 = 16LL;
        v68 = (__int64)malloc_internal(
                         8LL * polyCount,
                         0x10uLL,
                         kAllocateOptionNone,
                         "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                         636);
        if ( *(_BYTE *)(((unsigned __int64)(v66 + 112) >> 3) + 0x7FFF8000) )
          v68 = __asan_report_store8();
        *(_QWORD *)(v66 + 112) = v68;
        for ( j_0 = 0; j_0 < polyCount; ++j_0 )
        {
          v69 = NavMeshPolyRefHelper::EncodeBasePolyId(0, j_0);
          v70 = *(_QWORD *)(v5 + 144);
          v71 = *(unsigned __int8 *)(((unsigned __int64)(v70 + 112) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v71 )
            v70 = __asan_report_load8(v70 + 112, v71);
          v72 = 8LL * j_0 + *(_QWORD *)(v70 + 112);
          v73 = base | v69;
          v67 = *(unsigned __int8 *)((v72 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v67 )
            v72 = __asan_report_store8();
          *(_QWORD *)v72 = v73;
          v74 = *(_QWORD *)(v5 + 144);
          if ( *(_BYTE *)(((unsigned __int64)(v74 + 104) >> 3) + 0x7FFF8000) )
            v74 = __asan_report_load8(v74 + 104, v67);
          v75 = *(_QWORD *)(v74 + 104) + 4LL * j_0;
          v76 = *(_BYTE *)((v75 >> 3) + 0x7FFF8000);
          LOBYTE(v67) = v76 != 0;
          if ( v76 != 0 && (char)((v75 & 7) + 3) >= v76 )
            __asan_report_store4(v75);
          *(_DWORD *)v75 = -2;
        }
        for ( dir_0 = 0; dir_0 <= 7; dir_0 += 2 )
        {
          index_0 = dir_0 / 2;
          if ( dir_0 && dir_0 != 4 )
          {
            v87 = *(_QWORD *)(v5 + 144);
            if ( *(_BYTE *)(((unsigned __int64)(v87 + 16) >> 3) + 0x7FFF8000) )
              v87 = __asan_report_load8(v87 + 16, v67);
            v88 = *(_QWORD *)(v87 + 16);
            if ( *(_BYTE *)(((unsigned __int64)(v88 + 12) >> 3) + 0x7FFF8000) != 0
              && (char)(((v88 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v88 + 12) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v88 + 12);
            }
            v89 = *(_DWORD *)(v88 + 12);
            v90 = *(_BYTE *)(((4LL * index_0 + v5 + 336) >> 3) + 0x7FFF8000);
            LOBYTE(v67) = v90 != 0;
            if ( v90 != 0 && (char)(((4 * index_0 + v5 + 80) & 7) + 3) >= v90 )
              __asan_report_load4(4LL * index_0 + v5 + 336);
            if ( v89 == *(_DWORD *)&v7[4 * index_0 - 752] )
            {
              v91 = *(_QWORD *)(v5 + 144);
              if ( *(_BYTE *)(((unsigned __int64)(v91 + 16) >> 3) + 0x7FFF8000) )
                v91 = __asan_report_load8(v91 + 16, v67);
              v92 = *(_QWORD *)(v91 + 16);
              v93 = *(_BYTE *)(((unsigned __int64)(v92 + 8) >> 3) + 0x7FFF8000);
              LOBYTE(v67) = v93 != 0;
              if ( v93 != 0 && (char)(((v92 + 8) & 7) + 3) >= v93 )
                __asan_report_load4(v92 + 8);
              k_0 = *(_DWORD *)(v92 + 8) - *(_DWORD *)(v5 + 344);
              if ( k_0 >= 0 )
              {
                v94 = *(_BYTE *)(((4LL * index_0 + v5 + 368) >> 3) + 0x7FFF8000);
                v67 = ((4 * (_BYTE)index_0 + (_BYTE)v5 + 112) & 7u) + 3;
                if ( v94 != 0 && (char)(((4 * index_0 + v5 + 112) & 7) + 3) >= v94 )
                  __asan_report_load4(4LL * index_0 + v5 + 368);
                if ( k_0 < *(_DWORD *)&v7[4 * index_0 - 720] )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&surfaceEdgeTiles->edgeTiles[index_0] >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&surfaceEdgeTiles->edgeTiles[index_0], v67);
                  v95 = (unsigned __int64)&surfaceEdgeTiles->edgeTiles[index_0][k_0];
                  v96 = *(_QWORD *)(v5 + 144);
                  v67 = *(unsigned __int8 *)((v95 >> 3) + 0x7FFF8000);
                  if ( (_BYTE)v67 )
                    v95 = __asan_report_store8();
                  *(_QWORD *)v95 = v96;
                }
              }
            }
          }
          else
          {
            v77 = *(_QWORD *)(v5 + 144);
            if ( *(_BYTE *)(((unsigned __int64)(v77 + 16) >> 3) + 0x7FFF8000) )
              v77 = __asan_report_load8(v77 + 16, v67);
            v78 = *(_QWORD *)(v77 + 16);
            if ( *(_BYTE *)(((unsigned __int64)(v78 + 8) >> 3) + 0x7FFF8000) != 0
              && (char)(((v78 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v78 + 8) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v78 + 8);
            }
            v79 = *(_DWORD *)(v78 + 8);
            v80 = *(_BYTE *)(((4LL * index_0 + v5 + 336) >> 3) + 0x7FFF8000);
            LOBYTE(v67) = v80 != 0;
            if ( v80 != 0 && (char)(((4 * index_0 + v5 + 80) & 7) + 3) >= v80 )
              __asan_report_load4(4LL * index_0 + v5 + 336);
            if ( v79 == *(_DWORD *)&v7[4 * index_0 - 752] )
            {
              v81 = *(_QWORD *)(v5 + 144);
              if ( *(_BYTE *)(((unsigned __int64)(v81 + 16) >> 3) + 0x7FFF8000) )
                v81 = __asan_report_load8(v81 + 16, v67);
              v82 = *(_QWORD *)(v81 + 16);
              v83 = *(_BYTE *)(((unsigned __int64)(v82 + 12) >> 3) + 0x7FFF8000);
              LOBYTE(v67) = v83 != 0;
              if ( v83 != 0 && (char)(((v82 + 12) & 7) + 3) >= v83 )
                __asan_report_load4(v82 + 12);
              k = *(_DWORD *)(v82 + 12) - *(_DWORD *)(v5 + 348);
              if ( k >= 0 )
              {
                v84 = *(_BYTE *)(((4LL * index_0 + v5 + 368) >> 3) + 0x7FFF8000);
                v67 = ((4 * (_BYTE)index_0 + (_BYTE)v5 + 112) & 7u) + 3;
                if ( v84 != 0 && (char)(((4 * index_0 + v5 + 112) & 7) + 3) >= v84 )
                  __asan_report_load4(4LL * index_0 + v5 + 368);
                if ( k < *(_DWORD *)&v7[4 * index_0 - 720] )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&surfaceEdgeTiles->edgeTiles[index_0] >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&surfaceEdgeTiles->edgeTiles[index_0], v67);
                  v85 = (unsigned __int64)&surfaceEdgeTiles->edgeTiles[index_0][k];
                  v86 = *(_QWORD *)(v5 + 144);
                  v67 = *(unsigned __int8 *)((v85 >> 3) + 0x7FFF8000);
                  if ( (_BYTE)v67 )
                    v85 = __asan_report_store8();
                  *(_QWORD *)v85 = v86;
                }
              }
            }
          }
        }
        dynamic_array<NavMeshTile *,false,8ul>::push_back(
          (dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400),
          (NavMeshTile *const *)(v5 + 144));
        __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator++(
          (__gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 112),
          0);
      }
    }
  }
  for ( i_1 = 0; ; ++i_1 )
  {
    v97 = i_1;
    if ( v97 >= dynamic_array<NavMeshTile *,false,8ul>::size((const dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400)) )
      break;
    v98 = i_1;
    v99 = (unsigned __int64)dynamic_array<NavMeshTile *,false,8ul>::operator[](
                              (dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400),
                              i_1);
    if ( *(_BYTE *)((v99 >> 3) + 0x7FFF8000) )
      v99 = __asan_report_load8(v99, v98);
    tile = *(NavMeshTile **)v99;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, v98);
    v100 = tile;
    base_0 = NavMesh::GetPolyRefBase(this, tile, this->m_defaultMemoryCallback);
    if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->header, v100);
    header = tile->header;
    if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&header->polyCount);
    }
    polyCount_0 = header->polyCount;
    for ( j_1 = 0; j_1 < polyCount_0; ++j_1 )
    {
      polyRef = base_0 | NavMeshPolyRefHelper::EncodeBasePolyId(0, j_1);
      v102 = polyRef;
      PolyFlags = NavMesh::GetPolyFlags(this, polyRef);
      if ( (mask & PolyFlags) != 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->polyLinks, v102);
        v104 = &tile->polyLinks[j_1];
        if ( *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(tile->polyLinks) + 4 * j_1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v104 >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&tile->polyLinks[j_1]);
        }
        linkId = *v104;
        while ( linkId != -1 )
        {
          v105 = linkId;
          v106 = FreeList<NavMeshLink,false>::operator[](&this->m_links, linkId);
          link = v106;
          if ( *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v106, v105);
          if ( NavMeshPolyRefHelper::DecodePolyIdType(link->ref) == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&link->next);
            }
            linkId = link->next;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
              __asan_report_load8(link, v105);
            ref = link->ref;
            v108 = NavMesh::GetPolyFlags(this, link->ref);
            if ( (mask & v108) != 0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                __asan_report_load8(link, ref);
              v109 = NavMeshPolyRefHelper::DecodePolyIdTile(link->ref);
              v110 = (char *)v109;
              neiTile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v109);
              if ( neiTile == tile )
                goto LABEL_331;
              *(vector_set<int,std::less<int>,stl_allocator<int,16> >::iterator *)(v5 + 144) = vector_set<int,std::less<int>,stl_allocator<int,16>>::end((vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 464));
              if ( *(_BYTE *)(((unsigned __int64)neiTile >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)neiTile >> 3) + 0x7FFF8000) <= 1 )
              {
                __asan_report_load2(neiTile);
              }
              surfaceID = neiTile->surfaceID;
              *(vector_set<int,std::less<int>,stl_allocator<int,16> >::iterator *)(v5 + 48) = vector_set<int,std::less<int>,stl_allocator<int,16>>::find(
                                                                                                (vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 464),
                                                                                                &surfaceID);
              v110 = (char *)(v5 + 144);
              if ( !__gnu_cxx::operator==<int *,std::vector<int,stl_allocator<int,16>>>(
                      (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v5 + 48),
                      (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v5 + 144)) )
              {
LABEL_331:
                if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                  __asan_report_load8(link, v110);
                NavMesh::ConnectPolyRegionRoots(this, polyRef, link->ref, 1);
                if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&link->next);
                }
                linkId = link->next;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&link->next);
                }
                linkId = link->next;
              }
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&link->next);
              }
              linkId = link->next;
            }
          }
        }
      }
    }
  }
  for ( i_2 = 0; ; ++i_2 )
  {
    v111 = i_2;
    if ( v111 >= dynamic_array<int,false,4ul>::size(surfaceIDs) )
      break;
    v112 = dynamic_array<int,false,4ul>::operator[](surfaceIDs, i_2);
    v113 = v112;
    if ( *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v112 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v112);
    }
    __y = *v113;
    v208._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
                        &this->m_SurfaceIDToData,
                        &__y)._M_current;
    __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData>*>(
      (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 48),
      &v208);
    v209._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
    if ( !__gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::pair<unsigned short,NavMesh::SurfaceData>*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 48),
            &v209) )
    {
      for ( j_2 = i_2 + 1; ; ++j_2 )
      {
        v114 = j_2;
        if ( v114 >= dynamic_array<int,false,4ul>::size(surfaceIDs) )
          break;
        v115 = dynamic_array<int,false,4ul>::operator[](surfaceIDs, j_2);
        v116 = v115;
        if ( *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v115 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v115);
        }
        __y = *v116;
        *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator *)(v5 + 80) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_SurfaceIDToData, &__y);
        __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData>*>(
          (__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 144),
          (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 80));
        *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::iterator *)(v5 + 112) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData);
        if ( !__gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::pair<unsigned short,NavMesh::SurfaceData>*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
                (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 144),
                (const __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 112)) )
        {
          MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v5 + 784));
          v117 = dynamic_array<MinMaxAABB,false,4ul>::operator[](
                   (dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592),
                   j_2);
          v118 = dynamic_array<MinMaxAABB,false,4ul>::operator[](
                   (dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592),
                   i_2);
          if ( IntersectionAABBAABB(v118, v117, (MinMaxAABB *)(v5 + 784)) )
          {
            bmin = (Vector3f *)(v5 + 784);
            bmax = (Vector3f *)(v5 + 796);
            if ( *(_BYTE *)(((v5 + 796) >> 3) + 0x7FFF8000) != 0
              && (char)(((v5 + 28) & 7) + 3) >= *(_BYTE *)(((v5 + 796) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v5 + 796);
            }
            *(float *)&v119 = bmax->x;
            if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
            {
              v119 = __asan_report_load4(bmin);
            }
            if ( (float)(*(float *)&v119 - bmin->x) >= 0.0000099999997 )
              goto LABEL_226;
            if ( *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)bmax + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&bmax->z);
            }
            *(float *)&v120 = bmax->z;
            if ( *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)bmin + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) )
            {
              v120 = __asan_report_load4(&bmin->z);
            }
            if ( (float)(*(float *)&v120 - bmin->z) >= 0.0000099999997 )
            {
LABEL_226:
              if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(bmax);
              }
              *(float *)&v121 = bmax->x;
              if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
              {
                v121 = __asan_report_load4(bmin);
              }
              if ( (float)(*(float *)&v121 - bmin->x) >= 0.0000099999997 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)bmax + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(&bmax->z);
                }
                *(float *)&v122 = bmax->z;
                if ( *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)bmin + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) )
                {
                  v122 = __asan_report_load4(&bmin->z);
                }
                if ( (float)(*(float *)&v122 - bmin->z) >= 0.0000099999997 )
                {
                  common::milog::MiLogStream::create(
                    &v233,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                    "CalculateSurfacesConnectedRegions",
                    759);
                  common::milog::MiLogStream::operator()(
                    &v233,
                    "Surfaces have overlaps areas, currently only support contiguous NavMeshSurfaces");
                  common::milog::MiLogStream::~MiLogStream(&v233);
                  continue;
                }
              }
              v123 = dynamic_array<MinMaxAABB,false,4ul>::operator[](
                       (dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592),
                       i_2);
              *(Vector3f *)(v5 + 240) = MinMaxAABB::CalculateCenter(v123);
              v124 = dynamic_array<MinMaxAABB,false,4ul>::operator[](
                       (dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592),
                       j_2);
              *(Vector3f *)(v5 + 272) = MinMaxAABB::CalculateCenter(v124);
              dir_1 = 255;
              if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(bmax);
              }
              *(float *)&v125 = bmax->x;
              if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
              {
                v125 = __asan_report_load4(bmin);
              }
              if ( (float)(*(float *)&v125 - bmin->x) >= 0.0000099999997 )
              {
                if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(bmax);
                }
                *(float *)&v127 = bmax->x;
                if ( *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)bmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmin >> 3) + 0x7FFF8000) )
                {
                  v127 = __asan_report_load4(bmin);
                }
                *(float *)&v127 = *(float *)&v127 - bmin->x;
                if ( *(_BYTE *)(((unsigned __int64)size >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)size & 7) + 3) >= *(_BYTE *)(((unsigned __int64)size >> 3) + 0x7FFF8000) )
                {
                  v127 = __asan_report_load4(size);
                }
                if ( std::abs(*(float *)&v127 - size->x) >= 0.0000099999997 )
                {
                  common::milog::MiLogStream::create(
                    &v233,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                    "CalculateSurfacesConnectedRegions",
                    793);
                  common::milog::MiLogStream::operator()(
                    &v233,
                    "Surfaces should be aligned, currently only support aligned NavMeshSurfaces");
                  common::milog::MiLogStream::~MiLogStream(&v233);
                  continue;
                }
                if ( *(float *)(v5 + 280) <= *(float *)(v5 + 248) )
                  dir_1 = 6;
                else
                  dir_1 = 2;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)bmax + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmax->z >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(&bmax->z);
                }
                *(float *)&v126 = bmax->z;
                if ( *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)bmin + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bmin->z >> 3) + 0x7FFF8000) )
                {
                  v126 = __asan_report_load4(&bmin->z);
                }
                *(float *)&v126 = *(float *)&v126 - bmin->z;
                if ( *(_BYTE *)(((unsigned __int64)&size->z >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)size + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&size->z >> 3) + 0x7FFF8000) )
                {
                  v126 = __asan_report_load4(&size->z);
                }
                if ( std::abs(*(float *)&v126 - size->z) >= 0.0000099999997 )
                {
                  common::milog::MiLogStream::create(
                    &v233,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                    "CalculateSurfacesConnectedRegions",
                    772);
                  common::milog::MiLogStream::operator()(
                    &v233,
                    "Surfaces should be aligned, currently only support aligned NavMeshSurfaces");
                  common::milog::MiLogStream::~MiLogStream(&v233);
                  continue;
                }
                if ( *(float *)(v5 + 272) <= *(float *)(v5 + 240) )
                  dir_1 = 4;
                else
                  dir_1 = 0;
              }
              v128 = (__int64)dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::operator[](
                                (dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656),
                                i_2);
              v129 = (unsigned int)(dir_1 / 2);
              if ( *(_BYTE *)(((unsigned __int64)(v128 + 8LL * (int)v129) >> 3) + 0x7FFF8000) )
                v128 = __asan_report_load8(v128 + 8LL * (int)v129, v129);
              tilesa = *(NavMeshTile ***)(v128 + 8LL * (int)v129);
              v130 = j_2;
              v131 = dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::operator[](
                       (dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656),
                       j_2);
              v132 = TileLUTHelper::OppositeTile(dir_1) / 2;
              if ( *(_BYTE *)(((unsigned __int64)&v131->edgeTiles[v132] >> 3) + 0x7FFF8000) )
                __asan_report_load8(&v131->edgeTiles[v132], v130);
              tilesb = v131->edgeTiles[v132];
              v133 = dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::operator[](
                       (dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656),
                       i_2);
              v134 = dir_1 / 2;
              v135 = (unsigned __int64)&v133->edgeLength[dir_1 / 2];
              if ( *(_BYTE *)((v135 >> 3) + 0x7FFF8000) != 0
                && (char)((v135 & 7) + 3) >= *(_BYTE *)((v135 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v135);
              }
              lengtha = v133->edgeLength[v134];
              v139 = (const NavMeshTile *)j_2;
              v136 = dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::operator[](
                       (dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656),
                       j_2);
              v137 = TileLUTHelper::OppositeTile(dir_1) / 2;
              v138 = *(_BYTE *)(((unsigned __int64)&v136->edgeLength[v137] >> 3) + 0x7FFF8000);
              LOBYTE(v139) = v138 != 0;
              v140 = (int *)((((_BYTE)v136 + 4 * ((_BYTE)v137 + 8)) & 7u) + 3);
              if ( v138 != 0 && (char)((((_BYTE)v136 + 4 * (v137 + 8)) & 7) + 3) >= v138 )
              {
                v140 = &v136->edgeLength[v137];
                __asan_report_load4(v140);
              }
              lengthb = v136->edgeLength[v137];
              if ( lengtha != lengthb )
              {
                __asan_handle_no_return(v140);
                __assert_fail(
                  "lengtha == lengthb",
                  "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                  0x331u,
                  "void NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&, const dynamic_array<Vector3"
                  "f>&, const Vector3f&, int)");
              }
              for ( t = 0; t < lengtha; ++t )
              {
                v141 = (unsigned __int64)&tilesb[t];
                if ( *(_BYTE *)((v141 >> 3) + 0x7FFF8000) )
                  v141 = __asan_report_load8(&tilesb[t], v139);
                v142 = *(const NavMeshTile **)v141;
                v143 = (unsigned __int64)&tilesa[t];
                v144 = *(unsigned __int8 *)((v143 >> 3) + 0x7FFF8000);
                if ( (_BYTE)v144 )
                  v143 = __asan_report_load8(&tilesa[t], v144);
                v139 = *(const NavMeshTile **)v143;
                NavMesh::ConnectTileRegionsBetweenSurfaces(
                  this,
                  *(const NavMeshTile **)v143,
                  v142,
                  dir_1,
                  cellSize,
                  mask,
                  1);
              }
            }
          }
        }
      }
    }
  }
  stl_allocator<std::pair<unsigned long long,unsigned short>,16>::stl_allocator((stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> *const)&a);
  vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::vector_map(
    (vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const)(v5 + 848),
    (const std::less<long long unsigned int> *)&comp,
    (const stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> *)&a);
  stl_allocator<std::pair<unsigned long long,unsigned short>,16>::~stl_allocator((stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> *const)&a);
  regionID = 0;
  for ( i_3 = 0; ; ++i_3 )
  {
    v145 = i_3;
    if ( v145 >= dynamic_array<NavMeshTile *,false,8ul>::size((const dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400)) )
      break;
    v146 = i_3;
    v147 = (unsigned __int64)dynamic_array<NavMeshTile *,false,8ul>::operator[](
                               (dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400),
                               i_3);
    if ( *(_BYTE *)((v147 >> 3) + 0x7FFF8000) )
      v147 = __asan_report_load8(v147, v146);
    tile_0 = *(NavMeshTile **)v147;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, v146);
    v148 = tile_0;
    base_1 = NavMesh::GetPolyRefBase(this, tile_0, this->m_defaultMemoryCallback);
    if ( *(_BYTE *)(((unsigned __int64)&tile_0->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile_0->header, v148);
    v149 = tile_0->header;
    if ( *(_BYTE *)(((unsigned __int64)&v149->polyCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v149 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v149->polyCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v149->polyCount);
    }
    polyCount_1 = v149->polyCount;
    for ( j_3 = 0; j_3 < polyCount_1; ++j_3 )
    {
      polyRef_0 = base_1 | NavMeshPolyRefHelper::EncodeBasePolyId(0, j_3);
      v150 = NavMesh::GetPolyFlags(this, polyRef_0);
      if ( (mask & v150) != 0 )
      {
        *(_QWORD *)(v5 + 80) = NavMesh::FindPolyRegionRoot(this, polyRef_0, 1);
        *(vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator *)(v5 + 112) = vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::find((vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const)(v5 + 848), (const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::key_type *)(v5 + 80));
        *(vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::iterator *)(v5 + 144) = vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::end((vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const)(v5 + 848));
        if ( __gnu_cxx::operator==<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>(
               (const __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > *)(v5 + 112),
               (const __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > *)(v5 + 144)) )
        {
          __y = regionID;
          *(std::pair<long long unsigned int,short unsigned int> *)(v5 + 336) = std::make_pair<unsigned long long &,unsigned short>(
                                                                                  (unsigned __int64 *)(v5 + 80),
                                                                                  &__y);
          *(std::pair<__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >,bool> *)(v5 + 368) = vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::insert((vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const)(v5 + 848), (const vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> >::value_type *)(v5 + 336));
          *(_QWORD *)(v5 + 112) = *(_QWORD *)(v5 + 368);
          ++regionID;
        }
        v151 = __gnu_cxx::__normal_iterator<std::pair<unsigned long long,unsigned short> *,std::vector<std::pair<unsigned long long,unsigned short>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > > *const)(v5 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&v151->second >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v151->second >> 3) + 0x7FFF8000) <= 1 )
        {
          v151 = (__gnu_cxx::__normal_iterator<std::pair<long long unsigned int,short unsigned int>*,std::vector<std::pair<long long unsigned int,short unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > >::pointer)__asan_report_load2(&v151->second);
        }
        second = v151->second;
        if ( *(_BYTE *)(((unsigned __int64)&tile_0->polyRegions >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile_0->polyRegions, second);
        v153 = (unsigned __int64)&tile_0->polyRegions[j_3];
        if ( *(_BYTE *)((v153 >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(tile_0->polyRegions) + 4 * j_3) & 7) + 3) >= *(_BYTE *)((v153 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&tile_0->polyRegions[j_3]);
        }
        *(_DWORD *)v153 = (unsigned __int16)second;
      }
    }
  }
  common::milog::MiLogStream::create(
    &v233,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
    "CalculateSurfacesConnectedRegions",
    858);
  common::milog::MiLogStream::operator()(&v233, "Unity has used %u/%u regions.", regionID, 0x7FFFLL);
  common::milog::MiLogStream::~MiLogStream(&v233);
  for ( i_4 = 0; ; ++i_4 )
  {
    v154 = i_4;
    if ( v154 >= dynamic_array<NavMeshTile *,false,8ul>::size((const dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400)) )
      break;
    v155 = i_4;
    v156 = (unsigned __int64)dynamic_array<NavMeshTile *,false,8ul>::operator[](
                               (dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400),
                               i_4);
    if ( *(_BYTE *)((v156 >> 3) + 0x7FFF8000) )
      v156 = __asan_report_load8(v156, v155);
    tile_1 = *(NavMeshTile **)v156;
    if ( *(_BYTE *)(((unsigned __int64)&tile_1->polyRoots >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile_1->polyRoots, v155);
    free_alloc_internal(tile_1->polyRoots);
    if ( *(_BYTE *)(((unsigned __int64)&tile_1->polyRoots >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    tile_1->polyRoots = 0LL;
  }
  for ( i_5 = 0; ; ++i_5 )
  {
    v157 = i_5;
    if ( v157 >= dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::size((const dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656)) )
      break;
    v158 = i_5;
    surfaceEdgeTiles_0 = dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::operator[](
                           (dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656),
                           i_5);
    for ( dir_2 = 0; dir_2 <= 7; dir_2 += 2 )
    {
      index_1 = dir_2 / 2;
      if ( *(_BYTE *)(((unsigned __int64)&surfaceEdgeTiles_0->edgeTiles[dir_2 / 2] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&surfaceEdgeTiles_0->edgeTiles[dir_2 / 2], v158);
      tileArray_0 = surfaceEdgeTiles_0->edgeTiles[index_1];
      free_alloc_internal(tileArray_0);
      tileArray_0 = 0LL;
    }
  }
  vector_map<unsigned long long,unsigned short,std::less<unsigned long long>,stl_allocator<std::pair<unsigned long long,unsigned short>,16>>::~vector_map((vector_map<long long unsigned int,short unsigned int,std::less<long long unsigned int>,stl_allocator<std::pair<long long unsigned int,short unsigned int>,16> > *const)(v5 + 848));
LABEL_325:
  dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(dynamic_array const&<int,false,4ul>,dynamic_array const&<Vector3f,false,4ul>,dynamic_array const const&,int)::SurfaceAllEdgeTiles,false,8ul>::~dynamic_array((dynamic_array<NavMesh::CalculateSurfacesConnectedRegions(const dynamic_array<int>&,const dynamic_array<Vector3f>&,const Vector3f&,int)::SurfaceAllEdgeTiles,false,8> *const)(v5 + 656));
  dynamic_array<MinMaxAABB,false,4ul>::~dynamic_array((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 592));
  dynamic_array<MinMaxAABB,false,4ul>::~dynamic_array((dynamic_array<MinMaxAABB,false,4> *const)(v5 + 528));
  vector_set<int,std::less<int>,stl_allocator<int,16>>::~vector_set((vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v5 + 464));
  dynamic_array<NavMeshTile *,false,8ul>::~dynamic_array((dynamic_array<NavMeshTile*,false,8> *const)(v5 + 400));
LABEL_326:
  if ( v234 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v8 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v8 + 2147450880 - (((_DWORD)v8 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v5 >> 3) + 0x7FFF8080) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1088LL, v234);
  }
};

// Line 883: range 000000000CC20BB8-000000000CC20D08
NavMesh::SurfaceData *__fastcall NavMesh::GetSurfaceSettings(const NavMesh *const this, SurfaceIDType surfaceID)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  NavMesh::SurfaceData *result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 2 13 surfaceID:882 64 8 9 found:884";
  *(_QWORD *)(v2 + 16) = NavMesh::GetSurfaceSettings;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -202116352;
  *(_WORD *)(v2 + 48) = surfaceID;
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v2 + 64) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_SurfaceIDToData, (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v2 + 48));
  __rhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v2 + 64),
         &__rhs) )
  {
    result = 0LL;
  }
  else
  {
    result = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
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

// Line 891: range 000000000CC20D0A-000000000CC21009
void __fastcall NavMesh::SetSurfaceSettings(NavMesh *const this, SurfaceIDType surfaceID, unsigned __int64 settings)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 n; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __lhs; // [rsp+30h] [rbp-90h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+38h] [rbp-88h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 2 13 surfaceID:890";
  *(_QWORD *)(v3 + 16) = NavMesh::SetSurfaceSettings;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116350;
  *(_WORD *)(v3 + 32) = surfaceID;
  __rhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
  __lhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
                       &this->m_SurfaceIDToData,
                       (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v3 + 32))._M_current;
  if ( !__gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
          &__lhs,
          &__rhs) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      "SetSurfaceSettings",
      892);
    common::milog::MiLogStream::operator()(
      &v13,
      "Trying to change settings for NavMesh Surface with unknown id: %i",
      *(unsigned __int16 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    __asan_handle_no_return(&v13);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x37Cu,
      "void NavMesh::SetSurfaceSettings(SurfaceIDType, const NavMeshBuildSettings&)");
  }
  n = (unsigned __int64)vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::operator[](
                          &this->m_SurfaceIDToData,
                          (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v3 + 32));
  if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((n + 55) >> 3) + 0x7FFF8000) != 0 && (char)((n + 55) & 7) >= *(_BYTE *)(((n + 55) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_store_n(n, 56LL);
  }
  if ( (char)(settings & 7) >= *(_BYTE *)((settings >> 3) + 0x7FFF8000) && *(_BYTE *)((settings >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((settings + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((settings + 55) & 7) >= *(_BYTE *)(((settings + 55) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(settings, 56LL);
  }
  v7 = *(_QWORD *)(settings + 8);
  *(_QWORD *)n = *(_QWORD *)settings;
  *(_QWORD *)(n + 8) = v7;
  v8 = *(_QWORD *)(settings + 24);
  *(_QWORD *)(n + 16) = *(_QWORD *)(settings + 16);
  *(_QWORD *)(n + 24) = v8;
  v9 = *(_QWORD *)(settings + 40);
  *(_QWORD *)(n + 32) = *(_QWORD *)(settings + 32);
  *(_QWORD *)(n + 40) = v9;
  *(_QWORD *)(n + 48) = *(_QWORD *)(settings + 48);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 898: range 000000000CC2100A-000000000CC2131C
__int64 __fastcall NavMesh::GetSurfaceTransform(
        const NavMesh *const this,
        SurfaceIDType surfaceID,
        unsigned __int64 pos,
        unsigned __int64 rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer v8; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > >::pointer v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+28h] [rbp-88h] BYREF
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 2 13 surfaceID:897 64 8 9 found:899";
  *(_QWORD *)(v4 + 16) = NavMesh::GetSurfaceTransform;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234688015;
  v6[536862722] = -202116352;
  *(_WORD *)(v4 + 48) = surfaceID;
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v4 + 64) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_SurfaceIDToData, (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v4 + 48));
  __rhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v4 + 64),
         &__rhs) )
  {
    result = 0x80000000LL;
  }
  else
  {
    v8 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v4 + 64));
    if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(pos, 12LL);
    }
    if ( *(char *)(((unsigned __int64)&v8->second.m_Position >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v8->second.m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v8 + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->second.m_Position.z + 3) >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load_n(&v8->second.m_Position, 12LL);
    }
    *(_QWORD *)pos = *(_QWORD *)&v8->second.m_Position.x;
    *(float *)(pos + 8) = v8->second.m_Position.z;
    v9 = __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v4 + 64));
    if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((rot + 15) >> 3) + 0x7FFF8000) != 0
      && (char)((rot + 15) & 7) >= *(_BYTE *)(((rot + 15) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(rot, 16LL);
    }
    if ( *(_WORD *)(((unsigned __int64)&v9->second.m_Rotation >> 3) + 0x7FFF8000) )
      __asan_report_load16(&v9->second.m_Rotation);
    v10 = *(_QWORD *)&v9->second.m_Rotation.x;
    v11 = *(_QWORD *)&v9->second.m_Rotation.z;
    *(_QWORD *)rot = v10;
    *(_QWORD *)(rot + 8) = v11;
    result = 0x40000000LL;
  }
  if ( v15 == (char *)v4 )
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

// Line 912: range 000000000CC2131E-000000000CC21B9A
int __cdecl NavMesh::FindConnectingPolys(
        const NavMesh *const this,
        const Vector3f *fromPoints,
        const int fromPointCount,
        const NavMeshTile *tile,
        int side,
        NavMeshPolyRef *con,
        PortalArea *conarea,
        int maxcon,
        float portalHeight)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r12
  int result; // eax
  __m128i v13; // xmm0
  __int64 k; // rax
  __int64 v15; // r14
  Vector3f *v16; // r15
  __int64 m; // rax
  unsigned __int64 v18; // rsi
  const NavMeshDataHeader *header; // rdx
  char v20; // cl
  char v21; // dl
  const Vector3f *verts; // rcx
  char v23; // dl
  float *v24; // rax
  float *v25; // rdx
  unsigned __int64 v26; // rsi
  float v27; // xmm0_4
  const float *v28; // rax
  unsigned int *v29; // rdx
  PortalArea *v30; // rcx
  NavMeshPolyRef v31; // rdx
  unsigned __int64 v32; // rax
  NavMeshPolyRef v33; // rcx
  int n; // [rsp+44h] [rbp-2FCh]
  int i; // [rsp+48h] [rbp-2F8h]
  int j; // [rsp+4Ch] [rbp-2F4h]
  float fromCoord; // [rsp+54h] [rbp-2ECh]
  int nv; // [rsp+58h] [rbp-2E8h]
  float toCoord; // [rsp+5Ch] [rbp-2E4h]
  NavMeshPolyRef base; // [rsp+70h] [rbp-2D0h]
  NavMeshPoly *poly; // [rsp+78h] [rbp-2C8h]
  const Vector2f *toMax; // [rsp+88h] [rbp-2B8h]
  char v48[688]; // [rsp+90h] [rbp-2B0h] BYREF

  v9 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_4(640LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "4 48 4 16 toPointCount:930 64 128 13 fromSlabs:921 224 128 11 toSlabs:929 384 192 12 toPoints:928";
  *(_QWORD *)(v9 + 16) = NavMesh::FindConnectingPolys;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -234556943;
  v11[536862726] = -218959118;
  v11[536862731] = -218959118;
  v11[536862738] = -202116109;
  v11[536862739] = -202116109;
  if ( tile )
  {
    if ( fromPointCount > 1 )
    {
      v13 = (__m128i)0x3F000000u;
      for ( k = 15LL; k >= 0; --k )
        ;
      MakeDetailEdgeSlabs((Vector2f *)(v9 + 64), fromPoints, fromPointCount, side);
      *(float *)v13.m128i_i32 = GetSlabCoord(fromPoints, side);
      fromCoord = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
      v15 = 15LL;
      v16 = (Vector3f *)(v9 + 384);
      while ( v15 >= 0 )
      {
        Vector3f::Vector3f(v16++);
        --v15;
      }
      for ( m = 15LL; m >= 0; --m )
        ;
      *(_DWORD *)(v9 + 48) = 0;
      n = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_defaultMemoryCallback, (unsigned int)side);
      v18 = (unsigned __int64)tile;
      base = NavMesh::GetPolyRefBase(this, tile, this->m_defaultMemoryCallback);
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->header, v18);
        header = tile->header;
        v20 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
        LOBYTE(v18) = v20 != 0;
        if ( v20 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v20 )
          *(double *)v13.m128i_i64 = __asan_report_load4(&header->polyCount);
        if ( i >= header->polyCount )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->polys, v18);
        poly = &tile->polys[i];
        v18 = ((_BYTE)poly + 28) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
          && (char)v18 >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&poly->vertCount);
        }
        nv = poly->vertCount;
        for ( j = 0; j < nv; ++j )
        {
          v21 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          v18 = ((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1;
          if ( v21 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v21 )
            __asan_report_load2(&poly->neis[j]);
          if ( ((unsigned __int16)side | 0x8000) == poly->neis[j] )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->verts, v18);
            verts = tile->verts;
            v23 = *(_BYTE *)(((unsigned __int64)&poly->verts[j] >> 3) + 0x7FFF8000);
            if ( v23 != 0 && (char)(((2 * j + (_BYTE)poly) & 7) + 1) >= v23 )
              __asan_report_load2(&poly->verts[j]);
            v18 = (unsigned int)side;
            *(float *)v13.m128i_i32 = GetSlabCoord(&verts[poly->verts[j]], side);
            toCoord = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
            v13 = (__m128i)LODWORD(fromCoord);
            if ( Abs(fromCoord - toCoord) <= 0.0099999998 )
            {
              v18 = (unsigned __int64)tile;
              NavMesh::GetPolyEdgeDetailPoints(this, tile, i, j, (Vector3f *)(v9 + 384), (int *)(v9 + 48), 16);
              if ( *(_DWORD *)(v9 + 48) )
              {
                MakeDetailEdgeSlabs((Vector2f *)(v9 + 224), (const Vector3f *)(v9 + 384), *(_DWORD *)(v9 + 48), side);
                toMax = (const Vector2f *)(8LL * (*(_DWORD *)(v9 + 48) - 1) + v9 + 224);
                v18 = (unsigned int)fromPointCount;
                v13 = (__m128i)0x3C23D70Au;
                if ( OverlapDetailSlabs(
                       (const Vector2f *)(v9 + 64),
                       fromPointCount,
                       (const Vector2f *)(v9 + 224),
                       *(_DWORD *)(v9 + 48),
                       0.0099999998,
                       0.5 * portalHeight) )
                {
                  if ( n < maxcon )
                  {
                    v24 = (float *)std::max<float>((const float *)(v9 + 64), (const float *)(v9 + 224));
                    v25 = v24;
                    v26 = (unsigned __int64)&conarea[n];
                    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v24);
                    }
                    v27 = *v25;
                    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0
                      && (char)((v26 & 7) + 3) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store4(v26);
                    }
                    *(float *)v26 = v27;
                    v28 = std::min<float>((const float *)(8LL * (fromPointCount - 1) + v9 + 64), (const float *)toMax);
                    v29 = (unsigned int *)v28;
                    v30 = &conarea[n];
                    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v28);
                    }
                    v13 = (__m128i)*v29;
                    if ( *(_BYTE *)(((unsigned __int64)&v30->max >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)v30 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->max >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store4(&v30->max);
                    }
                    LODWORD(v30->max) = v13.m128i_i32[0];
                    v31 = NavMeshPolyRefHelper::EncodeBasePolyId(0, i);
                    v32 = (unsigned __int64)&con[n];
                    v33 = base | v31;
                    v18 = *(unsigned __int8 *)((v32 >> 3) + 0x7FFF8000);
                    if ( (_BYTE)v18 )
                      v32 = __asan_report_store8();
                    *(_QWORD *)v32 = v33;
                    ++n;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      result = n;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v48 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v9 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8048) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 982: range 000000000CC21B9C-000000000CC21DC1
void __cdecl NavMesh::ConnectPolyRegionRoots(
        NavMesh *const this,
        NavMeshPolyRef polya,
        NavMeshPolyRef polyb,
        bool optimize)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  NavMeshPolyRef roota; // [rsp+28h] [rbp-B8h]
  NavMeshPolyRef rootb; // [rsp+30h] [rbp-B0h]
  NavMeshTile *rootaTile; // [rsp+38h] [rbp-A8h]
  char v14[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 8 salt:991 48 4 9 alloc:991 64 4 6 it:991 80 4 8 type:991 96 4 6 ip:991";
  *(_QWORD *)(v4 + 16) = NavMesh::ConnectPolyRegionRoots;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  roota = NavMesh::FindPolyRegionRoot(this, polya, optimize);
  rootb = NavMesh::FindPolyRegionRoot(this, polyb, optimize);
  if ( roota != rootb )
  {
    NavMeshPolyRefHelper::DecodePolyId(
      (unsigned int *)(v4 + 32),
      (unsigned int *)(v4 + 48),
      (unsigned int *)(v4 + 64),
      (unsigned int *)(v4 + 80),
      (unsigned int *)(v4 + 96),
      roota);
    v7 = *(unsigned int *)(v4 + 64);
    rootaTile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v7);
    if ( *(_BYTE *)(((unsigned __int64)&rootaTile->polyRoots >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rootaTile->polyRoots, v7);
    v8 = (unsigned __int64)&rootaTile->polyRoots[*(unsigned int *)(v4 + 96)];
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_store8();
    *(_QWORD *)v8 = rootb;
  }
  if ( v14 == (char *)v4 )
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

// Line 999: range 000000000CC21DC2-000000000CC22256
NavMeshPolyRef __cdecl NavMesh::FindPolyRegionRoot(NavMesh *const this, NavMeshPolyRef poly, bool optimize)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  std::pair<NavMeshTile*,unsigned int> *v14; // rax
  char v15; // dl
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  NavMeshPolyRef result; // rax
  int i; // [rsp+28h] [rbp-F8h]
  unsigned int currentPolyIndex; // [rsp+2Ch] [rbp-F4h]
  NavMeshPolyRef currentRef; // [rsp+30h] [rbp-F0h]
  NavMeshTile *currentTile; // [rsp+38h] [rbp-E8h]
  std::pair<NavMeshTile*,unsigned int> t; // [rsp+40h] [rbp-E0h] BYREF
  char v26[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 21 currentPolyIndex:1004 64 8 16 currentTile:1003 96 24 13 polyList:1001";
  *(_QWORD *)(v3 + 16) = NavMesh::FindPolyRegionRoot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  dynamic_array<std::pair<NavMeshTile *,unsigned int>,false,8ul>::dynamic_array((dynamic_array<std::pair<NavMeshTile*,unsigned int>,false,8> *const)(v3 + 96));
  currentRef = poly;
  v6 = NavMeshPolyRefHelper::DecodePolyIdTile(poly);
  v7 = v6;
  *(_QWORD *)(v3 + 64) = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v6);
  *(_DWORD *)(v3 + 48) = NavMeshPolyRefHelper::DecodePolyIdPoly(poly);
  if ( !*(_QWORD *)(v3 + 64) )
  {
    __asan_handle_no_return(poly);
    __assert_fail(
      "currentTile",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x3EDu,
      "NavMeshPolyRef NavMesh::FindPolyRegionRoot(NavMeshPolyRef, bool)");
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 112) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 112, v7);
    v9 = 8LL * *(unsigned int *)(v3 + 48) + *(_QWORD *)(v8 + 112);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9, v7);
    if ( currentRef == *(_QWORD *)v9 )
      break;
    t = std::make_pair<NavMeshTile *&,unsigned int &>((NavMeshTile **)(v3 + 64), (unsigned int *)(v3 + 48));
    dynamic_array<std::pair<NavMeshTile *,unsigned int>,false,8ul>::push_back(
      (dynamic_array<std::pair<NavMeshTile*,unsigned int>,false,8> *const)(v3 + 96),
      &t);
    v10 = *(_QWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 112) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10 + 112, &t);
    v11 = 8LL * *(unsigned int *)(v3 + 48) + *(_QWORD *)(v10 + 112);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11, &t);
    currentRef = *(_QWORD *)v11;
    v12 = NavMeshPolyRefHelper::DecodePolyIdTile(*(_QWORD *)v11);
    v7 = v12;
    *(_QWORD *)(v3 + 64) = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v12);
    *(_DWORD *)(v3 + 48) = NavMeshPolyRefHelper::DecodePolyIdPoly(currentRef);
    if ( !*(_QWORD *)(v3 + 64) )
    {
      __asan_handle_no_return(currentRef);
      __assert_fail(
        "currentTile",
        "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
        0x3F5u,
        "NavMeshPolyRef NavMesh::FindPolyRegionRoot(NavMeshPolyRef, bool)");
    }
  }
  if ( optimize )
  {
    for ( i = 0;
          i < dynamic_array<std::pair<NavMeshTile *,unsigned int>,false,8ul>::size((const dynamic_array<std::pair<NavMeshTile*,unsigned int>,false,8> *const)(v3 + 96));
          ++i )
    {
      v13 = (unsigned __int64)dynamic_array<std::pair<NavMeshTile *,unsigned int>,false,8ul>::operator[](
                                (dynamic_array<std::pair<NavMeshTile*,unsigned int>,false,8> *const)(v3 + 96),
                                i);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v13, i);
      currentTile = *(NavMeshTile **)v13;
      v16 = i;
      v14 = dynamic_array<std::pair<NavMeshTile *,unsigned int>,false,8ul>::operator[](
              (dynamic_array<std::pair<NavMeshTile*,unsigned int>,false,8> *const)(v3 + 96),
              i);
      v15 = *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v15 != 0;
      if ( v15 != 0 && v15 <= 3 )
        __asan_report_load4(&v14->second);
      currentPolyIndex = v14->second;
      if ( *(_BYTE *)(((unsigned __int64)&currentTile->polyRoots >> 3) + 0x7FFF8000) )
        __asan_report_load8(&currentTile->polyRoots, v16);
      v17 = (unsigned __int64)&currentTile->polyRoots[currentPolyIndex];
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_store8();
      *(_QWORD *)v17 = currentRef;
    }
  }
  dynamic_array<std::pair<NavMeshTile *,unsigned int>,false,8ul>::~dynamic_array((dynamic_array<std::pair<NavMeshTile*,unsigned int>,false,8> *const)(v3 + 96));
  result = currentRef;
  if ( v26 == (char *)v3 )
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

// Line 1032: range 000000000CC22258-000000000CC22AB3
void __cdecl NavMesh::ConnectTileRegionsBetweenSurfaces(
        NavMesh *const this,
        const NavMeshTile *tilea,
        const NavMeshTile *tileb,
        int side,
        float portalHeight,
        unsigned int mask,
        bool optimize)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  char *v9; // r12
  _DWORD *v10; // rbx
  SurfaceIDType surfaceID; // cx
  char v12; // al
  NavMeshPolyRef v13; // rsi
  const NavMeshDataHeader *header; // rdx
  char v15; // dl
  char v16; // dl
  __int64 v17; // r14
  Vector3f *v18; // r15
  __int64 v19; // r14
  Vector3f *v20; // r15
  __int64 v21; // r14
  Vector3f *v22; // r15
  int v23; // eax
  const NavMeshTile *tileaa; // [rsp+20h] [rbp-430h]
  int i; // [rsp+30h] [rbp-420h]
  int j; // [rsp+34h] [rbp-41Ch]
  int k; // [rsp+38h] [rbp-418h]
  int neiCount; // [rsp+3Ch] [rbp-414h]
  int dir; // [rsp+40h] [rbp-410h]
  int nnei; // [rsp+44h] [rbp-40Ch]
  NavMeshPolyRef base; // [rsp+48h] [rbp-408h]
  NavMeshPolyRef polyRef; // [rsp+50h] [rbp-400h]
  NavMeshPoly *poly; // [rsp+58h] [rbp-3F8h]
  char v38[1008]; // [rsp+60h] [rbp-3F0h] BYREF

  tileaa = tilea;
  v7 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(960LL);
    if ( v8 )
      v7 = v8;
  }
  v9 = (char *)(v7 + 960);
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "6 48 4 15 pointCount:1065 64 32 8 nei:1074 128 32 9 neia:1075 192 192 17 localPointsa:1064 448 1"
                        "92 16 worldPoints:1069 704 192 17 localPointsb:1070";
  *(_QWORD *)(v7 + 16) = NavMesh::ConnectTileRegionsBetweenSurfaces;
  v10 = (_DWORD *)(v7 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556943;
  v10[536862723] = -218959118;
  v10[536862725] = -218959118;
  v10[536862732] = -218959118;
  v10[536862733] = -218959118;
  v10[536862740] = -218959118;
  v10[536862741] = -218959118;
  v10[536862748] = -202116109;
  v10[536862749] = -202116109;
  if ( tilea && tileb )
  {
    if ( *(_BYTE *)(((unsigned __int64)tilea >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)tilea >> 3) + 0x7FFF8000) <= 1 )
    {
      __asan_report_load2(tilea);
    }
    surfaceID = tilea->surfaceID;
    v12 = *(_BYTE *)(((unsigned __int64)tileb >> 3) + 0x7FFF8000);
    LOBYTE(tilea) = v12 != 0;
    if ( v12 != 0 && v12 <= 1 )
      __asan_report_load2(tileb);
    if ( surfaceID == tileb->surfaceID )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v7 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
        "ConnectTileRegionsBetweenSurfaces",
        1038);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v7 + 128),
        "Do not call ConnectTileRegionsBetweenSurfaces for tiles in the same surface. Refer to ConnectPolyRegionRoots instead.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 128));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_defaultMemoryCallback, tilea);
      v13 = (NavMeshPolyRef)tileaa;
      base = NavMesh::GetPolyRefBase(this, tileaa, this->m_defaultMemoryCallback);
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tileaa->header >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tileaa->header, v13);
        header = tileaa->header;
        if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&header->polyCount);
        }
        if ( i >= header->polyCount )
          break;
        polyRef = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, i);
        v13 = polyRef;
        if ( (mask & NavMesh::GetPolyFlags(this, polyRef)) != 0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&tileaa->polys >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tileaa->polys, polyRef);
          poly = &tileaa->polys[i];
          v13 = ((_BYTE)poly + 28) & 7;
          if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
            && (char)v13 >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&poly->vertCount);
          }
          neiCount = poly->vertCount;
          for ( j = 0; j < neiCount; ++j )
          {
            v15 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
            v13 = ((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1;
            if ( v15 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v15 )
              __asan_report_load2(&poly->neis[j]);
            if ( (poly->neis[j] & 0x8000u) != 0 )
            {
              v16 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
              v13 = ((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1;
              if ( v16 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v16 )
                __asan_report_load2(&poly->neis[j]);
              dir = (unsigned __int8)poly->neis[j];
              if ( dir == side )
              {
                v17 = 15LL;
                v18 = (Vector3f *)(v7 + 192);
                while ( v17 >= 0 )
                {
                  Vector3f::Vector3f(v18++);
                  --v17;
                }
                *(_DWORD *)(v7 + 48) = 0;
                NavMesh::GetPolyEdgeDetailPoints(this, tileaa, i, j, (Vector3f *)(v7 + 192), (int *)(v7 + 48), 16);
                v19 = 15LL;
                v20 = (Vector3f *)(v7 + 448);
                while ( v19 >= 0 )
                {
                  Vector3f::Vector3f(v20++);
                  --v19;
                }
                v21 = 15LL;
                v22 = (Vector3f *)(v7 + 704);
                while ( v21 >= 0 )
                {
                  Vector3f::Vector3f(v22++);
                  --v21;
                }
                TileToWorld((Vector3f *)(v7 + 448), tileaa, *(_DWORD *)(v7 + 48), (const Vector3f *)(v7 + 192));
                WorldToTile((Vector3f *)(v7 + 704), tileb, *(_DWORD *)(v7 + 48), (const Vector3f *)(v7 + 448));
                v23 = TileLUTHelper::OppositeTile(dir);
                v13 = v7 + 704;
                nnei = NavMesh::FindConnectingPolys(
                         this,
                         (const Vector3f *)(v7 + 704),
                         *(_DWORD *)(v7 + 48),
                         tileb,
                         v23,
                         (NavMeshPolyRef *)(v7 + 64),
                         (PortalArea *)(v7 + 128),
                         4,
                         portalHeight);
                for ( k = 0; k < nnei; ++k )
                {
                  if ( *(_BYTE *)(((8LL * k + v7 + 64) >> 3) + 0x7FFF8000) )
                    __asan_report_load8(8LL * k + v7 + 64, v13);
                  v13 = *(_QWORD *)&v9[8 * k - 896];
                  if ( (mask & NavMesh::GetPolyFlags(this, v13)) != 0 )
                  {
                    if ( *(_BYTE *)(((8LL * k + v7 + 64) >> 3) + 0x7FFF8000) )
                      __asan_report_load8(8LL * k + v7 + 64, v13);
                    v13 = polyRef;
                    NavMesh::ConnectPolyRegionRoots(this, polyRef, *(_QWORD *)&v9[8 * k - 896], 1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v38 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8070) = 0LL;
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
    *(_QWORD *)((v7 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1088: range 000000000CC22AB4-000000000CC232A6
void __cdecl NavMesh::RemoveLinkBetween(NavMesh *const this, NavMeshPolyRef from, NavMeshPolyRef to)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  FreeList<NavMeshLink,false> *p_m_links; // rdi
  NavMeshLink *v8; // rax
  NavMeshLink *v9; // rax
  NavMeshLink *v10; // rdx
  unsigned __int8 *p_edge; // rax
  int edge; // edx
  NavMeshLink *v13; // rax
  NavMeshStatus TileAndPolyByRef; // eax
  const NavMeshPoly *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  FreeList<NavMeshLink,false> *p_next; // rdi
  NavMeshLink *v20; // rax
  char v21; // dl
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  NavMeshLink *v25; // rax
  NavMeshLink *v26; // rax
  unsigned int k; // [rsp+2Ch] [rbp-A4h]
  int pk; // [rsp+30h] [rbp-A0h]
  unsigned int k_0; // [rsp+34h] [rbp-9Ch]
  int pk_0; // [rsp+38h] [rbp-98h]
  unsigned int ip_0; // [rsp+3Ch] [rbp-94h]
  unsigned int nk_0; // [rsp+40h] [rbp-90h]
  unsigned int nk; // [rsp+44h] [rbp-8Ch]
  OffMeshConnection *con; // [rsp+48h] [rbp-88h]
  char v37[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 12 neiTile:1122 64 8 12 neiPoly:1123";
  *(_QWORD *)(v3 + 16) = NavMesh::RemoveLinkBetween;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(from) == 1 )
  {
    con = NavMesh::GetOffMeshConnectionUnsafe(this, from);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&con->firstLink);
      }
      k = con->firstLink;
      pk = -1;
      while ( k != -1 )
      {
        v6 = (unsigned __int64)FreeList<NavMeshLink,false>::operator[](&this->m_links, k);
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8(v6, k);
        if ( to == *(_QWORD *)v6 )
        {
          p_m_links = &this->m_links;
          v8 = FreeList<NavMeshLink,false>::operator[](&this->m_links, k);
          if ( *(_BYTE *)(((unsigned __int64)&v8->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v8->next >> 3) + 0x7FFF8000) <= 3 )
          {
            p_m_links = (FreeList<NavMeshLink,false> *)&v8->next;
            __asan_report_load4(&v8->next);
          }
          nk = v8->next;
          if ( pk == -1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(&con->firstLink);
            }
            con->firstLink = nk;
          }
          else
          {
            if ( pk == nk )
            {
              __asan_handle_no_return(p_m_links);
              __assert_fail(
                "pk != nk",
                "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                0x454u,
                "void NavMesh::RemoveLinkBetween(NavMeshPolyRef, NavMeshPolyRef)");
            }
            v9 = FreeList<NavMeshLink,false>::operator[](&this->m_links, pk);
            if ( *(_BYTE *)(((unsigned __int64)&v9->next >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v9->next >> 3) + 0x7FFF8000) <= 3 )
            {
              v9 = (NavMeshLink *)__asan_report_store4(&v9->next);
            }
            v9->next = nk;
          }
          v10 = FreeList<NavMeshLink,false>::operator[](&this->m_links, k);
          p_edge = &v10->edge;
          if ( *(_BYTE *)(((unsigned __int64)p_edge >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_edge & 7) >= *(_BYTE *)(((unsigned __int64)p_edge >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_edge);
          }
          edge = v10->edge;
          if ( *(_BYTE *)(((unsigned __int64)&con->endPoints[edge].tileRef >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          con->endPoints[edge].tileRef = 0LL;
          FreeList<NavMeshLink,false>::Release(&this->m_links, k);
          break;
        }
        pk = k;
        v13 = FreeList<NavMeshLink,false>::operator[](&this->m_links, k);
        if ( *(_BYTE *)(((unsigned __int64)&v13->next >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->next >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v13->next);
        }
        k = v13->next;
      }
    }
  }
  else
  {
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, from);
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         this,
                         from,
                         (NavMeshTile **)(v3 + 32),
                         (const NavMeshPoly **)(v3 + 64),
                         this->m_defaultMemoryCallback);
    if ( NavMeshStatusSucceed(TileAndPolyByRef) )
    {
      v15 = *(const NavMeshPoly **)(v3 + 64);
      ip_0 = GetPolyIndex(*(const NavMeshTile **)(v3 + 32), v15);
      v16 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v16 + 24) >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8(v16 + 24, v15);
      v17 = *(_QWORD *)(v16 + 24) + 4LL * ip_0;
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v17);
      k_0 = *(_DWORD *)v17;
      pk_0 = -1;
      while ( k_0 != -1 )
      {
        v18 = (unsigned __int64)FreeList<NavMeshLink,false>::operator[](&this->m_links, k_0);
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8(v18, k_0);
        if ( to == *(_QWORD *)v18 )
        {
          v22 = k_0;
          p_next = &this->m_links;
          v20 = FreeList<NavMeshLink,false>::operator[](&this->m_links, k_0);
          v21 = *(_BYTE *)(((unsigned __int64)&v20->next >> 3) + 0x7FFF8000);
          LOBYTE(v22) = v21 != 0;
          if ( v21 != 0 && v21 <= 3 )
          {
            p_next = (FreeList<NavMeshLink,false> *)&v20->next;
            __asan_report_load4(&v20->next);
          }
          nk_0 = v20->next;
          if ( pk_0 == -1 )
          {
            v23 = *(_QWORD *)(v3 + 32);
            if ( *(_BYTE *)(((unsigned __int64)(v23 + 24) >> 3) + 0x7FFF8000) )
              v23 = __asan_report_load8(v23 + 24, v22);
            v24 = *(_QWORD *)(v23 + 24) + 4LL * ip_0;
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0
              && (char)((v24 & 7) + 3) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v24);
            }
            *(_DWORD *)v24 = nk_0;
          }
          else
          {
            if ( pk_0 == nk_0 )
            {
              __asan_handle_no_return(p_next);
              __assert_fail(
                "pk != nk",
                "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                0x475u,
                "void NavMesh::RemoveLinkBetween(NavMeshPolyRef, NavMeshPolyRef)");
            }
            v25 = FreeList<NavMeshLink,false>::operator[](&this->m_links, pk_0);
            if ( *(_BYTE *)(((unsigned __int64)&v25->next >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v25->next >> 3) + 0x7FFF8000) <= 3 )
            {
              v25 = (NavMeshLink *)__asan_report_store4(&v25->next);
            }
            v25->next = nk_0;
          }
          FreeList<NavMeshLink,false>::Release(&this->m_links, k_0);
          break;
        }
        pk_0 = k_0;
        v26 = FreeList<NavMeshLink,false>::operator[](&this->m_links, k_0);
        if ( *(_BYTE *)(((unsigned __int64)&v26->next >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v26->next >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v26->next);
        }
        k_0 = v26->next;
      }
    }
  }
  if ( v37 == (char *)v3 )
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

// Line 1155: range 000000000CC232A8-000000000CC2362C
void __cdecl NavMesh::UnconnectLinks(NavMesh *const this, NavMeshTile *tile)
{
  const NavMeshDataHeader *header; // rdx
  unsigned int *v3; // rcx
  char v4; // dl
  NavMeshLink *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  char v8; // dl
  NavMeshTile *tilea; // [rsp+0h] [rbp-30h]
  NavMesh *thisa; // [rsp+8h] [rbp-28h]
  int i; // [rsp+14h] [rbp-1Ch]
  unsigned int j; // [rsp+18h] [rbp-18h]
  unsigned int next; // [rsp+1Ch] [rbp-14h]
  NavMeshPolyRef base; // [rsp+20h] [rbp-10h]
  NavMeshPolyRef polyRef; // [rsp+28h] [rbp-8h]

  thisa = this;
  tilea = tile;
  if ( !tile )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x484u,
      "void NavMesh::UnconnectLinks(NavMeshTile*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
  {
    this = (NavMesh *const)&tile->header;
    __asan_report_load8(&tile->header, tile);
  }
  if ( !tile->header )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->header",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x485u,
      "void NavMesh::UnconnectLinks(NavMeshTile*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
  {
    this = (NavMesh *const)&tile->polyLinks;
    __asan_report_load8(&tile->polyLinks, tile);
  }
  if ( !tile->polyLinks )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->polyLinks",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x486u,
      "void NavMesh::UnconnectLinks(NavMeshTile*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_defaultMemoryCallback, tile);
  base = NavMesh::GetPolyRefBase(thisa, tile, thisa->m_defaultMemoryCallback);
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->header, tile);
    header = tilea->header;
    if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&header->polyCount);
    }
    if ( i >= header->polyCount )
      break;
    tile = (NavMeshTile *)(unsigned int)i;
    polyRef = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, i);
    if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->polyLinks, (unsigned int)i);
    v3 = &tilea->polyLinks[i];
    v4 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
    LOBYTE(tile) = v4 != 0;
    if ( v4 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= v4 )
      __asan_report_load4(&tilea->polyLinks[i]);
    for ( j = *v3; j != -1; j = next )
    {
      v5 = FreeList<NavMeshLink,false>::operator[](&thisa->m_links, j);
      if ( *(_BYTE *)(((unsigned __int64)&v5->next >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v5->next >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v5->next);
      }
      next = v5->next;
      v6 = (unsigned __int64)FreeList<NavMeshLink,false>::operator[](&thisa->m_links, j);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6, j);
      NavMesh::RemoveLinkBetween(thisa, *(_QWORD *)v6, polyRef);
      tile = (NavMeshTile *)j;
      FreeList<NavMeshLink,false>::Release(&thisa->m_links, j);
    }
    if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->polyLinks, tile);
    v7 = (unsigned __int64)&tilea->polyLinks[i];
    v8 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
    LOBYTE(tile) = v8 != 0;
    if ( v8 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= v8 )
      __asan_report_store4(&tilea->polyLinks[i]);
    *(_DWORD *)v7 = -1;
  }
};

// Line 1180: range 000000000CD73830-000000000CD7384E
void __cdecl EdgePointSample::EdgePointSample(EdgePointSample *const this)
{
  Vector3f::Vector3f(&this->pt);
};

// Line 1185: range 000000000CD73799-000000000CD7382E
bool __cdecl operator<(const EdgePointSample *lhs, const EdgePointSample *rhs)
{
  float t; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  t = lhs->t;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  return rhs->t > t;
};

// Line 1194: range 000000000CC2362E-000000000CC2476A
NavMeshStatus __cdecl NavMesh::GetPolyEdgeDetailPoints(
        const NavMesh *const this,
        const NavMeshTile *tile,
        int p,
        int edge,
        Vector3f *points,
        int *pointCount,
        const int maxPoints)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  char *v9; // rbx
  _DWORD *v10; // r13
  __int64 v11; // rsi
  const Vector3f *verts; // rcx
  char v13; // dl
  const Vector3f *v14; // r14
  size_t Index; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  EdgePointSample *v18; // r15
  double v19; // xmm0_8
  double v20; // xmm0_8
  unsigned int v21; // eax
  __m128i v22; // xmm0
  const Vector3f *detailVerts; // rcx
  double v24; // xmm0_8
  double v25; // xmm0_8
  __m128i v26; // xmm0
  char v27; // dl
  char v28; // dl
  bool v29; // di
  char v30; // dl
  __int64 v31; // rdx
  char v32; // dl
  char v33; // dl
  bool v34; // di
  char v35; // dl
  __int64 v36; // rdx
  __m128i v37; // xmm0
  int v38; // ecx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  char *v41; // rsi
  char *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  char v45; // cl
  bool v46; // r8
  char v47; // cl
  __int64 v48; // rax
  NavMeshStatus v49; // ebx
  int sampleCount; // [rsp+38h] [rbp-578h]
  int sampleCounta; // [rsp+38h] [rbp-578h]
  int i; // [rsp+3Ch] [rbp-574h]
  int removeIdx; // [rsp+40h] [rbp-570h]
  float minDist; // [rsp+44h] [rbp-56Ch]
  int i_0; // [rsp+48h] [rbp-568h]
  int i_1; // [rsp+4Ch] [rbp-564h]
  int i_2; // [rsp+50h] [rbp-560h]
  int ndv; // [rsp+54h] [rbp-55Ch]
  int vertCount; // [rsp+58h] [rbp-558h]
  float dvx; // [rsp+60h] [rbp-550h]
  float dvz; // [rsp+64h] [rbp-54Ch]
  float lenSq; // [rsp+68h] [rbp-548h]
  float distanceThr; // [rsp+6Ch] [rbp-544h]
  float dpx; // [rsp+74h] [rbp-53Ch]
  float dpz; // [rsp+78h] [rbp-538h]
  float t; // [rsp+7Ch] [rbp-534h]
  float d; // [rsp+8Ch] [rbp-524h]
  const NavMeshPoly *poly; // [rsp+90h] [rbp-520h]
  const NavMeshPolyDetail *pd; // [rsp+98h] [rbp-518h]
  const Vector3f *v0; // [rsp+A0h] [rbp-510h]
  const Vector3f *v1; // [rsp+A8h] [rbp-508h]
  const Vector3f *dverts; // [rsp+B0h] [rbp-500h]
  const Vector3f *dv; // [rsp+B8h] [rbp-4F8h]
  char v80[1264]; // [rsp+C0h] [rbp-4F0h] BYREF

  v7 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMesh *const)1216;
    v8 = __asan_stack_malloc_5(1216LL);
    if ( v8 )
      v7 = v8;
  }
  v9 = (char *)(v7 + 1216);
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 4 6 t:1278 64 1024 12 samples:1208";
  *(_QWORD *)(v7 + 16) = NavMesh::GetPolyEdgeDetailPoints;
  v10 = (_DWORD *)(v7 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556943;
  v10[536862754] = -202116109;
  v10[536862755] = -202116109;
  v10[536862756] = -202116109;
  v10[536862757] = -202116109;
  if ( maxPoints <= 2 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "maxPoints > 2",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x4ABu,
      "NavMeshStatus NavMesh::GetPolyEdgeDetailPoints(const NavMeshTile*, int, int, Vector3f*, int*, int) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->polys, tile);
  poly = &tile->polys[p];
  if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->detailMeshes, tile);
  pd = &tile->detailMeshes[p];
  if ( *(_BYTE *)(((unsigned __int64)&pd->vertCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pd + 8) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&pd->vertCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&pd->vertCount);
  }
  ndv = pd->vertCount;
  v11 = ((_BYTE)poly + 28) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
    && (char)v11 >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&poly->vertCount);
  }
  vertCount = poly->vertCount;
  if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->verts, v11);
  verts = tile->verts;
  v13 = *(_BYTE *)(((unsigned __int64)&poly->verts[edge] >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)(((2 * edge + (_BYTE)poly) & 7) + 1) >= v13 )
    __asan_report_load2(&poly->verts[edge]);
  v0 = &verts[poly->verts[edge]];
  v14 = tile->verts;
  Index = NextIndex(edge, vertCount);
  v16 = (unsigned __int64)&poly->verts[Index];
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)((v16 & 7) + 1) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    __asan_report_load2(v16);
  v1 = &v14[poly->verts[Index]];
  v17 = 63LL;
  v18 = (EdgePointSample *)(v7 + 64);
  while ( v17 >= 0 )
  {
    EdgePointSample::EdgePointSample(v18++);
    --v17;
  }
  *(_DWORD *)(v7 + 64) = 0;
  if ( ((unsigned __int8)v0 & 7) >= *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v0->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v0 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v0->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v0, 12LL);
  }
  *(_QWORD *)(v7 + 68) = *(_QWORD *)&v0->x;
  *(float *)(v7 + 76) = v0->z;
  sampleCount = 1;
  if ( ndv )
  {
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    *(float *)&v19 = v1->x;
    if ( *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
    {
      v19 = __asan_report_load4(v0);
    }
    dvx = *(float *)&v19 - v0->x;
    if ( *(_BYTE *)(((unsigned __int64)&v1->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v1->z);
    }
    *(float *)&v20 = v1->z;
    if ( *(_BYTE *)(((unsigned __int64)&v0->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v0->z >> 3) + 0x7FFF8000) )
    {
      v20 = __asan_report_load4(&v0->z);
    }
    dvz = *(float *)&v20 - v0->z;
    lenSq = (float)(dvz * dvz) + (float)(dvx * dvx);
    if ( lenSq < 0.000099999997 )
    {
      if ( *(_BYTE *)(((unsigned __int64)pointCount >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pointCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pointCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(pointCount);
      }
      *pointCount = 0;
      v21 = 0x80000000;
      goto LABEL_96;
    }
    v22 = (__m128i)0x3C23D70Au;
    *(_DWORD *)(v7 + 48) = 1008981770;
    *(float *)v22.m128i_i32 = Sqr<float>((const float *)(v7 + 48));
    distanceThr = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
    if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->detailVerts, (((_BYTE)v0 + 8) & 7u) + 3);
    detailVerts = tile->detailVerts;
    if ( *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pd & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pd);
    }
    dverts = &detailVerts[pd->vertBase];
    for ( i = 0; i < ndv; ++i )
    {
      dv = &dverts[i];
      if ( *(_BYTE *)(((unsigned __int64)dv >> 3) + 0x7FFF8000) != 0
        && (char)(((12 * i + (_BYTE)dverts) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dv >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&dverts[i]);
      }
      *(float *)&v24 = dv->x;
      if ( *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
      {
        v24 = __asan_report_load4(v0);
      }
      dpx = *(float *)&v24 - v0->x;
      if ( *(_BYTE *)(((unsigned __int64)&dv->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dv + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dv->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&dv->z);
      }
      *(float *)&v25 = dv->z;
      if ( *(_BYTE *)(((unsigned __int64)&v0->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v0->z >> 3) + 0x7FFF8000) )
      {
        v25 = __asan_report_load4(&v0->z);
      }
      dpz = *(float *)&v25 - v0->z;
      v26 = (__m128i)LODWORD(dvz);
      *(float *)v26.m128i_i32 = FloatClamp(
                                  (float)((float)(dvz * dpz) + (float)(dvx * dpx)) * (float)(1.0 / lenSq),
                                  0.0,
                                  1.0);
      t = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
      if ( t >= 0.000099999997
        && t <= 0.99989998
        && (float)((float)((float)((float)(t * dvz) - dpz) * (float)((float)(t * dvz) - dpz))
                 + (float)((float)((float)(t * dvx) - dpx) * (float)((float)(t * dvx) - dpx))) <= distanceThr )
      {
        v27 = *(_BYTE *)(((16LL * sampleCount + v7 + 64) >> 3) + 0x7FFF8000);
        if ( v27 != 0 && (char)(((16 * sampleCount + v7 - 64 + 0x80) & 7) + 3) >= v27 )
          __asan_report_store4(16LL * sampleCount + v7 + 64);
        *(float *)&v9[16 * sampleCount - 1152] = t;
        v28 = *(_BYTE *)(((16LL * sampleCount + v7 + 64 + 4) >> 3) + 0x7FFF8000);
        v29 = (char)((16 * sampleCount + v7 - 64 + 0x80 + 4) & 7) >= v28 && v28 != 0;
        v30 = *(_BYTE *)(((16LL * sampleCount + v7 + 64 + 15) >> 3) + 0x7FFF8000);
        if ( v29 || v30 != 0 && (char)((16 * sampleCount + v7 - 64 + 0x80 + 15) & 7) >= v30 )
          __asan_report_store_n(16LL * sampleCount + v7 + 64 + 4, 12LL);
        if ( ((unsigned __int8)dv & 7) >= *(_BYTE *)(((unsigned __int64)dv >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)dv >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&dv->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dv + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&dv->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(dv, 12LL);
        }
        v31 = (__int64)&v9[16 * sampleCount - 1152];
        *(_QWORD *)(v31 + 4) = *(_QWORD *)&dv->x;
        *(float *)(v31 + 12) = dv->z;
        if ( ++sampleCount == 63 )
          break;
      }
    }
    std::sort<EdgePointSample *>((EdgePointSample *)(v7 + 80), (EdgePointSample *)(v7 + 64 + 16LL * sampleCount));
  }
  v32 = *(_BYTE *)(((16LL * sampleCount + v7 + 64) >> 3) + 0x7FFF8000);
  if ( v32 != 0 && (char)(((16 * sampleCount + v7 - 64 + 0x80) & 7) + 3) >= v32 )
    __asan_report_store4(16LL * sampleCount + v7 + 64);
  *(_DWORD *)&v9[16 * sampleCount - 1152] = 1065353216;
  v33 = *(_BYTE *)(((16LL * sampleCount + v7 + 64 + 4) >> 3) + 0x7FFF8000);
  v34 = (char)((16 * sampleCount + v7 - 64 + 0x80 + 4) & 7) >= v33 && v33 != 0;
  v35 = *(_BYTE *)(((16LL * sampleCount + v7 + 64 + 15) >> 3) + 0x7FFF8000);
  if ( v34 || v35 != 0 && (char)((16 * sampleCount + v7 - 64 + 0x80 + 15) & 7) >= v35 )
    __asan_report_store_n(16LL * sampleCount + v7 + 64 + 4, 12LL);
  if ( ((unsigned __int8)v1 & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v1->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v1->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v1, 12LL);
  }
  v36 = (__int64)&v9[16 * sampleCount - 1152];
  *(_QWORD *)(v36 + 4) = *(_QWORD *)&v1->x;
  *(float *)(v36 + 12) = v1->z;
  for ( sampleCounta = sampleCount + 1; sampleCounta > maxPoints; --sampleCounta )
  {
    removeIdx = -1;
    v37 = (__m128i)0x7F7FFFFFu;
    minDist = 3.4028235e38;
    for ( i_0 = 1; i_0 < sampleCounta - 1; ++i_0 )
    {
      *(float *)v37.m128i_i32 = SqrDistancePointSegment(
                                  (float *)(v7 + 48),
                                  (const Vector3f *)(16LL * i_0 + v7 + 64 + 4),
                                  (const Vector3f *)(16LL * (i_0 - 1) + v7 + 64 + 4),
                                  (const Vector3f *)(16LL * (i_0 + 1) + v7 + 64 + 4));
      d = COERCE_FLOAT(_mm_cvtsi128_si32(v37));
      v37 = (__m128i)LODWORD(minDist);
      if ( minDist > d )
      {
        v37 = (__m128i)LODWORD(d);
        minDist = d;
        removeIdx = i_0;
      }
    }
    if ( removeIdx == -1 )
      break;
    for ( i_1 = removeIdx; i_1 < sampleCounta - 1; ++i_1 )
    {
      v38 = i_1 + 1;
      v39 = 16LL * i_1 + v7 + 64;
      if ( (char)((16 * i_1 + v7 - 64 + 0x80) & 7) >= *(_BYTE *)((v39 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v39 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v39 + 15) >> 3) + 0x7FFF8000) != 0
        && (char)((16 * i_1 + v7 - 64 + 0x80 + 15) & 7) >= *(_BYTE *)(((v39 + 15) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v39, 16LL);
      }
      v40 = 16LL * v38 + v7 + 64;
      if ( (char)((16 * v38 + v7 - 64 + 0x80) & 7) >= *(_BYTE *)((v40 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v40 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v40 + 15) >> 3) + 0x7FFF8000) != 0
        && (char)((16 * v38 + v7 - 64 + 0x80 + 15) & 7) >= *(_BYTE *)(((v40 + 15) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v40, 16LL);
      }
      v41 = &v9[16 * i_1 - 1152];
      v42 = &v9[16 * v38 - 1152];
      v43 = *((_QWORD *)v42 + 1);
      *(_QWORD *)v41 = *(_QWORD *)v42;
      *((_QWORD *)v41 + 1) = v43;
    }
  }
  for ( i_2 = 0; i_2 < sampleCounta; ++i_2 )
  {
    v44 = (unsigned __int64)&points[i_2];
    if ( (((unsigned __int8)points + 12 * i_2) & 7) >= *(_BYTE *)((v44 >> 3) + 0x7FFF8000)
      && *(_BYTE *)((v44 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v44 + 11) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)points + 12 * i_2 + 11) & 7) >= *(_BYTE *)(((v44 + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&points[i_2], 12LL);
    }
    v45 = *(_BYTE *)(((16LL * i_2 + v7 + 64 + 4) >> 3) + 0x7FFF8000);
    v46 = (char)((16 * i_2 + v7 - 64 + 0x80 + 4) & 7) >= v45 && v45 != 0;
    v47 = *(_BYTE *)(((16LL * i_2 + v7 + 64 + 15) >> 3) + 0x7FFF8000);
    if ( v46 || v47 != 0 && (char)((16 * i_2 + v7 - 64 + 0x80 + 15) & 7) >= v47 )
      __asan_report_load_n(16LL * i_2 + v7 + 64 + 4, 12LL);
    v48 = (__int64)&v9[16 * i_2 - 1152];
    *(_QWORD *)v44 = *(_QWORD *)(v48 + 4);
    *(_DWORD *)(v44 + 8) = *(_DWORD *)(v48 + 12);
  }
  if ( *(_BYTE *)(((unsigned __int64)pointCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pointCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pointCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(pointCount);
  }
  *pointCount = sampleCounta;
  v21 = 0x40000000;
LABEL_96:
  v49 = v21;
  if ( v80 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    __asan_stack_free_5(v7, 1216LL, v80);
  }
  return v49;
};

// Line 1303: range 000000000CC2476C-000000000CC25536
void __cdecl NavMesh::ConnectExtLinksToLink(
        const NavMesh *const this,
        const NavMeshTile *tile,
        const NavMeshTile *target,
        int side,
        float portalHeight,
        dynamic_array<NavMeshLinkAddTileCache,false,8> *links)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  char *v8; // rbx
  _DWORD *v9; // r12
  const NavMeshDataHeader *header; // rdx
  char v11; // cl
  char v12; // dl
  char v13; // dl
  const Vector3f *verts; // rcx
  char v15; // dl
  const Vector3f *v16; // r14
  size_t Index; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  Vector3f *v20; // r15
  int v21; // eax
  NavMeshPolyRef v22; // rdx
  char v23; // dl
  double v24; // xmm0_8
  char v25; // dl
  int v26; // esi
  char v27; // dl
  double v28; // xmm0_8
  char v29; // dl
  int v30; // esi
  const NavMeshTile *tilea; // [rsp+20h] [rbp-260h]
  int i; // [rsp+30h] [rbp-250h]
  int j; // [rsp+34h] [rbp-24Ch]
  int k; // [rsp+38h] [rbp-248h]
  int nv; // [rsp+3Ch] [rbp-244h]
  int dir; // [rsp+40h] [rbp-240h]
  int nnei; // [rsp+44h] [rbp-23Ch]
  NavMeshPoly *poly; // [rsp+48h] [rbp-238h]
  const Vector3f *va; // [rsp+50h] [rbp-230h]
  const Vector3f *vb; // [rsp+58h] [rbp-228h]
  NavMeshLinkAddTileCache *cache; // [rsp+60h] [rbp-220h]
  char v46[528]; // [rsp+70h] [rbp-210h] BYREF

  tilea = tile;
  v6 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(480LL);
    if ( v7 )
      v6 = v7;
  }
  v8 = (char *)(v6 + 480);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 48 4 15 pointCount:1334 64 4 9 tmin:1366 80 4 9 tmax:1367 96 32 8 nei:1337 160 32 9 neia:1338 "
                        "224 192 11 points:1333";
  *(_QWORD *)(v6 + 16) = NavMesh::ConnectExtLinksToLink;
  v9 = (_DWORD *)(v6 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862724] = -218959118;
  v9[536862726] = -218959118;
  v9[536862733] = -202116109;
  v9[536862734] = -202116109;
  if ( tile )
  {
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->header, tile);
      header = tilea->header;
      v11 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
      LOBYTE(tile) = v11 != 0;
      if ( v11 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v11 )
        __asan_report_load4(&header->polyCount);
      if ( i >= header->polyCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->polys, tile);
      poly = &tilea->polys[i];
      tile = (const NavMeshTile *)(((_BYTE)poly + 28) & 7);
      if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)tile >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&poly->vertCount);
      }
      nv = poly->vertCount;
      for ( j = 0; j < nv; ++j )
      {
        v12 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
        tile = (const NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
        if ( v12 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v12 )
          __asan_report_load2(&poly->neis[j]);
        if ( (poly->neis[j] & 0x8000u) != 0 )
        {
          v13 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          tile = (const NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
          if ( v13 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v13 )
            __asan_report_load2(&poly->neis[j]);
          dir = (unsigned __int8)poly->neis[j];
          if ( side == -1 || dir == side )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tilea->verts >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tilea->verts, tile);
            verts = tilea->verts;
            v15 = *(_BYTE *)(((unsigned __int64)&poly->verts[j] >> 3) + 0x7FFF8000);
            if ( v15 != 0 && (char)(((2 * j + (_BYTE)poly) & 7) + 1) >= v15 )
              __asan_report_load2(&poly->verts[j]);
            va = &verts[poly->verts[j]];
            v16 = tilea->verts;
            Index = NextIndex(j, nv);
            v18 = (unsigned __int64)&poly->verts[Index];
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
              && (char)((v18 & 7) + 1) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(v18);
            }
            vb = &v16[poly->verts[Index]];
            v19 = 15LL;
            v20 = (Vector3f *)(v6 + 224);
            while ( v19 >= 0 )
            {
              Vector3f::Vector3f(v20++);
              --v19;
            }
            *(_DWORD *)(v6 + 48) = 0;
            NavMesh::GetPolyEdgeDetailPoints(this, tilea, i, j, (Vector3f *)(v6 + 224), (int *)(v6 + 48), 16);
            v21 = TileLUTHelper::OppositeTile(dir);
            tile = (const NavMeshTile *)(v6 + 224);
            nnei = NavMesh::FindConnectingPolys(
                     this,
                     (const Vector3f *)(v6 + 224),
                     *(_DWORD *)(v6 + 48),
                     target,
                     v21,
                     (NavMeshPolyRef *)(v6 + 96),
                     (PortalArea *)(v6 + 160),
                     4,
                     portalHeight);
            for ( k = 0; k < nnei; ++k )
            {
              cache = dynamic_array<NavMeshLinkAddTileCache,false,8ul>::push_back(links);
              if ( *(_BYTE *)(((8LL * k + v6 + 96) >> 3) + 0x7FFF8000) )
                __asan_report_load8(8LL * k + v6 + 96, tile);
              v22 = *(_QWORD *)&v8[8 * k - 384];
              if ( *(_BYTE *)(((unsigned __int64)cache >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              cache->linkData.ref = v22;
              if ( *(_BYTE *)(((unsigned __int64)&cache->linkData.edge >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)cache + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&cache->linkData.edge >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_store1(&cache->linkData.edge);
              }
              cache->linkData.edge = j;
              if ( *(_BYTE *)(((unsigned __int64)&cache->linkData.side >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)cache + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&cache->linkData.side >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_store1(&cache->linkData.side);
              }
              cache->linkData.side = dir;
              if ( *(_BYTE *)(((unsigned __int64)&cache->ipoly >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)cache + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cache->ipoly >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_store4(&cache->ipoly);
              }
              cache->ipoly = i;
              tile = (const NavMeshTile *)(678152731
                                         * (unsigned int)(((char *)tilea
                                                         - (char *)FreeList<NavMeshTile,false>::operator[](
                                                                     &this->m_tiles,
                                                                     0)) >> 3));
              if ( *(_BYTE *)(((unsigned __int64)&cache->itile >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&cache->itile >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&cache->itile);
              }
              cache->itile = (int)tile;
              if ( dir && dir != 4 )
              {
                if ( dir == 2 || dir == 6 )
                {
                  v27 = *(_BYTE *)(((8LL * k + v6 + 160) >> 3) + 0x7FFF8000);
                  if ( v27 != 0 && (char)(((8 * k + v6 - 96) & 7) + 3) >= v27 )
                    __asan_report_load4(8LL * k + v6 + 160);
                  LODWORD(v28) = *(_DWORD *)&v8[8 * k - 320];
                  if ( *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)va & 7) + 3) >= *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) )
                  {
                    v28 = __asan_report_load4(va);
                  }
                  *(float *)&v28 = *(float *)&v28 - va->x;
                  if ( *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)vb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) )
                  {
                    v28 = __asan_report_load4(vb);
                  }
                  *(float *)(v6 + 64) = *(float *)&v28 / (float)(vb->x - va->x);
                  v29 = *(_BYTE *)(((8LL * k + v6 + 160 + 4) >> 3) + 0x7FFF8000);
                  if ( v29 != 0 && (char)(((8 * k + v6 - 96 + 4) & 7) + 3) >= v29 )
                    __asan_report_load4(8LL * k + v6 + 160 + 4);
                  *(float *)(v6 + 80) = (float)(*(float *)(v6 + 480 + 8LL * k - 316) - va->x) / (float)(vb->x - va->x);
                  if ( *(float *)(v6 + 64) > *(float *)(v6 + 80) )
                    std::swap<float>((float *)(v6 + 64), (float *)(v6 + 80));
                  v30 = (int)(float)(FloatClamp(*(float *)(v6 + 64), 0.0, 1.0) * 255.0);
                  if ( *(_BYTE *)(((unsigned __int64)&cache->linkData.bmin >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)cache + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&cache->linkData.bmin >> 3)
                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_store1(&cache->linkData.bmin);
                  }
                  cache->linkData.bmin = v30;
                  tile = (const NavMeshTile *)(unsigned int)(int)(float)(FloatClamp(*(float *)(v6 + 80), 0.0, 1.0)
                                                                       * 255.0);
                  if ( *(_BYTE *)(((unsigned __int64)&cache->linkData.bmax >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)cache + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&cache->linkData.bmax >> 3)
                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_store1(&cache->linkData.bmax);
                  }
                  cache->linkData.bmax = (unsigned __int8)tile;
                }
              }
              else
              {
                v23 = *(_BYTE *)(((8LL * k + v6 + 160) >> 3) + 0x7FFF8000);
                if ( v23 != 0 && (char)(((8 * k + v6 - 96) & 7) + 3) >= v23 )
                  __asan_report_load4(8LL * k + v6 + 160);
                LODWORD(v24) = *(_DWORD *)&v8[8 * k - 320];
                if ( *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)va + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) )
                {
                  v24 = __asan_report_load4(&va->z);
                }
                *(float *)&v24 = *(float *)&v24 - va->z;
                if ( *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)vb + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) )
                {
                  v24 = __asan_report_load4(&vb->z);
                }
                *(float *)(v6 + 64) = *(float *)&v24 / (float)(vb->z - va->z);
                v25 = *(_BYTE *)(((8LL * k + v6 + 160 + 4) >> 3) + 0x7FFF8000);
                if ( v25 != 0 && (char)(((8 * k + v6 - 96 + 4) & 7) + 3) >= v25 )
                  __asan_report_load4(8LL * k + v6 + 160 + 4);
                *(float *)(v6 + 80) = (float)(*(float *)(v6 + 480 + 8LL * k - 316) - va->z) / (float)(vb->z - va->z);
                if ( *(float *)(v6 + 64) > *(float *)(v6 + 80) )
                  std::swap<float>((float *)(v6 + 64), (float *)(v6 + 80));
                v26 = (int)(float)(FloatClamp(*(float *)(v6 + 64), 0.0, 1.0) * 255.0);
                if ( *(_BYTE *)(((unsigned __int64)&cache->linkData.bmin >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)cache + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&cache->linkData.bmin >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_store1(&cache->linkData.bmin);
                }
                cache->linkData.bmin = v26;
                tile = (const NavMeshTile *)(unsigned int)(int)(float)(FloatClamp(*(float *)(v6 + 80), 0.0, 1.0) * 255.0);
                if ( *(_BYTE *)(((unsigned __int64)&cache->linkData.bmax >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)cache + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&cache->linkData.bmax >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_store1(&cache->linkData.bmax);
                }
                cache->linkData.bmax = (unsigned __int8)tile;
              }
            }
          }
        }
      }
    }
  }
  if ( v46 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_DWORD *)((v6 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1379: range 000000000CC25538-000000000CC266A4
void __cdecl NavMesh::ConnectExtLinks(
        NavMesh *const this,
        NavMeshTile *tile,
        NavMeshTile *target,
        int side,
        float portalHeight)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char *v7; // rbx
  _DWORD *v8; // r12
  const NavMeshDataHeader *header; // rdx
  char v10; // cl
  char v11; // dl
  char v12; // dl
  const Vector3f *verts; // rcx
  char v14; // dl
  const Vector3f *v15; // r14
  size_t Index; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  Vector3f *v19; // r15
  int v20; // eax
  NavMeshPolyRef v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rcx
  char v29; // dl
  char v30; // dl
  double v31; // xmm0_8
  char v32; // dl
  int v33; // esi
  char v34; // dl
  double v35; // xmm0_8
  char v36; // dl
  int v37; // esi
  unsigned int *polyRegions; // r14
  uint32_t *v39; // rcx
  char v40; // dl
  uint32_t v41; // r8d
  SurfaceIDType surfaceID; // di
  uint32_t *v43; // rcx
  uint32_t v44; // edx
  NavMeshTile *tilea; // [rsp+20h] [rbp-2C0h]
  int i; // [rsp+34h] [rbp-2ACh]
  int j; // [rsp+38h] [rbp-2A8h]
  int k; // [rsp+3Ch] [rbp-2A4h]
  int nv; // [rsp+40h] [rbp-2A0h]
  unsigned int dir; // [rsp+44h] [rbp-29Ch]
  int nnei; // [rsp+48h] [rbp-298h]
  unsigned int idx; // [rsp+4Ch] [rbp-294h]
  NavMeshPoly *poly; // [rsp+50h] [rbp-290h]
  const Vector3f *va; // [rsp+58h] [rbp-288h]
  const Vector3f *vb; // [rsp+60h] [rbp-280h]
  NavMeshLink *link; // [rsp+68h] [rbp-278h]
  char v61[624]; // [rsp+70h] [rbp-270h] BYREF

  tilea = tile;
  v5 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(576LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 576);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 15 pointCount:1411 48 4 9 tmin:1447 64 4 9 tmax:1448 80 16 12 linkEpl:1419 112 32 8 nei:1"
                        "414 176 32 9 neia:1415 240 48 16 linkRefSets:1392 320 192 11 points:1410";
  *(_QWORD *)(v5 + 16) = NavMesh::ConnectExtLinks;
  v8 = (_DWORD *)(v5 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = 61956;
  v8[536862723] = 62194;
  v8[536862724] = -219021312;
  v8[536862725] = 62194;
  v8[536862726] = -219021312;
  v8[536862727] = 62194;
  v8[536862729] = -218959118;
  v8[536862736] = -202116109;
  v8[536862737] = -202116109;
  if ( tile )
  {
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->header, tile);
      header = tilea->header;
      v10 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
      LOBYTE(tile) = v10 != 0;
      if ( v10 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v10 )
        __asan_report_load4(&header->polyCount);
      if ( i >= header->polyCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->polys, tile);
      poly = &tilea->polys[i];
      std::set<unsigned long long>::set((std::set<long long unsigned int> *const)(v5 + 240));
      tile = (NavMeshTile *)(((_BYTE)poly + 28) & 7);
      if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)tile >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&poly->vertCount);
      }
      nv = poly->vertCount;
      for ( j = 0; j < nv; ++j )
      {
        v11 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
        tile = (NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
        if ( v11 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v11 )
          __asan_report_load2(&poly->neis[j]);
        if ( (poly->neis[j] & 0x8000u) != 0 )
        {
          v12 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          tile = (NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
          if ( v12 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v12 )
            __asan_report_load2(&poly->neis[j]);
          dir = (unsigned __int8)poly->neis[j];
          if ( side == -1 || dir == side )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tilea->verts >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tilea->verts, tile);
            verts = tilea->verts;
            v14 = *(_BYTE *)(((unsigned __int64)&poly->verts[j] >> 3) + 0x7FFF8000);
            if ( v14 != 0 && (char)(((2 * j + (_BYTE)poly) & 7) + 1) >= v14 )
              __asan_report_load2(&poly->verts[j]);
            va = &verts[poly->verts[j]];
            v15 = tilea->verts;
            Index = NextIndex(j, nv);
            v17 = (unsigned __int64)&poly->verts[Index];
            if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
              && (char)((v17 & 7) + 1) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(v17);
            }
            vb = &v15[poly->verts[Index]];
            v18 = 15LL;
            v19 = (Vector3f *)(v5 + 320);
            while ( v18 >= 0 )
            {
              Vector3f::Vector3f(v19++);
              --v18;
            }
            *(_DWORD *)(v5 + 32) = 0;
            NavMesh::GetPolyEdgeDetailPoints(this, tilea, i, j, (Vector3f *)(v5 + 320), (int *)(v5 + 32), 16);
            v20 = TileLUTHelper::OppositeTile(dir);
            tile = (NavMeshTile *)(v5 + 320);
            nnei = NavMesh::FindConnectingPolys(
                     this,
                     (const Vector3f *)(v5 + 320),
                     *(_DWORD *)(v5 + 32),
                     target,
                     v20,
                     (NavMeshPolyRef *)(v5 + 112),
                     (PortalArea *)(v5 + 176),
                     4,
                     portalHeight);
            for ( k = 0; k < nnei; ++k )
            {
              tile = (NavMeshTile *)(v5 + 112 + 8LL * k);
              *(std::pair<std::_Rb_tree_const_iterator<long long unsigned int>,bool> *)(v5 + 80) = std::set<unsigned long long>::emplace<unsigned long long &>(
                                                                                                     (std::set<long long unsigned int> *const)(v5 + 240),
                                                                                                     (unsigned __int64 *)&tile->surfaceID,
                                                                                                     (unsigned __int64 *)&tile->surfaceID);
              if ( *(_BYTE *)(v5 + 88) == 1 )
              {
                idx = FreeList<NavMeshLink,false>::Alloc(&this->m_links);
                if ( idx != -1 )
                {
                  link = FreeList<NavMeshLink,false>::operator[](&this->m_links, idx);
                  if ( *(_BYTE *)(((8LL * k + v5 + 112) >> 3) + 0x7FFF8000) )
                    __asan_report_load8(8LL * k + v5 + 112, idx);
                  v21 = *(_QWORD *)&v7[8 * k - 464];
                  if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  link->ref = v21;
                  if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store1(&link->edge);
                  }
                  link->edge = j;
                  v22 = dir;
                  if ( *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)link + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store1(&link->side);
                  }
                  link->side = dir;
                  if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&tilea->polyLinks, dir);
                  v23 = (unsigned __int64)&tilea->polyLinks[i];
                  v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
                  LOBYTE(v22) = v24 != 0;
                  v25 = ((LOBYTE(tilea->polyLinks) + 4 * (_BYTE)i) & 7u) + 3;
                  if ( v24 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= v24 )
                  {
                    v25 = (__int64)&tilea->polyLinks[i];
                    __asan_report_load4(v25);
                  }
                  if ( idx == *(_DWORD *)v23 )
                  {
                    __asan_handle_no_return(v25);
                    __assert_fail(
                      "idx != tile->polyLinks[i]",
                      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                      0x597u,
                      "void NavMesh::ConnectExtLinks(NavMeshTile*, NavMeshTile*, int, float)");
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&tilea->polyLinks, v22);
                  v26 = (unsigned __int64)&tilea->polyLinks[i];
                  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0
                    && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(&tilea->polyLinks[i]);
                  }
                  v27 = *(_DWORD *)v26;
                  if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&link->next);
                  }
                  link->next = v27;
                  v28 = (unsigned __int64)&tilea->polyLinks[i];
                  v29 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
                  LOBYTE(v22) = v29 != 0;
                  if ( v29 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= v29 )
                    __asan_report_store4(&tilea->polyLinks[i]);
                  *(_DWORD *)v28 = idx;
                  if ( dir && dir != 4 )
                  {
                    if ( dir == 2 || dir == 6 )
                    {
                      v34 = *(_BYTE *)(((8LL * k + v5 + 176) >> 3) + 0x7FFF8000);
                      if ( v34 != 0 && (char)(((8 * k + v5 - 80) & 7) + 3) >= v34 )
                        __asan_report_load4(8LL * k + v5 + 176);
                      LODWORD(v35) = *(_DWORD *)&v7[8 * k - 400];
                      if ( *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)va & 7) + 3) >= *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) )
                      {
                        v35 = __asan_report_load4(va);
                      }
                      *(float *)&v35 = *(float *)&v35 - va->x;
                      if ( *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)vb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) )
                      {
                        v35 = __asan_report_load4(vb);
                      }
                      *(float *)(v5 + 48) = *(float *)&v35 / (float)(vb->x - va->x);
                      v36 = *(_BYTE *)(((8LL * k + v5 + 176 + 4) >> 3) + 0x7FFF8000);
                      if ( v36 != 0 && (char)(((8 * k + v5 - 80 + 4) & 7) + 3) >= v36 )
                        __asan_report_load4(8LL * k + v5 + 176 + 4);
                      *(float *)(v5 + 64) = (float)(*(float *)(v5 + 576 + 8LL * k - 396) - va->x)
                                          / (float)(vb->x - va->x);
                      if ( *(float *)(v5 + 48) > *(float *)(v5 + 64) )
                        std::swap<float>((float *)(v5 + 48), (float *)(v5 + 64));
                      v37 = (int)(float)(FloatClamp(*(float *)(v5 + 48), 0.0, 1.0) * 255.0);
                      if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3)
                                                                          + 0x7FFF8000) )
                      {
                        __asan_report_store1(&link->bmin);
                      }
                      link->bmin = v37;
                      v22 = (unsigned int)(int)(float)(FloatClamp(*(float *)(v5 + 64), 0.0, 1.0) * 255.0);
                      if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)link + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3)
                                                                          + 0x7FFF8000) )
                      {
                        __asan_report_store1(&link->bmax);
                      }
                      link->bmax = v22;
                    }
                  }
                  else
                  {
                    v30 = *(_BYTE *)(((8LL * k + v5 + 176) >> 3) + 0x7FFF8000);
                    if ( v30 != 0 && (char)(((8 * k + v5 - 80) & 7) + 3) >= v30 )
                      __asan_report_load4(8LL * k + v5 + 176);
                    LODWORD(v31) = *(_DWORD *)&v7[8 * k - 400];
                    if ( *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)va + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) )
                    {
                      v31 = __asan_report_load4(&va->z);
                    }
                    *(float *)&v31 = *(float *)&v31 - va->z;
                    if ( *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)vb + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) )
                    {
                      v31 = __asan_report_load4(&vb->z);
                    }
                    *(float *)(v5 + 48) = *(float *)&v31 / (float)(vb->z - va->z);
                    v32 = *(_BYTE *)(((8LL * k + v5 + 176 + 4) >> 3) + 0x7FFF8000);
                    if ( v32 != 0 && (char)(((8 * k + v5 - 80 + 4) & 7) + 3) >= v32 )
                      __asan_report_load4(8LL * k + v5 + 176 + 4);
                    *(float *)(v5 + 64) = (float)(*(float *)(v5 + 576 + 8LL * k - 396) - va->z) / (float)(vb->z - va->z);
                    if ( *(float *)(v5 + 48) > *(float *)(v5 + 64) )
                      std::swap<float>((float *)(v5 + 48), (float *)(v5 + 64));
                    v33 = (int)(float)(FloatClamp(*(float *)(v5 + 48), 0.0, 1.0) * 255.0);
                    if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3)
                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link->bmin);
                    }
                    link->bmin = v33;
                    v22 = (unsigned int)(int)(float)(FloatClamp(*(float *)(v5 + 64), 0.0, 1.0) * 255.0);
                    if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3)
                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link->bmax);
                    }
                    link->bmax = v22;
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&target->polyRegions >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&target->polyRegions, v22);
                  polyRegions = target->polyRegions;
                  if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                    __asan_report_load8(link, v22);
                  v39 = &polyRegions[NavMeshPolyRefHelper::DecodePolyIdPoly(link->ref)];
                  v40 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
                  LOBYTE(v22) = v40 != 0;
                  if ( v40 != 0 && (char)(((unsigned __int8)v39 & 7) + 3) >= v40 )
                    __asan_report_load4(v39);
                  v41 = *v39;
                  if ( *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) <= 1 )
                  {
                    __asan_report_load2(target);
                  }
                  surfaceID = target->surfaceID;
                  if ( *(_BYTE *)(((unsigned __int64)&tilea->polyRegions >> 3) + 0x7FFF8000) )
                  {
                    surfaceID = (_WORD)tilea + 104;
                    __asan_report_load8(&tilea->polyRegions, v22);
                  }
                  v43 = &tilea->polyRegions[i];
                  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
                    && (char)(((LOBYTE(tilea->polyRegions) + 4 * i) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3)
                                                                                          + 0x7FFF8000) )
                  {
                    surfaceID = (unsigned __int16)v43;
                    __asan_report_load4(v43);
                  }
                  v44 = *v43;
                  if ( *(_BYTE *)(((unsigned __int64)tilea >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)tilea >> 3) + 0x7FFF8000) <= 1 )
                  {
                    surfaceID = (unsigned __int16)tilea;
                    __asan_report_load2(tilea);
                  }
                  tile = (NavMeshTile *)tilea->surfaceID;
                  NavMesh::MergeSurfacesConnectRegion(this, (SurfaceIDType)tile, v44, surfaceID, v41);
                }
              }
            }
          }
        }
      }
      std::set<unsigned long long>::~set((std::set<long long unsigned int> *const)(v5 + 240));
    }
  }
  if ( v61 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0LL;
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

// Line 1462: range 000000000CC266A6-000000000CC26DD9
void __cdecl NavMesh::ConnectIntLinks(NavMesh *const this, NavMeshTile *tile)
{
  const NavMeshDataHeader *header; // rdx
  char v3; // cl
  void *p_polyCount; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  char v8; // dl
  NavMeshTile *v9; // rsi
  char v10; // dl
  char v11; // dl
  NavMeshPolyRef v12; // rdx
  unsigned __int8 bmax; // cl
  char v14; // dl
  unsigned __int64 v15; // rcx
  char v16; // dl
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  char v21; // dl
  NavMeshTile *tilea; // [rsp+0h] [rbp-40h]
  NavMesh *thisa; // [rsp+8h] [rbp-38h]
  int i; // [rsp+14h] [rbp-2Ch]
  int i_0; // [rsp+18h] [rbp-28h]
  int j; // [rsp+1Ch] [rbp-24h]
  int polyCount; // [rsp+20h] [rbp-20h]
  int idx; // [rsp+24h] [rbp-1Ch]
  NavMeshPolyRef base; // [rsp+28h] [rbp-18h]
  NavMeshPoly *poly; // [rsp+30h] [rbp-10h]
  NavMeshLink *link; // [rsp+38h] [rbp-8h]

  thisa = this;
  tilea = tile;
  if ( !tile )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x5B7u,
      "void NavMesh::ConnectIntLinks(NavMeshTile*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
  {
    this = (NavMesh *const)&tile->header;
    __asan_report_load8(&tile->header, tile);
  }
  if ( !tile->header )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->header",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x5B8u,
      "void NavMesh::ConnectIntLinks(NavMeshTile*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tile);
  header = tile->header;
  v3 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
  LOBYTE(tile) = v3 != 0;
  p_polyCount = (void *)((((_BYTE)header + 20) & 7u) + 3);
  if ( v3 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v3 )
  {
    p_polyCount = &header->polyCount;
    __asan_report_load4(&header->polyCount);
  }
  polyCount = header->polyCount;
  if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
  {
    p_polyCount = &tilea->polyLinks;
    __asan_report_load8(&tilea->polyLinks, tile);
  }
  if ( tilea->polyLinks )
  {
    __asan_handle_no_return(p_polyCount);
    __assert_fail(
      "!tile->polyLinks",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x5BDu,
      "void NavMesh::ConnectIntLinks(NavMeshTile*)");
  }
  v5 = 16LL;
  v6 = (__int64)malloc_internal(
                  4LL * polyCount,
                  0x10uLL,
                  kAllocateOptionNone,
                  "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                  1470);
  if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  tilea->polyLinks = (unsigned int *)v6;
  for ( i = 0; i < polyCount; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->polyLinks, v5);
    v7 = (unsigned __int64)&tilea->polyLinks[i];
    v8 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v8 != 0;
    if ( v8 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= v8 )
      __asan_report_store4(&tilea->polyLinks[i]);
    *(_DWORD *)v7 = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_defaultMemoryCallback, v5);
  v9 = tilea;
  base = NavMesh::GetPolyRefBase(thisa, tilea, thisa->m_defaultMemoryCallback);
  for ( i_0 = 0; i_0 < polyCount; ++i_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->polys, v9);
    poly = &tilea->polys[i_0];
    v9 = (NavMeshTile *)(((_BYTE)poly + 28) & 7);
    if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
      && (char)v9 >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&poly->vertCount);
    }
    for ( j = poly->vertCount - 1; j >= 0; --j )
    {
      v10 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
      v9 = (NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
      if ( v10 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v10 )
        __asan_report_load2(&poly->neis[j]);
      if ( (__int16)poly->neis[j] > 0 )
      {
        idx = FreeList<NavMeshLink,false>::Alloc(&thisa->m_links);
        if ( idx != -1 )
        {
          link = FreeList<NavMeshLink,false>::operator[](&thisa->m_links, idx);
          v11 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v11 )
            __asan_report_load2(&poly->neis[j]);
          v12 = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, (unsigned int)poly->neis[j] - 1);
          if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          link->ref = v12;
          if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(&link->edge);
          }
          link->edge = j;
          if ( *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)link + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(&link->side);
          }
          link->side = -1;
          v9 = (NavMeshTile *)(((_BYTE)link + 15) & 7);
          if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
            && (char)v9 >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(&link->bmax);
          }
          link->bmax = 0;
          bmax = link->bmax;
          v14 = *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000);
          LOBYTE(v9) = v14 != 0;
          if ( v14 != 0 && (((unsigned __int8)link + 14) & 7) >= v14 )
            __asan_report_store1(&link->bmin);
          link->bmin = bmax;
          if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tilea->polyLinks, v9);
          v15 = (unsigned __int64)&tilea->polyLinks[i_0];
          v16 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
          LOBYTE(v9) = v16 != 0;
          v17 = ((LOBYTE(tilea->polyLinks) + 4 * (_BYTE)i_0) & 7u) + 3;
          if ( v16 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i_0) & 7) + 3) >= v16 )
          {
            v17 = (__int64)&tilea->polyLinks[i_0];
            __asan_report_load4(v17);
          }
          if ( idx == *(_DWORD *)v15 )
          {
            __asan_handle_no_return(v17);
            __assert_fail(
              "idx != tile->polyLinks[i]",
              "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
              0x5D9u,
              "void NavMesh::ConnectIntLinks(NavMeshTile*)");
          }
          if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tilea->polyLinks, v9);
          v18 = (unsigned __int64)&tilea->polyLinks[i_0];
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(tilea->polyLinks) + 4 * i_0) & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&tilea->polyLinks[i_0]);
          }
          v19 = *(_DWORD *)v18;
          if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&link->next);
          }
          link->next = v19;
          v20 = (unsigned __int64)&tilea->polyLinks[i_0];
          v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
          LOBYTE(v9) = v21 != 0;
          if ( v21 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i_0) & 7) + 3) >= v21 )
            __asan_report_store4(&tilea->polyLinks[i_0]);
          *(_DWORD *)v20 = idx;
        }
      }
    }
  }
};

// Line 1507: range 000000000CC26DDA-000000000CC276FD
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMesh::ClosestPointOnPolyInTileLocal(
        const NavMesh *const this,
        const NavMeshTile *tile,
        const NavMeshPoly *poly,
        const Vector3f *pos,
        Vector3f *closest)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  char *v8; // rbx
  _DWORD *v9; // r12
  __int64 v10; // rsi
  const NavMeshPolyDetailIndex *detailTris; // rcx
  __int64 v12; // r14
  Vector3f *v13; // r15
  unsigned __int64 v14; // rcx
  unsigned __int16 v15; // cx
  char v16; // dl
  const Vector3f *verts; // rsi
  unsigned __int64 v18; // rcx
  int v19; // ecx
  char v20; // dl
  unsigned __int64 v21; // rdx
  char v22; // cl
  __int64 v23; // rax
  const Vector3f *detailVerts; // rsi
  int vertBase; // edi
  unsigned __int64 v26; // rcx
  int v27; // ecx
  unsigned __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // xmm0_8
  __int64 v32; // rax
  __m128i v33; // xmm0
  float closestDistSqr; // [rsp+3Ch] [rbp-F4h]
  int j; // [rsp+40h] [rbp-F0h]
  int k; // [rsp+44h] [rbp-ECh]
  unsigned int ip_0; // [rsp+48h] [rbp-E8h]
  float d; // [rsp+4Ch] [rbp-E4h]
  const NavMeshPolyDetail *pd; // [rsp+50h] [rbp-E0h]
  const NavMeshPolyDetailIndex *t; // [rsp+58h] [rbp-D8h]
  char v45[208]; // [rsp+60h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  v8 = (char *)(v6 + 160);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 12 7 pt:1524 80 36 6 v:1515";
  *(_QWORD *)(v6 + 16) = NavMesh::ClosestPointOnPolyInTileLocal;
  v9 = (_DWORD *)(v6 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = 61937;
  v9[536862721] = 0x4000000;
  v9[536862722] = 62194;
  v9[536862723] = -217841664;
  v9[536862724] = -202116109;
  ip_0 = GetPolyIndex(tile, poly);
  if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->detailMeshes, poly);
  pd = &tile->detailMeshes[ip_0];
  closestDistSqr = 3.4028235e38;
  for ( j = 0; ; ++j )
  {
    v10 = (((_BYTE)pd + 10) & 7u) + 1;
    if ( *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&pd->triCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(&pd->triCount);
    }
    if ( j >= pd->triCount )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->detailTris, v10);
    detailTris = tile->detailTris;
    if ( *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pd + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pd->triBase >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pd->triBase);
    }
    t = &detailTris[4 * (pd->triBase + j)];
    v12 = 2LL;
    v13 = (Vector3f *)(v6 + 80);
    while ( v12 >= 0 )
    {
      Vector3f::Vector3f(v13++);
      --v12;
    }
    for ( k = 0; k <= 2; ++k )
    {
      v14 = (unsigned __int64)&t[k];
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(&t[k]);
      }
      v15 = *(_WORD *)v14;
      v16 = *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000);
      LOBYTE(v10) = v16 != 0;
      if ( v16 != 0 && (((unsigned __int8)poly + 28) & 7) >= v16 )
        __asan_report_load1(&poly->vertCount);
      if ( v15 >= poly->vertCount )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->detailVerts, v10);
        detailVerts = tile->detailVerts;
        if ( *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pd & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pd >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(pd);
        }
        vertBase = pd->vertBase;
        v26 = (unsigned __int64)&t[k];
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        {
          vertBase = 2 * k + (_DWORD)t;
          __asan_report_load2(&t[k]);
        }
        v27 = *(unsigned __int16 *)v26;
        if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
        {
          vertBase = (_DWORD)poly + 28;
          __asan_report_load1(&poly->vertCount);
        }
        v28 = (unsigned __int64)&detailVerts[vertBase + v27 - (unsigned int)poly->vertCount];
        v29 = *(_BYTE *)(((v6 + 80 + 12LL * k) >> 3) + 0x7FFF8000);
        if ( (char)((v6 + 80 + 12 * k) & 7) >= v29 && v29 != 0
          || *(_BYTE *)(((v6 + 80 + 12LL * k + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 80 + 12 * k + 11) & 7) >= *(_BYTE *)(((v6 + 80 + 12LL * k + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 80 + 12LL * k, 12LL);
        }
        v10 = ((_DWORD)v28 + 11) & 7;
        if ( (char)(v28 & 7) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000) && *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v28 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v28 + 11) & 7) >= *(_BYTE *)(((v28 + 11) >> 3) + 0x7FFF8000) )
        {
          v10 = 12LL;
          __asan_report_load_n(v28, 12LL);
        }
        v30 = (__int64)&v8[12 * k - 80];
        *(_QWORD *)v30 = *(_QWORD *)v28;
        *(_DWORD *)(v30 + 8) = *(_DWORD *)(v28 + 8);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->verts, v10);
        verts = tile->verts;
        v18 = (unsigned __int64)&t[k];
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((2 * k + (_BYTE)t) & 7) + 1) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load2(&t[k]);
        }
        v19 = *(unsigned __int16 *)v18;
        v20 = *(_BYTE *)(((unsigned __int64)&poly->verts[v19] >> 3) + 0x7FFF8000);
        if ( v20 != 0 && (char)(((2 * v19 + (_BYTE)poly) & 7) + 1) >= v20 )
          __asan_report_load2(&poly->verts[v19]);
        v21 = (unsigned __int64)&verts[poly->verts[v19]];
        v22 = *(_BYTE *)(((v6 + 80 + 12LL * k) >> 3) + 0x7FFF8000);
        if ( (char)((v6 + 80 + 12 * k) & 7) >= v22 && v22 != 0
          || *(_BYTE *)(((v6 + 80 + 12LL * k + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 80 + 12 * k + 11) & 7) >= *(_BYTE *)(((v6 + 80 + 12LL * k + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 80 + 12LL * k, 12LL);
        }
        v10 = ((_DWORD)v21 + 11) & 7;
        if ( (char)(v21 & 7) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) && *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v21 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v21 + 11) & 7) >= *(_BYTE *)(((v21 + 11) >> 3) + 0x7FFF8000) )
        {
          v10 = 12LL;
          __asan_report_load_n(v21, 12LL);
        }
        v23 = (__int64)&v8[12 * k - 80];
        *(_QWORD *)v23 = *(_QWORD *)v21;
        *(_DWORD *)(v23 + 8) = *(_DWORD *)(v21 + 8);
      }
    }
    *(Vector3f *)((char *)&v5 - 8) = ClosestPtPointTriangle(
                                       pos,
                                       (const Vector3f *)(v6 + 80),
                                       (const Vector3f *)(v6 + 92),
                                       (const Vector3f *)(v6 + 104));
    v32 = v31;
    v33 = v5;
    *(_QWORD *)(v6 + 48) = v32;
    *(_DWORD *)(v6 + 56) = v5.m128i_i32[0];
    *(float *)v33.m128i_i32 = SqrDistance(pos, (const Vector3f *)(v6 + 48));
    d = COERCE_FLOAT(_mm_cvtsi128_si32(v33));
    if ( closestDistSqr > d )
    {
      if ( ((unsigned __int8)closest & 7) >= *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)closest >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)closest + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&closest->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(closest, 12LL);
      }
      *(_QWORD *)&closest->x = *(_QWORD *)(v6 + 48);
      closest->z = *(float *)(v6 + 56);
      closestDistSqr = d;
    }
  }
  if ( v45 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1535: range 000000000CC27C7C-000000000CC27EAD
NavMeshPolyRef __cdecl NavMesh::FindNearestPoly(
        const NavMesh *const this,
        int typeID,
        const Vector3f *center,
        const Vector3f *extents,
        Vector3f *nearestPt)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  NavMeshPolyRef result; // rax
  const NavMeshTile *tile; // [rsp+38h] [rbp-A8h]
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 64 12 nearest:1572";
  *(_QWORD *)(v5 + 16) = NavMesh::FindNearestPoly;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450892) = -202116109;
  NavMesh::FindNearestPoly(int,Vector3f const&,Vector3f const&,Vector3f*)const::NearestQuery::NearestQuery(
    (NavMesh::FindNearestPoly::NearestQuery *const)(v5 + 32),
    this,
    center);
  NavMesh::QueryPolygons(this, typeID, center, extents, (NavMeshProcessCallback *)(v5 + 32));
  if ( *(_QWORD *)(v5 + 56) )
  {
    if ( nearestPt )
    {
      tile = NavMesh::GetTileByRef(this, *(_QWORD *)(v5 + 56));
      if ( tile )
      {
        if ( ((unsigned __int8)nearestPt & 7) >= *(_BYTE *)(((unsigned __int64)nearestPt >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)nearestPt >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&nearestPt->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)nearestPt + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&nearestPt->z + 3) >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_store_n(nearestPt, 12LL);
        }
        *nearestPt = TileToWorld(tile, (const Vector3f *)(v5 + 80));
      }
    }
    result = *(_QWORD *)(v5 + 56);
  }
  else
  {
    result = 0LL;
  }
  if ( v13 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1544: range 000000000CC276FE-000000000CC27900
void __cdecl NavMesh::FindNearestPoly(int,Vector3f const&,Vector3f const&,Vector3f*)const::NearestQuery::NearestQuery(
        NavMesh::FindNearestPoly::NearestQuery *const this,
        const NavMesh *navmesh,
        const Vector3f *center)
{
  int (**v3)(...); // rcx

  NavMeshProcessCallback::NavMeshProcessCallback(this);
  v3 = (int (**)(...))&off_1EFB0110;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshProcessCallback = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMesh = navmesh;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_PolyRef >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_PolyRef = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_DistanceSqr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_DistanceSqr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_DistanceSqr);
  }
  this->m_DistanceSqr = 3.4028235e38;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Center, 12LL);
  }
  if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(center, 12LL);
  }
  this->m_Center = *center;
  Vector3f::Vector3f(&this->m_Point, 0.0, 0.0, 0.0);
};

// Line 1550: range 000000000CC27902-000000000CC27C7B
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMesh::FindNearestPoly(int,Vector3f const&,Vector3f const&,Vector3f*)const::NearestQuery::ProcessPolygons(
        NavMesh::FindNearestPoly::NearestQuery *const this,
        const NavMeshTile *tile,
        const NavMeshPolyRef *polyRefs,
        const NavMeshPoly **polys,
        const int itemCount)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r13
  __int64 p_m_Center; // rsi
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  __m128i m_DistanceSqr_low; // xmm0
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  char v15; // dl
  int i; // [rsp+38h] [rbp-98h]
  float d; // [rsp+3Ch] [rbp-94h]
  NavMeshPolyRef ref; // [rsp+40h] [rbp-90h]
  const NavMeshPoly *poly; // [rsp+48h] [rbp-88h]
  char v24[128]; // [rsp+50h] [rbp-80h] BYREF

  v6 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 12 18 localPosition:1552 64 12 18 closestPtPoly:1558";
  *(_QWORD *)(v6 + 16) = NavMesh::FindNearestPoly(int,Vector3f const&,Vector3f const&,Vector3f*)const::NearestQuery::ProcessPolygons;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219020288;
  v8[536862722] = -202177536;
  p_m_Center = (__int64)&this->m_Center;
  *(Vector3f *)((char *)&v5 - 8) = WorldToTile(tile, &this->m_Center);
  v11 = v10;
  m_DistanceSqr_low = v5;
  *(_QWORD *)(v6 + 32) = v11;
  *(_DWORD *)(v6 + 40) = v5.m128i_i32[0];
  for ( i = 0; i < itemCount; ++i )
  {
    v13 = (unsigned __int64)&polyRefs[i];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(&polyRefs[i], p_m_Center);
    ref = *(_QWORD *)v13;
    v14 = (unsigned __int64)&polys[i];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(&polys[i], p_m_Center);
    poly = *(const NavMeshPoly **)v14;
    Vector3f::Vector3f((Vector3f *const)(v6 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_NavMesh, p_m_Center);
    NavMesh::ClosestPointOnPolyInTileLocal(
      this->m_NavMesh,
      tile,
      poly,
      (const Vector3f *)(v6 + 32),
      (Vector3f *)(v6 + 64));
    p_m_Center = v6 + 64;
    *(float *)m_DistanceSqr_low.m128i_i32 = SqrDistance((const Vector3f *)(v6 + 32), (const Vector3f *)(v6 + 64));
    d = COERCE_FLOAT(_mm_cvtsi128_si32(m_DistanceSqr_low));
    if ( *(_BYTE *)(((unsigned __int64)&this->m_DistanceSqr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_DistanceSqr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_DistanceSqr);
    }
    m_DistanceSqr_low = (__m128i)LODWORD(this->m_DistanceSqr);
    if ( *(float *)m_DistanceSqr_low.m128i_i32 > d )
    {
      v15 = *(_BYTE *)((((unsigned __int64)&this->m_Point.z + 3) >> 3) + 0x7FFF8000);
      LOBYTE(p_m_Center) = v15 != 0;
      if ( *(char *)(((unsigned __int64)&this->m_Point >> 3) + 0x7FFF8000) < 0
        || v15 != 0 && (((unsigned __int8)this + 59) & 7) >= v15 )
      {
        p_m_Center = 12LL;
        __asan_report_store_n(&this->m_Point, 12LL);
      }
      this->m_Point = *(Vector3f *)(v6 + 64);
      m_DistanceSqr_low = (__m128i)LODWORD(d);
      this->m_DistanceSqr = d;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_PolyRef >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->m_PolyRef = ref;
    }
  }
  if ( v24 == (char *)v6 )
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

// Line 1590: range 000000000CC27EAE-000000000CC289E9
void __cdecl NavMesh::QueryPolygons(
        const NavMesh *const this,
        int typeID,
        const Vector3f *cen,
        const Vector3f *ext,
        NavMeshProcessCallback *callback)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  NavMeshTileMemoryCallback *m_memoryCallback; // r14
  _QWORD *p_vptr_NavMeshTileMemoryCallback; // rax
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(NavMeshTileMemoryCallback *, _QWORD); // r15
  unsigned __int64 v12; // rax
  Quaternionf *p_m_Rotation; // r15
  Vector3f *p_m_Position; // r14
  float tileSize; // xmm1_4
  __int64 v17; // rsi
  double v18; // xmm0_8
  NavMeshTileMemoryCallback *v19; // r14
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  __int64 (__fastcall *v22)(NavMeshTileMemoryCallback *, _QWORD); // r15
  unsigned __int64 v23; // rax
  NavMeshTileMemoryCallback *v24; // r14
  _QWORD *v25; // rax
  unsigned __int64 v26; // rax
  __int64 (__fastcall *v27)(NavMeshTileMemoryCallback *, const NavMeshTile *, double); // r15
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v28; // rdx
  TileLookUpData *p_second; // rax
  const NavMeshTile *tileNavMeshIndex; // rsi
  NavMeshTileMemoryCallback *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v36; // rdx
  TileLookUpData *v37; // rax
  const NavMeshTile *v38; // rsi
  float invTileSize; // [rsp+30h] [rbp-250h]
  int iminx; // [rsp+34h] [rbp-24Ch]
  int imaxx; // [rsp+38h] [rbp-248h]
  int jminz; // [rsp+3Ch] [rbp-244h]
  int jmaxz; // [rsp+40h] [rbp-240h]
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+48h] [rbp-238h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > v49; // [rsp+50h] [rbp-230h] BYREF
  const TileLUT *lut; // [rsp+58h] [rbp-228h]
  const NavMesh::SurfaceData *surf; // [rsp+60h] [rbp-220h]
  const MinMaxAABB *worldbounds; // [rsp+68h] [rbp-218h]
  const NavMeshTile *tile; // [rsp+70h] [rbp-210h]
  Vector3f min; // [rsp+78h] [rbp-208h] BYREF
  Vector3f max; // [rsp+84h] [rbp-1FCh] BYREF
  AABB aabb; // [rsp+90h] [rbp-1F0h] BYREF
  char v57[464]; // [rsp+B0h] [rbp-1D0h] BYREF

  v5 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(416LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 32 4 6 i:1640 48 4 6 j:1642 64 8 7 it:1593 96 8 8 end:1594 128 8 17 replaceFound:1647 160 8 1"
                        "0 found:1658 192 8 11 lutKey:1644 224 24 11 bounds:1591 288 24 12 overlap:1602 352 24 16 localBounds:1623";
  *(_QWORD *)(v5 + 16) = NavMesh::QueryPolygons;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -234881024;
  v7[536862728] = -218959118;
  v7[536862729] = -234881024;
  v7[536862730] = -218959118;
  v7[536862731] = -218103808;
  v7[536862732] = -202116109;
  max = operator+(cen, ext);
  min = operator-(cen, ext);
  MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v5 + 224), &min, &max);
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v5 + 64) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::begin(&this->m_SurfaceIDToData);
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v5 + 96) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData);
  while ( __gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 64),
            (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 96)) )
  {
    surf = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 64))->second;
    if ( typeID == -1 )
      goto LABEL_10;
    if ( *(_BYTE *)(((unsigned __int64)surf >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)surf >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(surf);
    }
    if ( typeID == surf->m_Settings.agentTypeID )
    {
LABEL_10:
      MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v5 + 288), 1);
      if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
        __asan_report_load8(&callback->m_memoryCallback, 1LL);
      if ( callback->m_memoryCallback )
      {
        m_memoryCallback = callback->m_memoryCallback;
        p_vptr_NavMeshTileMemoryCallback = &m_memoryCallback->_vptr_NavMeshTileMemoryCallback;
        if ( *(_BYTE *)(((unsigned __int64)m_memoryCallback >> 3) + 0x7FFF8000) )
          p_vptr_NavMeshTileMemoryCallback = (_QWORD *)__asan_report_load8(callback->m_memoryCallback, 1LL);
        v10 = *p_vptr_NavMeshTileMemoryCallback + 152LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(v10, 1LL);
        v11 = *(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v10;
        v12 = (unsigned __int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 64));
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) <= 1 )
          v12 = __asan_report_load2(v12);
        worldbounds = (const MinMaxAABB *)v11(m_memoryCallback, *(unsigned __int16 *)v12);
        if ( worldbounds )
        {
          if ( !IntersectionAABBAABB((const MinMaxAABB *)(v5 + 224), worldbounds, (MinMaxAABB *)(v5 + 288))
            && !IntersectionAABBAABB((const MinMaxAABB *)(v5 + 224), &surf->m_WorldBounds, (MinMaxAABB *)(v5 + 288)) )
          {
            goto LABEL_72;
          }
        }
        else if ( !IntersectionAABBAABB((const MinMaxAABB *)(v5 + 224), &surf->m_WorldBounds, (MinMaxAABB *)(v5 + 288)) )
        {
          goto LABEL_72;
        }
      }
      else if ( !IntersectionAABBAABB((const MinMaxAABB *)(v5 + 224), &surf->m_WorldBounds, (MinMaxAABB *)(v5 + 288)) )
      {
        goto LABEL_72;
      }
      AABB::AABB((AABB *const)(v5 + 352));
      p_m_Rotation = &surf->m_Rotation;
      p_m_Position = &surf->m_Position;
      AABB::AABB(&aabb, (const MinMaxAABB *)(v5 + 288));
      InverseTransformAABB(&aabb, p_m_Position, p_m_Rotation, (AABB *)(v5 + 352));
      if ( *(_BYTE *)(((unsigned __int64)&surf->m_Settings.tileSize >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)surf + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surf->m_Settings.tileSize >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&surf->m_Settings.tileSize);
      }
      tileSize = (float)surf->m_Settings.tileSize;
      v17 = (((_BYTE)surf + 36) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&surf->m_Settings.cellSize >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)surf + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surf->m_Settings.cellSize >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&surf->m_Settings.cellSize);
      }
      invTileSize = 1.0 / (float)(tileSize * surf->m_Settings.cellSize);
      iminx = FloorfToInt((float)(*(float *)(v5 + 352) - *(float *)(v5 + 364)) * invTileSize);
      imaxx = FloorfToInt((float)(*(float *)(v5 + 364) + *(float *)(v5 + 352)) * invTileSize);
      jminz = FloorfToInt((float)(*(float *)(v5 + 360) - *(float *)(v5 + 372)) * invTileSize);
      *(_QWORD *)&v18 = *(unsigned int *)(v5 + 372);
      *(float *)&v18 = (float)(*(float *)&v18 + *(float *)(v5 + 360)) * invTileSize;
      jmaxz = FloorfToInt(*(float *)&v18);
      lut = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
        __asan_report_load8(&callback->m_memoryCallback, v17);
      if ( callback->m_memoryCallback )
      {
        v19 = callback->m_memoryCallback;
        v20 = &v19->_vptr_NavMeshTileMemoryCallback;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          v20 = (_QWORD *)__asan_report_load8(callback->m_memoryCallback, v17);
        v21 = *v20 + 144LL;
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v21, v17);
        v22 = *(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v21;
        v23 = (unsigned __int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 64));
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v23 >> 3) + 0x7FFF8000) <= 1 )
          v23 = __asan_report_load2(v23);
        lut = (const TileLUT *)v22(v19, *(unsigned __int16 *)v23);
      }
      for ( *(_DWORD *)(v5 + 32) = iminx; imaxx >= *(_DWORD *)(v5 + 32); ++*(_DWORD *)(v5 + 32) )
      {
        for ( *(_DWORD *)(v5 + 48) = jminz; jmaxz >= *(_DWORD *)(v5 + 48); ++*(_DWORD *)(v5 + 48) )
        {
          *(std::pair<int,int> *)(v5 + 192) = std::make_pair<int &,int &>((int *)(v5 + 32), (int *)(v5 + 48));
          if ( !lut )
            goto LABEL_66;
          *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v5 + 128) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v5 + 192));
          __rhs._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
          if ( !__gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                  (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v5 + 128),
                  &__rhs) )
            goto LABEL_66;
          if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
            __asan_report_load8(&callback->m_memoryCallback, &__rhs);
          v24 = callback->m_memoryCallback;
          v25 = &v24->_vptr_NavMeshTileMemoryCallback;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            v25 = (_QWORD *)__asan_report_load8(callback->m_memoryCallback, &__rhs);
          v26 = *v25 + 48LL;
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(v26, &__rhs);
          v27 = *(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *, double))v26;
          v28 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 128));
          p_second = &v28->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            v18 = __asan_report_load4(p_second);
          }
          tileNavMeshIndex = (const NavMeshTile *)(unsigned int)v28->second.tileNavMeshIndex;
          tile = (const NavMeshTile *)v27(v24, tileNavMeshIndex, v18);
          if ( tile )
          {
            tileNavMeshIndex = tile;
            NavMesh::QueryPolygonsInTile(
              this,
              tile,
              (const Vector3f *)(v5 + 352),
              (const Vector3f *)(v5 + 364),
              callback);
          }
          if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
            __asan_report_load8(&callback->m_memoryCallback, tileNavMeshIndex);
          v31 = callback->m_memoryCallback;
          v32 = &v31->_vptr_NavMeshTileMemoryCallback;
          v33 = *(unsigned __int8 *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v33 )
            v32 = (_QWORD *)__asan_report_load8(callback->m_memoryCallback, v33);
          v34 = *v32 + 200LL;
          v35 = *(unsigned __int8 *)((v34 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v35 )
            v34 = __asan_report_load8(v34, v35);
          if ( (*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *))v34)(v31) == 1 )
          {
LABEL_66:
            *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v5 + 160) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v5 + 192));
            v49._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_TileLUT)._M_current;
            if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                    (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v5 + 160),
                    &v49) )
            {
              v36 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 160));
              v37 = &v36->second;
              if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
              {
                v18 = __asan_report_load4(v37);
              }
              v38 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v36->second.tileNavMeshIndex);
              NavMesh::QueryPolygonsInTile(
                this,
                v38,
                (const Vector3f *)(v5 + 352),
                (const Vector3f *)(v5 + 364),
                callback);
            }
          }
        }
      }
    }
LABEL_72:
    __gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 64));
  }
  if ( v57 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 1670: range 000000000CC289EA-000000000CC29158
void __fastcall NavMesh::QueryTiles(
        const NavMesh *const this,
        SurfaceIDType surfid,
        const MinMaxAABB *aabb,
        dynamic_array<const NavMeshTile*,false,8> *tiles,
        dynamic_array<int,false,4> *tileinds)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  float tileSize; // xmm1_4
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v9; // rdx
  int *p_navMeshDataIndex; // rax
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v11; // rdx
  TileLookUpData *p_second; // rax
  __int64 tileNavMeshIndex; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  float invTileSize; // [rsp+3Ch] [rbp-264h]
  int iminx; // [rsp+40h] [rbp-260h]
  int imaxx; // [rsp+44h] [rbp-25Ch]
  int jminz; // [rsp+48h] [rbp-258h]
  int jmaxz; // [rsp+4Ch] [rbp-254h]
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+50h] [rbp-250h] BYREF
  const MinMaxAABB *bounds; // [rsp+58h] [rbp-248h]
  const NavMesh::SurfaceData *surf; // [rsp+60h] [rbp-240h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type v28; // [rsp+68h] [rbp-238h] BYREF
  char v29[560]; // [rsp+70h] [rbp-230h] BYREF

  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(512LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "12 32 2 11 surfid:1669 48 4 6 i:1696 64 4 6 j:1698 80 4 14 tileIndex:1704 96 8 7 it:1673 128 8 8"
                        " end:1674 160 8 10 found:1700 192 8 9 tile:1706 224 24 12 overlap:1679 288 24 16 localBounds:168"
                        "3 352 24 18 tileaabbworld:1708 416 64 14 transform:1684";
  *(_QWORD *)(v5 + 16) = NavMesh::QueryTiles;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556926;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -234881024;
  v7[536862728] = -218959118;
  v7[536862729] = -234881024;
  v7[536862730] = -218959118;
  v7[536862731] = -234881024;
  v7[536862732] = -218959118;
  v7[536862735] = -202116109;
  *(_WORD *)(v5 + 32) = surfid;
  bounds = aabb;
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v5 + 96) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_SurfaceIDToData, (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v5 + 32));
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v5 + 128) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData);
  if ( __gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 96),
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 128)) )
  {
    surf = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 96))->second;
    MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v5 + 224), 1);
    if ( IntersectionAABBAABB(bounds, &surf->m_WorldBounds, (MinMaxAABB *)(v5 + 224)) )
    {
      AABB::AABB((AABB *const)(v5 + 288));
      Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v5 + 416));
      Matrix4x4f::SetTR((Matrix4x4f *const)(v5 + 416), &surf->m_Position, &surf->m_Rotation);
      AABB::AABB((AABB *const)(v5 + 352), (const MinMaxAABB *)(v5 + 224));
      InverseTransformAABBSlow((const AABB *)(v5 + 352), (const Matrix4x4f *)(v5 + 416), (AABB *)(v5 + 288));
      if ( *(_BYTE *)(((unsigned __int64)&surf->m_Settings.tileSize >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)surf + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surf->m_Settings.tileSize >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&surf->m_Settings.tileSize);
      }
      tileSize = (float)surf->m_Settings.tileSize;
      if ( *(_BYTE *)(((unsigned __int64)&surf->m_Settings.cellSize >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)surf + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surf->m_Settings.cellSize >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&surf->m_Settings.cellSize);
      }
      invTileSize = 1.0 / (float)(tileSize * surf->m_Settings.cellSize);
      iminx = FloorfToInt((float)(*(float *)(v5 + 288) - *(float *)(v5 + 300)) * invTileSize);
      imaxx = FloorfToInt((float)(*(float *)(v5 + 300) + *(float *)(v5 + 288)) * invTileSize);
      jminz = FloorfToInt((float)(*(float *)(v5 + 296) - *(float *)(v5 + 308)) * invTileSize);
      jmaxz = FloorfToInt((float)(*(float *)(v5 + 308) + *(float *)(v5 + 296)) * invTileSize);
      for ( *(_DWORD *)(v5 + 48) = iminx; imaxx >= *(_DWORD *)(v5 + 48); ++*(_DWORD *)(v5 + 48) )
      {
        for ( *(_DWORD *)(v5 + 64) = jminz; jmaxz >= *(_DWORD *)(v5 + 64); ++*(_DWORD *)(v5 + 64) )
        {
          v28 = std::make_pair<int &,int &>((int *)(v5 + 48), (int *)(v5 + 64));
          *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v5 + 160) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(&this->m_TileLUT, &v28);
          __rhs._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_TileLUT)._M_current;
          if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                  (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v5 + 160),
                  &__rhs) )
          {
            v9 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 160));
            p_navMeshDataIndex = &v9->second.navMeshDataIndex;
            if ( *(_BYTE *)(((unsigned __int64)p_navMeshDataIndex >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_navMeshDataIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_navMeshDataIndex >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(p_navMeshDataIndex);
            }
            *(_DWORD *)(v5 + 80) = v9->second.navMeshDataIndex;
            v11 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 160));
            p_second = &v11->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            tileNavMeshIndex = (unsigned int)v11->second.tileNavMeshIndex;
            *(_QWORD *)(v5 + 192) = NavMesh::GetTile(this, tileNavMeshIndex);
            v14 = *(_QWORD *)(v5 + 192);
            if ( *(_BYTE *)(((unsigned __int64)(v14 + 16) >> 3) + 0x7FFF8000) )
              v14 = __asan_report_load8(v14 + 16, tileNavMeshIndex);
            v15 = *(_QWORD *)(v14 + 16);
            if ( *(_BYTE *)(((unsigned __int64)(v15 + 24) >> 3) + 0x7FFF8000) != 0
              && (char)(((v15 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v15 + 24) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v15 + 24);
            }
            if ( *(_DWORD *)(v15 + 24) )
            {
              v16 = *(_QWORD *)(v5 + 192);
              if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v16 >> 3) + 0x7FFF8000) <= 1 )
                v16 = __asan_report_load2(*(_QWORD *)(v5 + 192));
              if ( *(_WORD *)v16 == *(_WORD *)(v5 + 32) )
              {
                GetWorldTileBounds((MinMaxAABB *)(v5 + 352), *(const NavMeshTile **)(v5 + 192));
                if ( IntersectAABBAABB(aabb, (const MinMaxAABB *)(v5 + 352)) )
                {
                  dynamic_array<NavMeshTile const*,false,8ul>::push_back(tiles, (const NavMeshTile *const *)(v5 + 192));
                  dynamic_array<int,false,4ul>::push_back(tileinds, (const int *)(v5 + 80));
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF803C) = 0;
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
  }
};

// Line 1723: range 000000000CC2915A-000000000CC2A488
void __cdecl NavMesh::QueryPolygonsInTile(
        const NavMesh *const this,
        const NavMeshTile *tile,
        const Vector3f *center,
        const Vector3f *extents,
        NavMeshProcessCallback *callback)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char *v7; // rbx
  _DWORD *v8; // r12
  NavMeshTileMemoryCallback *m_memoryCallback; // rsi
  const NavMeshDataHeader *header; // rdx
  const NavMeshDataHeader *v11; // rax
  const NavMeshDataHeader *v12; // rax
  const NavMeshDataHeader *v13; // rdx
  double v14; // xmm0_8
  const NavMeshTile *v15; // rsi
  void (__fastcall **vptr_NavMeshProcessCallback)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD, double); // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  NavMeshPoly *polys; // rcx
  char v21; // dl
  NavMeshPoly *v22; // rcx
  void (__fastcall **v23)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD); // rax
  const NavMeshTile *v24; // rsi
  const NavMeshDataHeader *v25; // rdx
  char v26; // cl
  const Vector3f *verts; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  const Vector3f *v31; // rcx
  char v32; // dl
  void (__fastcall **v33)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD); // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  void (__fastcall **v36)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD); // rax
  bool overlap; // [rsp+36h] [rbp-42Ah]
  bool isLeafNode; // [rsp+37h] [rbp-429h]
  int n; // [rsp+38h] [rbp-428h]
  int n_0; // [rsp+3Ch] [rbp-424h]
  unsigned int i; // [rsp+40h] [rbp-420h]
  int j; // [rsp+44h] [rbp-41Ch]
  float qfac; // [rsp+48h] [rbp-418h]
  float minx; // [rsp+4Ch] [rbp-414h]
  float miny; // [rsp+50h] [rbp-410h]
  float minz; // [rsp+54h] [rbp-40Ch]
  float maxx; // [rsp+58h] [rbp-408h]
  float maxy; // [rsp+5Ch] [rbp-404h]
  float maxz; // [rsp+60h] [rbp-400h]
  NaMeshDefaultMemoryCallback *memoryCallback; // [rsp+68h] [rbp-3F8h]
  const NavMeshBVNode *node; // [rsp+70h] [rbp-3F0h]
  NavMeshPolyRef base_0; // [rsp+78h] [rbp-3E8h]
  NavMeshPoly *p; // [rsp+80h] [rbp-3E0h]
  const Vector3f *v; // [rsp+88h] [rbp-3D8h]
  const NavMeshBVNode *end; // [rsp+90h] [rbp-3D0h]
  NavMeshPolyRef base; // [rsp+98h] [rbp-3C8h]
  char v61[960]; // [rsp+A0h] [rbp-3C0h] BYREF

  v5 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(928LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 928);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 32 6 9 bmin:1750 64 6 9 bmax:1750 96 8 17 queryTileExt:1730 128 8 12 polyRef:1824 160 12 9 qm"
                        "in:1728 192 12 9 qmax:1729 224 12 9 bmin:1803 256 12 9 bmax:1803 288 256 13 polyRefs:1725 608 256 10 polys:1726";
  *(_QWORD *)(v5 + 16) = NavMesh::QueryPolygonsInTile;
  v8 = (_DWORD *)(v5 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959354;
  v8[536862722] = -218959354;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -219020288;
  v8[536862726] = -219020288;
  v8[536862727] = -219020288;
  v8[536862728] = -219020288;
  v8[536862737] = -218959118;
  v8[536862738] = -218959118;
  v8[536862747] = -202116109;
  v8[536862748] = -202116109;
  *(Vector3f *)(v5 + 160) = operator-(center, extents);
  *(Vector3f *)(v5 + 192) = operator+(center, extents);
  if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&callback->m_memoryCallback, extents);
  m_memoryCallback = callback->m_memoryCallback;
  NavMeshTileMemoryQueryTileExtSample::NavMeshTileMemoryQueryTileExtSample(
    (NavMeshTileMemoryQueryTileExtSample *const)(v5 + 96),
    m_memoryCallback,
    tile);
  if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&callback->m_memoryCallback, m_memoryCallback);
  memoryCallback = (NaMeshDefaultMemoryCallback *)callback->m_memoryCallback;
  if ( !memoryCallback )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, m_memoryCallback);
    memoryCallback = this->m_defaultMemoryCallback;
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->bvTree >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->bvTree, m_memoryCallback);
  if ( tile->bvTree )
  {
    node = tile->bvTree;
    if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->header, node);
    header = tile->header;
    if ( *(_BYTE *)(((unsigned __int64)&header->bvNodeCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)header + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->bvNodeCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&header->bvNodeCount);
    }
    end = &node[header->bvNodeCount - 1];
    v11 = tile->header;
    if ( (((unsigned __int8)v11 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&v11->bmin >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&v11->bmin >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v11->bmin.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v11 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->bmin.z + 3) >> 3) + 0x7FFF8000) )
    {
      v11 = (const NavMeshDataHeader *)__asan_report_load_n(&v11->bmin, 12LL);
    }
    *(_QWORD *)(v5 + 224) = *(_QWORD *)&v11->bmin.x;
    *(float *)(v5 + 232) = v11->bmin.z;
    v12 = tile->header;
    if ( (((unsigned __int8)v12 + 56) & 7) >= *(_BYTE *)(((unsigned __int64)&v12->bmax >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&v12->bmax >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v12->bmax.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v12 + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->bmax.z + 3) >> 3) + 0x7FFF8000) )
    {
      v12 = (const NavMeshDataHeader *)__asan_report_load_n(&v12->bmax, 12LL);
    }
    *(_QWORD *)(v5 + 256) = *(_QWORD *)&v12->bmax.x;
    *(float *)(v5 + 264) = v12->bmax.z;
    v13 = tile->header;
    if ( *(_BYTE *)(((unsigned __int64)&v13->bvQuantFactor >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v13 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->bvQuantFactor >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v13->bvQuantFactor);
    }
    qfac = v13->bvQuantFactor;
    minx = FloatClamp(*(float *)(v5 + 160), *(float *)(v5 + 224), *(float *)(v5 + 256)) - *(float *)(v5 + 224);
    miny = FloatClamp(*(float *)(v5 + 164), *(float *)(v5 + 228), *(float *)(v5 + 260)) - *(float *)(v5 + 228);
    minz = FloatClamp(*(float *)(v5 + 168), *(float *)(v5 + 232), *(float *)(v5 + 264)) - *(float *)(v5 + 232);
    maxx = FloatClamp(*(float *)(v5 + 192), *(float *)(v5 + 224), *(float *)(v5 + 256)) - *(float *)(v5 + 224);
    maxy = FloatClamp(*(float *)(v5 + 196), *(float *)(v5 + 228), *(float *)(v5 + 260)) - *(float *)(v5 + 228);
    maxz = FloatClamp(*(float *)(v5 + 200), *(float *)(v5 + 232), *(float *)(v5 + 264)) - *(float *)(v5 + 232);
    *(_WORD *)(v5 + 32) = (int)(float)(qfac * minx) & 0xFFFE;
    *(_WORD *)(v5 + 34) = (int)(float)(qfac * miny) & 0xFFFE;
    *(_WORD *)(v5 + 36) = (int)(float)(qfac * minz) & 0xFFFE;
    *(_WORD *)(v5 + 64) = (int)(float)((float)(qfac * maxx) + 1.0) | 1;
    *(_WORD *)(v5 + 66) = (int)(float)((float)(qfac * maxy) + 1.0) | 1;
    HIDWORD(v14) = 0;
    *(float *)&v14 = (float)(qfac * maxz) + 1.0;
    *(_WORD *)(v5 + 68) = (int)*(float *)&v14 | 1;
    v15 = tile;
    base = NavMesh::GetPolyRefBase(this, tile, memoryCallback);
    n = 0;
    while ( node < end )
    {
      overlap = OverlapQuantBounds(
                  (const unsigned __int16 *)(v5 + 32),
                  (const unsigned __int16 *)(v5 + 64),
                  node->bmin,
                  node->bmax);
      v15 = (const NavMeshTile *)((((_BYTE)node + 12) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)node + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) )
      {
        v14 = __asan_report_load4(&node->i);
      }
      isLeafNode = node->i >= 0;
      if ( node->i >= 0 && overlap )
      {
        if ( n > 31 )
        {
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v15);
          vptr_NavMeshProcessCallback = (void (__fastcall **)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD, double))callback->_vptr_NavMeshProcessCallback;
          if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_NavMeshProcessCallback >> 3) + 0x7FFF8000) )
            vptr_NavMeshProcessCallback = (void (__fastcall **)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD, double))__asan_report_load8(callback->_vptr_NavMeshProcessCallback, v15);
          (*vptr_NavMeshProcessCallback)(callback, tile, v5 + 288, v5 + 608, (unsigned int)n, v14);
          n = 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)node + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) )
        {
          v14 = __asan_report_load4(&node->i);
        }
        v17 = (unsigned int)node->i;
        *(_QWORD *)(v5 + 128) = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, v17);
        if ( *(_BYTE *)(((unsigned __int64)memoryCallback >> 3) + 0x7FFF8000) )
          __asan_report_load8(memoryCallback, v17);
        v18 = (unsigned __int64)(memoryCallback->_vptr_NavMeshTileMemoryCallback + 4);
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8(memoryCallback->_vptr_NavMeshTileMemoryCallback + 4, v17);
        v15 = (const NavMeshTile *)(v5 + 128);
        if ( (*(unsigned __int8 (__fastcall **)(NaMeshDefaultMemoryCallback *, unsigned __int64, double))v18)(
               memoryCallback,
               v5 + 128,
               v14) )
        {
          v19 = *(_QWORD *)(v5 + 128);
          if ( *(_BYTE *)(((8LL * n + v5 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(_QWORD *)&v7[8 * n - 640] = v19;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->polys, v15);
          polys = tile->polys;
          v21 = *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000);
          LOBYTE(v15) = v21 != 0;
          if ( v21 != 0 && (char)((((_BYTE)node + 12) & 7) + 3) >= v21 )
            v14 = __asan_report_load4(&node->i);
          v22 = &polys[node->i];
          if ( *(_BYTE *)(((8LL * n + v5 + 608) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(_QWORD *)&v7[8 * n++ - 320] = v22;
        }
      }
      if ( overlap || isLeafNode )
      {
        ++node;
      }
      else
      {
        v15 = (const NavMeshTile *)((((_BYTE)node + 12) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)node + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) )
        {
          v14 = __asan_report_load4(&node->i);
        }
        node -= node->i;
      }
    }
    if ( n > 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, v15);
      v23 = (void (__fastcall **)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD))callback->_vptr_NavMeshProcessCallback;
      if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_NavMeshProcessCallback >> 3) + 0x7FFF8000) )
        v23 = (void (__fastcall **)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD))__asan_report_load8(callback->_vptr_NavMeshProcessCallback, v15);
      (*v23)(callback, tile, v5 + 288, v5 + 608, (unsigned int)n);
    }
  }
  else
  {
    Vector3f::Vector3f((Vector3f *const)(v5 + 224));
    Vector3f::Vector3f((Vector3f *const)(v5 + 256));
    n_0 = 0;
    v24 = tile;
    base_0 = NavMesh::GetPolyRefBase(this, tile, memoryCallback);
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->header, v24);
      v25 = tile->header;
      v26 = *(_BYTE *)(((unsigned __int64)&v25->polyCount >> 3) + 0x7FFF8000);
      LOBYTE(v24) = v26 != 0;
      if ( v26 != 0 && (char)((((_BYTE)v25 + 20) & 7) + 3) >= v26 )
        __asan_report_load4(&v25->polyCount);
      if ( (signed int)i >= v25->polyCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->polys, v24);
      p = &tile->polys[i];
      if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->verts, v24);
      verts = tile->verts;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(p);
      }
      v28 = (unsigned __int64)&verts[p->verts[0]];
      if ( (char)(v28 & 7) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000) && *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v28 + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((v28 + 11) & 7) >= *(_BYTE *)(((v28 + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v28, 12LL);
      }
      *(_QWORD *)(v5 + 256) = *(_QWORD *)v28;
      *(_DWORD *)(v5 + 264) = *(_DWORD *)(v28 + 8);
      v29 = v5 + 256;
      if ( (char)(v5 & 7) >= *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v5 + 267) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 96 + 107) & 7) >= *(_BYTE *)(((v5 + 267) >> 3) + 0x7FFF8000) )
      {
        v29 = __asan_report_load_n(v5 + 256, 12LL);
      }
      *(_QWORD *)(v5 + 224) = *(_QWORD *)v29;
      *(_DWORD *)(v5 + 232) = *(_DWORD *)(v29 + 8);
      for ( j = 1; ; ++j )
      {
        v30 = ((_BYTE)p + 28) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&p->vertCount >> 3) + 0x7FFF8000) != 0
          && (char)v30 >= *(_BYTE *)(((unsigned __int64)&p->vertCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->vertCount);
        }
        if ( j >= p->vertCount )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->verts, v30);
        v31 = tile->verts;
        v32 = *(_BYTE *)(((unsigned __int64)&p->verts[j] >> 3) + 0x7FFF8000);
        if ( v32 != 0 && (char)(((2 * j + (_BYTE)p) & 7) + 1) >= v32 )
          __asan_report_load2(&p->verts[j]);
        v = &v31[p->verts[j]];
        *(Vector3f *)(v5 + 224) = min((const Vector3f *)(v5 + 224), v);
        *(Vector3f *)(v5 + 256) = max((const Vector3f *)(v5 + 256), v);
      }
      v24 = (const NavMeshTile *)(v5 + 192);
      if ( OverlapBounds(
             (const Vector3f *)(v5 + 160),
             (const Vector3f *)(v5 + 192),
             (const Vector3f *)(v5 + 224),
             (const Vector3f *)(v5 + 256)) )
      {
        if ( n_0 > 31 )
        {
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v24);
          v33 = (void (__fastcall **)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD))callback->_vptr_NavMeshProcessCallback;
          if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_NavMeshProcessCallback >> 3) + 0x7FFF8000) )
            v33 = (void (__fastcall **)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD))__asan_report_load8(callback->_vptr_NavMeshProcessCallback, v24);
          (*v33)(callback, tile, v5 + 288, v5 + 608, (unsigned int)n_0);
          n_0 = 0;
        }
        *(_QWORD *)(v5 + 128) = base_0 | NavMeshPolyRefHelper::EncodeBasePolyId(0, i);
        if ( *(_BYTE *)(((unsigned __int64)memoryCallback >> 3) + 0x7FFF8000) )
          __asan_report_load8(memoryCallback, i);
        v34 = (unsigned __int64)(memoryCallback->_vptr_NavMeshTileMemoryCallback + 4);
        if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
          v34 = __asan_report_load8(memoryCallback->_vptr_NavMeshTileMemoryCallback + 4, i);
        v24 = (const NavMeshTile *)(v5 + 128);
        if ( (*(unsigned __int8 (__fastcall **)(NaMeshDefaultMemoryCallback *, unsigned __int64))v34)(
               memoryCallback,
               v5 + 128) )
        {
          v35 = *(_QWORD *)(v5 + 128);
          if ( *(_BYTE *)(((8LL * n_0 + v5 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(_QWORD *)&v7[8 * n_0 - 640] = v35;
          if ( *(_BYTE *)(((8LL * n_0 + v5 + 608) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(_QWORD *)&v7[8 * n_0++ - 320] = p;
        }
      }
    }
    if ( n_0 > 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, v24);
      v36 = (void (__fastcall **)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD))callback->_vptr_NavMeshProcessCallback;
      if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_NavMeshProcessCallback >> 3) + 0x7FFF8000) )
        v36 = (void (__fastcall **)(NavMeshProcessCallback *, const NavMeshTile *, unsigned __int64, unsigned __int64, _QWORD))__asan_report_load8(callback->_vptr_NavMeshProcessCallback, v24);
      (*v36)(callback, tile, v5 + 288, v5 + 608, (unsigned int)n_0);
    }
  }
  NavMeshTileMemoryQueryTileExtSample::~NavMeshTileMemoryQueryTileExtSample((NavMeshTileMemoryQueryTileExtSample *const)(v5 + 96));
  if ( v61 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF806C) = 0LL;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8070) = -168430091;
  }
};

// Line 1840: range 000000000CC2A48A-000000000CC2BA16
__int64 __fastcall NavMesh::AddTile(
        NavMesh *const this,
        unsigned __int64 data,
        int dataSize,
        NavMeshTileFlags flags,
        SurfaceIDType surfaceID,
        int navDataTileIndex,
        NavMeshTileRef *result)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 v10; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *v11; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *v12; // rdx
  __int64 v13; // rdx
  SurfaceIDType v14; // cx
  NavMeshTileFlags v15; // ecx
  char *v16; // rsi
  __int64 v18; // rdx
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *p_rhs; // rsi
  const NavMeshDataHeader *header; // rdx
  const NavMeshDataHeader *v21; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v22; // rdx
  TileLookUpData *p_second; // rax
  int v24; // eax
  unsigned int *v25; // rsi
  unsigned int *v26; // rdx
  char v27; // cl
  unsigned int *p_m_maxRegionId; // rdx
  unsigned int *v29; // rax
  unsigned int *v30; // rdx
  unsigned int v31; // ecx
  char v32; // al
  NavMeshTileRef TileRef; // rdx
  int i; // [rsp+24h] [rbp-27Ch]
  int i_0; // [rsp+28h] [rbp-278h]
  uint32_t headerSize; // [rsp+2Ch] [rbp-274h]
  uint32_t vertsSize; // [rsp+30h] [rbp-270h]
  signed int polysSize; // [rsp+34h] [rbp-26Ch]
  signed int detailMeshesSize; // [rsp+38h] [rbp-268h]
  signed int detailVertsSize; // [rsp+3Ch] [rbp-264h]
  signed int detailTrisSize; // [rsp+40h] [rbp-260h]
  signed int bvtreeSize; // [rsp+44h] [rbp-25Ch]
  int newTileIndex; // [rsp+4Ch] [rbp-254h]
  float portalHeight; // [rsp+50h] [rbp-250h]
  int size; // [rsp+54h] [rbp-24Ch]
  NavMeshPoly *polys; // [rsp+70h] [rbp-230h]
  const NavMeshPolyDetail *detailMeshes; // [rsp+78h] [rbp-228h]
  const Vector3f *detailVerts; // [rsp+80h] [rbp-220h]
  const NavMeshPolyDetailIndex *detailTris; // [rsp+88h] [rbp-218h]
  const NavMeshBVNode *bvTree; // [rsp+90h] [rbp-210h]
  unsigned int *polyRegions; // [rsp+98h] [rbp-208h]
  NavMeshTile *tile; // [rsp+A0h] [rbp-200h]
  NavMesh::SurfaceData *surfaceData; // [rsp+A8h] [rbp-1F8h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+B0h] [rbp-1F0h]
  NavMeshTile *ntile; // [rsp+B8h] [rbp-1E8h]
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __lhs; // [rsp+C0h] [rbp-1E0h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+C8h] [rbp-1D8h] BYREF
  Vector3f inV0; // [rsp+D4h] [rbp-1CCh] BYREF
  Quaternionf q1; // [rsp+E0h] [rbp-1C0h] BYREF
  AABB aabb; // [rsp+F0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v66; // [rsp+110h] [rbp-190h] BYREF
  char v67[368]; // [rsp+130h] [rbp-170h] BYREF

  v7 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(320LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "8 48 2 14 surfaceID:1839 64 4 6 x:1938 80 4 6 y:1939 96 8 7 it:1941 128 12 13 position:1888 160 "
                        "16 13 rotation:1889 192 24 20 tileWorldBounds:1892 256 24 15 tilebounds:1893";
  *(_QWORD *)(v7 + 16) = NavMesh::AddTile;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234688015;
  v9[536862722] = -234556924;
  v9[536862723] = -218959360;
  v9[536862724] = -219020288;
  v9[536862725] = -219021312;
  v9[536862726] = -234881024;
  v9[536862727] = -218959118;
  v9[536862728] = -218103808;
  v9[536862729] = -202116109;
  *(_WORD *)(v7 + 48) = surfaceID;
  if ( *(_BYTE *)((data >> 3) + 0x7FFF8000) != 0 && (char)((data & 7) + 3) >= *(_BYTE *)((data >> 3) + 0x7FFF8000) )
    __asan_report_load4(data);
  if ( *(_DWORD *)data == 1145979222 )
  {
    if ( *(_BYTE *)(((data + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((data + 4) & 7) + 3) >= *(_BYTE *)(((data + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 4);
    }
    if ( *(_DWORD *)(data + 4) == 17 )
    {
      headerSize = Align4(0x48u);
      if ( *(_BYTE *)(((data + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 24) & 7) + 3) >= *(_BYTE *)(((data + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 24);
      }
      vertsSize = Align4(12 * *(_DWORD *)(data + 24));
      if ( *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 20) & 7) + 3) >= *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 20);
      }
      polysSize = Align4(32 * *(_DWORD *)(data + 20));
      if ( *(_BYTE *)(((data + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 28) & 7) + 3) >= *(_BYTE *)(((data + 28) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 28);
      }
      detailMeshesSize = Align4(12 * *(_DWORD *)(data + 28));
      if ( *(_BYTE *)(((data + 32) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 32) & 7) + 3) >= *(_BYTE *)(((data + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 32);
      }
      detailVertsSize = Align4(12 * *(_DWORD *)(data + 32));
      if ( *(_BYTE *)(((data + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 36) & 7) + 3) >= *(_BYTE *)(((data + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 36);
      }
      detailTrisSize = Align4(8 * *(_DWORD *)(data + 36));
      if ( *(_BYTE *)(((data + 40) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 40) & 7) + 3) >= *(_BYTE *)(((data + 40) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 40);
      }
      bvtreeSize = Align4(16 * *(_DWORD *)(data + 40));
      if ( *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 20) & 7) + 3) >= *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 20);
      }
      polys = (NavMeshPoly *)((int)vertsSize + (int)headerSize + data);
      detailMeshes = (const NavMeshPolyDetail *)((char *)polys + polysSize);
      detailVerts = (const Vector3f *)((char *)detailMeshes + detailMeshesSize);
      detailTris = (const NavMeshPolyDetailIndex *)((char *)detailVerts + detailVertsSize);
      bvTree = (const NavMeshBVNode *)((char *)detailTris + detailTrisSize);
      polyRegions = (unsigned int *)((char *)bvTree->bmin + bvtreeSize);
      if ( (unsigned int *)((char *)polyRegions + (int)Align4(4 * *(_DWORD *)(data + 20)) - data) == (unsigned int *)dataSize )
      {
        newTileIndex = FreeList<NavMeshTile,false>::Alloc(&this->m_tiles);
        if ( newTileIndex == -1 )
        {
          v10 = 2147483652LL;
        }
        else
        {
          __rhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
          __lhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
                               &this->m_SurfaceIDToData,
                               (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v7 + 48))._M_current;
          if ( !__gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
                  &__lhs,
                  &__rhs) )
          {
            common::milog::MiLogStream::create(
              &v66,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
              "AddTile",
              1879);
            common::milog::MiLogStream::operator()(&v66, "Invalid surface ID");
            common::milog::MiLogStream::~MiLogStream(&v66);
            __asan_handle_no_return(&v66);
            __assert_fail(
              "false",
              "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
              0x757u,
              "NavMeshStatus NavMesh::AddTile(const unsigned char*, int, NavMeshTileFlags, SurfaceIDType, int, NavMeshTileRef*)");
          }
          tile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, newTileIndex);
          surfaceData = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::operator[](
                          &this->m_SurfaceIDToData,
                          (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v7 + 48));
          lut = &this->m_TileLUT;
          TileLookUpData::TileLookUpData((TileLookUpData *const)&__rhs, newTileIndex, navDataTileIndex);
          __lhs._M_current = (std::pair<short unsigned int,NavMesh::SurfaceData> *)std::make_pair<int &,int &>(
                                                                                     (int *)(data + 8),
                                                                                     (int *)(data + 12));
          v11 = (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::operator[](&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)&__lhs);
          v12 = v11;
          if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v11->_M_current + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->_M_current + 7) >> 3)
                                                            + 0x7FFF8000) )
          {
            __asan_report_store_n(v11, 8LL);
          }
          v12->_M_current = __rhs._M_current;
          if ( *(char *)(((unsigned __int64)&surfaceData->m_Position >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&surfaceData->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)surfaceData + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&surfaceData->m_Position.z
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load_n(&surfaceData->m_Position, 12LL);
          }
          *(_QWORD *)(v7 + 128) = *(_QWORD *)&surfaceData->m_Position.x;
          *(float *)(v7 + 136) = surfaceData->m_Position.z;
          if ( *(_WORD *)(((unsigned __int64)&surfaceData->m_Rotation >> 3) + 0x7FFF8000) )
            __asan_report_load16(&surfaceData->m_Rotation);
          v13 = *(_QWORD *)&surfaceData->m_Rotation.z;
          *(_QWORD *)(v7 + 160) = *(_QWORD *)&surfaceData->m_Rotation.x;
          *(_QWORD *)(v7 + 168) = v13;
          AABB::AABB((AABB *const)(v7 + 192));
          MinMaxAABB::MinMaxAABB(
            (MinMaxAABB *const)(v7 + 256),
            (const Vector3f *)(data + 44),
            (const Vector3f *)(data + 56));
          AABB::AABB(&aabb, (const MinMaxAABB *)(v7 + 256));
          TransformAABB(&aabb, (const Vector3f *)(v7 + 128), (const Quaternionf *)(v7 + 160), (AABB *)(v7 + 192));
          MinMaxAABB::MinMaxAABB((MinMaxAABB *const)&aabb, (const AABB *)(v7 + 192));
          MinMaxAABB::Encapsulate(&surfaceData->m_WorldBounds, (const MinMaxAABB *)&aabb);
          if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->verts = (const Vector3f *)((int)headerSize + data);
          if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polys = polys;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailMeshes = detailMeshes;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailVerts = detailVerts;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailTris = detailTris;
          if ( *(_BYTE *)(((unsigned __int64)&tile->bvTree >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->bvTree = bvTree;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polyRegions = polyRegions;
          if ( !bvtreeSize )
            tile->bvTree = 0LL;
          v14 = *(_WORD *)(v7 + 48);
          if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
          {
            __asan_report_store2(tile);
          }
          tile->surfaceID = v14;
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tile + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->dataIndex);
          }
          tile->dataIndex = navDataTileIndex;
          if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->header = (const NavMeshDataHeader *)data;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polyLinks = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->data = (const unsigned __int8 *)data;
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&tile->dataSize);
          }
          tile->dataSize = dataSize;
          v15 = flags;
          if ( *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tile + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->flags);
          }
          tile->flags = v15;
          Vector3f::Vector3f(&inV0, 0.0, 0.0, 0.0);
          v16 = (char *)(v7 + 128);
          if ( CompareApproximately(&inV0, (const Vector3f *)(v7 + 128), 0.0000099999997)
            && (q1 = Quaternionf::identity(),
                v16 = (char *)(v7 + 160),
                CompareApproximately(&q1, (const Quaternionf *)(v7 + 160), 0.0000099999997)) )
          {
            if ( *(_WORD *)(((unsigned __int64)&tile->rotation >> 3) + 0x7FFF8000) )
              __asan_report_store16(&tile->rotation, v16);
            tile->rotation = Quaternionf::identity();
            Vector3f::Vector3f(&inV0, 0.0, 0.0, 0.0);
            if ( *(char *)(((unsigned __int64)&tile->position >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)tile - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&tile->position, 12LL);
            }
            tile->position = inV0;
            if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->transformed);
            }
            tile->transformed = 0;
          }
          else
          {
            if ( *(_WORD *)(((unsigned __int64)&tile->rotation >> 3) + 0x7FFF8000) )
              __asan_report_store16(&tile->rotation, v16);
            v18 = *(_QWORD *)(v7 + 168);
            *(_QWORD *)&tile->rotation.x = *(_QWORD *)(v7 + 160);
            *(_QWORD *)&tile->rotation.z = v18;
            if ( *(char *)(((unsigned __int64)&tile->position >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)tile - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&tile->position, 12LL);
            }
            *(_QWORD *)&tile->position.x = *(_QWORD *)(v7 + 128);
            tile->position.z = *(float *)(v7 + 136);
            if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->transformed);
            }
            tile->transformed = 1;
          }
          NavMesh::ConnectIntLinks(this, tile);
          p_rhs = (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)((((_BYTE)surfaceData + 36) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)surfaceData + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&surfaceData->m_Settings.cellSize);
          }
          portalHeight = surfaceData->m_Settings.cellSize;
          for ( i = 0; i <= 7; i += 2 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->header, p_rhs);
            header = tile->header;
            if ( *(_BYTE *)(((unsigned __int64)&header->x >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)header + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->x >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&header->x);
            }
            *(_DWORD *)(v7 + 64) = header->x;
            v21 = tile->header;
            if ( *(_BYTE *)(((unsigned __int64)&v21->y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&v21->y);
            }
            *(_DWORD *)(v7 + 80) = v21->y;
            TileLUTHelper::NeighbourLocation((int *)(v7 + 64), (int *)(v7 + 80), i);
            __rhs._M_current = (std::pair<short unsigned int,NavMesh::SurfaceData> *)std::make_pair<int &,int &>(
                                                                                       (int *)(v7 + 64),
                                                                                       (int *)(v7 + 80));
            __lhs._M_current = (std::pair<short unsigned int,NavMesh::SurfaceData> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(
                                                                                       lut,
                                                                                       (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)&__rhs)._M_current;
            __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*>(
              (__gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v7 + 96),
              (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__lhs);
            __rhs._M_current = (std::pair<short unsigned int,NavMesh::SurfaceData> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
            p_rhs = &__rhs;
            if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                    (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v7 + 96),
                    (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__rhs) )
            {
              v22 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v7 + 96));
              p_second = &v22->second;
              if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(p_second);
              }
              ntile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v22->second.tileNavMeshIndex);
              NavMesh::ConnectExtLinks(this, tile, ntile, i, portalHeight);
              v24 = TileLUTHelper::OppositeTile(i);
              p_rhs = (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)ntile;
              NavMesh::ConnectExtLinks(this, ntile, tile, v24, portalHeight);
            }
          }
          NavMesh::ConnectOffMeshConnectionsToTile(this, tile);
          v25 = (unsigned int *)((((_BYTE)data + 20) & 7u) + 3);
          if ( *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) != 0
            && (char)(((data + 20) & 7) + 3) >= *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(data + 20);
          }
          size = *(_DWORD *)(data + 20);
          if ( size > 0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->polyRegions, v25);
            v26 = tile->polyRegions;
            v27 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
            LOBYTE(v25) = v27 != 0;
            if ( v27 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v27 )
              __asan_report_load4(tile->polyRegions);
            if ( *v26 != -1 )
            {
              for ( i_0 = 0; i_0 < size; ++i_0 )
              {
                p_m_maxRegionId = &this->m_maxRegionId;
                if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&tile->polyRegions, v25);
                v25 = p_m_maxRegionId;
                v29 = (unsigned int *)std::max<unsigned int>(&tile->polyRegions[i_0], p_m_maxRegionId);
                v30 = v29;
                if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v29);
                }
                v31 = *v30;
                v32 = *(_BYTE *)(((unsigned __int64)&this->m_maxRegionId >> 3) + 0x7FFF8000);
                LOBYTE(v25) = v32 != 0;
                if ( v32 != 0 && v32 <= 3 )
                  __asan_report_store4(&this->m_maxRegionId);
                this->m_maxRegionId = v31;
              }
            }
          }
          if ( result )
          {
            TileRef = NavMesh::GetTileRef(this, tile);
            if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *result = TileRef;
          }
          v10 = 0x40000000LL;
        }
      }
      else
      {
        v10 = 0x80000000LL;
      }
    }
    else
    {
      v10 = 2147483650LL;
    }
  }
  else
  {
    v10 = 2147483649LL;
  }
  if ( v67 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v10;
};

// Line 1968: range 000000000CC2BA18-000000000CC2CE8E
__int64 __fastcall NavMesh::AddTileNoConnectExternTile(
        NavMesh *const this,
        unsigned __int64 data,
        int dataSize,
        NavMeshTileFlags flags,
        SurfaceIDType surfaceID,
        int navDataTileIndex,
        NavMeshTileRef *result,
        dynamic_array<NavExtTileConnectReq,false,8> *extTilePair)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *v12; // rax
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *v13; // rdx
  __int64 v14; // rdx
  SurfaceIDType v15; // cx
  NavMeshTileFlags v16; // ecx
  char *v17; // rsi
  __int64 v19; // rdx
  NavMeshTileRef TileRef; // rdx
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *p_rhs; // rsi
  const NavMeshDataHeader *header; // rdx
  const NavMeshDataHeader *v23; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v24; // rdx
  TileLookUpData *p_second; // rax
  NavMeshTileRef v26; // rax
  NavMeshTileRef v27; // rax
  int i; // [rsp+24h] [rbp-27Ch]
  uint32_t headerSize; // [rsp+28h] [rbp-278h]
  uint32_t vertsSize; // [rsp+2Ch] [rbp-274h]
  signed int polysSize; // [rsp+30h] [rbp-270h]
  signed int detailMeshesSize; // [rsp+34h] [rbp-26Ch]
  signed int detailVertsSize; // [rsp+38h] [rbp-268h]
  signed int detailTrisSize; // [rsp+3Ch] [rbp-264h]
  signed int bvtreeSize; // [rsp+40h] [rbp-260h]
  int newTileIndex; // [rsp+48h] [rbp-258h]
  float portalHeight; // [rsp+4Ch] [rbp-254h]
  NavMeshPoly *polys; // [rsp+68h] [rbp-238h]
  const NavMeshPolyDetail *detailMeshes; // [rsp+70h] [rbp-230h]
  const Vector3f *detailVerts; // [rsp+78h] [rbp-228h]
  const NavMeshPolyDetailIndex *detailTris; // [rsp+80h] [rbp-220h]
  const NavMeshBVNode *bvTree; // [rsp+88h] [rbp-218h]
  unsigned int *polyRegions; // [rsp+90h] [rbp-210h]
  NavMeshTile *tile; // [rsp+98h] [rbp-208h]
  NavMesh::SurfaceData *surfaceData; // [rsp+A0h] [rbp-200h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+A8h] [rbp-1F8h]
  const NavMeshTile *otherTile; // [rsp+B0h] [rbp-1F0h]
  NavExtTileConnectReq *conReq; // [rsp+B8h] [rbp-1E8h]
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __lhs; // [rsp+C0h] [rbp-1E0h] BYREF
  __gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > __rhs; // [rsp+C8h] [rbp-1D8h] BYREF
  Vector3f inV0; // [rsp+D4h] [rbp-1CCh] BYREF
  Quaternionf q1; // [rsp+E0h] [rbp-1C0h] BYREF
  AABB aabb; // [rsp+F0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v58; // [rsp+110h] [rbp-190h] BYREF
  char v59[368]; // [rsp+130h] [rbp-170h] BYREF

  v8 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(320LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "8 48 2 14 surfaceID:1967 64 4 6 x:2068 80 4 6 y:2069 96 8 7 it:2071 128 12 13 position:2016 160 "
                        "16 13 rotation:2017 192 24 20 tileWorldBounds:2020 256 24 15 tilebounds:2021";
  *(_QWORD *)(v8 + 16) = NavMesh::AddTileNoConnectExternTile;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234688015;
  v10[536862722] = -234556924;
  v10[536862723] = -218959360;
  v10[536862724] = -219020288;
  v10[536862725] = -219021312;
  v10[536862726] = -234881024;
  v10[536862727] = -218959118;
  v10[536862728] = -218103808;
  v10[536862729] = -202116109;
  *(_WORD *)(v8 + 48) = surfaceID;
  if ( *(_BYTE *)((data >> 3) + 0x7FFF8000) != 0 && (char)((data & 7) + 3) >= *(_BYTE *)((data >> 3) + 0x7FFF8000) )
    __asan_report_load4(data);
  if ( *(_DWORD *)data == 1145979222 )
  {
    if ( *(_BYTE *)(((data + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((data + 4) & 7) + 3) >= *(_BYTE *)(((data + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 4);
    }
    if ( *(_DWORD *)(data + 4) == 17 )
    {
      headerSize = Align4(0x48u);
      if ( *(_BYTE *)(((data + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 24) & 7) + 3) >= *(_BYTE *)(((data + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 24);
      }
      vertsSize = Align4(12 * *(_DWORD *)(data + 24));
      if ( *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 20) & 7) + 3) >= *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 20);
      }
      polysSize = Align4(32 * *(_DWORD *)(data + 20));
      if ( *(_BYTE *)(((data + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 28) & 7) + 3) >= *(_BYTE *)(((data + 28) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 28);
      }
      detailMeshesSize = Align4(12 * *(_DWORD *)(data + 28));
      if ( *(_BYTE *)(((data + 32) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 32) & 7) + 3) >= *(_BYTE *)(((data + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 32);
      }
      detailVertsSize = Align4(12 * *(_DWORD *)(data + 32));
      if ( *(_BYTE *)(((data + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 36) & 7) + 3) >= *(_BYTE *)(((data + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 36);
      }
      detailTrisSize = Align4(8 * *(_DWORD *)(data + 36));
      if ( *(_BYTE *)(((data + 40) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 40) & 7) + 3) >= *(_BYTE *)(((data + 40) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 40);
      }
      bvtreeSize = Align4(16 * *(_DWORD *)(data + 40));
      if ( *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 20) & 7) + 3) >= *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 20);
      }
      polys = (NavMeshPoly *)((int)vertsSize + (int)headerSize + data);
      detailMeshes = (const NavMeshPolyDetail *)((char *)polys + polysSize);
      detailVerts = (const Vector3f *)((char *)detailMeshes + detailMeshesSize);
      detailTris = (const NavMeshPolyDetailIndex *)((char *)detailVerts + detailVertsSize);
      bvTree = (const NavMeshBVNode *)((char *)detailTris + detailTrisSize);
      polyRegions = (unsigned int *)((char *)bvTree->bmin + bvtreeSize);
      if ( (unsigned int *)((char *)polyRegions + (int)Align4(4 * *(_DWORD *)(data + 20)) - data) == (unsigned int *)dataSize )
      {
        newTileIndex = FreeList<NavMeshTile,false>::Alloc(&this->m_tiles);
        if ( newTileIndex == -1 )
        {
          v11 = 2147483652LL;
        }
        else
        {
          __rhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData)._M_current;
          __lhs._M_current = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(
                               &this->m_SurfaceIDToData,
                               (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v8 + 48))._M_current;
          if ( !__gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> *,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
                  &__lhs,
                  &__rhs) )
          {
            common::milog::MiLogStream::create(
              &v58,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
              "AddTileNoConnectExternTile",
              2007);
            common::milog::MiLogStream::operator()(&v58, "Invalid surface ID");
            common::milog::MiLogStream::~MiLogStream(&v58);
            __asan_handle_no_return(&v58);
            __assert_fail(
              "false",
              "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
              0x7D7u,
              "NavMeshStatus NavMesh::AddTileNoConnectExternTile(const unsigned char*, int, NavMeshTileFlags, SurfaceIDTy"
              "pe, int, NavMeshTileRef*, dynamic_array<NavExtTileConnectReq>&)");
          }
          tile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, newTileIndex);
          surfaceData = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::operator[](
                          &this->m_SurfaceIDToData,
                          (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v8 + 48));
          lut = &this->m_TileLUT;
          TileLookUpData::TileLookUpData((TileLookUpData *const)&__rhs, newTileIndex, navDataTileIndex);
          __lhs._M_current = (std::pair<short unsigned int,NavMesh::SurfaceData> *)std::make_pair<int &,int &>(
                                                                                     (int *)(data + 8),
                                                                                     (int *)(data + 12));
          v12 = (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::operator[](&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)&__lhs);
          v13 = v12;
          if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v12->_M_current + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->_M_current + 7) >> 3)
                                                            + 0x7FFF8000) )
          {
            __asan_report_store_n(v12, 8LL);
          }
          v13->_M_current = __rhs._M_current;
          if ( *(char *)(((unsigned __int64)&surfaceData->m_Position >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&surfaceData->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)surfaceData + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&surfaceData->m_Position.z
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load_n(&surfaceData->m_Position, 12LL);
          }
          *(_QWORD *)(v8 + 128) = *(_QWORD *)&surfaceData->m_Position.x;
          *(float *)(v8 + 136) = surfaceData->m_Position.z;
          if ( *(_WORD *)(((unsigned __int64)&surfaceData->m_Rotation >> 3) + 0x7FFF8000) )
            __asan_report_load16(&surfaceData->m_Rotation);
          v14 = *(_QWORD *)&surfaceData->m_Rotation.z;
          *(_QWORD *)(v8 + 160) = *(_QWORD *)&surfaceData->m_Rotation.x;
          *(_QWORD *)(v8 + 168) = v14;
          AABB::AABB((AABB *const)(v8 + 192));
          MinMaxAABB::MinMaxAABB(
            (MinMaxAABB *const)(v8 + 256),
            (const Vector3f *)(data + 44),
            (const Vector3f *)(data + 56));
          AABB::AABB(&aabb, (const MinMaxAABB *)(v8 + 256));
          TransformAABB(&aabb, (const Vector3f *)(v8 + 128), (const Quaternionf *)(v8 + 160), (AABB *)(v8 + 192));
          MinMaxAABB::MinMaxAABB((MinMaxAABB *const)&aabb, (const AABB *)(v8 + 192));
          MinMaxAABB::Encapsulate(&surfaceData->m_WorldBounds, (const MinMaxAABB *)&aabb);
          if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->verts = (const Vector3f *)((int)headerSize + data);
          if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polys = polys;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailMeshes = detailMeshes;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailVerts = detailVerts;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailTris = detailTris;
          if ( *(_BYTE *)(((unsigned __int64)&tile->bvTree >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->bvTree = bvTree;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polyRegions = polyRegions;
          if ( !bvtreeSize )
            tile->bvTree = 0LL;
          v15 = *(_WORD *)(v8 + 48);
          if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
          {
            __asan_report_store2(tile);
          }
          tile->surfaceID = v15;
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tile + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->dataIndex);
          }
          tile->dataIndex = navDataTileIndex;
          if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->header = (const NavMeshDataHeader *)data;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polyLinks = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->data = (const unsigned __int8 *)data;
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&tile->dataSize);
          }
          tile->dataSize = dataSize;
          v16 = flags;
          if ( *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tile + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->flags);
          }
          tile->flags = v16;
          Vector3f::Vector3f(&inV0, 0.0, 0.0, 0.0);
          v17 = (char *)(v8 + 128);
          if ( CompareApproximately(&inV0, (const Vector3f *)(v8 + 128), 0.0000099999997)
            && (q1 = Quaternionf::identity(),
                v17 = (char *)(v8 + 160),
                CompareApproximately(&q1, (const Quaternionf *)(v8 + 160), 0.0000099999997)) )
          {
            if ( *(_WORD *)(((unsigned __int64)&tile->rotation >> 3) + 0x7FFF8000) )
              __asan_report_store16(&tile->rotation, v17);
            tile->rotation = Quaternionf::identity();
            Vector3f::Vector3f(&inV0, 0.0, 0.0, 0.0);
            if ( *(char *)(((unsigned __int64)&tile->position >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)tile - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&tile->position, 12LL);
            }
            tile->position = inV0;
            if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->transformed);
            }
            tile->transformed = 0;
          }
          else
          {
            if ( *(_WORD *)(((unsigned __int64)&tile->rotation >> 3) + 0x7FFF8000) )
              __asan_report_store16(&tile->rotation, v17);
            v19 = *(_QWORD *)(v8 + 168);
            *(_QWORD *)&tile->rotation.x = *(_QWORD *)(v8 + 160);
            *(_QWORD *)&tile->rotation.z = v19;
            if ( *(char *)(((unsigned __int64)&tile->position >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)tile - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&tile->position, 12LL);
            }
            *(_QWORD *)&tile->position.x = *(_QWORD *)(v8 + 128);
            tile->position.z = *(float *)(v8 + 136);
            if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->transformed);
            }
            tile->transformed = 1;
          }
          NavMesh::ConnectIntLinks(this, tile);
          if ( result )
          {
            TileRef = NavMesh::GetTileRef(this, tile);
            if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *result = TileRef;
          }
          p_rhs = (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)((((_BYTE)surfaceData + 36) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)surfaceData + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&surfaceData->m_Settings.cellSize);
          }
          portalHeight = surfaceData->m_Settings.cellSize;
          for ( i = 0; i <= 7; i += 2 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->header, p_rhs);
            header = tile->header;
            if ( *(_BYTE *)(((unsigned __int64)&header->x >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)header + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->x >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&header->x);
            }
            *(_DWORD *)(v8 + 64) = header->x;
            v23 = tile->header;
            if ( *(_BYTE *)(((unsigned __int64)&v23->y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&v23->y);
            }
            *(_DWORD *)(v8 + 80) = v23->y;
            TileLUTHelper::NeighbourLocation((int *)(v8 + 64), (int *)(v8 + 80), i);
            __rhs._M_current = (std::pair<short unsigned int,NavMesh::SurfaceData> *)std::make_pair<int &,int &>(
                                                                                       (int *)(v8 + 64),
                                                                                       (int *)(v8 + 80));
            __lhs._M_current = (std::pair<short unsigned int,NavMesh::SurfaceData> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(
                                                                                       lut,
                                                                                       (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)&__rhs)._M_current;
            __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*>(
              (__gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v8 + 96),
              (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__lhs);
            __rhs._M_current = (std::pair<short unsigned int,NavMesh::SurfaceData> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
            p_rhs = &__rhs;
            if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                    (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v8 + 96),
                    (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__rhs) )
            {
              v24 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v8 + 96));
              p_second = &v24->second;
              if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(p_second);
              }
              otherTile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v24->second.tileNavMeshIndex);
              conReq = dynamic_array<NavExtTileConnectReq,false,8ul>::push_back(extTilePair);
              v26 = NavMesh::GetTileRef(this, tile);
              if ( *(_BYTE *)(((unsigned __int64)conReq >> 3) + 0x7FFF8000) )
                v26 = __asan_report_store8();
              conReq->tile1 = v26;
              v27 = NavMesh::GetTileRef(this, otherTile);
              if ( *(_BYTE *)(((unsigned __int64)&conReq->tile2 >> 3) + 0x7FFF8000) )
                v27 = __asan_report_store8();
              conReq->tile2 = v27;
              p_rhs = (__gnu_cxx::__normal_iterator<std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)((((_BYTE)conReq + 20) & 7u) + 3);
              if ( *(_BYTE *)(((unsigned __int64)&conReq->dir >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)conReq + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&conReq->dir >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_store4(&conReq->dir);
              }
              conReq->dir = i;
              if ( *(_BYTE *)(((unsigned __int64)&conReq->portalHeight >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&conReq->portalHeight >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&conReq->portalHeight);
              }
              conReq->portalHeight = portalHeight;
            }
          }
          v11 = 0x40000000LL;
        }
      }
      else
      {
        v11 = 0x80000000LL;
      }
    }
    else
    {
      v11 = 2147483650LL;
    }
  }
  else
  {
    v11 = 2147483649LL;
  }
  if ( v59 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v11;
};

// Line 2087: range 000000000CC2CE90-000000000CC2D163
NavMeshStatus __cdecl NavMesh::ConnectExtLinkWithNeighbourTiles(
        const NavMesh *const this,
        const NavExtTileConnectReq *req,
        dynamic_array<NavMeshLinkAddTileCache,false,8> *links)
{
  NavMeshPolyRef tile1; // rsi
  float portalHeight; // edi
  float v6; // ebx
  int v7; // ecx
  const NavMeshTile *tile; // [rsp+20h] [rbp-40h]
  const NavMeshTile *ntile; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)req >> 3) + 0x7FFF8000) )
    __asan_report_load8(req, req);
  tile1 = req->tile1;
  tile = NavMesh::GetTileByRef(this, req->tile1);
  if ( *(_BYTE *)(((unsigned __int64)&req->tile2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(&req->tile2, tile1);
  ntile = NavMesh::GetTileByRef(this, req->tile2);
  if ( tile )
  {
    if ( ntile )
    {
      if ( *(_BYTE *)(((unsigned __int64)&req->portalHeight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&req->portalHeight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&req->portalHeight);
      }
      portalHeight = req->portalHeight;
      if ( *(_BYTE *)(((unsigned __int64)&req->dir >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)req + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&req->dir >> 3) + 0x7FFF8000) )
      {
        LODWORD(portalHeight) = (_DWORD)req + 20;
        __asan_report_load4(&req->dir);
      }
      NavMesh::ConnectExtLinksToLink(this, tile, ntile, req->dir, portalHeight, links);
      if ( *(_BYTE *)(((unsigned __int64)&req->portalHeight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&req->portalHeight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&req->portalHeight);
      }
      v6 = req->portalHeight;
      if ( *(_BYTE *)(((unsigned __int64)&req->dir >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)req + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&req->dir >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&req->dir);
      }
      v7 = TileLUTHelper::OppositeTile(req->dir);
      NavMesh::ConnectExtLinksToLink(this, ntile, tile, v7, v6, links);
      return 0x40000000;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
        "ConnectExtLinkWithNeighbourTiles",
        2102);
      common::milog::MiLogStream::operator()(&v13, "Invalid Neightbour PolyRef!");
      common::milog::MiLogStream::~MiLogStream(&v13);
      return 0x80000000;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      "ConnectExtLinkWithNeighbourTiles",
      2095);
    common::milog::MiLogStream::operator()(&v13, "Invalid PolyRef!");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -2147483640;
  }
};

// Line 2113: range 000000000CC2D164-000000000CC2D4D3
void __cdecl NavMesh::IntegrateNavMeshAddTileCache(
        NavMesh *const this,
        SurfaceIDType surfaceID,
        const NavMeshLinkAddTileCache *links,
        int numlinks)
{
  FreeList<NavMeshTile,false> *p_m_tiles; // rdi
  const NavMeshLinkAddTileCache *v5; // rax
  __int64 v6; // rsi
  NavMeshLink *v7; // rax
  unsigned __int64 v8; // rdx
  NavMeshPolyRef v9; // rax
  __int64 v10; // rdx
  const NavMeshLinkAddTileCache *v11; // rdx
  char v12; // cl
  unsigned __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rcx
  int ilink; // [rsp+2Ch] [rbp-24h]
  unsigned int idx; // [rsp+30h] [rbp-20h]
  int ipoly; // [rsp+34h] [rbp-1Ch]
  NavMeshTile *prevtile; // [rsp+38h] [rbp-18h]
  NavMeshTile *tile; // [rsp+40h] [rbp-10h]
  NavMeshLink *link; // [rsp+48h] [rbp-8h]

  prevtile = 0LL;
  for ( ilink = 0; ilink < numlinks; ++ilink )
  {
    p_m_tiles = &this->m_tiles;
    v5 = &links[ilink];
    if ( *(_BYTE *)(((unsigned __int64)&v5->itile >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->itile >> 3) + 0x7FFF8000) <= 3 )
    {
      p_m_tiles = (FreeList<NavMeshTile,false> *)&v5->itile;
      __asan_report_load4(&v5->itile);
    }
    tile = FreeList<NavMeshTile,false>::operator[](p_m_tiles, v5->itile);
    idx = FreeList<NavMeshLink,false>::Alloc(&this->m_links);
    if ( idx != -1 )
    {
      v6 = idx;
      v7 = FreeList<NavMeshLink,false>::operator[](&this->m_links, idx);
      link = v7;
      v8 = (unsigned __int64)&links[ilink];
      if ( *(_WORD *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_store16(v7, idx);
      if ( *(_WORD *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load16(v8);
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)(v8 + 8);
      link->ref = v9;
      *(_QWORD *)&link->next = v10;
      v11 = &links[ilink];
      v12 = *(_BYTE *)(((unsigned __int64)&v11->ipoly >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v12 != 0;
      if ( v12 != 0 && (char)((((_BYTE)v11 + 20) & 7) + 3) >= v12 )
        __asan_report_load4(&v11->ipoly);
      ipoly = v11->ipoly;
      if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->polyLinks, v6);
      v13 = (unsigned __int64)&tile->polyLinks[ipoly];
      v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v14 != 0;
      v15 = ((LOBYTE(tile->polyLinks) + 4 * (_BYTE)ipoly) & 7u) + 3;
      if ( v14 != 0 && (char)(((LOBYTE(tile->polyLinks) + 4 * ipoly) & 7) + 3) >= v14 )
      {
        v15 = (__int64)&tile->polyLinks[ipoly];
        __asan_report_load4(v15);
      }
      if ( idx == *(_DWORD *)v13 )
      {
        __asan_handle_no_return(v15);
        __assert_fail(
          "idx != tile->polyLinks[ipoly]",
          "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
          0x84Fu,
          "void NavMesh::IntegrateNavMeshAddTileCache(SurfaceIDType, const NavMeshLinkAddTileCache*, int)");
      }
      if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->polyLinks, v6);
      v16 = (unsigned __int64)&tile->polyLinks[ipoly];
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(tile->polyLinks) + 4 * ipoly) & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&tile->polyLinks[ipoly]);
      }
      v17 = *(_DWORD *)v16;
      if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&link->next);
      }
      link->next = v17;
      v18 = (unsigned __int64)&tile->polyLinks[ipoly];
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(tile->polyLinks) + 4 * ipoly) & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&tile->polyLinks[ipoly]);
      }
      *(_DWORD *)v18 = idx;
    }
    if ( tile != prevtile )
    {
      NavMesh::ConnectOffMeshConnectionsToTile(this, tile);
      prevtile = tile;
    }
  }
};

// Line 2142: range 000000000CC2D4D4-000000000CC2D598
const NavMeshTile *__cdecl NavMesh::GetTileByRef(const NavMesh *const this, NavMeshTileRef ref)
{
  unsigned int tileIndex; // [rsp+10h] [rbp-10h]
  unsigned int tileSalt; // [rsp+14h] [rbp-Ch]
  const NavMeshTile *tile; // [rsp+18h] [rbp-8h]

  if ( !ref )
    return 0LL;
  tileIndex = NavMeshPolyRefHelper::DecodePolyIdTile(ref);
  tileSalt = NavMeshPolyRefHelper::DecodePolyIdSalt(ref);
  if ( tileIndex >= FreeList<NavMeshTile,false>::Capacity(&this->m_tiles) )
    return 0LL;
  tile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, tileIndex);
  if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tile->salt);
  }
  if ( tileSalt == tile->salt )
    return tile;
  else
    return 0LL;
};

// Line 2156: range 000000000CC2D59A-000000000CC2DB92
NavMeshStatus __cdecl NavMesh::GetTileAndPolyByRef(
        NavMesh *const this,
        const NavMeshPolyRef ref,
        NavMeshTile **tile,
        const NavMeshPoly **poly,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  NavMeshStatus result; // eax
  char *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  const NavMeshDataHeader *header; // rdx
  char v13; // cl
  const NavMeshPoly *v14; // rcx
  NavMeshTile *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  NavMeshTile *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  const NavMeshPoly *v25; // rcx
  NavMeshTile *callbackTile; // [rsp+38h] [rbp-A8h]
  char v31[160]; // [rsp+40h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 9 salt:2159 48 4 7 it:2159 64 4 9 type:2159 80 4 7 ip:2159 96 4 14 allocflag:2159";
  *(_QWORD *)(v5 + 16) = NavMesh::GetTileAndPolyByRef;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -202116348;
  if ( !ref )
  {
    result = 0x80000000;
    goto LABEL_61;
  }
  v9 = (char *)(v5 + 96);
  NavMeshPolyRefHelper::DecodePolyId(
    (unsigned int *)(v5 + 32),
    (unsigned int *)(v5 + 96),
    (unsigned int *)(v5 + 48),
    (unsigned int *)(v5 + 64),
    (unsigned int *)(v5 + 80),
    ref);
  if ( *(_DWORD *)(v5 + 96) )
  {
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, v9);
    v10 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 6);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 6, v9);
    v11 = *(unsigned int *)(v5 + 48);
    callbackTile = (NavMeshTile *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, __int64))v10)(callback, v11);
    if ( !callbackTile )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&callbackTile->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&callbackTile->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&callbackTile->salt);
    }
    if ( callbackTile->salt != *(_DWORD *)(v5 + 32) )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&callbackTile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&callbackTile->header, v11);
    if ( !callbackTile->header )
      goto LABEL_21;
    header = callbackTile->header;
    v13 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v13 != 0;
    if ( v13 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v13 )
      __asan_report_load4(&header->polyCount);
    if ( header->polyCount <= *(_DWORD *)(v5 + 80) )
    {
LABEL_21:
      result = -2147483640;
      goto LABEL_61;
    }
    if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *tile = callbackTile;
    if ( *(_BYTE *)(((unsigned __int64)&callbackTile->polys >> 3) + 0x7FFF8000) )
      __asan_report_load8(&callbackTile->polys, v11);
    v14 = &callbackTile->polys[*(unsigned int *)(v5 + 80)];
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *poly = v14;
  }
  else
  {
    if ( FreeList<NavMeshTile,false>::Capacity(&this->m_tiles) <= *(_DWORD *)(v5 + 48) )
    {
      result = -2147483640;
      goto LABEL_61;
    }
    v15 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, *(_DWORD *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v15->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v15->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v15->salt);
    }
    if ( v15->salt != *(_DWORD *)(v5 + 32) )
      goto LABEL_37;
    v16 = *(unsigned int *)(v5 + 48);
    v17 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v16);
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 16) >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(v17 + 16, v16);
    if ( *(_QWORD *)(v17 + 16) )
      v18 = 0;
    else
LABEL_37:
      v18 = 1;
    if ( v18 )
    {
      result = -2147483640;
      goto LABEL_61;
    }
    if ( *(_DWORD *)(v5 + 64) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *tile = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *poly = 0LL;
    }
    else
    {
      v19 = *(unsigned int *)(v5 + 48);
      v20 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v19);
      if ( *(_BYTE *)(((unsigned __int64)(v20 + 16) >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8(v20 + 16, v19);
      v21 = *(_QWORD *)(v20 + 16);
      if ( *(_BYTE *)(((unsigned __int64)(v21 + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v21 + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21 + 20);
      }
      if ( *(_DWORD *)(v21 + 20) <= *(_DWORD *)(v5 + 80) )
      {
        result = -2147483640;
        goto LABEL_61;
      }
      v22 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, *(_DWORD *)(v5 + 48));
      if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *tile = v22;
      v23 = *(unsigned int *)(v5 + 48);
      v24 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v23);
      if ( *(_BYTE *)(((unsigned __int64)(v24 + 32) >> 3) + 0x7FFF8000) )
        v24 = __asan_report_load8(v24 + 32, v23);
      v25 = (const NavMeshPoly *)(*(_QWORD *)(v24 + 32) + 32LL * *(unsigned int *)(v5 + 80));
      if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *poly = v25;
    }
  }
  result = 0x40000000;
LABEL_61:
  if ( v31 == (char *)v5 )
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
  return result;
};

// Line 2193: range 000000000CC2DB94-000000000CC2E191
NavMeshStatus __cdecl NavMesh::GetTileAndPolyByRef(
        const NavMesh *const this,
        const NavMeshPolyRef ref,
        const NavMeshTile **tile,
        const NavMeshPoly **poly,
        const NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  NavMeshStatus result; // eax
  char *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  const NavMeshDataHeader *header; // rdx
  char v13; // cl
  const NavMeshPoly *v14; // rcx
  const NavMeshTile *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  const NavMeshTile *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  const NavMeshPoly *v25; // rcx
  const NavMeshTile *callbackTile; // [rsp+38h] [rbp-A8h]
  char v31[160]; // [rsp+40h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 9 salt:2198 48 4 7 it:2198 64 4 9 type:2198 80 4 7 ip:2198 96 4 14 allocflag:2198";
  *(_QWORD *)(v5 + 16) = NavMesh::GetTileAndPolyByRef;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -202116348;
  if ( !ref )
  {
    result = 0x80000000;
    goto LABEL_61;
  }
  v9 = (char *)(v5 + 96);
  NavMeshPolyRefHelper::DecodePolyId(
    (unsigned int *)(v5 + 32),
    (unsigned int *)(v5 + 96),
    (unsigned int *)(v5 + 48),
    (unsigned int *)(v5 + 64),
    (unsigned int *)(v5 + 80),
    ref);
  if ( *(_DWORD *)(v5 + 96) )
  {
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, v9);
    v10 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 7);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 7, v9);
    v11 = *(unsigned int *)(v5 + 48);
    callbackTile = (const NavMeshTile *)(*(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, __int64))v10)(
                                          callback,
                                          v11);
    if ( !callbackTile )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&callbackTile->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&callbackTile->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&callbackTile->salt);
    }
    if ( callbackTile->salt != *(_DWORD *)(v5 + 32) )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&callbackTile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&callbackTile->header, v11);
    if ( !callbackTile->header )
      goto LABEL_21;
    header = callbackTile->header;
    v13 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v13 != 0;
    if ( v13 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v13 )
      __asan_report_load4(&header->polyCount);
    if ( header->polyCount > *(_DWORD *)(v5 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *tile = callbackTile;
      if ( *(_BYTE *)(((unsigned __int64)&callbackTile->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&callbackTile->polys, v11);
      v14 = &callbackTile->polys[*(unsigned int *)(v5 + 80)];
      if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *poly = v14;
      result = 0x40000000;
    }
    else
    {
LABEL_21:
      result = -2147483640;
    }
  }
  else
  {
    if ( FreeList<NavMeshTile,false>::Capacity(&this->m_tiles) <= *(_DWORD *)(v5 + 48) )
    {
      result = -2147483640;
      goto LABEL_61;
    }
    v15 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, *(_DWORD *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v15->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v15->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v15->salt);
    }
    if ( v15->salt != *(_DWORD *)(v5 + 32) )
      goto LABEL_37;
    v16 = *(unsigned int *)(v5 + 48);
    v17 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v16);
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 16) >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(v17 + 16, v16);
    if ( *(_QWORD *)(v17 + 16) )
      v18 = 0;
    else
LABEL_37:
      v18 = 1;
    if ( v18 )
    {
      result = -2147483640;
      goto LABEL_61;
    }
    if ( *(_DWORD *)(v5 + 64) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *tile = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *poly = 0LL;
    }
    else
    {
      v19 = *(unsigned int *)(v5 + 48);
      v20 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v19);
      if ( *(_BYTE *)(((unsigned __int64)(v20 + 16) >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8(v20 + 16, v19);
      v21 = *(_QWORD *)(v20 + 16);
      if ( *(_BYTE *)(((unsigned __int64)(v21 + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v21 + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21 + 20);
      }
      if ( *(_DWORD *)(v21 + 20) <= *(_DWORD *)(v5 + 80) )
      {
        result = -2147483640;
        goto LABEL_61;
      }
      v22 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, *(_DWORD *)(v5 + 48));
      if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *tile = v22;
      v23 = *(unsigned int *)(v5 + 48);
      v24 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v23);
      if ( *(_BYTE *)(((unsigned __int64)(v24 + 32) >> 3) + 0x7FFF8000) )
        v24 = __asan_report_load8(v24 + 32, v23);
      v25 = (const NavMeshPoly *)(*(_QWORD *)(v24 + 32) + 32LL * *(unsigned int *)(v5 + 80));
      if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *poly = v25;
    }
    result = 0x40000000;
  }
LABEL_61:
  if ( v31 == (char *)v5 )
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
  return result;
};

// Line 2234: range 000000000CC2E192-000000000CC2E400
void __cdecl NavMesh::GetTileAndPolyByRefUnsafe(
        const NavMesh *const this,
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
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 9 salt:2235 48 4 7 it:2235 64 4 9 type:2235 80 4 7 ip:2235 96 4 14 allocflag:2235";
  *(_QWORD *)(v4 + 16) = NavMesh::GetTileAndPolyByRefUnsafe;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  NavMeshPolyRefHelper::DecodePolyId(
    (unsigned int *)(v4 + 32),
    (unsigned int *)(v4 + 96),
    (unsigned int *)(v4 + 48),
    (unsigned int *)(v4 + 64),
    (unsigned int *)(v4 + 80),
    ref);
  if ( *(_DWORD *)(v4 + 64) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *tile = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *poly = 0LL;
  }
  else
  {
    v7 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, *(_DWORD *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *tile = v7;
    v8 = *(unsigned int *)(v4 + 48);
    v9 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v8);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 32) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9 + 32, v8);
    v10 = (const NavMeshPoly *)(*(_QWORD *)(v9 + 32) + 32LL * *(unsigned int *)(v4 + 80));
    if ( *(_BYTE *)(((unsigned __int64)poly >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *poly = v10;
  }
  if ( v13 == (char *)v4 )
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

// Line 2250: range 000000000CC2E402-000000000CC2E74C
bool __cdecl NavMesh::IsValidPolyRef(const NavMesh *const this, NavMeshPolyRef ref)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  const OffMeshConnection *v6; // rax
  const NavMeshTile *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 salt:2255 48 4 7 it:2255 64 4 9 type:2255 80 4 7 ip:2255 96 4 14 allocflag:2255";
  *(_QWORD *)(v2 + 16) = NavMesh::IsValidPolyRef;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  if ( !ref )
  {
    result = 0;
    goto LABEL_32;
  }
  NavMeshPolyRefHelper::DecodePolyId(
    (unsigned int *)(v2 + 32),
    (unsigned int *)(v2 + 96),
    (unsigned int *)(v2 + 48),
    (unsigned int *)(v2 + 64),
    (unsigned int *)(v2 + 80),
    ref);
  if ( *(_DWORD *)(v2 + 64) == 1 )
  {
    if ( FreeList<OffMeshConnection,false>::Capacity(&this->m_offMeshConnections) <= *(_DWORD *)(v2 + 80) )
    {
      result = 0;
      goto LABEL_32;
    }
    v6 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, *(_DWORD *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&v6->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v6->salt);
    }
    if ( v6->salt != *(_DWORD *)(v2 + 32) )
    {
      result = 0;
      goto LABEL_32;
    }
  }
  else
  {
    if ( FreeList<NavMeshTile,false>::Capacity(&this->m_tiles) <= *(_DWORD *)(v2 + 48) )
    {
      result = 0;
      goto LABEL_32;
    }
    v7 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v7->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v7->salt);
    }
    if ( v7->salt != *(_DWORD *)(v2 + 32) )
      goto LABEL_21;
    v8 = *(unsigned int *)(v2 + 48);
    v9 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v8);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 16) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9 + 16, v8);
    if ( *(_QWORD *)(v9 + 16) )
      v10 = 0;
    else
LABEL_21:
      v10 = 1;
    if ( v10 )
    {
      result = 0;
      goto LABEL_32;
    }
    v11 = *(unsigned int *)(v2 + 48);
    v12 = (__int64)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v11);
    if ( *(_BYTE *)(((unsigned __int64)(v12 + 16) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12 + 16, v11);
    v13 = *(_QWORD *)(v12 + 16);
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 20) >> 3) + 0x7FFF8000) != 0
      && (char)(((v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v13 + 20) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13 + 20);
    }
    if ( *(_DWORD *)(v13 + 20) <= *(_DWORD *)(v2 + 80) )
    {
      result = 0;
      goto LABEL_32;
    }
  }
  result = 1;
LABEL_32:
  if ( v14 == (char *)v2 )
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

// Line 2277: range 000000000CC2E74E-000000000CC2EE28
NavMeshStatus __cdecl NavMesh::RemoveTile(
        NavMesh *const this,
        NavMeshTileRef ref,
        SurfaceIDType surfaceID,
        const unsigned __int8 **data,
        int *dataSize)
{
  __int64 v6; // rsi
  const unsigned __int8 *v7; // rdx
  int v8; // ecx
  char v9; // dl
  unsigned int tileIndex; // [rsp+30h] [rbp-50h]
  unsigned int tileSalt; // [rsp+34h] [rbp-4Ch]
  NavMeshTile *tile; // [rsp+38h] [rbp-48h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type v15; // [rsp+48h] [rbp-38h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-30h] BYREF

  if ( !ref )
    return -2147483640;
  tileIndex = NavMeshPolyRefHelper::DecodePolyIdTile(ref);
  tileSalt = NavMeshPolyRefHelper::DecodePolyIdSalt(ref);
  if ( tileIndex >= FreeList<NavMeshTile,false>::Capacity(&this->m_tiles) )
    return -2147483640;
  tile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, tileIndex);
  if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tile->salt);
  }
  if ( tileSalt != tile->salt )
    return -2147483640;
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tileIndex);
  v15 = std::make_pair<int const&,int const&>(&tile->header->x, &tile->header->y);
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::erase(
    &this->m_TileLUT,
    &v15);
  NavMesh::UnconnectLinks(this, tile);
  NavMesh::UnconnectOffMeshConnectionsToTile(this, ref);
  v6 = (((_BYTE)tile + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->flags);
  }
  if ( (tile->flags & 1) != 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->data, v6);
    free_alloc_internal((void *)tile->data);
    if ( data )
    {
      if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *data = 0LL;
    }
    if ( dataSize )
    {
      v6 = ((unsigned __int8)dataSize & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dataSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(dataSize);
      }
      *dataSize = 0;
    }
  }
  else
  {
    if ( data )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->data, v6);
      v7 = tile->data;
      if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *data = v7;
    }
    if ( dataSize )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&tile->dataSize);
      }
      v8 = tile->dataSize;
      v9 = *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v9 != 0;
      if ( v9 != 0 && (char)(((unsigned __int8)dataSize & 7) + 3) >= v9 )
        __asan_report_store4(dataSize);
      *dataSize = v8;
    }
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
    __asan_report_load8(&tile->polyLinks, v6);
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
  {
    ++tile->salt;
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      "RemoveTile",
      2338);
    common::milog::MiLogStream::operator()(&v16, "tile->salt == 0");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  FreeList<NavMeshTile,false>::Release(&this->m_tiles, tileIndex);
  return 0x40000000;
};

// Line 2348: range 000000000CC2EE2A-000000000CC2EED7
NavMeshTileRef __cdecl NavMesh::GetTileRef(const NavMesh *const this, const NavMeshTile *tile)
{
  unsigned int it; // [rsp+1Ch] [rbp-4h]

  if ( !tile )
    return 0LL;
  it = 678152731 * (((char *)tile - (char *)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, 0)) >> 3);
  if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tile->salt);
  }
  return NavMeshPolyRefHelper::EncodePolyId(tile->salt, it, 0, 0, 0);
};

// Line 2358: range 000000000CC2EED8-000000000CC2F057
NavMeshPolyRef __cdecl NavMesh::GetPolyRefBase(
        const NavMesh *const this,
        const NavMeshTile *tile,
        const NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v4; // rax
  unsigned __int64 ret; // [rsp+30h] [rbp-10h]
  const NavMeshTile *tiles_head; // [rsp+38h] [rbp-8h]

  if ( !tile )
    return 0LL;
  if ( callback )
  {
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, tile);
    v4 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 2);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 2, tile);
    ret = (*(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, const NavMeshTile *))v4)(callback, tile);
    if ( ret )
      return ret;
  }
  tiles_head = FreeList<NavMeshTile,false>::begin(&this->m_tiles);
  if ( tile < tiles_head || tile >= &tiles_head[FreeList<NavMeshTile,false>::Capacity(&this->m_tiles)] )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tile->salt);
  }
  return NavMeshPolyRefHelper::EncodePolyId(
           tile->salt,
           678152731 * (unsigned int)(((char *)tile - (char *)tiles_head) >> 3),
           0,
           0,
           0);
};

// Line 2382: range 000000000CC2F058-000000000CC2F641
NavMeshStatus __cdecl NavMesh::GetOffMeshConnectionEndPoints(
        const NavMesh *const this,
        NavMeshPolyRef prevRef,
        NavMeshPolyRef offMeshPolyRef,
        Vector3f *startPos,
        Vector3f *endPos)
{
  const NavMeshLink *firstLink; // rsi
  const NavMesh *thisa; // [rsp+28h] [rbp-28h]
  const NavMeshLink *foundLink; // [rsp+38h] [rbp-18h]
  const NavMeshLink *link; // [rsp+40h] [rbp-10h]
  const OffMeshConnection *con; // [rsp+48h] [rbp-8h]

  thisa = this;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(offMeshPolyRef) != 1 )
    return -2147483640;
  con = NavMesh::GetOffMeshConnection(this, offMeshPolyRef);
  if ( !con )
    return -2147483640;
  foundLink = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&con->firstLink);
  }
  firstLink = (const NavMeshLink *)con->firstLink;
  for ( link = NavMesh::GetLink(this, (unsigned int)firstLink); link; link = NavMesh::GetNextLink(thisa, link) )
  {
    if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
    {
      this = (const NavMesh *const)link;
      __asan_report_load8(link, firstLink);
    }
    if ( prevRef == link->ref )
    {
      foundLink = link;
      break;
    }
    firstLink = link;
    this = thisa;
  }
  if ( !foundLink )
    return 0x80000000;
  if ( *(_BYTE *)(((unsigned __int64)&foundLink->edge >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)foundLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&foundLink->edge >> 3) + 0x7FFF8000) )
  {
    this = (const NavMesh *const)&foundLink->edge;
    __asan_report_load1(&foundLink->edge);
  }
  if ( foundLink->edge >= 2u )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "foundLink->edge == 0 || foundLink->edge == 1",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x964u,
      "NavMeshStatus NavMesh::GetOffMeshConnectionEndPoints(NavMeshPolyRef, NavMeshPolyRef, Vector3f*, Vector3f*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&foundLink->edge >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)foundLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&foundLink->edge >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&foundLink->edge);
  }
  if ( foundLink->edge )
  {
    if ( *(_BYTE *)(((unsigned __int64)&foundLink->edge >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)foundLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&foundLink->edge >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&foundLink->edge);
    }
    if ( foundLink->edge == 1 )
    {
      if ( ((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)startPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(startPos, 12LL);
      }
      if ( *(char *)(((unsigned __int64)&con->endPoints[1] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)con + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_load_n(&con->endPoints[1], 12LL);
      }
      *(_QWORD *)&startPos->x = *(_QWORD *)&con->endPoints[1].pos.x;
      startPos->z = con->endPoints[1].pos.z;
      if ( ((unsigned __int8)endPos & 7) >= *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)endPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(endPos, 12LL);
      }
      if ( *(char *)(((unsigned __int64)con->endPoints >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)con + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_load_n(con->endPoints, 12LL);
      }
      *(_QWORD *)&endPos->x = *(_QWORD *)&con->endPoints[0].pos.x;
      endPos->z = con->endPoints[0].pos.z;
      return 0x40000000;
    }
    else
    {
      return 0x80000000;
    }
  }
  else
  {
    if ( ((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)startPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(startPos, 12LL);
    }
    if ( *(char *)(((unsigned __int64)con->endPoints >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)con + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load_n(con->endPoints, 12LL);
    }
    *(_QWORD *)&startPos->x = *(_QWORD *)&con->endPoints[0].pos.x;
    startPos->z = con->endPoints[0].pos.z;
    if ( ((unsigned __int8)endPos & 7) >= *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)endPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(endPos, 12LL);
    }
    if ( *(char *)(((unsigned __int64)&con->endPoints[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)con + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load_n(&con->endPoints[1], 12LL);
    }
    *(_QWORD *)&endPos->x = *(_QWORD *)&con->endPoints[1].pos.x;
    endPos->z = con->endPoints[1].pos.z;
    return 0x40000000;
  }
};

// Line 2425: range 000000000CC2F642-000000000CC30940
NavMeshStatus __cdecl NavMesh::GetNearestOffMeshConnectionEndPoints(
        const NavMesh *const this,
        NavMeshPolyRef prevRef,
        NavMeshPolyRef offMeshPolyRef,
        NavMeshPolyRef nextRef,
        const Vector3f *currentPos,
        Vector3f *startPos,
        Vector3f *endPos)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  NavMeshStatus result; // eax
  const NavMeshLink *firstLink; // rsi
  const NavMeshLink *v12; // rsi
  const OffMeshConnection *v13; // rax
  const OffMeshConnection *v14; // rax
  const OffMeshConnection *v15; // rax
  const OffMeshConnection *v16; // rax
  float *v17; // rax
  float *v18; // rdx
  float *v19; // rax
  float *v20; // rdx
  float *v21; // rax
  float *v22; // rdx
  float *v23; // rax
  float *v24; // rdx
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  int v27; // esi
  const OffMeshConnection *v28; // rdx
  const OffMeshConnection *v29; // rdx
  const NavMesh *thisa; // [rsp+28h] [rbp-138h]
  float __a; // [rsp+38h] [rbp-128h] BYREF
  float __b; // [rsp+3Ch] [rbp-124h] BYREF
  float t1; // [rsp+40h] [rbp-120h]
  float s; // [rsp+44h] [rbp-11Ch]
  float startTmin; // [rsp+48h] [rbp-118h]
  float startTmax; // [rsp+4Ch] [rbp-114h]
  float endTmin; // [rsp+50h] [rbp-110h]
  float endTmax; // [rsp+54h] [rbp-10Ch]
  const NavMeshLink *prevLink; // [rsp+58h] [rbp-108h]
  const NavMeshLink *link; // [rsp+60h] [rbp-100h]
  const NavMeshLink *nextLink; // [rsp+68h] [rbp-F8h]
  const NavMeshLink *link_0; // [rsp+70h] [rbp-F0h]
  const OffMeshConnection *con; // [rsp+78h] [rbp-E8h]
  char v49[224]; // [rsp+80h] [rbp-E0h] BYREF

  thisa = this;
  v7 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(192LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "5 48 4 7 t0:2489 64 12 11 startP:2472 96 12 11 startQ:2472 128 12 9 endP:2472 160 12 9 endQ:2472";
  *(_QWORD *)(v7 + 16) = NavMesh::GetNearestOffMeshConnectionEndPoints;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -219020288;
  v9[536862723] = -219020288;
  v9[536862724] = -219020288;
  v9[536862725] = -202177536;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(offMeshPolyRef) == 1 )
  {
    con = NavMesh::GetOffMeshConnection(this, offMeshPolyRef);
    if ( con )
    {
      prevLink = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&con->firstLink);
      }
      firstLink = (const NavMeshLink *)con->firstLink;
      for ( link = NavMesh::GetLink(this, (unsigned int)firstLink); link; link = NavMesh::GetNextLink(this, link) )
      {
        if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
          __asan_report_load8(link, firstLink);
        if ( prevRef == link->ref )
        {
          prevLink = link;
          break;
        }
        firstLink = link;
      }
      if ( prevLink )
      {
        nextLink = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&con->firstLink);
        }
        v12 = (const NavMeshLink *)con->firstLink;
        for ( link_0 = NavMesh::GetLink(this, (unsigned int)v12); link_0; link_0 = NavMesh::GetNextLink(thisa, link_0) )
        {
          if ( *(_BYTE *)(((unsigned __int64)link_0 >> 3) + 0x7FFF8000) )
          {
            this = (const NavMesh *const)link_0;
            __asan_report_load8(link_0, v12);
          }
          if ( nextRef == link_0->ref )
          {
            nextLink = link_0;
            break;
          }
          v12 = link_0;
          this = thisa;
        }
        if ( nextLink )
        {
          if ( *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)prevLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3) + 0x7FFF8000) )
          {
            this = (const NavMesh *const)&prevLink->edge;
            __asan_report_load1(&prevLink->edge);
          }
          if ( prevLink->edge >= 2u )
          {
            __asan_handle_no_return(this);
            __assert_fail(
              "prevLink->edge == 0 || prevLink->edge == 1",
              "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
              0x99Cu,
              "NavMeshStatus NavMesh::GetNearestOffMeshConnectionEndPoints(NavMeshPolyRef, NavMeshPolyRef, NavMeshPolyRef"
              ", const Vector3f&, Vector3f*, Vector3f*) const");
          }
          if ( *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)con - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&con->width);
          }
          if ( con->width <= 0.0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)prevLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load1(&prevLink->edge);
            }
            if ( prevLink->edge )
            {
              if ( *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)prevLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load1(&prevLink->edge);
              }
              if ( prevLink->edge == 1 )
              {
                if ( ((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)startPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3)
                                                                        + 0x7FFF8000) )
                {
                  __asan_report_store_n(startPos, 12LL);
                }
                if ( *(char *)(((unsigned __int64)&con->endPoints[1] >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)con + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load_n(&con->endPoints[1], 12LL);
                }
                v29 = con;
                *(_QWORD *)&startPos->x = *(_QWORD *)&con->endPoints[1].pos.x;
                startPos->z = v29->endPoints[1].pos.z;
                if ( ((unsigned __int8)endPos & 7) >= *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)endPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_store_n(endPos, 12LL);
                }
                if ( *(char *)(((unsigned __int64)con->endPoints >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)con + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load_n(con->endPoints, 12LL);
                }
                *endPos = con->endPoints[0].pos;
              }
            }
            else
            {
              if ( ((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)startPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_store_n(startPos, 12LL);
              }
              if ( *(char *)(((unsigned __int64)con->endPoints >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)con + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
              {
                __asan_report_load_n(con->endPoints, 12LL);
              }
              v28 = con;
              *(_QWORD *)&startPos->x = *(_QWORD *)&con->endPoints[0].pos.x;
              startPos->z = v28->endPoints[0].pos.z;
              if ( ((unsigned __int8)endPos & 7) >= *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)endPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_store_n(endPos, 12LL);
              }
              if ( *(char *)(((unsigned __int64)&con->endPoints[1] >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)con + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
              {
                __asan_report_load_n(&con->endPoints[1], 12LL);
              }
              *endPos = con->endPoints[1].pos;
            }
            result = 0x40000000;
          }
          else
          {
            Vector3f::Vector3f((Vector3f *const)(v7 + 64));
            Vector3f::Vector3f((Vector3f *const)(v7 + 96));
            Vector3f::Vector3f((Vector3f *const)(v7 + 128));
            Vector3f::Vector3f((Vector3f *const)(v7 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)prevLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load1(&prevLink->edge);
            }
            if ( prevLink->edge )
            {
              if ( *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)prevLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&prevLink->edge >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load1(&prevLink->edge);
              }
              if ( prevLink->edge == 1 )
              {
                if ( (((unsigned __int8)con + 92) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3)
                                                                   + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)con + 103) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z
                                                                      + 3) >> 3)
                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load_n(con->endPoints[1].mapped, 12LL);
                }
                v15 = con;
                *(_QWORD *)(v7 + 64) = *(_QWORD *)&con->endPoints[1].mapped[0].x;
                *(float *)(v7 + 72) = v15->endPoints[1].mapped[0].z;
                if ( *(char *)(((unsigned __int64)&con->endPoints[1].mapped[1] >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[1].z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)con + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[1].z
                                                                      + 3) >> 3)
                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load_n(&con->endPoints[1].mapped[1], 12LL);
                }
                *(Vector3f *)(v7 + 96) = con->endPoints[1].mapped[1];
                if ( (((unsigned __int8)con + 44) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3)
                                                                   + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)con + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z
                                                                     + 3) >> 3)
                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load_n(con->endPoints[0].mapped, 12LL);
                }
                v16 = con;
                *(_QWORD *)(v7 + 128) = *(_QWORD *)&con->endPoints[0].mapped[0].x;
                *(float *)(v7 + 136) = v16->endPoints[0].mapped[0].z;
                if ( *(char *)(((unsigned __int64)&con->endPoints[0].mapped[1] >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[1].z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)con + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[1].z
                                                                     + 3) >> 3)
                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load_n(&con->endPoints[0].mapped[1], 12LL);
                }
                *(Vector3f *)(v7 + 160) = con->endPoints[0].mapped[1];
              }
            }
            else
            {
              if ( (((unsigned __int8)con + 44) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3)
                                                                 + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)con->endPoints[0].mapped >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)con + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[0].z + 3) >> 3)
                                                                 + 0x7FFF8000) )
              {
                __asan_report_load_n(con->endPoints[0].mapped, 12LL);
              }
              v13 = con;
              *(_QWORD *)(v7 + 64) = *(_QWORD *)&con->endPoints[0].mapped[0].x;
              *(float *)(v7 + 72) = v13->endPoints[0].mapped[0].z;
              if ( *(char *)(((unsigned __int64)&con->endPoints[0].mapped[1] >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[1].z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)con + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].mapped[1].z + 3) >> 3)
                                                                 + 0x7FFF8000) )
              {
                __asan_report_load_n(&con->endPoints[0].mapped[1], 12LL);
              }
              *(Vector3f *)(v7 + 96) = con->endPoints[0].mapped[1];
              if ( (((unsigned __int8)con + 92) & 7) >= *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3)
                                                                 + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)con->endPoints[1].mapped >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)con + 103) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[0].z
                                                                    + 3) >> 3)
                                                                  + 0x7FFF8000) )
              {
                __asan_report_load_n(con->endPoints[1].mapped, 12LL);
              }
              v14 = con;
              *(_QWORD *)(v7 + 128) = *(_QWORD *)&con->endPoints[1].mapped[0].x;
              *(float *)(v7 + 136) = v14->endPoints[1].mapped[0].z;
              if ( *(char *)(((unsigned __int64)&con->endPoints[1].mapped[1] >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[1].z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)con + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].mapped[1].z
                                                                    + 3) >> 3)
                                                                  + 0x7FFF8000) )
              {
                __asan_report_load_n(&con->endPoints[1].mapped[1], 12LL);
              }
              *(Vector3f *)(v7 + 160) = con->endPoints[1].mapped[1];
            }
            *(_DWORD *)(v7 + 48) = 0;
            SqrDistancePointSegment2D(
              (float *)(v7 + 48),
              currentPos,
              (const Vector3f *)(v7 + 64),
              (const Vector3f *)(v7 + 96));
            t1 = 1.0 - *(float *)(v7 + 48);
            s = 0.0039215689;
            __b = 0.0;
            if ( *(_BYTE *)(((unsigned __int64)&prevLink->bmin >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)prevLink + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&prevLink->bmin >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load1(&prevLink->bmin);
            }
            __a = 0.0039215689 * (float)prevLink->bmin;
            v17 = (float *)std::max<float>(&__a, &__b);
            v18 = v17;
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v17);
            }
            startTmin = *v18;
            __b = 1.0;
            if ( *(_BYTE *)(((unsigned __int64)&prevLink->bmax >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)prevLink + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&prevLink->bmax >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load1(&prevLink->bmax);
            }
            __a = 0.0039215689 * (float)prevLink->bmax;
            v19 = (float *)std::min<float>(&__a, &__b);
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v19);
            }
            startTmax = *v20;
            __b = 0.0;
            if ( *(_BYTE *)(((unsigned __int64)&nextLink->bmin >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)nextLink + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&nextLink->bmin >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load1(&nextLink->bmin);
            }
            __a = 0.0039215689 * (float)nextLink->bmin;
            v21 = (float *)std::max<float>(&__a, &__b);
            v22 = v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            endTmin = *v22;
            __b = 1.0;
            if ( *(_BYTE *)(((unsigned __int64)&nextLink->bmax >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)nextLink + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&nextLink->bmax >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load1(&nextLink->bmax);
            }
            __a = 0.0039215689 * (float)nextLink->bmax;
            v23 = (float *)std::min<float>(&__a, &__b);
            v24 = v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            endTmax = *v24;
            v25 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 48));
            *(float *)v25.m128i_i32 = FloatClamp(*(float *)v25.m128i_i32, startTmin, startTmax);
            *(_DWORD *)(v7 + 48) = _mm_cvtsi128_si32(v25);
            v26 = _mm_cvtsi32_si128(LODWORD(t1));
            *(float *)v26.m128i_i32 = FloatClamp(*(float *)v26.m128i_i32, endTmin, endTmax);
            t1 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
            v27 = *(_DWORD *)(v7 + 48);
            if ( ((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)startPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3)
                                                                    + 0x7FFF8000) )
            {
              v27 = 12;
              __asan_report_store_n(startPos, 12LL);
            }
            *startPos = Lerp((const Vector3f *)(v7 + 64), (const Vector3f *)(v7 + 96), *(float *)&v27);
            if ( ((unsigned __int8)endPos & 7) >= *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)endPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_store_n(endPos, 12LL);
            }
            *endPos = Lerp((const Vector3f *)(v7 + 128), (const Vector3f *)(v7 + 160), t1);
            result = 0x40000000;
          }
        }
        else
        {
          result = 0x80000000;
        }
      }
      else
      {
        result = 0x80000000;
      }
    }
    else
    {
      result = -2147483640;
    }
  }
  else
  {
    result = -2147483640;
  }
  if ( v49 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2530: range 000000000CC30942-000000000CC30A50
NavMeshStatus __cdecl NavMesh::SetOffMeshConnectionCostModifier(
        NavMesh *const this,
        NavMeshPolyRef ref,
        float costOverride)
{
  OffMeshConnection *con; // [rsp+28h] [rbp-8h]

  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) != 1 )
    return -2147483640;
  con = NavMesh::GetOffMeshConnectionUnsafe(this, ref);
  if ( !con )
    return -2147483640;
  if ( costOverride < 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&con->costModifier >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&con->costModifier >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&con->costModifier);
    }
    con->costModifier = -1.0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&con->costModifier >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&con->costModifier >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&con->costModifier);
    }
    con->costModifier = costOverride;
  }
  NavMesh::BumpTimeStamp(this);
  return 0x40000000;
};

// Line 2547: range 000000000CC30A52-000000000CC30AFB
NavMeshStatus __cdecl NavMesh::SetOffMeshConnectionFlags(NavMesh *const this, NavMeshPolyRef ref, unsigned int flags)
{
  OffMeshConnection *con; // [rsp+28h] [rbp-8h]

  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) != 1 )
    return -2147483640;
  con = NavMesh::GetOffMeshConnectionUnsafe(this, ref);
  if ( !con )
    return -2147483640;
  if ( *(_BYTE *)(((unsigned __int64)&con->flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&con->flags);
  }
  con->flags = flags;
  NavMesh::BumpTimeStamp(this);
  return 0x40000000;
};

// Line 2559: range 000000000CC30AFC-000000000CC30BDB
NavMeshStatus __cdecl NavMesh::GetOffMeshConnectionUserID(const NavMesh *const this, NavMeshPolyRef ref, int *userID)
{
  int v4; // ecx
  const OffMeshConnection *con; // [rsp+28h] [rbp-8h]

  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) != 1 )
    return -2147483640;
  con = NavMesh::GetOffMeshConnection(this, ref);
  if ( !con )
    return -2147483640;
  if ( *(_BYTE *)(((unsigned __int64)&con->userID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->userID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&con->userID);
  }
  v4 = con->userID;
  if ( *(_BYTE *)(((unsigned __int64)userID >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)userID & 7) + 3) >= *(_BYTE *)(((unsigned __int64)userID >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(userID);
  }
  *userID = v4;
  return 0x40000000;
};

// Line 2570: range 000000000CC30BDC-000000000CC30C79
NavMeshStatus __cdecl NavMesh::SetOffMeshConnectionUserID(NavMesh *const this, NavMeshPolyRef ref, const int userID)
{
  OffMeshConnection *con; // [rsp+28h] [rbp-8h]

  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) != 1 )
    return -2147483640;
  con = NavMesh::GetOffMeshConnectionUnsafe(this, ref);
  if ( !con )
    return -2147483640;
  if ( *(_BYTE *)(((unsigned __int64)&con->userID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->userID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&con->userID);
  }
  con->userID = userID;
  return 0x40000000;
};

// Line 2581: range 000000000CC30C7A-000000000CC30D6B
const OffMeshConnection *__cdecl NavMesh::GetOffMeshConnection(const NavMesh *const this, const NavMeshPolyRef ref)
{
  const OffMeshConnection *v3; // rax
  unsigned int index; // [rsp+18h] [rbp-8h]
  unsigned int salt; // [rsp+1Ch] [rbp-4h]

  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) != 1 )
    return 0LL;
  index = NavMeshPolyRefHelper::DecodePolyIdPoly(ref);
  if ( index >= FreeList<OffMeshConnection,false>::Capacity(&this->m_offMeshConnections) )
    return 0LL;
  salt = NavMeshPolyRefHelper::DecodePolyIdSalt(ref);
  v3 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)&v3->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v3->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v3->salt);
  }
  if ( salt == v3->salt )
    return FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  else
    return 0LL;
};

// Line 2597: range 000000000CC30D6C-000000000CC30E5D
OffMeshConnection *__cdecl NavMesh::GetOffMeshConnectionUnsafe(NavMesh *const this, const NavMeshPolyRef ref)
{
  OffMeshConnection *v3; // rax
  unsigned int index; // [rsp+18h] [rbp-8h]
  unsigned int salt; // [rsp+1Ch] [rbp-4h]

  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) != 1 )
    return 0LL;
  index = NavMeshPolyRefHelper::DecodePolyIdPoly(ref);
  if ( index >= FreeList<OffMeshConnection,false>::Capacity(&this->m_offMeshConnections) )
    return 0LL;
  salt = NavMeshPolyRefHelper::DecodePolyIdSalt(ref);
  v3 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)&v3->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v3->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v3->salt);
  }
  if ( salt == v3->salt )
    return FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  else
    return 0LL;
};

// Line 2613: range 000000000CC30E5E-000000000CC31142
bool __fastcall TestPointInCylinder(unsigned __int64 point, unsigned __int64 center, float halfHeight, float radius)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  double v7; // xmm0_8
  double v8; // xmm0_8
  bool result; // al
  double v10; // xmm0_8
  float v11; // [rsp+4h] [rbp-8Ch]
  float v12; // [rsp+4h] [rbp-8Ch]
  float t; // [rsp+28h] [rbp-68h] BYREF
  float v15; // [rsp+2Ch] [rbp-64h] BYREF
  char v16[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 11 radius:2612";
  *(_QWORD *)(v4 + 16) = TestPointInCylinder;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(float *)(v4 + 32) = radius;
  if ( *(_BYTE *)((point >> 3) + 0x7FFF8000) != 0 && (char)((point & 7) + 3) >= *(_BYTE *)((point >> 3) + 0x7FFF8000) )
    __asan_report_load4(point);
  LODWORD(v7) = *(_DWORD *)point;
  if ( *(_BYTE *)((center >> 3) + 0x7FFF8000) != 0 && (char)((center & 7) + 3) >= *(_BYTE *)((center >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load4(center);
  t = *(float *)&v7 - *(float *)center;
  v11 = Sqr<float>(&t);
  if ( *(_BYTE *)(((point + 8) >> 3) + 0x7FFF8000) != 0
    && (char)(((point + 8) & 7) + 3) >= *(_BYTE *)(((point + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(point + 8);
  }
  LODWORD(v8) = *(_DWORD *)(point + 8);
  if ( *(_BYTE *)(((center + 8) >> 3) + 0x7FFF8000) != 0
    && (char)(((center + 8) & 7) + 3) >= *(_BYTE *)(((center + 8) >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load4(center + 8);
  }
  v15 = *(float *)&v8 - *(float *)(center + 8);
  v12 = Sqr<float>(&v15) + v11;
  if ( v12 <= Sqr<float>((const float *)(v4 + 32)) )
  {
    if ( *(_BYTE *)(((point + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((point + 4) & 7) + 3) >= *(_BYTE *)(((point + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(point + 4);
    }
    LODWORD(v10) = *(_DWORD *)(point + 4);
    if ( *(_BYTE *)(((center + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((center + 4) & 7) + 3) >= *(_BYTE *)(((center + 4) >> 3) + 0x7FFF8000) )
    {
      v10 = __asan_report_load4(center + 4);
    }
    result = halfHeight >= Abs(*(float *)&v10 - *(float *)(center + 4));
  }
  else
  {
    result = 0;
  }
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2620: range 000000000CC31144-000000000CC314DC
void __cdecl NavMesh::ConnectOffMeshConnectionsToTile(NavMesh *const this, NavMeshTile *tile)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const NavMeshDataHeader *header; // rdx
  double v6; // xmm0_8
  OffMeshConnection *v7; // rdx
  unsigned int i; // [rsp+18h] [rbp-98h]
  int agentTypeID; // [rsp+1Ch] [rbp-94h]
  vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::mapped_type *settings; // [rsp+20h] [rbp-90h]
  OffMeshConnection *con; // [rsp+28h] [rbp-88h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 15 tileBounds:2621";
  *(_QWORD *)(v2 + 16) = NavMesh::ConnectOffMeshConnectionsToTile;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  GetWorldTileBounds((MinMaxAABB *)(v2 + 32), tile);
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tile);
  header = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&header->agentTypeId >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)header + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->agentTypeId >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&header->agentTypeId);
  }
  agentTypeID = header->agentTypeId;
  settings = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::operator[](
               &this->m_SurfaceIDToData,
               &tile->surfaceID);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_firstOffMeshConnection);
  }
  for ( i = this->m_firstOffMeshConnection; i != -1; i = v7->next )
  {
    con = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
    if ( *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(con);
    }
    if ( agentTypeID == con->agentTypeID && IntersectAABBAABB(&con->bounds, (const MinMaxAABB *)(v2 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&settings->m_Settings.agentClimb >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->m_Settings.agentClimb >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&settings->m_Settings.agentClimb);
      }
      *(float *)&v6 = settings->m_Settings.agentClimb;
      if ( *(_BYTE *)(((unsigned __int64)&settings->m_Settings.agentRadius >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->m_Settings.agentRadius >> 3)
                                                               + 0x7FFF8000) )
      {
        v6 = __asan_report_load4(&settings->m_Settings.agentRadius);
      }
      NavMesh::ConnectOffMeshConnection(this, i, settings->m_Settings.agentRadius, *(float *)&v6);
    }
    v7 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
    if ( *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v7 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v7->next);
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 2641: range 000000000CC31E4C-000000000CC321BD
void __cdecl NavMesh::FindPolygonsOverlappingSegment(
        NavMesh *const this,
        int typeID,
        const Vector3f *pa,
        const Vector3f *pb,
        const float height,
        NavMeshPolyRef *polys,
        float *overlapMinMax,
        int *polyCount,
        const int maxPolys)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r12
  int v12; // ecx
  Vector3f v18; // [rsp+30h] [rbp-130h] BYREF
  Vector3f cen; // [rsp+3Ch] [rbp-124h] BYREF
  Vector3f inV; // [rsp+48h] [rbp-118h] BYREF
  Vector3f ext; // [rsp+54h] [rbp-10Ch] BYREF
  char v22[256]; // [rsp+60h] [rbp-100h] BYREF

  v9 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(224LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "3 48 12 9 bmin:2697 80 12 9 bmax:2698 112 80 12 overlap:2703";
  *(_QWORD *)(v9 + 16) = NavMesh::FindPolygonsOverlappingSegment;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = 61937;
  v11[536862721] = 0x4000000;
  v11[536862722] = 62194;
  v11[536862722] = 0x4000000;
  v11[536862723] = 62194;
  v11[536862726] = -202116109;
  *(Vector3f *)(v9 + 48) = min(pa, pb);
  *(Vector3f *)(v9 + 80) = max(pa, pb);
  *(float *)(v9 + 52) = *(float *)(v9 + 52) - height;
  *(float *)(v9 + 84) = *(float *)(v9 + 84) + height;
  NavMesh::FindPolygonsOverlappingSegment(int,Vector3f const&,Vector3f const&,float,unsigned long long *,float *,int *,int)::OverlapQuery::OverlapQuery(
    (NavMesh::FindPolygonsOverlappingSegment::OverlapQuery *const)(v9 + 112),
    this,
    pa,
    pb,
    height,
    polys,
    overlapMinMax,
    maxPolys);
  inV = operator-((const Vector3f *)(v9 + 80), (const Vector3f *)(v9 + 48));
  ext = operator*(&inV, 0.5);
  v18 = operator+((const Vector3f *)(v9 + 80), (const Vector3f *)(v9 + 48));
  cen = operator*(&v18, 0.5);
  NavMesh::QueryPolygons(this, typeID, &cen, &ext, (NavMeshProcessCallback *)(v9 + 112));
  v12 = *(_DWORD *)(v9 + 184);
  if ( *(_BYTE *)(((unsigned __int64)polyCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)polyCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)polyCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(polyCount);
  }
  *polyCount = v12;
  if ( v22 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2653: range 000000000CC314DE-000000000CC3186E
void __cdecl NavMesh::FindPolygonsOverlappingSegment(int,Vector3f const&,Vector3f const&,float,unsigned long long *,float *,int *,int)::OverlapQuery::OverlapQuery(
        NavMesh::FindPolygonsOverlappingSegment::OverlapQuery *const this,
        const NavMesh *navmesh,
        const Vector3f *start,
        const Vector3f *end,
        float height,
        NavMeshPolyRef *polys,
        float *overlapMinMax,
        int maxPolys)
{
  int (**v8)(...); // rcx

  NavMeshProcessCallback::NavMeshProcessCallback(this);
  v8 = (int (**)(...))&off_1EFB00D0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshProcessCallback = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMesh = navmesh;
  if ( *(char *)(((unsigned __int64)&this->m_Start >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Start.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Start.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Start, 12LL);
  }
  if ( ((unsigned __int8)start & 7) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)start + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(start, 12LL);
  }
  this->m_Start = *start;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_End.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_End.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_End, 12LL);
  }
  if ( ((unsigned __int8)end & 7) >= *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)end + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(end, 12LL);
  }
  this->m_End = *end;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Height);
  }
  this->m_Height = height;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Polys >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Polys = polys;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_OverlapMinMax >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_OverlapMinMax = overlapMinMax;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_PolyCount);
  }
  this->m_PolyCount = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MaxPolys >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_MaxPolys >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_MaxPolys);
  }
  this->m_MaxPolys = maxPolys;
};

// Line 2660: range 000000000CC31870-000000000CC31E4B
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMesh::FindPolygonsOverlappingSegment(int,Vector3f const&,Vector3f const&,float,unsigned long long *,float *,int *,int)::OverlapQuery::ProcessPolygons(
        NavMesh::FindPolygonsOverlappingSegment::OverlapQuery *const this,
        const NavMeshTile *tile,
        const NavMeshPolyRef *polyRefs,
        const NavMeshPoly **polys,
        const int itemCount)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // xmm0_8
  Vector3f *p_m_End; // rsi
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  Vector3f *v16; // r15
  int m_PolyCount; // ecx
  char v18; // dl
  NavMeshPolyRef *m_Polys; // rcx
  char v20; // al
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // xmm0_4
  unsigned __int64 v24; // rcx
  char v25; // dl
  int i; // [rsp+30h] [rbp-160h]
  int nverts; // [rsp+34h] [rbp-15Ch]
  NavMeshPolyRef ref; // [rsp+38h] [rbp-158h]
  char v32[336]; // [rsp+40h] [rbp-150h] BYREF

  v6 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(288LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 48 4 9 tmin:2675 64 4 9 tmax:2675 80 4 11 segMin:2676 96 4 11 segMax:2676 112 12 15 localStart"
                        ":2662 144 12 13 localEnd:2663 176 72 10 verts:2669";
  *(_QWORD *)(v6 + 16) = NavMesh::FindPolygonsOverlappingSegment(int,Vector3f const&,Vector3f const&,float,unsigned long long *,float *,int *,int)::OverlapQuery::ProcessPolygons;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = 61956;
  v8[536862723] = 0x4000000;
  v8[536862724] = 62194;
  v8[536862724] = 0x4000000;
  v8[536862725] = 62194;
  v8[536862727] = -218103808;
  v8[536862728] = -202116109;
  *(Vector3f *)((char *)&v5 - 8) = WorldToTile(tile, &this->m_Start);
  *(_QWORD *)(v6 + 112) = v9;
  *(_DWORD *)(v6 + 120) = v5.m128i_i32[0];
  p_m_End = &this->m_End;
  *(Vector3f *)((char *)&v5 - 8) = WorldToTile(tile, &this->m_End);
  v12 = v11;
  v13 = v5;
  *(_QWORD *)(v6 + 144) = v12;
  *(_DWORD *)(v6 + 152) = v5.m128i_i32[0];
  for ( i = 0; i < itemCount; ++i )
  {
    v14 = (unsigned __int64)&polyRefs[i];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(&polyRefs[i], p_m_End);
    ref = *(_QWORD *)v14;
    v15 = 5LL;
    v16 = (Vector3f *)(v6 + 176);
    while ( v15 >= 0 )
    {
      Vector3f::Vector3f(v16++);
      --v15;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_NavMesh, p_m_End);
    p_m_End = (Vector3f *)ref;
    nverts = NavMesh::GetPolyGeometry(this->m_NavMesh, ref, (Vector3f *)(v6 + 176), 0LL, 0);
    if ( nverts )
    {
      p_m_End = (Vector3f *)(v6 + 64);
      if ( IntersectSegmentPoly2D(
             (float *)(v6 + 48),
             (float *)(v6 + 64),
             (int *)(v6 + 80),
             (int *)(v6 + 96),
             (const Vector3f *)(v6 + 112),
             (const Vector3f *)(v6 + 144),
             (const Vector3f *)(v6 + 176),
             nverts) )
      {
        *(float *)v13.m128i_i32 = clamp01<float>((const float *)(v6 + 48));
        *(_DWORD *)(v6 + 48) = _mm_cvtsi128_si32(v13);
        *(float *)v13.m128i_i32 = clamp01<float>((const float *)(v6 + 64));
        *(_DWORD *)(v6 + 64) = _mm_cvtsi128_si32(v13);
        v13 = (__m128i)*(unsigned int *)(v6 + 48);
        if ( *(float *)v13.m128i_i32 < *(float *)(v6 + 64) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->m_PolyCount);
          }
          m_PolyCount = this->m_PolyCount;
          v18 = *(_BYTE *)(((unsigned __int64)&this->m_MaxPolys >> 3) + 0x7FFF8000);
          LOBYTE(p_m_End) = v18 != 0;
          if ( v18 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v18 )
            __asan_report_load4(&this->m_MaxPolys);
          if ( m_PolyCount >= this->m_MaxPolys )
            break;
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Polys >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Polys, p_m_End);
          m_Polys = this->m_Polys;
          v20 = *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000);
          LOBYTE(p_m_End) = v20 != 0;
          if ( v20 != 0 && v20 <= 3 )
            __asan_report_load4(&this->m_PolyCount);
          v21 = (unsigned __int64)&m_Polys[this->m_PolyCount];
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_store8();
          *(_QWORD *)v21 = ref;
          if ( *(_BYTE *)(((unsigned __int64)&this->m_OverlapMinMax >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_OverlapMinMax, p_m_End);
          v22 = (unsigned __int64)&this->m_OverlapMinMax[2 * this->m_PolyCount];
          v23 = *(_DWORD *)(v6 + 48);
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(this->m_OverlapMinMax) + 8 * LOBYTE(this->m_PolyCount)) & 7) + 3) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&this->m_OverlapMinMax[2 * this->m_PolyCount]);
          }
          *(_DWORD *)v22 = v23;
          v24 = (unsigned __int64)&this->m_OverlapMinMax[2 * this->m_PolyCount + 1];
          v13 = (__m128i)*(unsigned int *)(v6 + 64);
          v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
          LOBYTE(p_m_End) = v25 != 0;
          if ( v25 != 0
            && (char)(((LOBYTE(this->m_OverlapMinMax) + 4 * (2 * LOBYTE(this->m_PolyCount) + 1)) & 7) + 3) >= v25 )
          {
            __asan_report_store4(&this->m_OverlapMinMax[2 * this->m_PolyCount + 1]);
          }
          *(_DWORD *)v24 = v13.m128i_i32[0];
          ++this->m_PolyCount;
        }
      }
    }
  }
  if ( v32 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 2710: range 000000000CC321BE-000000000CC33E72
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMesh::ConnectOffMeshConnection(
        NavMesh *const this,
        unsigned int index,
        float connectRadius,
        float connectHeight)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r12
  NavMeshPolyRef v8; // rsi
  float v9; // r14d
  __int64 v10; // xmm0_8
  int v11; // xmm1_4
  const Vector3f *v12; // rdi
  const Vector3f *v13; // rdi
  char v14; // dl
  bool v15; // r8
  char v16; // dl
  const Vector3f *v17; // rcx
  const Vector3f *v18; // rdi
  NavMeshPolyRef v19; // rsi
  NavMeshStatus v20; // eax
  int v21; // ecx
  char v22; // dl
  int v23; // ecx
  char v24; // dl
  unsigned __int8 *p_edge; // rdi
  unsigned int v26; // ecx
  char v27; // al
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  char v30; // dl
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int v34; // ecx
  char v35; // al
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  char v38; // dl
  unsigned __int64 v39; // rax
  NavMeshStatus TileAndPolyByRef; // eax
  char v41; // dl
  bool v42; // di
  char v43; // dl
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  char v46; // cl
  bool v47; // r8
  char v48; // cl
  __int64 v49; // rax
  unsigned __int8 bmax; // cl
  unsigned __int8 *p_bmin; // rdi
  unsigned int v52; // ecx
  char v53; // al
  unsigned __int8 v54; // cl
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  char v57; // dl
  unsigned __int64 v58; // rdi
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned int v61; // ecx
  char v62; // al
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  char v65; // dl
  unsigned __int8 tmin; // [rsp+2Ah] [rbp-416h]
  unsigned __int8 tmax; // [rsp+2Bh] [rbp-415h]
  int i; // [rsp+2Ch] [rbp-414h]
  int j; // [rsp+30h] [rbp-410h]
  int i_0; // [rsp+34h] [rbp-40Ch]
  int idx_1; // [rsp+38h] [rbp-408h]
  int idx_2; // [rsp+3Ch] [rbp-404h]
  unsigned int ip_1; // [rsp+40h] [rbp-400h]
  int idx; // [rsp+44h] [rbp-3FCh]
  int idx_0; // [rsp+48h] [rbp-3F8h]
  unsigned int ip_0; // [rsp+4Ch] [rbp-3F4h]
  NavMeshPolyRef con; // [rsp+50h] [rbp-3F0h]
  NavMeshPolyRef conRef; // [rsp+58h] [rbp-3E8h]
  NavMeshPolyRef mappedRef_0; // [rsp+60h] [rbp-3E0h]
  NavMeshLink *link_1; // [rsp+68h] [rbp-3D8h]
  NavMeshLink *link_2; // [rsp+70h] [rbp-3D0h]
  NavMeshPolyRef mappedRef; // [rsp+78h] [rbp-3C8h]
  NavMeshLink *link; // [rsp+80h] [rbp-3C0h]
  NavMeshLink *link_0; // [rsp+88h] [rbp-3B8h]
  char v89[944]; // [rsp+90h] [rbp-3B0h] BYREF

  v4 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(896LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 896);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 10 count:2729 64 8 15 mappedTile:2809 96 8 15 mappedPoly:2810 128 12 11 extent:2722 160 1"
                        "2 8 ext:2795 192 12 14 searchPos:2801 224 12 14 mappedPos:2802 256 256 10 polys:2727 576 256 18 "
                        "overlapMinMax:2728";
  *(_QWORD *)(v4 + 16) = NavMesh::ConnectOffMeshConnection;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -219020288;
  v7[536862725] = -219020288;
  v7[536862726] = -219020288;
  v7[536862727] = -219020288;
  v7[536862736] = -218959118;
  v7[536862737] = -218959118;
  v7[536862746] = -202116109;
  v7[536862747] = -202116109;
  con = (NavMeshPolyRef)FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((con + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((con + 192) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(con + 192);
  conRef = NavMeshPolyRefHelper::EncodeLinkId(*(_DWORD *)(con + 192), index, 0);
  v8 = (((_BYTE)con - 92) & 7u) + 3;
  if ( *(_BYTE *)(((con + 164) >> 3) + 0x7FFF8000) != 0
    && (char)(((con - 92) & 7) + 3) >= *(_BYTE *)(((con + 164) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(con + 164);
  }
  if ( *(float *)(con + 164) <= 0.0 )
  {
    Vector3f::Vector3f((Vector3f *const)(v4 + 160), connectRadius, connectHeight, connectRadius);
    for ( i_0 = 0; i_0 <= 1; ++i_0 )
    {
      if ( *(_BYTE *)(((48LL * i_0 + 64 + con + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(48LL * i_0 + 64 + con + 8, v8);
      if ( !*(_QWORD *)(con + 48LL * i_0 + 72) )
      {
        v39 = 48LL * i_0 + 32 + con;
        if ( *(char *)((v39 >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v39 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v39 + 11) & 7) >= *(_BYTE *)(((v39 + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v39, 12LL);
        }
        *(_QWORD *)(v4 + 192) = *(_QWORD *)(con + 48LL * i_0 + 32);
        *(_DWORD *)(v4 + 200) = *(_DWORD *)(con + 48LL * i_0 + 40);
        Vector3f::Vector3f((Vector3f *const)(v4 + 224));
        if ( *(_BYTE *)((con >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((con >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(con);
        v8 = *(unsigned int *)con;
        mappedRef_0 = NavMesh::FindNearestPoly(
                        this,
                        v8,
                        (const Vector3f *)(v4 + 192),
                        (const Vector3f *)(v4 + 160),
                        (Vector3f *)(v4 + 224));
        if ( mappedRef_0 )
        {
          v8 = v4 + 192;
          if ( TestPointInCylinder(v4 + 224, v4 + 192, connectHeight, connectRadius) )
          {
            *(_QWORD *)(v4 + 64) = 0LL;
            *(_QWORD *)(v4 + 96) = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->m_defaultMemoryCallback, v8);
            v8 = mappedRef_0;
            TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                                 this,
                                 mappedRef_0,
                                 (NavMeshTile **)(v4 + 64),
                                 (const NavMeshPoly **)(v4 + 96),
                                 this->m_defaultMemoryCallback);
            if ( !NavMeshStatusFailed(TileAndPolyByRef) )
            {
              v41 = *(_BYTE *)(((48LL * i_0 + 44 + con + 12) >> 3) + 0x7FFF8000);
              v42 = (char)((48 * i_0 + 44 + con + 12) & 7) >= v41 && v41 != 0;
              v43 = *(_BYTE *)(((48LL * i_0 + 44 + con + 23) >> 3) + 0x7FFF8000);
              if ( v42 || v43 != 0 && (char)((48 * i_0 + 44 + con + 23) & 7) >= v43 )
                __asan_report_store_n(48LL * i_0 + 44 + con + 12, 12LL);
              v44 = con + 48LL * i_0 + 56;
              *(_QWORD *)v44 = *(_QWORD *)(v4 + 224);
              *(_DWORD *)(v44 + 8) = *(_DWORD *)(v4 + 232);
              v45 = 48LL * i_0 + 44 + con + 12;
              v46 = *(_BYTE *)(((48LL * i_0 + 32 + con + 12) >> 3) + 0x7FFF8000);
              v47 = (char)((48 * i_0 + 32 + con + 12) & 7) >= v46 && v46 != 0;
              v48 = *(_BYTE *)(((48LL * i_0 + 32 + con + 23) >> 3) + 0x7FFF8000);
              if ( v47 || v48 != 0 && (char)((48 * i_0 + 32 + con + 23) & 7) >= v48 )
                __asan_report_store_n(48LL * i_0 + 32 + con + 12, 12LL);
              if ( (char)(v45 & 7) >= *(_BYTE *)((v45 >> 3) + 0x7FFF8000) && *(_BYTE *)((v45 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((v45 + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((v45 + 11) & 7) >= *(_BYTE *)(((v45 + 11) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load_n(v45, 12LL);
              }
              v8 = con;
              v49 = con + 48LL * i_0 + 44;
              *(_QWORD *)v49 = *(_QWORD *)v45;
              *(_DWORD *)(v49 + 8) = *(_DWORD *)(v45 + 8);
              if ( *(_BYTE *)(((48LL * i_0 + 64 + con + 8) >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *(_QWORD *)(con + 48LL * i_0 + 72) = mappedRef_0;
              idx_1 = FreeList<NavMeshLink,false>::Alloc(&this->m_links);
              if ( idx_1 != -1 )
              {
                link_1 = FreeList<NavMeshLink,false>::operator[](&this->m_links, idx_1);
                if ( *(_BYTE *)(((unsigned __int64)link_1 >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                link_1->ref = mappedRef_0;
                if ( *(_BYTE *)(((unsigned __int64)&link_1->edge >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)link_1 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link_1->edge >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_store1(&link_1->edge);
                }
                link_1->edge = i_0;
                if ( *(_BYTE *)(((unsigned __int64)&link_1->side >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)link_1 + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link_1->side >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_store1(&link_1->side);
                }
                link_1->side = -1;
                if ( *(_BYTE *)(((unsigned __int64)&link_1->bmax >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)link_1 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link_1->bmax >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_store1(&link_1->bmax);
                }
                link_1->bmax = 0;
                bmax = link_1->bmax;
                p_bmin = (unsigned __int8 *)(((_BYTE)link_1 + 14) & 7);
                if ( *(_BYTE *)(((unsigned __int64)&link_1->bmin >> 3) + 0x7FFF8000) != 0
                  && (char)p_bmin >= *(_BYTE *)(((unsigned __int64)&link_1->bmin >> 3) + 0x7FFF8000) )
                {
                  p_bmin = &link_1->bmin;
                  __asan_report_store1(&link_1->bmin);
                }
                link_1->bmin = bmax;
                if ( *(_BYTE *)(((con + 188) >> 3) + 0x7FFF8000) != 0
                  && (char)(((con - 68) & 7) + 3) >= *(_BYTE *)(((con + 188) >> 3) + 0x7FFF8000) )
                {
                  p_bmin = (unsigned __int8 *)(con + 188);
                  __asan_report_load4(con + 188);
                }
                if ( idx_1 == *(_DWORD *)(con + 188) )
                {
                  __asan_handle_no_return(p_bmin);
                  __assert_fail(
                    "idx != con.firstLink",
                    "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                    0xB0Bu,
                    "void NavMesh::ConnectOffMeshConnection(unsigned int, float, float)");
                }
                v8 = (((_BYTE)con - 68) & 7u) + 3;
                if ( *(_BYTE *)(((con + 188) >> 3) + 0x7FFF8000) != 0
                  && (char)(((con - 68) & 7) + 3) >= *(_BYTE *)(((con + 188) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(con + 188);
                }
                v52 = *(_DWORD *)(con + 188);
                v53 = *(_BYTE *)(((unsigned __int64)&link_1->next >> 3) + 0x7FFF8000);
                LOBYTE(v8) = v53 != 0;
                if ( v53 != 0 && v53 <= 3 )
                  __asan_report_store4(&link_1->next);
                link_1->next = v52;
                *(_DWORD *)(con + 188) = idx_1;
              }
              if ( !i_0 )
                goto LABEL_139;
              if ( i_0 == 1 )
              {
                v8 = ((_BYTE)con - 84) & 7;
                if ( *(_BYTE *)(((con + 172) >> 3) + 0x7FFF8000) != 0
                  && (char)v8 >= *(_BYTE *)(((con + 172) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(con + 172);
                }
                if ( (*(_BYTE *)(con + 172) & 1) != 0 )
                {
LABEL_139:
                  idx_2 = FreeList<NavMeshLink,false>::Alloc(&this->m_links);
                  if ( idx_2 != -1 )
                  {
                    link_2 = FreeList<NavMeshLink,false>::operator[](&this->m_links, idx_2);
                    if ( *(_BYTE *)(((unsigned __int64)link_2 >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    link_2->ref = conRef;
                    if ( *(_BYTE *)(((unsigned __int64)&link_2->edge >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link_2->edge >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_2->edge);
                    }
                    link_2->edge = i_0;
                    if ( *(_BYTE *)(((unsigned __int64)&link_2->side >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_2 + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link_2->side >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_2->side);
                    }
                    link_2->side = -1;
                    if ( *(_BYTE *)(((unsigned __int64)&link_2->bmax >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_2 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link_2->bmax >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_2->bmax);
                    }
                    link_2->bmax = 0;
                    v54 = link_2->bmax;
                    if ( *(_BYTE *)(((unsigned __int64)&link_2->bmin >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_2 + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link_2->bmin >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_2->bmin);
                    }
                    link_2->bmin = v54;
                    v8 = *(_QWORD *)(v4 + 96);
                    ip_1 = GetPolyIndex(*(const NavMeshTile **)(v4 + 64), (const NavMeshPoly *)v8);
                    v55 = *(_QWORD *)(v4 + 64);
                    if ( *(_BYTE *)(((unsigned __int64)(v55 + 24) >> 3) + 0x7FFF8000) )
                      v55 = __asan_report_load8(v55 + 24, v8);
                    v56 = *(_QWORD *)(v55 + 24) + 4LL * ip_1;
                    v57 = *(_BYTE *)((v56 >> 3) + 0x7FFF8000);
                    LOBYTE(v8) = v57 != 0;
                    v58 = (unsigned int)(v56 & 7) + 3;
                    if ( v57 != 0 && (char)((v56 & 7) + 3) >= v57 )
                    {
                      v58 = v56;
                      __asan_report_load4(v56);
                    }
                    if ( idx_2 == *(_DWORD *)v56 )
                    {
                      __asan_handle_no_return(v58);
                      __assert_fail(
                        "idx != mappedTile->polyLinks[ip]",
                        "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                        0xB20u,
                        "void NavMesh::ConnectOffMeshConnection(unsigned int, float, float)");
                    }
                    v59 = *(_QWORD *)(v4 + 64);
                    if ( *(_BYTE *)(((unsigned __int64)(v59 + 24) >> 3) + 0x7FFF8000) )
                      v59 = __asan_report_load8(v59 + 24, v8);
                    v60 = *(_QWORD *)(v59 + 24) + 4LL * ip_1;
                    if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) != 0
                      && (char)((v60 & 7) + 3) >= *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v60);
                    }
                    v61 = *(_DWORD *)v60;
                    v62 = *(_BYTE *)(((unsigned __int64)&link_2->next >> 3) + 0x7FFF8000);
                    LOBYTE(v8) = v62 != 0;
                    if ( v62 != 0 && v62 <= 3 )
                      __asan_report_store4(&link_2->next);
                    link_2->next = v61;
                    v63 = *(_QWORD *)(v4 + 64);
                    if ( *(_BYTE *)(((unsigned __int64)(v63 + 24) >> 3) + 0x7FFF8000) )
                      v63 = __asan_report_load8(v63 + 24, v8);
                    v64 = *(_QWORD *)(v63 + 24) + 4LL * ip_1;
                    v65 = *(_BYTE *)((v64 >> 3) + 0x7FFF8000);
                    LOBYTE(v8) = v65 != 0;
                    if ( v65 != 0 && (char)((v64 & 7) + 3) >= v65 )
                      __asan_report_store4(v64);
                    *(_DWORD *)v64 = idx_2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    NavMesh::UnconnectOffMeshConnection(this, index);
    for ( i = 0; i <= 1; ++i )
    {
      if ( *(_BYTE *)(((con + 164) >> 3) + 0x7FFF8000) != 0
        && (char)(((con - 92) & 7) + 3) >= *(_BYTE *)(((con + 164) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(con + 164);
      }
      v9 = *(float *)(con + 164);
      if ( i )
      {
        *(Vector3f *)(v4 + 160) = NormalizeSafe((const Vector3f *)(con + 128), &Vector3f::zero);
        *(Vector3f *)&v10 = Vector3f::operator-((const Vector3f *const)(v4 + 160));
      }
      else
      {
        *(Vector3f *)&v10 = NormalizeSafe((const Vector3f *)(con + 128), &Vector3f::zero);
      }
      *(_QWORD *)(v4 + 192) = v10;
      *(_DWORD *)(v4 + 200) = v11;
      *(Vector3f *)(v4 + 224) = operator*((const Vector3f *)(v4 + 192), v9);
      *(Vector3f *)(v4 + 128) = operator*((const Vector3f *)(v4 + 224), 0.5);
      v12 = (const Vector3f *)(48LL * i + 32 + con);
      if ( (char)((48 * i + 32 + con + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v12[1] >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v12[1] >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v12[1].z + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((48 * i + 32 + con + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v12[1].z + 3) >> 3) + 0x7FFF8000) )
      {
        v12 = (const Vector3f *)(48LL * i + 32 + con + 12);
        __asan_report_store_n(v12, 12LL);
      }
      *(Vector3f *)(con + 48LL * i + 44) = operator-(v12, (const Vector3f *)(v4 + 128));
      v13 = (const Vector3f *)(48LL * i + 32 + con);
      v14 = *(_BYTE *)(((48LL * i + 44 + con + 12) >> 3) + 0x7FFF8000);
      v15 = (char)((48 * i + 44 + con + 12) & 7) >= v14 && v14 != 0;
      v16 = *(_BYTE *)(((48LL * i + 44 + con + 23) >> 3) + 0x7FFF8000);
      if ( v15 || v16 != 0 && (char)((48 * i + 44 + con + 23) & 7) >= v16 )
      {
        v13 = (const Vector3f *)(48LL * i + 44 + con + 12);
        __asan_report_store_n(v13, 12LL);
      }
      *(Vector3f *)(con + 48LL * i + 56) = operator+(v13, (const Vector3f *)(v4 + 128));
      *(_DWORD *)(v4 + 48) = 0;
      v17 = (const Vector3f *)(48LL * i + 44 + con + 12);
      v18 = (const Vector3f *)(48LL * i + 32 + con + 12);
      if ( *(_BYTE *)((con >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((con >> 3) + 0x7FFF8000) <= 3 )
      {
        v18 = (const Vector3f *)con;
        __asan_report_load4(con);
      }
      v19 = *(unsigned int *)con;
      NavMesh::FindPolygonsOverlappingSegment(
        this,
        v19,
        v18,
        v17,
        connectHeight,
        (NavMeshPolyRef *)(v4 + 256),
        (float *)(v4 + 576),
        (int *)(v4 + 48),
        32);
      for ( j = 0; j < *(_DWORD *)(v4 + 48); ++j )
      {
        if ( *(_BYTE *)(((8LL * j + v4 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_load8(8LL * j + v4 + 256, v19);
        mappedRef = *(_QWORD *)&v6[8 * j - 640];
        if ( mappedRef )
        {
          *(_QWORD *)(v4 + 64) = 0LL;
          *(_QWORD *)(v4 + 96) = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_defaultMemoryCallback, v19);
          v19 = mappedRef;
          v20 = NavMesh::GetTileAndPolyByRef(
                  this,
                  mappedRef,
                  (NavMeshTile **)(v4 + 64),
                  (const NavMeshPoly **)(v4 + 96),
                  this->m_defaultMemoryCallback);
          if ( !NavMeshStatusFailed(v20) )
          {
            if ( *(_BYTE *)(((48LL * i + 64 + con + 8) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(_QWORD *)(con + 48LL * i + 72) = mappedRef;
            v21 = 2 * j;
            v22 = *(_BYTE *)(((8LL * j + v4 + 576) >> 3) + 0x7FFF8000);
            if ( v22 != 0 && (char)(((8 * j + v4 + 64) & 7) + 3) >= v22 )
              __asan_report_load4(8LL * j + v4 + 576);
            tmin = (int)(float)(255.0 * *(float *)&v6[4 * v21 - 320]);
            v23 = 2 * j + 1;
            v24 = *(_BYTE *)(((4LL * v23 + v4 + 576) >> 3) + 0x7FFF8000);
            LOBYTE(v19) = v24 != 0;
            if ( v24 != 0 && (char)(((4 * (2 * j + 1) + v4 + 64) & 7) + 3) >= v24 )
              __asan_report_load4(4LL * v23 + v4 + 576);
            tmax = (int)(float)(255.0 * *(float *)&v6[4 * v23 - 320]);
            if ( tmin < tmax )
            {
              idx = FreeList<NavMeshLink,false>::Alloc(&this->m_links);
              if ( idx != -1 )
              {
                link = FreeList<NavMeshLink,false>::operator[](&this->m_links, idx);
                if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                link->ref = mappedRef;
                p_edge = (unsigned __int8 *)(((_BYTE)link + 12) & 7);
                if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
                  && (char)p_edge >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
                {
                  p_edge = &link->edge;
                  __asan_report_store1(&link->edge);
                }
                link->edge = i;
                if ( *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)link + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) )
                {
                  p_edge = &link->side;
                  __asan_report_store1(&link->side);
                }
                link->side = -1;
                if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) )
                {
                  p_edge = &link->bmin;
                  __asan_report_store1(&link->bmin);
                }
                link->bmin = tmin;
                if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)link + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) )
                {
                  p_edge = &link->bmax;
                  __asan_report_store1(&link->bmax);
                }
                link->bmax = tmax;
                if ( *(_BYTE *)(((con + 188) >> 3) + 0x7FFF8000) != 0
                  && (char)(((con - 68) & 7) + 3) >= *(_BYTE *)(((con + 188) >> 3) + 0x7FFF8000) )
                {
                  p_edge = (unsigned __int8 *)(con + 188);
                  __asan_report_load4(con + 188);
                }
                if ( idx == *(_DWORD *)(con + 188) )
                {
                  __asan_handle_no_return(p_edge);
                  __assert_fail(
                    "idx != con.firstLink",
                    "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                    0xACAu,
                    "void NavMesh::ConnectOffMeshConnection(unsigned int, float, float)");
                }
                v19 = (((_BYTE)con - 68) & 7u) + 3;
                if ( *(_BYTE *)(((con + 188) >> 3) + 0x7FFF8000) != 0
                  && (char)(((con - 68) & 7) + 3) >= *(_BYTE *)(((con + 188) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(con + 188);
                }
                v26 = *(_DWORD *)(con + 188);
                v27 = *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000);
                LOBYTE(v19) = v27 != 0;
                if ( v27 != 0 && v27 <= 3 )
                  __asan_report_store4(&link->next);
                link->next = v26;
                *(_DWORD *)(con + 188) = idx;
              }
              if ( !i )
                goto LABEL_62;
              if ( i == 1 )
              {
                v19 = ((_BYTE)con - 84) & 7;
                if ( *(_BYTE *)(((con + 172) >> 3) + 0x7FFF8000) != 0
                  && (char)v19 >= *(_BYTE *)(((con + 172) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(con + 172);
                }
                if ( (*(_BYTE *)(con + 172) & 1) != 0 )
                {
LABEL_62:
                  idx_0 = FreeList<NavMeshLink,false>::Alloc(&this->m_links);
                  if ( idx_0 != -1 )
                  {
                    link_0 = FreeList<NavMeshLink,false>::operator[](&this->m_links, idx_0);
                    if ( *(_BYTE *)(((unsigned __int64)link_0 >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    link_0->ref = conRef;
                    if ( *(_BYTE *)(((unsigned __int64)&link_0->edge >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_0 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->edge >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_0->edge);
                    }
                    link_0->edge = i;
                    if ( *(_BYTE *)(((unsigned __int64)&link_0->side >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_0 + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->side >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_0->side);
                    }
                    link_0->side = -1;
                    if ( *(_BYTE *)(((unsigned __int64)&link_0->bmin >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_0 + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->bmin >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_0->bmin);
                    }
                    link_0->bmin = tmin;
                    if ( *(_BYTE *)(((unsigned __int64)&link_0->bmax >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_0 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->bmax >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_0->bmax);
                    }
                    link_0->bmax = tmax;
                    v19 = *(_QWORD *)(v4 + 96);
                    ip_0 = GetPolyIndex(*(const NavMeshTile **)(v4 + 64), (const NavMeshPoly *)v19);
                    v28 = *(_QWORD *)(v4 + 64);
                    if ( *(_BYTE *)(((unsigned __int64)(v28 + 24) >> 3) + 0x7FFF8000) )
                      v28 = __asan_report_load8(v28 + 24, v19);
                    v29 = *(_QWORD *)(v28 + 24) + 4LL * ip_0;
                    v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
                    LOBYTE(v19) = v30 != 0;
                    v31 = (unsigned int)(v29 & 7) + 3;
                    if ( v30 != 0 && (char)((v29 & 7) + 3) >= v30 )
                    {
                      v31 = v29;
                      __asan_report_load4(v29);
                    }
                    if ( idx_0 == *(_DWORD *)v29 )
                    {
                      __asan_handle_no_return(v31);
                      __assert_fail(
                        "idx != mappedTile->polyLinks[ip]",
                        "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                        0xAE0u,
                        "void NavMesh::ConnectOffMeshConnection(unsigned int, float, float)");
                    }
                    v32 = *(_QWORD *)(v4 + 64);
                    if ( *(_BYTE *)(((unsigned __int64)(v32 + 24) >> 3) + 0x7FFF8000) )
                      v32 = __asan_report_load8(v32 + 24, v19);
                    v33 = *(_QWORD *)(v32 + 24) + 4LL * ip_0;
                    if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) != 0
                      && (char)((v33 & 7) + 3) >= *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v33);
                    }
                    v34 = *(_DWORD *)v33;
                    v35 = *(_BYTE *)(((unsigned __int64)&link_0->next >> 3) + 0x7FFF8000);
                    LOBYTE(v19) = v35 != 0;
                    if ( v35 != 0 && v35 <= 3 )
                      __asan_report_store4(&link_0->next);
                    link_0->next = v34;
                    v36 = *(_QWORD *)(v4 + 64);
                    if ( *(_BYTE *)(((unsigned __int64)(v36 + 24) >> 3) + 0x7FFF8000) )
                      v36 = __asan_report_load8(v36 + 24, v19);
                    v37 = *(_QWORD *)(v36 + 24) + 4LL * ip_0;
                    v38 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                    LOBYTE(v19) = v38 != 0;
                    if ( v38 != 0 && (char)((v37 & 7) + 3) >= v38 )
                      __asan_report_store4(v37);
                    *(_DWORD *)v37 = idx_0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v89 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8068) = 0LL;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2858: range 000000000CC33E74-000000000CC34F99
NavMeshPolyRef __cdecl NavMesh::AddOffMeshConnection(
        NavMesh *const this,
        const OffMeshConnectionParams *params,
        float connectRadius,
        float connectHeight)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  NavMeshTileRef tileRef; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  NavMeshTileRef v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned int m_firstOffMeshConnection; // ecx
  const Vector3f *p_axisY; // rdi
  __int64 v21; // rsi
  const Vector3f *p_axisX; // rdi
  float width; // xmm0_4
  float costModifier; // xmm0_4
  unsigned __int8 linkDirection; // cl
  unsigned int flags; // ecx
  unsigned __int8 area; // cl
  unsigned __int16 linkType; // cx
  int userID; // ecx
  int agentTypeID; // ecx
  float v31; // r14d
  NavMeshPolyRef result; // rax
  unsigned int index; // [rsp+20h] [rbp-190h]
  unsigned int salt; // [rsp+24h] [rbp-18Ch]
  OffMeshConnection *con; // [rsp+28h] [rbp-188h]
  NavMeshPolyRef dynRef; // [rsp+30h] [rbp-180h]
  Vector3f v41; // [rsp+38h] [rbp-178h] BYREF
  Vector3f inV; // [rsp+44h] [rbp-16Ch] BYREF
  OffMeshConnection v43; // [rsp+50h] [rbp-160h] BYREF
  char v44[144]; // [rsp+120h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 12 8 dir:2875 64 12 11 extent:2893";
  *(_QWORD *)(v4 + 16) = NavMesh::AddOffMeshConnection;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -202177536;
  index = FreeList<OffMeshConnection,false>::Alloc(&this->m_offMeshConnections);
  con = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&con->salt);
  }
  salt = con->salt;
  OffMeshConnection::OffMeshConnection(&v43);
  if ( *(char *)(((unsigned __int64)con >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&con->next + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)con - 57) & 7) >= *(_BYTE *)((((unsigned __int64)&con->next + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(con, 200LL);
  }
  v7 = *(_QWORD *)&v43.bounds.m_Min.y;
  *(_QWORD *)&con->agentTypeID = *(_QWORD *)&v43.agentTypeID;
  *(_QWORD *)&con->bounds.m_Min.y = v7;
  v8 = *(_QWORD *)&v43.bounds.m_Max.z;
  *(_QWORD *)&con->bounds.m_Max.x = *(_QWORD *)&v43.bounds.m_Max.x;
  *(_QWORD *)&con->bounds.m_Max.z = v8;
  v9 = *(_QWORD *)&v43.endPoints[0].pos.z;
  *(_QWORD *)&con->endPoints[0].pos.x = *(_QWORD *)&v43.endPoints[0].pos.x;
  *(_QWORD *)&con->endPoints[0].pos.z = v9;
  v10 = *(_QWORD *)&v43.endPoints[0].mapped[1].x;
  *(_QWORD *)&con->endPoints[0].mapped[0].y = *(_QWORD *)&v43.endPoints[0].mapped[0].y;
  *(_QWORD *)&con->endPoints[0].mapped[1].x = v10;
  tileRef = v43.endPoints[0].tileRef;
  *(_QWORD *)&con->endPoints[0].mapped[1].z = *(_QWORD *)&v43.endPoints[0].mapped[1].z;
  con->endPoints[0].tileRef = tileRef;
  v12 = *(_QWORD *)&v43.endPoints[1].pos.z;
  *(_QWORD *)&con->endPoints[1].pos.x = *(_QWORD *)&v43.endPoints[1].pos.x;
  *(_QWORD *)&con->endPoints[1].pos.z = v12;
  v13 = *(_QWORD *)&v43.endPoints[1].mapped[1].x;
  *(_QWORD *)&con->endPoints[1].mapped[0].y = *(_QWORD *)&v43.endPoints[1].mapped[0].y;
  *(_QWORD *)&con->endPoints[1].mapped[1].x = v13;
  v14 = v43.endPoints[1].tileRef;
  *(_QWORD *)&con->endPoints[1].mapped[1].z = *(_QWORD *)&v43.endPoints[1].mapped[1].z;
  con->endPoints[1].tileRef = v14;
  v15 = *(_QWORD *)&v43.axisX.z;
  *(_QWORD *)&con->axisX.x = *(_QWORD *)&v43.axisX.x;
  *(_QWORD *)&con->axisX.z = v15;
  v16 = *(_QWORD *)&v43.axisZ.x;
  *(_QWORD *)&con->axisY.y = *(_QWORD *)&v43.axisY.y;
  *(_QWORD *)&con->axisZ.x = v16;
  v17 = *(_QWORD *)&v43.costModifier;
  *(_QWORD *)&con->axisZ.z = *(_QWORD *)&v43.axisZ.z;
  *(_QWORD *)&con->costModifier = v17;
  v18 = *(_QWORD *)&v43.userID;
  *(_QWORD *)&con->flags = *(_QWORD *)&v43.flags;
  *(_QWORD *)&con->userID = v18;
  *(_QWORD *)&con->salt = *(_QWORD *)&v43.salt;
  OffMeshConnection::~OffMeshConnection(&v43);
  if ( *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&con->salt);
  }
  con->salt = salt;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_firstOffMeshConnection);
  }
  m_firstOffMeshConnection = this->m_firstOffMeshConnection;
  if ( *(_BYTE *)(((unsigned __int64)&con->next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->next >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&con->next);
  }
  con->next = m_firstOffMeshConnection;
  this->m_firstOffMeshConnection = index;
  if ( *(char *)(((unsigned __int64)con->endPoints >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)con + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[0].pos.z + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store_n(con->endPoints, 12LL);
  }
  if ( ((unsigned __int8)params & 7) >= *(_BYTE *)(((unsigned __int64)params >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)params >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&params->startPos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)params + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&params->startPos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(params, 12LL);
  }
  *(_QWORD *)&con->endPoints[0].pos.x = *(_QWORD *)&params->startPos.x;
  con->endPoints[0].pos.z = params->startPos.z;
  if ( *(char *)(((unsigned __int64)&con->endPoints[1] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)con + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&con->endPoints[1].pos.z + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store_n(&con->endPoints[1], 12LL);
  }
  if ( (((unsigned __int8)params + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&params->endPos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&params->endPos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&params->endPos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)params + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&params->endPos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&params->endPos, 12LL);
  }
  con->endPoints[1].pos = params->endPos;
  inV = operator-(&params->endPos, &params->startPos);
  *(Vector3f *)(v4 + 32) = NormalizeSafe(&inV, &Vector3f::zero);
  if ( Magnitude((const Vector3f *)(v4 + 32)) < 0.0000099999997 )
  {
    Vector3f::Vector3f(&inV, 0.0, 0.0, 1.0);
    *(Vector3f *)(v4 + 32) = inV;
  }
  if ( (((unsigned __int8)con - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&con->axisY >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&con->axisY >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&con->axisY.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)con - 105) & 7) >= *(_BYTE *)((((unsigned __int64)&con->axisY.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&con->axisY, 12LL);
  }
  if ( (((unsigned __int8)params + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&params->up >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&params->up >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&params->up.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)params + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&params->up.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&params->up, 12LL);
  }
  con->axisY = params->up;
  p_axisY = &con->axisY;
  if ( *(char *)(((unsigned __int64)&con->axisX >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&con->axisX.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)con - 117) & 7) >= *(_BYTE *)((((unsigned __int64)&con->axisX.z + 3) >> 3) + 0x7FFF8000) )
  {
    p_axisY = &con->axisX;
    __asan_report_store_n(&con->axisX, 12LL);
  }
  con->axisX = Cross(p_axisY, (const Vector3f *)(v4 + 32));
  v21 = (__int64)&con->axisY;
  p_axisX = &con->axisX;
  if ( *(char *)(((unsigned __int64)&con->axisZ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&con->axisZ.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)con - 93) & 7) >= *(_BYTE *)((((unsigned __int64)&con->axisZ.z + 3) >> 3) + 0x7FFF8000) )
  {
    v21 = 12LL;
    p_axisX = &con->axisZ;
    __asan_report_store_n(&con->axisZ, 12LL);
  }
  con->axisZ = Cross(p_axisX, (const Vector3f *)v21);
  if ( *(_BYTE *)(((unsigned __int64)&params->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)params + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&params->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&params->width);
  }
  width = params->width;
  if ( *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&con->width);
  }
  con->width = width;
  if ( *(_BYTE *)(((unsigned __int64)&params->costModifier >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)params + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&params->costModifier >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&params->costModifier);
  }
  costModifier = params->costModifier;
  if ( *(_BYTE *)(((unsigned __int64)&con->costModifier >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->costModifier >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&con->costModifier);
  }
  con->costModifier = costModifier;
  if ( *(_BYTE *)(((unsigned __int64)&params->linkDirection >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)params + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&params->linkDirection >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&params->linkDirection);
  }
  linkDirection = params->linkDirection;
  if ( *(_BYTE *)(((unsigned __int64)&con->linkDirection >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)con - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&con->linkDirection >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&con->linkDirection);
  }
  con->linkDirection = linkDirection;
  if ( *(_BYTE *)(((unsigned __int64)&params->flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)params + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&params->flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&params->flags);
  }
  flags = params->flags;
  if ( *(_BYTE *)(((unsigned __int64)&con->flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&con->flags);
  }
  con->flags = flags;
  if ( *(_BYTE *)(((unsigned __int64)&params->area >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)params + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&params->area >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&params->area);
  }
  area = params->area;
  if ( *(_BYTE *)(((unsigned __int64)&con->area >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)con - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&con->area >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&con->area);
  }
  con->area = area;
  if ( *(_BYTE *)(((unsigned __int64)&params->linkType >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)params + 54) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&params->linkType >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&params->linkType);
  }
  linkType = params->linkType;
  if ( *(_BYTE *)(((unsigned __int64)&con->linkType >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 74) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&con->linkType >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&con->linkType);
  }
  con->linkType = linkType;
  if ( *(_BYTE *)(((unsigned __int64)&params->userID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)params + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&params->userID >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&params->userID);
  }
  userID = params->userID;
  if ( *(_BYTE *)(((unsigned __int64)&con->userID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->userID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&con->userID);
  }
  con->userID = userID;
  if ( *(_BYTE *)(((unsigned __int64)&params->agentTypeID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)params + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&params->agentTypeID >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&params->agentTypeID);
  }
  agentTypeID = params->agentTypeID;
  if ( *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(con);
  }
  con->agentTypeID = agentTypeID;
  MinMaxAABB::Init(&con->bounds);
  if ( *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&con->width);
  }
  if ( con->width <= 0.0 )
  {
    MinMaxAABB::Encapsulate(&con->bounds, &con->endPoints[0].pos);
    MinMaxAABB::Encapsulate(&con->bounds, &con->endPoints[1].pos);
  }
  else
  {
    v31 = con->width;
    v41 = NormalizeSafe(&con->axisX, &Vector3f::zero);
    inV = operator*(&v41, v31);
    *(Vector3f *)(v4 + 64) = operator*(&inV, 0.5);
    inV = operator-(&con->endPoints[0].pos, (const Vector3f *)(v4 + 64));
    MinMaxAABB::Encapsulate(&con->bounds, &inV);
    inV = operator+(&con->endPoints[0].pos, (const Vector3f *)(v4 + 64));
    MinMaxAABB::Encapsulate(&con->bounds, &inV);
    inV = operator-(&con->endPoints[1].pos, (const Vector3f *)(v4 + 64));
    MinMaxAABB::Encapsulate(&con->bounds, &inV);
    inV = operator+(&con->endPoints[1].pos, (const Vector3f *)(v4 + 64));
    MinMaxAABB::Encapsulate(&con->bounds, &inV);
  }
  if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&con->firstLink);
  }
  con->firstLink = -1;
  if ( *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&con->salt);
  }
  dynRef = NavMeshPolyRefHelper::EncodeLinkId(con->salt, index, 0);
  NavMesh::ConnectOffMeshConnection(this, index, connectRadius, connectHeight);
  NavMesh::BumpTimeStamp(this);
  result = dynRef;
  if ( v44 == (char *)v4 )
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

// Line 2918: range 000000000CC34F9A-000000000CC352FC
void __cdecl NavMesh::UnconnectOffMeshConnectionsToTile(NavMesh *const this, NavMeshTileRef ref)
{
  NavMeshPolyRef v2; // rsi
  NavMeshLink *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  OffMeshConnection *v7; // rdx
  unsigned int i; // [rsp+18h] [rbp-28h]
  int j; // [rsp+1Ch] [rbp-24h]
  unsigned int k; // [rsp+20h] [rbp-20h]
  unsigned int tileIndex; // [rsp+24h] [rbp-1Ch]
  unsigned int next; // [rsp+28h] [rbp-18h]
  OffMeshConnection *con; // [rsp+30h] [rbp-10h]
  NavMeshPolyRef conRef; // [rsp+38h] [rbp-8h]

  tileIndex = NavMeshPolyRefHelper::DecodePolyIdTile(ref);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_firstOffMeshConnection);
  }
  for ( i = this->m_firstOffMeshConnection; i != -1; i = v7->next )
  {
    con = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
    if ( *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&con->salt);
    }
    v2 = i;
    conRef = NavMeshPolyRefHelper::EncodeLinkId(con->salt, i, 0);
    for ( j = 0; j <= 1; ++j )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->endPoints[j].tileRef >> 3) + 0x7FFF8000) )
        __asan_report_load8(&con->endPoints[j].tileRef, v2);
      if ( con->endPoints[j].tileRef )
      {
        v2 = (((_BYTE)con - 68) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&con->firstLink);
        }
        for ( k = con->firstLink; k != -1; k = next )
        {
          v3 = FreeList<NavMeshLink,false>::operator[](&this->m_links, k);
          if ( *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v3->next >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v3->next);
          }
          next = v3->next;
          v2 = k;
          v4 = (unsigned __int64)FreeList<NavMeshLink,false>::operator[](&this->m_links, k);
          if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
            v4 = __asan_report_load8(v4, k);
          if ( NavMeshPolyRefHelper::DecodePolyIdTile(*(_QWORD *)v4) == tileIndex )
          {
            v5 = (unsigned __int64)FreeList<NavMeshLink,false>::operator[](&this->m_links, k);
            if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
              v5 = __asan_report_load8(v5, k);
            NavMesh::RemoveLinkBetween(this, conRef, *(_QWORD *)v5);
            v6 = (unsigned __int64)FreeList<NavMeshLink,false>::operator[](&this->m_links, k);
            if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
              v6 = __asan_report_load8(v6, k);
            v2 = *(_QWORD *)v6;
            NavMesh::RemoveLinkBetween(this, *(_QWORD *)v6, conRef);
          }
        }
      }
    }
    v7 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
    if ( *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v7 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->next >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v7->next);
    }
  }
};

// Line 2948: range 000000000CC352FE-000000000CC354DF
void __cdecl NavMesh::UnconnectOffMeshConnection(NavMesh *const this, unsigned int index)
{
  NavMeshLink *v2; // rax
  unsigned __int64 v3; // rax
  unsigned int i; // [rsp+18h] [rbp-18h]
  unsigned int next; // [rsp+1Ch] [rbp-14h]
  OffMeshConnection *con; // [rsp+20h] [rbp-10h]
  NavMeshPolyRef ref; // [rsp+28h] [rbp-8h]

  con = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&con->salt);
  }
  ref = NavMeshPolyRefHelper::EncodeLinkId(con->salt, index, 0);
  if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&con->firstLink);
  }
  for ( i = con->firstLink; i != -1; i = next )
  {
    v2 = FreeList<NavMeshLink,false>::operator[](&this->m_links, i);
    if ( *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v2->next >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v2->next);
    }
    next = v2->next;
    v3 = (unsigned __int64)FreeList<NavMeshLink,false>::operator[](&this->m_links, i);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v3, i);
    NavMesh::RemoveLinkBetween(this, *(_QWORD *)v3, ref);
    FreeList<NavMeshLink,false>::Release(&this->m_links, i);
  }
  if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&con->firstLink);
  }
  con->firstLink = -1;
};

// Line 2964: range 000000000CC354E0-000000000CC358D2
NavMeshStatus __cdecl NavMesh::RemoveOffMeshConnection(NavMesh *const this, const NavMeshPolyRef ref)
{
  OffMeshConnection *v3; // rax
  OffMeshConnection *v4; // rdx
  OffMeshConnection *v5; // rdx
  OffMeshConnection *v6; // rdx
  OffMeshConnection *v7; // rax
  OffMeshConnection *v8; // rax
  OffMeshConnection *v9; // rax
  int i; // [rsp+1Ch] [rbp-24h]
  int prev; // [rsp+20h] [rbp-20h]
  unsigned int index; // [rsp+24h] [rbp-1Ch]
  unsigned int salt; // [rsp+28h] [rbp-18h]
  unsigned int next; // [rsp+2Ch] [rbp-14h]

  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) != 1 )
    return -2147483640;
  index = NavMeshPolyRefHelper::DecodePolyIdPoly(ref);
  if ( index >= FreeList<OffMeshConnection,false>::Capacity(&this->m_offMeshConnections) )
    return -2147483640;
  salt = NavMeshPolyRefHelper::DecodePolyIdSalt(ref);
  v3 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)&v3->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v3->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v3->salt);
  }
  if ( salt != v3->salt )
    return -2147483640;
  NavMesh::UnconnectOffMeshConnection(this, index);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_firstOffMeshConnection);
  }
  i = this->m_firstOffMeshConnection;
  prev = -1;
  while ( i != -1 && i != index )
  {
    prev = i;
    v4 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
    if ( *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->next >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v4->next);
    }
    i = v4->next;
  }
  v5 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)&v5->next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v5 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->next >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v5->next);
  }
  next = v5->next;
  if ( prev == -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->m_firstOffMeshConnection);
    }
    this->m_firstOffMeshConnection = next;
  }
  else
  {
    v6 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, prev);
    if ( *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->next >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&v6->next);
    }
    v6->next = next;
  }
  v7 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)&v7->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v7->salt);
  }
  ++v7->salt;
  v8 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)&v8->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->salt);
  }
  if ( !v8->salt )
  {
    v9 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
    if ( *(_BYTE *)(((unsigned __int64)&v9->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (OffMeshConnection *)__asan_report_store4(&v9->salt);
    }
    v9->salt = 1;
  }
  FreeList<OffMeshConnection,false>::Release(&this->m_offMeshConnections, index);
  NavMesh::BumpTimeStamp(this);
  return 0x40000000;
};

// Line 3009: range 000000000CC358D4-000000000CC35C08
const NavMeshLink *__cdecl NavMesh::GetFirstLink(const NavMesh *const this, NavMeshPolyRef ref)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const NavMeshLink *result; // rax
  FreeList<NavMeshLink,false> *p_m_links; // rcx
  NavMeshStatus TileAndPolyByRef; // eax
  const NavMeshPoly *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int ip_0; // [rsp+10h] [rbp-90h]
  const OffMeshConnection *con; // [rsp+18h] [rbp-88h]
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 tile:3021 64 8 9 poly:3022";
  *(_QWORD *)(v2 + 16) = NavMesh::GetFirstLink;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    con = NavMesh::GetOffMeshConnection(this, ref);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&con->firstLink);
      }
      if ( con->firstLink == -1 )
      {
        result = 0LL;
      }
      else
      {
        p_m_links = &this->m_links;
        if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&con->firstLink);
        }
        result = FreeList<NavMeshLink,false>::operator[](p_m_links, con->firstLink);
      }
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, ref);
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         this,
                         ref,
                         (const NavMeshTile **)(v2 + 32),
                         (const NavMeshPoly **)(v2 + 64),
                         this->m_defaultMemoryCallback);
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = 0LL;
    }
    else
    {
      v8 = *(const NavMeshPoly **)(v2 + 64);
      ip_0 = GetPolyIndex(*(const NavMeshTile **)(v2 + 32), v8);
      v9 = *(_QWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 24) >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9 + 24, v8);
      v10 = *(_QWORD *)(v9 + 24) + 4LL * ip_0;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v10);
      if ( *(_DWORD *)v10 == -1 )
        result = 0LL;
      else
        result = FreeList<NavMeshLink,false>::operator[](&this->m_links, *(_DWORD *)v10);
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
  return result;
};

// Line 3035: range 000000000CC35C0A-000000000CC35CB7
const OffMeshConnection *__cdecl NavMesh::GetFirstOffMeshConnection(const NavMesh *const this)
{
  FreeList<OffMeshConnection,false> *p_m_offMeshConnections; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_firstOffMeshConnection);
  }
  if ( this->m_firstOffMeshConnection == -1 )
    return 0LL;
  p_m_offMeshConnections = &this->m_offMeshConnections;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_firstOffMeshConnection);
  }
  return FreeList<OffMeshConnection,false>::operator[](p_m_offMeshConnections, this->m_firstOffMeshConnection);
};

// Line 3042: range 000000000CC35CB8-000000000CC35E14
const OffMeshConnection *__cdecl NavMesh::GetNextOffMeshConnection(
        const NavMesh *const this,
        const OffMeshConnection *data)
{
  unsigned int next; // ebx
  FreeList<OffMeshConnection,false> *p_m_offMeshConnections; // rdi
  FreeList<OffMeshConnection,false> *v5; // rcx

  if ( !data )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&data->next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->next >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&data->next);
  }
  if ( data->next == -1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&data->next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->next >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&data->next);
  }
  next = data->next;
  p_m_offMeshConnections = &this->m_offMeshConnections;
  if ( next >= FreeList<OffMeshConnection,false>::Capacity(&this->m_offMeshConnections) )
  {
    __asan_handle_no_return(p_m_offMeshConnections);
    __assert_fail(
      "data->next < m_offMeshConnections.Capacity()",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xBE7u,
      "const OffMeshConnection* NavMesh::GetNextOffMeshConnection(const OffMeshConnection*) const");
  }
  v5 = &this->m_offMeshConnections;
  if ( *(_BYTE *)(((unsigned __int64)&data->next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->next >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&data->next);
  }
  return FreeList<OffMeshConnection,false>::operator[](v5, data->next);
};

// Line 3052: range 000000000CC35E16-000000000CC36048
unsigned int __cdecl NavMesh::GetPolyFlags(const NavMesh *const this, NavMeshPolyRef ref)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  __int64 v7; // rdx
  const OffMeshConnection *con; // [rsp+18h] [rbp-88h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 tile:3062 64 8 9 poly:3063";
  *(_QWORD *)(v2 + 16) = NavMesh::GetPolyFlags;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    con = NavMesh::GetOffMeshConnection(this, ref);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->flags >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&con->flags >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&con->flags);
      }
      result = con->flags;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, ref);
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         this,
                         ref,
                         (const NavMeshTile **)(v2 + 32),
                         (const NavMeshPoly **)(v2 + 64),
                         this->m_defaultMemoryCallback);
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = 0;
    }
    else
    {
      v7 = *(_QWORD *)(v2 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((v7 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v7 + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7 + 24);
      }
      result = *(_DWORD *)(v7 + 24);
    }
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
  return result;
};

// Line 3072: range 000000000CC3604A-000000000CC36284
unsigned __int8 __cdecl NavMesh::GetPolyArea(const NavMesh *const this, NavMeshPolyRef ref)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int8 result; // al
  NavMeshStatus TileAndPolyByRef; // eax
  __int64 v7; // rdx
  const OffMeshConnection *con; // [rsp+18h] [rbp-88h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 tile:3082 64 8 9 poly:3083";
  *(_QWORD *)(v2 + 16) = NavMesh::GetPolyArea;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    con = NavMesh::GetOffMeshConnection(this, ref);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->area >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)con - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&con->area >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&con->area);
      }
      result = con->area;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, ref);
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         this,
                         ref,
                         (const NavMeshTile **)(v2 + 32),
                         (const NavMeshPoly **)(v2 + 64),
                         this->m_defaultMemoryCallback);
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = 0;
    }
    else
    {
      v7 = *(_QWORD *)(v2 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 29) >> 3) + 0x7FFF8000) != 0
        && ((v7 + 29) & 7) >= *(_BYTE *)(((unsigned __int64)(v7 + 29) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v7 + 29);
      }
      result = *(_BYTE *)(v7 + 29);
    }
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
  return result;
};

// Line 3092: range 000000000CC36286-000000000CC36733
void __cdecl NavMesh::GetPolyFlagsAndArea(
        const NavMesh *const this,
        NavMeshPolyRef ref,
        unsigned int *flags,
        unsigned __int8 *area)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // ecx
  unsigned __int8 v8; // cl
  NavMeshStatus TileAndPolyByRef; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  NavMeshPolyRef refa; // [rsp+10h] [rbp-A0h]
  const OffMeshConnection *con; // [rsp+28h] [rbp-88h]
  char v18[128]; // [rsp+30h] [rbp-80h] BYREF

  refa = ref;
  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 9 tile:3110 64 8 9 poly:3111";
  *(_QWORD *)(v4 + 16) = NavMesh::GetPolyFlagsAndArea;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  if ( flags )
  {
    ref = ((unsigned __int8)flags & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)flags >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flags & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flags >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(flags);
    }
    *flags = 0;
  }
  if ( area )
  {
    ref = (unsigned __int8)area & 7;
    if ( *(_BYTE *)(((unsigned __int64)area >> 3) + 0x7FFF8000) != 0
      && (char)ref >= *(_BYTE *)(((unsigned __int64)area >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(area);
    }
    *area = 0;
  }
  if ( NavMeshPolyRefHelper::DecodePolyIdType(refa) == 1 )
  {
    con = NavMesh::GetOffMeshConnection(this, refa);
    if ( con )
    {
      if ( flags )
      {
        if ( *(_BYTE *)(((unsigned __int64)&con->flags >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&con->flags >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&con->flags);
        }
        v7 = con->flags;
        if ( *(_BYTE *)(((unsigned __int64)flags >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)flags & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flags >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(flags);
        }
        *flags = v7;
      }
      if ( area )
      {
        if ( *(_BYTE *)(((unsigned __int64)&con->area >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)con - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&con->area >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&con->area);
        }
        v8 = con->area;
        if ( *(_BYTE *)(((unsigned __int64)area >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)area & 7) >= *(_BYTE *)(((unsigned __int64)area >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(area);
        }
        *area = v8;
      }
    }
  }
  else
  {
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, ref);
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         this,
                         refa,
                         (const NavMeshTile **)(v4 + 32),
                         (const NavMeshPoly **)(v4 + 64),
                         this->m_defaultMemoryCallback);
    if ( !NavMeshStatusFailed(TileAndPolyByRef) )
    {
      if ( flags )
      {
        v10 = *(_QWORD *)(v4 + 64);
        if ( *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000) != 0
          && (char)(((v10 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10 + 24);
        }
        v11 = *(_DWORD *)(v10 + 24);
        if ( *(_BYTE *)(((unsigned __int64)flags >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)flags & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flags >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(flags);
        }
        *flags = v11;
      }
      if ( area )
      {
        v12 = *(_QWORD *)(v4 + 64);
        if ( *(_BYTE *)(((unsigned __int64)(v12 + 29) >> 3) + 0x7FFF8000) != 0
          && ((v12 + 29) & 7) >= *(_BYTE *)(((unsigned __int64)(v12 + 29) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v12 + 29);
        }
        v13 = *(_BYTE *)(v12 + 29);
        if ( *(_BYTE *)(((unsigned __int64)area >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)area & 7) >= *(_BYTE *)(((unsigned __int64)area >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(area);
        }
        *area = v13;
      }
    }
  }
  if ( v18 == (char *)v4 )
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
};

// Line 3122: range 000000000CC36734-000000000CC36DFF
int __cdecl NavMesh::GetPolyGeometry(
        const NavMesh *const this,
        NavMeshPolyRef ref,
        Vector3f *verts,
        NavMeshPolyRef *neighbours,
        int maxNeisPerEdge)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  int result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  const NavMeshPoly *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  const NavMeshLink *v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  NavMeshPolyRef v26; // rcx
  int i; // [rsp+3Ch] [rbp-A4h]
  int i_0; // [rsp+40h] [rbp-A0h]
  int j; // [rsp+44h] [rbp-9Ch]
  int nverts; // [rsp+48h] [rbp-98h]
  unsigned int ip_0; // [rsp+4Ch] [rbp-94h]
  int index; // [rsp+54h] [rbp-8Ch]
  const NavMeshLink *link; // [rsp+58h] [rbp-88h]
  char v37[128]; // [rsp+60h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 9 tile:3130 64 8 9 poly:3131";
  *(_QWORD *)(v5 + 16) = NavMesh::GetPolyGeometry;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, ref);
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         this,
                         ref,
                         (const NavMeshTile **)(v5 + 32),
                         (const NavMeshPoly **)(v5 + 64),
                         this->m_defaultMemoryCallback);
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = 0;
    }
    else
    {
      v10 = *(_QWORD *)(v5 + 64);
      v11 = *(_BYTE *)(((unsigned __int64)(v10 + 28) >> 3) + 0x7FFF8000);
      LOBYTE(ref) = v11 != 0;
      if ( v11 != 0 && ((v10 + 28) & 7) >= v11 )
        __asan_report_load1(v10 + 28);
      nverts = *(unsigned __int8 *)(v10 + 28);
      if ( verts )
      {
        for ( i = 0; i < nverts; ++i )
        {
          v12 = *(_QWORD *)(v5 + 32);
          if ( *(_BYTE *)(((unsigned __int64)(v12 + 40) >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8(v12 + 40, ref);
          v13 = *(_QWORD *)(v12 + 40);
          v14 = *(_QWORD *)(v5 + 64);
          v15 = *(_BYTE *)(((unsigned __int64)(v14 + 2LL * i) >> 3) + 0x7FFF8000);
          if ( v15 != 0 && (char)(((v14 + 2 * i) & 7) + 1) >= v15 )
            __asan_report_load2(v14 + 2LL * i);
          v16 = v13 + 12LL * *(unsigned __int16 *)(v14 + 2LL * i);
          v17 = (unsigned __int64)&verts[i];
          if ( (((unsigned __int8)verts + 12 * i) & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000)
            && *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v17 + 11) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)verts + 12 * i + 11) & 7) >= *(_BYTE *)(((v17 + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(&verts[i], 12LL);
          }
          ref = ((char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) && *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0) | (unsigned int)(*(_BYTE *)(((v16 + 11) >> 3) + 0x7FFF8000) != 0 && (char)((v16 + 11) & 7) >= *(_BYTE *)(((v16 + 11) >> 3) + 0x7FFF8000));
          if ( (char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) && *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v16 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v16 + 11) & 7) >= *(_BYTE *)(((v16 + 11) >> 3) + 0x7FFF8000) )
          {
            ref = 12LL;
            __asan_report_load_n(v16, 12LL);
          }
          *(_QWORD *)v17 = *(_QWORD *)v16;
          *(_DWORD *)(v17 + 8) = *(_DWORD *)(v16 + 8);
        }
      }
      if ( neighbours )
      {
        for ( i_0 = 0; i_0 < maxNeisPerEdge * nverts; ++i_0 )
        {
          v18 = (unsigned __int64)&neighbours[i_0];
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_store8();
          *(_QWORD *)v18 = 0LL;
        }
        v19 = *(const NavMeshPoly **)(v5 + 64);
        ip_0 = GetPolyIndex(*(const NavMeshTile **)(v5 + 32), v19);
        v20 = *(_QWORD *)(v5 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(v20 + 24) >> 3) + 0x7FFF8000) )
          v20 = __asan_report_load8(v20 + 24, v19);
        v21 = *(_QWORD *)(v20 + 24) + 4LL * ip_0;
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0 && (char)((v21 & 7) + 3) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v21);
        v22 = (const NavMeshLink *)*(unsigned int *)v21;
        for ( link = NavMesh::GetLink(this, (unsigned int)v22); link; link = NavMesh::GetNextLink(this, link) )
        {
          if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
            __asan_report_load8(link, v22);
          if ( NavMeshPolyRefHelper::DecodePolyIdType(link->ref) != 1 )
          {
            v23 = ((_BYTE)link + 12) & 7;
            if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
              && (char)v23 >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&link->edge);
            }
            index = link->edge;
            if ( index < nverts )
            {
              for ( j = 0; j < maxNeisPerEdge; ++j )
              {
                v24 = (unsigned __int64)&neighbours[maxNeisPerEdge * index + j];
                if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                  v24 = __asan_report_load8(&neighbours[maxNeisPerEdge * index + j], v23);
                if ( !*(_QWORD *)v24 )
                {
                  v25 = (unsigned __int64)&neighbours[maxNeisPerEdge * index + j];
                  if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                    v25 = __asan_report_load8(link, v23);
                  v26 = link->ref;
                  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                    v25 = __asan_report_store8();
                  *(_QWORD *)v25 = v26;
                  break;
                }
              }
            }
          }
          v22 = link;
        }
      }
      result = nverts;
    }
  }
  if ( v37 == (char *)v5 )
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

// Line 3177: range 000000000CC36E00-000000000CC37B66
bool __cdecl NavMesh::QueryFirstPolygonsInTile(
        const NavMesh *const this,
        const NavMeshTile *tile,
        const Vector3f *center,
        const Vector3f *extents,
        NavMeshMatchFirstCallback *callback)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const NavMeshBVNode *bvTree; // rsi
  const NavMeshDataHeader *header; // rdx
  __int64 n; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  const NavMeshDataHeader *v13; // rdx
  char v14; // cl
  double v15; // xmm0_8
  __int64 v16; // rsi
  unsigned __int8 (__fastcall **vptr_NavMeshMatchFirstCallback)(NavMeshMatchFirstCallback *, const NavMeshTile *, NavMeshPolyRef *, __int64, double); // rax
  unsigned __int8 (__fastcall *v18)(NavMeshMatchFirstCallback *, const NavMeshTile *, NavMeshPolyRef *, __int64, double); // r14
  __int64 v19; // r15
  NavMeshPolyRef v20; // rax
  bool result; // al
  const NavMeshDataHeader *v22; // rdx
  char v23; // cl
  const Vector3f *verts; // rcx
  const Vector3f *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  const Vector3f *v28; // rcx
  char v29; // dl
  unsigned __int8 (__fastcall **v30)(NavMeshMatchFirstCallback *, const NavMeshTile *, NavMeshPolyRef *, NavMeshPoly *); // rax
  unsigned __int8 (__fastcall *v31)(NavMeshMatchFirstCallback *, const NavMeshTile *, NavMeshPolyRef *, NavMeshPoly *); // r14
  const NavMeshTile *tilea; // [rsp+20h] [rbp-190h]
  bool overlap; // [rsp+3Eh] [rbp-172h]
  bool isLeafNode; // [rsp+3Fh] [rbp-171h]
  int i; // [rsp+40h] [rbp-170h]
  int j; // [rsp+44h] [rbp-16Ch]
  float qfac; // [rsp+48h] [rbp-168h]
  float minx; // [rsp+4Ch] [rbp-164h]
  float miny; // [rsp+50h] [rbp-160h]
  float minz; // [rsp+54h] [rbp-15Ch]
  float maxx; // [rsp+58h] [rbp-158h]
  float maxy; // [rsp+5Ch] [rbp-154h]
  float maxz; // [rsp+60h] [rbp-150h]
  NavMeshPolyRef v47; // [rsp+68h] [rbp-148h] BYREF
  const NavMeshBVNode *node; // [rsp+70h] [rbp-140h]
  NavMeshPolyRef base_0; // [rsp+78h] [rbp-138h]
  NavMeshPoly *p; // [rsp+80h] [rbp-130h]
  const Vector3f *v; // [rsp+88h] [rbp-128h]
  const NavMeshBVNode *end; // [rsp+90h] [rbp-120h]
  NavMeshPolyRef base; // [rsp+98h] [rbp-118h]
  char v54[272]; // [rsp+A0h] [rbp-110h] BYREF

  tilea = tile;
  v5 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 6 9 bmin:3192 64 6 9 bmax:3192 96 12 9 qmin:3178 128 12 9 qmax:3179 160 12 9 bmin:3232 192 12 9 bmax:3232";
  *(_QWORD *)(v5 + 16) = NavMesh::QueryFirstPolygonsInTile;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959354;
  v7[536862722] = -218959354;
  v7[536862723] = -219020288;
  v7[536862724] = -219020288;
  v7[536862725] = -219020288;
  v7[536862726] = -202177536;
  *(Vector3f *)(v5 + 96) = operator-(center, extents);
  *(Vector3f *)(v5 + 128) = operator+(center, extents);
  if ( *(_BYTE *)(((unsigned __int64)&tile->bvTree >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->bvTree, extents);
  if ( tile->bvTree )
  {
    node = tile->bvTree;
    bvTree = tile->bvTree;
    if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->header, bvTree);
    header = tilea->header;
    if ( *(_BYTE *)(((unsigned __int64)&header->bvNodeCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)header + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->bvNodeCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&header->bvNodeCount);
    }
    end = &bvTree[header->bvNodeCount - 1];
    n = (__int64)tilea->header;
    if ( ((n + 44) & 7) >= *(_BYTE *)(((unsigned __int64)(n + 44) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)(n + 44) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(n + 55) >> 3) + 0x7FFF8000) != 0
      && ((n + 55) & 7) >= *(_BYTE *)(((unsigned __int64)(n + 55) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n + 44, 12LL);
    }
    *(_QWORD *)(v5 + 160) = *(_QWORD *)(n + 44);
    *(_DWORD *)(v5 + 168) = *(_DWORD *)(n + 52);
    v11 = (__int64)tilea->header;
    v12 = ((_DWORD)v11 + 67) & 7;
    if ( ((v11 + 56) & 7) >= *(_BYTE *)(((unsigned __int64)(v11 + 56) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)(v11 + 56) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(v11 + 67) >> 3) + 0x7FFF8000) != 0
      && ((v11 + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(v11 + 67) >> 3) + 0x7FFF8000) )
    {
      v12 = 12LL;
      v11 = __asan_report_load_n(v11 + 56, 12LL);
    }
    *(_QWORD *)(v5 + 192) = *(_QWORD *)(v11 + 56);
    *(_DWORD *)(v5 + 200) = *(_DWORD *)(v11 + 64);
    v13 = tilea->header;
    v14 = *(_BYTE *)(((unsigned __int64)&v13->bvQuantFactor >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v14 != 0;
    if ( v14 != 0 && (char)((((_BYTE)v13 + 68) & 7) + 3) >= v14 )
      __asan_report_load4(&v13->bvQuantFactor);
    qfac = v13->bvQuantFactor;
    minx = FloatClamp(*(float *)(v5 + 96), *(float *)(v5 + 160), *(float *)(v5 + 192)) - *(float *)(v5 + 160);
    miny = FloatClamp(*(float *)(v5 + 100), *(float *)(v5 + 164), *(float *)(v5 + 196)) - *(float *)(v5 + 164);
    minz = FloatClamp(*(float *)(v5 + 104), *(float *)(v5 + 168), *(float *)(v5 + 200)) - *(float *)(v5 + 168);
    maxx = FloatClamp(*(float *)(v5 + 128), *(float *)(v5 + 160), *(float *)(v5 + 192)) - *(float *)(v5 + 160);
    maxy = FloatClamp(*(float *)(v5 + 132), *(float *)(v5 + 164), *(float *)(v5 + 196)) - *(float *)(v5 + 164);
    maxz = FloatClamp(*(float *)(v5 + 136), *(float *)(v5 + 168), *(float *)(v5 + 200)) - *(float *)(v5 + 168);
    *(_WORD *)(v5 + 32) = (int)(float)(qfac * minx) & 0xFFFE;
    *(_WORD *)(v5 + 34) = (int)(float)(qfac * miny) & 0xFFFE;
    *(_WORD *)(v5 + 36) = (int)(float)(qfac * minz) & 0xFFFE;
    *(_WORD *)(v5 + 64) = (int)(float)((float)(qfac * maxx) + 1.0) | 1;
    *(_WORD *)(v5 + 66) = (int)(float)((float)(qfac * maxy) + 1.0) | 1;
    HIDWORD(v15) = 0;
    *(float *)&v15 = (float)(qfac * maxz) + 1.0;
    *(_WORD *)(v5 + 68) = (int)*(float *)&v15 | 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, v12);
    base = NavMesh::GetPolyRefBase(this, tilea, this->m_defaultMemoryCallback);
    while ( node < end )
    {
      overlap = OverlapQuantBounds(
                  (const unsigned __int16 *)(v5 + 32),
                  (const unsigned __int16 *)(v5 + 64),
                  node->bmin,
                  node->bmax);
      v16 = (((_BYTE)node + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)node + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) )
      {
        v15 = __asan_report_load4(&node->i);
      }
      isLeafNode = node->i >= 0;
      if ( node->i >= 0 && overlap )
      {
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v16);
        vptr_NavMeshMatchFirstCallback = (unsigned __int8 (__fastcall **)(NavMeshMatchFirstCallback *, const NavMeshTile *, NavMeshPolyRef *, __int64, double))callback->_vptr_NavMeshMatchFirstCallback;
        if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_NavMeshMatchFirstCallback >> 3) + 0x7FFF8000) )
          vptr_NavMeshMatchFirstCallback = (unsigned __int8 (__fastcall **)(NavMeshMatchFirstCallback *, const NavMeshTile *, NavMeshPolyRef *, __int64, double))__asan_report_load8(callback->_vptr_NavMeshMatchFirstCallback, v16);
        v18 = *vptr_NavMeshMatchFirstCallback;
        if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tilea->polys, v16);
        v19 = (__int64)&tilea->polys[node->i];
        v20 = NavMeshPolyRefHelper::EncodeBasePolyId(0, node->i);
        v47 = base | v20;
        if ( v18(callback, tilea, &v47, v19, v15) )
        {
          result = 1;
          goto LABEL_75;
        }
      }
      if ( overlap || isLeafNode )
      {
        ++node;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)node + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->i >> 3) + 0x7FFF8000) )
        {
          v15 = __asan_report_load4(&node->i);
        }
        node -= node->i;
      }
    }
  }
  else
  {
    Vector3f::Vector3f((Vector3f *const)(v5 + 160));
    Vector3f::Vector3f((Vector3f *const)(v5 + 192));
    if ( *(_BYTE *)(((unsigned __int64)&this->m_defaultMemoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_defaultMemoryCallback, extents);
    base_0 = NavMesh::GetPolyRefBase(this, tile, this->m_defaultMemoryCallback);
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->header, tile);
      v22 = tilea->header;
      v23 = *(_BYTE *)(((unsigned __int64)&v22->polyCount >> 3) + 0x7FFF8000);
      LOBYTE(tile) = v23 != 0;
      if ( v23 != 0 && (char)((((_BYTE)v22 + 20) & 7) + 3) >= v23 )
        __asan_report_load4(&v22->polyCount);
      if ( i >= v22->polyCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->polys, tile);
      p = &tilea->polys[i];
      if ( *(_BYTE *)(((unsigned __int64)&tilea->verts >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->verts, tile);
      verts = tilea->verts;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(p);
      }
      v25 = &verts[p->verts[0]];
      if ( ((unsigned __int8)v25 & 7) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v25->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v25 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v25->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v25, 12LL);
      }
      *(_QWORD *)(v5 + 192) = *(_QWORD *)&v25->x;
      *(float *)(v5 + 200) = v25->z;
      v26 = v5 + 192;
      if ( (char)((v5 - 64) & 7) >= *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v5 + 203) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 11) & 7) >= *(_BYTE *)(((v5 + 203) >> 3) + 0x7FFF8000) )
      {
        v26 = __asan_report_load_n(v5 + 192, 12LL);
      }
      *(_QWORD *)(v5 + 160) = *(_QWORD *)v26;
      *(_DWORD *)(v5 + 168) = *(_DWORD *)(v26 + 8);
      for ( j = 1; ; ++j )
      {
        v27 = ((_BYTE)p + 28) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&p->vertCount >> 3) + 0x7FFF8000) != 0
          && (char)v27 >= *(_BYTE *)(((unsigned __int64)&p->vertCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&p->vertCount);
        }
        if ( j >= p->vertCount )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&tilea->verts >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tilea->verts, v27);
        v28 = tilea->verts;
        v29 = *(_BYTE *)(((unsigned __int64)&p->verts[j] >> 3) + 0x7FFF8000);
        if ( v29 != 0 && (char)(((2 * j + (_BYTE)p) & 7) + 1) >= v29 )
          __asan_report_load2(&p->verts[j]);
        v = &v28[p->verts[j]];
        *(Vector3f *)(v5 + 160) = min((const Vector3f *)(v5 + 160), v);
        *(Vector3f *)(v5 + 192) = max((const Vector3f *)(v5 + 192), v);
      }
      tile = (const NavMeshTile *)(v5 + 128);
      if ( OverlapBounds(
             (const Vector3f *)(v5 + 96),
             (const Vector3f *)(v5 + 128),
             (const Vector3f *)(v5 + 160),
             (const Vector3f *)(v5 + 192)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, tile);
        v30 = (unsigned __int8 (__fastcall **)(NavMeshMatchFirstCallback *, const NavMeshTile *, NavMeshPolyRef *, NavMeshPoly *))callback->_vptr_NavMeshMatchFirstCallback;
        if ( *(_BYTE *)(((unsigned __int64)callback->_vptr_NavMeshMatchFirstCallback >> 3) + 0x7FFF8000) )
          v30 = (unsigned __int8 (__fastcall **)(NavMeshMatchFirstCallback *, const NavMeshTile *, NavMeshPolyRef *, NavMeshPoly *))__asan_report_load8(callback->_vptr_NavMeshMatchFirstCallback, tile);
        v31 = *v30;
        v47 = base_0 | NavMeshPolyRefHelper::EncodeBasePolyId(0, i);
        tile = tilea;
        if ( v31(callback, tilea, &v47, p) )
        {
          result = 1;
          goto LABEL_75;
        }
      }
    }
  }
  result = 0;
LABEL_75:
  if ( v54 == (char *)v5 )
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
  return result;
};

// Line 3258: range 000000000CC37B68-000000000CC385FB
__int64 __fastcall NavMesh::IntersectSurface(
        const NavMesh *const this,
        SurfaceIDType surfaceID,
        int typeID,
        const Vector3f *cen,
        const Vector3f *ext,
        NavMeshMatchFirstCallback *callback)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 result; // rax
  const NavMeshTileMemoryCallback *m_memoryCallback; // r14
  _QWORD *p_vptr_NavMeshTileMemoryCallback; // rax
  unsigned __int64 v12; // rax
  __int64 (__fastcall *v13)(const NavMeshTileMemoryCallback *, _QWORD); // r15
  unsigned __int64 v14; // rax
  float tileSize; // xmm1_4
  __int64 v16; // rsi
  double v17; // xmm0_8
  const NavMeshTileMemoryCallback *v18; // r14
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  __int64 (__fastcall *v21)(const NavMeshTileMemoryCallback *, _QWORD); // r15
  unsigned __int64 v22; // rax
  const NavMeshTileMemoryCallback *v23; // r14
  _QWORD *v24; // rax
  unsigned __int64 v25; // rax
  __int64 (__fastcall *v26)(const NavMeshTileMemoryCallback *, _QWORD, double); // r15
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v27; // rdx
  TileLookUpData *p_second; // rax
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v30; // rdx
  TileLookUpData *v31; // rax
  const NavMeshTile *v32; // rax
  float invTileSize; // [rsp+30h] [rbp-250h]
  int iminx; // [rsp+34h] [rbp-24Ch]
  int imaxx; // [rsp+38h] [rbp-248h]
  int jminz; // [rsp+3Ch] [rbp-244h]
  int jmaxz; // [rsp+40h] [rbp-240h]
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+48h] [rbp-238h] BYREF
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > v43; // [rsp+50h] [rbp-230h] BYREF
  const MinMaxAABB *worldbounds; // [rsp+58h] [rbp-228h]
  const TileLUT *lut; // [rsp+60h] [rbp-220h]
  const NavMesh::SurfaceData *surf; // [rsp+68h] [rbp-218h]
  const NavMeshTile *tile; // [rsp+70h] [rbp-210h]
  Vector3f min; // [rsp+78h] [rbp-208h] BYREF
  Vector3f max; // [rsp+84h] [rbp-1FCh] BYREF
  AABB aabb; // [rsp+90h] [rbp-1F0h] BYREF
  char v51[464]; // [rsp+B0h] [rbp-1D0h] BYREF

  v6 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(416LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "10 48 2 14 surfaceID:3256 64 4 6 i:3302 80 4 6 j:3304 96 8 7 it:3261 128 8 17 replaceFound:3309 "
                        "160 8 10 found:3318 192 8 11 lutKey:3306 224 24 11 bounds:3259 288 24 12 overlap:3269 352 24 16 "
                        "localBounds:3286";
  *(_QWORD *)(v6 + 16) = NavMesh::IntersectSurface;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234688015;
  v8[536862722] = -234556924;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -218959360;
  v8[536862726] = -218959360;
  v8[536862727] = -234881024;
  v8[536862728] = -218959118;
  v8[536862729] = -234881024;
  v8[536862730] = -218959118;
  v8[536862731] = -218103808;
  v8[536862732] = -202116109;
  *(_WORD *)(v6 + 48) = surfaceID;
  max = operator+(cen, ext);
  min = operator-(cen, ext);
  MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v6 + 224), &min, &max);
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v6 + 96) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_SurfaceIDToData, (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v6 + 48));
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v6 + 192) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData);
  if ( __gnu_cxx::operator==<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v6 + 96),
         (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v6 + 192)) )
  {
    result = 0LL;
    goto LABEL_67;
  }
  surf = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v6 + 96))->second;
  if ( typeID != -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)surf >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)surf >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(surf);
    }
    if ( typeID != surf->m_Settings.agentTypeID )
    {
      result = 0LL;
      goto LABEL_67;
    }
  }
  MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v6 + 288), 1);
  if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&callback->m_memoryCallback, 1LL);
  if ( callback->m_memoryCallback )
  {
    m_memoryCallback = callback->m_memoryCallback;
    p_vptr_NavMeshTileMemoryCallback = &m_memoryCallback->_vptr_NavMeshTileMemoryCallback;
    if ( *(_BYTE *)(((unsigned __int64)m_memoryCallback >> 3) + 0x7FFF8000) )
      p_vptr_NavMeshTileMemoryCallback = (_QWORD *)__asan_report_load8(callback->m_memoryCallback, 1LL);
    v12 = *p_vptr_NavMeshTileMemoryCallback + 152LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12, 1LL);
    v13 = *(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, _QWORD))v12;
    v14 = (unsigned __int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v6 + 96));
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v14 >> 3) + 0x7FFF8000) <= 1 )
      v14 = __asan_report_load2(v14);
    worldbounds = (const MinMaxAABB *)v13(m_memoryCallback, *(unsigned __int16 *)v14);
    if ( !worldbounds )
      worldbounds = &surf->m_WorldBounds;
    if ( !IntersectionAABBAABB((const MinMaxAABB *)(v6 + 224), worldbounds, (MinMaxAABB *)(v6 + 288)) )
    {
      result = 0LL;
      goto LABEL_67;
    }
  }
  else if ( !IntersectionAABBAABB((const MinMaxAABB *)(v6 + 224), &surf->m_WorldBounds, (MinMaxAABB *)(v6 + 288)) )
  {
    result = 0LL;
    goto LABEL_67;
  }
  AABB::AABB((AABB *const)(v6 + 352));
  AABB::AABB(&aabb, (const MinMaxAABB *)(v6 + 288));
  InverseTransformAABB(&aabb, &surf->m_Position, &surf->m_Rotation, (AABB *)(v6 + 352));
  if ( *(_BYTE *)(((unsigned __int64)&surf->m_Settings.tileSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)surf + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surf->m_Settings.tileSize >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&surf->m_Settings.tileSize);
  }
  tileSize = (float)surf->m_Settings.tileSize;
  v16 = (((_BYTE)surf + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&surf->m_Settings.cellSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)surf + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surf->m_Settings.cellSize >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&surf->m_Settings.cellSize);
  }
  invTileSize = 1.0 / (float)(tileSize * surf->m_Settings.cellSize);
  iminx = FloorfToInt((float)(*(float *)(v6 + 352) - *(float *)(v6 + 364)) * invTileSize);
  imaxx = FloorfToInt((float)(*(float *)(v6 + 364) + *(float *)(v6 + 352)) * invTileSize);
  jminz = FloorfToInt((float)(*(float *)(v6 + 360) - *(float *)(v6 + 372)) * invTileSize);
  *(_QWORD *)&v17 = *(unsigned int *)(v6 + 372);
  *(float *)&v17 = (float)(*(float *)&v17 + *(float *)(v6 + 360)) * invTileSize;
  jmaxz = FloorfToInt(*(float *)&v17);
  lut = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&callback->m_memoryCallback, v16);
  if ( callback->m_memoryCallback )
  {
    v18 = callback->m_memoryCallback;
    v19 = &v18->_vptr_NavMeshTileMemoryCallback;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      v19 = (_QWORD *)__asan_report_load8(callback->m_memoryCallback, v16);
    v20 = *v19 + 144LL;
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8(v20, v16);
    v21 = *(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, _QWORD))v20;
    v22 = (unsigned __int64)__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v6 + 96));
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v22 >> 3) + 0x7FFF8000) <= 1 )
      v22 = __asan_report_load2(v22);
    lut = (const TileLUT *)v21(v18, *(unsigned __int16 *)v22);
  }
  for ( *(_DWORD *)(v6 + 64) = iminx; imaxx >= *(_DWORD *)(v6 + 64); ++*(_DWORD *)(v6 + 64) )
  {
    for ( *(_DWORD *)(v6 + 80) = jminz; jmaxz >= *(_DWORD *)(v6 + 80); ++*(_DWORD *)(v6 + 80) )
    {
      *(std::pair<int,int> *)(v6 + 192) = std::make_pair<int &,int &>((int *)(v6 + 64), (int *)(v6 + 80));
      if ( !lut )
        goto LABEL_72;
      *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v6 + 128) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v6 + 192));
      __rhs._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
      if ( !__gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v6 + 128),
              &__rhs) )
        goto LABEL_72;
      if ( *(_BYTE *)(((unsigned __int64)&callback->m_memoryCallback >> 3) + 0x7FFF8000) )
        __asan_report_load8(&callback->m_memoryCallback, &__rhs);
      v23 = callback->m_memoryCallback;
      v24 = &v23->_vptr_NavMeshTileMemoryCallback;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        v24 = (_QWORD *)__asan_report_load8(callback->m_memoryCallback, &__rhs);
      v25 = *v24 + 56LL;
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8(v25, &__rhs);
      v26 = *(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, _QWORD, double))v25;
      v27 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v6 + 128));
      p_second = &v27->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        v17 = __asan_report_load4(p_second);
      }
      tile = (const NavMeshTile *)v26(v23, (unsigned int)v27->second.tileNavMeshIndex, v17);
      if ( !tile
        || !NavMesh::QueryFirstPolygonsInTile(
              this,
              tile,
              (const Vector3f *)(v6 + 352),
              (const Vector3f *)(v6 + 364),
              callback) )
      {
LABEL_72:
        *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v6 + 160) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v6 + 192));
        v43._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_TileLUT)._M_current;
        if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v6 + 160),
                &v43) )
        {
          v30 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v6 + 160));
          v31 = &v30->second;
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            v17 = __asan_report_load4(v31);
          }
          v32 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v30->second.tileNavMeshIndex);
          if ( NavMesh::QueryFirstPolygonsInTile(
                 this,
                 v32,
                 (const Vector3f *)(v6 + 352),
                 (const Vector3f *)(v6 + 364),
                 callback) )
          {
            result = 1LL;
            goto LABEL_67;
          }
        }
      }
    }
  }
  result = 0LL;
LABEL_67:
  if ( v51 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 3336: range 000000000CC385FC-000000000CC3902D
int __cdecl NavMesh::FindConnectingPolys(
        const NavMesh *const this,
        const Vector3f *fromPoints,
        const int fromPointCount,
        const NavMeshTile *tile,
        int side,
        NavMeshPolyRef *con,
        PortalArea *conarea,
        int maxcon,
        float portalHeight,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // r12
  int result; // eax
  __m128i v14; // xmm0
  __int64 k; // rax
  __int64 v16; // r14
  Vector3f *v17; // r15
  __int64 m; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 (__fastcall *v21)(NavMeshTileMemoryCallback *, unsigned __int64); // r14
  const NavMeshDataHeader *header; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // dl
  const Vector3f *verts; // rcx
  char v27; // dl
  float *v28; // rax
  float *v29; // rdx
  unsigned __int64 v30; // rsi
  float v31; // xmm0_4
  const float *v32; // rax
  unsigned int *v33; // rdx
  PortalArea *v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  int n; // [rsp+4Ch] [rbp-324h]
  unsigned int i; // [rsp+50h] [rbp-320h]
  int j; // [rsp+54h] [rbp-31Ch]
  float fromCoord; // [rsp+5Ch] [rbp-314h]
  int nv; // [rsp+60h] [rbp-310h]
  float toCoord; // [rsp+64h] [rbp-30Ch]
  NavMeshPolyRef base; // [rsp+78h] [rbp-2F8h]
  NavMeshPoly *poly; // [rsp+88h] [rbp-2E8h]
  const Vector2f *toMax; // [rsp+98h] [rbp-2D8h]
  char v51[720]; // [rsp+A0h] [rbp-2D0h] BYREF

  v10 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_4(672LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "5 48 4 17 toPointCount:3354 64 8 12 polyRef:3371 96 128 14 fromSlabs:3345 256 128 12 toSlabs:33"
                         "53 416 192 13 toPoints:3352";
  *(_QWORD *)(v10 + 16) = NavMesh::FindConnectingPolys;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234556943;
  v12[536862722] = -218959360;
  v12[536862727] = -218959118;
  v12[536862732] = -218959118;
  v12[536862739] = -202116109;
  v12[536862740] = -202116109;
  if ( tile )
  {
    if ( fromPointCount > 1 )
    {
      v14 = (__m128i)0x3F000000u;
      for ( k = 15LL; k >= 0; --k )
        ;
      MakeDetailEdgeSlabs((Vector2f *)(v10 + 96), fromPoints, fromPointCount, side);
      *(float *)v14.m128i_i32 = GetSlabCoord(fromPoints, side);
      fromCoord = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
      v16 = 15LL;
      v17 = (Vector3f *)(v10 + 416);
      while ( v16 >= 0 )
      {
        Vector3f::Vector3f(v17++);
        --v16;
      }
      for ( m = 15LL; m >= 0; --m )
        ;
      *(_DWORD *)(v10 + 48) = 0;
      NavMeshTileMemoryQueryTileExtSample::NavMeshTileMemoryQueryTileExtSample(
        (NavMeshTileMemoryQueryTileExtSample *const)(v10 + 64),
        callback,
        tile);
      NavMeshTileMemoryQueryTileExtSample::~NavMeshTileMemoryQueryTileExtSample((NavMeshTileMemoryQueryTileExtSample *const)(v10 + 64));
      n = 0;
      v19 = (unsigned __int64)tile;
      base = NavMesh::GetPolyRefBase(this, tile, callback);
      if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(base) )
      {
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, tile);
        v20 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 6);
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v20 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 6, tile);
        v21 = *(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v20;
        v19 = NavMeshPolyRefHelper::DecodePolyIdTile(base);
        if ( (const NavMeshTile *)v21(callback, v19) != tile )
        {
          __asan_handle_no_return(callback);
          __assert_fail(
            "checkTile == tile",
            "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
            0xD24u,
            "int NavMesh::FindConnectingPolys(const Vector3f*, int, const NavMeshTile*, int, NavMeshPolyRef*, PortalArea*"
            ", int, float, NavMeshTileMemoryCallback*) const");
        }
      }
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tile->header, v19);
        header = tile->header;
        if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3)
                                                                + 0x7FFF8000) )
        {
          *(double *)v14.m128i_i64 = __asan_report_load4(&header->polyCount);
        }
        if ( (signed int)i >= header->polyCount )
          break;
        v19 = i;
        *(_QWORD *)(v10 + 64) = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, i);
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, i);
        v23 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 25);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v23 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 25, i);
        if ( !(*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *, double))v23)(
                callback,
                *(double *)v14.m128i_i64) )
          goto LABEL_76;
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, i);
        v24 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 4);
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 4, i);
        v19 = v10 + 64;
        if ( (*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v24)(callback, v10 + 64) == 1 )
        {
LABEL_76:
          if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->polys, v19);
          poly = &tile->polys[i];
          v19 = ((_BYTE)poly + 28) & 7;
          if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
            && (char)v19 >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&poly->vertCount);
          }
          nv = poly->vertCount;
          for ( j = 0; j < nv; ++j )
          {
            v25 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
            v19 = ((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1;
            if ( v25 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v25 )
              __asan_report_load2(&poly->neis[j]);
            if ( ((unsigned __int16)side | 0x8000) == poly->neis[j] )
            {
              if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
                __asan_report_load8(&tile->verts, v19);
              verts = tile->verts;
              v27 = *(_BYTE *)(((unsigned __int64)&poly->verts[j] >> 3) + 0x7FFF8000);
              if ( v27 != 0 && (char)(((2 * j + (_BYTE)poly) & 7) + 1) >= v27 )
                __asan_report_load2(&poly->verts[j]);
              v19 = (unsigned int)side;
              *(float *)v14.m128i_i32 = GetSlabCoord(&verts[poly->verts[j]], side);
              toCoord = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
              v14 = (__m128i)LODWORD(fromCoord);
              *(float *)v14.m128i_i32 = Abs(fromCoord - toCoord);
              if ( *(float *)v14.m128i_i32 <= 0.0099999998 )
              {
                v19 = (unsigned __int64)tile;
                NavMesh::GetPolyEdgeDetailPoints(this, tile, i, j, (Vector3f *)(v10 + 416), (int *)(v10 + 48), 16);
                if ( *(_DWORD *)(v10 + 48) )
                {
                  MakeDetailEdgeSlabs(
                    (Vector2f *)(v10 + 256),
                    (const Vector3f *)(v10 + 416),
                    *(_DWORD *)(v10 + 48),
                    side);
                  toMax = (const Vector2f *)(8LL * (*(_DWORD *)(v10 + 48) - 1) + v10 + 256);
                  v19 = (unsigned int)fromPointCount;
                  v14 = (__m128i)0x3C23D70Au;
                  if ( OverlapDetailSlabs(
                         (const Vector2f *)(v10 + 96),
                         fromPointCount,
                         (const Vector2f *)(v10 + 256),
                         *(_DWORD *)(v10 + 48),
                         0.0099999998,
                         0.5 * portalHeight) )
                  {
                    if ( n < maxcon )
                    {
                      v28 = (float *)std::max<float>((const float *)(v10 + 96), (const float *)(v10 + 256));
                      v29 = v28;
                      v30 = (unsigned __int64)&conarea[n];
                      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v28);
                      }
                      v31 = *v29;
                      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) != 0
                        && (char)((v30 & 7) + 3) >= *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store4(v30);
                      }
                      *(float *)v30 = v31;
                      v32 = std::min<float>(
                              (const float *)(8LL * (fromPointCount - 1) + v10 + 96),
                              (const float *)toMax);
                      v33 = (unsigned int *)v32;
                      v34 = &conarea[n];
                      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v32);
                      }
                      v14 = (__m128i)*v33;
                      if ( *(_BYTE *)(((unsigned __int64)&v34->max >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)v34 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->max >> 3)
                                                                          + 0x7FFF8000) )
                      {
                        __asan_report_store4(&v34->max);
                      }
                      LODWORD(v34->max) = v14.m128i_i32[0];
                      v35 = (unsigned __int64)&con[n];
                      v36 = *(_QWORD *)(v10 + 64);
                      v19 = *(unsigned __int8 *)((v35 >> 3) + 0x7FFF8000);
                      if ( (_BYTE)v19 )
                        v35 = __asan_report_store8();
                      *(_QWORD *)v35 = v36;
                      ++n;
                    }
                    break;
                  }
                }
              }
            }
          }
        }
      }
      result = n;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v51 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v10 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v10 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 3418: range 000000000CC3902E-000000000CC39F21
void __cdecl NavMesh::RemoveLinkBetween(
        const NavMesh *const this,
        NavMeshPolyRef from,
        NavMeshPolyRef to,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  NavMeshTileMemoryCallback *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rax
  char v20; // dl
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  char v25; // dl
  unsigned __int64 v26; // rax
  NavMeshTileMemoryCallback *p_next; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  char v30; // dl
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  const NavMeshTile *v36; // rsi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned int k; // [rsp+2Ch] [rbp-124h]
  unsigned int pk; // [rsp+30h] [rbp-120h]
  unsigned int k_0; // [rsp+34h] [rbp-11Ch]
  unsigned int pk_0; // [rsp+38h] [rbp-118h]
  unsigned int k_1; // [rsp+3Ch] [rbp-114h]
  unsigned int nk_1; // [rsp+40h] [rbp-110h]
  unsigned int nk_0; // [rsp+44h] [rbp-10Ch]
  unsigned int index; // [rsp+48h] [rbp-108h]
  unsigned int nk; // [rsp+4Ch] [rbp-104h]
  unsigned __int64 link_1; // [rsp+50h] [rbp-100h]
  NavMeshLink *plink_0; // [rsp+58h] [rbp-F8h]
  const NavMeshTile *neiTile_0; // [rsp+60h] [rbp-F0h]
  NavMeshTile *neiTile; // [rsp+68h] [rbp-E8h]
  NavMeshLink *link_0; // [rsp+70h] [rbp-E0h]
  NavMeshLink *plink; // [rsp+78h] [rbp-D8h]
  const OffMeshConnection *con; // [rsp+80h] [rbp-D0h]
  unsigned __int64 link; // [rsp+88h] [rbp-C8h]
  char v60[192]; // [rsp+90h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 9 salt:3419 64 4 7 it:3419 80 4 9 type:3419 96 4 7 ip:3419 112 4 14 allocflag:3419 128 8 9 dcon:3428";
  *(_QWORD *)(v4 + 16) = NavMesh::RemoveLinkBetween;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -202116352;
  v7 = (char *)(v4 + 112);
  NavMeshPolyRefHelper::DecodePolyId(
    (unsigned int *)(v4 + 48),
    (unsigned int *)(v4 + 112),
    (unsigned int *)(v4 + 64),
    (unsigned int *)(v4 + 80),
    (unsigned int *)(v4 + 96),
    from);
  if ( NavMeshPolyRefHelper::DecodePolyIdType(from) == 1 )
  {
    con = NavMesh::GetOffMeshConnection(this, from);
    if ( con )
    {
      index = NavMeshPolyRefHelper::DecodePolyIdPoly(from);
      *(_QWORD *)(v4 + 128) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, from);
      v8 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 14);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 14, from);
      if ( (*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD, unsigned __int64))v8)(
             callback,
             index,
             v4 + 128) )
      {
        v9 = (((_BYTE)con - 68) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&con->firstLink);
        }
        k = con->firstLink;
        pk = -1;
        while ( k != -1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v9);
          v10 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 10);
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 10, v9);
          v9 = k;
          v11 = callback;
          link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v10)(callback, k);
          if ( !link )
            break;
          if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
          {
            v11 = (NavMeshTileMemoryCallback *)link;
            __asan_report_load8(link, k);
          }
          if ( to == *(_QWORD *)link )
          {
            if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
            {
              v11 = (NavMeshTileMemoryCallback *)(link + 8);
              __asan_report_load4(link + 8);
            }
            nk = *(_DWORD *)(link + 8);
            if ( pk == -1 )
            {
              v12 = *(_QWORD *)(v4 + 128);
              if ( *(_BYTE *)(((unsigned __int64)(v12 + 96) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(v12 + 96) >> 3) + 0x7FFF8000) <= 3 )
              {
                v12 = __asan_report_store4(v12 + 96);
              }
              *(_DWORD *)(v12 + 96) = nk;
            }
            else
            {
              if ( pk == nk )
              {
                __asan_handle_no_return(v11);
                __assert_fail(
                  "pk != nk",
                  "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                  0xD79u,
                  "void NavMesh::RemoveLinkBetween(NavMeshPolyRef, NavMeshPolyRef, NavMeshTileMemoryCallback*) const");
              }
              if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(link + 8);
              *(_DWORD *)(link + 8) = nk;
            }
            v13 = *(_QWORD *)(v4 + 128);
            if ( *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) != 0
              && (char)((link + 12) & 7) >= *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(link + 12);
            }
            v14 = *(unsigned __int8 *)(link + 12);
            v15 = *(unsigned __int8 *)(((v13 + 48 * (unsigned __int64)*(unsigned __int8 *)(link + 12) + 32 + 8) >> 3)
                                     + 0x7FFF8000);
            if ( (_BYTE)v15 )
              __asan_report_store8();
            *(_QWORD *)(v13 + 48LL * v14 + 40) = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
              __asan_report_load8(callback, v15);
            v16 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 12);
            if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
              v16 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 12, v15);
            v9 = k;
            (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v16)(callback, k);
            break;
          }
          pk = k;
          if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(link + 8);
          k = *(_DWORD *)(link + 8);
        }
        v17 = *(_QWORD *)(v4 + 128);
        v18 = *(_BYTE *)(((unsigned __int64)(v17 + 96) >> 3) + 0x7FFF8000);
        LOBYTE(v9) = v18 != 0;
        if ( v18 != 0 && v18 <= 3 )
          __asan_report_load4(v17 + 96);
        if ( *(_DWORD *)(v17 + 96) == -1 )
          goto LABEL_145;
        v19 = *(_QWORD *)(v4 + 128);
        v20 = *(_BYTE *)(((unsigned __int64)(v19 + 96) >> 3) + 0x7FFF8000);
        LOBYTE(v9) = v20 != 0;
        if ( v20 != 0 && v20 <= 3 )
          __asan_report_load4(v19 + 96);
        if ( *(int *)(v19 + 96) < 0 )
        {
LABEL_145:
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v9);
          v21 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 15);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 15, v9);
          (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v21)(callback, index);
        }
      }
    }
  }
  else if ( *(_DWORD *)(v4 + 112) )
  {
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, v7);
    v22 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 6);
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      v22 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 6, v7);
    v23 = *(unsigned int *)(v4 + 64);
    neiTile = (NavMeshTile *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, __int64))v22)(callback, v23);
    if ( neiTile )
    {
      if ( *(_BYTE *)(((unsigned __int64)&neiTile->salt >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&neiTile->salt >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&neiTile->salt);
      }
      if ( neiTile->salt == *(_DWORD *)(v4 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&neiTile->polyLinks >> 3) + 0x7FFF8000) )
          __asan_report_load8(&neiTile->polyLinks, v23);
        v24 = (unsigned __int64)&neiTile->polyLinks[*(unsigned int *)(v4 + 96)];
        v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
        LOBYTE(v23) = v25 != 0;
        if ( v25 != 0 && (char)(((LOBYTE(neiTile->polyLinks) + 4 * *(_DWORD *)(v4 + 96)) & 7) + 3) >= v25 )
          __asan_report_load4(&neiTile->polyLinks[*(unsigned int *)(v4 + 96)]);
        k_0 = *(_DWORD *)v24;
        pk_0 = -1;
        while ( k_0 != -1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v23);
          v26 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 10);
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 10, v23);
          v23 = k_0;
          p_next = callback;
          v28 = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v26)(callback, k_0);
          link_0 = (NavMeshLink *)v28;
          if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          {
            p_next = (NavMeshTileMemoryCallback *)v28;
            __asan_report_load8(v28, k_0);
          }
          if ( to == link_0->ref )
          {
            if ( *(_BYTE *)(((unsigned __int64)&link_0->next >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&link_0->next >> 3) + 0x7FFF8000) <= 3 )
            {
              p_next = (NavMeshTileMemoryCallback *)&link_0->next;
              __asan_report_load4(&link_0->next);
            }
            nk_0 = link_0->next;
            if ( pk_0 == -1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&neiTile->polyLinks >> 3) + 0x7FFF8000) )
                __asan_report_load8(&neiTile->polyLinks, k_0);
              v29 = (unsigned __int64)&neiTile->polyLinks[*(unsigned int *)(v4 + 96)];
              v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
              LOBYTE(v23) = v30 != 0;
              if ( v30 != 0 && (char)(((LOBYTE(neiTile->polyLinks) + 4 * *(_DWORD *)(v4 + 96)) & 7) + 3) >= v30 )
                __asan_report_store4(&neiTile->polyLinks[*(unsigned int *)(v4 + 96)]);
              *(_DWORD *)v29 = nk_0;
            }
            else
            {
              if ( pk_0 == nk_0 )
              {
                __asan_handle_no_return(p_next);
                __assert_fail(
                  "pk != nk",
                  "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                  0xD9Fu,
                  "void NavMesh::RemoveLinkBetween(NavMeshPolyRef, NavMeshPolyRef, NavMeshTileMemoryCallback*) const");
              }
              if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                __asan_report_load8(callback, k_0);
              v31 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 10);
              if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
                v31 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 10, k_0);
              v23 = pk_0;
              plink = (NavMeshLink *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v31)(
                                       callback,
                                       pk_0);
              if ( *(_BYTE *)(((unsigned __int64)&plink->next >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&plink->next >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&plink->next);
              }
              plink->next = nk_0;
            }
            if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
              __asan_report_load8(callback, v23);
            v32 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 12);
            if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
              v32 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 12, v23);
            (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v32)(callback, k_0);
            break;
          }
          pk_0 = k_0;
          if ( *(_BYTE *)(((unsigned __int64)&link_0->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&link_0->next >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&link_0->next);
          }
          k_0 = link_0->next;
        }
      }
    }
  }
  else
  {
    v33 = *(unsigned int *)(v4 + 64);
    neiTile_0 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v33);
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, v33);
    v34 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 21);
    if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
      v34 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 21, v33);
    k_1 = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *, _QWORD))v34)(
            callback,
            neiTile_0,
            *(unsigned int *)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, neiTile_0);
    v35 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 10);
    if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
      v35 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 10, neiTile_0);
    v36 = (const NavMeshTile *)k_1;
    link_1 = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v35)(callback, k_1);
    plink_0 = 0LL;
    while ( link_1 )
    {
      if ( *(_BYTE *)((link_1 >> 3) + 0x7FFF8000) )
        __asan_report_load8(link_1, v36);
      if ( to == *(_QWORD *)link_1 )
      {
        if ( *(_BYTE *)(((link_1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link_1 + 8) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(link_1 + 8);
        nk_1 = *(_DWORD *)(link_1 + 8);
        if ( plink_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&plink_0->next >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&plink_0->next >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&plink_0->next);
          }
          plink_0->next = nk_1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v36);
          v37 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 22);
          if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
            v37 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 22, v36);
          v36 = neiTile_0;
          (*(void (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *, _QWORD))v37)(
            callback,
            neiTile_0,
            *(unsigned int *)(v4 + 96));
        }
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v36);
        v38 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 12);
        if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
          v38 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 12, v36);
        (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v38)(callback, k_1);
        break;
      }
      plink_0 = (NavMeshLink *)link_1;
      if ( *(_BYTE *)(((link_1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link_1 + 8) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(link_1 + 8);
      k_1 = *(_DWORD *)(link_1 + 8);
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, v36);
      v39 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 10);
      if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
        v39 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 10, v36);
      v36 = (const NavMeshTile *)*(unsigned int *)(link_1 + 8);
      link_1 = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *))v39)(callback, v36);
    }
  }
  if ( v60 == (char *)v4 )
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
};

// Line 3531: range 000000000CC39F22-000000000CC3B0A3
void __cdecl NavMesh::ConnectExtLinks(
        const NavMesh *const this,
        NavMeshTile *tile,
        const NavMeshTile *target,
        int side,
        float portalHeight,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  char *v8; // rbx
  _DWORD *v9; // r12
  const NavMeshDataHeader *header; // rdx
  char v11; // cl
  char v12; // dl
  char v13; // dl
  const Vector3f *verts; // rcx
  char v15; // dl
  const Vector3f *v16; // r14
  size_t Index; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  Vector3f *v20; // r15
  int v21; // eax
  unsigned __int64 v22; // rax
  NavMeshPolyRef v23; // rdx
  __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  char v26; // dl
  __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rcx
  char v31; // dl
  double v32; // xmm0_8
  char v33; // dl
  int v34; // esi
  char v35; // dl
  double v36; // xmm0_8
  char v37; // dl
  int v38; // esi
  unsigned __int64 v39; // rcx
  char v40; // dl
  unsigned int ConnectRegionId; // eax
  NavMeshTile *tilea; // [rsp+20h] [rbp-320h]
  int i; // [rsp+38h] [rbp-308h]
  int j; // [rsp+3Ch] [rbp-304h]
  int k; // [rsp+40h] [rbp-300h]
  int nv; // [rsp+44h] [rbp-2FCh]
  unsigned int dir; // [rsp+48h] [rbp-2F8h]
  int nnei; // [rsp+4Ch] [rbp-2F4h]
  NavMeshPoly *poly; // [rsp+50h] [rbp-2F0h]
  const Vector3f *va; // [rsp+58h] [rbp-2E8h]
  const Vector3f *vb; // [rsp+60h] [rbp-2E0h]
  unsigned __int64 link; // [rsp+68h] [rbp-2D8h]
  char v58[720]; // [rsp+70h] [rbp-2D0h] BYREF

  tilea = tile;
  v6 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(672LL);
    if ( v7 )
      v6 = v7;
  }
  v8 = (char *)(v6 + 672);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "11 48 4 15 pointCount:3566 64 4 8 idx:3578 80 4 9 tmin:3603 96 4 9 tmax:3604 112 8 12 neiTile:36"
                        "15 144 8 12 neiPoly:3616 176 16 12 linkEpl:3574 208 32 8 nei:3569 272 32 9 neia:3570 336 48 16 l"
                        "inkRefSets:3547 416 192 11 points:3565";
  *(_QWORD *)(v6 + 16) = NavMesh::ConnectExtLinks;
  v9 = (_DWORD *)(v6 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = 61956;
  v9[536862723] = -234881024;
  v9[536862724] = 62194;
  v9[536862724] = -234881024;
  v9[536862725] = 62194;
  v9[536862726] = 62194;
  v9[536862727] = -219021312;
  v9[536862728] = 62194;
  v9[536862729] = -219021312;
  v9[536862730] = 62194;
  v9[536862732] = -218959118;
  v9[536862739] = -202116109;
  v9[536862740] = -202116109;
  if ( tile )
  {
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->header, tile);
      header = tilea->header;
      v11 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
      LOBYTE(tile) = v11 != 0;
      if ( v11 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v11 )
        __asan_report_load4(&header->polyCount);
      if ( i >= header->polyCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->polys, tile);
      poly = &tilea->polys[i];
      std::set<unsigned long long>::set((std::set<long long unsigned int> *const)(v6 + 336));
      tile = (NavMeshTile *)(((_BYTE)poly + 28) & 7);
      if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)tile >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&poly->vertCount);
      }
      nv = poly->vertCount;
      for ( j = 0; j < nv; ++j )
      {
        v12 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
        tile = (NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
        if ( v12 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v12 )
          __asan_report_load2(&poly->neis[j]);
        if ( (poly->neis[j] & 0x8000u) != 0 )
        {
          v13 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          tile = (NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
          if ( v13 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v13 )
            __asan_report_load2(&poly->neis[j]);
          dir = (unsigned __int8)poly->neis[j];
          if ( side == -1 || dir == side )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tilea->verts >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tilea->verts, tile);
            verts = tilea->verts;
            v15 = *(_BYTE *)(((unsigned __int64)&poly->verts[j] >> 3) + 0x7FFF8000);
            if ( v15 != 0 && (char)(((2 * j + (_BYTE)poly) & 7) + 1) >= v15 )
              __asan_report_load2(&poly->verts[j]);
            va = &verts[poly->verts[j]];
            v16 = tilea->verts;
            Index = NextIndex(j, nv);
            v18 = (unsigned __int64)&poly->verts[Index];
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
              && (char)((v18 & 7) + 1) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(v18);
            }
            vb = &v16[poly->verts[Index]];
            v19 = 15LL;
            v20 = (Vector3f *)(v6 + 416);
            while ( v19 >= 0 )
            {
              Vector3f::Vector3f(v20++);
              --v19;
            }
            *(_DWORD *)(v6 + 48) = 0;
            NavMesh::GetPolyEdgeDetailPoints(this, tilea, i, j, (Vector3f *)(v6 + 416), (int *)(v6 + 48), 16);
            v21 = TileLUTHelper::OppositeTile(dir);
            tile = (NavMeshTile *)(v6 + 416);
            nnei = NavMesh::FindConnectingPolys(
                     this,
                     (const Vector3f *)(v6 + 416),
                     *(_DWORD *)(v6 + 48),
                     target,
                     v21,
                     (NavMeshPolyRef *)(v6 + 208),
                     (PortalArea *)(v6 + 272),
                     4,
                     portalHeight,
                     callback);
            for ( k = 0; k < nnei; ++k )
            {
              tile = (NavMeshTile *)(v6 + 208 + 8LL * k);
              *(std::pair<std::_Rb_tree_const_iterator<long long unsigned int>,bool> *)(v6 + 176) = std::set<unsigned long long>::emplace<unsigned long long &>((std::set<long long unsigned int> *const)(v6 + 336), (unsigned __int64 *)&tile->surfaceID, (unsigned __int64 *)&tile->surfaceID);
              if ( *(_BYTE *)(v6 + 184) == 1 )
              {
                *(_DWORD *)(v6 + 64) = 0;
                if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                  __asan_report_load8(callback, tile);
                v22 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
                if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                  v22 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, tile);
                tile = (NavMeshTile *)(v6 + 64);
                link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v22)(callback, v6 + 64);
                if ( link )
                {
                  if ( *(_BYTE *)(((8LL * k + v6 + 208) >> 3) + 0x7FFF8000) )
                    __asan_report_load8(8LL * k + v6 + 208, tile);
                  v23 = *(_QWORD *)&v8[8 * k - 464];
                  if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(_QWORD *)link = v23;
                  if ( *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) != 0
                    && (char)((link + 12) & 7) >= *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store1(link + 12);
                  }
                  *(_BYTE *)(link + 12) = j;
                  v24 = dir;
                  if ( *(_BYTE *)(((link + 13) >> 3) + 0x7FFF8000) != 0
                    && (char)((link + 13) & 7) >= *(_BYTE *)(((link + 13) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store1(link + 13);
                  }
                  *(_BYTE *)(link + 13) = dir;
                  if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&tilea->polyLinks, dir);
                  v25 = (unsigned __int64)&tilea->polyLinks[i];
                  v26 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
                  LOBYTE(v24) = v26 != 0;
                  v27 = ((LOBYTE(tilea->polyLinks) + 4 * (_BYTE)i) & 7u) + 3;
                  if ( v26 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= v26 )
                  {
                    v27 = (__int64)&tilea->polyLinks[i];
                    __asan_report_load4(v27);
                  }
                  if ( *(_DWORD *)v25 == *(_DWORD *)(v6 + 64) )
                  {
                    __asan_handle_no_return(v27);
                    __assert_fail(
                      "idx != tile->polyLinks[i]",
                      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                      0xE02u,
                      "void NavMesh::ConnectExtLinks(NavMeshTile*, const NavMeshTile*, int, float, NavMeshTileMemoryCallback*) const");
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&tilea->polyLinks, v24);
                  v28 = (unsigned __int64)&tilea->polyLinks[i];
                  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0
                    && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(&tilea->polyLinks[i]);
                  }
                  v29 = *(_DWORD *)v28;
                  if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(link + 8);
                  }
                  *(_DWORD *)(link + 8) = v29;
                  v30 = (unsigned __int64)&tilea->polyLinks[i];
                  tile = (NavMeshTile *)*(unsigned int *)(v6 + 64);
                  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) != 0
                    && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(&tilea->polyLinks[i]);
                  }
                  *(_DWORD *)v30 = (_DWORD)tile;
                  if ( dir && dir != 4 )
                  {
                    if ( dir == 2 || dir == 6 )
                    {
                      v35 = *(_BYTE *)(((8LL * k + v6 + 272) >> 3) + 0x7FFF8000);
                      if ( v35 != 0 && (char)(((8 * k + v6 - 96 + 112) & 7) + 3) >= v35 )
                        __asan_report_load4(8LL * k + v6 + 272);
                      LODWORD(v36) = *(_DWORD *)&v8[8 * k - 400];
                      if ( *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)va & 7) + 3) >= *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) )
                      {
                        v36 = __asan_report_load4(va);
                      }
                      *(float *)&v36 = *(float *)&v36 - va->x;
                      if ( *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)vb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) )
                      {
                        v36 = __asan_report_load4(vb);
                      }
                      *(float *)(v6 + 80) = *(float *)&v36 / (float)(vb->x - va->x);
                      v37 = *(_BYTE *)(((8LL * k + v6 + 272 + 4) >> 3) + 0x7FFF8000);
                      if ( v37 != 0 && (char)(((8 * k + v6 - 96 + 112 + 4) & 7) + 3) >= v37 )
                        __asan_report_load4(8LL * k + v6 + 272 + 4);
                      *(float *)(v6 + 96) = (float)(*(float *)(v6 + 672 + 8LL * k - 396) - va->x)
                                          / (float)(vb->x - va->x);
                      if ( *(float *)(v6 + 80) > *(float *)(v6 + 96) )
                        std::swap<float>((float *)(v6 + 80), (float *)(v6 + 96));
                      v38 = (int)(float)(FloatClamp(*(float *)(v6 + 80), 0.0, 1.0) * 255.0);
                      if ( *(_BYTE *)(((link + 14) >> 3) + 0x7FFF8000) != 0
                        && (char)((link + 14) & 7) >= *(_BYTE *)(((link + 14) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store1(link + 14);
                      }
                      *(_BYTE *)(link + 14) = v38;
                      tile = (NavMeshTile *)(unsigned int)(int)(float)(FloatClamp(*(float *)(v6 + 96), 0.0, 1.0) * 255.0);
                      if ( *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) != 0
                        && (char)((link + 15) & 7) >= *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store1(link + 15);
                      }
                      *(_BYTE *)(link + 15) = (_BYTE)tile;
                    }
                  }
                  else
                  {
                    v31 = *(_BYTE *)(((8LL * k + v6 + 272) >> 3) + 0x7FFF8000);
                    if ( v31 != 0 && (char)(((8 * k + v6 - 96 + 112) & 7) + 3) >= v31 )
                      __asan_report_load4(8LL * k + v6 + 272);
                    LODWORD(v32) = *(_DWORD *)&v8[8 * k - 400];
                    if ( *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)va + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) )
                    {
                      v32 = __asan_report_load4(&va->z);
                    }
                    *(float *)&v32 = *(float *)&v32 - va->z;
                    if ( *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)vb + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) )
                    {
                      v32 = __asan_report_load4(&vb->z);
                    }
                    *(float *)(v6 + 80) = *(float *)&v32 / (float)(vb->z - va->z);
                    v33 = *(_BYTE *)(((8LL * k + v6 + 272 + 4) >> 3) + 0x7FFF8000);
                    if ( v33 != 0 && (char)(((8 * k + v6 - 96 + 112 + 4) & 7) + 3) >= v33 )
                      __asan_report_load4(8LL * k + v6 + 272 + 4);
                    *(float *)(v6 + 96) = (float)(*(float *)(v6 + 672 + 8LL * k - 396) - va->z) / (float)(vb->z - va->z);
                    if ( *(float *)(v6 + 80) > *(float *)(v6 + 96) )
                      std::swap<float>((float *)(v6 + 80), (float *)(v6 + 96));
                    v34 = (int)(float)(FloatClamp(*(float *)(v6 + 80), 0.0, 1.0) * 255.0);
                    if ( *(_BYTE *)(((link + 14) >> 3) + 0x7FFF8000) != 0
                      && (char)((link + 14) & 7) >= *(_BYTE *)(((link + 14) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store1(link + 14);
                    }
                    *(_BYTE *)(link + 14) = v34;
                    tile = (NavMeshTile *)(unsigned int)(int)(float)(FloatClamp(*(float *)(v6 + 96), 0.0, 1.0) * 255.0);
                    if ( *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) != 0
                      && (char)((link + 15) & 7) >= *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store1(link + 15);
                    }
                    *(_BYTE *)(link + 15) = (_BYTE)tile;
                  }
                }
              }
            }
            if ( *(_BYTE *)(((unsigned __int64)&tilea->polyRegions >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tilea->polyRegions, tile);
            v39 = (unsigned __int64)&tilea->polyRegions[i];
            v40 = *(_BYTE *)((v39 >> 3) + 0x7FFF8000);
            LOBYTE(tile) = v40 != 0;
            if ( v40 != 0 && (char)(((LOBYTE(tilea->polyRegions) + 4 * i) & 7) + 3) >= v40 )
              __asan_report_load4(&tilea->polyRegions[i]);
            if ( *(_DWORD *)v39 == -2 && nnei > 0 )
            {
              *(_QWORD *)(v6 + 112) = 0LL;
              *(_QWORD *)(v6 + 144) = 0LL;
              NavMesh::GetTileAndPolyByRef(
                this,
                *(_QWORD *)(v6 + 208),
                (const NavMeshTile **)(v6 + 112),
                (const NavMeshPoly **)(v6 + 144),
                callback);
              ConnectRegionId = NavMesh::FindConnectRegionId(
                                  this,
                                  *(const NavMeshTile **)(v6 + 112),
                                  *(_QWORD *)(v6 + 208));
              tile = tilea;
              NavMesh::ConnectRegionDyeing(this, tilea, i, ConnectRegionId, callback);
            }
          }
        }
      }
      std::set<unsigned long long>::~set((std::set<long long unsigned int> *const)(v6 + 336));
    }
  }
  if ( v58 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF804C) = 0LL;
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
    *(_DWORD *)((v6 >> 3) + 0x7FFF8050) = -168430091;
  }
};

// Line 3625: range 000000000CC3B0A4-000000000CC3C131
void __cdecl NavMesh::ConnectExtLinks(
        const NavMesh *const this,
        const NavMeshTile *tile,
        NavMeshTile *target,
        int side,
        float portalHeight,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  char *v8; // rbx
  _DWORD *v9; // r12
  unsigned __int64 v10; // rax
  const NavMeshDataHeader *header; // rdx
  char v12; // cl
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  char v15; // dl
  char v16; // dl
  const Vector3f *verts; // rcx
  char v18; // dl
  const Vector3f *v19; // r14
  size_t Index; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  Vector3f *v23; // r15
  int v24; // eax
  unsigned __int64 v25; // rax
  NavMeshPolyRef v26; // rdx
  unsigned __int64 v27; // rax
  char v28; // dl
  double v29; // xmm0_8
  char v30; // dl
  int v31; // esi
  char v32; // dl
  double v33; // xmm0_8
  char v34; // dl
  int v35; // esi
  const NavMeshTile *tilea; // [rsp+20h] [rbp-300h]
  unsigned int i; // [rsp+30h] [rbp-2F0h]
  int j; // [rsp+34h] [rbp-2ECh]
  int k; // [rsp+38h] [rbp-2E8h]
  int nv; // [rsp+3Ch] [rbp-2E4h]
  unsigned int dir; // [rsp+40h] [rbp-2E0h]
  int nnei; // [rsp+44h] [rbp-2DCh]
  unsigned __int64 base; // [rsp+48h] [rbp-2D8h]
  const NavMeshPoly *poly; // [rsp+50h] [rbp-2D0h]
  const Vector3f *va; // [rsp+58h] [rbp-2C8h]
  const Vector3f *vb; // [rsp+60h] [rbp-2C0h]
  NavMeshLink *link; // [rsp+68h] [rbp-2B8h]
  char v52[688]; // [rsp+70h] [rbp-2B0h] BYREF

  tilea = tile;
  v6 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(640LL);
    if ( v7 )
      v6 = v7;
  }
  v8 = (char *)(v6 + 640);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "10 48 4 15 pointCount:3665 64 4 8 idx:3677 80 4 9 tmin:3702 96 4 9 tmax:3703 112 8 12 polyRef:36"
                        "40 144 16 12 linkEpl:3673 176 32 8 nei:3668 240 32 9 neia:3669 304 48 16 linkRefSets:3646 384 19"
                        "2 11 points:3664";
  *(_QWORD *)(v6 + 16) = NavMesh::ConnectExtLinks;
  v9 = (_DWORD *)(v6 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = 61956;
  v9[536862723] = -234881024;
  v9[536862724] = 62194;
  v9[536862725] = 62194;
  v9[536862726] = -219021312;
  v9[536862727] = 62194;
  v9[536862728] = -219021312;
  v9[536862729] = 62194;
  v9[536862731] = -218959118;
  v9[536862738] = -202116109;
  v9[536862739] = -202116109;
  if ( tile )
  {
    NavMeshTileMemoryQueryTileExtSample::NavMeshTileMemoryQueryTileExtSample(
      (NavMeshTileMemoryQueryTileExtSample *const)(v6 + 112),
      callback,
      tile);
    NavMeshTileMemoryQueryTileExtSample::~NavMeshTileMemoryQueryTileExtSample((NavMeshTileMemoryQueryTileExtSample *const)(v6 + 112));
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, callback);
    v10 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 2);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 2, callback);
    base = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *))v10)(callback, tile);
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->header, tile);
      header = tilea->header;
      v12 = *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000);
      LOBYTE(tile) = v12 != 0;
      if ( v12 != 0 && (char)((((_BYTE)header + 20) & 7) + 3) >= v12 )
        __asan_report_load4(&header->polyCount);
      if ( (signed int)i >= header->polyCount )
        break;
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, tile);
      v13 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 25);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 25, tile);
      if ( !(*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *))v13)(callback) )
        goto LABEL_110;
      *(_QWORD *)(v6 + 112) = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, i);
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, i);
      v14 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 4);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 4, i);
      tile = (const NavMeshTile *)(v6 + 112);
      if ( (*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v14)(callback, v6 + 112) == 1 )
      {
LABEL_110:
        if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
          __asan_report_load8(&tilea->polys, tile);
        poly = &tilea->polys[i];
        std::set<unsigned long long>::set((std::set<long long unsigned int> *const)(v6 + 304));
        tile = (const NavMeshTile *)(((_BYTE)poly + 28) & 7);
        if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
          && (char)tile >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&poly->vertCount);
        }
        nv = poly->vertCount;
        for ( j = 0; j < nv; ++j )
        {
          v15 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          tile = (const NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
          if ( v15 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v15 )
            __asan_report_load2(&poly->neis[j]);
          if ( (poly->neis[j] & 0x8000u) != 0 )
          {
            v16 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
            tile = (const NavMeshTile *)(((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1);
            if ( v16 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v16 )
              __asan_report_load2(&poly->neis[j]);
            dir = (unsigned __int8)poly->neis[j];
            if ( side == -1 || dir == side )
            {
              if ( *(_BYTE *)(((unsigned __int64)&tilea->verts >> 3) + 0x7FFF8000) )
                __asan_report_load8(&tilea->verts, tile);
              verts = tilea->verts;
              v18 = *(_BYTE *)(((unsigned __int64)&poly->verts[j] >> 3) + 0x7FFF8000);
              if ( v18 != 0 && (char)(((2 * j + (_BYTE)poly) & 7) + 1) >= v18 )
                __asan_report_load2(&poly->verts[j]);
              va = &verts[poly->verts[j]];
              v19 = tilea->verts;
              Index = NextIndex(j, nv);
              v21 = (unsigned __int64)&poly->verts[Index];
              if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0
                && (char)((v21 & 7) + 1) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load2(v21);
              }
              vb = &v19[poly->verts[Index]];
              v22 = 15LL;
              v23 = (Vector3f *)(v6 + 384);
              while ( v22 >= 0 )
              {
                Vector3f::Vector3f(v23++);
                --v22;
              }
              *(_DWORD *)(v6 + 48) = 0;
              NavMesh::GetPolyEdgeDetailPoints(this, tilea, i, j, (Vector3f *)(v6 + 384), (int *)(v6 + 48), 16);
              v24 = TileLUTHelper::OppositeTile(dir);
              tile = (const NavMeshTile *)(v6 + 384);
              nnei = NavMesh::FindConnectingPolys(
                       this,
                       (const Vector3f *)(v6 + 384),
                       *(_DWORD *)(v6 + 48),
                       target,
                       v24,
                       (NavMeshPolyRef *)(v6 + 176),
                       (PortalArea *)(v6 + 240),
                       4,
                       portalHeight,
                       callback);
              for ( k = 0; k < nnei; ++k )
              {
                tile = (const NavMeshTile *)(v6 + 176 + 8LL * k);
                *(std::pair<std::_Rb_tree_const_iterator<long long unsigned int>,bool> *)(v6 + 144) = std::set<unsigned long long>::emplace<unsigned long long &>((std::set<long long unsigned int> *const)(v6 + 304), (unsigned __int64 *)&tile->surfaceID, (unsigned __int64 *)&tile->surfaceID);
                if ( *(_BYTE *)(v6 + 152) == 1 )
                {
                  *(_DWORD *)(v6 + 64) = -1;
                  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                    __asan_report_load8(callback, tile);
                  v25 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
                  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                    v25 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, tile);
                  tile = (const NavMeshTile *)(v6 + 64);
                  link = (NavMeshLink *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v25)(
                                          callback,
                                          v6 + 64);
                  if ( link )
                  {
                    if ( *(_BYTE *)(((8LL * k + v6 + 176) >> 3) + 0x7FFF8000) )
                      __asan_report_load8(8LL * k + v6 + 176, tile);
                    v26 = *(_QWORD *)&v8[8 * k - 464];
                    if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    link->ref = v26;
                    if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3)
                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link->edge);
                    }
                    link->edge = j;
                    if ( *(_BYTE *)(((unsigned __int64)&link->side >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link->side >> 3)
                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link->side);
                    }
                    link->side = dir;
                    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                      __asan_report_load8(callback, dir);
                    v27 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 20);
                    if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                      v27 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 20, dir);
                    tile = tilea;
                    (*(void (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *, NavMeshLink *, _QWORD, _QWORD))v27)(
                      callback,
                      tilea,
                      link,
                      *(unsigned int *)(v6 + 64),
                      i);
                    if ( dir && dir != 4 )
                    {
                      if ( dir == 2 || dir == 6 )
                      {
                        v32 = *(_BYTE *)(((8LL * k + v6 + 240) >> 3) + 0x7FFF8000);
                        if ( v32 != 0 && (char)(((8 * k + v6 - 16) & 7) + 3) >= v32 )
                          __asan_report_load4(8LL * k + v6 + 240);
                        LODWORD(v33) = *(_DWORD *)&v8[8 * k - 400];
                        if ( *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)va & 7) + 3) >= *(_BYTE *)(((unsigned __int64)va >> 3) + 0x7FFF8000) )
                        {
                          v33 = __asan_report_load4(va);
                        }
                        *(float *)&v33 = *(float *)&v33 - va->x;
                        if ( *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)vb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)vb >> 3) + 0x7FFF8000) )
                        {
                          v33 = __asan_report_load4(vb);
                        }
                        *(float *)(v6 + 80) = *(float *)&v33 / (float)(vb->x - va->x);
                        v34 = *(_BYTE *)(((8LL * k + v6 + 240 + 4) >> 3) + 0x7FFF8000);
                        if ( v34 != 0 && (char)(((8 * k + v6 - 16 + 4) & 7) + 3) >= v34 )
                          __asan_report_load4(8LL * k + v6 + 240 + 4);
                        *(float *)(v6 + 96) = (float)(*(float *)(v6 + 640 + 8LL * k - 396) - va->x)
                                            / (float)(vb->x - va->x);
                        if ( *(float *)(v6 + 80) > *(float *)(v6 + 96) )
                          std::swap<float>((float *)(v6 + 80), (float *)(v6 + 96));
                        v35 = (int)(float)(FloatClamp(*(float *)(v6 + 80), 0.0, 1.0) * 255.0);
                        if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                          && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3)
                                                                            + 0x7FFF8000) )
                        {
                          __asan_report_store1(&link->bmin);
                        }
                        link->bmin = v35;
                        tile = (const NavMeshTile *)(unsigned int)(int)(float)(FloatClamp(*(float *)(v6 + 96), 0.0, 1.0)
                                                                             * 255.0);
                        if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                          && (((unsigned __int8)link + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3)
                                                                            + 0x7FFF8000) )
                        {
                          __asan_report_store1(&link->bmax);
                        }
                        link->bmax = (unsigned __int8)tile;
                      }
                    }
                    else
                    {
                      v28 = *(_BYTE *)(((8LL * k + v6 + 240) >> 3) + 0x7FFF8000);
                      if ( v28 != 0 && (char)(((8 * k + v6 - 16) & 7) + 3) >= v28 )
                        __asan_report_load4(8LL * k + v6 + 240);
                      LODWORD(v29) = *(_DWORD *)&v8[8 * k - 400];
                      if ( *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)va + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&va->z >> 3) + 0x7FFF8000) )
                      {
                        v29 = __asan_report_load4(&va->z);
                      }
                      *(float *)&v29 = *(float *)&v29 - va->z;
                      if ( *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)vb + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vb->z >> 3) + 0x7FFF8000) )
                      {
                        v29 = __asan_report_load4(&vb->z);
                      }
                      *(float *)(v6 + 80) = *(float *)&v29 / (float)(vb->z - va->z);
                      v30 = *(_BYTE *)(((8LL * k + v6 + 240 + 4) >> 3) + 0x7FFF8000);
                      if ( v30 != 0 && (char)(((8 * k + v6 - 16 + 4) & 7) + 3) >= v30 )
                        __asan_report_load4(8LL * k + v6 + 240 + 4);
                      *(float *)(v6 + 96) = (float)(*(float *)(v6 + 640 + 8LL * k - 396) - va->z)
                                          / (float)(vb->z - va->z);
                      if ( *(float *)(v6 + 80) > *(float *)(v6 + 96) )
                        std::swap<float>((float *)(v6 + 80), (float *)(v6 + 96));
                      v31 = (int)(float)(FloatClamp(*(float *)(v6 + 80), 0.0, 1.0) * 255.0);
                      if ( *(_BYTE *)(((unsigned __int64)&link->bmin >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)link + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmin >> 3)
                                                                          + 0x7FFF8000) )
                      {
                        __asan_report_store1(&link->bmin);
                      }
                      link->bmin = v31;
                      tile = (const NavMeshTile *)(unsigned int)(int)(float)(FloatClamp(*(float *)(v6 + 96), 0.0, 1.0)
                                                                           * 255.0);
                      if ( *(_BYTE *)(((unsigned __int64)&link->bmax >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)link + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link->bmax >> 3)
                                                                          + 0x7FFF8000) )
                      {
                        __asan_report_store1(&link->bmax);
                      }
                      link->bmax = (unsigned __int8)tile;
                    }
                  }
                }
              }
            }
          }
        }
        std::set<unsigned long long>::~set((std::set<long long unsigned int> *const)(v6 + 304));
      }
    }
  }
  if ( v52 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0LL;
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
  }
};

// Line 3716: range 000000000CC3C132-000000000CC3C99A
void __cdecl NavMesh::ConnectIntLinks(
        const NavMesh *const this,
        NavMeshTile *tile,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const NavMeshDataHeader *header; // rdx
  unsigned int **p_polyLinks; // rdi
  __int64 v8; // rsi
  unsigned int *v9; // rax
  unsigned __int64 v10; // rcx
  char v11; // dl
  char v12; // dl
  unsigned __int64 v13; // rax
  char v14; // dl
  NavMeshPolyRef v15; // rdx
  __int64 v16; // rsi
  unsigned __int8 v17; // cl
  char v18; // dl
  unsigned __int64 v19; // rcx
  char v20; // dl
  unsigned int *v21; // rdi
  unsigned int *v22; // rcx
  unsigned int v23; // ecx
  unsigned __int64 v24; // rcx
  const NavMesh *thisa; // [rsp+18h] [rbp-98h]
  int i; // [rsp+28h] [rbp-88h]
  int i_0; // [rsp+2Ch] [rbp-84h]
  int j; // [rsp+30h] [rbp-80h]
  int polyCount; // [rsp+34h] [rbp-7Ch]
  NavMeshPolyRef base; // [rsp+38h] [rbp-78h]
  NavMeshPoly *poly; // [rsp+40h] [rbp-70h]
  unsigned __int64 link; // [rsp+48h] [rbp-68h]
  char v35[96]; // [rsp+50h] [rbp-60h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMesh *const)64;
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 idx:3746";
  *(_QWORD *)(v3 + 16) = NavMesh::ConnectIntLinks;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( !tile )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xE85u,
      "void NavMesh::ConnectIntLinks(NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
  {
    this = (const NavMesh *const)&tile->header;
    __asan_report_load8(&tile->header, tile);
  }
  if ( !tile->header )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->header",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xE86u,
      "void NavMesh::ConnectIntLinks(NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tile);
  header = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&header->polyCount);
  }
  polyCount = header->polyCount;
  p_polyLinks = (unsigned int **)thisa;
  base = NavMesh::GetPolyRefBase(thisa, tile, callback);
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
  {
    p_polyLinks = &tile->polyLinks;
    __asan_report_load8(&tile->polyLinks, tile);
  }
  if ( tile->polyLinks )
  {
    __asan_handle_no_return(p_polyLinks);
    __assert_fail(
      "!tile->polyLinks",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xE8Du,
      "void NavMesh::ConnectIntLinks(NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  v8 = 16LL;
  v9 = (unsigned int *)malloc_internal(
                         4LL * polyCount,
                         0x10uLL,
                         kAllocateOptionNone,
                         "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                         3726);
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
    v9 = (unsigned int *)__asan_report_store8();
  tile->polyLinks = v9;
  for ( i = 0; i < polyCount; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->polyLinks, v8);
    v10 = (unsigned __int64)&tile->polyLinks[i];
    v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v11 != 0;
    if ( v11 != 0 && (char)(((LOBYTE(tile->polyLinks) + 4 * i) & 7) + 3) >= v11 )
      __asan_report_store4(&tile->polyLinks[i]);
    *(_DWORD *)v10 = -1;
  }
  for ( i_0 = 0; i_0 < polyCount; ++i_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->polys, v8);
    poly = &tile->polys[i_0];
    v8 = ((_BYTE)poly + 28) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
      && (char)v8 >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&poly->vertCount);
    }
    for ( j = poly->vertCount - 1; j >= 0; --j )
    {
      v12 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
      v8 = ((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1;
      if ( v12 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v12 )
        __asan_report_load2(&poly->neis[j]);
      if ( (__int16)poly->neis[j] > 0 )
      {
        *(_DWORD *)(v3 + 32) = 0;
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v8);
        v13 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, v8);
        v8 = v3 + 32;
        link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v13)(callback, v3 + 32);
        if ( link )
        {
          v14 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          if ( v14 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v14 )
            __asan_report_load2(&poly->neis[j]);
          v15 = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, (unsigned int)poly->neis[j] - 1);
          if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(_QWORD *)link = v15;
          if ( *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) != 0
            && (char)((link + 12) & 7) >= *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(link + 12);
          }
          *(_BYTE *)(link + 12) = j;
          if ( *(_BYTE *)(((link + 13) >> 3) + 0x7FFF8000) != 0
            && (char)((link + 13) & 7) >= *(_BYTE *)(((link + 13) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(link + 13);
          }
          *(_BYTE *)(link + 13) = -1;
          v16 = ((_BYTE)link + 15) & 7;
          if ( *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) != 0
            && (char)v16 >= *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(link + 15);
          }
          *(_BYTE *)(link + 15) = 0;
          v17 = *(_BYTE *)(link + 15);
          v18 = *(_BYTE *)(((link + 14) >> 3) + 0x7FFF8000);
          LOBYTE(v16) = v18 != 0;
          if ( v18 != 0 && (char)((link + 14) & 7) >= v18 )
            __asan_report_store1(link + 14);
          *(_BYTE *)(link + 14) = v17;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->polyLinks, v16);
          v19 = (unsigned __int64)&tile->polyLinks[i_0];
          v20 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
          LOBYTE(v16) = v20 != 0;
          v21 = (unsigned int *)(((LOBYTE(tile->polyLinks) + 4 * (_BYTE)i_0) & 7u) + 3);
          if ( v20 != 0 && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= v20 )
          {
            v21 = &tile->polyLinks[i_0];
            __asan_report_load4(v21);
          }
          if ( *(_DWORD *)v19 == *(_DWORD *)(v3 + 32) )
          {
            __asan_handle_no_return(v21);
            __assert_fail(
              "idx != tile->polyLinks[i]",
              "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
              0xEABu,
              "void NavMesh::ConnectIntLinks(NavMeshTile*, NavMeshTileMemoryCallback*) const");
          }
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->polyLinks, v16);
          v22 = &tile->polyLinks[i_0];
          if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&tile->polyLinks[i_0]);
          }
          v23 = *v22;
          if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(link + 8);
          *(_DWORD *)(link + 8) = v23;
          v24 = (unsigned __int64)&tile->polyLinks[i_0];
          v8 = *(unsigned int *)(v3 + 32);
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->polyLinks[i_0]);
          }
          *(_DWORD *)v24 = v8;
        }
      }
    }
  }
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3764: range 000000000CC3C99C-000000000CC3DB0E
void __cdecl NavMesh::ConnectHavokIntLinks(
        const NavMesh *const this,
        NavMeshTile *tile,
        const NavMeshTile *sourceTile,
        const uint8_t *polyNeiC,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  const NavMeshDataHeader *header; // rdx
  unsigned int **p_polyLinks; // rdi
  unsigned __int64 v10; // rsi
  unsigned int *v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl
  char v14; // dl
  char v15; // dl
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  char v18; // dl
  NavMeshPolyRef v19; // rdx
  __int64 v20; // rsi
  unsigned __int8 v21; // cl
  char v22; // dl
  unsigned __int64 v23; // rcx
  char v24; // dl
  unsigned int *v25; // rdi
  unsigned int *v26; // rcx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  char v30; // dl
  __int64 v31; // rsi
  __int64 v32; // rsi
  unsigned __int8 v33; // cl
  char v34; // dl
  unsigned __int64 v35; // rcx
  char v36; // dl
  unsigned int *v37; // rdi
  unsigned int *v38; // rcx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  const uint8_t *v42; // rcx
  unsigned __int8 v43; // cl
  __int64 v44; // rsi
  unsigned __int8 bmax; // cl
  char v46; // dl
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  char v49; // dl
  unsigned __int64 v50; // rcx
  int v51; // edx
  unsigned __int64 v52; // rcx
  const NavMesh *thisa; // [rsp+28h] [rbp-C8h]
  int i; // [rsp+3Ch] [rbp-B4h]
  int i_0; // [rsp+40h] [rbp-B0h]
  int j; // [rsp+44h] [rbp-ACh]
  int polyCount; // [rsp+48h] [rbp-A8h]
  unsigned int neiPolyIndex; // [rsp+4Ch] [rbp-A4h]
  NavMeshPolyRef base; // [rsp+50h] [rbp-A0h]
  NavMeshPolyRef sourceBase; // [rsp+58h] [rbp-98h]
  NavMeshPoly *poly; // [rsp+60h] [rbp-90h]
  unsigned __int64 polyRef; // [rsp+68h] [rbp-88h]
  unsigned __int64 link_0; // [rsp+70h] [rbp-80h]
  unsigned __int64 neiRef; // [rsp+78h] [rbp-78h]
  NavMeshLink *neiLink; // [rsp+80h] [rbp-70h]
  unsigned __int64 link; // [rsp+88h] [rbp-68h]
  char v71[96]; // [rsp+90h] [rbp-60h] BYREF

  thisa = this;
  v5 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMesh *const)64;
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 8 idx:3813";
  *(_QWORD *)(v5 + 16) = NavMesh::ConnectHavokIntLinks;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  if ( !tile )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xEB5u,
      "void NavMesh::ConnectHavokIntLinks(NavMeshTile*, const NavMeshTile*, const uint8_t*, NavMeshTileMemoryCallback*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
  {
    this = (const NavMesh *const)&tile->header;
    __asan_report_load8(&tile->header, tile);
  }
  if ( !tile->header )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->header",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xEB6u,
      "void NavMesh::ConnectHavokIntLinks(NavMeshTile*, const NavMeshTile*, const uint8_t*, NavMeshTileMemoryCallback*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tile);
  header = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&header->polyCount);
  }
  polyCount = header->polyCount;
  base = NavMesh::GetPolyRefBase(thisa, tile, callback);
  p_polyLinks = (unsigned int **)thisa;
  sourceBase = NavMesh::GetPolyRefBase(thisa, sourceTile, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
  {
    p_polyLinks = &tile->polyLinks;
    __asan_report_load8(&tile->polyLinks, sourceTile);
  }
  if ( tile->polyLinks )
  {
    __asan_handle_no_return(p_polyLinks);
    __assert_fail(
      "!tile->polyLinks",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0xEBDu,
      "void NavMesh::ConnectHavokIntLinks(NavMeshTile*, const NavMeshTile*, const uint8_t*, NavMeshTileMemoryCallback*) const");
  }
  v10 = 16LL;
  v11 = (unsigned int *)malloc_internal(
                          4LL * polyCount,
                          0x10uLL,
                          kAllocateOptionNone,
                          "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                          3774);
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
    v11 = (unsigned int *)__asan_report_store8();
  tile->polyLinks = v11;
  for ( i = 0; i < polyCount; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->polyLinks, v10);
    v12 = (unsigned __int64)&tile->polyLinks[i];
    v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v13 != 0;
    if ( v13 != 0 && (char)(((LOBYTE(tile->polyLinks) + 4 * i) & 7) + 3) >= v13 )
      __asan_report_store4(&tile->polyLinks[i]);
    *(_DWORD *)v12 = -1;
  }
  for ( i_0 = 0; i_0 < polyCount; ++i_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->polys, v10);
    poly = &tile->polys[i_0];
    polyRef = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, i_0);
    v10 = ((_BYTE)poly + 28) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
      && (char)v10 >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&poly->vertCount);
    }
    for ( j = poly->vertCount - 1; j >= 0; --j )
    {
      v14 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
      v10 = ((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1;
      if ( v14 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v14 )
        __asan_report_load2(&poly->neis[j]);
      if ( (__int16)poly->neis[j] > 0 )
      {
        v15 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
        v16 = ((2 * (_BYTE)j + (_BYTE)poly + 12) & 7u) + 1;
        if ( v15 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v15 )
          __asan_report_load2(&poly->neis[j]);
        if ( polyCount < poly->neis[j] )
        {
          *(_DWORD *)(v5 + 32) = 0;
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v16);
          v29 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
          if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
            v29 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, v16);
          link_0 = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v29)(callback, v5 + 32);
          v30 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
          if ( v30 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v30 )
            __asan_report_load2(&poly->neis[j]);
          neiPolyIndex = poly->neis[j] - 1 - polyCount;
          v31 = neiPolyIndex;
          neiRef = sourceBase | NavMeshPolyRefHelper::EncodeBasePolyId(0, neiPolyIndex);
          if ( link_0 )
          {
            if ( *(_BYTE *)((link_0 >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(_QWORD *)link_0 = neiRef;
            if ( *(_BYTE *)(((link_0 + 12) >> 3) + 0x7FFF8000) != 0
              && (char)((link_0 + 12) & 7) >= *(_BYTE *)(((link_0 + 12) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(link_0 + 12);
            }
            *(_BYTE *)(link_0 + 12) = j;
            if ( *(_BYTE *)(((link_0 + 13) >> 3) + 0x7FFF8000) != 0
              && (char)((link_0 + 13) & 7) >= *(_BYTE *)(((link_0 + 13) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(link_0 + 13);
            }
            *(_BYTE *)(link_0 + 13) = -1;
            v32 = ((_BYTE)link_0 + 15) & 7;
            if ( *(_BYTE *)(((link_0 + 15) >> 3) + 0x7FFF8000) != 0
              && (char)v32 >= *(_BYTE *)(((link_0 + 15) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(link_0 + 15);
            }
            *(_BYTE *)(link_0 + 15) = 0;
            v33 = *(_BYTE *)(link_0 + 15);
            v34 = *(_BYTE *)(((link_0 + 14) >> 3) + 0x7FFF8000);
            LOBYTE(v32) = v34 != 0;
            if ( v34 != 0 && (char)((link_0 + 14) & 7) >= v34 )
              __asan_report_store1(link_0 + 14);
            *(_BYTE *)(link_0 + 14) = v33;
            if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->polyLinks, v32);
            v35 = (unsigned __int64)&tile->polyLinks[i_0];
            v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
            LOBYTE(v32) = v36 != 0;
            v37 = (unsigned int *)(((LOBYTE(tile->polyLinks) + 4 * (_BYTE)i_0) & 7u) + 3);
            if ( v36 != 0 && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= v36 )
            {
              v37 = &tile->polyLinks[i_0];
              __asan_report_load4(v37);
            }
            if ( *(_DWORD *)v35 == *(_DWORD *)(v5 + 32) )
            {
              __asan_handle_no_return(v37);
              __assert_fail(
                "idx != tile->polyLinks[i]",
                "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                0xEF0u,
                "void NavMesh::ConnectHavokIntLinks(NavMeshTile*, const NavMeshTile*, const uint8_t*, NavMeshTileMemoryCallback*) const");
            }
            if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->polyLinks, v32);
            v38 = &tile->polyLinks[i_0];
            if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&tile->polyLinks[i_0]);
            }
            v39 = *v38;
            if ( *(_BYTE *)(((link_0 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link_0 + 8) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(link_0 + 8);
            *(_DWORD *)(link_0 + 8) = v39;
            v40 = (unsigned __int64)&tile->polyLinks[i_0];
            v31 = *(unsigned int *)(v5 + 32);
            if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->polyLinks[i_0]);
            }
            *(_DWORD *)v40 = v31;
          }
          *(_DWORD *)(v5 + 32) = -1;
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v31);
          v41 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
          if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
            v41 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, v31);
          v10 = v5 + 32;
          neiLink = (NavMeshLink *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v41)(
                                     callback,
                                     v5 + 32);
          if ( neiLink )
          {
            if ( *(_BYTE *)(((unsigned __int64)neiLink >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            neiLink->ref = polyRef;
            v42 = &polyNeiC[6 * i_0 + j];
            if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
              && ((6 * i_0 + j + (unsigned __int8)polyNeiC) & 7) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&polyNeiC[6 * i_0 + j]);
            }
            v43 = *v42;
            if ( *(_BYTE *)(((unsigned __int64)&neiLink->edge >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)neiLink + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&neiLink->edge >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(&neiLink->edge);
            }
            neiLink->edge = v43;
            if ( *(_BYTE *)(((unsigned __int64)&neiLink->side >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)neiLink + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&neiLink->side >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(&neiLink->side);
            }
            neiLink->side = -1;
            v44 = ((_BYTE)neiLink + 15) & 7;
            if ( *(_BYTE *)(((unsigned __int64)&neiLink->bmax >> 3) + 0x7FFF8000) != 0
              && (char)v44 >= *(_BYTE *)(((unsigned __int64)&neiLink->bmax >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(&neiLink->bmax);
            }
            neiLink->bmax = 0;
            bmax = neiLink->bmax;
            v46 = *(_BYTE *)(((unsigned __int64)&neiLink->bmin >> 3) + 0x7FFF8000);
            LOBYTE(v44) = v46 != 0;
            if ( v46 != 0 && (((unsigned __int8)neiLink + 14) & 7) >= v46 )
              __asan_report_store1(&neiLink->bmin);
            neiLink->bmin = bmax;
            if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
              __asan_report_load8(callback, v44);
            v47 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 20);
            if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
              v47 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 20, v44);
            v10 = (unsigned __int64)sourceTile;
            (*(void (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *, NavMeshLink *, _QWORD, _QWORD))v47)(
              callback,
              sourceTile,
              neiLink,
              *(unsigned int *)(v5 + 32),
              neiPolyIndex);
          }
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->polyRegions, v10);
          v48 = (unsigned __int64)&tile->polyRegions[i_0];
          v49 = *(_BYTE *)((v48 >> 3) + 0x7FFF8000);
          LOBYTE(v10) = v49 != 0;
          if ( v49 != 0 && (char)(((LOBYTE(tile->polyRegions) + 4 * i_0) & 7) + 3) >= v49 )
            __asan_report_load4(&tile->polyRegions[i_0]);
          if ( *(_DWORD *)v48 == -2 && neiRef )
          {
            if ( *(_BYTE *)(((unsigned __int64)&sourceTile->polyRegions >> 3) + 0x7FFF8000) )
              __asan_report_load8(&sourceTile->polyRegions, v10);
            v50 = (unsigned __int64)&sourceTile->polyRegions[neiPolyIndex];
            if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(sourceTile->polyRegions) + 4 * neiPolyIndex) & 7) + 3) >= *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&sourceTile->polyRegions[neiPolyIndex]);
            }
            v51 = *(_DWORD *)v50;
            v52 = (unsigned __int64)&tile->polyRegions[i_0];
            v10 = v51 | 0x80000000;
            if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(tile->polyRegions) + 4 * i_0) & 7) + 3) >= *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->polyRegions[i_0]);
            }
            *(_DWORD *)v52 = v10;
          }
        }
        else
        {
          *(_DWORD *)(v5 + 32) = 0;
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v16);
          v17 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, v16);
          v10 = v5 + 32;
          link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v17)(callback, v5 + 32);
          if ( link )
          {
            v18 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
            if ( v18 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v18 )
              __asan_report_load2(&poly->neis[j]);
            v19 = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, (unsigned int)poly->neis[j] - 1);
            if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(_QWORD *)link = v19;
            if ( *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) != 0
              && (char)((link + 12) & 7) >= *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(link + 12);
            }
            *(_BYTE *)(link + 12) = j;
            if ( *(_BYTE *)(((link + 13) >> 3) + 0x7FFF8000) != 0
              && (char)((link + 13) & 7) >= *(_BYTE *)(((link + 13) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(link + 13);
            }
            *(_BYTE *)(link + 13) = -1;
            v20 = ((_BYTE)link + 15) & 7;
            if ( *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) != 0
              && (char)v20 >= *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(link + 15);
            }
            *(_BYTE *)(link + 15) = 0;
            v21 = *(_BYTE *)(link + 15);
            v22 = *(_BYTE *)(((link + 14) >> 3) + 0x7FFF8000);
            LOBYTE(v20) = v22 != 0;
            if ( v22 != 0 && (char)((link + 14) & 7) >= v22 )
              __asan_report_store1(link + 14);
            *(_BYTE *)(link + 14) = v21;
            if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->polyLinks, v20);
            v23 = (unsigned __int64)&tile->polyLinks[i_0];
            v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
            LOBYTE(v20) = v24 != 0;
            v25 = (unsigned int *)(((LOBYTE(tile->polyLinks) + 4 * (_BYTE)i_0) & 7u) + 3);
            if ( v24 != 0 && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= v24 )
            {
              v25 = &tile->polyLinks[i_0];
              __asan_report_load4(v25);
            }
            if ( *(_DWORD *)v23 == *(_DWORD *)(v5 + 32) )
            {
              __asan_handle_no_return(v25);
              __assert_fail(
                "idx != tile->polyLinks[i]",
                "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                0xEDEu,
                "void NavMesh::ConnectHavokIntLinks(NavMeshTile*, const NavMeshTile*, const uint8_t*, NavMeshTileMemoryCallback*) const");
            }
            if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->polyLinks, v20);
            v26 = &tile->polyLinks[i_0];
            if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&tile->polyLinks[i_0]);
            }
            v27 = *v26;
            if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(link + 8);
            *(_DWORD *)(link + 8) = v27;
            v28 = (unsigned __int64)&tile->polyLinks[i_0];
            v10 = *(unsigned int *)(v5 + 32);
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(tile->polyLinks) + 4 * i_0) & 7) + 3) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->polyLinks[i_0]);
            }
            *(_DWORD *)v28 = v10;
          }
        }
      }
    }
  }
  if ( v71 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3853: range 000000000CC3DB10-000000000CC3E0E0
void __fastcall NavMesh::ConnectRegionDyeing(
        const NavMesh *const this,
        NavMeshTile *tile,
        int ip_0,
        unsigned int color,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned __int64 v8; // rcx
  char v9; // dl
  unsigned __int64 v10; // rax
  std::pair<int,long long unsigned int> v11; // rax
  std::pair<int,long long unsigned int> *p_args_0; // rsi
  unsigned __int64 v13; // rcx
  NavMeshPolyRef ref; // rsi
  unsigned __int64 v15; // rcx
  std::pair<unsigned int,long long unsigned int> v16; // rax
  NavMeshTile *tilea; // [rsp+10h] [rbp-140h]
  NavMeshLink *link; // [rsp+28h] [rbp-128h]
  unsigned __int64 base; // [rsp+30h] [rbp-120h]
  std::queue<std::pair<int,long long unsigned int>>::reference cur; // [rsp+38h] [rbp-118h]
  std::pair<int,long long unsigned int> __args_0; // [rsp+40h] [rbp-110h] BYREF
  char v25[256]; // [rsp+50h] [rbp-100h] BYREF

  tilea = tile;
  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 11 linkIp:3875 64 4 7 ip:3852 80 8 12 polyRef:3858 112 80 16 dyeingQueue:3860";
  *(_QWORD *)(v5 + 16) = NavMesh::ConnectRegionDyeing;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 64) = ip_0;
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->polyRegions, tile);
  v8 = (unsigned __int64)&tile->polyRegions[*(int *)(v5 + 64)];
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  LOBYTE(tile) = v9 != 0;
  if ( v9 != 0 && (char)(((LOBYTE(tilea->polyRegions) + 4 * *(_DWORD *)(v5 + 64)) & 7) + 3) >= v9 )
    __asan_report_load4(&tilea->polyRegions[*(int *)(v5 + 64)]);
  if ( *(_DWORD *)v8 == -2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, tile);
    v10 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 3);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 3, tile);
    base = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, NavMeshTile *))v10)(callback, tilea);
    *(_QWORD *)(v5 + 80) = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, *(_DWORD *)(v5 + 64));
    std::queue<std::pair<int,unsigned long long>>::queue<std::deque<std::pair<int,unsigned long long>>,void>((std::queue<std::pair<int,long long unsigned int>> *const)(v5 + 112));
    v11 = std::make_pair<int &,unsigned long long &>((int *)(v5 + 64), (unsigned __int64 *)(v5 + 80));
    __args_0.first = v11.first;
    __args_0.second = v11.second;
    p_args_0 = &__args_0;
    std::queue<std::pair<int,unsigned long long>>::emplace<std::pair<int,unsigned long long>>(
      (std::queue<std::pair<int,long long unsigned int>> *const)(v5 + 112),
      &__args_0,
      &__args_0);
    while ( !std::queue<std::pair<int,unsigned long long>>::empty((const std::queue<std::pair<int,long long unsigned int>> *const)(v5 + 112)) )
    {
      cur = std::queue<std::pair<int,unsigned long long>>::front((std::queue<std::pair<int,long long unsigned int>> *const)(v5 + 112));
      if ( *(_BYTE *)(((unsigned __int64)cur >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)cur >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(cur);
      }
      *(_DWORD *)(v5 + 64) = cur->first;
      if ( *(_BYTE *)(((unsigned __int64)&cur->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&cur->second, p_args_0);
      *(_QWORD *)(v5 + 80) = cur->second;
      std::queue<std::pair<int,unsigned long long>>::pop((std::queue<std::pair<int,long long unsigned int>> *const)(v5 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&tilea->polyRegions >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tilea->polyRegions, p_args_0);
      v13 = (unsigned __int64)&tilea->polyRegions[*(int *)(v5 + 64)];
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(tilea->polyRegions) + 4 * *(_DWORD *)(v5 + 64)) & 7) + 3) >= *(_BYTE *)((v13 >> 3)
                                                                                                 + 0x7FFF8000) )
      {
        __asan_report_store4(&tilea->polyRegions[*(int *)(v5 + 64)]);
      }
      *(_DWORD *)v13 = color;
      p_args_0 = *(std::pair<int,long long unsigned int> **)(v5 + 80);
      for ( link = (NavMeshLink *)NavMesh::GetFirstLink(this, (NavMeshPolyRef)p_args_0, callback);
            link;
            link = (NavMeshLink *)NavMesh::GetNextLink(this, link, callback) )
      {
        if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
          __asan_report_load8(link, p_args_0);
        ref = link->ref;
        if ( NavMeshPolyRefHelper::IsSameTile(base, link->ref) )
        {
          if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
            __asan_report_load8(link, ref);
          *(_DWORD *)(v5 + 48) = NavMeshPolyRefHelper::DecodePolyIdPoly(link->ref);
          if ( *(_BYTE *)(((unsigned __int64)&tilea->polyRegions >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tilea->polyRegions, ref);
          v15 = (unsigned __int64)&tilea->polyRegions[*(unsigned int *)(v5 + 48)];
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(tilea->polyRegions) + 4 * *(_DWORD *)(v5 + 48)) & 7) + 3) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&tilea->polyRegions[*(unsigned int *)(v5 + 48)]);
          }
          if ( *(_DWORD *)v15 == -2 )
          {
            v16 = std::make_pair<unsigned int &,unsigned long long const&>((unsigned int *)(v5 + 48), &link->ref);
            __args_0.first = v16.first;
            __args_0.second = v16.second;
            std::queue<std::pair<int,unsigned long long>>::emplace<std::pair<unsigned int,unsigned long long>>(
              (std::queue<std::pair<int,long long unsigned int>> *const)(v5 + 112),
              (std::pair<unsigned int,long long unsigned int> *)&__args_0,
              (std::pair<unsigned int,long long unsigned int> *)&__args_0);
          }
        }
        p_args_0 = (std::pair<int,long long unsigned int> *)link;
      }
    }
    std::queue<std::pair<int,unsigned long long>>::~queue((std::queue<std::pair<int,long long unsigned int>> *const)(v5 + 112));
  }
  if ( v25 == (char *)v5 )
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

// Line 3887: range 000000000CC3E0E2-000000000CC3FF9F
__int64 __fastcall NavMesh::AddHavokTile(
        const NavMesh *const this,
        NavMeshDataHeader *data,
        int dataSize,
        int flags,
        SurfaceIDType surfaceID,
        int navDataTileIndex,
        NavMeshTileRef *result,
        NavMeshTileMemoryCallback *callback,
        std::set<long long unsigned int,std::less<long long unsigned int>,stl_allocator<long long unsigned int,16> > *removePolys)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r12
  __int64 v12; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::mapped_type *v16; // rax
  _QWORD *v17; // rdx
  __int64 tileNavMeshIndex; // rsi
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v19; // rdx
  TileLookUpData *p_second; // rax
  char v21; // dl
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  SurfaceIDType v24; // cx
  int v25; // ecx
  char *v26; // rsi
  NavMeshTile *v28; // rcx
  __int64 v29; // rdx
  NavMeshTile *v30; // rsi
  const NavMeshDataHeader *v31; // rdx
  char v32; // cl
  unsigned __int64 v33; // rcx
  char v34; // dl
  unsigned __int64 v35; // rcx
  char v36; // dl
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  void *p_rhs; // rsi
  const NavMeshDataHeader *v40; // rdx
  const NavMeshDataHeader *v41; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v42; // rdx
  TileLookUpData *v43; // rax
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 (__fastcall *v46)(NavMeshTileMemoryCallback *, _QWORD); // r14
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v47; // rdx
  TileLookUpData *v48; // rax
  int v49; // eax
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v50; // rdx
  TileLookUpData *v51; // rax
  int v52; // eax
  NavMeshTile *v53; // rsi
  unsigned __int64 v54; // rax
  NavMeshTile *v55; // rsi
  const NavMeshDataHeader *v56; // rdx
  char v57; // cl
  unsigned __int64 v58; // rcx
  char v59; // dl
  unsigned int v60; // eax
  unsigned __int64 v61; // rcx
  int i; // [rsp+24h] [rbp-36Ch]
  int i_0; // [rsp+28h] [rbp-368h]
  int i_1; // [rsp+2Ch] [rbp-364h]
  int i_2; // [rsp+30h] [rbp-360h]
  uint32_t headerSize; // [rsp+34h] [rbp-35Ch]
  signed int vertsSize; // [rsp+38h] [rbp-358h]
  signed int polysSize; // [rsp+3Ch] [rbp-354h]
  signed int detailMeshesSize; // [rsp+40h] [rbp-350h]
  signed int detailVertsSize; // [rsp+44h] [rbp-34Ch]
  signed int detailTrisSize; // [rsp+48h] [rbp-348h]
  signed int bvtreeSize; // [rsp+4Ch] [rbp-344h]
  signed int polyRegionsSize; // [rsp+50h] [rbp-340h]
  uint32_t polyNeiCSize; // [rsp+54h] [rbp-33Ch]
  int removePolyCount; // [rsp+58h] [rbp-338h]
  int polyCount; // [rsp+60h] [rbp-330h]
  int color; // [rsp+64h] [rbp-32Ch]
  float portalHeight; // [rsp+68h] [rbp-328h]
  int polyCount_0; // [rsp+6Ch] [rbp-324h]
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+70h] [rbp-320h] BYREF
  const NavMeshTile *sourceTile; // [rsp+78h] [rbp-318h]
  NavMeshDataHeader *header; // [rsp+80h] [rbp-310h]
  const unsigned __int8 *d; // [rsp+88h] [rbp-308h]
  const Vector3f *verts; // [rsp+90h] [rbp-300h]
  NavMeshPoly *polys; // [rsp+98h] [rbp-2F8h]
  const NavMeshPolyDetail *detailMeshes; // [rsp+A0h] [rbp-2F0h]
  const Vector3f *detailVerts; // [rsp+A8h] [rbp-2E8h]
  const NavMeshPolyDetailIndex *detailTris; // [rsp+B0h] [rbp-2E0h]
  const NavMeshBVNode *bvTree; // [rsp+B8h] [rbp-2D8h]
  unsigned int *polyRegions; // [rsp+C0h] [rbp-2D0h]
  const uint8_t *polyNeiC; // [rsp+C8h] [rbp-2C8h]
  unsigned __int16 *removePoly; // [rsp+D0h] [rbp-2C0h]
  const NavMesh::SurfaceData *surfaceData; // [rsp+D8h] [rbp-2B8h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+E0h] [rbp-2B0h]
  NavMeshTile *tile; // [rsp+E8h] [rbp-2A8h]
  MinMaxAABB *worldBounds; // [rsp+F0h] [rbp-2A0h]
  NavMeshTile *ntile_0; // [rsp+F8h] [rbp-298h]
  const NavMeshTile *sourceNTile; // [rsp+100h] [rbp-290h]
  const NavMeshTile *ntile; // [rsp+108h] [rbp-288h]
  unsigned __int64 tileRef; // [rsp+110h] [rbp-280h]
  unsigned __int64 sourceBase; // [rsp+118h] [rbp-278h]
  Vector3f inV0; // [rsp+124h] [rbp-26Ch] BYREF
  Quaternionf q1; // [rsp+130h] [rbp-260h] BYREF
  AABB aabb; // [rsp+140h] [rbp-250h] BYREF
  common::milog::MiLogStream v110; // [rsp+160h] [rbp-230h] BYREF
  char v111[528]; // [rsp+180h] [rbp-210h] BYREF

  v9 = (unsigned __int64)v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_3(480LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "14 32 2 14 surfaceID:3886 48 4 17 newTileIndex:3930 64 4 6 x:4010 80 4 6 y:4011 96 8 18 itSurfac"
                        "eData:3924 128 8 17 sourceTileIt:3939 160 8 14 dynamicIt:4015 192 8 7 it:4033 224 8 11 xyPair:39"
                        "35 256 8 11 lutKey:4014 288 12 13 position:3946 320 16 13 rotation:3947 352 24 20 tileWorldBound"
                        "s:3955 416 24 15 tilebounds:3956";
  *(_QWORD *)(v9 + 16) = NavMesh::AddHavokTile;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -234556926;
  v11[536862722] = -234556924;
  v11[536862723] = -218959360;
  v11[536862724] = -218959360;
  v11[536862725] = -218959360;
  v11[536862726] = -218959360;
  v11[536862727] = -218959360;
  v11[536862728] = -218959360;
  v11[536862729] = -219020288;
  v11[536862730] = -219021312;
  v11[536862731] = -234881024;
  v11[536862732] = -218959118;
  v11[536862733] = -218103808;
  v11[536862734] = -202116109;
  *(_WORD *)(v9 + 32) = surfaceID;
  header = data;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data);
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
      headerSize = Align4(0x48u);
      if ( *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&header->vertCount);
      }
      vertsSize = Align4(12 * header->vertCount);
      if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&header->polyCount);
      }
      polysSize = Align4(32 * header->polyCount);
      if ( *(_BYTE *)(((unsigned __int64)&header->detailMeshCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->detailMeshCount >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&header->detailMeshCount);
      }
      detailMeshesSize = Align4(12 * header->detailMeshCount);
      if ( *(_BYTE *)(((unsigned __int64)&header->detailVertCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->detailVertCount >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&header->detailVertCount);
      }
      detailVertsSize = Align4(12 * header->detailVertCount);
      if ( *(_BYTE *)(((unsigned __int64)&header->detailTriCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->detailTriCount >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&header->detailTriCount);
      }
      detailTrisSize = Align4(8 * header->detailTriCount);
      if ( *(_BYTE *)(((unsigned __int64)&header->bvNodeCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->bvNodeCount >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&header->bvNodeCount);
      }
      bvtreeSize = Align4(16 * header->bvNodeCount);
      if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&header->polyCount);
      }
      polyRegionsSize = Align4(4 * header->polyCount);
      if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&header->polyCount);
      }
      polyNeiCSize = Align4(6 * header->polyCount);
      verts = (const Vector3f *)((char *)data + (int)headerSize);
      polys = (NavMeshPoly *)((char *)verts + vertsSize);
      detailMeshes = (const NavMeshPolyDetail *)((char *)polys + polysSize);
      detailVerts = (const Vector3f *)((char *)detailMeshes + detailMeshesSize);
      detailTris = (const NavMeshPolyDetailIndex *)((char *)detailVerts + detailVertsSize);
      bvTree = (const NavMeshBVNode *)((char *)detailTris + detailTrisSize);
      polyRegions = (unsigned int *)((char *)bvTree->bmin + bvtreeSize);
      polyNeiC = (const uint8_t *)polyRegions + polyRegionsSize;
      d = &polyNeiC[polyNeiCSize];
      if ( *(_BYTE *)(((unsigned __int64)d >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)d & 7) + 1) >= *(_BYTE *)(((unsigned __int64)d >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(d);
      }
      removePolyCount = *(unsigned __int16 *)d;
      removePoly = (unsigned __int16 *)d;
      d += (int)Align4(2 * (removePolyCount + 1));
      if ( d - (const unsigned __int8 *)data == dataSize )
      {
        *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v9 + 96) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_SurfaceIDToData, (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v9 + 32));
        *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v9 + 256) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData);
        v13 = (char *)(v9 + 256);
        if ( !__gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
                (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v9 + 96),
                (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v9 + 256)) )
        {
          common::milog::MiLogStream::create(
            &v110,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
            "AddHavokTile",
            3925);
          common::milog::MiLogStream::operator()(&v110, "Invalid surface ID");
          common::milog::MiLogStream::~MiLogStream(&v110);
          __asan_handle_no_return(&v110);
          __assert_fail(
            "false",
            "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
            0xF55u,
            "NavMeshStatus NavMesh::AddHavokTile(const unsigned char*, int, NavMeshTileFlags, SurfaceIDType, int, NavMesh"
            "TileRef*, NavMeshTileMemoryCallback*, std::set<long long unsigned int, std::less<long long unsigned int>, st"
            "l_allocator<long long unsigned int> >&) const");
        }
        surfaceData = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v9 + 96))->second;
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v13);
        v14 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 16);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 16, v13);
        lut = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *))v14)(callback);
        *(_DWORD *)(v9 + 48) = 0;
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v13);
        v15 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 5);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 5, v13);
        tile = (NavMeshTile *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v15)(
                                callback,
                                v9 + 48);
        if ( *(_DWORD *)(v9 + 48) == -1 )
        {
          v12 = 2147483652LL;
        }
        else
        {
          *(std::pair<int,int> *)(v9 + 224) = std::make_pair<int &,int &>(&header->x, &header->y);
          TileLookUpData::TileLookUpData((TileLookUpData *const)(v9 + 256), *(_DWORD *)(v9 + 48), navDataTileIndex);
          v16 = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::operator[](
                  lut,
                  (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v9 + 224));
          v17 = v16;
          if ( ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v16->navMeshDataIndex + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v16 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v16->navMeshDataIndex + 3) >> 3)
                                                            + 0x7FFF8000) )
          {
            __asan_report_store_n(v16, 8LL);
          }
          *v17 = *(_QWORD *)(v9 + 256);
          *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v9 + 128) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v9 + 224));
          sourceTile = 0LL;
          *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v9 + 256) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_TileLUT);
          tileNavMeshIndex = v9 + 256;
          if ( __gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                 (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v9 + 128),
                 (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v9 + 256)) )
          {
            v19 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v9 + 128));
            p_second = &v19->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            tileNavMeshIndex = (unsigned int)v19->second.tileNavMeshIndex;
            sourceTile = NavMesh::GetTile(this, tileNavMeshIndex);
          }
          v21 = *(_BYTE *)((((unsigned __int64)&surfaceData->m_Position.z + 3) >> 3) + 0x7FFF8000);
          LOBYTE(tileNavMeshIndex) = v21 != 0;
          if ( *(char *)(((unsigned __int64)&surfaceData->m_Position >> 3) + 0x7FFF8000) < 0
            || v21 != 0 && (((unsigned __int8)surfaceData + 107) & 7) >= v21 )
          {
            tileNavMeshIndex = 12LL;
            __asan_report_load_n(&surfaceData->m_Position, 12LL);
          }
          *(Vector3f *)(v9 + 288) = surfaceData->m_Position;
          if ( *(_WORD *)(((unsigned __int64)&surfaceData->m_Rotation >> 3) + 0x7FFF8000) )
            __asan_report_load16(&surfaceData->m_Rotation);
          v22 = *(_QWORD *)&surfaceData->m_Rotation.z;
          *(_QWORD *)(v9 + 320) = *(_QWORD *)&surfaceData->m_Rotation.x;
          *(_QWORD *)(v9 + 328) = v22;
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, tileNavMeshIndex);
          v23 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 17);
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 17, tileNavMeshIndex);
          worldBounds = (MinMaxAABB *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *))v23)(callback);
          if ( !MinMaxAABB::IsValid(worldBounds) )
            MinMaxAABB::Encapsulate(worldBounds, &surfaceData->m_WorldBounds);
          AABB::AABB((AABB *const)(v9 + 352));
          MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v9 + 416), &header->bmin, &header->bmax);
          AABB::AABB(&aabb, (const MinMaxAABB *)(v9 + 416));
          TransformAABB(&aabb, (const Vector3f *)(v9 + 288), (const Quaternionf *)(v9 + 320), (AABB *)(v9 + 352));
          MinMaxAABB::MinMaxAABB((MinMaxAABB *const)&aabb, (const AABB *)(v9 + 352));
          MinMaxAABB::Encapsulate(worldBounds, (const MinMaxAABB *)&aabb);
          if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->verts = verts;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polys = polys;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailMeshes = detailMeshes;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailVerts = detailVerts;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailTris = detailTris;
          if ( *(_BYTE *)(((unsigned __int64)&tile->bvTree >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->bvTree = bvTree;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polyRegions = polyRegions;
          if ( !bvtreeSize )
            tile->bvTree = 0LL;
          v24 = *(_WORD *)(v9 + 32);
          if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
          {
            __asan_report_store2(tile);
          }
          tile->surfaceID = v24;
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tile + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->dataIndex);
          }
          tile->dataIndex = navDataTileIndex;
          if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->header = header;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polyLinks = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->data = (const unsigned __int8 *)data;
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&tile->dataSize);
          }
          tile->dataSize = dataSize;
          v25 = flags;
          if ( *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tile + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->flags);
          }
          tile->flags = v25;
          Vector3f::Vector3f(&inV0, 0.0, 0.0, 0.0);
          v26 = (char *)(v9 + 288);
          if ( CompareApproximately(&inV0, (const Vector3f *)(v9 + 288), 0.0000099999997)
            && (q1 = Quaternionf::identity(),
                v26 = (char *)(v9 + 320),
                CompareApproximately(&q1, (const Quaternionf *)(v9 + 320), 0.0000099999997)) )
          {
            if ( *(_WORD *)(((unsigned __int64)&tile->rotation >> 3) + 0x7FFF8000) )
              __asan_report_store16(&tile->rotation, v26);
            tile->rotation = Quaternionf::identity();
            Vector3f::Vector3f(&inV0, 0.0, 0.0, 0.0);
            if ( *(char *)(((unsigned __int64)&tile->position >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)tile - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&tile->position, 12LL);
            }
            tile->position = inV0;
            if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->transformed);
            }
            tile->transformed = 0;
          }
          else
          {
            if ( *(_WORD *)(((unsigned __int64)&tile->rotation >> 3) + 0x7FFF8000) )
              __asan_report_store16(&tile->rotation, v26);
            v28 = tile;
            v29 = *(_QWORD *)(v9 + 328);
            *(_QWORD *)&tile->rotation.x = *(_QWORD *)(v9 + 320);
            *(_QWORD *)&v28->rotation.z = v29;
            if ( *(char *)(((unsigned __int64)&tile->position >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)tile - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&tile->position, 12LL);
            }
            tile->position = *(Vector3f *)(v9 + 288);
            if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->transformed);
            }
            tile->transformed = 1;
          }
          v30 = tile;
          NavMesh::ConnectHavokIntLinks(this, tile, sourceTile, polyNeiC, callback);
          i = 0;
          if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->header, tile);
          v31 = tile->header;
          v32 = *(_BYTE *)(((unsigned __int64)&v31->polyCount >> 3) + 0x7FFF8000);
          LOBYTE(v30) = v32 != 0;
          if ( v32 != 0 && (char)((((_BYTE)v31 + 20) & 7) + 3) >= v32 )
            __asan_report_load4(&v31->polyCount);
          polyCount = v31->polyCount;
          while ( i < polyCount )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->polyRegions, v30);
            v33 = (unsigned __int64)&tile->polyRegions[i];
            v34 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
            LOBYTE(v30) = v34 != 0;
            if ( v34 != 0 && (char)(((LOBYTE(tile->polyRegions) + 4 * i) & 7) + 3) >= v34 )
              __asan_report_load4(&tile->polyRegions[i]);
            if ( *(_DWORD *)v33 != -2 )
            {
              v35 = (unsigned __int64)&tile->polyRegions[i];
              v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
              LOBYTE(v30) = v36 != 0;
              if ( v36 != 0 && (char)(((LOBYTE(tile->polyRegions) + 4 * i) & 7) + 3) >= v36 )
                __asan_report_load4(&tile->polyRegions[i]);
              if ( *(int *)v35 < 0 )
              {
                v37 = (unsigned __int64)&tile->polyRegions[i];
                if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) != 0
                  && (char)(((LOBYTE(tile->polyRegions) + 4 * i) & 7) + 3) >= *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(&tile->polyRegions[i]);
                }
                color = *(_DWORD *)v37 & 0x7FFFFFFF;
                v38 = (unsigned __int64)&tile->polyRegions[i];
                if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) != 0
                  && (char)(((LOBYTE(tile->polyRegions) + 4 * i) & 7) + 3) >= *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(&tile->polyRegions[i]);
                }
                *(_DWORD *)v38 = -2;
                v30 = tile;
                NavMesh::ConnectRegionDyeing(this, tile, i, color, callback);
              }
            }
            ++i;
          }
          p_rhs = (void *)((((_BYTE)surfaceData + 36) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)surfaceData + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&surfaceData->m_Settings.cellSize);
          }
          portalHeight = surfaceData->m_Settings.cellSize;
          for ( i_0 = 0; i_0 <= 7; i_0 += 2 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->header, p_rhs);
            v40 = tile->header;
            if ( *(_BYTE *)(((unsigned __int64)&v40->x >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v40 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->x >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&v40->x);
            }
            *(_DWORD *)(v9 + 64) = v40->x;
            v41 = tile->header;
            if ( *(_BYTE *)(((unsigned __int64)&v41->y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v41 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v41->y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&v41->y);
            }
            *(_DWORD *)(v9 + 80) = v41->y;
            TileLUTHelper::NeighbourLocation((int *)(v9 + 64), (int *)(v9 + 80), i_0);
            *(std::pair<int,int> *)(v9 + 256) = std::make_pair<int &,int &>((int *)(v9 + 64), (int *)(v9 + 80));
            *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v9 + 160) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v9 + 256));
            __rhs._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
            if ( __gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                   (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v9 + 160),
                   &__rhs) )
            {
              *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v9 + 192) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v9 + 256));
              __rhs._M_current = (std::pair<std::pair<int,int>,TileLookUpData> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_TileLUT)._M_current;
              p_rhs = &__rhs;
              if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                      (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v9 + 192),
                      (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__rhs) )
              {
                v42 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v9 + 192));
                v43 = &v42->second;
                if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v43);
                }
                ntile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v42->second.tileNavMeshIndex);
                NavMesh::ConnectExtLinks(this, tile, ntile, i_0, portalHeight, callback);
                v44 = TileLUTHelper::OppositeTile(i_0);
                p_rhs = (void *)ntile;
                NavMesh::ConnectExtLinks(this, ntile, tile, v44, portalHeight, callback);
              }
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                __asan_report_load8(callback, &__rhs);
              v45 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 6);
              if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
                v45 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 6, &__rhs);
              v46 = *(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v45;
              v47 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v9 + 160));
              v48 = &v47->second;
              if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v48);
              }
              ntile_0 = (NavMeshTile *)v46(callback, (unsigned int)v47->second.tileNavMeshIndex);
              NavMesh::ConnectExtLinks(this, tile, ntile_0, i_0, portalHeight, callback);
              v49 = TileLUTHelper::OppositeTile(i_0);
              NavMesh::ConnectExtLinks(this, ntile_0, tile, v49, portalHeight, callback);
              *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v9 + 192) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v9 + 256));
              __rhs._M_current = (std::pair<std::pair<int,int>,TileLookUpData> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_TileLUT)._M_current;
              p_rhs = &__rhs;
              if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                      (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v9 + 192),
                      (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__rhs) )
              {
                v50 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v9 + 192));
                v51 = &v50->second;
                if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v51);
                }
                sourceNTile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v50->second.tileNavMeshIndex);
                NavMesh::ConnectExtLinks(this, tile, sourceNTile, i_0, portalHeight, callback);
                v52 = TileLUTHelper::OppositeTile(i_0);
                p_rhs = (void *)sourceNTile;
                NavMesh::ConnectExtLinks(this, sourceNTile, tile, v52, portalHeight, callback);
              }
            }
          }
          v53 = tile;
          NavMesh::ConnectOffMeshConnectionsToTile(this, tile, callback);
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v53);
          v54 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 3);
          if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
            v54 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 3, v53);
          v55 = tile;
          tileRef = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, NavMeshTile *))v54)(callback, tile);
          i_1 = 0;
          if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->header, v55);
          v56 = tile->header;
          v57 = *(_BYTE *)(((unsigned __int64)&v56->polyCount >> 3) + 0x7FFF8000);
          LOBYTE(v55) = v57 != 0;
          if ( v57 != 0 && (char)((((_BYTE)v56 + 20) & 7) + 3) >= v57 )
            __asan_report_load4(&v56->polyCount);
          polyCount_0 = v56->polyCount;
          while ( i_1 < polyCount_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->polyRegions, v55);
            v58 = (unsigned __int64)&tile->polyRegions[i_1];
            v59 = *(_BYTE *)((v58 >> 3) + 0x7FFF8000);
            LOBYTE(v55) = v59 != 0;
            if ( v59 != 0 && (char)(((LOBYTE(tile->polyRegions) + 4 * i_1) & 7) + 3) >= v59 )
              __asan_report_load4(&tile->polyRegions[i_1]);
            if ( *(_DWORD *)v58 == -2 )
            {
              v60 = NavMeshPolyRefHelper::EncodeDynamicRegionId(tileRef, i_1, 1);
              v55 = tile;
              NavMesh::ConnectRegionDyeing(this, tile, i_1, v60, callback);
            }
            ++i_1;
          }
          sourceBase = NavMesh::GetTileRef(this, sourceTile);
          std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::clear(removePolys);
          for ( i_2 = 1; i_2 <= removePolyCount; ++i_2 )
          {
            v61 = (unsigned __int64)&removePoly[i_2];
            if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) != 0
              && (char)(((2 * i_2 + (_BYTE)removePoly) & 7) + 1) >= *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load2(&removePoly[i_2]);
            }
            *(_QWORD *)(v9 + 256) = sourceBase | NavMeshPolyRefHelper::EncodeBasePolyId(0, *(unsigned __int16 *)v61);
            std::set<unsigned long long,std::less<unsigned long long>,stl_allocator<unsigned long long,16>>::emplace<unsigned long long>(
              removePolys,
              (unsigned __int64 *)(v9 + 256),
              (unsigned __int64 *)(v9 + 256));
          }
          if ( result )
          {
            if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *result = tileRef;
          }
          v12 = 0x40000000LL;
        }
      }
      else
      {
        v12 = 0x80000000LL;
      }
    }
    else
    {
      v12 = 2147483650LL;
    }
  }
  else
  {
    v12 = 2147483649LL;
  }
  if ( v111 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8038) = -168430091;
  }
  return v12;
};

// Line 4071: range 000000000CC3FFA0-000000000CC417D8
__int64 __fastcall NavMesh::AddTile(
        const NavMesh *const this,
        unsigned __int64 data,
        int dataSize,
        NavMeshTileFlags flags,
        SurfaceIDType surfaceID,
        int navDataTileIndex,
        NavMeshTileRef *result,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rax
  char *v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::mapped_type *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rsi
  char v18; // dl
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  SurfaceIDType v21; // cx
  NavMeshTileFlags v22; // ecx
  char *v23; // rsi
  __int64 v25; // rdx
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *p_M_current; // rsi
  const NavMeshDataHeader *header; // rdx
  const NavMeshDataHeader *v28; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v29; // rdx
  TileLookUpData *p_second; // rax
  int v31; // eax
  unsigned __int64 v32; // rax
  __int64 (__fastcall *v33)(NavMeshTileMemoryCallback *, _QWORD); // r14
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v34; // rdx
  TileLookUpData *v35; // rax
  int v36; // eax
  unsigned __int64 v37; // rax
  NavMeshTile *v38; // rsi
  const NavMeshDataHeader *v39; // rdx
  char v40; // cl
  unsigned __int64 v41; // rcx
  char v42; // dl
  unsigned int v43; // eax
  int i; // [rsp+28h] [rbp-2E8h]
  int i_0; // [rsp+2Ch] [rbp-2E4h]
  uint32_t headerSize; // [rsp+30h] [rbp-2E0h]
  signed int vertsSize; // [rsp+34h] [rbp-2DCh]
  signed int polysSize; // [rsp+38h] [rbp-2D8h]
  signed int detailMeshesSize; // [rsp+3Ch] [rbp-2D4h]
  signed int detailVertsSize; // [rsp+40h] [rbp-2D0h]
  signed int detailTrisSize; // [rsp+44h] [rbp-2CCh]
  signed int bvtreeSize; // [rsp+48h] [rbp-2C8h]
  float portalHeight; // [rsp+50h] [rbp-2C0h]
  int polyCount; // [rsp+54h] [rbp-2BCh]
  const Vector3f *verts; // [rsp+68h] [rbp-2A8h]
  NavMeshPoly *polys; // [rsp+70h] [rbp-2A0h]
  const NavMeshPolyDetail *detailMeshes; // [rsp+78h] [rbp-298h]
  const Vector3f *detailVerts; // [rsp+80h] [rbp-290h]
  const NavMeshPolyDetailIndex *detailTris; // [rsp+88h] [rbp-288h]
  const NavMeshBVNode *bvTree; // [rsp+90h] [rbp-280h]
  unsigned int *polyRegions; // [rsp+98h] [rbp-278h]
  NavMesh::SurfaceData *surfaceData; // [rsp+A0h] [rbp-270h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+A8h] [rbp-268h]
  NavMeshTile *tile; // [rsp+B0h] [rbp-260h]
  MinMaxAABB *worldBounds; // [rsp+B8h] [rbp-258h]
  NavMeshTile *ntile_0; // [rsp+C0h] [rbp-250h]
  const NavMeshTile *ntile; // [rsp+C8h] [rbp-248h]
  unsigned __int64 tileRef; // [rsp+D0h] [rbp-240h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type M_current; // [rsp+D8h] [rbp-238h] BYREF
  Vector3f inV0; // [rsp+E4h] [rbp-22Ch] BYREF
  Quaternionf q1; // [rsp+F0h] [rbp-220h] BYREF
  AABB aabb; // [rsp+100h] [rbp-210h] BYREF
  common::milog::MiLogStream v78; // [rsp+120h] [rbp-1F0h] BYREF
  char v79[464]; // [rsp+140h] [rbp-1D0h] BYREF

  v8 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(416LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "12 32 2 14 surfaceID:4070 48 4 17 newTileIndex:4107 64 4 6 x:4169 80 4 6 y:4170 96 8 18 itSurfac"
                        "eData:4101 128 8 14 dynamicIt:4174 160 8 7 it:4177 192 8 11 lutKey:4173 224 12 13 position:4114 "
                        "256 16 13 rotation:4115 288 24 20 tileWorldBounds:4123 352 24 15 tilebounds:4124";
  *(_QWORD *)(v8 + 16) = NavMesh::AddTile;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556926;
  v10[536862722] = -234556924;
  v10[536862723] = -218959360;
  v10[536862724] = -218959360;
  v10[536862725] = -218959360;
  v10[536862726] = -218959360;
  v10[536862727] = -219020288;
  v10[536862728] = -219021312;
  v10[536862729] = -234881024;
  v10[536862730] = -218959118;
  v10[536862731] = -218103808;
  v10[536862732] = -202116109;
  *(_WORD *)(v8 + 32) = surfaceID;
  if ( *(_BYTE *)((data >> 3) + 0x7FFF8000) != 0 && (char)((data & 7) + 3) >= *(_BYTE *)((data >> 3) + 0x7FFF8000) )
    __asan_report_load4(data);
  if ( *(_DWORD *)data == 1145979222 )
  {
    if ( *(_BYTE *)(((data + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((data + 4) & 7) + 3) >= *(_BYTE *)(((data + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 4);
    }
    if ( *(_DWORD *)(data + 4) == 17 )
    {
      headerSize = Align4(0x48u);
      if ( *(_BYTE *)(((data + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 24) & 7) + 3) >= *(_BYTE *)(((data + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 24);
      }
      vertsSize = Align4(12 * *(_DWORD *)(data + 24));
      if ( *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 20) & 7) + 3) >= *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 20);
      }
      polysSize = Align4(32 * *(_DWORD *)(data + 20));
      if ( *(_BYTE *)(((data + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 28) & 7) + 3) >= *(_BYTE *)(((data + 28) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 28);
      }
      detailMeshesSize = Align4(12 * *(_DWORD *)(data + 28));
      if ( *(_BYTE *)(((data + 32) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 32) & 7) + 3) >= *(_BYTE *)(((data + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 32);
      }
      detailVertsSize = Align4(12 * *(_DWORD *)(data + 32));
      if ( *(_BYTE *)(((data + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 36) & 7) + 3) >= *(_BYTE *)(((data + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 36);
      }
      detailTrisSize = Align4(8 * *(_DWORD *)(data + 36));
      if ( *(_BYTE *)(((data + 40) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 40) & 7) + 3) >= *(_BYTE *)(((data + 40) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 40);
      }
      bvtreeSize = Align4(16 * *(_DWORD *)(data + 40));
      if ( *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((data + 20) & 7) + 3) >= *(_BYTE *)(((data + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(data + 20);
      }
      verts = (const Vector3f *)((int)headerSize + data);
      polys = (NavMeshPoly *)((char *)verts + vertsSize);
      detailMeshes = (const NavMeshPolyDetail *)((char *)polys + polysSize);
      detailVerts = (const Vector3f *)((char *)detailMeshes + detailMeshesSize);
      detailTris = (const NavMeshPolyDetailIndex *)((char *)detailVerts + detailVertsSize);
      bvTree = (const NavMeshBVNode *)((char *)detailTris + detailTrisSize);
      polyRegions = (unsigned int *)((char *)bvTree->bmin + bvtreeSize);
      if ( (unsigned int *)((char *)polyRegions + (int)Align4(4 * *(_DWORD *)(data + 20)) - data) == (unsigned int *)dataSize )
      {
        *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v8 + 96) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_SurfaceIDToData, (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v8 + 32));
        *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v8 + 192) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData);
        v12 = (char *)(v8 + 192);
        if ( !__gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
                (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v8 + 96),
                (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v8 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
            "AddTile",
            4102);
          common::milog::MiLogStream::operator()(&v78, "Invalid surface ID");
          common::milog::MiLogStream::~MiLogStream(&v78);
          __asan_handle_no_return(&v78);
          __assert_fail(
            "false",
            "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
            0x1006u,
            "NavMeshStatus NavMesh::AddTile(const unsigned char*, int, NavMeshTileFlags, SurfaceIDType, int, NavMeshTileR"
            "ef*, NavMeshTileMemoryCallback*) const");
        }
        surfaceData = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v8 + 96))->second;
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v12);
        v13 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 16);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 16, v12);
        lut = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *))v13)(callback);
        *(_DWORD *)(v8 + 48) = 0;
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v12);
        v14 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 5);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 5, v12);
        tile = (NavMeshTile *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v14)(
                                callback,
                                v8 + 48);
        if ( *(_DWORD *)(v8 + 48) == -1 )
        {
          v11 = 2147483652LL;
        }
        else
        {
          TileLookUpData::TileLookUpData((TileLookUpData *const)(v8 + 192), *(_DWORD *)(v8 + 48), navDataTileIndex);
          M_current = std::make_pair<int &,int &>((int *)(data + 8), (int *)(data + 12));
          v15 = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::operator[](
                  lut,
                  &M_current);
          v16 = v15;
          v17 = ((_DWORD)v15 + 7) & 7;
          if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v15->navMeshDataIndex + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->navMeshDataIndex + 3) >> 3)
                                                            + 0x7FFF8000) )
          {
            v17 = 8LL;
            __asan_report_store_n(v15, 8LL);
          }
          *v16 = *(_QWORD *)(v8 + 192);
          v18 = *(_BYTE *)((((unsigned __int64)&surfaceData->m_Position.z + 3) >> 3) + 0x7FFF8000);
          LOBYTE(v17) = v18 != 0;
          if ( *(char *)(((unsigned __int64)&surfaceData->m_Position >> 3) + 0x7FFF8000) < 0
            || v18 != 0 && (((unsigned __int8)surfaceData + 107) & 7) >= v18 )
          {
            v17 = 12LL;
            __asan_report_load_n(&surfaceData->m_Position, 12LL);
          }
          *(_QWORD *)(v8 + 224) = *(_QWORD *)&surfaceData->m_Position.x;
          *(float *)(v8 + 232) = surfaceData->m_Position.z;
          if ( *(_WORD *)(((unsigned __int64)&surfaceData->m_Rotation >> 3) + 0x7FFF8000) )
            __asan_report_load16(&surfaceData->m_Rotation);
          v19 = *(_QWORD *)&surfaceData->m_Rotation.z;
          *(_QWORD *)(v8 + 256) = *(_QWORD *)&surfaceData->m_Rotation.x;
          *(_QWORD *)(v8 + 264) = v19;
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, v17);
          v20 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 17);
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v20 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 17, v17);
          worldBounds = (MinMaxAABB *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *))v20)(callback);
          if ( !MinMaxAABB::IsValid(worldBounds) )
            MinMaxAABB::Encapsulate(worldBounds, &surfaceData->m_WorldBounds);
          AABB::AABB((AABB *const)(v8 + 288));
          MinMaxAABB::MinMaxAABB(
            (MinMaxAABB *const)(v8 + 352),
            (const Vector3f *)(data + 44),
            (const Vector3f *)(data + 56));
          AABB::AABB(&aabb, (const MinMaxAABB *)(v8 + 352));
          TransformAABB(&aabb, (const Vector3f *)(v8 + 224), (const Quaternionf *)(v8 + 256), (AABB *)(v8 + 288));
          MinMaxAABB::MinMaxAABB((MinMaxAABB *const)&aabb, (const AABB *)(v8 + 288));
          MinMaxAABB::Encapsulate(worldBounds, (const MinMaxAABB *)&aabb);
          if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->verts = verts;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polys = polys;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailMeshes >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailMeshes = detailMeshes;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailVerts >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailVerts = detailVerts;
          if ( *(_BYTE *)(((unsigned __int64)&tile->detailTris >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->detailTris = detailTris;
          if ( *(_BYTE *)(((unsigned __int64)&tile->bvTree >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->bvTree = bvTree;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polyRegions = polyRegions;
          if ( !bvtreeSize )
            tile->bvTree = 0LL;
          v21 = *(_WORD *)(v8 + 32);
          if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
          {
            __asan_report_store2(tile);
          }
          tile->surfaceID = v21;
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tile + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->dataIndex >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->dataIndex);
          }
          tile->dataIndex = navDataTileIndex;
          if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->header = (const NavMeshDataHeader *)data;
          if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->polyLinks = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          tile->data = (const unsigned __int8 *)data;
          if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&tile->dataSize);
          }
          tile->dataSize = dataSize;
          v22 = flags;
          if ( *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tile + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->flags >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&tile->flags);
          }
          tile->flags = v22;
          Vector3f::Vector3f(&inV0, 0.0, 0.0, 0.0);
          v23 = (char *)(v8 + 224);
          if ( CompareApproximately(&inV0, (const Vector3f *)(v8 + 224), 0.0000099999997)
            && (q1 = Quaternionf::identity(),
                v23 = (char *)(v8 + 256),
                CompareApproximately(&q1, (const Quaternionf *)(v8 + 256), 0.0000099999997)) )
          {
            if ( *(_WORD *)(((unsigned __int64)&tile->rotation >> 3) + 0x7FFF8000) )
              __asan_report_store16(&tile->rotation, v23);
            tile->rotation = Quaternionf::identity();
            Vector3f::Vector3f(&inV0, 0.0, 0.0, 0.0);
            if ( *(char *)(((unsigned __int64)&tile->position >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)tile - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&tile->position, 12LL);
            }
            tile->position = inV0;
            if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->transformed);
            }
            tile->transformed = 0;
          }
          else
          {
            if ( *(_WORD *)(((unsigned __int64)&tile->rotation >> 3) + 0x7FFF8000) )
              __asan_report_store16(&tile->rotation, v23);
            v25 = *(_QWORD *)(v8 + 264);
            *(_QWORD *)&tile->rotation.x = *(_QWORD *)(v8 + 256);
            *(_QWORD *)&tile->rotation.z = v25;
            if ( *(char *)(((unsigned __int64)&tile->position >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)tile - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&tile->position.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&tile->position, 12LL);
            }
            *(_QWORD *)&tile->position.x = *(_QWORD *)(v8 + 224);
            tile->position.z = *(float *)(v8 + 232);
            if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&tile->transformed);
            }
            tile->transformed = 1;
          }
          NavMesh::ConnectIntLinks(this, tile, callback);
          p_M_current = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)((((_BYTE)surfaceData + 36) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)surfaceData + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&surfaceData->m_Settings.cellSize);
          }
          portalHeight = surfaceData->m_Settings.cellSize;
          for ( i = 0; i <= 7; i += 2 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->header, p_M_current);
            header = tile->header;
            if ( *(_BYTE *)(((unsigned __int64)&header->x >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)header + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->x >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&header->x);
            }
            *(_DWORD *)(v8 + 64) = header->x;
            v28 = tile->header;
            if ( *(_BYTE *)(((unsigned __int64)&v28->y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v28 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&v28->y);
            }
            *(_DWORD *)(v8 + 80) = v28->y;
            TileLUTHelper::NeighbourLocation((int *)(v8 + 64), (int *)(v8 + 80), i);
            *(std::pair<int,int> *)(v8 + 192) = std::make_pair<int &,int &>((int *)(v8 + 64), (int *)(v8 + 80));
            *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v8 + 128) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v8 + 192));
            M_current = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
            if ( __gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                   (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v8 + 128),
                   (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&M_current) )
            {
              *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v8 + 160) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v8 + 192));
              M_current = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_TileLUT)._M_current;
              p_M_current = &M_current;
              if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
                      (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v8 + 160),
                      (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&M_current) )
              {
                v29 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v8 + 160));
                p_second = &v29->second;
                if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(p_second);
                }
                ntile = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v29->second.tileNavMeshIndex);
                NavMesh::ConnectExtLinks(this, tile, ntile, i, portalHeight, callback);
                v31 = TileLUTHelper::OppositeTile(i);
                p_M_current = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)ntile;
                NavMesh::ConnectExtLinks(this, ntile, tile, v31, portalHeight, callback);
              }
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                __asan_report_load8(callback, &M_current);
              v32 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 6);
              if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                v32 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 6, &M_current);
              v33 = *(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v32;
              v34 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v8 + 128));
              v35 = &v34->second;
              if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v35);
              }
              ntile_0 = (NavMeshTile *)v33(callback, (unsigned int)v34->second.tileNavMeshIndex);
              NavMesh::ConnectExtLinks(this, tile, ntile_0, i, portalHeight, callback);
              v36 = TileLUTHelper::OppositeTile(i);
              p_M_current = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)ntile_0;
              NavMesh::ConnectExtLinks(this, ntile_0, tile, v36, portalHeight, callback);
            }
          }
          NavMesh::ConnectOffMeshConnectionsToTile(this, tile, callback);
          if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
            __asan_report_load8(callback, tile);
          v37 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 3);
          if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
            v37 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 3, tile);
          v38 = tile;
          tileRef = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, NavMeshTile *))v37)(callback, tile);
          i_0 = 0;
          if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
            __asan_report_load8(&tile->header, tile);
          v39 = tile->header;
          v40 = *(_BYTE *)(((unsigned __int64)&v39->polyCount >> 3) + 0x7FFF8000);
          LOBYTE(v38) = v40 != 0;
          if ( v40 != 0 && (char)((((_BYTE)v39 + 20) & 7) + 3) >= v40 )
            __asan_report_load4(&v39->polyCount);
          polyCount = v39->polyCount;
          while ( i_0 < polyCount )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->polyRegions, v38);
            v41 = (unsigned __int64)&tile->polyRegions[i_0];
            v42 = *(_BYTE *)((v41 >> 3) + 0x7FFF8000);
            LOBYTE(v38) = v42 != 0;
            if ( v42 != 0 && (char)(((LOBYTE(tile->polyRegions) + 4 * i_0) & 7) + 3) >= v42 )
              __asan_report_load4(&tile->polyRegions[i_0]);
            if ( *(_DWORD *)v41 == -2 )
            {
              v43 = NavMeshPolyRefHelper::EncodeDynamicRegionId(tileRef, i_0, 1);
              v38 = tile;
              NavMesh::ConnectRegionDyeing(this, tile, i_0, v43, callback);
            }
            ++i_0;
          }
          if ( result )
          {
            if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *result = tileRef;
          }
          v11 = 0x40000000LL;
        }
      }
      else
      {
        v11 = 0x80000000LL;
      }
    }
    else
    {
      v11 = 2147483650LL;
    }
  }
  else
  {
    v11 = 2147483649LL;
  }
  if ( v79 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8030) = -168430091;
  }
  return v11;
};

// Line 4212: range 000000000CC417DA-000000000CC41FA2
NavMeshStatus __cdecl NavMesh::RemoveTile(
        const NavMesh *const this,
        NavMeshTileRef ref,
        SurfaceIDType surfaceID,
        const unsigned __int8 **data,
        int *dataSize,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  const unsigned __int8 *v10; // rdx
  int v11; // ecx
  char v12; // dl
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned int tileIndex; // [rsp+30h] [rbp-20h]
  unsigned int tileSalt; // [rsp+34h] [rbp-1Ch]
  NavMeshTile *tile; // [rsp+38h] [rbp-18h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+40h] [rbp-10h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type v22; // [rsp+48h] [rbp-8h] BYREF

  if ( !ref )
    return -2147483640;
  tileIndex = NavMeshPolyRefHelper::DecodePolyIdTile(ref);
  tileSalt = NavMeshPolyRefHelper::DecodePolyIdSalt(ref);
  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, ref);
  v7 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 6);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 6, ref);
  tile = (NavMeshTile *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v7)(callback, tileIndex);
  if ( !tile )
    return -2147483640;
  if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tile->salt);
  }
  if ( tileSalt != tile->salt )
    return -2147483640;
  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, tileIndex);
  v8 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 16);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 16, tileIndex);
  lut = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *))v8)(callback);
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tileIndex);
  v22 = std::make_pair<int const&,int const&>(&tile->header->x, &tile->header->y);
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::erase(
    lut,
    &v22);
  NavMesh::UnconnectLinks(this, tile, callback);
  NavMesh::UnconnectOffMeshConnectionsToTile(this, ref, callback);
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
    if ( data )
    {
      if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *data = 0LL;
    }
    if ( dataSize )
    {
      v9 = ((unsigned __int8)dataSize & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dataSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(dataSize);
      }
      *dataSize = 0;
    }
  }
  else
  {
    if ( data )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile->data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->data, v9);
      v10 = tile->data;
      if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *data = v10;
    }
    if ( dataSize )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tile->dataSize >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&tile->dataSize);
      }
      v11 = tile->dataSize;
      v12 = *(_BYTE *)(((unsigned __int64)dataSize >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v12 != 0;
      if ( v12 != 0 && (char)(((unsigned __int8)dataSize & 7) + 3) >= v12 )
        __asan_report_store4(dataSize);
      *dataSize = v11;
    }
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
  v13 = (((_BYTE)tile + 92) & 7u) + 3;
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
  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, v13);
  v14 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 8);
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    v14 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 8, v13);
  (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v14)(callback, tileIndex);
  return 0x40000000;
};

// Line 4288: range 000000000CC41FA4-000000000CC42643
__int64 __fastcall NavMesh::RestoreTile(
        const NavMesh *const this,
        NavMeshTileRef ref,
        SurfaceIDType surfaceID,
        const NavMeshTile *sourceTile,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char *v8; // rsi
  unsigned __int64 v9; // rax
  const NavMeshTile *p_rhs; // rsi
  const NavMeshDataHeader *header; // rdx
  const NavMeshDataHeader *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(NavMeshTileMemoryCallback *, _QWORD); // r14
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > >::pointer v15; // rdx
  TileLookUpData *p_second; // rax
  int v17; // eax
  __int64 result; // rax
  int i; // [rsp+40h] [rbp-160h]
  float portalHeight; // [rsp+44h] [rbp-15Ch]
  __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > __rhs; // [rsp+48h] [rbp-158h] BYREF
  const NavMesh::SurfaceData *surfaceData; // [rsp+50h] [rbp-150h]
  vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *lut; // [rsp+58h] [rbp-148h]
  const NavMeshTile *ntile; // [rsp+60h] [rbp-140h]
  NavMeshTile *tile; // [rsp+68h] [rbp-138h]
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-130h] BYREF
  char v30[272]; // [rsp+90h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 48 2 14 surfaceID:4287 64 4 6 x:4305 80 4 6 y:4306 96 8 18 itSurfaceData:4292 128 8 14 dynamic"
                        "It:4310 160 8 7 it:4313 192 8 11 lutKey:4309";
  *(_QWORD *)(v5 + 16) = NavMesh::RestoreTile;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234688015;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -202116352;
  *(_WORD *)(v5 + 48) = surfaceID;
  NavMesh::RemoveTile(this, ref, *(_WORD *)(v5 + 48), 0LL, 0LL, callback);
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v5 + 96) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::find(&this->m_SurfaceIDToData, (const vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::key_type *)(v5 + 48));
  *(vector_map<short unsigned int,NavMesh::SurfaceData,std::less<short unsigned int>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> >::const_iterator *)(v5 + 192) = vector_map<unsigned short,NavMesh::SurfaceData,std::less<unsigned short>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>::end(&this->m_SurfaceIDToData);
  v8 = (char *)(v5 + 192);
  if ( !__gnu_cxx::operator!=<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 96),
          (const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *)(v5 + 192)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      "RestoreTile",
      4293);
    common::milog::MiLogStream::operator()(&v29, "Invalid surface ID");
    common::milog::MiLogStream::~MiLogStream(&v29);
    __asan_handle_no_return(&v29);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x10C5u,
      "NavMeshStatus NavMesh::RestoreTile(NavMeshTileRef, SurfaceIDType, const NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  surfaceData = &__gnu_cxx::__normal_iterator<std::pair<unsigned short,NavMesh::SurfaceData> const*,std::vector<std::pair<unsigned short,NavMesh::SurfaceData>,stl_allocator<std::pair<unsigned short,NavMesh::SurfaceData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<short unsigned int,NavMesh::SurfaceData>*,std::vector<std::pair<short unsigned int,NavMesh::SurfaceData>,stl_allocator<std::pair<short unsigned int,NavMesh::SurfaceData>,16> > > *const)(v5 + 96))->second;
  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, v8);
  v9 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 16);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 16, v8);
  lut = (vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *))v9)(callback);
  if ( *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)surfaceData + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&surfaceData->m_Settings.cellSize >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&surfaceData->m_Settings.cellSize);
  }
  portalHeight = surfaceData->m_Settings.cellSize;
  ntile = sourceTile;
  p_rhs = sourceTile;
  NavMesh::UnconnectLinks(this, sourceTile, callback);
  for ( i = 0; i <= 7; i += 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&sourceTile->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&sourceTile->header, p_rhs);
    header = sourceTile->header;
    if ( *(_BYTE *)(((unsigned __int64)&header->x >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)header + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->x >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&header->x);
    }
    *(_DWORD *)(v5 + 64) = header->x;
    v12 = sourceTile->header;
    if ( *(_BYTE *)(((unsigned __int64)&v12->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v12 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v12->y);
    }
    *(_DWORD *)(v5 + 80) = v12->y;
    TileLUTHelper::NeighbourLocation((int *)(v5 + 64), (int *)(v5 + 80), i);
    *(std::pair<int,int> *)(v5 + 192) = std::make_pair<int &,int &>((int *)(v5 + 64), (int *)(v5 + 80));
    *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::iterator *)(v5 + 128) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(lut, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v5 + 192));
    __rhs._M_current = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(lut)._M_current;
    p_rhs = (const NavMeshTile *)&__rhs;
    if ( __gnu_cxx::operator!=<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
           (const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v5 + 128),
           &__rhs) )
    {
      *(vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::const_iterator *)(v5 + 160) = vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::find(&this->m_TileLUT, (const vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int> >,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> >::key_type *)(v5 + 192));
      __rhs._M_current = (std::pair<std::pair<int,int>,TileLookUpData> *)vector_map<std::pair<int,int>,TileLookUpData,std::less<std::pair<int,int>>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>::end(&this->m_TileLUT)._M_current;
      p_rhs = (const NavMeshTile *)&__rhs;
      if ( !__gnu_cxx::operator==<std::pair<std::pair<int,int>,TileLookUpData> const*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)(v5 + 160),
              (const __gnu_cxx::__normal_iterator<const std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *)&__rhs) )
      {
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, &__rhs);
        v13 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 6);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 6, &__rhs);
        v14 = *(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v13;
        v15 = __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData> *,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<std::pair<int,int>,TileLookUpData>*,std::vector<std::pair<std::pair<int,int>,TileLookUpData>,stl_allocator<std::pair<std::pair<int,int>,TileLookUpData>,16> > > *const)(v5 + 128));
        p_second = &v15->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        tile = (NavMeshTile *)v14(callback, (unsigned int)v15->second.tileNavMeshIndex);
        v17 = TileLUTHelper::OppositeTile(i);
        NavMesh::ConnectExtLinks(this, tile, ntile, v17, portalHeight, callback);
        p_rhs = ntile;
        NavMesh::ConnectExtLinks(this, ntile, tile, i, portalHeight, callback);
      }
    }
  }
  result = 0x40000000LL;
  if ( v30 == (char *)v5 )
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
  return result;
};

// Line 4328: range 000000000CC42644-000000000CC42A2F
void __cdecl NavMesh::ConnectOffMeshConnectionsToTile(
        const NavMesh *const this,
        NavMeshTile *tile,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const NavMeshDataHeader *header; // rdx
  double v7; // xmm0_8
  const OffMeshConnection *v8; // rdx
  unsigned int i; // [rsp+28h] [rbp-98h]
  int agentTypeID; // [rsp+2Ch] [rbp-94h]
  NavMesh::SurfaceData *settings; // [rsp+30h] [rbp-90h]
  const OffMeshConnection *con; // [rsp+38h] [rbp-88h]
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 15 tileBounds:4329";
  *(_QWORD *)(v3 + 16) = NavMesh::ConnectOffMeshConnectionsToTile;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  GetWorldTileBounds((MinMaxAABB *)(v3 + 32), tile);
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tile);
  header = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&header->agentTypeId >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)header + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->agentTypeId >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&header->agentTypeId);
  }
  agentTypeID = header->agentTypeId;
  if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(tile);
  }
  settings = NavMesh::GetSurfaceSettings(this, tile->surfaceID);
  if ( settings )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_firstOffMeshConnection);
    }
    for ( i = this->m_firstOffMeshConnection; i != -1; i = v8->next )
    {
      con = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
      if ( *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(con);
      }
      if ( agentTypeID == con->agentTypeID && IntersectAABBAABB(&con->bounds, (const MinMaxAABB *)(v3 + 32)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&settings->m_Settings.agentClimb >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)settings + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->m_Settings.agentClimb >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&settings->m_Settings.agentClimb);
        }
        *(float *)&v7 = settings->m_Settings.agentClimb;
        if ( *(_BYTE *)(((unsigned __int64)&settings->m_Settings.agentRadius >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)settings + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&settings->m_Settings.agentRadius >> 3)
                                                                 + 0x7FFF8000) )
        {
          v7 = __asan_report_load4(&settings->m_Settings.agentRadius);
        }
        NavMesh::ConnectOffMeshConnection(this, i, settings->m_Settings.agentRadius, *(float *)&v7, callback);
      }
      v8 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
      if ( *(_BYTE *)(((unsigned __int64)&v8->next >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v8 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->next >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&v8->next);
      }
    }
  }
  if ( v14 == (char *)v3 )
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

// Line 4349: range 000000000CC42A30-000000000CC449C1
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMesh::ConnectOffMeshConnection(
        const NavMesh *const this,
        unsigned int index,
        float connectRadius,
        float connectHeight,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char *v7; // rbx
  _DWORD *v8; // r12
  unsigned __int64 v9; // rax
  NavMeshPolyRef agentTypeID; // rsi
  float width; // r14d
  __int64 v12; // xmm0_8
  int v13; // xmm1_4
  const Vector3f *p_pos; // rdi
  char v15; // dl
  bool v16; // r8
  char v17; // dl
  const Vector3f *v18; // rdi
  char v19; // dl
  bool v20; // r8
  char v21; // dl
  const Vector3f *v22; // rcx
  const Vector3f *v23; // rdi
  NavMeshPolyRef v24; // rsi
  NavMeshStatus v25; // eax
  int v26; // ecx
  char v27; // dl
  int v28; // ecx
  char v29; // dl
  unsigned __int64 v30; // rax
  unsigned int *v31; // rdi
  unsigned int v32; // ecx
  char v33; // al
  unsigned __int64 v34; // rax
  const NavMeshPoly *v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  char v38; // dl
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned int v42; // ecx
  char v43; // al
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  OffMeshLinkEndPoint *v48; // rax
  NavMeshStatus TileAndPolyByRef; // eax
  char v50; // dl
  bool v51; // di
  char v52; // dl
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  char v55; // cl
  bool v56; // r8
  char v57; // cl
  __int64 mapped; // rax
  unsigned __int64 v59; // rax
  unsigned __int8 v60; // cl
  unsigned int *p_firstLink; // rdi
  unsigned int firstLink; // ecx
  unsigned int v63; // ecx
  char v64; // al
  unsigned __int64 v65; // rax
  unsigned __int8 bmax; // cl
  const NavMeshPoly *v67; // rsi
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  char v70; // dl
  unsigned __int64 v71; // rdi
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned int v74; // ecx
  char v75; // al
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rax
  unsigned __int8 tmin; // [rsp+22h] [rbp-42Eh]
  unsigned __int8 tmax; // [rsp+23h] [rbp-42Dh]
  int i; // [rsp+24h] [rbp-42Ch]
  int j; // [rsp+28h] [rbp-428h]
  int i_0; // [rsp+2Ch] [rbp-424h]
  unsigned int ip_1; // [rsp+30h] [rbp-420h]
  unsigned int ip_0; // [rsp+34h] [rbp-41Ch]
  const OffMeshConnection *con; // [rsp+38h] [rbp-418h]
  DynamicOffMeshConnection *modifyCon; // [rsp+40h] [rbp-410h]
  NavMeshPolyRef conRef; // [rsp+48h] [rbp-408h]
  NavMeshPolyRef mappedRef_0; // [rsp+50h] [rbp-400h]
  unsigned __int64 link_1; // [rsp+58h] [rbp-3F8h]
  NavMeshLink *link_2; // [rsp+60h] [rbp-3F0h]
  NavMeshPolyRef mappedRef; // [rsp+68h] [rbp-3E8h]
  unsigned __int64 link; // [rsp+70h] [rbp-3E0h]
  NavMeshLink *link_0; // [rsp+78h] [rbp-3D8h]
  char v100[976]; // [rsp+80h] [rbp-3D0h] BYREF

  v5 = (unsigned __int64)v100;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(928LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 928);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "11 48 4 10 count:4370 64 4 8 idx:4467 80 4 8 idx:4486 96 8 15 mappedTile:4458 128 8 15 mappedPol"
                        "y:4459 160 12 11 extent:4363 192 12 8 ext:4444 224 12 14 searchPos:4450 256 12 14 mappedPos:4451"
                        " 288 256 10 polys:4368 608 256 18 overlapMinMax:4369";
  *(_QWORD *)(v5 + 16) = NavMesh::ConnectOffMeshConnection;
  v8 = (_DWORD *)(v5 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -219020288;
  v8[536862726] = -219020288;
  v8[536862727] = -219020288;
  v8[536862728] = -219020288;
  v8[536862737] = -218959118;
  v8[536862738] = -218959118;
  v8[536862747] = -202116109;
  v8[536862748] = -202116109;
  con = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, index);
  v9 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 13);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 13, index);
  modifyCon = (DynamicOffMeshConnection *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD, const OffMeshConnection *))v9)(
                                            callback,
                                            index,
                                            con);
  if ( *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&con->salt);
  }
  conRef = NavMeshPolyRefHelper::EncodeLinkId(con->salt, index, 0);
  agentTypeID = (((_BYTE)con - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)con - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&con->width);
  }
  if ( con->width <= 0.0 )
  {
    Vector3f::Vector3f((Vector3f *const)(v5 + 192), connectRadius, connectHeight, connectRadius);
    for ( i_0 = 0; i_0 <= 1; ++i_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&modifyCon->endPoints[i_0].tileRef >> 3) + 0x7FFF8000) )
        __asan_report_load8(&modifyCon->endPoints[i_0].tileRef, agentTypeID);
      if ( !modifyCon->endPoints[i_0].tileRef )
      {
        v47 = (unsigned __int64)&modifyCon->endPoints[i_0];
        if ( *(char *)((v47 >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v47 + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v47 + 11) & 7) >= *(_BYTE *)(((v47 + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v47, 12LL);
        }
        v48 = &modifyCon->endPoints[i_0];
        *(_QWORD *)(v5 + 224) = *(_QWORD *)&v48->pos.x;
        *(float *)(v5 + 232) = v48->pos.z;
        Vector3f::Vector3f((Vector3f *const)(v5 + 256));
        if ( *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(con);
        }
        agentTypeID = (unsigned int)con->agentTypeID;
        mappedRef_0 = NavMesh::FindNearestPoly(
                        this,
                        agentTypeID,
                        (const Vector3f *)(v5 + 224),
                        (const Vector3f *)(v5 + 192),
                        (Vector3f *)(v5 + 256));
        if ( mappedRef_0 )
        {
          agentTypeID = v5 + 224;
          if ( TestPointInCylinder(v5 + 256, v5 + 224, connectHeight, connectRadius) )
          {
            *(_QWORD *)(v5 + 96) = 0LL;
            *(_QWORD *)(v5 + 128) = 0LL;
            agentTypeID = mappedRef_0;
            TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                                 this,
                                 mappedRef_0,
                                 (const NavMeshTile **)(v5 + 96),
                                 (const NavMeshPoly **)(v5 + 128),
                                 callback);
            if ( !NavMeshStatusFailed(TileAndPolyByRef) )
            {
              v50 = *(_BYTE *)(((unsigned __int64)&modifyCon->endPoints[i_0].mapped[1] >> 3) + 0x7FFF8000);
              v51 = ((48 * i_0 + 12 + (unsigned __int8)modifyCon + 12) & 7) >= v50 && v50 != 0;
              v52 = *(_BYTE *)((((unsigned __int64)&modifyCon->endPoints[i_0].mapped[1].z + 3) >> 3) + 0x7FFF8000);
              if ( v51 || v52 != 0 && ((48 * i_0 + 12 + (unsigned __int8)modifyCon + 23) & 7) >= v52 )
                __asan_report_store_n(&modifyCon->endPoints[i_0].mapped[1], 12LL);
              v53 = (__int64)&modifyCon->endPoints[i_0].mapped[1];
              *(_QWORD *)v53 = *(_QWORD *)(v5 + 256);
              *(_DWORD *)(v53 + 8) = *(_DWORD *)(v5 + 264);
              v54 = (unsigned __int64)&modifyCon->endPoints[i_0].mapped[1];
              v55 = *(_BYTE *)(((unsigned __int64)modifyCon->endPoints[i_0].mapped >> 3) + 0x7FFF8000);
              v56 = (((unsigned __int8)modifyCon + 48 * i_0 + 12) & 7) >= v55 && v55 != 0;
              v57 = *(_BYTE *)((((unsigned __int64)&modifyCon->endPoints[i_0].mapped[0].z + 3) >> 3) + 0x7FFF8000);
              if ( v56 || v57 != 0 && (((unsigned __int8)modifyCon + 48 * i_0 + 23) & 7) >= v57 )
                __asan_report_store_n(modifyCon->endPoints[i_0].mapped, 12LL);
              if ( (char)(v54 & 7) >= *(_BYTE *)((v54 >> 3) + 0x7FFF8000) && *(_BYTE *)((v54 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((v54 + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((v54 + 11) & 7) >= *(_BYTE *)(((v54 + 11) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load_n(v54, 12LL);
              }
              mapped = (__int64)modifyCon->endPoints[i_0].mapped;
              *(_QWORD *)mapped = *(_QWORD *)v54;
              *(_DWORD *)(mapped + 8) = *(_DWORD *)(v54 + 8);
              if ( *(_BYTE *)(((unsigned __int64)&modifyCon->endPoints[i_0].tileRef >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              modifyCon->endPoints[i_0].tileRef = mappedRef_0;
              *(_DWORD *)(v5 + 64) = 0;
              if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                __asan_report_load8(callback, modifyCon);
              v59 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
              if ( *(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
                v59 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, modifyCon);
              agentTypeID = v5 + 64;
              link_1 = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v59)(callback, v5 + 64);
              if ( link_1 )
              {
                if ( *(_BYTE *)((link_1 >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(_QWORD *)link_1 = mappedRef_0;
                if ( *(_BYTE *)(((link_1 + 12) >> 3) + 0x7FFF8000) != 0
                  && (char)((link_1 + 12) & 7) >= *(_BYTE *)(((link_1 + 12) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store1(link_1 + 12);
                }
                *(_BYTE *)(link_1 + 12) = i_0;
                if ( *(_BYTE *)(((link_1 + 13) >> 3) + 0x7FFF8000) != 0
                  && (char)((link_1 + 13) & 7) >= *(_BYTE *)(((link_1 + 13) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store1(link_1 + 13);
                }
                *(_BYTE *)(link_1 + 13) = -1;
                if ( *(_BYTE *)(((link_1 + 15) >> 3) + 0x7FFF8000) != 0
                  && (char)((link_1 + 15) & 7) >= *(_BYTE *)(((link_1 + 15) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store1(link_1 + 15);
                }
                *(_BYTE *)(link_1 + 15) = 0;
                v60 = *(_BYTE *)(link_1 + 15);
                p_firstLink = (unsigned int *)(((_BYTE)link_1 + 14) & 7);
                if ( *(_BYTE *)(((link_1 + 14) >> 3) + 0x7FFF8000) != 0
                  && (char)p_firstLink >= *(_BYTE *)(((link_1 + 14) >> 3) + 0x7FFF8000) )
                {
                  p_firstLink = (unsigned int *)(link_1 + 14);
                  __asan_report_store1(link_1 + 14);
                }
                *(_BYTE *)(link_1 + 14) = v60;
                if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3)
                                                                     + 0x7FFF8000) )
                {
                  p_firstLink = &con->firstLink;
                  __asan_report_load4(&con->firstLink);
                }
                if ( con->firstLink == *(_DWORD *)(v5 + 64) )
                {
                  __asan_handle_no_return(p_firstLink);
                  __assert_fail(
                    "idx != con.firstLink",
                    "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                    0x117Cu,
                    "void NavMesh::ConnectOffMeshConnection(unsigned int, float, float, NavMeshTileMemoryCallback*) const");
                }
                agentTypeID = (((_BYTE)con - 68) & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load4(&con->firstLink);
                }
                firstLink = con->firstLink;
                if ( *(_BYTE *)(((link_1 + 8) >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((link_1 + 8) >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(link_1 + 8);
                }
                *(_DWORD *)(link_1 + 8) = firstLink;
                v63 = *(_DWORD *)(v5 + 64);
                v64 = *(_BYTE *)(((unsigned __int64)&modifyCon->firstLink >> 3) + 0x7FFF8000);
                LOBYTE(agentTypeID) = v64 != 0;
                if ( v64 != 0 && v64 <= 3 )
                  __asan_report_store4(&modifyCon->firstLink);
                modifyCon->firstLink = v63;
              }
              if ( !i_0 )
                goto LABEL_161;
              if ( i_0 == 1 )
              {
                agentTypeID = ((_BYTE)con - 84) & 7;
                if ( *(_BYTE *)(((unsigned __int64)&con->linkDirection >> 3) + 0x7FFF8000) != 0
                  && (char)agentTypeID >= *(_BYTE *)(((unsigned __int64)&con->linkDirection >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(&con->linkDirection);
                }
                if ( (con->linkDirection & 1) != 0 )
                {
LABEL_161:
                  *(_DWORD *)(v5 + 80) = -1;
                  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                    __asan_report_load8(callback, agentTypeID);
                  v65 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
                  if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
                    v65 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, agentTypeID);
                  agentTypeID = v5 + 80;
                  link_2 = (NavMeshLink *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v65)(
                                            callback,
                                            v5 + 80);
                  if ( link_2 )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)link_2 >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    link_2->ref = conRef;
                    if ( *(_BYTE *)(((unsigned __int64)&link_2->edge >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link_2->edge >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_2->edge);
                    }
                    link_2->edge = i_0;
                    if ( *(_BYTE *)(((unsigned __int64)&link_2->side >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_2 + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link_2->side >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_2->side);
                    }
                    link_2->side = -1;
                    if ( *(_BYTE *)(((unsigned __int64)&link_2->bmax >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_2 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link_2->bmax >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_2->bmax);
                    }
                    link_2->bmax = 0;
                    bmax = link_2->bmax;
                    if ( *(_BYTE *)(((unsigned __int64)&link_2->bmin >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_2 + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link_2->bmin >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_2->bmin);
                    }
                    link_2->bmin = bmax;
                    v67 = *(const NavMeshPoly **)(v5 + 128);
                    ip_1 = GetPolyIndex(*(const NavMeshTile **)(v5 + 96), v67);
                    if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(mappedRef_0) )
                    {
                      v68 = *(_QWORD *)(v5 + 96);
                      if ( *(_BYTE *)(((unsigned __int64)(v68 + 24) >> 3) + 0x7FFF8000) )
                        v68 = __asan_report_load8(v68 + 24, v67);
                      v69 = *(_QWORD *)(v68 + 24) + 4LL * ip_1;
                      v70 = *(_BYTE *)((v69 >> 3) + 0x7FFF8000);
                      LOBYTE(v67) = v70 != 0;
                      v71 = (unsigned int)(v69 & 7) + 3;
                      if ( v70 != 0 && (char)((v69 & 7) + 3) >= v70 )
                      {
                        v71 = v69;
                        __asan_report_load4(v69);
                      }
                      if ( *(_DWORD *)v69 == *(_DWORD *)(v5 + 80) )
                      {
                        __asan_handle_no_return(v71);
                        __assert_fail(
                          "idx != mappedTile->polyLinks[ip]",
                          "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                          0x1193u,
                          "void NavMesh::ConnectOffMeshConnection(unsigned int, float, float, NavMeshTileMemoryCallback*) const");
                      }
                      v72 = *(_QWORD *)(v5 + 96);
                      if ( *(_BYTE *)(((unsigned __int64)(v72 + 24) >> 3) + 0x7FFF8000) )
                        v72 = __asan_report_load8(v72 + 24, v67);
                      v73 = *(_QWORD *)(v72 + 24) + 4LL * ip_1;
                      if ( *(_BYTE *)((v73 >> 3) + 0x7FFF8000) != 0
                        && (char)((v73 & 7) + 3) >= *(_BYTE *)((v73 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v73);
                      }
                      v74 = *(_DWORD *)v73;
                      v75 = *(_BYTE *)(((unsigned __int64)&link_2->next >> 3) + 0x7FFF8000);
                      LOBYTE(v67) = v75 != 0;
                      if ( v75 != 0 && v75 <= 3 )
                        __asan_report_store4(&link_2->next);
                      link_2->next = v74;
                      v76 = *(_QWORD *)(v5 + 96);
                      if ( *(_BYTE *)(((unsigned __int64)(v76 + 24) >> 3) + 0x7FFF8000) )
                        v76 = __asan_report_load8(v76 + 24, v67);
                      v77 = *(_QWORD *)(v76 + 24) + 4LL * ip_1;
                      agentTypeID = *(unsigned int *)(v5 + 80);
                      if ( *(_BYTE *)((v77 >> 3) + 0x7FFF8000) != 0
                        && (char)((v77 & 7) + 3) >= *(_BYTE *)((v77 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store4(v77);
                      }
                      *(_DWORD *)v77 = agentTypeID;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                        __asan_report_load8(callback, v67);
                      v78 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 20);
                      if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
                        v78 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 20, v67);
                      agentTypeID = *(_QWORD *)(v5 + 96);
                      (*(void (__fastcall **)(NavMeshTileMemoryCallback *, NavMeshPolyRef, NavMeshLink *, _QWORD, _QWORD))v78)(
                        callback,
                        agentTypeID,
                        link_2,
                        *(unsigned int *)(v5 + 80),
                        ip_1);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&modifyCon->firstLink >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&modifyCon->firstLink >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&modifyCon->firstLink);
    }
    modifyCon->firstLink = -1;
    NavMesh::UnconnectOffMeshConnection(this, index, callback);
    for ( i = 0; i <= 1; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)con - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->width >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&con->width);
      }
      width = con->width;
      if ( i )
      {
        *(Vector3f *)(v5 + 192) = NormalizeSafe(&con->axisX, &Vector3f::zero);
        *(Vector3f *)&v12 = Vector3f::operator-((const Vector3f *const)(v5 + 192));
      }
      else
      {
        *(Vector3f *)&v12 = NormalizeSafe(&con->axisX, &Vector3f::zero);
      }
      *(_QWORD *)(v5 + 224) = v12;
      *(_DWORD *)(v5 + 232) = v13;
      *(Vector3f *)(v5 + 256) = operator*((const Vector3f *)(v5 + 224), width);
      *(Vector3f *)(v5 + 160) = operator*((const Vector3f *)(v5 + 256), 0.5);
      p_pos = &con->endPoints[i].pos;
      v15 = *(_BYTE *)(((unsigned __int64)modifyCon->endPoints[i].mapped >> 3) + 0x7FFF8000);
      v16 = (((unsigned __int8)modifyCon + 48 * i + 12) & 7) >= v15 && v15 != 0;
      v17 = *(_BYTE *)((((unsigned __int64)&modifyCon->endPoints[i].mapped[0].z + 3) >> 3) + 0x7FFF8000);
      if ( v16 || v17 != 0 && (((unsigned __int8)modifyCon + 48 * i + 23) & 7) >= v17 )
      {
        p_pos = modifyCon->endPoints[i].mapped;
        __asan_report_store_n(p_pos, 12LL);
      }
      modifyCon->endPoints[i].mapped[0] = operator-(p_pos, (const Vector3f *)(v5 + 160));
      v18 = &con->endPoints[i].pos;
      v19 = *(_BYTE *)(((unsigned __int64)&modifyCon->endPoints[i].mapped[1] >> 3) + 0x7FFF8000);
      v20 = ((48 * i + 12 + (unsigned __int8)modifyCon + 12) & 7) >= v19 && v19 != 0;
      v21 = *(_BYTE *)((((unsigned __int64)&modifyCon->endPoints[i].mapped[1].z + 3) >> 3) + 0x7FFF8000);
      if ( v20 || v21 != 0 && ((48 * i + 12 + (unsigned __int8)modifyCon + 23) & 7) >= v21 )
      {
        v18 = &modifyCon->endPoints[i].mapped[1];
        __asan_report_store_n(v18, 12LL);
      }
      modifyCon->endPoints[i].mapped[1] = operator+(v18, (const Vector3f *)(v5 + 160));
      *(_DWORD *)(v5 + 48) = 0;
      v22 = &modifyCon->endPoints[i].mapped[1];
      v23 = modifyCon->endPoints[i].mapped;
      if ( *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)con >> 3) + 0x7FFF8000) <= 3 )
      {
        v23 = (const Vector3f *)con;
        __asan_report_load4(con);
      }
      v24 = (unsigned int)con->agentTypeID;
      NavMesh::FindPolygonsOverlappingSegment(
        this,
        v24,
        v23,
        v22,
        connectHeight,
        (NavMeshPolyRef *)(v5 + 288),
        (float *)(v5 + 608),
        (int *)(v5 + 48),
        32,
        callback);
      for ( j = 0; j < *(_DWORD *)(v5 + 48); ++j )
      {
        if ( *(_BYTE *)(((8LL * j + v5 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_load8(8LL * j + v5 + 288, v24);
        mappedRef = *(_QWORD *)&v7[8 * j - 640];
        if ( mappedRef )
        {
          *(_QWORD *)(v5 + 96) = 0LL;
          *(_QWORD *)(v5 + 128) = 0LL;
          v24 = mappedRef;
          v25 = NavMesh::GetTileAndPolyByRef(
                  this,
                  mappedRef,
                  (const NavMeshTile **)(v5 + 96),
                  (const NavMeshPoly **)(v5 + 128),
                  callback);
          if ( !NavMeshStatusFailed(v25) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&modifyCon->endPoints[i].tileRef >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            modifyCon->endPoints[i].tileRef = mappedRef;
            v26 = 2 * j;
            v27 = *(_BYTE *)(((8LL * j + v5 + 608) >> 3) + 0x7FFF8000);
            if ( v27 != 0 && (char)(((8 * j + v5 + 96) & 7) + 3) >= v27 )
              __asan_report_load4(8LL * j + v5 + 608);
            tmin = (int)(float)(255.0 * *(float *)&v7[4 * v26 - 320]);
            v28 = 2 * j + 1;
            v29 = *(_BYTE *)(((4LL * v28 + v5 + 608) >> 3) + 0x7FFF8000);
            LOBYTE(v24) = v29 != 0;
            if ( v29 != 0 && (char)(((4 * (2 * j + 1) + v5 + 96) & 7) + 3) >= v29 )
              __asan_report_load4(4LL * v28 + v5 + 608);
            tmax = (int)(float)(255.0 * *(float *)&v7[4 * v28 - 320]);
            if ( tmin < tmax )
            {
              *(_DWORD *)(v5 + 64) = 0;
              if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                __asan_report_load8(callback, v24);
              v30 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
              if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                v30 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, v24);
              v24 = v5 + 64;
              link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v30)(callback, v5 + 64);
              if ( link )
              {
                if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(_QWORD *)link = mappedRef;
                v31 = (unsigned int *)(((_BYTE)link + 12) & 7);
                if ( *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) != 0
                  && (char)v31 >= *(_BYTE *)(((link + 12) >> 3) + 0x7FFF8000) )
                {
                  v31 = (unsigned int *)(link + 12);
                  __asan_report_store1(link + 12);
                }
                *(_BYTE *)(link + 12) = i;
                if ( *(_BYTE *)(((link + 13) >> 3) + 0x7FFF8000) != 0
                  && (char)((link + 13) & 7) >= *(_BYTE *)(((link + 13) >> 3) + 0x7FFF8000) )
                {
                  v31 = (unsigned int *)(link + 13);
                  __asan_report_store1(link + 13);
                }
                *(_BYTE *)(link + 13) = -1;
                if ( *(_BYTE *)(((link + 14) >> 3) + 0x7FFF8000) != 0
                  && (char)((link + 14) & 7) >= *(_BYTE *)(((link + 14) >> 3) + 0x7FFF8000) )
                {
                  v31 = (unsigned int *)(link + 14);
                  __asan_report_store1(link + 14);
                }
                *(_BYTE *)(link + 14) = tmin;
                v24 = ((_BYTE)link + 15) & 7;
                if ( *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) != 0
                  && (char)v24 >= *(_BYTE *)(((link + 15) >> 3) + 0x7FFF8000) )
                {
                  v31 = (unsigned int *)(link + 15);
                  __asan_report_store1(link + 15);
                }
                *(_BYTE *)(link + 15) = tmax;
                if ( *(_BYTE *)(((unsigned __int64)&modifyCon->firstLink >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&modifyCon->firstLink >> 3) + 0x7FFF8000) <= 3 )
                {
                  v31 = &modifyCon->firstLink;
                  __asan_report_load4(&modifyCon->firstLink);
                }
                if ( modifyCon->firstLink == *(_DWORD *)(v5 + 64) )
                {
                  __asan_handle_no_return(v31);
                  __assert_fail(
                    "idx != modifyCon.firstLink",
                    "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                    0x1133u,
                    "void NavMesh::ConnectOffMeshConnection(unsigned int, float, float, NavMeshTileMemoryCallback*) const");
                }
                if ( *(_BYTE *)(((unsigned __int64)&modifyCon->firstLink >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&modifyCon->firstLink >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&modifyCon->firstLink);
                }
                v32 = modifyCon->firstLink;
                v33 = *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000);
                LOBYTE(v24) = v33 != 0;
                if ( v33 != 0 && v33 <= 3 )
                  __asan_report_store4(link + 8);
                *(_DWORD *)(link + 8) = v32;
                modifyCon->firstLink = *(_DWORD *)(v5 + 64);
              }
              if ( !i )
                goto LABEL_70;
              if ( i == 1 )
              {
                v24 = ((_BYTE)con - 84) & 7;
                if ( *(_BYTE *)(((unsigned __int64)&con->linkDirection >> 3) + 0x7FFF8000) != 0
                  && (char)v24 >= *(_BYTE *)(((unsigned __int64)&con->linkDirection >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(&con->linkDirection);
                }
                if ( (con->linkDirection & 1) != 0 )
                {
LABEL_70:
                  *(_DWORD *)(v5 + 80) = 0;
                  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                    __asan_report_load8(callback, v24);
                  v34 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 9);
                  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                    v34 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 9, v24);
                  v24 = v5 + 80;
                  link_0 = (NavMeshLink *)(*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, unsigned __int64))v34)(
                                            callback,
                                            v5 + 80);
                  if ( link_0 )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)link_0 >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    link_0->ref = conRef;
                    if ( *(_BYTE *)(((unsigned __int64)&link_0->edge >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_0 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->edge >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_0->edge);
                    }
                    link_0->edge = i;
                    if ( *(_BYTE *)(((unsigned __int64)&link_0->side >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_0 + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->side >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_0->side);
                    }
                    link_0->side = -1;
                    if ( *(_BYTE *)(((unsigned __int64)&link_0->bmin >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_0 + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->bmin >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_0->bmin);
                    }
                    link_0->bmin = tmin;
                    if ( *(_BYTE *)(((unsigned __int64)&link_0->bmax >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)link_0 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&link_0->bmax >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(&link_0->bmax);
                    }
                    link_0->bmax = tmax;
                    v35 = *(const NavMeshPoly **)(v5 + 128);
                    ip_0 = GetPolyIndex(*(const NavMeshTile **)(v5 + 96), v35);
                    if ( NavMeshPolyRefHelper::DecodeTileAllocFlag(mappedRef) )
                    {
                      v36 = *(_QWORD *)(v5 + 96);
                      if ( *(_BYTE *)(((unsigned __int64)(v36 + 24) >> 3) + 0x7FFF8000) )
                        v36 = __asan_report_load8(v36 + 24, v35);
                      v37 = *(_QWORD *)(v36 + 24) + 4LL * ip_0;
                      v38 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                      LOBYTE(v35) = v38 != 0;
                      v39 = (unsigned int)(v37 & 7) + 3;
                      if ( v38 != 0 && (char)((v37 & 7) + 3) >= v38 )
                      {
                        v39 = v37;
                        __asan_report_load4(v37);
                      }
                      if ( *(_DWORD *)v37 == *(_DWORD *)(v5 + 80) )
                      {
                        __asan_handle_no_return(v39);
                        __assert_fail(
                          "idx != mappedTile->polyLinks[ip]",
                          "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
                          0x114Bu,
                          "void NavMesh::ConnectOffMeshConnection(unsigned int, float, float, NavMeshTileMemoryCallback*) const");
                      }
                      v40 = *(_QWORD *)(v5 + 96);
                      if ( *(_BYTE *)(((unsigned __int64)(v40 + 24) >> 3) + 0x7FFF8000) )
                        v40 = __asan_report_load8(v40 + 24, v35);
                      v41 = *(_QWORD *)(v40 + 24) + 4LL * ip_0;
                      if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) != 0
                        && (char)((v41 & 7) + 3) >= *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v41);
                      }
                      v42 = *(_DWORD *)v41;
                      v43 = *(_BYTE *)(((unsigned __int64)&link_0->next >> 3) + 0x7FFF8000);
                      LOBYTE(v35) = v43 != 0;
                      if ( v43 != 0 && v43 <= 3 )
                        __asan_report_store4(&link_0->next);
                      link_0->next = v42;
                      v44 = *(_QWORD *)(v5 + 96);
                      if ( *(_BYTE *)(((unsigned __int64)(v44 + 24) >> 3) + 0x7FFF8000) )
                        v44 = __asan_report_load8(v44 + 24, v35);
                      v45 = *(_QWORD *)(v44 + 24) + 4LL * ip_0;
                      v24 = *(unsigned int *)(v5 + 80);
                      if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) != 0
                        && (char)((v45 & 7) + 3) >= *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store4(v45);
                      }
                      *(_DWORD *)v45 = v24;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
                        __asan_report_load8(callback, v35);
                      v46 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 20);
                      if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
                        v46 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 20, v35);
                      v24 = *(_QWORD *)(v5 + 96);
                      (*(void (__fastcall **)(NavMeshTileMemoryCallback *, NavMeshPolyRef, NavMeshLink *, _QWORD, _QWORD))v46)(
                        callback,
                        v24,
                        link_0,
                        *(unsigned int *)(v5 + 80),
                        ip_0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v100 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF806C) = 0LL;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8070) = -168430091;
  }
};

// Line 4514: range 000000000CC44BF8-000000000CC44F16
void __cdecl NavMesh::UnconnectLinks(
        const NavMesh *const this,
        const NavMeshTile *tile,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(NavMeshTileMemoryCallback *, const NavMeshTile *, std::function<bool(int,unsigned int,NavMeshTileMemoryCallback*)> *); // r14
  unsigned __int64 v8; // rax
  const NavMesh *thisa; // [rsp+18h] [rbp-A8h]
  std::function<bool(int,unsigned int,NavMeshTileMemoryCallback*)> v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const NavMesh *const)64;
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 24 linkForeachCallback:4520";
  *(_QWORD *)(v3 + 16) = NavMesh::UnconnectLinks;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !tile )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x11A3u,
      "void NavMesh::UnconnectLinks(const NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
  {
    this = (const NavMesh *const)&tile->header;
    __asan_report_load8(&tile->header, tile);
  }
  if ( !tile->header )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->header",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x11A4u,
      "void NavMesh::UnconnectLinks(const NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
  {
    this = (const NavMesh *const)&tile->polyLinks;
    __asan_report_load8(&tile->polyLinks, tile);
  }
  if ( !tile->polyLinks )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->polyLinks",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x11A5u,
      "void NavMesh::UnconnectLinks(const NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  *(_QWORD *)(v3 + 32) = NavMesh::GetPolyRefBase(thisa, tile, callback);
  *(_QWORD *)(v3 + 40) = thisa;
  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, tile);
  v6 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 24);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 24, tile);
  v7 = *(void (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *, std::function<bool(int,unsigned int,NavMeshTileMemoryCallback*)> *))v6;
  std::function<bool ()(int,unsigned int,NavMeshTileMemoryCallback *)>::function<NavMesh::UnconnectLinks(NavMeshTile const*,NavMeshTileMemoryCallback *)::{lambda(int,unsigned int,NavMeshTileMemoryCallback *)#1},void,void>(
    &v11,
    *(NavMesh::UnconnectLinks::<lambda(int32_t, uint32_t, NavMeshTileMemoryCallback*)> *)(v3 + 32));
  v7(callback, tile, &v11);
  std::function<bool ()(int,unsigned int,NavMeshTileMemoryCallback *)>::~function(&v11);
  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, tile);
  v8 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 23);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 23, tile);
  (*(void (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *))v8)(callback, tile);
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 4520: range 000000000CC449C2-000000000CC44BF6
// local variable allocation has failed, the output may be wrong!
bool __cdecl NavMesh::UnconnectLinks(NavMeshTile const*,NavMeshTileMemoryCallback *)const::{lambda(int,unsigned int,NavMeshTileMemoryCallback *)#1}::operator()(
        const NavMesh::UnconnectLinks::<lambda(int32_t, uint32_t, NavMeshTileMemoryCallback*)> *const __closure,
        int32_t ip_0,
        uint32_t linkRef,
        NavMeshTileMemoryCallback *memoryCallback)
{
  unsigned __int64 v4; // rax
  NavMeshPolyRef v5; // rdx
  const NavMesh *this; // rax
  NavMeshPolyRef v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int nk; // [rsp+2Ch] [rbp-14h]
  unsigned __int64 link; // [rsp+30h] [rbp-10h]
  NavMeshPolyRef polyRef; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(memoryCallback, *(_QWORD *)&ip_0);
  v4 = (unsigned __int64)(memoryCallback->_vptr_NavMeshTileMemoryCallback + 10);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(memoryCallback->_vptr_NavMeshTileMemoryCallback + 10, *(_QWORD *)&ip_0);
  link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v4)(memoryCallback, linkRef);
  *(_QWORD *)&ip_0 = (unsigned int)ip_0;
  v5 = NavMeshPolyRefHelper::EncodeBasePolyId(0, ip_0);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure, (unsigned int)ip_0);
  polyRef = v5 | __closure->__base;
  while ( link )
  {
    if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(link + 8);
    nk = *(_DWORD *)(link + 8);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this, *(_QWORD *)&ip_0);
    this = __closure->__this;
    if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
      this = (const NavMesh *)__asan_report_load8(link, *(_QWORD *)&ip_0);
    v7 = *(_QWORD *)link;
    NavMesh::RemoveLinkBetween(this, *(_QWORD *)link, polyRef, memoryCallback);
    if ( *(_BYTE *)(((unsigned __int64)memoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(memoryCallback, v7);
    v8 = (unsigned __int64)(memoryCallback->_vptr_NavMeshTileMemoryCallback + 12);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(memoryCallback->_vptr_NavMeshTileMemoryCallback + 12, v7);
    v9 = linkRef;
    (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v8)(memoryCallback, linkRef);
    linkRef = nk;
    if ( *(_BYTE *)(((unsigned __int64)memoryCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(memoryCallback, v9);
    v10 = (unsigned __int64)(memoryCallback->_vptr_NavMeshTileMemoryCallback + 10);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(memoryCallback->_vptr_NavMeshTileMemoryCallback + 10, v9);
    *(_QWORD *)&ip_0 = nk;
    link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v10)(memoryCallback, nk);
  }
  return 1;
};

// Line 4541: range 000000000CC44F18-000000000CC4531E
void __cdecl NavMesh::UnconnectLinks(const NavMesh *const this, NavMeshTile *tile, NavMeshTileMemoryCallback *callback)
{
  const NavMeshDataHeader *header; // rdx
  unsigned __int64 v4; // rcx
  char v5; // dl
  unsigned __int64 v6; // rax
  NavMeshPolyRef v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  char v10; // dl
  NavMeshTile *tilea; // [rsp+10h] [rbp-40h]
  const NavMesh *thisa; // [rsp+18h] [rbp-38h]
  int i; // [rsp+2Ch] [rbp-24h]
  unsigned int j; // [rsp+30h] [rbp-20h]
  unsigned int next; // [rsp+34h] [rbp-1Ch]
  NavMeshPolyRef base; // [rsp+38h] [rbp-18h]
  NavMeshPolyRef polyRef; // [rsp+40h] [rbp-10h]
  unsigned __int64 link; // [rsp+48h] [rbp-8h]

  thisa = this;
  tilea = tile;
  if ( !tile )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x11BEu,
      "void NavMesh::UnconnectLinks(NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
  {
    this = (const NavMesh *const)&tile->header;
    __asan_report_load8(&tile->header, tile);
  }
  if ( !tile->header )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->header",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x11BFu,
      "void NavMesh::UnconnectLinks(NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
  {
    this = (const NavMesh *const)&tile->polyLinks;
    __asan_report_load8(&tile->polyLinks, tile);
  }
  if ( !tile->polyLinks )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile->polyLinks",
      "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
      0x11C0u,
      "void NavMesh::UnconnectLinks(NavMeshTile*, NavMeshTileMemoryCallback*) const");
  }
  base = NavMesh::GetPolyRefBase(thisa, tile, callback);
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->header, tile);
    header = tilea->header;
    if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&header->polyCount);
    }
    if ( i >= header->polyCount )
      break;
    tile = (NavMeshTile *)(unsigned int)i;
    polyRef = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, i);
    if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->polyLinks, (unsigned int)i);
    v4 = (unsigned __int64)&tilea->polyLinks[i];
    v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
    LOBYTE(tile) = v5 != 0;
    if ( v5 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= v5 )
      __asan_report_load4(&tilea->polyLinks[i]);
    for ( j = *(_DWORD *)v4; j != -1; j = next )
    {
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, tile);
      v6 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 10);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 10, tile);
      link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v6)(callback, j);
      if ( !link )
      {
        __asan_handle_no_return(callback);
        __assert_fail(
          "link != nullptr",
          "./src/pathfinding/Internal/NavMesh/NavMesh.cpp",
          0x11CBu,
          "void NavMesh::UnconnectLinks(NavMeshTile*, NavMeshTileMemoryCallback*) const");
      }
      if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(link + 8);
      next = *(_DWORD *)(link + 8);
      if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
        __asan_report_load8(link, j);
      v7 = *(_QWORD *)link;
      NavMesh::RemoveLinkBetween(thisa, *(_QWORD *)link, polyRef, callback);
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, v7);
      v8 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 12);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 12, v7);
      tile = (NavMeshTile *)j;
      (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v8)(callback, j);
    }
    if ( *(_BYTE *)(((unsigned __int64)&tilea->polyLinks >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tilea->polyLinks, tile);
    v9 = (unsigned __int64)&tilea->polyLinks[i];
    v10 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
    LOBYTE(tile) = v10 != 0;
    if ( v10 != 0 && (char)(((LOBYTE(tilea->polyLinks) + 4 * i) & 7) + 3) >= v10 )
      __asan_report_store4(&tilea->polyLinks[i]);
    *(_DWORD *)v9 = -1;
  }
};

// Line 4569: range 000000000CC45320-000000000CC4572D
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMesh::UnconnectOffMeshConnection(
        const NavMesh *const this,
        unsigned int index,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  char v8; // dl
  unsigned __int64 v9; // rax
  NavMeshPolyRef v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char v13; // dl
  unsigned __int64 v14; // rax
  unsigned int indexa; // [rsp+14h] [rbp-8Ch]
  unsigned int i; // [rsp+20h] [rbp-80h]
  unsigned int next; // [rsp+24h] [rbp-7Ch]
  const OffMeshConnection *con; // [rsp+28h] [rbp-78h]
  NavMeshPolyRef ref; // [rsp+30h] [rbp-70h]
  unsigned __int64 link; // [rsp+38h] [rbp-68h]
  char v22[96]; // [rsp+40h] [rbp-60h] BYREF

  indexa = index;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 19 dynamicOffMesh:4572";
  *(_QWORD *)(v3 + 16) = NavMesh::UnconnectOffMeshConnection;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  con = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, index);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, index);
  v6 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 14);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 14, index);
  if ( (*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD, unsigned __int64))v6)(
         callback,
         index,
         v3 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&con->salt);
    }
    *(_QWORD *)&index = index;
    ref = NavMeshPolyRefHelper::EncodeLinkId(con->salt, index, 0);
    v7 = *(_QWORD *)(v3 + 32);
    v8 = *(_BYTE *)(((unsigned __int64)(v7 + 96) >> 3) + 0x7FFF8000);
    LOBYTE(index) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
      __asan_report_load4(v7 + 96);
    for ( i = *(_DWORD *)(v7 + 96); i != -1; i = next )
    {
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, *(_QWORD *)&index);
      v9 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 10);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 10, *(_QWORD *)&index);
      *(_QWORD *)&index = i;
      link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v9)(callback, i);
      if ( !link )
        break;
      if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(link + 8);
      next = *(_DWORD *)(link + 8);
      if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
        __asan_report_load8(link, i);
      v10 = *(_QWORD *)link;
      NavMesh::RemoveLinkBetween(this, *(_QWORD *)link, ref, callback);
      if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
        __asan_report_load8(callback, v10);
      v11 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 12);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 12, v10);
      *(_QWORD *)&index = i;
      (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v11)(callback, i);
    }
    v12 = *(_QWORD *)(v3 + 32);
    v13 = *(_BYTE *)(((unsigned __int64)(v12 + 96) >> 3) + 0x7FFF8000);
    LOBYTE(index) = v13 != 0;
    if ( v13 != 0 && v13 <= 3 )
      v12 = __asan_report_store4(v12 + 96);
    *(_DWORD *)(v12 + 96) = -1;
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, *(_QWORD *)&index);
    v14 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 15);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 15, *(_QWORD *)&index);
    (*(void (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v14)(callback, indexa);
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 4595: range 000000000CC4572E-000000000CC45C39
void __cdecl NavMesh::UnconnectOffMeshConnectionsToTile(
        const NavMesh *const this,
        NavMeshTileRef ref,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  NavMeshPolyRef v7; // rsi
  __int64 v8; // rax
  char v9; // dl
  unsigned __int64 v10; // rax
  const OffMeshConnection *v11; // rdx
  unsigned int i; // [rsp+20h] [rbp-90h]
  int j; // [rsp+24h] [rbp-8Ch]
  unsigned int k; // [rsp+28h] [rbp-88h]
  unsigned int tileIndex; // [rsp+2Ch] [rbp-84h]
  unsigned int next; // [rsp+30h] [rbp-80h]
  const OffMeshConnection *con; // [rsp+38h] [rbp-78h]
  NavMeshPolyRef conRef; // [rsp+40h] [rbp-70h]
  unsigned __int64 link; // [rsp+48h] [rbp-68h]
  char v21[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 dcon:4601";
  *(_QWORD *)(v3 + 16) = NavMesh::UnconnectOffMeshConnectionsToTile;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  tileIndex = NavMeshPolyRefHelper::DecodePolyIdTile(ref);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_firstOffMeshConnection >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_firstOffMeshConnection);
  }
  for ( i = this->m_firstOffMeshConnection; i != -1; i = v11->next )
  {
    con = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
    *(_QWORD *)(v3 + 32) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, i);
    v6 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 14);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 14, i);
    if ( (*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD, unsigned __int64))v6)(
           callback,
           i,
           v3 + 32) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&con->salt >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&con->salt);
      }
      v7 = i;
      conRef = NavMeshPolyRefHelper::EncodeLinkId(con->salt, i, 0);
      for ( j = 0; j <= 1; ++j )
      {
        if ( *(_BYTE *)(((unsigned __int64)&con->endPoints[j].tileRef >> 3) + 0x7FFF8000) )
          __asan_report_load8(&con->endPoints[j].tileRef, v7);
        if ( con->endPoints[j].tileRef )
        {
          v8 = *(_QWORD *)(v3 + 32);
          v9 = *(_BYTE *)(((unsigned __int64)(v8 + 96) >> 3) + 0x7FFF8000);
          LOBYTE(v7) = v9 != 0;
          if ( v9 != 0 && v9 <= 3 )
            __asan_report_load4(v8 + 96);
          for ( k = *(_DWORD *)(v8 + 96); k != -1; k = next )
          {
            if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
              __asan_report_load8(callback, v7);
            v10 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 10);
            if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
              v10 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 10, v7);
            v7 = k;
            link = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD))v10)(callback, k);
            if ( !link )
              break;
            if ( *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((link + 8) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(link + 8);
            next = *(_DWORD *)(link + 8);
            if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
              __asan_report_load8(link, k);
            if ( NavMeshPolyRefHelper::DecodePolyIdTile(*(_QWORD *)link) == tileIndex )
            {
              if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
                __asan_report_load8(link, k);
              NavMesh::RemoveLinkBetween(this, conRef, *(_QWORD *)link, callback);
              if ( *(_BYTE *)((link >> 3) + 0x7FFF8000) )
                __asan_report_load8(link, conRef);
              v7 = *(_QWORD *)link;
              NavMesh::RemoveLinkBetween(this, *(_QWORD *)link, conRef, callback);
            }
          }
        }
      }
    }
    v11 = FreeList<OffMeshConnection,false>::operator[](&this->m_offMeshConnections, i);
    if ( *(_BYTE *)(((unsigned __int64)&v11->next >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v11 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->next >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v11->next);
    }
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 4634: range 000000000CC465A8-000000000CC46921
void __cdecl NavMesh::FindPolygonsOverlappingSegment(
        const NavMesh *const this,
        int typeID,
        const Vector3f *pa,
        const Vector3f *pb,
        const float height,
        NavMeshPolyRef *polys,
        float *overlapMinMax,
        int *polyCount,
        const int maxPolys,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // r12
  int v13; // ecx
  Vector3f v19; // [rsp+30h] [rbp-130h] BYREF
  Vector3f cen; // [rsp+3Ch] [rbp-124h] BYREF
  Vector3f inV; // [rsp+48h] [rbp-118h] BYREF
  Vector3f ext; // [rsp+54h] [rbp-10Ch] BYREF
  char v23[256]; // [rsp+60h] [rbp-100h] BYREF

  v10 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(224LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "3 48 12 9 bmin:4690 80 12 9 bmax:4691 112 80 12 overlap:4696";
  *(_QWORD *)(v10 + 16) = NavMesh::FindPolygonsOverlappingSegment;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = 61937;
  v12[536862721] = 0x4000000;
  v12[536862722] = 62194;
  v12[536862722] = 0x4000000;
  v12[536862723] = 62194;
  v12[536862726] = -202116109;
  *(Vector3f *)(v10 + 48) = min(pa, pb);
  *(Vector3f *)(v10 + 80) = max(pa, pb);
  *(float *)(v10 + 52) = *(float *)(v10 + 52) - height;
  *(float *)(v10 + 84) = *(float *)(v10 + 84) + height;
  NavMesh::FindPolygonsOverlappingSegment(int,Vector3f const&,Vector3f const&,float,unsigned long long *,float *,int *,int,NavMeshTileMemoryCallback *)const::OverlapQuery::OverlapQuery(
    (NavMesh::FindPolygonsOverlappingSegment::OverlapQuery *const)(v10 + 112),
    this,
    pa,
    pb,
    height,
    polys,
    overlapMinMax,
    maxPolys);
  *(_QWORD *)(v10 + 120) = callback;
  inV = operator-((const Vector3f *)(v10 + 80), (const Vector3f *)(v10 + 48));
  ext = operator*(&inV, 0.5);
  v19 = operator+((const Vector3f *)(v10 + 80), (const Vector3f *)(v10 + 48));
  cen = operator*(&v19, 0.5);
  NavMesh::QueryPolygons(this, typeID, &cen, &ext, (NavMeshProcessCallback *)(v10 + 112));
  v13 = *(_DWORD *)(v10 + 184);
  if ( *(_BYTE *)(((unsigned __int64)polyCount >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)polyCount & 7) + 3) >= *(_BYTE *)(((unsigned __int64)polyCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(polyCount);
  }
  *polyCount = v13;
  if ( v23 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 4646: range 000000000CC45C3A-000000000CC45FCA
void __cdecl NavMesh::FindPolygonsOverlappingSegment(int,Vector3f const&,Vector3f const&,float,unsigned long long *,float *,int *,int,NavMeshTileMemoryCallback *)const::OverlapQuery::OverlapQuery(
        NavMesh::FindPolygonsOverlappingSegment::OverlapQuery *const this,
        const NavMesh *navmesh,
        const Vector3f *start,
        const Vector3f *end,
        float height,
        NavMeshPolyRef *polys,
        float *overlapMinMax,
        int maxPolys)
{
  int (**v8)(...); // rcx

  NavMeshProcessCallback::NavMeshProcessCallback(this);
  v8 = (int (**)(...))&off_1EFB0090;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshProcessCallback = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_NavMesh = navmesh;
  if ( *(char *)(((unsigned __int64)&this->m_Start >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Start.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Start.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Start, 12LL);
  }
  if ( ((unsigned __int8)start & 7) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)start + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(start, 12LL);
  }
  this->m_Start = *start;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_End.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_End.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_End, 12LL);
  }
  if ( ((unsigned __int8)end & 7) >= *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)end + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(end, 12LL);
  }
  this->m_End = *end;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Height);
  }
  this->m_Height = height;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Polys >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Polys = polys;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_OverlapMinMax >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_OverlapMinMax = overlapMinMax;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_PolyCount);
  }
  this->m_PolyCount = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MaxPolys >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_MaxPolys >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_MaxPolys);
  }
  this->m_MaxPolys = maxPolys;
};

// Line 4653: range 000000000CC45FCC-000000000CC465A7
// local variable allocation has failed, the output may be wrong!
void __cdecl NavMesh::FindPolygonsOverlappingSegment(int,Vector3f const&,Vector3f const&,float,unsigned long long *,float *,int *,int,NavMeshTileMemoryCallback *)const::OverlapQuery::ProcessPolygons(
        NavMesh::FindPolygonsOverlappingSegment::OverlapQuery *const this,
        const NavMeshTile *tile,
        const NavMeshPolyRef *polyRefs,
        const NavMeshPoly **polys,
        const int itemCount)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // xmm0_8
  Vector3f *p_m_End; // rsi
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  Vector3f *v16; // r15
  int m_PolyCount; // ecx
  char v18; // dl
  NavMeshPolyRef *m_Polys; // rcx
  char v20; // al
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // xmm0_4
  unsigned __int64 v24; // rcx
  char v25; // dl
  int i; // [rsp+30h] [rbp-160h]
  int nverts; // [rsp+34h] [rbp-15Ch]
  NavMeshPolyRef ref; // [rsp+38h] [rbp-158h]
  char v32[336]; // [rsp+40h] [rbp-150h] BYREF

  v6 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(288LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 48 4 9 tmin:4668 64 4 9 tmax:4668 80 4 11 segMin:4669 96 4 11 segMax:4669 112 12 15 localStart"
                        ":4655 144 12 13 localEnd:4656 176 72 10 verts:4662";
  *(_QWORD *)(v6 + 16) = NavMesh::FindPolygonsOverlappingSegment(int,Vector3f const&,Vector3f const&,float,unsigned long long *,float *,int *,int,NavMeshTileMemoryCallback *)const::OverlapQuery::ProcessPolygons;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = 61956;
  v8[536862723] = 0x4000000;
  v8[536862724] = 62194;
  v8[536862724] = 0x4000000;
  v8[536862725] = 62194;
  v8[536862727] = -218103808;
  v8[536862728] = -202116109;
  *(Vector3f *)((char *)&v5 - 8) = WorldToTile(tile, &this->m_Start);
  *(_QWORD *)(v6 + 112) = v9;
  *(_DWORD *)(v6 + 120) = v5.m128i_i32[0];
  p_m_End = &this->m_End;
  *(Vector3f *)((char *)&v5 - 8) = WorldToTile(tile, &this->m_End);
  v12 = v11;
  v13 = v5;
  *(_QWORD *)(v6 + 144) = v12;
  *(_DWORD *)(v6 + 152) = v5.m128i_i32[0];
  for ( i = 0; i < itemCount; ++i )
  {
    v14 = (unsigned __int64)&polyRefs[i];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(&polyRefs[i], p_m_End);
    ref = *(_QWORD *)v14;
    v15 = 5LL;
    v16 = (Vector3f *)(v6 + 176);
    while ( v15 >= 0 )
    {
      Vector3f::Vector3f(v16++);
      --v15;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMesh >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_NavMesh, p_m_End);
    p_m_End = (Vector3f *)ref;
    nverts = NavMesh::GetPolyGeometry(this->m_NavMesh, ref, (Vector3f *)(v6 + 176), 0LL, 0);
    if ( nverts )
    {
      p_m_End = (Vector3f *)(v6 + 64);
      if ( IntersectSegmentPoly2D(
             (float *)(v6 + 48),
             (float *)(v6 + 64),
             (int *)(v6 + 80),
             (int *)(v6 + 96),
             (const Vector3f *)(v6 + 112),
             (const Vector3f *)(v6 + 144),
             (const Vector3f *)(v6 + 176),
             nverts) )
      {
        *(float *)v13.m128i_i32 = clamp01<float>((const float *)(v6 + 48));
        *(_DWORD *)(v6 + 48) = _mm_cvtsi128_si32(v13);
        *(float *)v13.m128i_i32 = clamp01<float>((const float *)(v6 + 64));
        *(_DWORD *)(v6 + 64) = _mm_cvtsi128_si32(v13);
        v13 = (__m128i)*(unsigned int *)(v6 + 48);
        if ( *(float *)v13.m128i_i32 < *(float *)(v6 + 64) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->m_PolyCount);
          }
          m_PolyCount = this->m_PolyCount;
          v18 = *(_BYTE *)(((unsigned __int64)&this->m_MaxPolys >> 3) + 0x7FFF8000);
          LOBYTE(p_m_End) = v18 != 0;
          if ( v18 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v18 )
            __asan_report_load4(&this->m_MaxPolys);
          if ( m_PolyCount >= this->m_MaxPolys )
            break;
          if ( *(_BYTE *)(((unsigned __int64)&this->m_Polys >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_Polys, p_m_End);
          m_Polys = this->m_Polys;
          v20 = *(_BYTE *)(((unsigned __int64)&this->m_PolyCount >> 3) + 0x7FFF8000);
          LOBYTE(p_m_End) = v20 != 0;
          if ( v20 != 0 && v20 <= 3 )
            __asan_report_load4(&this->m_PolyCount);
          v21 = (unsigned __int64)&m_Polys[this->m_PolyCount];
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_store8();
          *(_QWORD *)v21 = ref;
          if ( *(_BYTE *)(((unsigned __int64)&this->m_OverlapMinMax >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->m_OverlapMinMax, p_m_End);
          v22 = (unsigned __int64)&this->m_OverlapMinMax[2 * this->m_PolyCount];
          v23 = *(_DWORD *)(v6 + 48);
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(this->m_OverlapMinMax) + 8 * LOBYTE(this->m_PolyCount)) & 7) + 3) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&this->m_OverlapMinMax[2 * this->m_PolyCount]);
          }
          *(_DWORD *)v22 = v23;
          v24 = (unsigned __int64)&this->m_OverlapMinMax[2 * this->m_PolyCount + 1];
          v13 = (__m128i)*(unsigned int *)(v6 + 64);
          v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
          LOBYTE(p_m_End) = v25 != 0;
          if ( v25 != 0
            && (char)(((LOBYTE(this->m_OverlapMinMax) + 4 * (2 * LOBYTE(this->m_PolyCount) + 1)) & 7) + 3) >= v25 )
          {
            __asan_report_store4(&this->m_OverlapMinMax[2 * this->m_PolyCount + 1]);
          }
          *(_DWORD *)v24 = v13.m128i_i32[0];
          ++this->m_PolyCount;
        }
      }
    }
  }
  if ( v32 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 4704: range 000000000CC46922-000000000CC46A4D
NavMeshTileRef __cdecl NavMesh::GetTileRef(
        const NavMesh *const this,
        const NavMeshTile *tile,
        const NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v4; // rax
  unsigned int it; // [rsp+24h] [rbp-Ch]
  unsigned __int64 ret; // [rsp+28h] [rbp-8h]

  if ( !tile )
    return 0LL;
  if ( callback )
  {
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, tile);
    v4 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 3);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 3, tile);
    ret = (*(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, const NavMeshTile *))v4)(callback, tile);
    if ( ret )
      return ret;
  }
  it = 678152731 * (((char *)tile - (char *)FreeList<NavMeshTile,false>::operator[](&this->m_tiles, 0)) >> 3);
  if ( *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tile->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tile->salt);
  }
  return NavMeshPolyRefHelper::EncodePolyId(tile->salt, it, 0, 0, 0);
};

// Line 4720: range 000000000CC46A4E-000000000CC46F88
const NavMeshLink *__cdecl NavMesh::GetFirstLink(
        const NavMesh *const this,
        NavMeshPolyRef ref,
        const NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char *v6; // rsi
  const NavMeshLink *result; // rax
  FreeList<NavMeshLink,false> *p_m_links; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  char v12; // dl
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(const NavMeshTileMemoryCallback *, __int64); // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  int *v19; // rcx
  unsigned int firstLink; // [rsp+2Ch] [rbp-D4h]
  const NavMeshTile *tile_0; // [rsp+30h] [rbp-D0h]
  const NavMeshLink *link; // [rsp+38h] [rbp-C8h]
  const NavMeshTile *tile; // [rsp+40h] [rbp-C0h]
  const OffMeshConnection *con; // [rsp+48h] [rbp-B8h]
  char v27[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 9 salt:4721 48 4 7 it:4721 64 4 9 type:4721 80 4 7 ip:4721 96 4 14 allocflag:4721";
  *(_QWORD *)(v3 + 16) = NavMesh::GetFirstLink;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  v6 = (char *)(v3 + 96);
  NavMeshPolyRefHelper::DecodePolyId(
    (unsigned int *)(v3 + 32),
    (unsigned int *)(v3 + 96),
    (unsigned int *)(v3 + 48),
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 80),
    ref);
  if ( *(_DWORD *)(v3 + 64) == 1 )
  {
    con = NavMesh::GetOffMeshConnection(this, ref);
    if ( con )
    {
      if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&con->firstLink);
      }
      if ( con->firstLink == -1 )
      {
        result = 0LL;
      }
      else
      {
        p_m_links = &this->m_links;
        if ( *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)con - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&con->firstLink >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&con->firstLink);
        }
        result = FreeList<NavMeshLink,false>::operator[](p_m_links, con->firstLink);
      }
    }
    else
    {
      result = 0LL;
    }
  }
  else if ( *(_DWORD *)(v3 + 96) )
  {
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, v6);
    v9 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 7);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 7, v6);
    v10 = *(unsigned int *)(v3 + 48);
    tile = (const NavMeshTile *)(*(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, __int64))v9)(
                                  callback,
                                  v10);
    if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->polyLinks, v10);
    v11 = (unsigned __int64)&tile->polyLinks[*(unsigned int *)(v3 + 80)];
    v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v12 != 0;
    if ( v12 != 0 && (char)(((LOBYTE(tile->polyLinks) + 4 * *(_DWORD *)(v3 + 80)) & 7) + 3) >= v12 )
      __asan_report_load4(&tile->polyLinks[*(unsigned int *)(v3 + 80)]);
    firstLink = *(_DWORD *)v11;
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, v10);
    v13 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 11);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 11, v10);
    result = (const NavMeshLink *)(*(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, _QWORD))v13)(
                                    callback,
                                    firstLink);
  }
  else
  {
    v14 = *(unsigned int *)(v3 + 48);
    tile_0 = FreeList<NavMeshTile,false>::operator[](&this->m_tiles, v14);
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_load8(callback, v14);
    v15 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 11);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 11, v14);
    v16 = *(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, __int64))v15;
    v17 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 21);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 21, v14);
    v18 = (*(unsigned int (__fastcall **)(const NavMeshTileMemoryCallback *, const NavMeshTile *, _QWORD))v17)(
            callback,
            tile_0,
            *(unsigned int *)(v3 + 80));
    link = (const NavMeshLink *)v16(callback, v18);
    if ( link )
    {
      result = link;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile_0->polyLinks >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile_0->polyLinks, v18);
      v19 = (int *)&tile_0->polyLinks[*(unsigned int *)(v3 + 80)];
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(tile_0->polyLinks) + 4 * *(_DWORD *)(v3 + 80)) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3)
                                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&tile_0->polyLinks[*(unsigned int *)(v3 + 80)]);
      }
      if ( *v19 == -1 )
        result = 0LL;
      else
        result = FreeList<NavMeshLink,false>::operator[](&this->m_links, *v19);
    }
  }
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
  return result;
};

// Line 4762: range 000000000CC46F8A-000000000CC476DD
int __cdecl NavMesh::GetPolyGeometry(
        const NavMesh *const this,
        NavMeshPolyRef ref,
        Vector3f *verts,
        NavMeshPolyRef *neighbours,
        int maxNeisPerEdge,
        NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  int result; // eax
  NavMeshStatus TileAndPolyByRef; // eax
  __int64 v11; // rdx
  char v12; // cl
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  char v17; // cl
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  const NavMeshPoly *v21; // rsi
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  const NavMeshLink *v24; // rsi
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  NavMeshPolyRef v29; // rcx
  int i; // [rsp+34h] [rbp-ACh]
  int i_0; // [rsp+38h] [rbp-A8h]
  int j; // [rsp+3Ch] [rbp-A4h]
  int nverts; // [rsp+40h] [rbp-A0h]
  unsigned int ip_0; // [rsp+44h] [rbp-9Ch]
  int index; // [rsp+4Ch] [rbp-94h]
  NavMeshTileMemoryQueryTileExtSample v40; // [rsp+50h] [rbp-90h] BYREF
  const NavMeshLink *link; // [rsp+58h] [rbp-88h]
  char v42[128]; // [rsp+60h] [rbp-80h] BYREF

  v6 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 9 tile:4770 64 8 9 poly:4771";
  *(_QWORD *)(v6 + 16) = NavMesh::GetPolyGeometry;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202116352;
  if ( NavMeshPolyRefHelper::DecodePolyIdType(ref) == 1 )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    TileAndPolyByRef = NavMesh::GetTileAndPolyByRef(
                         this,
                         ref,
                         (const NavMeshTile **)(v6 + 32),
                         (const NavMeshPoly **)(v6 + 64),
                         callback);
    if ( NavMeshStatusFailed(TileAndPolyByRef) )
    {
      result = 0;
    }
    else
    {
      v13 = (unsigned __int64)callback;
      NavMeshTileMemoryQueryTileExtSample::NavMeshTileMemoryQueryTileExtSample(&v40, callback, 0LL);
      NavMeshTileMemoryQueryTileExtSample::~NavMeshTileMemoryQueryTileExtSample(&v40);
      v11 = *(_QWORD *)(v6 + 64);
      v12 = *(_BYTE *)(((unsigned __int64)(v11 + 28) >> 3) + 0x7FFF8000);
      LOBYTE(v13) = v12 != 0;
      if ( v12 != 0 && ((v11 + 28) & 7) >= v12 )
        __asan_report_load1(v11 + 28);
      nverts = *(unsigned __int8 *)(v11 + 28);
      if ( verts )
      {
        for ( i = 0; i < nverts; ++i )
        {
          v14 = *(_QWORD *)(v6 + 32);
          if ( *(_BYTE *)(((unsigned __int64)(v14 + 40) >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8(v14 + 40, v13);
          v15 = *(_QWORD *)(v14 + 40);
          v16 = *(_QWORD *)(v6 + 64);
          v17 = *(_BYTE *)(((unsigned __int64)(v16 + 2LL * i) >> 3) + 0x7FFF8000);
          if ( v17 != 0 && (char)(((v16 + 2 * i) & 7) + 1) >= v17 )
            __asan_report_load2(v16 + 2LL * i);
          v18 = v15 + 12LL * *(unsigned __int16 *)(v16 + 2LL * i);
          v19 = (unsigned __int64)&verts[i];
          if ( (((unsigned __int8)verts + 12 * i) & 7) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000)
            && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)verts + 12 * i + 11) & 7) >= *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(&verts[i], 12LL);
          }
          v13 = ((char)(v18 & 7) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) && *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0) | (unsigned int)(*(_BYTE *)(((v18 + 11) >> 3) + 0x7FFF8000) != 0 && (char)((v18 + 11) & 7) >= *(_BYTE *)(((v18 + 11) >> 3) + 0x7FFF8000));
          if ( (char)(v18 & 7) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) && *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v18 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v18 + 11) & 7) >= *(_BYTE *)(((v18 + 11) >> 3) + 0x7FFF8000) )
          {
            v13 = 12LL;
            __asan_report_load_n(v18, 12LL);
          }
          *(_QWORD *)v19 = *(_QWORD *)v18;
          *(_DWORD *)(v19 + 8) = *(_DWORD *)(v18 + 8);
        }
      }
      if ( neighbours )
      {
        for ( i_0 = 0; i_0 < maxNeisPerEdge * nverts; ++i_0 )
        {
          v20 = (unsigned __int64)&neighbours[i_0];
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8();
          *(_QWORD *)v20 = 0LL;
        }
        v21 = *(const NavMeshPoly **)(v6 + 64);
        ip_0 = GetPolyIndex(*(const NavMeshTile **)(v6 + 32), v21);
        if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
          __asan_report_load8(callback, v21);
        v22 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 21);
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 21, v21);
        v23 = (*(__int64 (__fastcall **)(NavMeshTileMemoryCallback *, _QWORD, _QWORD))v22)(
                callback,
                *(_QWORD *)(v6 + 32),
                ip_0);
        v24 = (const NavMeshLink *)v23;
        for ( link = NavMesh::GetLink(this, v23, callback); link; link = NavMesh::GetNextLink(this, link, callback) )
        {
          if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
            __asan_report_load8(link, v24);
          if ( NavMeshPolyRefHelper::DecodePolyIdType(link->ref) != 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
              __asan_report_load8(callback, v24);
            v25 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 4);
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
              v25 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 4, v24);
            if ( !(*(unsigned __int8 (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshLink *))v25)(
                    callback,
                    link) )
            {
              v26 = ((_BYTE)link + 12) & 7;
              if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
                && (char)v26 >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(&link->edge);
              }
              index = link->edge;
              if ( index < nverts )
              {
                for ( j = 0; j < maxNeisPerEdge; ++j )
                {
                  v27 = (unsigned __int64)&neighbours[maxNeisPerEdge * index + j];
                  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                    v27 = __asan_report_load8(&neighbours[maxNeisPerEdge * index + j], v26);
                  if ( !*(_QWORD *)v27 )
                  {
                    v28 = (unsigned __int64)&neighbours[maxNeisPerEdge * index + j];
                    if ( *(_BYTE *)(((unsigned __int64)link >> 3) + 0x7FFF8000) )
                      v28 = __asan_report_load8(link, v26);
                    v29 = link->ref;
                    if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
                      v28 = __asan_report_store8();
                    *(_QWORD *)v28 = v29;
                    break;
                  }
                }
              }
            }
          }
          v24 = link;
        }
      }
      result = nverts;
    }
  }
  if ( v42 == (char *)v6 )
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
  return result;
};

// Line 4820: range 000000000CC476DE-000000000CC47771
// local variable allocation has failed, the output may be wrong!
const NavMeshLink *__cdecl NavMesh::GetLink(
        const NavMesh *const this,
        unsigned int ref,
        const NavMeshTileMemoryCallback *callback)
{
  unsigned __int64 v3; // rax
  const NavMeshLink *ret; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
    __asan_report_load8(callback, *(_QWORD *)&ref);
  v3 = (unsigned __int64)(callback->_vptr_NavMeshTileMemoryCallback + 11);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(callback->_vptr_NavMeshTileMemoryCallback + 11, *(_QWORD *)&ref);
  ret = (const NavMeshLink *)(*(__int64 (__fastcall **)(const NavMeshTileMemoryCallback *, _QWORD))v3)(callback, ref);
  if ( ret )
    return ret;
  else
    return NavMesh::GetLink(this, ref);
};

// Line 4826: range 000000000CD73B56-000000000CD73C04
const NavMeshLink *__cdecl NavMesh::GetNextLink(
        const NavMesh *const this,
        const NavMeshLink *link,
        const NavMeshTileMemoryCallback *callback)
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
  return NavMesh::GetLink(this, link->next, callback);
};

// Line 4839: range 000000000CC47772-000000000CC47B03
__int64 __fastcall NavMesh::FindGlobalConnectRegionRoot(NavMesh *const this, uint32_t id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::_List_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  int v10; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  unsigned int v13; // r14d
  __int64 result; // rax
  std::list<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::list<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::list<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  char v18[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 9 root:4842 64 4 9 path:4850 80 4 7 id:4838 96 8 7 it:4840 128 24 10 paths:4841";
  *(_QWORD *)(v2 + 16) = NavMesh::FindGlobalConnectRegionRoot;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 80) = id;
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->m_globalSurfaceRegionIds,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 80));
  std::list<unsigned int>::list((std::list<unsigned int> *const)(v2 + 128));
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v2 + 80);
  while ( 1 )
  {
    __for_end._M_node = (std::__detail::_List_node_base *)std::unordered_map<unsigned int,unsigned int>::end(&this->m_globalSurfaceRegionIds)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
      break;
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 96));
    std::list<unsigned int>::emplace_back<unsigned int const&>(
      (std::list<unsigned int> *const)(v2 + 128),
      (const unsigned int *)v5,
      (const unsigned int *)v5);
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 96));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v2 + 48) = v6->second;
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->m_globalSurfaceRegionIds,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  }
  __for_range = (std::list<unsigned int> *)(v2 + 128);
  __for_begin._M_node = std::list<unsigned int>::begin((std::list<unsigned int> *const)(v2 + 128))._M_node;
  __for_end._M_node = std::list<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_List_iterator<unsigned int>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v2 + 64) = *v9;
    v10 = *(_DWORD *)(v2 + 48);
    v11 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &this->m_globalSurfaceRegionIds,
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v11);
    }
    *v12 = v10;
    std::_List_iterator<unsigned int>::operator++(&__for_begin);
  }
  v13 = *(_DWORD *)(v2 + 48);
  std::list<unsigned int>::~list((std::list<unsigned int> *const)(v2 + 128));
  result = v13;
  if ( v18 == (char *)v2 )
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

// Line 4857: range 000000000CC47B04-000000000CC47D5C
void __cdecl NavMesh::MergeSurfacesConnectRegion(
        NavMesh *const this,
        SurfaceIDType surfaceIdA,
        uint32_t regionIdA,
        SurfaceIDType surfaceIdB,
        uint32_t regionIdB)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  uint32_t globalRegionIdB; // [rsp+28h] [rbp-98h]
  unsigned int rootB; // [rsp+2Ch] [rbp-94h]
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 20 globalRegionIdA:4860 64 4 10 rootA:4862";
  *(_QWORD *)(v5 + 16) = NavMesh::MergeSurfacesConnectRegion;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  if ( surfaceIdA != surfaceIdB )
  {
    *(_DWORD *)(v5 + 48) = NavMeshPolyRefHelper::EncodeGlobalRegionId(surfaceIdA, regionIdA);
    globalRegionIdB = NavMeshPolyRefHelper::EncodeGlobalRegionId(surfaceIdB, regionIdB);
    *(_DWORD *)(v5 + 64) = NavMesh::FindGlobalConnectRegionRoot(this, *(_DWORD *)(v5 + 48));
    rootB = NavMesh::FindGlobalConnectRegionRoot(this, globalRegionIdB);
    if ( rootB != *(_DWORD *)(v5 + 64) )
    {
      v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->m_globalSurfaceRegionIds,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 48));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v8);
      }
      *v9 = rootB;
      v10 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->m_globalSurfaceRegionIds,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 64));
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v10);
      }
      *v11 = rootB;
    }
  }
  if ( v17 == (char *)v5 )
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
};

// Line 4871: range 000000000CC47D5E-000000000CC47F09
void __cdecl NavMesh::PostProcessorGlobalConnectRegion(NavMesh *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v4; // rax
  _QWORD *v5; // rdx
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 it:4872";
  *(_QWORD *)(v1 + 16) = NavMesh::PostProcessorGlobalConnectRegion;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  __for_range = &this->m_globalSurfaceRegionIds;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->m_globalSurfaceRegionIds)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->m_globalSurfaceRegionIds)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v5 = v4;
    if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4, 8LL);
    }
    *(_QWORD *)(v1 + 32) = *v5;
    NavMesh::FindGlobalConnectRegionRoot(this, *(_DWORD *)(v1 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 4879: range 000000000CC47F0A-000000000CC4817E
uint32_t __cdecl NavMesh::FindConnectRegionId(
        const NavMesh *const this,
        const NavMeshTile *tile,
        NavMeshPolyRef polyRef)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *polyRegions; // r14
  unsigned int *v7; // rcx
  uint32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  unsigned int polyRegion; // [rsp+24h] [rbp-9Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+28h] [rbp-98h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 globalRegion:4881 64 8 7 it:4882";
  *(_QWORD *)(v3 + 16) = NavMesh::FindConnectRegionId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&tile->polyRegions >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->polyRegions, tile);
  polyRegions = tile->polyRegions;
  v7 = &polyRegions[NavMeshPolyRefHelper::DecodePolyIdPoly(polyRef)];
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  polyRegion = *v7;
  if ( *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)tile >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(tile);
  }
  *(_DWORD *)(v3 + 48) = NavMeshPolyRefHelper::EncodeGlobalRegionId(tile->surfaceID, polyRegion);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  &this->m_globalSurfaceRegionIds,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->m_globalSurfaceRegionIds)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         &__y) )
  {
    result = *(_DWORD *)(v3 + 48);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
  }
  if ( v14 == (char *)v3 )
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
