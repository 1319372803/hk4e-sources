// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp

// Line 16: range 000000000CBDF8DE-000000000CBE0670
SVONode *__cdecl SVODataProcessor::FindNodeByPositionByDir(
        const SVOBlock *block,
        const ToTheMoonVector3 *pos,
        const std::shared_ptr<DynamicNodesInfo> *p_dynamicData,
        ConfigToTheMoon::PosCompensationType compensationType,
        int compensationTimes)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  SVONode *NodeByPositionByDir; // r14
  __int64 svo; // rax
  std::vector<int>::reference v10; // rax
  int *v11; // rdx
  uint64_t v12; // r15
  std::vector<int>::reference v13; // rax
  int *v14; // rdx
  uint64_t v15; // r14
  std::vector<int>::reference v16; // rax
  int *v17; // rdx
  SVONode *v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  SVONode *NodeByOriginNode; // rax
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  unsigned __int64 v25; // rax
  float v26; // xmm0_4
  float v27; // xmm0_4
  double v28; // xmm0_8
  float *v29; // rdx
  double v30; // xmm0_8
  float *v31; // rdx
  char v32; // cl
  double v33; // xmm0_8
  float *v34; // rdx
  char v35; // cl
  unsigned __int64 v36; // rax
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rdx
  int v38; // r14d
  float z; // xmm2_4
  double v40; // xmm0_8
  SVONode *result; // rax
  bool found; // [rsp+3Fh] [rbp-101h]
  int currentLayer; // [rsp+40h] [rbp-100h]
  int i; // [rsp+44h] [rbp-FCh]
  int i_0; // [rsp+48h] [rbp-F8h]
  float layerWidth; // [rsp+4Ch] [rbp-F4h]
  float layerHeight; // [rsp+50h] [rbp-F0h]
  int xIndex; // [rsp+54h] [rbp-ECh]
  int yIndex; // [rsp+58h] [rbp-E8h]
  int zIndex; // [rsp+5Ch] [rbp-E4h]
  SVONode *targetNode; // [rsp+60h] [rbp-E0h]
  SVONode *node; // [rsp+68h] [rbp-D8h]
  uint64_t topMortonCode; // [rsp+70h] [rbp-D0h]
  SVOLayer *topLayerNodes; // [rsp+78h] [rbp-C8h]
  unsigned __int64 basePos; // [rsp+80h] [rbp-C0h]
  uint64_t targetNodeIndex; // [rsp+88h] [rbp-B8h]
  ToTheMoonVector3 v61; // [rsp+94h] [rbp-ACh] BYREF
  std::shared_ptr<DynamicNodesInfo> v62; // [rsp+A0h] [rbp-A0h] BYREF
  char v63[144]; // [rsp+B0h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 19 topLayerPosIndex:23";
  *(_QWORD *)(v5 + 16) = SVODataProcessor::FindNodeByPositionByDir;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  if ( !block )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
    __asan_report_load8(block, pos);
  if ( block->svo )
  {
    currentLayer = 9;
    std::vector<int>::vector((std::vector<int> *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
      __asan_report_load8(block, pos);
    svo = (__int64)block->svo;
    if ( *(_BYTE *)(((unsigned __int64)&block->svo->basePos >> 3) + 0x7FFF8000) )
      svo = __asan_report_load8(&block->svo->basePos, pos);
    SVODataProcessor::GetLayerPosIndexByPos(
      pos,
      *(const ToTheMoonVector3 **)(svo + 24),
      9,
      (std::vector<int> *)(v5 + 32));
    v10 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 32), 2uLL);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    v12 = *v11;
    v13 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 32), 1uLL);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v15 = *v14;
    v16 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 32), 0LL);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    topMortonCode = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(*v17, v15, v12);
    if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
      __asan_report_load8(block, v15);
    v18 = (SVONode *)9;
    v19 = (unsigned __int64)std::vector<SVOLayer *>::operator[](&block->svo->layerData, 9uLL);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load8(v19, 9LL);
    topLayerNodes = *(SVOLayer **)v19;
    targetNode = 0LL;
    for ( i = 0; i < std::vector<SVONode *>::size(&topLayerNodes->nodeData); ++i )
    {
      v18 = (SVONode *)i;
      v20 = (unsigned __int64)std::vector<SVONode *>::operator[](&topLayerNodes->nodeData, i);
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8(v20, i);
      v21 = *(_QWORD *)v20;
      if ( *(_BYTE *)(((unsigned __int64)(v21 + 24) >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8(v21 + 24, i);
      if ( topMortonCode == *(_QWORD *)(v21 + 24) )
      {
        if ( std::operator==<DynamicNodesInfo>(p_dynamicData, 0LL) )
        {
          v18 = (SVONode *)i;
          v22 = (unsigned __int64)std::vector<SVONode *>::operator[](&topLayerNodes->nodeData, i);
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8(v22, i);
          NodeByOriginNode = *(SVONode **)v22;
        }
        else
        {
          v24 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicData);
          v25 = (unsigned __int64)std::vector<SVONode *>::operator[](&topLayerNodes->nodeData, i);
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            v25 = __asan_report_load8(v25, i);
          v18 = *(SVONode **)v25;
          NodeByOriginNode = DynamicNodesInfo::GetNodeByOriginNode(v24, *(SVONode **)v25);
        }
        targetNode = NodeByOriginNode;
        break;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
      __asan_report_load8(block, v18);
    basePos = (unsigned __int64)&block->svo->basePos;
    if ( *(_BYTE *)((basePos >> 3) + 0x7FFF8000) )
      __asan_report_load8(basePos, v18);
    if ( !*(_QWORD *)basePos )
    {
      NodeByPositionByDir = 0LL;
      goto LABEL_109;
    }
    while ( targetNode )
    {
      if ( *(_BYTE *)(((unsigned __int64)&targetNode->children >> 3) + 0x7FFF8000) )
        __asan_report_load8(&targetNode->children, v18);
      if ( !targetNode->children )
        break;
      v26 = std::pow<int,int>(2, --currentLayer);
      layerWidth = v26;
      v27 = std::pow<int,int>(2, currentLayer);
      layerHeight = v27;
      found = 0;
      if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pos);
      }
      *(float *)&v28 = pos->x;
      if ( *(_BYTE *)((basePos >> 3) + 0x7FFF8000) )
        __asan_report_load8(basePos, ((unsigned __int8)pos & 7u) + 3);
      v29 = *(float **)basePos;
      if ( *(_BYTE *)((*(_QWORD *)basePos >> 3) + 0x7FFF8000LL) != 0
        && (char)((*(_QWORD *)basePos & 7) + 3) >= *(_BYTE *)((*(_QWORD *)basePos >> 3) + 0x7FFF8000LL) )
      {
        v28 = __asan_report_load4(*(_QWORD *)basePos);
      }
      xIndex = (int)std::floor((float)(*(float *)&v28 - *v29) / layerWidth);
      if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pos->y);
      }
      *(float *)&v30 = pos->y;
      if ( *(_BYTE *)((basePos >> 3) + 0x7FFF8000) )
        __asan_report_load8(basePos, (((_BYTE)pos + 4) & 7u) + 3);
      v31 = *(float **)basePos;
      v32 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)basePos + 4LL) >> 3) + 0x7FFF8000);
      if ( v32 != 0 && (char)(((*(_BYTE *)basePos + 4) & 7) + 3) >= v32 )
        v30 = __asan_report_load4(*(_QWORD *)basePos + 4LL);
      yIndex = (int)std::floor((float)(*(float *)&v30 - v31[1]) / layerHeight);
      if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pos->z);
      }
      *(float *)&v33 = pos->z;
      if ( *(_BYTE *)((basePos >> 3) + 0x7FFF8000) )
        __asan_report_load8(basePos, (((_BYTE)pos + 8) & 7u) + 3);
      v34 = *(float **)basePos;
      v35 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)basePos + 8LL) >> 3) + 0x7FFF8000);
      if ( v35 != 0 && (char)(((*(_BYTE *)basePos + 8) & 7) + 3) >= v35 )
        v33 = __asan_report_load4(*(_QWORD *)basePos + 8LL);
      zIndex = (int)std::floor((float)(*(float *)&v33 - v34[2]) / layerWidth);
      v18 = (SVONode *)yIndex;
      targetNodeIndex = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(xIndex, yIndex, zIndex);
      for ( i_0 = 0; ; ++i_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&targetNode->childNum >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&targetNode->childNum >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&targetNode->childNum);
        }
        if ( i_0 >= targetNode->childNum )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&targetNode->children >> 3) + 0x7FFF8000) )
          __asan_report_load8(&targetNode->children, v18);
        v36 = (unsigned __int64)&targetNode->children[i_0];
        if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
          v36 = __asan_report_load8(&targetNode->children[i_0], v18);
        node = *(SVONode **)v36;
        if ( !*(_QWORD *)v36 )
        {
          NodeByPositionByDir = 0LL;
          goto LABEL_109;
        }
        v18 = *(SVONode **)v36;
        if ( SVODataProcessor::CheckPosInNode(pos, node, layerWidth, layerHeight) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
            __asan_report_load8(&node->index, node);
          if ( targetNodeIndex != node->index )
            std::operator<<<std::char_traits<char>>(&std::cout, "should never be here!");
          v18 = 0LL;
          if ( std::operator!=<DynamicNodesInfo>(p_dynamicData, 0LL) )
          {
            v37 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicData);
            v18 = node;
            node = DynamicNodesInfo::GetNodeByOriginNode(v37, node);
          }
          targetNode = node;
          found = 1;
          break;
        }
      }
      if ( !found )
      {
        if ( compensationType == Up_0 )
        {
          if ( compensationTimes <= 0 )
          {
            NodeByPositionByDir = 0LL;
            goto LABEL_109;
          }
          v38 = compensationTimes - 1;
          std::shared_ptr<DynamicNodesInfo>::shared_ptr(&v62, p_dynamicData);
          if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pos->z);
          }
          z = pos->z;
          if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pos->y);
          }
          *(float *)&v40 = pos->y + 0.5;
          if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
          {
            v40 = __asan_report_load4(pos);
          }
        }
        else
        {
          if ( compensationType != Down_1 )
          {
            NodeByPositionByDir = 0LL;
            goto LABEL_109;
          }
          if ( compensationTimes <= 0 )
          {
            NodeByPositionByDir = 0LL;
            goto LABEL_109;
          }
          v38 = compensationTimes - 1;
          std::shared_ptr<DynamicNodesInfo>::shared_ptr(&v62, p_dynamicData);
          if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pos->z);
          }
          z = pos->z;
          if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pos->y);
          }
          *(float *)&v40 = pos->y - 0.5;
          if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
          {
            v40 = __asan_report_load4(pos);
          }
        }
        ToTheMoonVector3::ToTheMoonVector3(&v61, pos->x, *(float *)&v40, z);
        NodeByPositionByDir = SVODataProcessor::FindNodeByPositionByDir(block, &v61, &v62, compensationType, v38);
        std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&v62);
        goto LABEL_109;
      }
    }
    NodeByPositionByDir = targetNode;
LABEL_109:
    std::vector<int>::~vector((std::vector<int> *const)(v5 + 32));
  }
  else
  {
LABEL_8:
    NodeByPositionByDir = 0LL;
  }
  result = NodeByPositionByDir;
  if ( v63 == (char *)v5 )
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

