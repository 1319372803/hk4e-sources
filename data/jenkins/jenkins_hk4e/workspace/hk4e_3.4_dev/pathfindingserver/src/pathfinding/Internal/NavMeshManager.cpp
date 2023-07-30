// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMeshManager.cpp

// Line 12: range 000000000CB75FA3-000000000CB76038
void __cdecl deleteObject(DynamicNavMesh *data)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/pathfinding/Internal/NavMeshManager.cpp",
    "deleteObject",
    13);
  common::milog::MiLogStream::operator()(&v1, "delete a dynamic nav mesh data");
  common::milog::MiLogStream::~MiLogStream(&v1);
  delete_internal<DynamicNavMesh>(data);
};

// Line 17: range 000000000CB7603A-000000000CB761C4
void __cdecl NavMeshManager::NavMeshManager(NavMeshManager *const this)
{
  std::less<unsigned int> comp; // [rsp+1Eh] [rbp-12h] BYREF
  stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> a; // [rsp+1Fh] [rbp-11h] BYREF

  stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>::stl_allocator(&a);
  vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::vector_map(
    &this->m_dynamicNavMeshs,
    &comp,
    &a);
  stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>::~stl_allocator(&a);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_KeepAliveMs >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_KeepAliveMs = 60000LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ObstacleTimeLimit >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ObstacleTimeLimit = 60000LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Version);
  }
  this->m_Version = 0;
  std::set<unsigned int>::set(&this->m_TestPlayerUids);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_TestPlayerCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_TestPlayerCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_TestPlayerCount);
  }
  this->m_TestPlayerCount = 0;
  CPUProfilingMgr::CPUProfilingMgr(&this->m_cpuProfilingMgr);
};

// Line 22: range 000000000CB761C6-000000000CB761F0
void __cdecl NavMeshManager::~NavMeshManager(NavMeshManager *const this)
{
  std::set<unsigned int>::~set(&this->m_TestPlayerUids);
  vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::~vector_map(&this->m_dynamicNavMeshs);
};

// Line 28: range 000000000CB761F2-000000000CB761FC
void __cdecl NavMeshManager::Init(NavMeshManager *const this)
{
  ;
};

// Line 32: range 000000000CB761FE-000000000CB76218
void __cdecl NavMeshManager::Uninit(NavMeshManager *const this)
{
  vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::clear(&this->m_dynamicNavMeshs);
};

// Line 37: range 000000000CB7621A-000000000CB765D6
DynamicNavMesh *__fastcall NavMeshManager::AddDynamicNavMesh(
        NavMeshManager *const this,
        const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *staticNavMesh,
        DynamicUniqueTokenType token,
        bool useHavokCut)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > >::pointer v7; // rax
  std::__shared_ptr<DynamicNavMesh,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // r14
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t ID; // eax
  DynamicNavMesh *v11; // r14
  std::shared_ptr<DynamicNavMesh> *v12; // rax
  PathfindingService *v13; // r14
  uint32_t v14; // eax
  std::set<unsigned int>::size_type v15; // rcx
  DynamicNavMesh *result; // rax
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __rhs; // [rsp+20h] [rbp-E0h] BYREF
  DynamicNavMesh *dynamicNavMesh; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 8 token:36 64 8 5 it:38 96 16 23 dynamic_nav_mesh_ptr:48";
  *(_QWORD *)(v4 + 16) = NavMeshManager::AddDynamicNavMesh;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = token;
  *(vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v4 + 64) = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find(&this->m_dynamicNavMeshs, (const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *)(v4 + 48));
  __rhs._M_current = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->m_dynamicNavMeshs)._M_current;
  if ( __gnu_cxx::operator!=<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v4 + 64),
         &__rhs) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *const)(v4 + 64));
    v8 = std::__shared_ptr<DynamicNavMesh,(__gnu_cxx::_Lock_policy)2>::get(&v7->second);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/pathfinding/Internal/NavMeshManager.cpp",
      "AddDynamicNavMesh",
      44);
    v9 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(staticNavMesh);
    ID = StaticNavMesh::GetID(v9);
    common::milog::MiLogStream::operator()(&v21, "add a dynamic nav mesh data (%u,%d)", *(unsigned int *)(v4 + 48), ID);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v11 = (DynamicNavMesh *)operator new(0x170uLL, 0x10uLL, "./src/pathfinding/Internal/NavMeshManager.cpp", 45);
    DynamicNavMesh::DynamicNavMesh(v11, *(_DWORD *)(v4 + 48), useHavokCut, this);
    dynamicNavMesh = v11;
    DynamicNavMesh::InitMeshData(v11, (const std::shared_ptr<StaticNavMesh> *)staticNavMesh, useHavokCut);
    std::shared_ptr<DynamicNavMesh>::shared_ptr<DynamicNavMesh,void (*)(DynamicNavMesh*),void>(
      (std::shared_ptr<DynamicNavMesh> *const)(v4 + 96),
      dynamicNavMesh,
      (void (*)(DynamicNavMesh *))deleteObject);
    v12 = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::operator[](
            &this->m_dynamicNavMeshs,
            (const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *)(v4 + 48));
    std::shared_ptr<DynamicNavMesh>::operator=(v12, (const std::shared_ptr<DynamicNavMesh> *)(v4 + 96));
    v13 = ServiceBox::findService<PathfindingService>();
    v14 = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::size(&this->m_dynamicNavMeshs);
    PathfindingService::updateOnlinePlayerNum(v13, v14);
    v15 = std::set<unsigned int>::size(&this->m_TestPlayerUids);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_TestPlayerCount >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_TestPlayerCount >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_TestPlayerCount);
    }
    if ( v15 < this->m_TestPlayerCount )
      std::set<unsigned int>::emplace<unsigned int &>(
        &this->m_TestPlayerUids,
        (unsigned int *)(v4 + 48),
        (unsigned int *)&this->m_TestPlayerUids);
    v8 = dynamicNavMesh;
    std::shared_ptr<DynamicNavMesh>::~shared_ptr((std::shared_ptr<DynamicNavMesh> *const)(v4 + 96));
  }
  result = v8;
  if ( v22 == (char *)v4 )
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
  return result;
};

