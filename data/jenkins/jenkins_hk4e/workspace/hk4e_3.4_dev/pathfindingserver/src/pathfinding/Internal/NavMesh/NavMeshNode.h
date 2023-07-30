// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/NavMeshNode.h

// Line 58: range 000000000CD72344-000000000CD723F0
unsigned int __cdecl NavMeshNodePool::GetNodeIdx(const NavMeshNodePool *const this, const NavMeshNode *node)
{
  void *p_m_NavMeshNodes; // rdi
  unsigned int idx; // [rsp+1Ch] [rbp-4h]

  if ( !node )
    return 0;
  p_m_NavMeshNodes = &this->m_NavMeshNodes;
  idx = node - dynamic_array<NavMeshNode,true,8ul>::operator[](&this->m_NavMeshNodes, 0LL) + 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    p_m_NavMeshNodes = (void *)this;
    __asan_report_load4(this);
  }
  if ( idx > this->m_MaxNavMeshNodes )
  {
    __asan_handle_no_return(p_m_NavMeshNodes);
    __assert_fail(
      "idx <= m_MaxNavMeshNodes",
      "./src/pathfinding/Internal/NavMesh/NavMeshNode.h",
      0x3Eu,
      "unsigned int NavMeshNodePool::GetNodeIdx(const NavMeshNode*) const");
  }
  return idx;
};

// Line 66: range 000000000CD723F2-000000000CD72488
NavMeshNode *__cdecl NavMeshNodePool::GetNodeAtIdx(NavMeshNodePool *const this, unsigned int idx)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( idx > this->m_MaxNavMeshNodes )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "idx <= m_MaxNavMeshNodes",
      "./src/pathfinding/Internal/NavMesh/NavMeshNode.h",
      0x44u,
      "NavMeshNode* NavMeshNodePool::GetNodeAtIdx(unsigned int)");
  }
  if ( idx )
    return dynamic_array<NavMeshNode,true,8ul>::operator[](&this->m_NavMeshNodes, idx - 1);
  else
    return 0LL;
};

// Line 100: range 000000000CD7248A-000000000CD724D6
void __cdecl NavMeshNodeQueue::Clear(NavMeshNodeQueue *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Size);
  }
  this->m_Size = 0;
};

// Line 105: range 000000000CD724D8-000000000CD725B2
NavMeshNode *__cdecl NavMeshNodeQueue::Pop(NavMeshNodeQueue *const this)
{
  unsigned __int64 v1; // rax
  size_t v2; // rsi
  unsigned __int64 v3; // rax
  NavMeshNode *result; // [rsp+18h] [rbp-8h]

  v1 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, 0LL);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1, 0LL);
  result = *(NavMeshNode **)v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_Size);
  }
  v2 = --this->m_Size;
  v3 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, v2);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v3, v2);
  NavMeshNodeQueue::TrickleDown(this, 0, *(NavMeshNode **)v3);
  return result;
};

// Line 113: range 000000000CD725B4-000000000CD72626
void __cdecl NavMeshNodeQueue::Push(NavMeshNodeQueue *const this, NavMeshNode *node)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_Size);
  }
  NavMeshNodeQueue::BubbleUp(this, this->m_Size++, node);
};

// Line 119: range 000000000CD72628-000000000CD726E2
void __cdecl NavMeshNodeQueue::Modify(NavMeshNodeQueue *const this, NavMeshNode *node)
{
  unsigned __int64 v2; // rax
  int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_Size);
    }
    if ( i >= this->m_Size )
      break;
    v2 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2, i);
    if ( node == *(NavMeshNode **)v2 )
    {
      NavMeshNodeQueue::BubbleUp(this, i, node);
      return;
    }
  }
};

// Line 131: range 000000000CD726E4-000000000CD72730
bool __cdecl NavMeshNodeQueue::empty(const NavMeshNodeQueue *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_Size);
  }
  return this->m_Size == 0;
};