// Line 110: range 000000000CBE0672-000000000CBE179D
SVONode *__cdecl SVODataProcessor::FindNodeByPositionGeneral(
        const SVOBlock *block,
        const ToTheMoonVector3 *pos,
        const std::shared_ptr<DynamicNodesInfo> *p_dynamicData)
{
  SVONode *v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 svo; // rax
  std::vector<int>::reference v8; // rax
  int *v9; // rdx
  std::vector<int>::reference v10; // rax
  int *v11; // rdx
  uint64_t v12; // r14
  std::vector<int>::reference v13; // rax
  int *v14; // rdx
  SVONode *v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  SVONode *NodeByOriginNode; // rax
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned __int64 v22; // rax
  float v23; // xmm0_4
  float v24; // xmm0_4
  double v25; // xmm0_8
  ToTheMoonVector3 *v26; // rdx
  double v27; // xmm0_8
  ToTheMoonVector3 *v28; // rdx
  char v29; // cl
  double v30; // xmm0_8
  ToTheMoonVector3 *v31; // rdx
  char v32; // cl
  unsigned __int64 v33; // rax
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  int v35; // r14d
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  char v37; // cl
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rdx
  unsigned int v40; // r14d
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rdx
  char v42; // cl
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  unsigned int v45; // r14d
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rdx
  char v47; // cl
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rdx
  char v50; // cl
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rdx
  unsigned int v53; // r14d
  std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rdx
  char v55; // cl
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  common::milog::MiLogStream *v57; // r14
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // r14
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  SVONode *result; // rax
  uint64_t n_z; // [rsp+10h] [rbp-190h]
  bool found; // [rsp+3Fh] [rbp-161h]
  int NodeLevel; // [rsp+40h] [rbp-160h] BYREF
  int currentLayer; // [rsp+44h] [rbp-15Ch]
  int i; // [rsp+48h] [rbp-158h]
  int bestDiffY; // [rsp+4Ch] [rbp-154h]
  int bestDiffXZ; // [rsp+50h] [rbp-150h]
  int i_0; // [rsp+54h] [rbp-14Ch]
  float layerWidth; // [rsp+58h] [rbp-148h]
  float layerHeight; // [rsp+5Ch] [rbp-144h]
  int xIndex; // [rsp+60h] [rbp-140h]
  int yIndex; // [rsp+64h] [rbp-13Ch]
  int zIndex; // [rsp+68h] [rbp-138h]
  int curDiffY; // [rsp+6Ch] [rbp-134h]
  int curDiffXZ_0; // [rsp+70h] [rbp-130h]
  int curDiffXZ; // [rsp+74h] [rbp-12Ch]
  SVONode *targetNode; // [rsp+78h] [rbp-128h]
  SVONode *bestNode; // [rsp+80h] [rbp-120h]
  SVONode *node; // [rsp+88h] [rbp-118h]
  uint64_t topMortonCode; // [rsp+90h] [rbp-110h]
  SVOLayer *topLayerNodes; // [rsp+98h] [rbp-108h]
  ToTheMoonVector3 **basePos; // [rsp+A0h] [rbp-100h]
  uint64_t targetNodeIndex; // [rsp+A8h] [rbp-F8h]
  common::milog::MiLogStream v88; // [rsp+B0h] [rbp-F0h] BYREF
  std::string val; // [rsp+D0h] [rbp-D0h] BYREF
  char v90[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 12 posIndex:183 64 24 20 topLayerPosIndex:117";
  *(_QWORD *)(v4 + 16) = SVODataProcessor::FindNodeByPositionGeneral;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  if ( !block )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
    __asan_report_load8(block, pos);
  if ( !block->svo )
  {
LABEL_8:
    v3 = 0LL;
    goto LABEL_133;
  }
  currentLayer = 9;
  std::vector<int>::vector((std::vector<int> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
    __asan_report_load8(block, pos);
  svo = (__int64)block->svo;
  if ( *(_BYTE *)(((unsigned __int64)&block->svo->basePos >> 3) + 0x7FFF8000) )
    svo = __asan_report_load8(&block->svo->basePos, pos);
  SVODataProcessor::GetLayerPosIndexByPos(
    pos,
    *(const ToTheMoonVector3 **)(svo + 24),
    currentLayer,
    (std::vector<int> *)(v4 + 64));
  v8 = std::vector<int>::operator[]((std::vector<int> *const)(v4 + 64), 2uLL);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  n_z = *v9;
  v10 = std::vector<int>::operator[]((std::vector<int> *const)(v4 + 64), 1uLL);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  v12 = *v11;
  v13 = std::vector<int>::operator[]((std::vector<int> *const)(v4 + 64), 0LL);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  topMortonCode = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(*v14, v12, n_z);
  if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
    __asan_report_load8(block, v12);
  v15 = (SVONode *)9;
  v16 = (unsigned __int64)std::vector<SVOLayer *>::operator[](&block->svo->layerData, 9uLL);
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    v16 = __asan_report_load8(v16, 9LL);
  topLayerNodes = *(SVOLayer **)v16;
  targetNode = 0LL;
  for ( i = 0; i < std::vector<SVONode *>::size(&topLayerNodes->nodeData); ++i )
  {
    v15 = (SVONode *)i;
    v17 = (unsigned __int64)std::vector<SVONode *>::operator[](&topLayerNodes->nodeData, i);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(v17, i);
    v18 = *(_QWORD *)v17;
    if ( *(_BYTE *)(((unsigned __int64)(v18 + 24) >> 3) + 0x7FFF8000) )
      v18 = __asan_report_load8(v18 + 24, i);
    if ( topMortonCode == *(_QWORD *)(v18 + 24) )
    {
      if ( std::operator==<DynamicNodesInfo>(p_dynamicData, 0LL) )
      {
        v15 = (SVONode *)i;
        v19 = (unsigned __int64)std::vector<SVONode *>::operator[](&topLayerNodes->nodeData, i);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8(v19, i);
        NodeByOriginNode = *(SVONode **)v19;
      }
      else
      {
        v21 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicData);
        v22 = (unsigned __int64)std::vector<SVONode *>::operator[](&topLayerNodes->nodeData, i);
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8(v22, i);
        v15 = *(SVONode **)v22;
        NodeByOriginNode = DynamicNodesInfo::GetNodeByOriginNode(v21, *(SVONode **)v22);
      }
      targetNode = NodeByOriginNode;
      break;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
    __asan_report_load8(block, v15);
  basePos = &block->svo->basePos;
  if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
    __asan_report_load8(basePos, v15);
  if ( *basePos )
  {
LABEL_45:
    if ( !targetNode )
      goto LABEL_126;
    if ( *(_BYTE *)(((unsigned __int64)&targetNode->children >> 3) + 0x7FFF8000) )
      __asan_report_load8(&targetNode->children, v15);
    if ( !targetNode->children )
    {
LABEL_126:
      if ( targetNode )
      {
        if ( *(_BYTE *)(((unsigned __int64)&targetNode->area >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&targetNode->area >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&targetNode->area);
        }
        if ( targetNode->area != Walkable )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
            "FindNodeByPositionGeneral",
            245);
          v57 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v88,
                  (const char (*)[18])"Node At Position ");
          ToTheMoonVector3::ToString[abi:cxx11](&val, pos);
          v58 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, &val);
          v59 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v58,
                  (const char (*)[20])"Not Walkable! Node ");
          NodeLevel = SVODataProcessor::GetNodeLevel(targetNode);
          v60 = common::milog::MiLogStream::operator<<<int,(int *)0>(v59, &NodeLevel);
          v61 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v60, (const char (*)[2])"-");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v61, &targetNode->index);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v88);
        }
      }
      v3 = targetNode;
      goto LABEL_132;
    }
    v23 = std::pow<int,int>(2, --currentLayer);
    layerWidth = v23;
    v24 = std::pow<int,int>(2, currentLayer);
    layerHeight = v24;
    found = 0;
    if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pos);
    }
    *(float *)&v25 = pos->x;
    if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
      __asan_report_load8(basePos, ((unsigned __int8)pos & 7u) + 3);
    v26 = *basePos;
    if ( *(_BYTE *)(((unsigned __int64)*basePos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)*basePos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)*basePos >> 3) + 0x7FFF8000) )
    {
      v25 = __asan_report_load4(*basePos);
    }
    xIndex = (int)std::floor((float)(*(float *)&v25 - v26->x) / layerWidth);
    if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pos->y);
    }
    *(float *)&v27 = pos->y;
    if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
      __asan_report_load8(basePos, (((_BYTE)pos + 4) & 7u) + 3);
    v28 = *basePos;
    v29 = *(_BYTE *)(((unsigned __int64)&(*basePos)->y >> 3) + 0x7FFF8000);
    if ( v29 != 0 && (char)(((*(_BYTE *)basePos + 4) & 7) + 3) >= v29 )
      v27 = __asan_report_load4(&(*basePos)->y);
    yIndex = (int)std::floor((float)(*(float *)&v27 - v28->y) / layerHeight);
    if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pos->z);
    }
    *(float *)&v30 = pos->z;
    if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
      __asan_report_load8(basePos, (((_BYTE)pos + 8) & 7u) + 3);
    v31 = *basePos;
    v32 = *(_BYTE *)(((unsigned __int64)&(*basePos)->z >> 3) + 0x7FFF8000);
    if ( v32 != 0 && (char)(((*(_BYTE *)basePos + 8) & 7) + 3) >= v32 )
      v30 = __asan_report_load4(&(*basePos)->z);
    zIndex = (int)std::floor((float)(*(float *)&v30 - v31->z) / layerWidth);
    v15 = (SVONode *)yIndex;
    targetNodeIndex = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(xIndex, yIndex, zIndex);
    bestDiffY = -100;
    bestDiffXZ = -100;
    bestNode = 0LL;
    for ( i_0 = 0; ; ++i_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&targetNode->childNum >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&targetNode->childNum >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&targetNode->childNum);
      }
      if ( i_0 >= targetNode->childNum )
      {
LABEL_122:
        if ( !found )
        {
          v15 = 0LL;
          if ( std::operator!=<DynamicNodesInfo>(p_dynamicData, 0LL) )
          {
            v56 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicData);
            v15 = bestNode;
            bestNode = DynamicNodesInfo::GetNodeByOriginNode(v56, bestNode);
          }
          targetNode = bestNode;
        }
        goto LABEL_45;
      }
      if ( *(_BYTE *)(((unsigned __int64)&targetNode->children >> 3) + 0x7FFF8000) )
        __asan_report_load8(&targetNode->children, v15);
      v33 = (unsigned __int64)&targetNode->children[i_0];
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
        v33 = __asan_report_load8(&targetNode->children[i_0], v15);
      node = *(SVONode **)v33;
      if ( !node )
      {
        v3 = 0LL;
        goto LABEL_132;
      }
      if ( SVODataProcessor::CheckPosInNode(pos, node, layerWidth, layerHeight) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
          __asan_report_load8(&node->index, node);
        if ( targetNodeIndex != node->index )
          std::operator<<<std::char_traits<char>>(&std::cout, "should never be here!");
        v15 = 0LL;
        if ( std::operator!=<DynamicNodesInfo>(p_dynamicData, 0LL) )
        {
          v34 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicData);
          v15 = node;
          node = DynamicNodesInfo::GetNodeByOriginNode(v34, node);
        }
        targetNode = node;
        found = 1;
        goto LABEL_122;
      }
      if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->index, node);
      MortonCodeCalculator::MortonCodeIndexToCoordinationVector(v4 + 32);
      v15 = 0LL;
      if ( std::operator==<IntVector3>((const std::shared_ptr<IntVector3> *)(v4 + 32), 0LL) )
      {
        v3 = 0LL;
        v35 = 0;
        goto LABEL_120;
      }
      v36 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v37 = *(_BYTE *)(((unsigned __int64)&v36->y >> 3) + 0x7FFF8000);
      LOBYTE(v15) = v37 != 0;
      if ( v37 != 0 && (char)((((_BYTE)v36 + 4) & 7) + 3) >= v37 )
        __asan_report_load4(&v36->y);
      curDiffY = v36->y - yIndex;
      if ( bestDiffY > 0 )
      {
        if ( curDiffY <= 0 )
          goto LABEL_119;
        if ( curDiffY >= bestDiffY )
        {
          if ( curDiffY == bestDiffY )
          {
            v51 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            v52 = v51;
            if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v51);
            }
            v53 = abs32(v52->x - xIndex);
            v54 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            v55 = *(_BYTE *)(((unsigned __int64)&v54->z >> 3) + 0x7FFF8000);
            LOBYTE(v15) = v55 != 0;
            if ( v55 != 0 && (char)((((_BYTE)v54 + 8) & 7) + 3) >= v55 )
              __asan_report_load4(&v54->z);
            curDiffXZ_0 = v53 + abs32(v54->z - zIndex);
            if ( curDiffXZ_0 < bestDiffXZ )
            {
              bestDiffY = curDiffY;
              bestNode = node;
              bestDiffXZ = curDiffXZ_0;
            }
          }
          goto LABEL_119;
        }
        bestDiffY = curDiffY;
        bestNode = node;
        v48 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v49 = v48;
        if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v48);
        }
        v40 = abs32(v49->x - xIndex);
        v41 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v50 = *(_BYTE *)(((unsigned __int64)&v41->z >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v50 != 0;
        if ( v50 != 0 && (char)((((_BYTE)v41 + 8) & 7) + 3) >= v50 )
          __asan_report_load4(&v41->z);
      }
      else
      {
        if ( curDiffY <= bestDiffY )
        {
          if ( curDiffY == bestDiffY )
          {
            v43 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            v44 = v43;
            if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v43);
            }
            v45 = abs32(v44->x - xIndex);
            v46 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            v47 = *(_BYTE *)(((unsigned __int64)&v46->z >> 3) + 0x7FFF8000);
            LOBYTE(v15) = v47 != 0;
            if ( v47 != 0 && (char)((((_BYTE)v46 + 8) & 7) + 3) >= v47 )
              __asan_report_load4(&v46->z);
            curDiffXZ = v45 + abs32(v46->z - zIndex);
            if ( curDiffXZ < bestDiffXZ )
            {
              bestDiffY = curDiffY;
              bestNode = node;
              bestDiffXZ = curDiffXZ;
            }
          }
          goto LABEL_119;
        }
        bestDiffY = curDiffY;
        bestNode = node;
        v38 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v39 = v38;
        if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v38);
        }
        v40 = abs32(v39->x - xIndex);
        v41 = std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IntVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v42 = *(_BYTE *)(((unsigned __int64)&v41->z >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v42 != 0;
        if ( v42 != 0 && (char)((((_BYTE)v41 + 8) & 7) + 3) >= v42 )
          __asan_report_load4(&v41->z);
      }
      bestDiffXZ = v40 + abs32(v41->z - zIndex);
LABEL_119:
      v35 = 1;
LABEL_120:
      std::shared_ptr<IntVector3>::~shared_ptr((std::shared_ptr<IntVector3> *const)(v4 + 32));
      if ( v35 != 1 )
        goto LABEL_132;
    }
  }
  v3 = 0LL;
LABEL_132:
  std::vector<int>::~vector((std::vector<int> *const)(v4 + 64));
LABEL_133:
  result = v3;
  if ( v90 == (char *)v4 )
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

// Line 251: range 000000000CBE179E-000000000CBE1829
SVONode *__cdecl SVODataProcessor::FindNodeByPosition(
        const SVOBlock *block,
        const ToTheMoonVector3 *pos,
        const std::shared_ptr<DynamicNodesInfo> *p_dynamicData)
{
  SVONode *NodeByPositionByDir; // rbx
  std::shared_ptr<DynamicNodesInfo> v5; // [rsp+20h] [rbp-20h] BYREF

  if ( !pos )
    return 0LL;
  std::shared_ptr<DynamicNodesInfo>::shared_ptr(&v5, p_dynamicData);
  NodeByPositionByDir = SVODataProcessor::FindNodeByPositionByDir(block, pos, &v5, Up_0, 3);
  std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&v5);
  return NodeByPositionByDir;
};

// Line 263: range 000000000CBE182A-000000000CBE1D79
SVONode *__cdecl SVODataProcessor::FindNodeByPosition(
        const SVOWorld *world,
        const ToTheMoonVector3 *pos,
        const std::shared_ptr<DynamicPlayerData> *p_dynamicData)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  SVONode *NodeByPosition; // r14
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v7; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v12; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v13; // rax
  IntPair *v14; // rax
  std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *v15; // rcx
  SVONode *result; // rax
  float blockSize; // [rsp+2Ch] [rbp-114h]
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+30h] [rbp-110h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+38h] [rbp-108h] BYREF
  std::shared_ptr<DynamicNodesInfo> v21; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 5 x:273 48 4 5 z:274 64 8 12 intIndex:276 96 16 9 block:282 128 16 20 dynamicBlockData:283";
  *(_QWORD *)(v3 + 16) = SVODataProcessor::FindNodeByPosition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( world && pos )
  {
    if ( *(_BYTE *)(((unsigned __int64)&world->blockSize >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)world + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world->blockSize >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&world->blockSize);
    }
    blockSize = world->blockSize;
    if ( blockSize == 0.0 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
        "FindNodeByPosition",
        270);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v22, (const char (*)[16])"block size is 0");
      common::milog::MiLogStream::~MiLogStream(&v22);
      NodeByPosition = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pos);
      }
      *(_DWORD *)(v3 + 32) = (int)std::floor(pos->x / blockSize);
      if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pos->z);
      }
      *(_DWORD *)(v3 + 48) = (int)std::floor(pos->z / blockSize);
      IntPair::IntPair((IntPair *const)(v3 + 64), *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
      v7 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)world);
      __y._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v7)._M_node;
      v8 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)world);
      __x._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(
                      v8,
                      (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v3 + 64))._M_node;
      if ( std::operator==(&__x, &__y) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
          "FindNodeByPosition",
          279);
        v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v22,
               (const char (*)[43])"[ToTheMoon] Block data not found for index");
        v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        NodeByPosition = 0LL;
      }
      else
      {
        v12 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)world);
        v13 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](
                v12,
                (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v3 + 64));
        std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)(v3 + 96), v13);
        if ( std::operator==<DynamicPlayerData>(p_dynamicData, 0LL) )
        {
          std::shared_ptr<DynamicNodesInfo>::shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)(v3 + 128), 0LL);
        }
        else
        {
          v14 = (IntPair *)std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicData);
          DynamicPlayerData::GetBlockNodesInfo((const DynamicPlayerData *const)(v3 + 128), v14);
        }
        std::shared_ptr<DynamicNodesInfo>::shared_ptr(&v21, (const std::shared_ptr<DynamicNodesInfo> *)(v3 + 128));
        v15 = std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 96));
        NodeByPosition = SVODataProcessor::FindNodeByPosition(v15, pos, &v21);
        std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&v21);
        std::shared_ptr<DynamicNodesInfo>::~shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)(v3 + 128));
        std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v3 + 96));
      }
    }
  }
  else
  {
    NodeByPosition = 0LL;
  }
  result = NodeByPosition;
  if ( v23 == (char *)v3 )
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

// Line 288: range 000000000CBE1D7A-000000000CBE1E66
// local variable allocation has failed, the output may be wrong!
SVONode *__cdecl SVODataProcessor::FindNodeByLayerAndIndex(const SVOBlock *block, int layer, int index)
{
  char v3; // al
  std::vector<SVOLayer*>::reference v5; // rax
  SVOLayer **layerData; // [rsp+18h] [rbp-8h]

  if ( !block )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
    __asan_report_load8(block, *(_QWORD *)&layer);
  if ( block->svo && std::vector<SVOLayer *>::size(&block->svo->layerData) > layer )
    v3 = 0;
  else
LABEL_6:
    v3 = 1;
  if ( v3 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
    __asan_report_load8(block, *(_QWORD *)&layer);
  v5 = std::vector<SVOLayer *>::at(&block->svo->layerData, layer);
  layerData = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v5, layer);
  return SVODataProcessor::FindLayerNodeBinarySerach(*layerData, index);
};

// Line 296: range 000000000CBE1E68-000000000CBE1F96
SVONode *__cdecl SVODataProcessor::FindLayerNodeBinarySerach(const SVOLayer *layerData, int index)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  int sta; // [rsp+18h] [rbp-18h]
  int end; // [rsp+1Ch] [rbp-14h]
  int mid; // [rsp+20h] [rbp-10h]
  int curIndex; // [rsp+24h] [rbp-Ch]
  std::vector<SVONode*> *nodeData; // [rsp+28h] [rbp-8h]

  if ( !layerData )
    return 0LL;
  nodeData = &layerData->nodeData;
  sta = 0;
  end = std::vector<SVONode *>::size(&layerData->nodeData);
  while ( 1 )
  {
    if ( sta > end )
      return 0LL;
    mid = (sta + end) / 2;
    v3 = (unsigned __int64)std::vector<SVONode *>::at(nodeData, mid);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v3, mid);
    v4 = *(_QWORD *)v3;
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 24) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4 + 24, mid);
    curIndex = *(_QWORD *)(v4 + 24);
    if ( curIndex == index )
      break;
    if ( curIndex <= index )
      sta = mid + 1;
    else
      end = mid - 1;
  }
  v5 = (unsigned __int64)std::vector<SVONode *>::at(nodeData, mid);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5, mid);
  return *(SVONode **)v5;
};

