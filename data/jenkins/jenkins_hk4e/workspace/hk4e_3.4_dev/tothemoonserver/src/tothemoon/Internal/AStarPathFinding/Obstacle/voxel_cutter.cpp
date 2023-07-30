// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Obstacle/voxel_cutter.cpp

// Line 12: range 000000000CBF9302-000000000CBF934C
void __cdecl VoxelCutter::VoxelCutter(VoxelCutter *const this)
{
  std::shared_ptr<SVOBlock> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<SVOBlock>::shared_ptr(&this->targetStaticData);
  std::shared_ptr<SVOBlock>::shared_ptr(&__r, 0LL);
  std::shared_ptr<SVOBlock>::operator=(&this->targetStaticData, &__r);
  std::shared_ptr<SVOBlock>::~shared_ptr(&__r);
};

// Line 17: range 000000000CBF934E-000000000CBF9398
void __cdecl VoxelCutter::~VoxelCutter(VoxelCutter *const this)
{
  std::shared_ptr<SVOBlock> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<SVOBlock>::shared_ptr(&__r, 0LL);
  std::shared_ptr<SVOBlock>::operator=(&this->targetStaticData, &__r);
  std::shared_ptr<SVOBlock>::~shared_ptr(&__r);
  std::shared_ptr<SVOBlock>::~shared_ptr(&this->targetStaticData);
};

// Line 23: range 000000000CBF939A-000000000CBF93A4
void __cdecl VoxelCutter::Clear(VoxelCutter *const this)
{
  ;
};

// Line 27: range 000000000CBF93A6-000000000CBF93CB
void __cdecl VoxelCutter::SetCurrentStaticData(VoxelCutter *const this, std::shared_ptr<SVOBlock> *p_staticData)
{
  std::shared_ptr<SVOBlock>::operator=(&this->targetStaticData, p_staticData);
};

// Line 32: range 000000000CBF93CC-000000000CBF9843
bool __cdecl VoxelCutter::AddObstacle(
        VoxelCutter *const this,
        const NodeObstacle *obstacle,
        int handle,
        std::shared_ptr<DynamicPlayerData> *p_dynamicData,
        std::shared_ptr<SVOWorld> *p_staticData,
        bool useEdge)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  bool result; // al
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  float *p_blockSize; // rax
  float blockSize; // r14d
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  IntPair *v16; // rax
  int i; // [rsp+38h] [rbp-158h]
  int j; // [rsp+3Ch] [rbp-154h]
  std::shared_ptr<DynamicNodesInfo> p_dynamicPlayerData; // [rsp+40h] [rbp-150h] BYREF
  std::shared_ptr<SVOBlock> p_staticPlayerData; // [rsp+50h] [rbp-140h] BYREF
  char v24[304]; // [rsp+60h] [rbp-130h] BYREF

  v6 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 32 8 16 blockIndexMin:39 64 8 16 blockIndexMax:39 96 8 13 blockIndex:45 128 12 9 minPos:37 160"
                        " 12 9 maxPos:37 192 16 18 targetBlockData:46 224 16 20 targetDynamicData:49";
  *(_QWORD *)(v6 + 16) = VoxelCutter::AddObstacle;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -219020288;
  v8[536862725] = -219020288;
  v8[536862726] = -219021312;
  v8[536862727] = -202178560;
  if ( std::operator==<DynamicPlayerData>(p_dynamicData, 0LL) || std::operator==<SVOWorld>(p_staticData, 0LL) )
  {
    result = 0;
  }
  else
  {
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v6 + 128));
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v6 + 160));
    NodeObstacle::GetBoundary(obstacle, (ToTheMoonVector3 *)(v6 + 128), (ToTheMoonVector3 *)(v6 + 160));
    IntPair::IntPair((IntPair *const)(v6 + 32));
    IntPair::IntPair((IntPair *const)(v6 + 64));
    v11 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_staticData);
    p_blockSize = &v11->blockSize;
    if ( *(_BYTE *)(((unsigned __int64)p_blockSize >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_blockSize & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_blockSize >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_blockSize);
    }
    blockSize = v11->blockSize;
    v14 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_staticData);
    ObstacleDataProcessor::GetBlockRangeIndexes(
      (const ToTheMoonVector3 *)(v6 + 128),
      (const ToTheMoonVector3 *)(v6 + 160),
      &v14->basePos,
      blockSize,
      (IntPair *)(v6 + 32),
      (IntPair *)(v6 + 64));
    for ( i = *(_DWORD *)(v6 + 32); i <= *(_DWORD *)(v6 + 64); ++i )
    {
      for ( j = *(_DWORD *)(v6 + 36); j <= *(_DWORD *)(v6 + 68); ++j )
      {
        IntPair::IntPair((IntPair *const)(v6 + 96), i, j);
        v15 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_staticData);
        SVOWorld::GetBlockData((const SVOWorld *const)(v6 + 192), (const IntPair *)v15);
        if ( !std::operator==<SVOBlock>((const std::shared_ptr<SVOBlock> *)(v6 + 192), 0LL) )
        {
          v16 = (IntPair *)std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicData);
          DynamicPlayerData::AdaptiveGetBlockNodesInfoAsHandleTarget((DynamicPlayerData *const)(v6 + 224), v16, v6 + 96);
          std::shared_ptr<SVOBlock>::shared_ptr(&p_staticPlayerData, (const std::shared_ptr<SVOBlock> *)(v6 + 192));
          std::shared_ptr<DynamicNodesInfo>::shared_ptr(
            &p_dynamicPlayerData,
            (const std::shared_ptr<DynamicNodesInfo> *)(v6 + 224));
          VoxelCutter::InnerAddObstacle(this, obstacle, handle, &p_dynamicPlayerData, &p_staticPlayerData);
          std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicPlayerData);
          std::shared_ptr<SVOBlock>::~shared_ptr(&p_staticPlayerData);
          std::shared_ptr<DynamicNodesInfo>::~shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)(v6 + 224));
        }
        std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v6 + 192));
      }
    }
    result = 1;
  }
  if ( v24 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 57: range 000000000CBF9844-000000000CBFA0EB
bool __cdecl VoxelCutter::InnerAddObstacle(
        VoxelCutter *const this,
        const NodeObstacle *obstacle,
        int handle,
        std::shared_ptr<DynamicNodesInfo> *p_dynamicPlayerData,
        std::shared_ptr<SVOBlock> *p_staticPlayerData)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool v8; // r14
  bool v9; // r14
  void *p_p_dynamicNodes; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // al
  DynamicSVONode *v14; // r14
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // al
  DynamicSVONode *v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  bool result; // al
  int i; // [rsp+38h] [rbp-138h]
  NodeObstacleRelation relation; // [rsp+3Ch] [rbp-134h]
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *dynamicNodes; // [rsp+40h] [rbp-130h]
  DynamicNodesInfo::NodeMapAscendingOrder *nodesAdded; // [rsp+48h] [rbp-128h]
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *nodesData; // [rsp+60h] [rbp-110h]
  SVONode *node; // [rsp+68h] [rbp-108h]
  std::shared_ptr<DynamicNodesInfo> p_dynamicNodes; // [rsp+70h] [rbp-100h] BYREF
  char v35[240]; // [rsp+80h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 13 childNode:110 64 16 12 operation:74 96 16 11 dynaNode:99 128 24 14 waitingList:72";
  *(_QWORD *)(v5 + 16) = VoxelCutter::InnerAddObstacle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  if ( std::operator==<DynamicNodesInfo>(p_dynamicPlayerData, 0LL) )
  {
    v8 = 0;
    goto LABEL_66;
  }
  std::shared_ptr<DynamicNodesInfo>::shared_ptr(&p_dynamicNodes, p_dynamicPlayerData);
  v9 = !VoxelCutter::PreCheckAdd(this, &p_dynamicNodes, obstacle, handle);
  std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicNodes);
  if ( v9 )
  {
    v8 = 0;
    goto LABEL_66;
  }
  std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)&p_dynamicNodes, p_staticPlayerData);
  VoxelCutter::SetCurrentStaticData(this, (std::shared_ptr<SVOBlock> *)&p_dynamicNodes);
  std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)&p_dynamicNodes);
  dynamicNodes = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicPlayerData);
  nodesAdded = DynamicNodesInfo::GetNodesAdded(dynamicNodes);
  if ( nodesAdded )
    std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::clear(nodesAdded);
  std::list<SVONode *>::list((std::list<SVONode*> *const)(v5 + 128));
  VoxelCutter::GetTopLayerNodesWithoutBlock(this, obstacle, (std::list<SVONode*> *)(v5 + 128));
  p_p_dynamicNodes = dynamicNodes;
  DynamicNodesInfo::AddHandle(
    (DynamicNodesInfo *const)(v5 + 64),
    (std::map<int,std::shared_ptr<OperationCache>> *)dynamicNodes,
    handle);
  clock();
  while ( !std::list<SVONode *>::empty((const std::list<SVONode*> *const)(v5 + 128)) )
  {
    v11 = (unsigned __int64)std::list<SVONode *>::front((std::list<SVONode*> *const)(v5 + 128));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11, p_p_dynamicNodes);
    node = *(SVONode **)v11;
    std::list<SVONode *>::pop_front((std::list<SVONode*> *const)(v5 + 128));
    if ( node )
    {
      p_p_dynamicNodes = (void *)obstacle;
      relation = ObstacleUtils::NodeRelationToObstacle(node, obstacle);
      if ( relation != Separate )
      {
        if ( relation )
          goto LABEL_23;
        if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
          __asan_report_load8(node, obstacle);
        v12 = (unsigned __int64)(node->_vptr_SVONode + 2);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8(node->_vptr_SVONode + 2, obstacle);
        if ( !(*(unsigned __int8 (__fastcall **)(SVONode *))v12)(node) )
LABEL_23:
          v13 = 0;
        else
          v13 = 1;
        if ( v13 )
        {
          VoxelCutter::GetDynamicNodeFromSrcNode(
            (const VoxelCutter *const)(v5 + 96),
            (DynamicNodesInfo *)this,
            (SVONode *)dynamicNodes);
          p_p_dynamicNodes = 0LL;
          if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v5 + 96), 0LL) )
          {
            v14 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            std::shared_ptr<OperationCache>::shared_ptr(
              (std::shared_ptr<OperationCache> *const)&p_dynamicNodes,
              (const std::shared_ptr<OperationCache> *)(v5 + 64));
            p_p_dynamicNodes = &p_dynamicNodes;
            DynamicSVONode::AddBlock(v14, (std::shared_ptr<OperationCache> *)&p_dynamicNodes);
            std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)&p_dynamicNodes);
          }
          goto LABEL_27;
        }
        if ( relation != Cross_0 )
          goto LABEL_35;
        if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
          __asan_report_load8(node, obstacle);
        v15 = (unsigned __int64)(node->_vptr_SVONode + 3);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(node->_vptr_SVONode + 3, obstacle);
        if ( (*(unsigned __int8 (__fastcall **)(SVONode *))v15)(node) )
          v16 = 1;
        else