// Line 61: range 000000000CB765D8-000000000CB76881
void __fastcall NavMeshManager::RemoveDynamicNavMesh(NavMeshManager *const this, DynamicUniqueTokenType token)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  PathfindingService *v5; // rax
  PathfindingService *v6; // r14
  uint32_t v7; // eax
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __rhs; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 token:60 64 8 5 it:62";
  *(_QWORD *)(v2 + 16) = NavMeshManager::RemoveDynamicNavMesh;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = token;
  *(vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v2 + 64) = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find(&this->m_dynamicNavMeshs, (const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *)(v2 + 48));
  __rhs._M_current = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->m_dynamicNavMeshs)._M_current;
  if ( __gnu_cxx::operator==<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v2 + 64),
         &__rhs) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/pathfinding/Internal/NavMeshManager.cpp",
      "RemoveDynamicNavMesh",
      65);
    common::milog::MiLogStream::operator()(
      &v9,
      "try to delete DynamicNavMesh (%u) but failed",
      *(unsigned int *)(v2 + 48));
  }
  else
  {
    vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::erase(
      &this->m_dynamicNavMeshs,
      *(vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v2 + 64));
    std::set<unsigned int>::erase(&this->m_TestPlayerUids, (const std::set<unsigned int>::key_type *)(v2 + 48));
    v5 = ServiceBox::findService<PathfindingService>();
    PathfindingService::deletePlayer(v5, *(_DWORD *)(v2 + 48));
    v6 = ServiceBox::findService<PathfindingService>();
    v7 = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::size(&this->m_dynamicNavMeshs);
    PathfindingService::updateOnlinePlayerNum(v6, v7);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/pathfinding/Internal/NavMeshManager.cpp",
      "RemoveDynamicNavMesh",
      75);
    common::milog::MiLogStream::operator()(&v9, "delete a dynamic nav mesh data (%u)", *(unsigned int *)(v2 + 48));
  }
  common::milog::MiLogStream::~MiLogStream(&v9);
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

// Line 82: range 000000000CB76882-000000000CB76A7A
void __fastcall NavMeshManager::UpdateUniqueTokenTime(
        NavMeshManager *const this,
        DynamicUniqueTokenType token,
        uint64_t rtt_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > >::pointer v6; // rax
  DynamicNavMesh *v7; // rcx
  uint64_t m_KeepAliveMs; // rsi
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > >::pointer v9; // rax
  DynamicNavMesh *v10; // rcx
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __rhs; // [rsp+28h] [rbp-88h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 token:81 64 8 5 it:83";
  *(_QWORD *)(v3 + 16) = NavMeshManager::UpdateUniqueTokenTime;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = token;
  *(vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::iterator *)(v3 + 64) = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find(&this->m_dynamicNavMeshs, (const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *)(v3 + 48));
  __rhs._M_current = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->m_dynamicNavMeshs)._M_current;
  if ( __gnu_cxx::operator!=<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>(
         (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v3 + 64),
         &__rhs) )
  {
    v6 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *const)(v3 + 64));
    v7 = std::__shared_ptr_access<DynamicNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_KeepAliveMs >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_KeepAliveMs, &__rhs);
    m_KeepAliveMs = this->m_KeepAliveMs;
    DynamicNavMesh::RefreshAliveTimer(v7, m_KeepAliveMs);
    v9 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> *,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *const)(v3 + 64));
    v10 = std::__shared_ptr_access<DynamicNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9->second);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ObstacleTimeLimit >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_ObstacleTimeLimit, m_KeepAliveMs);
    DynamicNavMesh::SetObstacleTimeLimit(v10, this->m_ObstacleTimeLimit);
  }
  if ( v12 == (char *)v3 )
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

// Line 93: range 000000000CB76A7C-000000000CB76B4F
void __cdecl NavMeshManager::UpdateTestPlayerCount(NavMeshManager *const this, uint32_t value)
{
  std::set<unsigned int>::size_type v2; // rcx
  std::set<unsigned int>::iterator v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->m_TestPlayerCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_TestPlayerCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_TestPlayerCount);
  }
  this->m_TestPlayerCount = value;
  while ( 1 )
  {
    v2 = std::set<unsigned int>::size(&this->m_TestPlayerUids);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_TestPlayerCount >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_TestPlayerCount >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_TestPlayerCount);
    }
    if ( v2 <= this->m_TestPlayerCount )
      break;
    v3._M_node = std::set<unsigned int>::begin(&this->m_TestPlayerUids)._M_node;
    std::set<unsigned int>::erase[abi:cxx11](&this->m_TestPlayerUids, v3);
  }
};
