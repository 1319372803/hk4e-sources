// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/NavMeshNode.cpp

// Line 27: range 000000000CC4817F-000000000CC481E9
unsigned int __cdecl HashRef(NavMeshPolyRef a)
{
  NavMeshPolyRef aa; // [rsp+0h] [rbp-8h]

  aa = 21 * (((0x3FFFF * a - 1) >> 31) ^ (0x3FFFF * a - 1));
  return ((65 * ((aa >> 11) ^ aa)) >> 22) ^ (65 * ((aa >> 11) ^ aa));
};

// Line 39: range 000000000CC481EA-000000000CC48410
void __cdecl NavMeshNodePool::NavMeshNodePool(NavMeshNodePool *const this, int maxNavMeshNodes, int hashSize)
{
  void *p_m_Next; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_MaxNavMeshNodes = maxNavMeshNodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_HashSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_HashSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_HashSize);
  }
  this->m_HashSize = hashSize;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshNodeCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_NavMeshNodeCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_NavMeshNodeCount);
  }
  this->m_NavMeshNodeCount = 0;
  dynamic_array<NavMeshNode,true,8ul>::dynamic_array(&this->m_NavMeshNodes, maxNavMeshNodes);
  dynamic_array<unsigned short,true,2ul>::dynamic_array(&this->m_First, hashSize, kNavMeshNodeNullIndex);
  p_m_Next = &this->m_Next;
  dynamic_array<unsigned short,true,2ul>::dynamic_array(&this->m_Next, maxNavMeshNodes, kNavMeshNodeNullIndex);
  if ( !hashSize )
  {
    __asan_handle_no_return(p_m_Next);
    __assert_fail(
      "hashSize != 0",
      "./src/pathfinding/Internal/NavMesh/NavMeshNode.cpp",
      0x2Fu,
      "NavMeshNodePool::NavMeshNodePool(int, int)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_HashSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_HashSize >> 3) + 0x7FFF8000) )
  {
    p_m_Next = (void *)&this->m_HashSize;
    __asan_report_load4(&this->m_HashSize);
  }
  if ( !this->m_HashSize )
  {
    __asan_handle_no_return(p_m_Next);
    __assert_fail(
      "m_HashSize != 0",
      "./src/pathfinding/Internal/NavMesh/NavMeshNode.cpp",
      0x30u,
      "NavMeshNodePool::NavMeshNodePool(int, int)");
  }
  if ( !IsPowerOfTwo<int>(hashSize) )
  {
    __asan_handle_no_return((unsigned int)hashSize);
    __assert_fail(
      "IsPowerOfTwo(hashSize)",
      "./src/pathfinding/Internal/NavMesh/NavMeshNode.cpp",
      0x31u,
      "NavMeshNodePool::NavMeshNodePool(int, int)");
  }
};

// Line 52: range 000000000CC48412-000000000CC48450
void __cdecl NavMeshNodePool::~NavMeshNodePool(NavMeshNodePool *const this)
{
  dynamic_array<unsigned short,true,2ul>::~dynamic_array(&this->m_Next);
  dynamic_array<unsigned short,true,2ul>::~dynamic_array(&this->m_First);
  dynamic_array<NavMeshNode,true,8ul>::~dynamic_array(&this->m_NavMeshNodes);
};

// Line 57: range 000000000CC48452-000000000CC484D9
void __cdecl NavMeshNodePool::Clear(NavMeshNodePool *const this)
{
  unsigned __int16 *v1; // rbx
  unsigned __int16 *v2; // rax

  v1 = dynamic_array<unsigned short,true,2ul>::end(&this->m_First);
  v2 = dynamic_array<unsigned short,true,2ul>::begin(&this->m_First);
  std::fill<unsigned short *,unsigned short>(v2, v1, kNavMeshNodeNullIndex);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshNodeCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_NavMeshNodeCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_NavMeshNodeCount);
  }
  this->m_NavMeshNodeCount = 0;
};