LABEL_35:
          v16 = 0;
        if ( v16 )
        {
          VoxelCutter::GetDynamicNodeFromSrcNode(
            (const VoxelCutter *const)(v5 + 96),
            (DynamicNodesInfo *)this,
            (SVONode *)dynamicNodes);
          p_p_dynamicNodes = 0LL;
          if ( !std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v5 + 96), 0LL) )
            goto LABEL_45;
          v17 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          if ( *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8(v17 + 8, 0LL);
          if ( !*(_QWORD *)(v17 + 8) )
            goto LABEL_45;
          v18 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          if ( *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8(v18 + 8, 0LL);
          if ( !SVOLayer::IsBotLayer(*(const SVOLayer *const *)(v18 + 8)) )
            v19 = 1;
          else
LABEL_45:
            v19 = 0;
          if ( v19 )
          {
            std::shared_ptr<DynamicSVONode>::shared_ptr(
              (std::shared_ptr<DynamicSVONode> *const)&p_dynamicNodes,
              (const std::shared_ptr<DynamicSVONode> *)(v5 + 96));
            VoxelCutter::RefreshDynamicNodeChildren(
              this,
              dynamicNodes,
              (const std::shared_ptr<DynamicSVONode> *)&p_dynamicNodes,
              (std::list<SVONode*> *)(v5 + 128));
            std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)&p_dynamicNodes);
            v20 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            std::shared_ptr<OperationCache>::shared_ptr(
              (std::shared_ptr<OperationCache> *const)&p_dynamicNodes,
              (const std::shared_ptr<OperationCache> *)(v5 + 64));
            p_p_dynamicNodes = &p_dynamicNodes;
            DynamicSVONode::AddDivide(v20, (std::shared_ptr<OperationCache> *)&p_dynamicNodes);
            std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)&p_dynamicNodes);
          }
LABEL_27:
          std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v5 + 96));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
            __asan_report_load8(node, obstacle);
          v21 = (unsigned __int64)(node->_vptr_SVONode + 5);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8(node->_vptr_SVONode + 5, obstacle);
          if ( (*(unsigned __int8 (__fastcall **)(SVONode *))v21)(node) )
          {
            for ( i = 0; ; ++i )
            {
              if ( *(_BYTE *)(((unsigned __int64)&node->childNum >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&node->childNum >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&node->childNum);
              }
              if ( i >= node->childNum )
                break;
              if ( *(_BYTE *)(((unsigned __int64)&node->children >> 3) + 0x7FFF8000) )
                __asan_report_load8(&node->children, p_p_dynamicNodes);
              v22 = (unsigned __int64)&node->children[i];
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                v22 = __asan_report_load8(&node->children[i], p_p_dynamicNodes);
              *(_QWORD *)(v5 + 32) = *(_QWORD *)v22;
              p_p_dynamicNodes = (void *)(v5 + 32);
              std::list<SVONode *>::emplace_back<SVONode *&>(
                (std::list<SVONode*> *const)(v5 + 128),
                (SVONode **)(v5 + 32),
                (SVONode **)(v5 + 32));
            }
          }
        }
      }
    }
  }
  clock();
  nodesData = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicPlayerData);
  NeighborRelinker::RebuildNeighborLinkAftertAddObstacle(nodesData);
  v8 = 1;
  std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)(v5 + 64));
  std::list<SVONode *>::~list((std::list<SVONode*> *const)(v5 + 128));