// Line 314: range 000000000CBE1F98-000000000CBE2350
void __cdecl SVODataProcessor::GetLayerPosIndexByPos(
        const ToTheMoonVector3 *pos,
        const ToTheMoonVector3 *basePos,
        int level,
        std::vector<int> *layerPosIndex)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  double v6; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm0_8
  std::allocator<int> __a; // [rsp+2Fh] [rbp-81h] BYREF
  float layerWidth; // [rsp+30h] [rbp-80h]
  float layerHeight; // [rsp+34h] [rbp-7Ch]
  int x_index; // [rsp+38h] [rbp-78h]
  int y_index; // [rsp+3Ch] [rbp-74h]
  int z_index; // [rsp+40h] [rbp-70h]
  std::initializer_list<int> __l; // [rsp+44h] [rbp-6Ch] BYREF
  common::milog::MiLogStream v18; // [rsp+70h] [rbp-40h] BYREF

  if ( pos && basePos )
  {
    v4 = std::pow<int,int>(2, level);
    layerWidth = v4;
    v5 = std::pow<int,int>(2, level);
    layerHeight = v5;
    if ( v5 == 0.0 || layerWidth == 0.0 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
        "GetLayerPosIndexByPos",
        324);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v18,
        (const char (*)[30])"layer width or height is zero");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pos);
      }
      *(float *)&v6 = pos->x;
      if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)basePos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
      {
        v6 = __asan_report_load4(basePos);
      }
      x_index = (int)std::floor((float)(*(float *)&v6 - basePos->x) / layerWidth);
      if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pos->y);
      }
      *(float *)&v7 = pos->y;
      if ( *(_BYTE *)(((unsigned __int64)&basePos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)basePos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&basePos->y >> 3) + 0x7FFF8000) )
      {
        v7 = __asan_report_load4(&basePos->y);
      }
      y_index = (int)std::floor((float)(*(float *)&v7 - basePos->y) / layerHeight);
      if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pos->z);
      }
      *(float *)&v8 = pos->z;
      if ( *(_BYTE *)(((unsigned __int64)&basePos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)basePos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&basePos->z >> 3) + 0x7FFF8000) )
      {
        v8 = __asan_report_load4(&basePos->z);
      }
      z_index = (int)std::floor((float)(*(float *)&v8 - basePos->z) / layerWidth);
      __l._M_array = (std::initializer_list<int>::iterator)__PAIR64__(y_index, x_index);
      LODWORD(__l._M_len) = z_index;
      std::allocator<int>::allocator(&__a);
      std::vector<int>::vector(
        (std::vector<int> *const)((char *)&__l._M_len + 4),
        (std::initializer_list<int>)__PAIR128__(3LL, &__l),
        &__a);
      std::vector<int>::operator=(layerPosIndex, (std::vector<int> *)((char *)&__l._M_len + 4));
      std::vector<int>::~vector((std::vector<int> *const)((char *)&__l._M_len + 4));
      std::allocator<int>::~allocator(&__a);
    }
  }
};

// Line 336: range 000000000CBE2352-000000000CBE23FF
int __cdecl SVODataProcessor::GetNodeLevel(const SVONode *node)
{
  __int64 v1; // rsi
  SVOLayer *layer; // rax

  if ( !node )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->layer, v1);
  if ( !node->layer )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->layer, v1);
  layer = node->layer;
  if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(node->layer);
  }
  return layer->level;
};

// Line 350: range 000000000CBE2400-000000000CBE2681
bool __cdecl SVODataProcessor::CheckPosInNode(
        const ToTheMoonVector3 *pos,
        const SVONode *node,
        float layerWidth,
        float layerHeight)
{
  double v5; // xmm0_8
  double v6; // xmm0_8
  double v7; // xmm0_8
  ToTheMoonVector3 *referPos; // [rsp+28h] [rbp-8h]

  if ( !pos || !node )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->referPos, node);
  referPos = node->referPos;
  if ( !referPos )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pos);
  }
  *(float *)&v5 = pos->x;
  if ( *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)referPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(referPos);
  }
  if ( *(float *)&v5 < referPos->x || (float)(referPos->x + layerWidth) < pos->x )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->y);
  }
  *(float *)&v6 = pos->y;
  if ( *(_BYTE *)(((unsigned __int64)&referPos->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)referPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&referPos->y >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&referPos->y);
  }
  if ( *(float *)&v6 < referPos->y || (float)(referPos->y + layerHeight) < pos->y )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->z);
  }
  *(float *)&v7 = pos->z;
  if ( *(_BYTE *)(((unsigned __int64)&referPos->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)referPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&referPos->z >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load4(&referPos->z);
  }
  return *(float *)&v7 >= referPos->z && (float)(referPos->z + layerWidth) >= pos->z;
};

// Line 363: range 000000000CBE2682-000000000CBE2A48
bool __cdecl SVODataProcessor::CheckNodeInNeighborEdge(
        const SVONode *node,
        const int *totalIndex,
        Const::Direction toDir)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r14
  std::vector<int>::reference v7; // rax
  int *v8; // rdx
  int v9; // esi
  const int *v10; // rcx
  std::vector<int>::reference v11; // rax
  _DWORD *v12; // rdx
  std::vector<int>::reference v13; // rax
  _DWORD *v14; // rdx
  std::vector<int>::reference v15; // rax
  int *v16; // rdx
  int v17; // ecx
  bool result; // al
  char v21[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 12 posIndex:367";
  *(_QWORD *)(v3 + 16) = SVODataProcessor::CheckNodeInNeighborEdge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( !node )
  {
    v6 = 0;
    goto LABEL_32;
  }
  std::vector<int>::vector((std::vector<int> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->index, totalIndex);
  MortonCodeCalculator::MortonCodeIndexToCoordination(node->index, (std::vector<int> *)(v3 + 32));
  if ( toDir == Right )
  {
    v15 = std::vector<int>::operator[]((std::vector<int> *const)(v3 + 32), 0LL);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v17 = *v16;
    if ( *(_BYTE *)(((unsigned __int64)totalIndex >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)totalIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)totalIndex >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(totalIndex);
    }
    v6 = v17 == *totalIndex - 1;
    goto LABEL_31;
  }
  if ( toDir > Right )
    goto LABEL_30;
  switch ( toDir )
  {
    case Left:
      v13 = std::vector<int>::operator[]((std::vector<int> *const)(v3 + 32), 0LL);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v6 = *v14 == 0;
      break;
    case Front:
      v7 = std::vector<int>::operator[]((std::vector<int> *const)(v3 + 32), 2uLL);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = totalIndex + 2;
      if ( *(_BYTE *)(((unsigned __int64)(totalIndex + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)totalIndex + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(totalIndex + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(totalIndex + 2);
      }
      v6 = v9 == *v10 - 1;
      break;
    case Back:
      v11 = std::vector<int>::operator[]((std::vector<int> *const)(v3 + 32), 2uLL);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v6 = *v12 == 0;
      break;
    default:
LABEL_30:
      v6 = 0;
      break;
  }
LABEL_31:
  std::vector<int>::~vector((std::vector<int> *const)(v3 + 32));
LABEL_32:
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 386: range 000000000CBE2A4A-000000000CBE2C4F
void __cdecl SVODataProcessor::GetCenterPos(const SVONode *node, ToTheMoonVector3 *center)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  ToTheMoonVector3 *referPos; // rdx
  float v5; // xmm2_4
  ToTheMoonVector3 *v6; // rdx
  float v7; // xmm1_4
  ToTheMoonVector3 *v8; // rdx
  unsigned int level; // [rsp+18h] [rbp-18h]
  float layerHalfWidth; // [rsp+1Ch] [rbp-14h]
  float layerHalfHeight; // [rsp+20h] [rbp-10h]
  ToTheMoonVector3 v12; // [rsp+24h] [rbp-Ch] BYREF

  if ( node )
  {
    level = SVODataProcessor::GetNodeLevel(node);
    v2 = std::pow<int,int>(2, level) / 2.0;
    layerHalfWidth = v2;
    v3 = std::pow<int,int>(2, level) / 2.0;
    layerHalfHeight = v3;
    if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->referPos, level);
    referPos = node->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&referPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)referPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&referPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&referPos->z);
    }
    v5 = referPos->z + layerHalfWidth;
    v6 = node->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&v6->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v6->y);
    }
    v7 = v6->y + layerHalfHeight;
    v8 = node->referPos;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(node->referPos);
    }
    ToTheMoonVector3::ToTheMoonVector3(&v12, v8->x + layerHalfWidth, v7, v5);
    if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(center, 12LL);
    }
    *center = v12;
  }
};

// Line 401: range 000000000CBE2C50-000000000CBE2E0B
std::shared_ptr<ToTheMoonVector3> __cdecl SVODataProcessor::GetEndPos(const SVONode *node)
{
  const SVONode *v1; // rsi
  std::shared_ptr<ToTheMoonVector3> result; // rax
  float v3; // xmm0_4
  __int64 v4; // rsi
  float *v5; // r8
  float *v6; // r9
  float v7; // xmm0_4
  ToTheMoonVector3 *referPos; // rdx
  ToTheMoonVector3 *v9; // rdx
  ToTheMoonVector3 *v10; // rdx
  char v11; // cl
  const SVONode *nodea; // [rsp+0h] [rbp-30h]
  float v13; // [rsp+18h] [rbp-18h] BYREF
  float v14; // [rsp+1Ch] [rbp-14h] BYREF
  float __args_0; // [rsp+20h] [rbp-10h] BYREF
  int level; // [rsp+24h] [rbp-Ch]
  float layerWidth; // [rsp+28h] [rbp-8h]
  float layerHeight; // [rsp+2Ch] [rbp-4h]

  nodea = v1;
  if ( v1 )
  {
    level = SVODataProcessor::GetNodeLevel(v1);
    v3 = std::pow<int,int>(2, level);
    layerWidth = v3;
    v4 = (unsigned int)level;
    v7 = std::pow<int,int>(2, level);
    layerHeight = v7;
    if ( *(_BYTE *)(((unsigned __int64)&nodea->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&nodea->referPos, (unsigned int)level);
    referPos = nodea->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&referPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)referPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&referPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&referPos->z);
    }
    __args_0 = referPos->z + layerWidth;
    v9 = nodea->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&v9->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v9->y);
    }
    v14 = v9->y + layerHeight;
    v10 = nodea->referPos;
    v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    LOBYTE(v4) = v11 != 0;
    if ( v11 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v11 )
      __asan_report_load4(nodea->referPos);
    v13 = v10->x + layerWidth;
    if ( *(_WORD *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
      __asan_report_store16(node, v4);
    result = std::make_shared<ToTheMoonVector3,float,float,float>((float *)node, &v13, &v14, &__args_0, v5, v6);
  }
  else
  {
    std::shared_ptr<ToTheMoonVector3>::shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)node, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::element_type *)node;
  return result;
};

// Line 414: range 000000000CBE2E0C-000000000CBE2E54
ToTheMoonVector3 *__cdecl SVODataProcessor::GetStartPos(const SVONode *node)
{
  __int64 v1; // rsi

  if ( !node )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->referPos, v1);
  return node->referPos;
};