// Line 63: range 000000000CC484DA-000000000CC48668
NavMeshNode *__cdecl NavMeshNodePool::FindNavMeshNode(NavMeshNodePool *const this, NavMeshPolyRef id)
{
  unsigned int v2; // ecx
  unsigned __int16 *v3; // rax
  NavMeshNodeIndex *v4; // rdx
  __int64 v5; // rax
  unsigned __int16 *v7; // rax
  NavMeshNodeIndex *v8; // rdx
  NavMeshNodeIndex i; // [rsp+1Ah] [rbp-6h]

  v2 = HashRef(id);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_HashSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_HashSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_HashSize);
  }
  v3 = dynamic_array<unsigned short,true,2ul>::operator[](&this->m_First, v2 & (this->m_HashSize - 1));
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(v3);
  }
  for ( i = *v4; i != 0xFFFF; i = *v8 )
  {
    v5 = (__int64)dynamic_array<NavMeshNode,true,8ul>::operator[](&this->m_NavMeshNodes, i);
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 24) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5 + 24, i);
    if ( id == *(_QWORD *)(v5 + 24) )
      return dynamic_array<NavMeshNode,true,8ul>::operator[](&this->m_NavMeshNodes, i);
    v7 = dynamic_array<unsigned short,true,2ul>::operator[](&this->m_Next, i);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(v7);
    }
  }
  return 0LL;
};

// Line 76: range 000000000CC4866A-000000000CC48B00
NavMeshNode *__cdecl NavMeshNodePool::GetNode(NavMeshNodePool *const this, NavMeshPolyRef id)
{
  unsigned int v2; // ecx
  unsigned __int16 *v3; // rax
  NavMeshNodeIndex *v4; // rdx
  __int64 v5; // rax
  unsigned __int16 *v7; // rax
  NavMeshNodeIndex *v8; // rdx
  int m_NavMeshNodeCount; // ecx
  unsigned __int64 v10; // rax
  unsigned __int16 *v11; // rax
  __int16 *v12; // rdx
  __int16 v13; // bx
  unsigned __int16 *v14; // rax
  _WORD *v15; // rdx
  unsigned __int16 *v16; // rax
  NavMeshNodeIndex *v17; // rdx
  NavMeshNodeIndex i; // [rsp+12h] [rbp-1Eh]
  NavMeshNodeIndex ia; // [rsp+12h] [rbp-1Eh]
  unsigned int bucket; // [rsp+14h] [rbp-1Ch]
  NavMeshNode *node; // [rsp+18h] [rbp-18h]

  v2 = HashRef(id);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_HashSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_HashSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_HashSize);
  }
  bucket = v2 & (this->m_HashSize - 1);
  v3 = dynamic_array<unsigned short,true,2ul>::operator[](&this->m_First, bucket);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(v3);
  }
  for ( i = *v4; i != 0xFFFF; i = *v8 )
  {
    v5 = (__int64)dynamic_array<NavMeshNode,true,8ul>::operator[](&this->m_NavMeshNodes, i);
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 24) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5 + 24, i);
    if ( id == *(_QWORD *)(v5 + 24) )
      return dynamic_array<NavMeshNode,true,8ul>::operator[](&this->m_NavMeshNodes, i);
    v7 = dynamic_array<unsigned short,true,2ul>::operator[](&this->m_Next, i);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(v7);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshNodeCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_NavMeshNodeCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_NavMeshNodeCount);
  }
  m_NavMeshNodeCount = this->m_NavMeshNodeCount;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( m_NavMeshNodeCount >= this->m_MaxNavMeshNodes )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshNodeCount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_NavMeshNodeCount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_NavMeshNodeCount);
  }
  ia = this->m_NavMeshNodeCount++;
  node = dynamic_array<NavMeshNode,true,8ul>::operator[](&this->m_NavMeshNodes, ia);
  v10 = (unsigned __int64)node + 20;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v10);
  *((_DWORD *)node + 5) &= 0xC0000000;
  if ( *(_BYTE *)(((unsigned __int64)&node->cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)node + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node->cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&node->cost);
  }
  node->cost = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&node->total >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&node->total >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&node->total);
  }
  node->total = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&node->id >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  node->id = id;
  *((_BYTE *)node + 23) &= 0x3Fu;
  v11 = dynamic_array<unsigned short,true,2ul>::operator[](&this->m_First, bucket);
  v12 = (__int16 *)v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(v11);
  }
  v13 = *v12;
  v14 = dynamic_array<unsigned short,true,2ul>::operator[](&this->m_Next, ia);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(v14);
  }
  *v15 = v13;
  v16 = dynamic_array<unsigned short,true,2ul>::operator[](&this->m_First, bucket);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(v16);
  }
  *v17 = ia;
  return node;
};