LABEL_66:
  result = v8;
  if ( v35 == (char *)v5 )
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
  return result;
};

// Line 127: range 000000000CBFA0EC-000000000CBFA387
bool __cdecl VoxelCutter::RemoveObstacle(
        VoxelCutter *const this,
        std::shared_ptr<DynamicPlayerData> *p_dynamicData,
        int handle,
        bool useEdge)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // r14
  DynamicPlayerData *v8; // rax
  bool result; // al
  bool res; // [rsp+2Fh] [rbp-C1h]
  std::vector<std::shared_ptr<DynamicNodesInfo>>::iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<std::shared_ptr<DynamicNodesInfo>>::iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  std::vector<std::shared_ptr<DynamicNodesInfo>> *__for_range; // [rsp+40h] [rbp-B0h]
  std::shared_ptr<DynamicNodesInfo> *dynamicBlock; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<DynamicNodesInfo> p_dynamicPlayerData; // [rsp+50h] [rbp-A0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 23 targetDynamicBlocks:133";
  *(_QWORD *)(v4 + 16) = VoxelCutter::RemoveObstacle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( std::operator==<DynamicPlayerData>(p_dynamicData, 0LL) )
  {
    v7 = 0;
  }
  else
  {
    std::vector<std::shared_ptr<DynamicNodesInfo>>::vector((std::vector<std::shared_ptr<DynamicNodesInfo>> *const)(v4 + 32));
    v8 = std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicData);
    if ( (unsigned __int8)DynamicPlayerData::GetBlockNodesInfoFromHandle(
                            v8,
                            handle,
                            (std::vector<std::shared_ptr<DynamicNodesInfo>> *)(v4 + 32)) != 1 )
    {
      v7 = 0;
    }
    else
    {
      res = 1;
      __for_range = (std::vector<std::shared_ptr<DynamicNodesInfo>> *)(v4 + 32);
      __for_begin._M_current = std::vector<std::shared_ptr<DynamicNodesInfo>>::begin((std::vector<std::shared_ptr<DynamicNodesInfo>> *const)(v4 + 32))._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<DynamicNodesInfo>>::end((std::vector<std::shared_ptr<DynamicNodesInfo>> *const)(v4 + 32))._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<DynamicNodesInfo> *,std::vector<std::shared_ptr<DynamicNodesInfo>>>(
                &__for_begin,
                &__for_end) )
      {
        dynamicBlock = __gnu_cxx::__normal_iterator<std::shared_ptr<DynamicNodesInfo> *,std::vector<std::shared_ptr<DynamicNodesInfo>>>::operator*(&__for_begin);
        std::shared_ptr<DynamicNodesInfo>::shared_ptr(&p_dynamicPlayerData, dynamicBlock);
        res = (res & VoxelCutter::InnerRemoveObstacle(this, &p_dynamicPlayerData, handle, useEdge)) != 0;
        std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicPlayerData);
        __gnu_cxx::__normal_iterator<std::shared_ptr<DynamicNodesInfo> *,std::vector<std::shared_ptr<DynamicNodesInfo>>>::operator++(&__for_begin);
      }
      v7 = res;
    }
    std::vector<std::shared_ptr<DynamicNodesInfo>>::~vector((std::vector<std::shared_ptr<DynamicNodesInfo>> *const)(v4 + 32));
  }
  result = v7;
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
  return result;
};