// Line 422: range 000000000CBE2E56-000000000CBE305C
IntVector3 __cdecl SVODataProcessor::ChildrenReferIndex(int childrenIndex)
{
  __int64 v1; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v3; // rbx
  IntVector3 v5; // [rsp+28h] [rbp-28h] BYREF
  IntVector3 v6; // [rsp+34h] [rbp-1Ch]

  switch ( childrenIndex )
  {
    case 0:
      IntVector3::IntVector3(&v5, -1, -1, -1);
      v6 = v5;
      break;
    case 1:
      IntVector3::IntVector3(&v5, 1, -1, -1);
      v6 = v5;
      break;
    case 2:
      IntVector3::IntVector3(&v5, -1, 1, -1);
      v6 = v5;
      break;
    case 3:
      IntVector3::IntVector3(&v5, 1, 1, -1);
      v6 = v5;
      break;
    case 4:
      IntVector3::IntVector3(&v5, -1, -1, 1);
      v6 = v5;
      break;
    case 5:
      IntVector3::IntVector3(&v5, 1, -1, 1);
      v6 = v5;
      break;
    case 6:
      IntVector3::IntVector3(&v5, -1, 1, 1);
      v6 = v5;
      break;
    case 7:
      IntVector3::IntVector3(&v5, 1, 1, 1);
      v6 = v5;
      break;
    default:
      v1 = 8LL;
      exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
      v3 = (_QWORD *)exception;
      if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      {
        v1 = exception;
        __asan_report_store8();
      }
      *v3 = "wrong children index";
      __asan_handle_no_return(v1);
      _cxa_throw(v3, (struct type_info *)&`typeinfo for'char const*, 0LL);
  }
  return v6;
};

// Line 447: range 000000000CBE305E-000000000CBE30AB
IntVector3 __cdecl SVODataProcessor::VerticePosIndex(int index)
{
  IntVector3 v2; // [rsp+28h] [rbp-18h] BYREF

  IntVector3::IntVector3(&v2, index & 1, (index >> 1) & 1, (index >> 2) & 1);
  return v2;
};

// Line 456: range 000000000CBE30AC-000000000CBE3473
// local variable allocation has failed, the output may be wrong!
void __cdecl SVODataProcessor::GetVerticePosition(const SVONode *node, int verticeIndex, ToTheMoonVector3 *res)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  SVOLayer *layer; // rax
  __int64 level; // rsi
  float v8; // xmm0_4
  ToTheMoonVector3 *referPos; // rdx
  float v10; // xmm0_4
  ToTheMoonVector3 *v11; // rdx
  float v12; // xmm0_4
  ToTheMoonVector3 *v13; // rdx
  float v14; // xmm0_4
  float layerWidth; // [rsp+2Ch] [rbp-64h]
  char v17[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 19 verticePosIndex:459";
  *(_QWORD *)(v3 + 16) = SVODataProcessor::GetVerticePosition;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  if ( node )
  {
    if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->referPos, *(_QWORD *)&verticeIndex);
    if ( node->referPos )
    {
      if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->layer, *(_QWORD *)&verticeIndex);
      if ( node->layer )
      {
        *(IntVector3 *)(v3 + 32) = SVODataProcessor::VerticePosIndex(verticeIndex);
        if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
          __asan_report_load8(&node->layer, *(_QWORD *)&verticeIndex);
        layer = node->layer;
        if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(node->layer);
        }
        level = (unsigned int)layer->level;
        v8 = std::pow<int,int>(2, level);
        layerWidth = v8;
        if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
          __asan_report_load8(&node->referPos, level);
        referPos = node->referPos;
        if ( *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)referPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(node->referPos);
        }
        v10 = (float)((float)*(int *)(v3 + 32) * layerWidth) + referPos->x;
        if ( *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)res & 7) + 3) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(res);
        }
        res->x = v10;
        v11 = node->referPos;
        if ( *(_BYTE *)(((unsigned __int64)&v11->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v11->y);
        }
        v12 = (float)((float)*(int *)(v3 + 36) * layerWidth) + v11->y;
        if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)res + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&res->y);
        }
        res->y = v12;
        v13 = node->referPos;
        if ( *(_BYTE *)(((unsigned __int64)&v13->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v13 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v13->z);
        }
        v14 = (float)((float)*(int *)(v3 + 40) * layerWidth) + v13->z;
        if ( *(_BYTE *)(((unsigned __int64)&res->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)res + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&res->z);
        }
        res->z = v14;
      }
    }
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 467: range 000000000CBE3474-000000000CBE3851
// local variable allocation has failed, the output may be wrong!
void __cdecl SVODataProcessor::GetVerticeMiddlePosition(
        const SVONode *node,
        int verticeIndex1,
        int verticeIndex2,
        int level,
        ToTheMoonVector3 *res)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  float v8; // xmm0_4
  ToTheMoonVector3 *referPos; // rdx
  float v10; // xmm0_4
  ToTheMoonVector3 *v11; // rdx
  float v12; // xmm0_4
  ToTheMoonVector3 *v13; // rdx
  float v14; // xmm0_4
  float layerWidth; // [rsp+2Ch] [rbp-84h]
  char v19[128]; // [rsp+30h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 12 6 v1:470 64 12 6 v2:471";
  *(_QWORD *)(v5 + 16) = SVODataProcessor::GetVerticeMiddlePosition;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -202177536;
  if ( node )
  {
    if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->referPos, *(_QWORD *)&verticeIndex1);
    if ( node->referPos )
    {
      *(IntVector3 *)(v5 + 32) = SVODataProcessor::VerticePosIndex(verticeIndex1);
      *(IntVector3 *)(v5 + 64) = SVODataProcessor::VerticePosIndex(verticeIndex2);
      v8 = std::pow<int,int>(2, level);
      layerWidth = v8;
      if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->referPos, (unsigned int)level);
      referPos = node->referPos;
      if ( *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)referPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(node->referPos);
      }
      v10 = (float)((float)((float)(*(_DWORD *)(v5 + 32) + *(_DWORD *)(v5 + 64)) / 2.0) * layerWidth) + referPos->x;
      if ( *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)res & 7) + 3) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(res);
      }
      res->x = v10;
      v11 = node->referPos;
      if ( *(_BYTE *)(((unsigned __int64)&v11->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&v11->y);
      }
      v12 = (float)((float)((float)(*(_DWORD *)(v5 + 36) + *(_DWORD *)(v5 + 68)) / 2.0) * layerWidth) + v11->y;
      if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)res + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&res->y);
      }
      res->y = v12;
      v13 = node->referPos;
      if ( *(_BYTE *)(((unsigned __int64)&v13->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v13 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&v13->z);
      }
      v14 = (float)((float)((float)(*(_DWORD *)(v5 + 40) + *(_DWORD *)(v5 + 72)) / 2.0) * layerWidth) + v13->z;
      if ( *(_BYTE *)(((unsigned __int64)&res->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)res + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&res->z);
      }
      res->z = v14;
    }
  }
  if ( v19 == (char *)v5 )
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

// Line 479: range 000000000CBE3852-000000000CBE3911
float __cdecl SVODataProcessor::GetNodeHalfSize(const SVONode *node)
{
  __int64 v1; // rsi
  SVOLayer *layer; // rax

  if ( !node )
    return 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->layer, v1);
  if ( !node->layer )
    return 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->layer, v1);
  layer = node->layer;
  if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(node->layer);
  }
  return std::pow<int,int>(2, layer->level - 1);
};

// Line 486: range 000000000CBE3912-000000000CBE3B22
// local variable allocation has failed, the output may be wrong!
ToTheMoonVector3 *__cdecl SVODataProcessor::GetChildReferPos(const SVONode *parent, int childIndex)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  ToTheMoonVector3 *v6; // r14
  ToTheMoonVector3 *result; // rax
  ToTheMoonVector3 v8; // [rsp+14h] [rbp-9Ch] BYREF
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 12 posIndex:490 64 12 12 finalPos:491";
  *(_QWORD *)(v3 + 16) = SVODataProcessor::GetChildReferPos;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -202177536;
  if ( parent )
  {
    *(float *)v2.m128i_i32 = SVODataProcessor::GetNodeHalfSize(parent);
    *(IntVector3 *)(v3 + 32) = SVODataProcessor::ChildrenPosIndex(childIndex);
    v8 = IntVector3::Multiple((const IntVector3 *const)(v3 + 32), COERCE_FLOAT(_mm_cvtsi128_si32(v2)));
    if ( *(_BYTE *)(((unsigned __int64)&parent->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&parent->referPos, *(_QWORD *)&childIndex);
    *(ToTheMoonVector3 *)(v3 + 64) = ToTheMoonVector3::Add(&v8, parent->referPos);
    v6 = (ToTheMoonVector3 *)operator new(0xCuLL);
    ToTheMoonVector3::ToTheMoonVector3(v6, *(float *)(v3 + 64), *(float *)(v3 + 68), *(float *)(v3 + 72));
  }
  else
  {
    v6 = 0LL;
  }
  result = v6;
  if ( v9 == (char *)v3 )
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

// Line 497: range 000000000CBE3B24-000000000CBE3BA7
int __cdecl SVODataProcessor::GetNodeIndexInNeighbor(int nodeNeighborIndex, Const::NeighborType neighborType)
{
  if ( neighborType == Diagonal )
    return 7 - nodeNeighborIndex;
  if ( neighborType > Diagonal )
    return -1;
  if ( neighborType == Normal_1 )
    return (nodeNeighborIndex + 3) % 6;
  if ( neighborType == Planar )
    return nodeNeighborIndex + 3 - 2 * (nodeNeighborIndex % 4);
  else
    return -1;
};

// Line 510: range 000000000CBE3BA8-000000000CBE3C63
bool __cdecl SVODataProcessor::CheckNodeInBorder(int nodeX, int nodeZ, const SVOStructure *svo)
{
  int *totalIndex; // rdx
  int maxX; // [rsp+18h] [rbp-8h]

  totalIndex = svo->totalIndex;
  if ( *(_BYTE *)(((unsigned __int64)totalIndex >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)totalIndex >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(totalIndex);
  }
  maxX = svo->totalIndex[0] - 1;
  if ( *(_BYTE *)(((unsigned __int64)&svo->totalIndex[2] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&svo->totalIndex[2] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&svo->totalIndex[2]);
  }
  return !nodeX || !nodeZ || nodeX == maxX || nodeZ == svo->totalIndex[2] - 1;
};

// Line 518: range 000000000CBE3C64-000000000CBE3D3E
int __cdecl SVODataProcessor::GetNodeInBorderIndicator(int nodeX, int nodeZ, const SVOStructure *svo)
{
  int res; // [rsp+14h] [rbp-Ch]
  int maxX; // [rsp+18h] [rbp-8h]

  if ( !svo )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)svo->totalIndex >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)svo->totalIndex >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(svo->totalIndex);
  }
  maxX = svo->totalIndex[0] - 1;
  if ( *(_BYTE *)(((unsigned __int64)&svo->totalIndex[2] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&svo->totalIndex[2] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&svo->totalIndex[2]);
  }
  res = nodeX == 0;
  if ( !nodeZ )
    res |= 2u;
  if ( nodeX == maxX )
    res |= 4u;
  if ( nodeZ == svo->totalIndex[2] - 1 )
    return res | 8;
  return res;
};

// Line 535: range 000000000CBE3D40-000000000CBE752B
// local variable allocation has failed, the output may be wrong!
bool __cdecl SVODataProcessor::GenerateBorderNodeBlockMap(
        std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>> *resMap,
        int nodeX,
        int nodeY,
        int nodeZ,
        const SVOBlock *block)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  _DWORD *v7; // r13
  bool result; // al
  std::map<int,std::shared_ptr<IntPair>> *v9; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v11; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *j; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v13; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *k; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v15; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *m; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v17; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *n; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v19; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *ii; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v21; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *nn; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v23; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i1; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v25; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i2; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v27; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i6; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v29; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i7; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v31; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i8; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v33; // rax
  std::map<int,std::shared_ptr<IntPair>> *jj; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v35; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *kk; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v37; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *mm; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v39; // rax
  std::map<int,std::shared_ptr<IntPair>> *i12; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v41; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i13; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v43; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i14; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v45; // rax
  std::map<int,std::shared_ptr<IntPair>> *i3; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v47; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i4; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v49; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i5; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v51; // rax
  std::map<int,std::shared_ptr<IntPair>> *i9; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v53; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i10; // rbx
  std::map<int,std::shared_ptr<IntPair>> *v55; // rax
  std::pair<int const,std::shared_ptr<IntPair> > *i11; // rbx
  common::milog::MiLogStream *v57; // rax
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > __l; // [rsp+0h] [rbp-4E0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v59; // [rsp+10h] [rbp-4D0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v60; // [rsp+20h] [rbp-4C0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v61; // [rsp+30h] [rbp-4B0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v62; // [rsp+40h] [rbp-4A0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v63; // [rsp+50h] [rbp-490h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v64; // [rsp+60h] [rbp-480h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v65; // [rsp+70h] [rbp-470h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v66; // [rsp+80h] [rbp-460h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v67; // [rsp+90h] [rbp-450h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v68; // [rsp+A0h] [rbp-440h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v69; // [rsp+B0h] [rbp-430h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v70; // [rsp+C0h] [rbp-420h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v71; // [rsp+D0h] [rbp-410h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v72; // [rsp+E0h] [rbp-400h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v73; // [rsp+F0h] [rbp-3F0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v74; // [rsp+100h] [rbp-3E0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v75; // [rsp+110h] [rbp-3D0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v76; // [rsp+120h] [rbp-3C0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v77; // [rsp+130h] [rbp-3B0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v78; // [rsp+140h] [rbp-3A0h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v79; // [rsp+150h] [rbp-390h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v80; // [rsp+160h] [rbp-380h]
  std::initializer_list<std::pair<int const,std::shared_ptr<IntPair> > > v81; // [rsp+170h] [rbp-370h]
  std::less<int> __comp; // [rsp+1AEh] [rbp-332h] BYREF
  std::allocator<std::pair<int const,std::shared_ptr<IntPair> > > __a; // [rsp+1AFh] [rbp-331h] BYREF
  std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::key_type v86; // [rsp+1B0h] [rbp-330h] BYREF
  std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::key_type v87; // [rsp+1B4h] [rbp-32Ch] BYREF
  int v88; // [rsp+1B8h] [rbp-328h] BYREF
  std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::key_type v89; // [rsp+1BCh] [rbp-324h] BYREF
  int __x; // [rsp+1C0h] [rbp-320h] BYREF
  std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::key_type v91; // [rsp+1C4h] [rbp-31Ch] BYREF
  std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::key_type __k; // [rsp+1C8h] [rbp-318h] BYREF
  int __args_1; // [rsp+1CCh] [rbp-314h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v94; // [rsp+1D0h] [rbp-310h] BYREF
  __int64 v95; // [rsp+1E8h] [rbp-2F8h] BYREF
  common::milog::MiLogStream v96; // [rsp+1F0h] [rbp-2F0h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v97; // [rsp+210h] [rbp-2D0h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v98; // [rsp+228h] [rbp-2B8h] BYREF
  std::map<int,std::shared_ptr<IntPair>> v99; // [rsp+240h] [rbp-2A0h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v100; // [rsp+270h] [rbp-270h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v101; // [rsp+288h] [rbp-258h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v102; // [rsp+2A0h] [rbp-240h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v103; // [rsp+2B8h] [rbp-228h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v104; // [rsp+2D0h] [rbp-210h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v105; // [rsp+2E8h] [rbp-1F8h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v106; // [rsp+300h] [rbp-1E0h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v107; // [rsp+318h] [rbp-1C8h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v108; // [rsp+330h] [rbp-1B0h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v109; // [rsp+348h] [rbp-198h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v110; // [rsp+360h] [rbp-180h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v111; // [rsp+378h] [rbp-168h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v112; // [rsp+390h] [rbp-150h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v113; // [rsp+3A8h] [rbp-138h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v114; // [rsp+3C0h] [rbp-120h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v115; // [rsp+3D8h] [rbp-108h] BYREF
  std::pair<int const,std::shared_ptr<IntPair> > v116; // [rsp+3F0h] [rbp-F0h] BYREF
  __int64 v117; // [rsp+408h] [rbp-D8h] BYREF
  char v118[208]; // [rsp+410h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v118;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 13 indicator:536 64 16 7 ipX:607 96 16 7 ipZ:608 128 16 8 ipXZ:609";
  *(_QWORD *)(v5 + 16) = SVODataProcessor::GenerateBorderNodeBlockMap;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
    __asan_report_load8(block, *(_QWORD *)&nodeX);
  *(_DWORD *)(v5 + 48) = SVODataProcessor::GetNodeInBorderIndicator(nodeX, nodeZ, block->svo);
  switch ( *(_DWORD *)(v5 + 48) )
  {
    case 0:
      result = 0;
      goto LABEL_114;
    case 1:
      if ( *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(block->blockIndex);
      }
      __args_1 = block->blockIndex[0] - 1;
      std::make_shared<IntPair,int,int const&>((int *)(v5 + 128), &__args_1, &block->blockIndex[1], &__args_1);
      __args_1 = 0;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v94,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __l._M_array = &v94;
      __l._M_len = 1LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, __l, &__comp, &__a);
      __k = Normal_1;
      v9 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &__k);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v9, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i = (std::pair<int const,std::shared_ptr<IntPair> > *)&v95;
            i != &v94;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair(i) )
      {
        --i;
      }
      __x = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v100,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v101,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 8;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v102,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __args_1 = 9;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v103,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v59._M_array = &v100;
      v59._M_len = 4LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v59, &__comp, &__a);
      v89 = Planar;
      v11 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v89);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v11, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( j = &v104; j != &v100; std::pair<int const,std::shared_ptr<IntPair>>::~pair(j) )
        --j;
      __x = 0;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v100,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v101,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = Diagonal;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v102,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __args_1 = 3;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v103,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v60._M_array = &v100;
      v60._M_len = 4LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v60, &__comp, &__a);
      v89 = Diagonal;
      v13 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v89);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v13, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( k = &v104; k != &v100; std::pair<int const,std::shared_ptr<IntPair>>::~pair(k) )
        --k;
      goto LABEL_55;
    case 2:
      if ( *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&block->blockIndex[1]);
      }
      __args_1 = block->blockIndex[1] - 1;
      std::make_shared<IntPair,int const&,int>((const int *)(v5 + 128), block->blockIndex, &__args_1, block->blockIndex);
      __args_1 = 2;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v94,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v61._M_array = &v94;
      v61._M_len = 1LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v61, &__comp, &__a);
      __k = Normal_1;
      v15 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &__k);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v15, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( m = (std::pair<int const,std::shared_ptr<IntPair> > *)&v95;
            m != &v94;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair(m) )
      {
        --m;
      }
      __x = 0;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v100,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Diagonal;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v101,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v102,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __args_1 = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v103,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v62._M_array = &v100;
      v62._M_len = 4LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v62, &__comp, &__a);
      v89 = Planar;
      v17 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v89);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v17, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( n = &v104; n != &v100; std::pair<int const,std::shared_ptr<IntPair>>::~pair(n) )
        --n;
      __x = 0;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v100,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Diagonal;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v101,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v102,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __args_1 = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v103,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v63._M_array = &v100;
      v63._M_len = 4LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v63, &__comp, &__a);
      v89 = Diagonal;
      v19 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v89);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v19, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( ii = &v104; ii != &v100; std::pair<int const,std::shared_ptr<IntPair>>::~pair(ii) )
        --ii;
      goto LABEL_55;
    case 3:
      if ( *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(block->blockIndex);
      }
      __args_1 = block->blockIndex[0] - 1;
      std::make_shared<IntPair,int,int const&>((int *)(v5 + 64), &__args_1, &block->blockIndex[1], &__args_1);
      if ( *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&block->blockIndex[1]);
      }
      __args_1 = block->blockIndex[1] - 1;
      std::make_shared<IntPair,int const&,int>((const int *)(v5 + 96), block->blockIndex, &__args_1, block->blockIndex);
      __args_1 = block->blockIndex[1] - 1;
      __k = block->blockIndex[0] - 1;
      std::make_shared<IntPair,int,int>((int *)(v5 + 128), (int *)&__k, &__args_1, (int *)&__k);
      __k = Normal_1;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v97,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __args_1 = 2;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v98,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v70._M_array = &v97;
      v70._M_len = 2LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v70, &__comp, &__a);
      v91 = Normal_1;
      v33 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v91);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v33, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( jj = &v99;
            jj != (std::map<int,std::shared_ptr<IntPair>> *)&v97;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair((std::pair<int const,std::shared_ptr<IntPair> > *const)jj) )
      {
        jj = (std::map<int,std::shared_ptr<IntPair>> *)((char *)jj - 24);
      }
      v87 = Normal_1;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v110,
        (int *)&v87,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v88 = 2;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v111,
        &v88,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v89 = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v112,
        (int *)&v89,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __x = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v113,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v91 = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v114,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      __k = 8;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v115,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __args_1 = 9;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v116,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v71._M_array = &v110;
      v71._M_len = 7LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v71, &__comp, &__a);
      v86 = Planar;
      v35 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v86);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v35, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( kk = (std::pair<int const,std::shared_ptr<IntPair> > *)&v117;
            kk != &v110;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair(kk) )
      {
        --kk;
      }
      v88 = 0;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v104,
        &v88,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v89 = Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v105,
        (int *)&v89,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __x = 2;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v106,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Diagonal|Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v107,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __k = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v108,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      __args_1 = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v109,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v72._M_array = &v104;
      v72._M_len = 6LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v72, &__comp, &__a);
      v87 = Diagonal;
      v37 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v87);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v37, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( mm = &v110; mm != &v104; std::pair<int const,std::shared_ptr<IntPair>>::~pair(mm) )
        --mm;
      goto LABEL_111;
    case 4:
      if ( *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(block->blockIndex);
      }
      __args_1 = block->blockIndex[0] + 1;
      std::make_shared<IntPair,int,int const&>((int *)(v5 + 128), &__args_1, &block->blockIndex[1], &__args_1);
      __args_1 = 3;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v94,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v64._M_array = &v94;
      v64._M_len = 1LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v64, &__comp, &__a);
      __k = Normal_1;
      v21 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &__k);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v21, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( nn = (std::pair<int const,std::shared_ptr<IntPair> > *)&v95;
            nn != &v94;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair(nn) )
      {
        --nn;
      }
      __x = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v100,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Diagonal|Planar|0x4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v101,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 10;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v102,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __args_1 = 11;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v103,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v65._M_array = &v100;
      v65._M_len = 4LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v65, &__comp, &__a);
      v89 = Planar;
      v23 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v89);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v23, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i1 = &v104; i1 != &v100; std::pair<int const,std::shared_ptr<IntPair>>::~pair(i1) )
        --i1;
      __x = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v100,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v101,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v102,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __args_1 = 7;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v103,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v66._M_array = &v100;
      v66._M_len = 4LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v66, &__comp, &__a);
      v89 = Diagonal;
      v25 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v89);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v25, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i2 = &v104; i2 != &v100; std::pair<int const,std::shared_ptr<IntPair>>::~pair(i2) )
        --i2;
      goto LABEL_55;
    case 6:
      if ( *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(block->blockIndex);
      }
      __args_1 = block->blockIndex[0] + 1;
      std::make_shared<IntPair,int,int const&>((int *)(v5 + 64), &__args_1, &block->blockIndex[1], &__args_1);
      if ( *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&block->blockIndex[1]);
      }
      __args_1 = block->blockIndex[1] - 1;
      std::make_shared<IntPair,int const&,int>((const int *)(v5 + 96), block->blockIndex, &__args_1, block->blockIndex);
      __args_1 = block->blockIndex[1] - 1;
      __k = block->blockIndex[0] + 1;
      std::make_shared<IntPair,int,int>((int *)(v5 + 128), (int *)&__k, &__args_1, (int *)&__k);
      __k = Diagonal|Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v97,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __args_1 = 2;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v98,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v76._M_array = &v97;
      v76._M_len = 2LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v76, &__comp, &__a);
      v91 = Normal_1;
      v45 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v91);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v45, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i3 = &v99;
            i3 != (std::map<int,std::shared_ptr<IntPair>> *)&v97;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair((std::pair<int const,std::shared_ptr<IntPair> > *const)i3) )
      {
        i3 = (std::map<int,std::shared_ptr<IntPair>> *)((char *)i3 - 24);
      }
      v87 = Normal_1;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v110,
        (int *)&v87,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v88 = 2;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v111,
        &v88,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v89 = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v112,
        (int *)&v89,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      __x = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v113,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Diagonal|Planar|0x4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v114,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __k = 10;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v115,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __args_1 = 11;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v116,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v77._M_array = &v110;
      v77._M_len = 7LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v77, &__comp, &__a);
      v86 = Planar;
      v47 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v86);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v47, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i4 = (std::pair<int const,std::shared_ptr<IntPair> > *)&v117;
            i4 != &v110;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair(i4) )
      {
        --i4;
      }
      v88 = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v104,
        &v88,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v89 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v105,
        (int *)&v89,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __x = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v106,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Diagonal|Planar|0x4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v107,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __k = Normal_1;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v108,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      __args_1 = 2;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v109,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v78._M_array = &v104;
      v78._M_len = 6LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v78, &__comp, &__a);
      v87 = Diagonal;
      v49 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v87);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v49, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i5 = &v110; i5 != &v104; std::pair<int const,std::shared_ptr<IntPair>>::~pair(i5) )
        --i5;
      goto LABEL_111;
    case 8:
      if ( *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&block->blockIndex[1]);
      }
      __args_1 = block->blockIndex[1] + 1;
      std::make_shared<IntPair,int const&,int>((const int *)(v5 + 128), block->blockIndex, &__args_1, block->blockIndex);
      __args_1 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v94,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v67._M_array = &v94;
      v67._M_len = 1LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v67, &__comp, &__a);
      __k = Normal_1;
      v27 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &__k);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v27, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i6 = (std::pair<int const,std::shared_ptr<IntPair> > *)&v95;
            i6 != &v94;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair(i6) )
      {
        --i6;
      }
      __x = 1;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v100,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Diagonal|Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v101,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v102,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __args_1 = 7;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v103,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v68._M_array = &v100;
      v68._M_len = 4LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v68, &__comp, &__a);
      v89 = Planar;
      v29 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v89);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v29, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i7 = &v104; i7 != &v100; std::pair<int const,std::shared_ptr<IntPair>>::~pair(i7) )
        --i7;
      __x = 1;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v100,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v91 = Diagonal|Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v101,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v102,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __args_1 = 7;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v103,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v69._M_array = &v100;
      v69._M_len = 4LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v69, &__comp, &__a);
      v89 = Diagonal;
      v31 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v89);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v31, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i8 = &v104; i8 != &v100; std::pair<int const,std::shared_ptr<IntPair>>::~pair(i8) )
        --i8;
LABEL_55:
      std::shared_ptr<IntPair>::~shared_ptr((std::shared_ptr<IntPair> *const)(v5 + 128));
      break;
    case 9:
      if ( *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(block->blockIndex);
      }
      __args_1 = block->blockIndex[0] - 1;
      std::make_shared<IntPair,int,int const&>((int *)(v5 + 64), &__args_1, &block->blockIndex[1], &__args_1);
      if ( *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&block->blockIndex[1]);
      }
      __args_1 = block->blockIndex[1] + 1;
      std::make_shared<IntPair,int const&,int>((const int *)(v5 + 96), block->blockIndex, &__args_1, block->blockIndex);
      __args_1 = block->blockIndex[1] + 1;
      __k = block->blockIndex[0] - 1;
      std::make_shared<IntPair,int,int>((int *)(v5 + 128), (int *)&__k, &__args_1, (int *)&__k);
      __k = Normal_1;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v97,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __args_1 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v98,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v79._M_array = &v97;
      v79._M_len = 2LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v79, &__comp, &__a);
      v91 = Normal_1;
      v51 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v91);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v51, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i9 = &v99;
            i9 != (std::map<int,std::shared_ptr<IntPair>> *)&v97;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair((std::pair<int const,std::shared_ptr<IntPair> > *const)i9) )
      {
        i9 = (std::map<int,std::shared_ptr<IntPair>> *)((char *)i9 - 24);
      }
      v87 = Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v110,
        (int *)&v87,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v88 = 3;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v111,
        &v88,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v89 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v112,
        (int *)&v89,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __x = 7;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v113,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v91 = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v114,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __k = 8;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v115,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __args_1 = 9;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v116,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v80._M_array = &v110;
      v80._M_len = 7LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v80, &__comp, &__a);
      v86 = Planar;
      v53 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v86);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v53, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i10 = (std::pair<int const,std::shared_ptr<IntPair> > *)&v117;
            i10 != &v110;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair(i10) )
      {
        --i10;
      }
      v88 = 0;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v104,
        &v88,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v89 = Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v105,
        (int *)&v89,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __x = 2;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v106,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v91 = Diagonal|Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v107,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v108,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      __args_1 = 7;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v109,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v81._M_array = &v104;
      v81._M_len = 6LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v81, &__comp, &__a);
      v87 = Diagonal;
      v55 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v87);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v55, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i11 = &v110; i11 != &v104; std::pair<int const,std::shared_ptr<IntPair>>::~pair(i11) )
        --i11;
      goto LABEL_111;
    case 0xC:
      if ( *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block->blockIndex >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(block->blockIndex);
      }
      __args_1 = block->blockIndex[0] + 1;
      std::make_shared<IntPair,int,int const&>((int *)(v5 + 64), &__args_1, &block->blockIndex[1], &__args_1);
      if ( *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&block->blockIndex[1]);
      }
      __args_1 = block->blockIndex[1] + 1;
      std::make_shared<IntPair,int const&,int>((const int *)(v5 + 96), block->blockIndex, &__args_1, block->blockIndex);
      __args_1 = block->blockIndex[1] + 1;
      __k = block->blockIndex[0] + 1;
      std::make_shared<IntPair,int,int>((int *)(v5 + 128), (int *)&__k, &__args_1, (int *)&__k);
      __k = Diagonal|Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v97,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __args_1 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v98,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v73._M_array = &v97;
      v73._M_len = 2LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v73, &__comp, &__a);
      v91 = Normal_1;
      v39 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v91);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v39, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i12 = &v99;
            i12 != (std::map<int,std::shared_ptr<IntPair>> *)&v97;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair((std::pair<int const,std::shared_ptr<IntPair> > *const)i12) )
      {
        i12 = (std::map<int,std::shared_ptr<IntPair>> *)((char *)i12 - 24);
      }
      v87 = Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v110,
        (int *)&v87,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v88 = 3;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v111,
        &v88,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v89 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v112,
        (int *)&v89,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      __x = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v113,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v91 = Diagonal|Planar|0x4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v114,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = 10;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v115,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __args_1 = 11;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v116,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v74._M_array = &v110;
      v74._M_len = 7LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v74, &__comp, &__a);
      v86 = Planar;
      v41 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v86);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v41, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i13 = (std::pair<int const,std::shared_ptr<IntPair> > *)&v117;
            i13 != &v110;
            std::pair<int const,std::shared_ptr<IntPair>>::~pair(i13) )
      {
        --i13;
      }
      v88 = 5;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v104,
        &v88,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      v89 = 4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v105,
        (int *)&v89,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      __x = 6;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v106,
        &__x,
        (std::shared_ptr<IntPair> *)(v5 + 64));
      v91 = Diagonal|Planar|0x4;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v107,
        (int *)&v91,
        (std::shared_ptr<IntPair> *)(v5 + 128));
      __k = Planar;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v108,
        (int *)&__k,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      __args_1 = 3;
      std::pair<int const,std::shared_ptr<IntPair>>::pair<int,std::shared_ptr<IntPair>&,true>(
        &v109,
        &__args_1,
        (std::shared_ptr<IntPair> *)(v5 + 96));
      v75._M_array = &v104;
      v75._M_len = 6LL;
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::allocator(&__a);
      std::map<int,std::shared_ptr<IntPair>>::map(&v99, v75, &__comp, &__a);
      v87 = Diagonal;
      v43 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](resMap, &v87);
      std::map<int,std::shared_ptr<IntPair>>::operator=(v43, &v99);
      std::map<int,std::shared_ptr<IntPair>>::~map(&v99);
      std::allocator<std::pair<int const,std::shared_ptr<IntPair>>>::~allocator(&__a);
      for ( i14 = &v110; i14 != &v104; std::pair<int const,std::shared_ptr<IntPair>>::~pair(i14) )
        --i14;
LABEL_111:
      std::shared_ptr<IntPair>::~shared_ptr((std::shared_ptr<IntPair> *const)(v5 + 128));
      std::shared_ptr<IntPair>::~shared_ptr((std::shared_ptr<IntPair> *const)(v5 + 96));
      std::shared_ptr<IntPair>::~shared_ptr((std::shared_ptr<IntPair> *const)(v5 + 64));
      break;
    default:
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
        "GenerateBorderNodeBlockMap",
        617);
      v57 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v96,
              (const char (*)[26])"Unknown border indicator ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v57, (const int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v96);
      break;
  }
  result = 1;
LABEL_114:
  if ( v118 == (char *)v5 )
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
  return result;
};

// Line 626: range 000000000CBE752C-000000000CBE7BEA
void __fastcall SVODataProcessor::NodeFaceByIndex(const SVONode *node, int index, std::vector<int> *faceVerticeIndex)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::initializer_list<int> __l; // [rsp+0h] [rbp-140h]
  std::initializer_list<int> v8; // [rsp+10h] [rbp-130h]
  std::initializer_list<int> v9; // [rsp+20h] [rbp-120h]
  std::initializer_list<int> v10; // [rsp+30h] [rbp-110h]
  std::initializer_list<int> v11; // [rsp+40h] [rbp-100h]
  std::allocator<int> __a; // [rsp+7Fh] [rbp-C1h] BYREF
  std::initializer_list<int> v14; // [rsp+80h] [rbp-C0h] BYREF
  std::vector<int> __x; // [rsp+90h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+B0h] [rbp-90h] BYREF
  char v17[112]; // [rsp+D0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 index:625";
  *(_QWORD *)(v3 + 16) = SVODataProcessor::NodeFaceByIndex;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = index;
  switch ( *(_DWORD *)(v3 + 32) )
  {
    case 0:
      v14._M_array = (std::initializer_list<int>::iterator)0x100000000LL;
      v14._M_len = 0x300000002LL;
      __l._M_array = (std::initializer_list<int>::iterator)&v14;
      __l._M_len = 4LL;
      std::allocator<int>::allocator(&__a);
      std::vector<int>::vector(&__x, __l, &__a);
      std::vector<int>::operator=(faceVerticeIndex, &__x);
      std::vector<int>::~vector(&__x);
      std::allocator<int>::~allocator(&__a);
      break;
    case 1:
      v14._M_array = (std::initializer_list<int>::iterator)0x100000000LL;
      v14._M_len = 0x500000004LL;
      v8._M_array = (std::initializer_list<int>::iterator)&v14;
      v8._M_len = 4LL;
      std::allocator<int>::allocator(&__a);
      std::vector<int>::vector(&__x, v8, &__a);
      std::vector<int>::operator=(faceVerticeIndex, &__x);
      std::vector<int>::~vector(&__x);
      std::allocator<int>::~allocator(&__a);
      break;
    case 2:
      v14._M_array = (std::initializer_list<int>::iterator)0x200000000LL;
      v14._M_len = 0x600000004LL;
      v9._M_array = (std::initializer_list<int>::iterator)&v14;
      v9._M_len = 4LL;
      std::allocator<int>::allocator(&__a);
      std::vector<int>::vector(&__x, v9, &__a);
      std::vector<int>::operator=(faceVerticeIndex, &__x);
      std::vector<int>::~vector(&__x);
      std::allocator<int>::~allocator(&__a);
      break;
    case 3:
      v14._M_array = (std::initializer_list<int>::iterator)0x500000004LL;
      v14._M_len = 0x700000006LL;
      v10._M_array = (std::initializer_list<int>::iterator)&v14;
      v10._M_len = 4LL;
      std::allocator<int>::allocator(&__a);
      std::vector<int>::vector(&__x, v10, &__a);
      std::vector<int>::operator=(faceVerticeIndex, &__x);
      std::vector<int>::~vector(&__x);
      std::allocator<int>::~allocator(&__a);
      break;
    case 4:
      v14._M_array = (std::initializer_list<int>::iterator)0x300000002LL;
      v14._M_len = 0x700000006LL;
      v11._M_array = (std::initializer_list<int>::iterator)&v14;
      v11._M_len = 4LL;
      std::allocator<int>::allocator(&__a);
      std::vector<int>::vector(&__x, v11, &__a);
      std::vector<int>::operator=(faceVerticeIndex, &__x);
      std::vector<int>::~vector(&__x);
      std::allocator<int>::~allocator(&__a);
      break;
    case 5:
      v14._M_array = (std::initializer_list<int>::iterator)0x300000001LL;
      v14._M_len = 0x700000005LL;
      std::allocator<int>::allocator(&__a);
      std::vector<int>::vector(&__x, (std::initializer_list<int>)__PAIR128__(4LL, &v14), &__a);
      std::vector<int>::operator=(faceVerticeIndex, &__x);
      std::vector<int>::~vector(&__x);
      std::allocator<int>::~allocator(&__a);
      break;
    default:
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
        "NodeFaceByIndex",
        648);
      v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v16,
             (const char (*)[25])"invalid node face index ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      break;
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 654: range 000000000CBE7BEC-000000000CBE80B0
float __cdecl SVODataProcessor::PointDistanceToNode(const SVONode *node, const ToTheMoonVector3 *point)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  float v5; // r14d
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  float *p_x; // rdx
  float v11; // xmm1_4
  double v12; // xmm0_8
  float v13; // xmm2_4
  float v14; // xmm1_4
  __m128i v15; // xmm0
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  float *p_y; // rax
  float y; // xmm1_4
  double v19; // xmm0_8
  float v20; // xmm2_4
  float v21; // xmm1_4
  __m128i v22; // xmm0
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  float *p_z; // rax
  float z; // xmm1_4
  double v26; // xmm0_8
  float v27; // xmm2_4
  float v28; // xmm1_4
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  float result; // xmm0_4
  float x_component; // [rsp+1Ch] [rbp-84h]
  float y_component; // [rsp+20h] [rbp-80h]
  ToTheMoonVector3 *startPos; // [rsp+28h] [rbp-78h]
  char v35[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 endPos:658";
  *(_QWORD *)(v2 + 16) = SVODataProcessor::PointDistanceToNode;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( node && point )
  {
    startPos = SVODataProcessor::GetStartPos(node);
    SVODataProcessor::GetEndPos((const SVONode *)(v2 + 32));
    if ( !startPos || std::operator==<ToTheMoonVector3>((const std::shared_ptr<ToTheMoonVector3> *)(v2 + 32), 0LL) )
    {
      v5 = 0.0;
    }
    else if ( ToTheMoonVector3::OutsideThan(point, startPos)
           && (v7 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
               ToTheMoonVector3::OutsideThan(v7, point)) )
    {
      v5 = 0.0;
    }
    else
    {
      v9 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_x = &v9->x;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *p_x;
      if ( *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)startPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(startPos);
      }
      *(float *)&v12 = startPos->x;
      if ( *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point >> 3) + 0x7FFF8000) )
      {
        v12 = __asan_report_load4(point);
      }
      v13 = v11;
      v14 = *(float *)&v12;
      v15 = _mm_cvtsi32_si128(LODWORD(point->x));
      *(float *)v15.m128i_i32 = Geometry::PointDistanceToLine1D(*(float *)v15.m128i_i32, v14, v13);
      x_component = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
      v16 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_y = &v16->y;
      if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_y);
      }
      y = v16->y;
      if ( *(_BYTE *)(((unsigned __int64)&startPos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)startPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startPos->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&startPos->y);
      }
      *(float *)&v19 = startPos->y;
      if ( *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->y >> 3) + 0x7FFF8000) )
      {
        v19 = __asan_report_load4(&point->y);
      }
      v20 = y;
      v21 = *(float *)&v19;
      v22 = _mm_cvtsi32_si128(LODWORD(point->y));
      *(float *)v22.m128i_i32 = Geometry::PointDistanceToLine1D(*(float *)v22.m128i_i32, v21, v20);
      y_component = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
      v23 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_z = &v23->z;
      if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_z);
      }
      z = v23->z;
      if ( *(_BYTE *)(((unsigned __int64)&startPos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)startPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startPos->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&startPos->z);
      }
      *(float *)&v26 = startPos->z;
      if ( *(_BYTE *)(((unsigned __int64)&point->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point->z >> 3) + 0x7FFF8000) )
      {
        v26 = __asan_report_load4(&point->z);
      }
      v27 = z;
      v28 = *(float *)&v26;
      v29 = _mm_cvtsi32_si128(LODWORD(point->z));
      *(float *)v29.m128i_i32 = Geometry::PointDistanceToLine1D(*(float *)v29.m128i_i32, v28, v27);
      v30 = (__m128i)(unsigned int)_mm_cvtsi128_si32(v29);
      *(float *)v30.m128i_i32 = std::sqrt(
                                  (float)(*(float *)v30.m128i_i32 * *(float *)v30.m128i_i32)
                                + (float)((float)(x_component * x_component) + (float)(y_component * y_component)));
      v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v30));
    }
    std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v2 + 32));
  }
  else
  {
    v5 = 0.0;
  }
  result = v5;
  if ( v35 == (char *)v2 )
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

// Line 671: range 000000000CBE80B2-000000000CBE847B
void __cdecl SVODataProcessor::SetWorldBlocksMd5(
        std::shared_ptr<SVOWorld> *p_world,
        const std::map<const IntPair,unsigned int> *md5Map)
{
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v3; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v9; // rax
  unsigned int second; // ebx
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  unsigned int *p_md5; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::map<const IntPair,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::map<const IntPair,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+28h] [rbp-78h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+30h] [rbp-70h] BYREF
  const std::map<const IntPair,unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  const std::pair<const IntPair,unsigned int> *md5Iter; // [rsp+40h] [rbp-60h]
  std::shared_ptr<SVOBlock> *block; // [rsp+48h] [rbp-58h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-30h] BYREF

  if ( std::operator==<SVOWorld>(p_world, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
      "SetWorldBlocksMd5",
      673);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v24,
      (const char (*)[35])"[SetWorldBlocksMd5] world is null ");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    __for_range = md5Map;
    __for_begin._M_node = std::map<IntPair const,unsigned int>::begin(md5Map)._M_node;
    __for_end._M_node = std::map<IntPair const,unsigned int>::end(md5Map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      md5Iter = std::_Rb_tree_const_iterator<std::pair<IntPair const,unsigned int>>::operator*(&__for_begin);
      v2 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
      v3 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v2);
      __y._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v3)._M_node;
      v4 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
      v5 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
      __x._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(v5, &md5Iter->first)._M_node;
      if ( std::operator==(&__x, &__y) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
          "SetWorldBlocksMd5",
          678);
        v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v23,
               (const char (*)[25])"[SetWorldBlocksMd5] md5 ");
        IntPair::ToString[abi:cxx11]((std::string *)&v24, &md5Iter->first);
        v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v24);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])" not in world map");
        std::string::~string(&v24);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        v8 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
        v9 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
        block = std::map<IntPair,std::shared_ptr<SVOBlock>>::at(v9, &md5Iter->first);
        if ( *(_BYTE *)(((unsigned __int64)&md5Iter->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)md5Iter + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&md5Iter->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&md5Iter->second);
        }
        second = md5Iter->second;
        v11 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)block);
        p_md5 = &v11->md5;
        if ( *(_BYTE *)(((unsigned __int64)p_md5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_md5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_md5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_md5);
        }
        v11->md5 = second;
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
          "SetWorldBlocksMd5",
          683);
        v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v23,
                (const char (*)[31])"[SetWorldBlocksMd5] Set Block ");
        IntPair::ToString[abi:cxx11]((std::string *)&v24, &md5Iter->first);
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v24);
        v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])" to ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &md5Iter->second);
        std::string::~string(&v24);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      std::_Rb_tree_const_iterator<std::pair<IntPair const,unsigned int>>::operator++(&__for_begin);
    }
  }
};

// Line 688: range 000000000CBE847C-000000000CBE8534
int __cdecl SVODataProcessor::DirectionToNeighborIndex(Const::Direction dir)
{
  int result; // eax
  __int64 v2; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v4; // rbx

  switch ( dir )
  {
    case Front:
      result = 5;
      break;
    case Back:
      result = 2;
      break;
    case Left:
      result = 0;
      break;
    case Right:
      result = 3;
      break;
    case Up:
      result = 4;
      break;
    case Down:
      result = 1;
      break;
    default:
      v2 = 8LL;
      exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
      v4 = (_QWORD *)exception;
      if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      {
        v2 = exception;
        __asan_report_store8();
      }
      *v4 = "Wrong Direction";
      __asan_handle_no_return(v2);
      _cxa_throw(v4, (struct type_info *)&`typeinfo for'char const*, 0LL);
  }
  return result;
};

// Line 709: range 000000000CBE8536-000000000CBE874B
std::unordered_map<int,float> *__cdecl SVODataProcessor::GetLayerSizeMap(std::unordered_map<int,float> *retstr)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  float v4; // xmm1_4
  std::unordered_map<int,float>::mapped_type *v5; // rax
  float *v6; // rdx
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 5 i:711";
  *(_QWORD *)(v1 + 16) = SVODataProcessor::GetLayerSizeMap;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_h._M_single_bucket + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 56LL);
  }
  retstr->_M_h._M_buckets = 0LL;
  retstr->_M_h._M_bucket_count = 0LL;
  retstr->_M_h._M_before_begin._M_nxt = 0LL;
  retstr->_M_h._M_element_count = 0LL;
  *(_QWORD *)&retstr->_M_h._M_rehash_policy._M_max_load_factor = 0LL;
  retstr->_M_h._M_rehash_policy._M_next_resize = 0LL;
  retstr->_M_h._M_single_bucket = 0LL;
  std::unordered_map<int,float>::unordered_map(retstr);
  for ( *(_DWORD *)(v1 + 32) = 0; *(int *)(v1 + 32) <= 9; ++*(_DWORD *)(v1 + 32) )
  {
    v4 = std::pow<int,int>(2, *(_DWORD *)(v1 + 32));
    v5 = std::unordered_map<int,float>::operator[](retstr, (const std::unordered_map<int,float>::key_type *)(v1 + 32));
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v4;
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 719: range 000000000CBE874C-000000000CBE8851
float __fastcall SVODataProcessor::GetLevelSize(int level)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::unordered_map<int,float>::mapped_type *v4; // rax
  float *v5; // rdx
  float result; // xmm0_4
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 9 level:718";
  *(_QWORD *)(v1 + 16) = SVODataProcessor::GetLevelSize;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = level;
  v4 = std::unordered_map<int,float>::at(
         &SVODataProcessor::layerSizeMap,
         (const std::unordered_map<int,float>::key_type *)(v1 + 32));
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  result = *v5;
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 724: range 000000000CBE8852-000000000CBE8BF9
void __cdecl SVODataProcessor::NodeToRange3D(const SVONode *node, Range3D *range)
{
  __m128i v2; // xmm0
  SVOLayer *layer; // rax
  char v4; // dl
  ToTheMoonVector3 *referPos; // rdx
  float x; // xmm0_4
  float v7; // xmm0_4
  ToTheMoonVector3 *v8; // rdx
  float y; // xmm0_4
  float v10; // xmm0_4
  ToTheMoonVector3 *v11; // rdx
  float z; // xmm0_4
  float v13; // xmm0_4
  Range3D *rangea; // [rsp+0h] [rbp-20h]
  float levelSize; // [rsp+1Ch] [rbp-4h]

  rangea = range;
  if ( node )
  {
    if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->layer, range);
    if ( node->layer )
    {
      if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->referPos, range);
      if ( node->referPos )
      {
        if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
          __asan_report_load8(&node->layer, range);
        layer = node->layer;
        v4 = *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000);
        LOBYTE(range) = v4 != 0;
        if ( v4 != 0 && v4 <= 3 )
          *(double *)v2.m128i_i64 = __asan_report_load4(node->layer);
        *(float *)v2.m128i_i32 = SVODataProcessor::GetLevelSize(layer->level);
        levelSize = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
        if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
          __asan_report_load8(&node->referPos, range);
        referPos = node->referPos;
        if ( *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)referPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(node->referPos);
        }
        x = referPos->x;
        if ( *(_BYTE *)(((unsigned __int64)rangea >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)rangea & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rangea >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(rangea);
        }
        rangea->x_range.start = x;
        v7 = rangea->x_range.start + levelSize;
        if ( *(_BYTE *)(((unsigned __int64)&rangea->x_range.end >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)rangea + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->x_range.end >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(&rangea->x_range.end);
        }
        rangea->x_range.end = v7;
        v8 = node->referPos;
        if ( *(_BYTE *)(((unsigned __int64)&v8->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v8->y);
        }
        y = v8->y;
        if ( *(_BYTE *)(((unsigned __int64)&rangea->y_range >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)rangea + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->y_range >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&rangea->y_range);
        }
        rangea->y_range.start = y;
        v10 = rangea->y_range.start + levelSize;
        if ( *(_BYTE *)(((unsigned __int64)&rangea->y_range.end >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)rangea + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->y_range.end >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_store4(&rangea->y_range.end);
        }
        rangea->y_range.end = v10;
        v11 = node->referPos;
        if ( *(_BYTE *)(((unsigned __int64)&v11->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v11 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v11->z);
        }
        z = v11->z;
        if ( *(_BYTE *)(((unsigned __int64)&rangea->z_range >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)rangea + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->z_range >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&rangea->z_range);
        }
        rangea->z_range.start = z;
        v13 = rangea->z_range.start + levelSize;
        if ( *(_BYTE *)(((unsigned __int64)&rangea->z_range.end >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)rangea + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->z_range.end >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_store4(&rangea->z_range.end);
        }
        rangea->z_range.end = v13;
      }
    }
  }
};

// Line 739: range 000000000CBE8BFA-000000000CBE922D
std::shared_ptr<ToTheMoonVector3> __cdecl SVODataProcessor::TuckPosInRange(
        const ToTheMoonVector3 *pos,
        const Range3D *range)
{
  const Range3D *v2; // rdx
  const float *v3; // r8
  const float *v4; // r9
  bool *p_incremental; // rcx
  float *p_end; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  float *p_x; // rdx
  float v9; // xmm1_4
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  float *v11; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  _DWORD *v13; // rdx
  double v14; // xmm0_8
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  float *v16; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  float *p_y; // rax
  float y; // xmm1_4
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  float *v21; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  float *v23; // rax
  double v24; // xmm0_8
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  float *v26; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  float *p_z; // rax
  float z; // xmm1_4
  std::shared_ptr<ToTheMoonVector3> result; // rax
  double v31; // xmm0_8
  float start; // [rsp+4h] [rbp-1Ch]
  float end; // [rsp+4h] [rbp-1Ch]
  float v34; // [rsp+4h] [rbp-1Ch]
  float v35; // [rsp+4h] [rbp-1Ch]
  _Atomic_word start_low; // [rsp+4h] [rbp-1Ch]
  _Atomic_word end_low; // [rsp+4h] [rbp-1Ch]
  const Range3D *rangea; // [rsp+8h] [rbp-18h]

  rangea = v2;
  p_incremental = &range->x_range.incremental;
  p_end = &range->x_range.end;
  if ( *(_WORD *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    __asan_report_store16(pos, range);
  std::make_shared<ToTheMoonVector3,float const&,float const&,float const&>(
    &pos->x,
    &range->x_range.start,
    p_end,
    (const float *)p_incremental,
    v3,
    v4);
  v7 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
  p_x = &v7->x;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v9 = *p_x;
  if ( *(_BYTE *)(((unsigned __int64)rangea >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rangea & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rangea >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rangea);
  }
  if ( rangea->x_range.start <= v9 )
  {
    v12 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
    v13 = (_DWORD *)&v12->x;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    LODWORD(v14) = *v13;
    if ( *(_BYTE *)(((unsigned __int64)&rangea->x_range.end >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rangea + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->x_range.end >> 3) + 0x7FFF8000) )
    {
      v14 = __asan_report_load4(&rangea->x_range.end);
    }
    if ( *(float *)&v14 > rangea->x_range.end )
    {
      end = rangea->x_range.end;
      v15 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
      v16 = &v15->x;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v15);
      }
      *v16 = end;
    }
  }
  else
  {
    start = rangea->x_range.start;
    v10 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
    v11 = &v10->x;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    *v11 = start;
  }
  v17 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
  p_y = &v17->y;
  if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_y);
  }
  y = v17->y;
  if ( *(_BYTE *)(((unsigned __int64)&rangea->y_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rangea + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->y_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rangea->y_range);
  }
  if ( rangea->y_range.start <= y )
  {
    v22 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
    v23 = &v22->y;
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v23);
    }
    *(float *)&v24 = v22->y;
    if ( *(_BYTE *)(((unsigned __int64)&rangea->y_range.end >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rangea + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->y_range.end >> 3) + 0x7FFF8000) )
    {
      v24 = __asan_report_load4(&rangea->y_range.end);
    }
    if ( *(float *)&v24 > rangea->y_range.end )
    {
      v35 = rangea->y_range.end;
      v25 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
      v26 = &v25->y;
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v26);
      }
      v25->y = v35;
    }
  }
  else
  {
    v34 = rangea->y_range.start;
    v20 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
    v21 = &v20->y;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v21);
    }
    v20->y = v34;
  }
  v27 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
  p_z = &v27->z;
  if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_z);
  }
  z = v27->z;
  if ( *(_BYTE *)(((unsigned __int64)&rangea->z_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rangea + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->z_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rangea->z_range);
  }
  if ( rangea->z_range.start <= z )
  {
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
    result._M_ptr = (std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::element_type *)&result._M_refcount._M_pi->_M_use_count;
    if ( *(_BYTE *)(((unsigned __int64)result._M_ptr >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)result._M_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result._M_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(result._M_ptr);
    }
    LODWORD(v31) = result._M_refcount._M_pi->_M_use_count;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&rangea->z_range.end >> 3)
                                                                                               + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)rangea + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rangea->z_range.end >> 3) + 0x7FFF8000)));
    if ( LOBYTE(result._M_refcount._M_pi) )
      v31 = __asan_report_load4(&rangea->z_range.end);
    if ( *(float *)&v31 > rangea->z_range.end )
    {
      end_low = LODWORD(rangea->z_range.end);
      result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
      result._M_ptr = (std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::element_type *)&result._M_refcount._M_pi->_M_use_count;
      if ( *(_BYTE *)(((unsigned __int64)result._M_ptr >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)result._M_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result._M_ptr >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(result._M_ptr);
      }
      result._M_refcount._M_pi->_M_use_count = end_low;
    }
  }
  else
  {
    start_low = LODWORD(rangea->z_range.start);
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)pos);
    result._M_ptr = (std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::element_type *)&result._M_refcount._M_pi->_M_use_count;
    if ( *(_BYTE *)(((unsigned __int64)result._M_ptr >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)result._M_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result._M_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(result._M_ptr);
    }
    result._M_refcount._M_pi->_M_use_count = start_low;
  }
  result._M_ptr = (std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::element_type *)pos;
  return result;
};

