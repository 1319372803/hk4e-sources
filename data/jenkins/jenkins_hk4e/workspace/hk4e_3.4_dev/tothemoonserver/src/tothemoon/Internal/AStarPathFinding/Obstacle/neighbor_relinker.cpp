// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Obstacle/neighbor_relinker.cpp

// Line 39: range 000000000CBF7254-000000000CBF72B3
SVONode *__cdecl NeighborRelinker::FindNodeThroughChildParentChain(
        int level,
        uint64_t index,
        const DynamicNodesInfo *nodesData,
        SVONode *defaultNode)
{
  SVONode *node; // [rsp+28h] [rbp-8h]

  while ( level <= 8 )
  {
    ++level;
    index = MortonCodeCalculator::ChildIndexToParentIndex(index);
    node = DynamicNodesInfo::GetNode(nodesData, level, index, defaultNode);
    if ( node )
      return node;
  }
  return 0LL;
};

// Line 55: range 000000000CBF72B4-000000000CBF7AEC
void __cdecl NeighborRelinker::FindMainNeighbors(
        const DynamicNodesInfo *nodesData,
        std::shared_ptr<DynamicSVONode> *p_node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  std::vector<int>::reference v9; // rax
  int *v10; // rdx
  std::vector<int>::reference v11; // rax
  int *v12; // rdx
  std::vector<int>::reference v13; // rax
  int *v14; // rdx
  double v15; // xmm0_8
  float v16; // xmm0_4
  unsigned __int64 v17; // rdx
  double v18; // xmm0_8
  float v19; // xmm0_4
  unsigned __int64 v20; // rcx
  double v21; // xmm0_8
  float v22; // xmm0_4
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  unsigned __int64 v31; // rax
  std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // r14
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  unsigned __int64 v39; // rax
  int j; // [rsp+10h] [rbp-D0h]
  int neighborReverseIndex; // [rsp+14h] [rbp-CCh]
  unsigned __int64 x; // [rsp+18h] [rbp-C8h]
  unsigned __int64 y; // [rsp+20h] [rbp-C0h]
  unsigned __int64 z; // [rsp+28h] [rbp-B8h]
  std::vector<ToTheMoonVector3>::const_reference dir; // [rsp+30h] [rbp-B0h]
  unsigned __int64 neighborIndex; // [rsp+38h] [rbp-A8h]
  SVONode *default_neighbor; // [rsp+40h] [rbp-A0h]
  SVONode *neighbor; // [rsp+48h] [rbp-98h]
  char v50[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 posIndex:58";
  *(_QWORD *)(v2 + 16) = NeighborRelinker::FindMainNeighbors;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( std::operator==<DynamicSVONode>(p_node, 0LL) )
    goto LABEL_11;
  v5 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 168) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5 + 168, 0LL);
  if ( !*(_QWORD *)(v5 + 168) )
    goto LABEL_11;
  v6 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6 + 8, 0LL);
  if ( *(_QWORD *)(v6 + 8) )
    v7 = 0;
  else