// Line 144: range 000000000CBFA388-000000000CBFB0EF
bool __cdecl VoxelCutter::InnerRemoveObstacle(
        VoxelCutter *const this,
        std::shared_ptr<DynamicNodesInfo> *p_dynamicPlayerData,
        int handle,
        bool useEdge)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // r14
  bool v8; // r14
  const unsigned __int64 *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  DynamicSVONode *v13; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  char v17; // r14
  DynamicSVONode *v18; // rax
  DynamicSVONode *v19; // rax
  const unsigned __int64 *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  DynamicSVONode *v24; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  char v28; // r14
  DynamicSVONode *v29; // rax
  DynamicSVONode *v30; // rax
  const unsigned __int64 *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  DynamicSVONode *v35; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  char v38; // al
  DynamicSVONode *v39; // rax
  bool result; // al
  std::map<int,std::vector<long unsigned int>>::iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  std::map<int,std::vector<long unsigned int>>::iterator __for_end; // [rsp+30h] [rbp-190h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-188h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-180h] BYREF
  DynamicNodesInfo *dynamicNodes; // [rsp+48h] [rbp-178h]
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > > *nodesDestoryed; // [rsp+50h] [rbp-170h]
  std::map<int,std::vector<long unsigned int>> *__for_range; // [rsp+58h] [rbp-168h]
  std::map<int,std::vector<long unsigned int>> *__for_range_1; // [rsp+60h] [rbp-160h]
  std::map<int,std::vector<long unsigned int>> *__for_range_3; // [rsp+68h] [rbp-158h]
  const std::pair<int const,std::vector<long unsigned int> > *layerEdgeBlockL1; // [rsp+70h] [rbp-150h]
  const std::vector<long unsigned int> *indexList_1; // [rsp+78h] [rbp-148h]
  const std::vector<long unsigned int> *__for_range_4; // [rsp+80h] [rbp-140h]
  const unsigned __int64 *index_1; // [rsp+88h] [rbp-138h]
  const std::pair<int const,std::vector<long unsigned int> > *layerDivideRefer; // [rsp+90h] [rbp-130h]
  const std::vector<long unsigned int> *indexList_0; // [rsp+98h] [rbp-128h]
  const std::vector<long unsigned int> *__for_range_2; // [rsp+A0h] [rbp-120h]
  const unsigned __int64 *index_0; // [rsp+A8h] [rbp-118h]
  const std::pair<int const,std::vector<long unsigned int> > *layerBlockRefer; // [rsp+B0h] [rbp-110h]
  const std::vector<long unsigned int> *indexList; // [rsp+B8h] [rbp-108h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+C0h] [rbp-100h]
  const unsigned __int64 *index; // [rsp+C8h] [rbp-F8h]
  common::milog::MiLogStream v64; // [rsp+D0h] [rbp-F0h] BYREF
  char v65[208]; // [rsp+F0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 9 layer:207 64 16 6 op:150 96 16 8 node:185 128 16 8 node:210";
  *(_QWORD *)(v4 + 16) = VoxelCutter::InnerRemoveObstacle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  if ( std::operator==<DynamicNodesInfo>(p_dynamicPlayerData, 0LL) )
  {
    v7 = 0;
  }
  else
  {
    std::shared_ptr<DynamicNodesInfo>::shared_ptr(
      (std::shared_ptr<DynamicNodesInfo> *const)(v4 + 128),
      p_dynamicPlayerData);
    v8 = !VoxelCutter::PreCheckRemove(this, (const std::shared_ptr<DynamicNodesInfo> *)(v4 + 128), handle);
    std::shared_ptr<DynamicNodesInfo>::~shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)(v4 + 128));
    if ( v8 )
    {
      v7 = 0;
    }
    else
    {
      dynamicNodes = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicPlayerData);
      DynamicNodesInfo::GetOperation(
        (const DynamicNodesInfo *const)(v4 + 64),
        (const std::map<int,std::shared_ptr<OperationCache>> *)dynamicNodes,
        handle);
      if ( std::operator==<OperationCache>((const std::shared_ptr<OperationCache> *)(v4 + 64), 0LL) )
      {
        v7 = 0;
      }
      else
      {
        nodesDestoryed = DynamicNodesInfo::GetNodesDestroyed(dynamicNodes);
        if ( nodesDestoryed )
          std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::clear(nodesDestoryed);
        __for_range = (std::map<int,std::vector<long unsigned int>> *)std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        __for_begin._M_node = std::map<int,std::vector<unsigned long>>::begin(__for_range)._M_node;
        __for_end._M_node = std::map<int,std::vector<unsigned long>>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          layerBlockRefer = std::_Rb_tree_iterator<std::pair<int const,std::vector<unsigned long>>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)layerBlockRefer >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)layerBlockRefer >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(layerBlockRefer);
          }
          *(_DWORD *)(v4 + 48) = layerBlockRefer->first;
          indexList = &layerBlockRefer->second;
          __for_range_0 = &layerBlockRefer->second;
          __for_begin_0._M_current = std::vector<unsigned long>::begin(&layerBlockRefer->second)._M_current;
          __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
          {
            v9 = __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
            index = v9;
            if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v9, &__for_end_0);
            DynamicNodesInfo::GetNode(
              (const DynamicNodesInfo *const)(v4 + 96),
              &dynamicNodes->nodeMap,
              *(unsigned int *)(v4 + 48),
              *index);
            if ( std::operator==<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v4 + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v64,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/tothemoon/Internal/AStarPathFinding/Obstacle/voxel_cutter.cpp",
                "InnerRemoveObstacle",
                165);
              v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v64,
                      (const char (*)[32])"Can't find dynamic node. Layer ");
              v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
              v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" Index ");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, index);
              common::milog::MiLogStream::~MiLogStream(&v64);
            }
            else
            {
              v13 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              DynamicSVONode::ReduceBlock(v13);
              v14 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              if ( !DynamicSVONode::GetBlockCnt(v14) )
              {
                v15 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                if ( DynamicSVONode::GetDivideCnt(v15) )
                {
                  v19 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  DynamicSVONode::SetAreaType(v19, Mixed);
                }
                else
                {
                  v16 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  v17 = 0;
                  if ( DynamicSVONode::IsUnique(v16) )
                  {
                    v18 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                    DynamicSVONode::SetAreaType(v18, Walkable);
                  }
                  else
                  {
                    std::shared_ptr<DynamicSVONode>::shared_ptr(
                      (std::shared_ptr<DynamicSVONode> *const)(v4 + 128),
                      (const std::shared_ptr<DynamicSVONode> *)(v4 + 96));
                    v17 = 1;
                    DynamicNodesInfo::DestroyNode(dynamicNodes, (std::shared_ptr<DynamicSVONode> *)(v4 + 128));
                  }
                  if ( v17 )
                    std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 128));
                }
              }
            }
            std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 96));
            __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
          }
          std::_Rb_tree_iterator<std::pair<int const,std::vector<unsigned long>>>::operator++(&__for_begin);
        }
        __for_range_1 = &std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->divide_refer;
        __for_begin._M_node = std::map<int,std::vector<unsigned long>>::begin(__for_range_1)._M_node;
        __for_end._M_node = std::map<int,std::vector<unsigned long>>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          layerDivideRefer = std::_Rb_tree_iterator<std::pair<int const,std::vector<unsigned long>>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)layerDivideRefer >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)layerDivideRefer >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(layerDivideRefer);
          }
          *(_DWORD *)(v4 + 48) = layerDivideRefer->first;
          indexList_0 = &layerDivideRefer->second;
          __for_range_2 = &layerDivideRefer->second;
          __for_begin_0._M_current = std::vector<unsigned long>::begin(&layerDivideRefer->second)._M_current;
          __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_2)._M_current;
          while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
          {
            v20 = __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
            index_0 = v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v20, &__for_end_0);
            DynamicNodesInfo::GetNode(
              (const DynamicNodesInfo *const)(v4 + 96),
              &dynamicNodes->nodeMap,
              *(unsigned int *)(v4 + 48),
              *index_0);
            if ( std::operator==<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v4 + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v64,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/tothemoon/Internal/AStarPathFinding/Obstacle/voxel_cutter.cpp",
                "InnerRemoveObstacle",
                188);
              v21 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v64,
                      (const char (*)[32])"Can't find dynamic node. Layer ");
              v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v4 + 48));
              v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" Index ");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, index_0);
              common::milog::MiLogStream::~MiLogStream(&v64);
            }
            else
            {
              v24 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              DynamicSVONode::ReduceDivide(v24);
              v25 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              if ( !DynamicSVONode::GetDivideCnt(v25) )
              {
                v26 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                if ( DynamicSVONode::GetBlockCnt(v26) )
                {
                  v30 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  DynamicSVONode::SetAreaType(v30, Blocked);
                }
                else
                {
                  v27 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  v28 = 0;
                  if ( DynamicSVONode::IsUnique(v27) )
                  {
                    v29 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                    DynamicSVONode::SetAreaType(v29, Walkable);
                  }
                  else
                  {
                    std::shared_ptr<DynamicSVONode>::shared_ptr(
                      (std::shared_ptr<DynamicSVONode> *const)(v4 + 128),
                      (const std::shared_ptr<DynamicSVONode> *)(v4 + 96));
                    v28 = 1;
                    DynamicNodesInfo::DestroyNode(dynamicNodes, (std::shared_ptr<DynamicSVONode> *)(v4 + 128));
                  }
                  if ( v28 )
                    std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 128));
                }
                std::shared_ptr<DynamicSVONode>::shared_ptr(
                  (std::shared_ptr<DynamicSVONode> *const)(v4 + 128),
                  (const std::shared_ptr<DynamicSVONode> *)(v4 + 96));
                DynamicNodesInfo::DestroyNodeChildren(dynamicNodes, (std::shared_ptr<DynamicSVONode> *)(v4 + 128));
                std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 128));
              }
            }
            std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 96));
            __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
          }
          std::_Rb_tree_iterator<std::pair<int const,std::vector<unsigned long>>>::operator++(&__for_begin);
        }
        if ( useEdge )
        {
          __for_range_3 = &std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->edge_block_refer_l1;
          __for_begin._M_node = std::map<int,std::vector<unsigned long>>::begin(__for_range_3)._M_node;
          __for_end._M_node = std::map<int,std::vector<unsigned long>>::end(__for_range_3)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            layerEdgeBlockL1 = std::_Rb_tree_iterator<std::pair<int const,std::vector<unsigned long>>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)layerEdgeBlockL1 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)layerEdgeBlockL1 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(layerEdgeBlockL1);
            }
            *(_DWORD *)(v4 + 48) = layerEdgeBlockL1->first;
            indexList_1 = &layerEdgeBlockL1->second;
            __for_range_4 = &layerEdgeBlockL1->second;
            __for_begin_0._M_current = std::vector<unsigned long>::begin(&layerEdgeBlockL1->second)._M_current;
            __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_4)._M_current;
            while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
            {
              v31 = __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
              index_1 = v31;
              if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v31, &__for_end_0);
              DynamicNodesInfo::GetNode(
                (const DynamicNodesInfo *const)(v4 + 128),
                &dynamicNodes->nodeMap,
                *(unsigned int *)(v4 + 48),
                *index_1);
              if ( std::operator==<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v4 + 128), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v64,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "./src/tothemoon/Internal/AStarPathFinding/Obstacle/voxel_cutter.cpp",
                  "InnerRemoveObstacle",
                  213);
                v32 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        &v64,
                        (const char (*)[32])"Can't find dynamic node. Layer ");
                v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, (const int *)(v4 + 48));
                v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])" Index ");
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v34, index_1);
                common::milog::MiLogStream::~MiLogStream(&v64);
              }
              else
              {
                v35 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                DynamicSVONode::ReduceEdgeBlocked(v35);
                v36 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                if ( DynamicSVONode::GetEdgeBlockCnt(v36) )
                  goto LABEL_69;
                v37 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v37->area >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v37->area >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&v37->area);
                }
                if ( v37->area == Blocked )
