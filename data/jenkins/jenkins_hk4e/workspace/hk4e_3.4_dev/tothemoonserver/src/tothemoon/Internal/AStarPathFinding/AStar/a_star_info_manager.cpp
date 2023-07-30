// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/AStar/a_star_info_manager.cpp

// Line 6: range 000000000CBC0BF0-000000000CBC0C3A
void __cdecl AStarManager::~AStarManager(AStarManager *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pathFinder = 0LL;
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::~priority_queue(&this->_openList);
};

// Line 12: range 000000000CBC0C3C-000000000CBC0C79
void __cdecl AStarManager::InitSearchInfo(AStarManager *const this)
{
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp> v1; // [rsp+10h] [rbp-20h] BYREF

  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::priority_queue<std::vector<std::shared_ptr<AStarInfo>>,void>(&v1);
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::operator=(
    &this->_openList,
    &v1);
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::~priority_queue(&v1);
};

// Line 17: range 000000000CBC0C7A-000000000CBC0CB7
void __cdecl AStarManager::Clear(AStarManager *const this)
{
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp> v1; // [rsp+10h] [rbp-20h] BYREF

  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::priority_queue<std::vector<std::shared_ptr<AStarInfo>>,void>(&v1);
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::operator=(
    &this->_openList,
    &v1);
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::~priority_queue(&v1);
};

// Line 22: range 000000000CBC0CB8-000000000CBC0ECF
void __cdecl AStarManager::SetClosed(AStarManager *const this, SVONode *node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<AStarInfo> p_astar; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-80h] BYREF
  char v7[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 astar:28";
  *(_QWORD *)(v2 + 16) = AStarManager::SetClosed;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, node);
  if ( this->pathFinder )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, node);
    AStarPathFinder::AdaptiveGetAStarInfo((AStarPathFinder *const)(v2 + 32), (SVONode *)this->pathFinder);
    std::shared_ptr<AStarInfo>::shared_ptr(&p_astar, (const std::shared_ptr<AStarInfo> *)(v2 + 32));
    AStarManager::SetClosed(this, &p_astar);
    std::shared_ptr<AStarInfo>::~shared_ptr(&p_astar);
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star_info_manager.cpp",
      "SetClosed",
      25);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v6, (const char (*)[21])"should never be here");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 33: range 000000000CBC0ED0-000000000CBC0FAC
void __cdecl AStarManager::SetClosed(AStarManager *const this, std::shared_ptr<AStarInfo> *p_astar)
{
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<AStarInfo>(p_astar, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star_info_manager.cpp",
      "SetClosed",
      36);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v3, (const char (*)[21])"should never be here");
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
  else
  {
    v2 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
    if ( *(_BYTE *)(((unsigned __int64)&v2->status >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v2->status >> 3) + 0x7FFF8000) <= 3 )
    {
      v2 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v2->status);
    }
    v2->status = Closed;
  }
};

// Line 43: range 000000000CBC0FAE-000000000CBC11C5
void __cdecl AStarManager::SetOpen(AStarManager *const this, SVONode *node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<AStarInfo> p_astar; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-80h] BYREF
  char v7[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 astar:49";
  *(_QWORD *)(v2 + 16) = AStarManager::SetOpen;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, node);
  if ( this->pathFinder )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, node);
    AStarPathFinder::AdaptiveGetAStarInfo((AStarPathFinder *const)(v2 + 32), (SVONode *)this->pathFinder);
    std::shared_ptr<AStarInfo>::shared_ptr(&p_astar, (const std::shared_ptr<AStarInfo> *)(v2 + 32));
    AStarManager::SetOpen(this, &p_astar);
    std::shared_ptr<AStarInfo>::~shared_ptr(&p_astar);
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star_info_manager.cpp",
      "SetOpen",
      46);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v6, (const char (*)[21])"should never be here");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 54: range 000000000CBC11C6-000000000CBC12F6
void __cdecl AStarManager::SetOpen(AStarManager *const this, std::shared_ptr<AStarInfo> *p_astar)
{
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, p_astar);
  if ( !this->pathFinder || std::operator==<AStarInfo>(p_astar, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star_info_manager.cpp",
      "SetOpen",
      57);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v4, (const char (*)[21])"should never be here");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::push(
      &this->_openList,
      p_astar);
    v3 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
    if ( *(_BYTE *)(((unsigned __int64)&v3->status >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v3->status >> 3) + 0x7FFF8000) <= 3 )
    {
      v3 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v3->status);
    }
    v3->status = Open;
  }
};

// Line 65: range 000000000CBC12F8-000000000CBC13A6
std::shared_ptr<AStarInfo> __cdecl AStarManager::PopOpenListHead(AStarManager *const this)
{
  AStarManager *v1; // rsi
  const std::shared_ptr<AStarInfo> *v2; // rdx
  std::shared_ptr<AStarInfo> result; // rax
  std::shared_ptr<AStarInfo> p_astar; // [rsp+10h] [rbp-20h] BYREF

  v2 = std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::top(&v1->_openList);
  std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, v2);
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::pop(&v1->_openList);
  std::shared_ptr<AStarInfo>::shared_ptr(&p_astar, (const std::shared_ptr<AStarInfo> *)this);
  AStarManager::SetClosed(v1, &p_astar);
  std::shared_ptr<AStarInfo>::~shared_ptr(&p_astar);
  result._M_ptr = (std::__shared_ptr<AStarInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 73: range 000000000CBC13A8-000000000CBC13CB
bool __cdecl AStarManager::HasNodeToExplore(const AStarManager *const this)
{
  return std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::size(&this->_openList) != 0;
};