// Line 757: range 000000000CBE922E-000000000CBE9768
void __cdecl SVODataProcessor::TuckPosInRange(const ToTheMoonVector3 *pos, const Range3D *range, ToTheMoonVector3 *res)
{
  float x; // xmm1_4
  float end; // xmm0_4
  double v5; // xmm0_8
  float y; // xmm1_4
  float start; // xmm0_4
  double v8; // xmm0_8
  float z; // xmm1_4
  float v10; // xmm0_4
  double v11; // xmm0_8

  if ( res )
  {
    if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pos);
    }
    x = pos->x;
    if ( *(_BYTE *)(((unsigned __int64)range >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)range & 7) + 3) >= *(_BYTE *)(((unsigned __int64)range >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(range);
    }
    if ( range->x_range.start < x )
    {
      if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pos);
      }
      *(float *)&v5 = pos->x;
      if ( *(_BYTE *)(((unsigned __int64)&range->x_range.end >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)range + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->x_range.end >> 3) + 0x7FFF8000) )
      {
        v5 = __asan_report_load4(&range->x_range.end);
      }
      if ( *(float *)&v5 < range->x_range.end )
      {
        if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(pos);
        }
        end = pos->x;
      }
      else
      {
        end = range->x_range.end;
      }
    }
    else
    {
      end = range->x_range.start;
    }
    if ( *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)res & 7) + 3) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(res);
    }
    res->x = end;
    if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pos->y);
    }
    y = pos->y;
    if ( *(_BYTE *)(((unsigned __int64)&range->y_range >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)range + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->y_range >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&range->y_range);
    }
    if ( range->y_range.start < y )
    {
      if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pos->y);
      }
      *(float *)&v8 = pos->y;
      if ( *(_BYTE *)(((unsigned __int64)&range->y_range.end >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)range + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->y_range.end >> 3) + 0x7FFF8000) )
      {
        v8 = __asan_report_load4(&range->y_range.end);
      }
      if ( *(float *)&v8 < range->y_range.end )
      {
        if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pos->y);
        }
        start = pos->y;
      }
      else
      {
        start = range->y_range.end;
      }
    }
    else
    {
      start = range->y_range.start;
    }
    if ( *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)res + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&res->y);
    }
    res->y = start;
    if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pos->z);
    }
    z = pos->z;
    if ( *(_BYTE *)(((unsigned __int64)&range->z_range >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)range + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->z_range >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&range->z_range);
    }
    if ( range->z_range.start < z )
    {
      if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pos->z);
      }
      *(float *)&v11 = pos->z;
      if ( *(_BYTE *)(((unsigned __int64)&range->z_range.end >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)range + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->z_range.end >> 3) + 0x7FFF8000) )
      {
        v11 = __asan_report_load4(&range->z_range.end);
      }
      if ( *(float *)&v11 < range->z_range.end )
      {
        if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pos->z);
        }
        v10 = pos->z;
      }
      else
      {
        v10 = range->z_range.end;
      }
    }
    else
    {
      v10 = range->z_range.start;
    }
    if ( *(_BYTE *)(((unsigned __int64)&res->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)res + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&res->z);
    }
    res->z = v10;
  }
};