LABEL_69:
                  v38 = 0;
                else
                  v38 = 1;
                if ( v38 )
                {
                  v39 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                  DynamicSVONode::RestoreArea(v39);
                }
              }
              std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 128));
              __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
            }
            std::_Rb_tree_iterator<std::pair<int const,std::vector<unsigned long>>>::operator++(&__for_begin);
          }
        }
        v7 = (unsigned __int8)DynamicNodesInfo::RemoveHandle(dynamicNodes, handle) == 1;
      }
      std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)(v4 + 64));
    }
  }
  result = v7;
  if ( v65 == (char *)v4 )
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
  return result;
};

// Line 232: range 000000000CBFB0F0-000000000CBFB443
bool __cdecl VoxelCutter::InnerAddObstacleWithEdgeBlock(
        VoxelCutter *const this,
        const NodeObstacle *obstacle,
        int handle,
        std::shared_ptr<DynamicNodesInfo> *p_dynamicPlayerData)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  NodeObstacleType type; // esi
  bool v8; // r14
  bool result; // al
  ToTheMoonVector3 extents; // [rsp+24h] [rbp-ECh]
  std::shared_ptr<DynamicNodesInfo> v14; // [rsp+30h] [rbp-E0h] BYREF
  char v15[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 72 16 edgeObstacle:233";
  *(_QWORD *)(v4 + 16) = VoxelCutter::InnerAddObstacleWithEdgeBlock;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  extents = ToTheMoonVector3::Increase(&obstacle->halfExtents, 0.5);
  if ( *(_BYTE *)(((unsigned __int64)obstacle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)obstacle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(obstacle);
  }
  type = obstacle->type;
  if ( (((unsigned __int8)obstacle + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&obstacle->center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)obstacle + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&obstacle->center.z + 3) >> 3)
                                                          + 0x7FFF8000) )
  {
    type = 12;
    __asan_report_load_n(&obstacle->center, 12LL);
  }
  if ( (((unsigned __int8)obstacle + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&obstacle->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&obstacle->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&obstacle->rotation.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)obstacle + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&obstacle->rotation.w + 3) >> 3)
                                                          + 0x7FFF8000) )
  {
    type = 16;
    __asan_report_load_n(&obstacle->rotation, 16LL);
  }
  NodeObstacle::NodeObstacle((NodeObstacle *const)(v4 + 48), type, obstacle->center, extents, obstacle->rotation);
  std::shared_ptr<DynamicNodesInfo>::shared_ptr(&v14, p_dynamicPlayerData);
  v8 = VoxelCutter::InnerAddObstacleWithTwoLayer(this, (const NodeObstacle *)(v4 + 48), obstacle, handle, &v14);
  std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&v14);
  NodeObstacle::~NodeObstacle((NodeObstacle *const)(v4 + 48));
  result = v8;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 238: range 000000000CBFB444-000000000CBFC1E0
