// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMeshManager.h

// Line 35: range 000000000CD58846-000000000CD58889
void __cdecl NavMeshManager::SetKeepAliveMS(NavMeshManager *const this, uint64_t value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_KeepAliveMs >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_KeepAliveMs = value;
};

// Line 37: range 000000000CD5888A-000000000CD588CD
void __cdecl NavMeshManager::SetObstacleTimeLimit(NavMeshManager *const this, uint64_t value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ObstacleTimeLimit >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ObstacleTimeLimit = value;
};

// Line 38: range 000000000CD588CE-000000000CD58915
int32_t __cdecl NavMeshManager::GetVersion(const NavMeshManager *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_Version);
  }
  return this->m_Version;
};

// Line 39: range 000000000CD58916-000000000CD58964
void __cdecl NavMeshManager::SetVersion(NavMeshManager *const this, int32_t value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Version);
  }
  this->m_Version = value;
};

// Line 40: range 000000000CD58966-000000000CD5897F
uint32_t __cdecl NavMeshManager::GetDynamicNavMeshCount(const NavMeshManager *const this)
{
  return vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::size(&this->m_dynamicNavMeshs);
};

// Line 41: range 000000000CD58980-000000000CD58A7F
bool __fastcall NavMeshManager::IsTestPlayer(const NavMeshManager *const this, DynamicUniqueTokenType uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:41";
  *(_QWORD *)(v2 + 16) = NavMeshManager::IsTestPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  __y._M_node = std::set<unsigned int>::end(&this->m_TestPlayerUids)._M_node;
  __x._M_node = std::set<unsigned int>::find(
                  &this->m_TestPlayerUids,
                  (const std::set<unsigned int>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v8 == (char *)v2 )
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

// Line 43: range 000000000CD58A80-000000000CD58A91
CPUProfilingMgr *__cdecl NavMeshManager::GetCPUProfilingMgr(NavMeshManager *const this)
{
  return &this->m_cpuProfilingMgr;
};

// Line 62: range 000000000CD58A92-000000000CD58A9E
NavMeshManager *__cdecl NavMeshManager::GetInstance()
{
  return &NavMeshManager::instance;
};

// Line 66: range 000000000CD58AA0-000000000CD58BF3
DynamicNavMesh *__fastcall NavMeshManager::GetDynamicNavMesh(
        const NavMeshManager *const this,
        DynamicUniqueTokenType token)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > >::pointer v5; // rax
  DynamicNavMesh *result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > __rhs; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 token:66 64 8 10 tokenIt:68";
  *(_QWORD *)(v2 + 16) = NavMeshManager::GetDynamicNavMesh;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = token;
  *(vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::const_iterator *)(v2 + 64) = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::find(&this->m_dynamicNavMeshs, (const vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> >::key_type *)(v2 + 48));
  __rhs._M_current = vector_map<unsigned int,std::shared_ptr<DynamicNavMesh>,std::less<unsigned int>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>::end(&this->m_dynamicNavMeshs)._M_current;
  if ( __gnu_cxx::operator!=<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> const*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>(
         (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *)(v2 + 64),
         &__rhs) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>> const*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh>>,16>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >*,std::vector<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,stl_allocator<std::pair<unsigned int,std::shared_ptr<DynamicNavMesh> >,16> > > *const)(v2 + 64));
    result = std::__shared_ptr<DynamicNavMesh,(__gnu_cxx::_Lock_policy)2>::get(&v5->second);
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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