// Line 768: range 000000000CBE976A-000000000CBE98DB
std::shared_ptr<ToTheMoonVector3> __cdecl SVODataProcessor::TuckPosInNode(
        const ToTheMoonVector3 *pos,
        const SVONode *node)
{
  const SVONode *v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::shared_ptr<ToTheMoonVector3> result; // rax
  const SVONode *nodea; // [rsp+8h] [rbp-B8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  nodea = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 36 9 range:769";
  *(_QWORD *)(v3 + 16) = SVODataProcessor::TuckPosInNode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -217841664;
  v5[536862723] = -202116109;
  Range3D::Range3D((Range3D *const)(v3 + 48));
  SVODataProcessor::NodeToRange3D(nodea, (Range3D *)(v3 + 48));
  if ( *(_WORD *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    __asan_report_store16(pos, v3 + 48);
  result = SVODataProcessor::TuckPosInRange(pos, (const Range3D *)node);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::element_type *)pos;
  return result;
};

// Line 775: range 000000000CBE98DC-000000000CBE9A21
void __cdecl SVODataProcessor::TuckPosInNode(const ToTheMoonVector3 *pos, const SVONode *node, ToTheMoonVector3 *res)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 36 9 range:776";
  *(_QWORD *)(v3 + 16) = SVODataProcessor::TuckPosInNode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -217841664;
  v5[536862723] = -202116109;
  Range3D::Range3D((Range3D *const)(v3 + 48));
  SVODataProcessor::NodeToRange3D(node, (Range3D *)(v3 + 48));
  SVODataProcessor::TuckPosInRange(pos, (const Range3D *)(v3 + 48), res);
  if ( v7 == (char *)v3 )
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

// Line 785: range 000000000CBE9A22-000000000CBE9C28
IntVector3 __cdecl SVODataProcessor::ChildrenPosIndex(int childrenIndex)
{
  __int64 v1; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v3; // rbx
  IntVector3 v5; // [rsp+28h] [rbp-28h] BYREF
  IntVector3 v6; // [rsp+34h] [rbp-1Ch]

  switch ( childrenIndex )
  {
    case 0:
      IntVector3::IntVector3(&v5, 0, 0, 0);
      v6 = v5;
      break;
    case 1:
      IntVector3::IntVector3(&v5, 0, 0, 1);
      v6 = v5;
      break;
    case 2:
      IntVector3::IntVector3(&v5, 0, 1, 0);
      v6 = v5;
      break;
    case 3:
      IntVector3::IntVector3(&v5, 0, 1, 1);
      v6 = v5;
      break;
    case 4:
      IntVector3::IntVector3(&v5, 1, 0, 0);
      v6 = v5;
      break;
    case 5:
      IntVector3::IntVector3(&v5, 1, 0, 1);
      v6 = v5;
      break;
    case 6:
      IntVector3::IntVector3(&v5, 1, 1, 0);
      v6 = v5;
      break;
    case 7:
      IntVector3::IntVector3(&v5, 1, 1, 1);
      v6 = v5;
      break;
    default:
      v1 = 8LL;
      exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
      v3 = (_QWORD *)exception;
      if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      {
        v1 = exception;
        __asan_report_store8();
      }
      *v3 = "wrong children index";
      __asan_handle_no_return(v1);
      _cxa_throw(v3, (struct type_info *)&`typeinfo for'char const*, 0LL);
  }
  return v6;
};

// Line 810: range 000000000CBE9C2A-000000000CBEA9FF
std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>> > __cdecl AStarDataProcessor::GenerateChildrenIndexMap()
{
  std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false> *v0; // rdi
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  _DWORD *v3; // r13
  IntVector3 *k; // rbx
  std::vector<Const::FromType>::size_type v5; // rbx
  std::vector<Const::FromType>::reference v6; // rax
  _DWORD *v7; // rdx
  std::map<Const::FromType,std::vector<IntVector3>>::mapped_type *v8; // rax
  std::vector<IntVector3>::size_type v9; // rbx
  const IntVector3 *v10; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>> *v11; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>>::mapped_type *v12; // rax
  std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>> > result; // rax
  std::initializer_list<std::pair<const Const::FromType,std::vector<IntVector3> > > v14; // [rsp+0h] [rbp-480h]
  std::initializer_list<IntVector3> __l; // [rsp+10h] [rbp-470h]
  std::initializer_list<IntVector3> v16; // [rsp+20h] [rbp-460h]
  std::initializer_list<IntVector3> v17; // [rsp+30h] [rbp-450h]
  std::initializer_list<Const::FromType> v18; // [rsp+40h] [rbp-440h]
  std::allocator<IntVector3> __a; // [rsp+6Fh] [rbp-411h] BYREF
  std::allocator<IntVector3> v20; // [rsp+70h] [rbp-410h] BYREF
  std::allocator<IntVector3> v21; // [rsp+71h] [rbp-40Fh] BYREF
  std::less<Const::FromType> __comp; // [rsp+72h] [rbp-40Eh] BYREF
  std::allocator<std::pair<const Const::FromType,std::vector<IntVector3> > > v23; // [rsp+73h] [rbp-40Dh] BYREF
  Const::FromType __x; // [rsp+74h] [rbp-40Ch] BYREF
  int i; // [rsp+78h] [rbp-408h]
  int j; // [rsp+7Ch] [rbp-404h]
  std::_Rb_tree_iterator<std::pair<const Const::FromType,std::vector<IntVector3> > >::_Self v27; // [rsp+80h] [rbp-400h] BYREF
  std::_Rb_tree_iterator<std::pair<const Const::FromType,std::vector<IntVector3> > >::_Self __y; // [rsp+88h] [rbp-3F8h] BYREF
  common::milog::MiLogStream v29; // [rsp+90h] [rbp-3F0h] BYREF
  IntVector3 v30; // [rsp+B0h] [rbp-3D0h] BYREF
  IntVector3 v31; // [rsp+BCh] [rbp-3C4h] BYREF
  IntVector3 v32; // [rsp+C8h] [rbp-3B8h] BYREF
  IntVector3 v33; // [rsp+D4h] [rbp-3ACh] BYREF
  IntVector3 v34; // [rsp+E0h] [rbp-3A0h] BYREF
  IntVector3 v35; // [rsp+ECh] [rbp-394h] BYREF
  IntVector3 v36; // [rsp+100h] [rbp-380h] BYREF
  IntVector3 v37; // [rsp+10Ch] [rbp-374h] BYREF
  IntVector3 v38; // [rsp+118h] [rbp-368h] BYREF
  IntVector3 v39; // [rsp+124h] [rbp-35Ch] BYREF
  IntVector3 v40; // [rsp+130h] [rbp-350h] BYREF
  IntVector3 v41; // [rsp+13Ch] [rbp-344h] BYREF
  IntVector3 v42; // [rsp+148h] [rbp-338h] BYREF
  IntVector3 v43; // [rsp+154h] [rbp-32Ch] BYREF
  std::pair<const Const::FromType,std::vector<IntVector3> > v44; // [rsp+160h] [rbp-320h] BYREF
  std::pair<const Const::FromType,std::vector<IntVector3> > v45; // [rsp+180h] [rbp-300h] BYREF
  std::pair<const Const::FromType,std::vector<IntVector3> > v46; // [rsp+1A0h] [rbp-2E0h] BYREF
  IntVector3 v47; // [rsp+1C0h] [rbp-2C0h] BYREF
  IntVector3 v48; // [rsp+1CCh] [rbp-2B4h] BYREF
  IntVector3 v49; // [rsp+1D8h] [rbp-2A8h] BYREF
  IntVector3 v50; // [rsp+1E4h] [rbp-29Ch] BYREF
  IntVector3 v51; // [rsp+1F0h] [rbp-290h] BYREF
  IntVector3 v52; // [rsp+1FCh] [rbp-284h] BYREF
  IntVector3 v53; // [rsp+208h] [rbp-278h] BYREF
  IntVector3 v54; // [rsp+214h] [rbp-26Ch] BYREF
  IntVector3 v55; // [rsp+220h] [rbp-260h] BYREF
  IntVector3 v56; // [rsp+22Ch] [rbp-254h] BYREF
  IntVector3 v57; // [rsp+238h] [rbp-248h] BYREF
  IntVector3 v58; // [rsp+244h] [rbp-23Ch] BYREF
  char v59[560]; // [rsp+250h] [rbp-230h] BYREF

  v1 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 48 4 12 fromType:837 64 4 5 k:848 80 12 13 posOffset:847 112 12 15 childrenPos:849 144 12 15 "
                        "relativePos:850 176 24 16 fromTypeList:834 240 24 22 indexMapByFromType:842 304 24 17 posOffsetL"
                        "ist:843 368 24 21 closeChildrenList:846 432 48 18 originIndexMap:811";
  *(_QWORD *)(v1 + 16) = AStarDataProcessor::GenerateChildrenIndexMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862722] = 0x4000000;
  v3[536862723] = 62194;
  v3[536862723] = 0x4000000;
  v3[536862724] = 62194;
  v3[536862724] = 0x4000000;
  v3[536862725] = 62194;
  v3[536862726] = -218959360;
  v3[536862727] = 62194;
  v3[536862728] = -218959360;
  v3[536862729] = 62194;
  v3[536862730] = -218959360;
  v3[536862731] = 62194;
  v3[536862732] = -218959360;
  v3[536862733] = 62194;
  v3[536862735] = -202116109;
  __x = Neighbor;
  IntVector3::IntVector3(&v30, -1, 0, 0);
  IntVector3::IntVector3(&v31, 0, -1, 0);
  IntVector3::IntVector3(&v32, 0, 0, -1);
  IntVector3::IntVector3(&v33, 1, 0, 0);
  IntVector3::IntVector3(&v34, 0, 1, 0);
  IntVector3::IntVector3(&v35, 0, 0, 1);
  __l._M_array = &v30;
  __l._M_len = 6LL;
  std::allocator<IntVector3>::allocator(&__a);
  std::vector<IntVector3>::vector((std::vector<IntVector3> *const)(v1 + 240), __l, &__a);
  std::pair<Const::FromType const,std::vector<IntVector3>>::pair<Const::FromType,std::vector<IntVector3>,true>(
    &v44,
    &__x,
    (std::vector<IntVector3> *)(v1 + 240));
  *(_DWORD *)(v1 + 48) = 2;
  IntVector3::IntVector3(&v47, 0, -1, -1);
  IntVector3::IntVector3(&v48, 0, -1, 1);
  IntVector3::IntVector3(&v49, 0, 1, -1);
  IntVector3::IntVector3(&v50, 0, 1, 1);
  IntVector3::IntVector3(&v51, -1, 0, -1);
  IntVector3::IntVector3(&v52, -1, 0, 1);
  IntVector3::IntVector3(&v53, 1, 0, -1);
  IntVector3::IntVector3(&v54, 1, 0, 1);
  IntVector3::IntVector3(&v55, -1, -1, 0);
  IntVector3::IntVector3(&v56, -1, 1, 0);
  IntVector3::IntVector3(&v57, 1, -1, 0);
  IntVector3::IntVector3(&v58, 1, 1, 0);
  v16._M_array = &v47;
  v16._M_len = 12LL;
  std::allocator<IntVector3>::allocator(&v20);
  std::vector<IntVector3>::vector((std::vector<IntVector3> *const)(v1 + 304), v16, &v20);
  std::pair<Const::FromType const,std::vector<IntVector3>>::pair<Const::FromType,std::vector<IntVector3>,true>(
    &v45,
    (Const::FromType *)(v1 + 48),
    (std::vector<IntVector3> *)(v1 + 304));
  *(_DWORD *)(v1 + 64) = 3;
  IntVector3::IntVector3(&v36, -1, -1, -1);
  IntVector3::IntVector3(&v37, -1, -1, 1);
  IntVector3::IntVector3(&v38, -1, 1, -1);
  IntVector3::IntVector3(&v39, -1, 1, 1);
  IntVector3::IntVector3(&v40, 1, -1, -1);
  IntVector3::IntVector3(&v41, 1, -1, 1);
  IntVector3::IntVector3(&v42, 1, 1, -1);
  IntVector3::IntVector3(&v43, 1, 1, 1);
  v17._M_array = &v36;
  v17._M_len = 8LL;
  std::allocator<IntVector3>::allocator(&v21);
  std::vector<IntVector3>::vector((std::vector<IntVector3> *const)(v1 + 368), v17, &v21);
  std::pair<Const::FromType const,std::vector<IntVector3>>::pair<Const::FromType,std::vector<IntVector3>,true>(
    &v46,
    (Const::FromType *)(v1 + 64),
    (std::vector<IntVector3> *)(v1 + 368));
  v14._M_array = &v44;
  v14._M_len = 3LL;
  std::allocator<std::pair<Const::FromType const,std::vector<IntVector3>>>::allocator(&v23);
  std::map<Const::FromType,std::vector<IntVector3>>::map(
    (std::map<Const::FromType,std::vector<IntVector3>> *const)(v1 + 432),
    v14,
    &__comp,
    &v23);
  std::allocator<std::pair<Const::FromType const,std::vector<IntVector3>>>::~allocator(&v23);
  for ( k = &v47;
        k != (IntVector3 *)&v44;
        std::pair<Const::FromType const,std::vector<IntVector3>>::~pair((std::pair<const Const::FromType,std::vector<IntVector3> > *const)k) )
  {
    k = (IntVector3 *)((char *)k - 32);
  }
  std::vector<IntVector3>::~vector((std::vector<IntVector3> *const)(v1 + 368));
  std::allocator<IntVector3>::~allocator(&v21);
  std::vector<IntVector3>::~vector((std::vector<IntVector3> *const)(v1 + 304));
  std::allocator<IntVector3>::~allocator(&v20);
  std::vector<IntVector3>::~vector((std::vector<IntVector3> *const)(v1 + 240));
  std::allocator<IntVector3>::~allocator(&__a);
  if ( *(_WORD *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v0, &v44);
  std::make_shared<std::map<Const::FromType,std::vector<std::vector<int>>>>();
  *(_DWORD *)(v1 + 144) = 1;
  *(_DWORD *)(v1 + 148) = 2;
  *(_DWORD *)(v1 + 152) = 3;
  v18._M_array = (std::initializer_list<Const::FromType>::iterator)(v1 + 144);
  v18._M_len = 3LL;
  std::allocator<Const::FromType>::allocator((std::allocator<Const::FromType> *const)&v23);
  std::vector<Const::FromType>::vector(
    (std::vector<Const::FromType> *const)(v1 + 176),
    v18,
    (const std::vector<Const::FromType>::allocator_type *)&v23);
  std::allocator<Const::FromType>::~allocator((std::allocator<Const::FromType> *const)&v23);
  for ( i = 0; ; ++i )
  {
    v5 = i;
    if ( v5 >= std::vector<Const::FromType>::size((const std::vector<Const::FromType> *const)(v1 + 176)) )
      break;
    v6 = std::vector<Const::FromType>::operator[]((std::vector<Const::FromType> *const)(v1 + 176), i);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v1 + 48) = *v7;
    __y._M_node = std::map<Const::FromType,std::vector<IntVector3>>::end((std::map<Const::FromType,std::vector<IntVector3>> *const)(v1 + 432))._M_node;
    v27._M_node = std::map<Const::FromType,std::vector<IntVector3>>::find(
                    (std::map<Const::FromType,std::vector<IntVector3>> *const)(v1 + 432),
                    (const std::map<Const::FromType,std::vector<IntVector3>>::key_type *)(v1 + 48))._M_node;
    if ( std::operator==(&v27, &__y) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_data_processor.cpp",
        "GenerateChildrenIndexMap",
        839);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v29, (const char (*)[20])"Invalid from type. ");
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      std::vector<std::vector<int>>::vector((std::vector<std::vector<int>> *const)(v1 + 240));
      v8 = std::map<Const::FromType,std::vector<IntVector3>>::operator[](
             (std::map<Const::FromType,std::vector<IntVector3>> *const)(v1 + 432),
             (const std::map<Const::FromType,std::vector<IntVector3>>::key_type *)(v1 + 48));
      std::vector<IntVector3>::vector((std::vector<IntVector3> *const)(v1 + 304), v8);
      for ( j = 0; ; ++j )
      {
        v9 = j;
        if ( v9 >= std::vector<IntVector3>::size((const std::vector<IntVector3> *const)(v1 + 304)) )
          break;
        std::vector<int>::vector((std::vector<int> *const)(v1 + 368));
        v10 = std::vector<IntVector3>::operator[]((std::vector<IntVector3> *const)(v1 + 304), j);
        *(IntVector3 *)(v1 + 80) = IntVector3::Multiple(v10, 2);
        for ( *(_DWORD *)(v1 + 64) = 0; *(int *)(v1 + 64) <= 7; ++*(_DWORD *)(v1 + 64) )
        {
          *(IntVector3 *)(v1 + 112) = SVODataProcessor::ChildrenReferIndex(*(_DWORD *)(v1 + 64));
          *(IntVector3 *)(v1 + 144) = IntVector3::Add(
                                        (const IntVector3 *const)(v1 + 80),
                                        (const IntVector3 *)(v1 + 112));
          if ( AStarDataProcessor::CheckChildrenCloseToNeighbor(
                 *(Const::FromType *)(v1 + 48),
                 (const IntVector3 *)(v1 + 144)) )
          {
            std::vector<int>::push_back(
              (std::vector<int> *const)(v1 + 368),
              (const std::vector<int>::value_type *)(v1 + 64));
          }
        }
        std::vector<std::vector<int>>::push_back(
          (std::vector<std::vector<int>> *const)(v1 + 240),
          (const std::vector<std::vector<int>>::value_type *)(v1 + 368));
        std::vector<int>::~vector((std::vector<int> *const)(v1 + 368));
      }
      v11 = std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*(v0);
      v12 = std::map<Const::FromType,std::vector<std::vector<int>>>::operator[](
              v11,
              (const std::map<Const::FromType,std::vector<std::vector<int>>>::key_type *)(v1 + 48));
      std::vector<std::vector<int>>::operator=(v12, (const std::vector<std::vector<int>> *)(v1 + 240));
      std::vector<IntVector3>::~vector((std::vector<IntVector3> *const)(v1 + 304));
      std::vector<std::vector<int>>::~vector((std::vector<std::vector<int>> *const)(v1 + 240));
    }
  }
  std::vector<Const::FromType>::~vector((std::vector<Const::FromType> *const)(v1 + 176));
  std::map<Const::FromType,std::vector<IntVector3>>::~map((std::map<Const::FromType,std::vector<IntVector3>> *const)(v1 + 432));
  if ( v59 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2>::element_type *)v0;
  return result;
};

// Line 866: range 000000000CBEAA00-000000000CBEAE71
std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>> > __cdecl AStarDataProcessor::GenerateFromNodeVerticeIndexMap(
        const std::map<Const::FromType,std::vector<std::vector<int>>> *childrenIndexMap)
{
  const std::map<Const::FromType,std::vector<std::vector<int>>> *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>> > result; // rax
  const int *v6; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>> *v7; // r14
  std::_Rb_tree_const_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > >::pointer v8; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>>::mapped_type *v9; // rax
  std::vector<int>::value_type __x; // [rsp+18h] [rbp-158h] BYREF
  int magicNum; // [rsp+1Ch] [rbp-154h]
  std::vector<std::vector<int>>::const_iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::vector<std::vector<int>>::const_iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::vector<int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-140h] BYREF
  std::vector<int>::const_iterator __for_end_0; // [rsp+38h] [rbp-138h] BYREF
  const std::vector<std::vector<int>> *__for_range; // [rsp+40h] [rbp-130h]
  const std::vector<int> *oldIndexesList; // [rsp+48h] [rbp-128h]
  const std::vector<int> *__for_range_0; // [rsp+50h] [rbp-120h]
  const int *i; // [rsp+58h] [rbp-118h]
  char v20[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 11 iterMap:871 64 16 7 res:869 96 24 15 indexesList:872 160 24 11 indexes:874";
  *(_QWORD *)(v2 + 16) = AStarDataProcessor::GenerateFromNodeVerticeIndexMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( v1 )
  {
    std::make_shared<std::map<Const::FromType,std::vector<std::vector<int>>>>();
    magicNum = 7;
    *(std::map<Const::FromType,std::vector<std::vector<int>>>::const_iterator *)(v2 + 32) = std::map<Const::FromType,std::vector<std::vector<int>>>::begin(v1);
    while ( 1 )
    {
      __for_end_0._M_current = (const int *)std::map<Const::FromType,std::vector<std::vector<int>>>::end(v1)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > >::_Self *)(v2 + 32),
              (const std::_Rb_tree_const_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > >::_Self *)&__for_end_0) )
        break;
      std::vector<std::vector<int>>::vector((std::vector<std::vector<int>> *const)(v2 + 96));
      __for_range = &std::_Rb_tree_const_iterator<std::pair<Const::FromType const,std::vector<std::vector<int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > > *const)(v2 + 32))->second;
      __for_begin._M_current = std::vector<std::vector<int>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::vector<int>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::vector<int> const*,std::vector<std::vector<int>>>(&__for_begin, &__for_end) )
      {
        oldIndexesList = __gnu_cxx::__normal_iterator<std::vector<int> const*,std::vector<std::vector<int>>>::operator*(&__for_begin);
        std::vector<int>::vector((std::vector<int> *const)(v2 + 160));
        __for_range_0 = oldIndexesList;
        __for_begin_0._M_current = std::vector<int>::begin(oldIndexesList)._M_current;
        __for_end_0._M_current = std::vector<int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin_0, &__for_end_0) )
        {
          v6 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin_0);
          i = v6;
          if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v6);
          }
          __x = magicNum - *i;
          std::vector<int>::push_back((std::vector<int> *const)(v2 + 160), &__x);
          __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin_0);
        }
        std::vector<std::vector<int>>::push_back(
          (std::vector<std::vector<int>> *const)(v2 + 96),
          (const std::vector<std::vector<int>>::value_type *)(v2 + 160));
        std::vector<int>::~vector((std::vector<int> *const)(v2 + 160));
        __gnu_cxx::__normal_iterator<std::vector<int> const*,std::vector<std::vector<int>>>::operator++(&__for_begin);
      }
      v7 = std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v8 = std::_Rb_tree_const_iterator<std::pair<Const::FromType const,std::vector<std::vector<int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > > *const)(v2 + 32));
      v9 = std::map<Const::FromType,std::vector<std::vector<int>>>::operator[](v7, &v8->first);
      std::vector<std::vector<int>>::operator=(v9, (const std::vector<std::vector<int>> *)(v2 + 96));
      std::vector<std::vector<int>>::~vector((std::vector<std::vector<int>> *const)(v2 + 96));
      std::_Rb_tree_const_iterator<std::pair<Const::FromType const,std::vector<std::vector<int>>>>::operator++(
        (std::_Rb_tree_const_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > > *const)(v2 + 32),
        0);
    }
    std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>>>::shared_ptr(
      (std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>> > *const)childrenIndexMap,
      (std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>> > *)(v2 + 64));
    std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>>>::~shared_ptr((std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>> > *const)(v2 + 64));
  }
  else
  {
    std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>>>::shared_ptr(
      (std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>> > *const)childrenIndexMap,
      0LL);
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2>::element_type *)childrenIndexMap;
  return result;
};

// Line 888: range 000000000CBEAE72-000000000CBEAF11
bool __cdecl AStarDataProcessor::CheckChildrenCloseToNeighbor(Const::FromType fromType, const IntVector3 *relativePos)
{
  if ( fromType == DiagonalNeighbor )
  {
    if ( IntVector3::CountAbsEquals(relativePos, 1) == 3 )
      return 1;
  }
  else if ( fromType <= DiagonalNeighbor )
  {
    if ( fromType == Neighbor )
    {
      if ( IntVector3::CountAbsEquals(relativePos, 1) == 3 )
        return 1;
    }
    else if ( fromType == PlanarNeighbor && IntVector3::CountAbsEquals(relativePos, 1) == 3 )
    {
      return 1;
    }
  }
  return 0;
};

// Line 910: range 000000000CBEAF12-000000000CBEB2A5
void __cdecl ObstacleDataProcessor::GetBlockRangeIndexes(
        const ToTheMoonVector3 *minPos,
        const ToTheMoonVector3 *maxPos,
        const ToTheMoonVector3 *basePos,
        float blockSideLength,
        IntPair *minIndex,
        IntPair *maxIndex)
{
  double v6; // xmm0_8
  int v7; // ecx
  double v8; // xmm0_8
  int v9; // ecx
  double v10; // xmm0_8
  int v11; // ecx
  double v12; // xmm0_8
  int v13; // ecx

  if ( blockSideLength != 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)minPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)minPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)minPos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(minPos);
    }
    *(float *)&v6 = minPos->x;
    if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)basePos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
    {
      v6 = __asan_report_load4(basePos);
    }
    v7 = (int)std::floor((float)(*(float *)&v6 - basePos->x) / blockSideLength);
    if ( *(_BYTE *)(((unsigned __int64)minIndex >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)minIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)minIndex >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(minIndex);
    }
    minIndex->first = v7;
    if ( *(_BYTE *)(((unsigned __int64)&minPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)minPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&minPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&minPos->z);
    }
    *(float *)&v8 = minPos->z;
    if ( *(_BYTE *)(((unsigned __int64)&basePos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)basePos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&basePos->z >> 3) + 0x7FFF8000) )
    {
      v8 = __asan_report_load4(&basePos->z);
    }
    v9 = (int)std::floor((float)(*(float *)&v8 - basePos->z) / blockSideLength);
    if ( *(_BYTE *)(((unsigned __int64)&minIndex->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)minIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&minIndex->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&minIndex->second);
    }
    minIndex->second = v9;
    if ( *(_BYTE *)(((unsigned __int64)maxPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)maxPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)maxPos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(maxPos);
    }
    *(float *)&v10 = maxPos->x;
    if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)basePos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
    {
      v10 = __asan_report_load4(basePos);
    }
    v11 = (int)std::floor((float)(*(float *)&v10 - basePos->x) / blockSideLength);
    if ( *(_BYTE *)(((unsigned __int64)maxIndex >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)maxIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)maxIndex >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(maxIndex);
    }
    maxIndex->first = v11;
    if ( *(_BYTE *)(((unsigned __int64)&maxPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)maxPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&maxPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&maxPos->z);
    }
    *(float *)&v12 = maxPos->z;
    if ( *(_BYTE *)(((unsigned __int64)&basePos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)basePos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&basePos->z >> 3) + 0x7FFF8000) )
    {
      v12 = __asan_report_load4(&basePos->z);
    }
    v13 = (int)std::floor((float)(*(float *)&v12 - basePos->z) / blockSideLength);
    if ( *(_BYTE *)(((unsigned __int64)&maxIndex->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)maxIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&maxIndex->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&maxIndex->second);
    }
    maxIndex->second = v13;
  }
};