bool __cdecl VoxelCutter::InnerAddObstacleWithTwoLayer(
        VoxelCutter *const this,
        const NodeObstacle *edgeObstacle,
        const NodeObstacle *realObstacle,
        int handle,
        std::shared_ptr<DynamicNodesInfo> *p_dynamicPlayerData)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool v8; // r14
  bool v9; // r14
  void *p_p_dynamicNodes; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // al
  DynamicSVONode *v14; // r14
  DynamicSVONode *v16; // r14
  unsigned __int64 v17; // rax
  DynamicSVONode *v18; // r14
  DynamicSVONode *v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  SVOLayer *layer; // rax
  char v23; // dl
  DynamicSVONode *v24; // r14
  unsigned __int64 v25; // rax
  DynamicSVONode *v26; // r14
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  bool result; // al
  int i; // [rsp+30h] [rbp-150h]
  int i_0; // [rsp+34h] [rbp-14Ch]
  NodeObstacleRelation outerRelation; // [rsp+38h] [rbp-148h]
  NodeObstacleRelation innerrRlation; // [rsp+3Ch] [rbp-144h]
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *dynamicNodes; // [rsp+40h] [rbp-140h]
  DynamicNodesInfo::NodeMapAscendingOrder *nodesAdded; // [rsp+48h] [rbp-138h]
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *nodesData; // [rsp+50h] [rbp-130h]
  SVONode *node; // [rsp+58h] [rbp-128h]
  std::shared_ptr<DynamicNodesInfo> p_dynamicNodes; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v43; // [rsp+70h] [rbp-110h] BYREF
  char v44[240]; // [rsp+90h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 13 childNode:337 64 16 13 operation:255 96 16 12 dynaNode:326 128 24 15 waitingList:253";
  *(_QWORD *)(v5 + 16) = VoxelCutter::InnerAddObstacleWithTwoLayer;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  if ( std::operator==<DynamicNodesInfo>(p_dynamicPlayerData, 0LL) )
  {
    v8 = 0;
    goto LABEL_100;
  }
  std::shared_ptr<DynamicNodesInfo>::shared_ptr(&p_dynamicNodes, p_dynamicPlayerData);
  v9 = !VoxelCutter::PreCheckAdd(this, &p_dynamicNodes, realObstacle, handle);
  std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicNodes);
  if ( v9 )
  {
    v8 = 0;
    goto LABEL_100;
  }
  dynamicNodes = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicPlayerData);
  nodesAdded = DynamicNodesInfo::GetNodesAdded(dynamicNodes);
  if ( nodesAdded )
    std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::clear(nodesAdded);
  std::list<SVONode *>::list((std::list<SVONode*> *const)(v5 + 128));
  VoxelCutter::GetTopLayerNodesWithoutBlock(this, edgeObstacle, (std::list<SVONode*> *)(v5 + 128));
  p_p_dynamicNodes = dynamicNodes;
  DynamicNodesInfo::AddHandle(
    (DynamicNodesInfo *const)(v5 + 64),
    (std::map<int,std::shared_ptr<OperationCache>> *)dynamicNodes,
    handle);
  while ( std::list<SVONode *>::size((const std::list<SVONode*> *const)(v5 + 128)) )
  {
    v11 = (unsigned __int64)std::list<SVONode *>::front((std::list<SVONode*> *const)(v5 + 128));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11, p_p_dynamicNodes);
    node = *(SVONode **)v11;
    std::list<SVONode *>::pop_front((std::list<SVONode*> *const)(v5 + 128));
    if ( node )
    {
      if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->layer, p_p_dynamicNodes);
      if ( node->layer )
      {
        p_p_dynamicNodes = (void *)edgeObstacle;
        outerRelation = ObstacleUtils::NodeRelationToObstacle(node, edgeObstacle);
        if ( outerRelation != Separate )
        {
          p_p_dynamicNodes = (void *)realObstacle;
          innerrRlation = ObstacleUtils::NodeRelationToObstacle(node, realObstacle);
          if ( innerrRlation )
            goto LABEL_26;
          if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
            __asan_report_load8(node, realObstacle);
          v12 = (unsigned __int64)(node->_vptr_SVONode + 2);
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8(node->_vptr_SVONode + 2, realObstacle);
          if ( !(*(unsigned __int8 (__fastcall **)(SVONode *))v12)(node) )
LABEL_26:
            v13 = 0;
          else
            v13 = 1;
          if ( v13 )
          {
            VoxelCutter::GetDynamicNodeFromSrcNode(
              (const VoxelCutter *const)(v5 + 96),
              (DynamicNodesInfo *)this,
              (SVONode *)dynamicNodes);
            p_p_dynamicNodes = 0LL;
            if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v5 + 96), 0LL) )
            {
              v14 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              std::shared_ptr<OperationCache>::shared_ptr(
                (std::shared_ptr<OperationCache> *const)&p_dynamicNodes,
                (const std::shared_ptr<OperationCache> *)(v5 + 64));
              p_p_dynamicNodes = &p_dynamicNodes;
              DynamicSVONode::AddBlock(v14, (std::shared_ptr<OperationCache> *)&p_dynamicNodes);
              std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)&p_dynamicNodes);
            }
            goto LABEL_81;
          }
          if ( innerrRlation == Separate )
          {
            if ( SVONode::InBotLayer(node) || outerRelation == In_0 )
            {
              VoxelCutter::GetDynamicNodeFromSrcNode(
                (const VoxelCutter *const)(v5 + 96),
                (DynamicNodesInfo *)this,
                (SVONode *)dynamicNodes);
              p_p_dynamicNodes = 0LL;
              if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v5 + 96), 0LL) )
              {
                v16 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                std::shared_ptr<OperationCache>::shared_ptr(
                  (std::shared_ptr<OperationCache> *const)&p_dynamicNodes,
                  (const std::shared_ptr<OperationCache> *)(v5 + 64));
                p_p_dynamicNodes = &p_dynamicNodes;
                DynamicSVONode::AddEdgeBlocked(v16, (std::shared_ptr<OperationCache> *)&p_dynamicNodes);
                std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)&p_dynamicNodes);
              }
              goto LABEL_81;
            }
            if ( outerRelation == Cross_0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
                __asan_report_load8(node, realObstacle);
              v17 = (unsigned __int64)(node->_vptr_SVONode + 3);
              if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
                v17 = __asan_report_load8(node->_vptr_SVONode + 3, realObstacle);
              if ( (*(unsigned __int8 (__fastcall **)(SVONode *))v17)(node) )
              {
                if ( SVONode::InBotLayer(node) )
                {
                  VoxelCutter::GetDynamicNodeFromSrcNode(
                    (const VoxelCutter *const)(v5 + 96),
                    (DynamicNodesInfo *)this,
                    (SVONode *)dynamicNodes);
                  if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v5 + 96), 0LL) )
                  {
                    v18 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                    std::shared_ptr<OperationCache>::shared_ptr(
                      (std::shared_ptr<OperationCache> *const)&p_dynamicNodes,
                      (const std::shared_ptr<OperationCache> *)(v5 + 64));
                    DynamicSVONode::AddEdgeBlocked(v18, (std::shared_ptr<OperationCache> *)&p_dynamicNodes);
                    std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)&p_dynamicNodes);
                  }
                  std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v5 + 96));
                }
                VoxelCutter::GetDynamicNodeFromSrcNode(
                  (const VoxelCutter *const)(v5 + 96),
                  (DynamicNodesInfo *)this,
                  (SVONode *)dynamicNodes);
                p_p_dynamicNodes = 0LL;
                if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v5 + 96), 0LL) )
                {
                  std::shared_ptr<DynamicSVONode>::shared_ptr(
                    (std::shared_ptr<DynamicSVONode> *const)&p_dynamicNodes,
                    (const std::shared_ptr<DynamicSVONode> *)(v5 + 96));
                  VoxelCutter::RefreshDynamicNodeChildren(
                    this,
                    dynamicNodes,
                    (const std::shared_ptr<DynamicSVONode> *)&p_dynamicNodes,
                    (std::list<SVONode*> *)(v5 + 128));
                  std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)&p_dynamicNodes);
                  v19 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                  std::shared_ptr<OperationCache>::shared_ptr(
                    (std::shared_ptr<OperationCache> *const)&p_dynamicNodes,
                    (const std::shared_ptr<OperationCache> *)(v5 + 64));
                  p_p_dynamicNodes = &p_dynamicNodes;
                  DynamicSVONode::AddDivide(v19, (std::shared_ptr<OperationCache> *)&p_dynamicNodes);
                  std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)&p_dynamicNodes);
                }
                goto LABEL_81;
              }
              if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
                __asan_report_load8(node, realObstacle);
              v20 = (unsigned __int64)(node->_vptr_SVONode + 5);
              if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                v20 = __asan_report_load8(node->_vptr_SVONode + 5, realObstacle);
              if ( (*(unsigned __int8 (__fastcall **)(SVONode *))v20)(node) )
              {
                for ( i = 0; i <= 7; ++i )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&node->children >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&node->children, p_p_dynamicNodes);
                  v21 = (unsigned __int64)&node->children[i];
                  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                    v21 = __asan_report_load8(&node->children[i], p_p_dynamicNodes);
                  *(_QWORD *)(v5 + 32) = *(_QWORD *)v21;
                  p_p_dynamicNodes = (void *)(v5 + 32);
                  std::list<SVONode *>::emplace_back<SVONode *&>(
                    (std::list<SVONode*> *const)(v5 + 128),
                    (SVONode **)(v5 + 32),
                    (SVONode **)(v5 + 32));
                }
              }
            }
          }
          else if ( innerrRlation == Cross_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node->layer, realObstacle);
            layer = node->layer;
            v23 = *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000);
            LOBYTE(p_p_dynamicNodes) = v23 != 0;
            if ( v23 != 0 && v23 <= 3 )
              __asan_report_load4(node->layer);
            if ( !layer->level )
            {
              VoxelCutter::GetDynamicNodeFromSrcNode(
                (const VoxelCutter *const)(v5 + 96),
                (DynamicNodesInfo *)this,
                (SVONode *)dynamicNodes);
              p_p_dynamicNodes = 0LL;
              if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v5 + 96), 0LL) )
              {
                v24 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                std::shared_ptr<OperationCache>::shared_ptr(
                  (std::shared_ptr<OperationCache> *const)&p_dynamicNodes,
                  (const std::shared_ptr<OperationCache> *)(v5 + 64));
                p_p_dynamicNodes = &p_dynamicNodes;
                DynamicSVONode::AddBlock(v24, (std::shared_ptr<OperationCache> *)&p_dynamicNodes);
                std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)&p_dynamicNodes);
              }
              goto LABEL_81;
            }
            if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
              __asan_report_load8(node, p_p_dynamicNodes);
            v25 = (unsigned __int64)(node->_vptr_SVONode + 3);
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
              v25 = __asan_report_load8(node->_vptr_SVONode + 3, p_p_dynamicNodes);
            if ( (*(unsigned __int8 (__fastcall **)(SVONode *))v25)(node) )
            {
              VoxelCutter::GetDynamicNodeFromSrcNode(
                (const VoxelCutter *const)(v5 + 96),
                (DynamicNodesInfo *)this,
                (SVONode *)dynamicNodes);
              p_p_dynamicNodes = 0LL;
              if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v5 + 96), 0LL) )
              {
                std::shared_ptr<DynamicSVONode>::shared_ptr(
                  (std::shared_ptr<DynamicSVONode> *const)&p_dynamicNodes,
                  (const std::shared_ptr<DynamicSVONode> *)(v5 + 96));
                VoxelCutter::RefreshDynamicNodeChildren(
                  this,
                  dynamicNodes,
                  (const std::shared_ptr<DynamicSVONode> *)&p_dynamicNodes,
                  (std::list<SVONode*> *)(v5 + 128));
                std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)&p_dynamicNodes);
                v26 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                std::shared_ptr<OperationCache>::shared_ptr(
                  (std::shared_ptr<OperationCache> *const)&p_dynamicNodes,
                  (const std::shared_ptr<OperationCache> *)(v5 + 64));
                p_p_dynamicNodes = &p_dynamicNodes;
                DynamicSVONode::AddDivide(v26, (std::shared_ptr<OperationCache> *)&p_dynamicNodes);
                std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)&p_dynamicNodes);
              }