// Line 108: range 000000000CC48B02-000000000CC48B69
void __cdecl NavMeshNodeQueue::NavMeshNodeQueue(NavMeshNodeQueue *const this, int n)
{
  dynamic_array<NavMeshNode *,true,8ul>::dynamic_array(&this->m_Heap, n + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Size);
  }
  this->m_Size = 0;
};

// Line 114: range 000000000CC48B6A-000000000CC48B84
void __cdecl NavMeshNodeQueue::~NavMeshNodeQueue(NavMeshNodeQueue *const this)
{
  dynamic_array<NavMeshNode *,true,8ul>::~dynamic_array(&this->m_Heap);
};

// Line 119: range 000000000CC48B86-000000000CC48D4A
void __cdecl NavMeshNodeQueue::BubbleUp(NavMeshNodeQueue *const this, int i, NavMeshNode *node)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  double v5; // xmm0_8
  char v6; // al
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int ia; // [rsp+14h] [rbp-2Ch]
  int parent; // [rsp+2Ch] [rbp-14h]

  ia = i;
  for ( parent = (i - 1) / 2; ; parent = (parent - 1) / 2 )
  {
    if ( ia <= 0 )
      goto LABEL_11;
    v3 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, parent);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v3, parent);
    v4 = *(_QWORD *)v3;
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v4 + 16);
    }
    LODWORD(v5) = *(_DWORD *)(v4 + 16);
    if ( *(_BYTE *)(((unsigned __int64)&node->total >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&node->total >> 3) + 0x7FFF8000) <= 3 )
    {
      v5 = __asan_report_load4(&node->total);
    }
    if ( *(float *)&v5 <= node->total )
LABEL_11:
      v6 = 0;
    else
      v6 = 1;
    if ( !v6 )
      break;
    v7 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, parent);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7, parent);
    v8 = *(_QWORD *)v7;
    v9 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, ia);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8();
    *(_QWORD *)v9 = v8;
    ia = parent;
  }
  v10 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, ia);
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_store8();
  *(_QWORD *)v10 = node;
};

// Line 132: range 000000000CC48D4C-000000000CC48F69
void __cdecl NavMeshNodeQueue::TrickleDown(NavMeshNodeQueue *const this, int i, NavMeshNode *node)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  size_t v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  float v12; // [rsp+4h] [rbp-3Ch]
  int ia; // [rsp+14h] [rbp-2Ch]
  int child; // [rsp+2Ch] [rbp-14h]

  ia = i;
  for ( child = 2 * i + 1; ; child = 2 * child + 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_Size >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_Size);
    }
    if ( child >= this->m_Size )
      break;
    if ( child + 1 >= this->m_Size )
      goto LABEL_16;
    v3 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, child);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v3, child);
    v4 = *(_QWORD *)v3;
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v4 + 16);
    }
    v12 = *(float *)(v4 + 16);
    v5 = child + 1;
    v6 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, v5);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6, v5);
    v7 = *(_QWORD *)v6;
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v7 + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v7 + 16);
    }
    if ( v12 <= *(float *)(v7 + 16) )
LABEL_16:
      v8 = 0;
    else
      v8 = 1;
    if ( v8 )
      ++child;
    v9 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, child);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9, child);
    v10 = *(_QWORD *)v9;
    v11 = (unsigned __int64)dynamic_array<NavMeshNode *,true,8ul>::operator[](&this->m_Heap, ia);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8();
    *(_QWORD *)v11 = v10;
    ia = child;
  }
  NavMeshNodeQueue::BubbleUp(this, ia, node);
};