LABEL_11:
    v7 = 1;
  if ( !v7 )
  {
    std::vector<int>::vector((std::vector<int> *const)(v2 + 32));
    v8 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 24, 0LL);
    MortonCodeCalculator::MortonCodeIndexToCoordination(*(_QWORD *)(v8 + 24), (std::vector<int> *)(v2 + 32));
    v9 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 0LL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    x = *v10;
    v11 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 1uLL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    y = *v12;
    v13 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 2uLL);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    z = *v14;
    for ( j = 0; j < std::vector<ToTheMoonVector3>::size(&NeighborRelinker::MAIN_NEIGHBOR_INDEX); ++j )
    {
      dir = std::vector<ToTheMoonVector3>::operator[](&NeighborRelinker::MAIN_NEIGHBOR_INDEX, j);
      if ( (z & 0x8000000000000000LL) != 0LL )
        *(float *)&v15 = (float)(int)(z & 1 | (z >> 1)) + (float)(int)(z & 1 | (z >> 1));
      else
        *(float *)&v15 = (float)(int)z;
      if ( *(_BYTE *)(((unsigned __int64)&dir->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dir + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dir->z >> 3) + 0x7FFF8000) )
      {
        v15 = __asan_report_load4(&dir->z);
      }
      v16 = *(float *)&v15 + dir->z;
      if ( v16 >= 9.223372e18 )
        v17 = (unsigned int)(int)(float)(v16 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v17 = (unsigned int)(int)v16;
      if ( (y & 0x8000000000000000LL) != 0LL )
        *(float *)&v18 = (float)(int)(y & 1 | (y >> 1)) + (float)(int)(y & 1 | (y >> 1));
      else
        *(float *)&v18 = (float)(int)y;
      if ( *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dir + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) )
      {
        v18 = __asan_report_load4(&dir->y);
      }
      v19 = *(float *)&v18 + dir->y;
      if ( v19 >= 9.223372e18 )
        v20 = (unsigned int)(int)(float)(v19 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v20 = (unsigned int)(int)v19;
      if ( (x & 0x8000000000000000LL) != 0LL )
        *(float *)&v21 = (float)(int)(x & 1 | (x >> 1)) + (float)(int)(x & 1 | (x >> 1));
      else
        *(float *)&v21 = (float)(int)x;
      if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
      {
        v21 = __asan_report_load4(dir);
      }
      v22 = *(float *)&v21 + dir->x;
      if ( v22 >= 9.223372e18 )
        v23 = (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v23 = (unsigned int)(int)v22;
      v24 = v20;
      neighborIndex = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(v23, v20, v17);
      v25 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      if ( *(_BYTE *)(((unsigned __int64)(v25 + 168) >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8(v25 + 168, v24);
      v26 = (unsigned __int64)std::vector<SVONode *>::operator[](
                                (std::vector<SVONode*> *const)(*(_QWORD *)(v25 + 168) + 56LL),
                                j);
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        v26 = __asan_report_load8(v26, j);
      default_neighbor = *(SVONode **)v26;
      v27 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      if ( *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load8(v27 + 8, j);
      v28 = *(_QWORD *)(v27 + 8);
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v28 >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v28);
      v29 = *(unsigned int *)v28;
      neighbor = DynamicNodesInfo::GetNode(nodesData, v29, neighborIndex, default_neighbor);
      if ( neighbor )
      {
        v30 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        v31 = (unsigned __int64)std::vector<SVONode *>::operator[](&v30->neighbors, j);
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          v31 = __asan_report_store8();
        *(_QWORD *)v31 = neighbor;
        neighborReverseIndex = SVODataProcessor::GetNodeIndexInNeighbor(j, Normal_1);
        v32 = std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::get(p_node);
        v33 = (unsigned __int64)std::vector<SVONode *>::operator[](&neighbor->neighbors, neighborReverseIndex);
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          v33 = __asan_report_store8();
        *(_QWORD *)v33 = v32;
      }
      else
      {
        v34 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        if ( *(_BYTE *)(((unsigned __int64)(v34 + 32) >> 3) + 0x7FFF8000) )
          v34 = __asan_report_load8(v34 + 32, v29);
        if ( *(_QWORD *)(v34 + 32) )
        {
          v35 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
          if ( *(_BYTE *)(((unsigned __int64)(v35 + 32) >> 3) + 0x7FFF8000) )
            v35 = __asan_report_load8(v35 + 32, v29);
          v36 = (unsigned __int64)std::vector<SVONode *>::operator[](
                                    (std::vector<SVONode*> *const)(*(_QWORD *)(v35 + 32) + 56LL),
                                    j);
          if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
            v36 = __asan_report_load8(v36, j);
          v37 = *(_QWORD *)v36;
          v38 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
          v39 = (unsigned __int64)std::vector<SVONode *>::operator[](&v38->neighbors, j);
          if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
            v39 = __asan_report_store8();
          *(_QWORD *)v39 = v37;
        }
      }
    }
    std::vector<int>::~vector((std::vector<int> *const)(v2 + 32));
  }
  if ( v50 == (char *)v2 )
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

// Line 87: range 000000000CBF7AEE-000000000CBF83A4
void __cdecl NeighborRelinker::FindPlanarNeighbors(
        const DynamicNodesInfo *nodesData,
        std::shared_ptr<DynamicSVONode> *p_node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  std::vector<int>::reference v9; // rax
  int *v10; // rdx
  std::vector<int>::reference v11; // rax
  int *v12; // rdx
  std::vector<int>::reference v13; // rax
  int *v14; // rdx
  double v15; // xmm0_8
  float v16; // xmm0_4
  unsigned __int64 v17; // rdx
  double v18; // xmm0_8
  float v19; // xmm0_4
  unsigned __int64 v20; // rcx
  double v21; // xmm0_8
  float v22; // xmm0_4
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  unsigned __int64 v31; // rax
  std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  SVONode *v36; // r15
  __int64 v37; // rax
  uint64_t v38; // r14
  __int64 v39; // rax
  int *v40; // rax
  SVONode *NodeThroughChildParentChain; // r14
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  unsigned __int64 v43; // rax
  int j; // [rsp+20h] [rbp-D0h]
  int neighborReverseIndex; // [rsp+24h] [rbp-CCh]
  unsigned __int64 x; // [rsp+28h] [rbp-C8h]
  unsigned __int64 y; // [rsp+30h] [rbp-C0h]
  unsigned __int64 z; // [rsp+38h] [rbp-B8h]
  std::vector<ToTheMoonVector3>::const_reference dir; // [rsp+40h] [rbp-B0h]
  unsigned __int64 neighborIndex; // [rsp+48h] [rbp-A8h]
  SVONode *default_neighbor; // [rsp+50h] [rbp-A0h]
  SVONode *neighbor; // [rsp+58h] [rbp-98h]
  char v54[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 posIndex:92";
  *(_QWORD *)(v2 + 16) = NeighborRelinker::FindPlanarNeighbors;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( std::operator==<DynamicSVONode>(p_node, 0LL) )
    goto LABEL_11;
  v5 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 168) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5 + 168, 0LL);
  if ( !*(_QWORD *)(v5 + 168) )
    goto LABEL_11;
  v6 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6 + 8, 0LL);
  if ( *(_QWORD *)(v6 + 8) )
    v7 = 0;
  else
LABEL_11:
    v7 = 1;
  if ( !v7 )
  {
    std::vector<int>::vector((std::vector<int> *const)(v2 + 32));
    v8 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 24, 0LL);
    MortonCodeCalculator::MortonCodeIndexToCoordination(*(_QWORD *)(v8 + 24), (std::vector<int> *)(v2 + 32));
    v9 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 0LL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    x = *v10;
    v11 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 1uLL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    y = *v12;
    v13 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 2uLL);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    z = *v14;
    for ( j = 0; j < std::vector<ToTheMoonVector3>::size(&NeighborRelinker::PLANAR_NEIGHBOR_INDEX); ++j )
    {
      dir = std::vector<ToTheMoonVector3>::operator[](&NeighborRelinker::PLANAR_NEIGHBOR_INDEX, j);
      if ( (z & 0x8000000000000000LL) != 0LL )
        *(float *)&v15 = (float)(int)(z & 1 | (z >> 1)) + (float)(int)(z & 1 | (z >> 1));
      else
        *(float *)&v15 = (float)(int)z;
      if ( *(_BYTE *)(((unsigned __int64)&dir->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dir + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dir->z >> 3) + 0x7FFF8000) )
      {
        v15 = __asan_report_load4(&dir->z);
      }
      v16 = *(float *)&v15 + dir->z;
      if ( v16 >= 9.223372e18 )
        v17 = (unsigned int)(int)(float)(v16 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v17 = (unsigned int)(int)v16;
      if ( (y & 0x8000000000000000LL) != 0LL )
        *(float *)&v18 = (float)(int)(y & 1 | (y >> 1)) + (float)(int)(y & 1 | (y >> 1));
      else
        *(float *)&v18 = (float)(int)y;
      if ( *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dir + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) )
      {
        v18 = __asan_report_load4(&dir->y);
      }
      v19 = *(float *)&v18 + dir->y;
      if ( v19 >= 9.223372e18 )
        v20 = (unsigned int)(int)(float)(v19 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v20 = (unsigned int)(int)v19;
      if ( (x & 0x8000000000000000LL) != 0LL )
        *(float *)&v21 = (float)(int)(x & 1 | (x >> 1)) + (float)(int)(x & 1 | (x >> 1));
      else
        *(float *)&v21 = (float)(int)x;
      if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
      {
        v21 = __asan_report_load4(dir);
      }
      v22 = *(float *)&v21 + dir->x;
      if ( v22 >= 9.223372e18 )
        v23 = (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v23 = (unsigned int)(int)v22;
      v24 = v20;
      neighborIndex = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(v23, v20, v17);
      v25 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      if ( *(_BYTE *)(((unsigned __int64)(v25 + 168) >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8(v25 + 168, v24);
      v26 = (unsigned __int64)std::vector<SVONode *>::operator[](
                                (std::vector<SVONode*> *const)(*(_QWORD *)(v25 + 168) + 56LL),
                                j);
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        v26 = __asan_report_load8(v26, j);
      default_neighbor = *(SVONode **)v26;
      v27 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      if ( *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load8(v27 + 8, j);
      v28 = *(_QWORD *)(v27 + 8);
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v28 >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v28);
      v29 = *(unsigned int *)v28;
      neighbor = DynamicNodesInfo::GetNode(nodesData, v29, neighborIndex, default_neighbor);
      if ( neighbor )
      {
        v30 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        v31 = (unsigned __int64)std::vector<SVONode *>::operator[](&v30->planarNeighbors, j);
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          v31 = __asan_report_store8();
        *(_QWORD *)v31 = neighbor;
        neighborReverseIndex = SVODataProcessor::GetNodeIndexInNeighbor(j, Planar);
        v32 = std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::get(p_node);
        v33 = (unsigned __int64)std::vector<SVONode *>::operator[](&neighbor->planarNeighbors, neighborReverseIndex);
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          v33 = __asan_report_store8();
        *(_QWORD *)v33 = v32;
      }
      else
      {
        v34 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        if ( *(_BYTE *)(((unsigned __int64)(v34 + 168) >> 3) + 0x7FFF8000) )
          v34 = __asan_report_load8(v34 + 168, v29);
        v35 = (unsigned __int64)std::vector<SVONode *>::operator[](
                                  (std::vector<SVONode*> *const)(*(_QWORD *)(v34 + 168) + 88LL),
                                  j);
        if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
          v35 = __asan_report_load8(v35, j);
        v36 = *(SVONode **)v35;
        v37 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        if ( *(_BYTE *)(((unsigned __int64)(v37 + 24) >> 3) + 0x7FFF8000) )
          v37 = __asan_report_load8(v37 + 24, j);
        v38 = *(_QWORD *)(v37 + 24);
        v39 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        if ( *(_BYTE *)(((unsigned __int64)(v39 + 8) >> 3) + 0x7FFF8000) )
          v39 = __asan_report_load8(v39 + 8, j);
        v40 = *(int **)(v39 + 8);
        if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v40);
        }
        NodeThroughChildParentChain = NeighborRelinker::FindNodeThroughChildParentChain(*v40, v38, nodesData, v36);
        v42 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        v43 = (unsigned __int64)std::vector<SVONode *>::operator[](&v42->planarNeighbors, j);
        if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
          v43 = __asan_report_store8();
        *(_QWORD *)v43 = NodeThroughChildParentChain;
      }
    }
    std::vector<int>::~vector((std::vector<int> *const)(v2 + 32));
  }
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

// Line 117: range 000000000CBF83A6-000000000CBF8C5C
void __cdecl NeighborRelinker::FindDiagonalNeighbors(
        const DynamicNodesInfo *nodesData,
        std::shared_ptr<DynamicSVONode> *p_node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  std::vector<int>::reference v9; // rax
  int *v10; // rdx
  std::vector<int>::reference v11; // rax
  int *v12; // rdx
  std::vector<int>::reference v13; // rax
  int *v14; // rdx
  double v15; // xmm0_8
  float v16; // xmm0_4
  unsigned __int64 v17; // rdx
  double v18; // xmm0_8
  float v19; // xmm0_4
  unsigned __int64 v20; // rcx
  double v21; // xmm0_8
  float v22; // xmm0_4
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  unsigned __int64 v31; // rax
  std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  SVONode *v36; // r15
  __int64 v37; // rax
  uint64_t v38; // r14
  __int64 v39; // rax
  int *v40; // rax
  SVONode *NodeThroughChildParentChain; // r14
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  unsigned __int64 v43; // rax
  int j; // [rsp+20h] [rbp-D0h]
  int neighborReverseIndex; // [rsp+24h] [rbp-CCh]
  unsigned __int64 x; // [rsp+28h] [rbp-C8h]
  unsigned __int64 y; // [rsp+30h] [rbp-C0h]
  unsigned __int64 z; // [rsp+38h] [rbp-B8h]
  std::vector<ToTheMoonVector3>::const_reference dir; // [rsp+40h] [rbp-B0h]
  unsigned __int64 neighborIndex; // [rsp+48h] [rbp-A8h]
  SVONode *default_neighbor; // [rsp+50h] [rbp-A0h]
  SVONode *neighbor; // [rsp+58h] [rbp-98h]
  char v54[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 12 posIndex:122";
  *(_QWORD *)(v2 + 16) = NeighborRelinker::FindDiagonalNeighbors;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( std::operator==<DynamicSVONode>(p_node, 0LL) )
    goto LABEL_11;
  v5 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 168) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5 + 168, 0LL);
  if ( !*(_QWORD *)(v5 + 168) )
    goto LABEL_11;
  v6 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6 + 8, 0LL);
  if ( *(_QWORD *)(v6 + 8) )
    v7 = 0;
  else
LABEL_11:
    v7 = 1;
  if ( !v7 )
  {
    std::vector<int>::vector((std::vector<int> *const)(v2 + 32));
    v8 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 24) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 24, 0LL);
    MortonCodeCalculator::MortonCodeIndexToCoordination(*(_QWORD *)(v8 + 24), (std::vector<int> *)(v2 + 32));
    v9 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 0LL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    x = *v10;
    v11 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 1uLL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    y = *v12;
    v13 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 2uLL);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    z = *v14;
    for ( j = 0; j < std::vector<ToTheMoonVector3>::size(&NeighborRelinker::DIAGONAL_NEIGHBOR_INDEX); ++j )
    {
      dir = std::vector<ToTheMoonVector3>::operator[](&NeighborRelinker::DIAGONAL_NEIGHBOR_INDEX, j);
      if ( (z & 0x8000000000000000LL) != 0LL )
        *(float *)&v15 = (float)(int)(z & 1 | (z >> 1)) + (float)(int)(z & 1 | (z >> 1));
      else
        *(float *)&v15 = (float)(int)z;
      if ( *(_BYTE *)(((unsigned __int64)&dir->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dir + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dir->z >> 3) + 0x7FFF8000) )
      {
        v15 = __asan_report_load4(&dir->z);
      }
      v16 = *(float *)&v15 + dir->z;
      if ( v16 >= 9.223372e18 )
        v17 = (unsigned int)(int)(float)(v16 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v17 = (unsigned int)(int)v16;
      if ( (y & 0x8000000000000000LL) != 0LL )
        *(float *)&v18 = (float)(int)(y & 1 | (y >> 1)) + (float)(int)(y & 1 | (y >> 1));
      else
        *(float *)&v18 = (float)(int)y;
      if ( *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dir + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dir->y >> 3) + 0x7FFF8000) )
      {
        v18 = __asan_report_load4(&dir->y);
      }
      v19 = *(float *)&v18 + dir->y;
      if ( v19 >= 9.223372e18 )
        v20 = (unsigned int)(int)(float)(v19 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v20 = (unsigned int)(int)v19;
      if ( (x & 0x8000000000000000LL) != 0LL )
        *(float *)&v21 = (float)(int)(x & 1 | (x >> 1)) + (float)(int)(x & 1 | (x >> 1));
      else
        *(float *)&v21 = (float)(int)x;
      if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
      {
        v21 = __asan_report_load4(dir);
      }
      v22 = *(float *)&v21 + dir->x;
      if ( v22 >= 9.223372e18 )
        v23 = (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v23 = (unsigned int)(int)v22;
      v24 = v20;
      neighborIndex = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(v23, v20, v17);
      v25 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      if ( *(_BYTE *)(((unsigned __int64)(v25 + 168) >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8(v25 + 168, v24);
      v26 = (unsigned __int64)std::vector<SVONode *>::operator[](
                                (std::vector<SVONode*> *const)(*(_QWORD *)(v25 + 168) + 56LL),
                                j);
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        v26 = __asan_report_load8(v26, j);
      default_neighbor = *(SVONode **)v26;
      v27 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      if ( *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load8(v27 + 8, j);
      v28 = *(_QWORD *)(v27 + 8);
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v28 >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v28);
      v29 = *(unsigned int *)v28;
      neighbor = DynamicNodesInfo::GetNode(nodesData, v29, neighborIndex, default_neighbor);
      if ( neighbor )
      {
        v30 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        v31 = (unsigned __int64)std::vector<SVONode *>::operator[](&v30->diagonalNeighbors, j);
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          v31 = __asan_report_store8();
        *(_QWORD *)v31 = neighbor;
        neighborReverseIndex = SVODataProcessor::GetNodeIndexInNeighbor(j, Diagonal);
        v32 = std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::get(p_node);
        v33 = (unsigned __int64)std::vector<SVONode *>::operator[](&neighbor->diagonalNeighbors, neighborReverseIndex);
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          v33 = __asan_report_store8();
        *(_QWORD *)v33 = v32;
      }
      else
      {
        v34 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        if ( *(_BYTE *)(((unsigned __int64)(v34 + 168) >> 3) + 0x7FFF8000) )
          v34 = __asan_report_load8(v34 + 168, v29);
        v35 = (unsigned __int64)std::vector<SVONode *>::operator[](
                                  (std::vector<SVONode*> *const)(*(_QWORD *)(v34 + 168) + 112LL),
                                  j);
        if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
          v35 = __asan_report_load8(v35, j);
        v36 = *(SVONode **)v35;
        v37 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        if ( *(_BYTE *)(((unsigned __int64)(v37 + 24) >> 3) + 0x7FFF8000) )
          v37 = __asan_report_load8(v37 + 24, j);
        v38 = *(_QWORD *)(v37 + 24);
        v39 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        if ( *(_BYTE *)(((unsigned __int64)(v39 + 8) >> 3) + 0x7FFF8000) )
          v39 = __asan_report_load8(v39 + 8, j);
        v40 = *(int **)(v39 + 8);
        if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v40);
        }
        NodeThroughChildParentChain = NeighborRelinker::FindNodeThroughChildParentChain(*v40, v38, nodesData, v36);
        v42 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
        v43 = (unsigned __int64)std::vector<SVONode *>::operator[](&v42->diagonalNeighbors, j);
        if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
          v43 = __asan_report_store8();
        *(_QWORD *)v43 = NodeThroughChildParentChain;
      }
    }
    std::vector<int>::~vector((std::vector<int> *const)(v2 + 32));
  }
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

// Line 148: range 000000000CBF8C5E-000000000CBF8EB7
void __cdecl NeighborRelinker::RebuildNeighborLinkAftertAddObstacle(DynamicNodesInfo *nodesData)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<DynamicSVONode>>::iterator __for_begin_0; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<DynamicSVONode>>::iterator __for_end_0; // [rsp+30h] [rbp-A0h] BYREF
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > > *nodeMap; // [rsp+38h] [rbp-98h]
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > > *__for_range; // [rsp+40h] [rbp-90h]
  std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > *layerNodes; // [rsp+48h] [rbp-88h]
  std::vector<std::shared_ptr<DynamicSVONode>> *__for_range_0; // [rsp+50h] [rbp-80h]
  std::shared_ptr<DynamicSVONode> *node; // [rsp+58h] [rbp-78h]
  std::shared_ptr<DynamicSVONode> p_targetNode; // [rsp+60h] [rbp-70h] BYREF
  char v14[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 nodes:153";
  *(_QWORD *)(v1 + 16) = NeighborRelinker::RebuildNeighborLinkAftertAddObstacle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  nodeMap = DynamicNodesInfo::GetNodesAdded(nodesData);
  __for_range = nodeMap;
  __for_begin._M_node = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::begin(nodeMap)._M_node;
  __for_end._M_node = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::end(nodeMap)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    layerNodes = std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>::operator*(&__for_begin);
    std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>::shared_ptr(
      (std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > *const)(v1 + 32),
      &layerNodes->second);
    __for_range_0 = std::__shared_ptr_access<std::vector<std::shared_ptr<DynamicSVONode>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::vector<std::shared_ptr<DynamicSVONode>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&layerNodes->second);
    __for_begin_0._M_current = std::vector<std::shared_ptr<DynamicSVONode>>::begin(__for_range_0)._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<DynamicSVONode>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<DynamicSVONode> *,std::vector<std::shared_ptr<DynamicSVONode>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      node = __gnu_cxx::__normal_iterator<std::shared_ptr<DynamicSVONode> *,std::vector<std::shared_ptr<DynamicSVONode>>>::operator*(&__for_begin_0);
      std::shared_ptr<DynamicSVONode>::shared_ptr(&p_targetNode, node);
      NeighborRelinker::UpdateNodeNeighborLinkAfterAdd(nodesData, &p_targetNode);
      std::shared_ptr<DynamicSVONode>::~shared_ptr(&p_targetNode);
      __gnu_cxx::__normal_iterator<std::shared_ptr<DynamicSVONode> *,std::vector<std::shared_ptr<DynamicSVONode>>>::operator++(&__for_begin_0);
    }
    std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>::~shared_ptr((std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 161: range 000000000CBF8EB8-000000000CBF8F1F
void __cdecl NeighborRelinker::UpdateNodeNeighborLinkAfterAdd(
        DynamicNodesInfo *nodesData,
        std::shared_ptr<DynamicSVONode> *p_targetNode)
{
  std::shared_ptr<DynamicSVONode> p_node; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<DynamicSVONode>::shared_ptr(&p_node, p_targetNode);
  NeighborRelinker::FindMainNeighbors(nodesData, &p_node);
  std::shared_ptr<DynamicSVONode>::~shared_ptr(&p_node);
};

// Line 170: range 000000000CBF8F20-000000000CBF9179
void __cdecl NeighborRelinker::RebuildNeighborLinkAftertRemoveObstacle(DynamicNodesInfo *nodesData)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<DynamicSVONode>>::iterator __for_begin_0; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<DynamicSVONode>>::iterator __for_end_0; // [rsp+30h] [rbp-A0h] BYREF
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > > *nodeMap; // [rsp+38h] [rbp-98h]
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > > *__for_range; // [rsp+40h] [rbp-90h]
  std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > *layerNodes; // [rsp+48h] [rbp-88h]
  std::vector<std::shared_ptr<DynamicSVONode>> *__for_range_0; // [rsp+50h] [rbp-80h]
  std::shared_ptr<DynamicSVONode> *node; // [rsp+58h] [rbp-78h]
  std::shared_ptr<DynamicSVONode> p_targetNode; // [rsp+60h] [rbp-70h] BYREF
  char v14[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 nodes:175";
  *(_QWORD *)(v1 + 16) = NeighborRelinker::RebuildNeighborLinkAftertRemoveObstacle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  nodeMap = DynamicNodesInfo::GetNodesDestroyed(nodesData);
  __for_range = nodeMap;
  __for_begin._M_node = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::begin(nodeMap)._M_node;
  __for_end._M_node = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::end(nodeMap)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    layerNodes = std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>::operator*(&__for_begin);
    std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>::shared_ptr(
      (std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > *const)(v1 + 32),
      &layerNodes->second);
    __for_range_0 = std::__shared_ptr_access<std::vector<std::shared_ptr<DynamicSVONode>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::vector<std::shared_ptr<DynamicSVONode>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&layerNodes->second);
    __for_begin_0._M_current = std::vector<std::shared_ptr<DynamicSVONode>>::begin(__for_range_0)._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<DynamicSVONode>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<DynamicSVONode> *,std::vector<std::shared_ptr<DynamicSVONode>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      node = __gnu_cxx::__normal_iterator<std::shared_ptr<DynamicSVONode> *,std::vector<std::shared_ptr<DynamicSVONode>>>::operator*(&__for_begin_0);
      std::shared_ptr<DynamicSVONode>::shared_ptr(&p_targetNode, node);
      NeighborRelinker::UpdateNodeNeighborLinkAfterRemove(nodesData, &p_targetNode);
      std::shared_ptr<DynamicSVONode>::~shared_ptr(&p_targetNode);
      __gnu_cxx::__normal_iterator<std::shared_ptr<DynamicSVONode> *,std::vector<std::shared_ptr<DynamicSVONode>>>::operator++(&__for_begin_0);
    }
    std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>::~shared_ptr((std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 183: range 000000000CBF917A-000000000CBF9300
void __cdecl NeighborRelinker::UpdateNodeNeighborLinkAfterRemove(
        DynamicNodesInfo *nodesData,
        const std::shared_ptr<DynamicSVONode> *p_targetNode)
{
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  int i; // [rsp+10h] [rbp-20h]
  int reverseIndex; // [rsp+14h] [rbp-1Ch]
  SVONode *neighbor; // [rsp+18h] [rbp-18h]

  if ( !std::operator==<DynamicSVONode>(p_targetNode, 0LL) )
  {
    for ( i = 0; ; ++i )
    {
      v2 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_targetNode);
      if ( i >= std::vector<SVONode *>::size(&v2->neighbors) )
        break;
      v3 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_targetNode);
      v4 = (unsigned __int64)std::vector<SVONode *>::operator[](&v3->neighbors, i);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(v4, i);
      neighbor = *(SVONode **)v4;
      reverseIndex = SVODataProcessor::GetNodeIndexInNeighbor(i, Normal_1);
      v5 = (unsigned __int64)std::vector<SVONode *>::operator[](&neighbor->neighbors, reverseIndex);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5, reverseIndex);
      v6 = *(std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type **)v5;
      if ( v6 == std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::get(p_targetNode) )
      {
        v7 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_targetNode);
        if ( *(_BYTE *)(((unsigned __int64)(v7 + 32) >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7 + 32, reverseIndex);
        v8 = *(_QWORD *)(v7 + 32);
        v9 = (unsigned __int64)std::vector<SVONode *>::operator[](&neighbor->neighbors, reverseIndex);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_store8();
        *(_QWORD *)v9 = v8;
      }
    }
  }
};