LABEL_81:
              std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v5 + 96));
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
                __asan_report_load8(node, p_p_dynamicNodes);
              v27 = (unsigned __int64)(node->_vptr_SVONode + 5);
              if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                v27 = __asan_report_load8(node->_vptr_SVONode + 5, p_p_dynamicNodes);
              if ( (*(unsigned __int8 (__fastcall **)(SVONode *))v27)(node) )
              {
                for ( i_0 = 0; i_0 <= 7; ++i_0 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&node->children >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&node->children, p_p_dynamicNodes);
                  v28 = (unsigned __int64)&node->children[i_0];
                  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
                    v28 = __asan_report_load8(&node->children[i_0], p_p_dynamicNodes);
                  *(_QWORD *)(v5 + 32) = *(_QWORD *)v28;
                  p_p_dynamicNodes = (void *)(v5 + 32);
                  std::list<SVONode *>::emplace_back<SVONode *&>(
                    (std::list<SVONode*> *const)(v5 + 128),
                    (SVONode **)(v5 + 32),
                    (SVONode **)(v5 + 32));
                }
              }
            }
          }
        }
      }
    }
  }
  if ( std::operator==<DynamicNodesInfo>(p_dynamicPlayerData, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/Obstacle/voxel_cutter.cpp",
      "InnerAddObstacleWithTwoLayer",
      347);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v43,
      (const char (*)[44])"[ToTheMoon] [AddObs] playerNodeData is null");
    common::milog::MiLogStream::~MiLogStream(&v43);
    v8 = 0;
  }
  else
  {
    nodesData = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicPlayerData);
    NeighborRelinker::RebuildNeighborLinkAftertAddObstacle(nodesData);
    v8 = 1;
  }
  std::shared_ptr<OperationCache>::~shared_ptr((std::shared_ptr<OperationCache> *const)(v5 + 64));
  std::list<SVONode *>::~list((std::list<SVONode*> *const)(v5 + 128));
LABEL_100:
  result = v8;
  if ( v44 == (char *)v5 )
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
  return result;
};

// Line 358: range 000000000CBFC1E2-000000000CBFC416
void __cdecl VoxelCutter::GetTopLayerNodesWithoutBlock(
        const VoxelCutter *const this,
        const NodeObstacle *obstacle,
        std::list<SVONode*> *nodeList)
{
  unsigned __int64 v3; // rax
  char v4; // al
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  SVONode **v7; // rax
  SVONode *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  char v13; // al
  std::vector<SVONode*>::iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::vector<SVONode*>::iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  SVOLayer *topLayerData; // [rsp+38h] [rbp-18h]
  std::vector<SVONode*> *__for_range; // [rsp+40h] [rbp-10h]
  SVONode **node; // [rsp+48h] [rbp-8h]

  if ( std::operator==<SVOBlock>(&this->targetStaticData, 0LL) )
    goto LABEL_5;
  v3 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v3, 0LL);
  if ( *(_QWORD *)v3 )
    v4 = 0;
  else
