// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Allocator/MemoryMacros.h

// Line 71: range 000000000CDC6E95-000000000CDC6EC2
void __cdecl delete_internal<ClippedDetailMesh>(ClippedDetailMesh *ptr)
{
  if ( ptr )
    ClippedDetailMesh::~ClippedDetailMesh(ptr);
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDB6228-000000000CDB6255
void __cdecl delete_internal<DynamicNavMesh>(DynamicNavMesh *ptr)
{
  if ( ptr )
    DynamicNavMesh::~DynamicNavMesh(ptr);
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDC9F9D-000000000CDC9FBC
void __cdecl delete_internal<DynamicOffMeshConnection>(DynamicOffMeshConnection *ptr)
{
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDCBC7B-000000000CDCBCA8
void __cdecl delete_internal<DynamicSurfaceInfo>(DynamicSurfaceInfo *ptr)
{
  if ( ptr )
    DynamicSurfaceInfo::~DynamicSurfaceInfo(ptr);
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDCB0B2-000000000CDCB127
void __cdecl delete_internal<DynamicTileCallback>(DynamicTileCallback *ptr)
{
  __int64 v1; // rsi
  void (__fastcall **vptr_NavMeshTileMemoryCallback)(DynamicTileCallback *); // rax

  if ( ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(ptr, v1);
    vptr_NavMeshTileMemoryCallback = (void (__fastcall **)(DynamicTileCallback *))ptr->_vptr_NavMeshTileMemoryCallback;
    if ( *(_BYTE *)(((unsigned __int64)ptr->_vptr_NavMeshTileMemoryCallback >> 3) + 0x7FFF8000) )
      vptr_NavMeshTileMemoryCallback = (void (__fastcall **)(DynamicTileCallback *))__asan_report_load8(
                                                                                      ptr->_vptr_NavMeshTileMemoryCallback,
                                                                                      v1);
    (*vptr_NavMeshTileMemoryCallback)(ptr);
  }
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDCB03C-000000000CDCB0B1
void __cdecl delete_internal<ICarving>(ICarving *ptr)
{
  __int64 v1; // rsi
  void (__fastcall **vptr_ICarving)(ICarving *); // rax

  if ( ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(ptr, v1);
    vptr_ICarving = (void (__fastcall **)(ICarving *))ptr->_vptr_ICarving;
    if ( *(_BYTE *)(((unsigned __int64)ptr->_vptr_ICarving >> 3) + 0x7FFF8000) )
      vptr_ICarving = (void (__fastcall **)(ICarving *))__asan_report_load8(ptr->_vptr_ICarving, v1);
    (*vptr_ICarving)(ptr);
  }
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDBA4D9-000000000CDBA54E
void __cdecl delete_internal<NaMeshDefaultMemoryCallback>(NaMeshDefaultMemoryCallback *ptr)
{
  __int64 v1; // rsi
  void (__fastcall **vptr_NavMeshTileMemoryCallback)(NaMeshDefaultMemoryCallback *); // rax

  if ( ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(ptr, v1);
    vptr_NavMeshTileMemoryCallback = (void (__fastcall **)(NaMeshDefaultMemoryCallback *))ptr->_vptr_NavMeshTileMemoryCallback;
    if ( *(_BYTE *)(((unsigned __int64)ptr->_vptr_NavMeshTileMemoryCallback >> 3) + 0x7FFF8000) )
      vptr_NavMeshTileMemoryCallback = (void (__fastcall **)(NaMeshDefaultMemoryCallback *))__asan_report_load8(
                                                                                              ptr->_vptr_NavMeshTileMemoryCallback,
                                                                                              v1);
    (*vptr_NavMeshTileMemoryCallback)(ptr);
  }
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDCCF03-000000000CDCCF30
void __cdecl delete_internal<NavMesh>(NavMesh *ptr)
{
  if ( ptr )
    NavMesh::~NavMesh(ptr);
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDBD324-000000000CDBD351
void __cdecl delete_internal<NavMeshNodePool>(NavMeshNodePool *ptr)
{
  if ( ptr )
    NavMeshNodePool::~NavMeshNodePool(ptr);
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDBD352-000000000CDBD37F
void __cdecl delete_internal<NavMeshNodeQueue>(NavMeshNodeQueue *ptr)
{
  if ( ptr )
    NavMeshNodeQueue::~NavMeshNodeQueue(ptr);
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDCB28E-000000000CDCB2BB
void __cdecl delete_internal<NavMeshObstacle>(NavMeshObstacle *ptr)
{
  if ( ptr )
    NavMeshObstacle::~NavMeshObstacle(ptr);
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDCB00E-000000000CDCB03B
void __cdecl delete_internal<NavMeshQuery>(NavMeshQuery *ptr)
{
  if ( ptr )
    NavMeshQuery::~NavMeshQuery(ptr);
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDB8847-000000000CDB8866
void __cdecl delete_internal<RTTI>(RTTI *ptr)
{
  free_alloc_internal(ptr);
};

// Line 71: range 000000000CDB7AB1-000000000CDB7ADE
void __cdecl delete_internal<TypeManager>(TypeManager *ptr)
{
  if ( ptr )
    TypeManager::~TypeManager(ptr);
  free_alloc_internal(ptr);
};

// Line 93: range 000000000CCB7E24-000000000CCB7E52
void *__cdecl AlignPtr(void *p, size_t alignment)
{
  return (void *)(((unsigned __int64)p + alignment - 1) & ~(alignment - 1));
};

// Line 99: range 000000000CDCC4B8-000000000CDCC4C6
size_t __cdecl GetTypeAlignmentFromPointer<unsigned char>(unsigned __int8 *const *a1)
{
  return 1LL;
};

// Line 99: range 000000000CDCC4A9-000000000CDCC4B7
size_t __cdecl GetTypeAlignmentFromPointer<unsigned long long>(unsigned __int64 *const *a1)
{
  return 8LL;
};

// Line 110: range 000000000CCB7E54-000000000CCB7E8E
void __cdecl AutoFree::AutoFree(AutoFree *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_mem = 0LL;
};

// Line 111: range 000000000CCB7E90-000000000CCB7ECE
void __cdecl AutoFree::~AutoFree(AutoFree *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  free_alloc_internal(this->m_mem);
};

// Line 113: range 000000000CCB7ED0-000000000CCB7F0E
void __cdecl AutoFree::Init(AutoFree *const this, void *takeMem)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_mem = takeMem;
};