LABEL_5:
    v4 = 1;
  if ( !v4 )
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5, 0LL);
    v6 = (unsigned __int64)std::vector<SVOLayer *>::operator[](*(std::vector<SVOLayer*> *const *)v5, 9uLL);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6, 9LL);
    topLayerData = *(SVOLayer **)v6;
    if ( topLayerData )
    {
      __for_range = &topLayerData->nodeData;
      __for_begin._M_current = std::vector<SVONode *>::begin(&topLayerData->nodeData)._M_current;
      __for_end._M_current = std::vector<SVONode *>::end(&topLayerData->nodeData)._M_current;
      while ( __gnu_cxx::operator!=<SVONode **,std::vector<SVONode *>>(&__for_begin, &__for_end) )
      {
        v7 = __gnu_cxx::__normal_iterator<SVONode **,std::vector<SVONode *>>::operator*(&__for_begin);
        node = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v7, &__for_end);
        v8 = *node;
        v9 = *node;
        v10 = *(unsigned __int8 *)(((unsigned __int64)*node >> 3) + 0x7FFF8000);
        if ( (_BYTE)v10 )
          v9 = (_QWORD *)__asan_report_load8(*node, v10);
        v11 = *v9 + 32LL;
        v12 = *(unsigned __int8 *)((v11 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v12 )
          v11 = __asan_report_load8(v11, v12);
        if ( (*(unsigned __int8 (__fastcall **)(SVONode *))v11)(v8) == 1 )
          goto LABEL_26;
        if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
          __asan_report_load8(node, v12);
        if ( !ObstacleUtils::FastNoCollideCheck(*node, obstacle) )
          v13 = 1;
        else
LABEL_26:
          v13 = 0;
        if ( v13 )
          std::list<SVONode *>::emplace_back<SVONode *&>(nodeList, node, node);
        __gnu_cxx::__normal_iterator<SVONode **,std::vector<SVONode *>>::operator++(&__for_begin);
      }
    }
  }
};

// Line 377: range 000000000CBFC418-000000000CBFC46E
std::shared_ptr<DynamicSVONode> __cdecl VoxelCutter::GetDynamicNodeFromSrcNode(
        const VoxelCutter *const this,
        DynamicNodesInfo *dynamicNodes,
        SVONode *node)
{
  SVONode *v3; // rcx
  std::shared_ptr<DynamicSVONode> result; // rax
  SVONode *nodea; // [rsp+0h] [rbp-20h]

  nodea = v3;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, dynamicNodes);
  DynamicNodesInfo::AdaptiveGetNode((DynamicNodesInfo *const)this, (DynamicNodesInfo *)node, (__int64)nodea);
  result._M_ptr = (std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 382: range 000000000CBFC470-000000000CBFC986
void __cdecl VoxelCutter::RefreshDynamicNodeChildren(
        VoxelCutter *const this,
        DynamicNodesInfo *dynamicNodes,
        const std::shared_ptr<DynamicSVONode> *p_dynaNode,
        std::list<SVONode*> *childrenResult)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // al
  VoxelCutter *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  unsigned int v16; // r14d
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *blockData; // [rsp+8h] [rbp-118h]
  int i; // [rsp+38h] [rbp-E8h]
  int i_0; // [rsp+3Ch] [rbp-E4h]
  DynamicSVONode *__args_0; // [rsp+40h] [rbp-E0h] BYREF
  unsigned __int64 firstChildIndex; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 14 childLayer:389 64 16 14 staticData:387 96 16 9 child:401";
  *(_QWORD *)(v4 + 16) = VoxelCutter::RefreshDynamicNodeChildren;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( std::operator==<DynamicSVONode>(p_dynaNode, 0LL) )
    goto LABEL_13;
  v7 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynaNode);
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7 + 8, 0LL);
  if ( !*(_QWORD *)(v7 + 8) )
    goto LABEL_13;
  v8 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynaNode);
  if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8 + 8, 0LL);
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v9 >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v9);
  if ( *(int *)v9 > 0 )
    v10 = 0;
  else
LABEL_13:
    v10 = 1;
  if ( !v10 )
  {
    v11 = this;
    std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)(v4 + 64), &this->targetStaticData);
    v12 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynaNode);
    if ( *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12 + 8, this);
    v13 = *(_QWORD *)(v12 + 8);
    v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v14 != 0;
    if ( v14 != 0 && v14 <= 3 )
      __asan_report_load4(v13);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)v13 - 1;
    v15 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynaNode);
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 24) >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8(v15 + 24, v11);
    firstChildIndex = MortonCodeCalculator::ParentIndexToFirstChildIndex(*(_QWORD *)(v15 + 24));
    if ( !DynamicNodesInfo::ContainsNode(dynamicNodes, *(_DWORD *)(v4 + 48), firstChildIndex) )
    {
      for ( i = 0; i <= 7; ++i )
      {
        blockData = std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 64));
        v16 = *(_DWORD *)(v4 + 48);
        std::shared_ptr<DynamicSVONode>::shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 96), p_dynaNode);
        DynamicNodesInfo::AddChildNode(
          dynamicNodes,
          (std::shared_ptr<DynamicSVONode> *)(v4 + 96),
          v16,
          (unsigned __int64 *)(i + firstChildIndex),
          i,
          blockData);
        std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 96));
      }
    }
    for ( i_0 = 0; i_0 <= 7; ++i_0 )
    {
      DynamicNodesInfo::GetNode(
        (const DynamicNodesInfo *const)(v4 + 96),
        &dynamicNodes->nodeMap,
        *(unsigned int *)(v4 + 48),
        i_0 + firstChildIndex);
      if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v4 + 96), 0LL) )
      {
        __args_0 = std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 96));
        std::list<SVONode *>::emplace_back<DynamicSVONode *>(childrenResult, &__args_0, &__args_0);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/tothemoon/Internal/AStarPathFinding/Obstacle/voxel_cutter.cpp",
          "RefreshDynamicNodeChildren",
          405);
        v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v28,
                (const char (*)[19])"Null child, layer ");
        v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v4 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" index ");
        __args_0 = (DynamicSVONode *)(i_0 + firstChildIndex);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v19,
          (const unsigned __int64 *)&__args_0);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 96));
    }
    std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v4 + 64));
  }
  if ( v29 == (char *)v4 )
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

// Line 415: range 000000000CBFC988-000000000CBFC9F1
bool __cdecl VoxelCutter::PreCheckAdd(
        const VoxelCutter *const this,
        const std::shared_ptr<DynamicNodesInfo> *p_dynamicNodes,
        const NodeObstacle *obstacle,
        int handle)
{
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v5; // al

  v5 = 1;
  if ( !std::operator==<DynamicNodesInfo>(p_dynamicNodes, 0LL) )
  {
    v4 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicNodes);
    if ( !DynamicNodesInfo::ContainsHandle(v4, handle) )
      v5 = 0;
  }
  return !v5;
};

// Line 422: range 000000000CBFC9F2-000000000CBFCA5A
bool __cdecl VoxelCutter::PreCheckRemove(
        const VoxelCutter *const this,
        const std::shared_ptr<DynamicNodesInfo> *p_dynamicNodes,
        int handle)
{
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool v4; // al

  v4 = 1;
  if ( !std::operator==<DynamicNodesInfo>(p_dynamicNodes, 0LL) )
  {
    v3 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dynamicNodes);
    if ( DynamicNodesInfo::ContainsHandle(v3, handle) )
      v4 = 0;
  }
  return !v4;
};
