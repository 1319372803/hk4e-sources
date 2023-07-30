// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp

// Line 32: range 000000000CBBBCCE-000000000CBBC73E
SVONode *__cdecl AStarPathFinder::NodePathFinding(
        AStarPathFinder *const this,
        SVONode *start,
        SVONode *end,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        FilterType filterType)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  SVONode *result; // rax
  AStarManager *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  SVONode *v13; // rdx
  common::milog::MiLogStream *v15; // rax
  __int64 curNode; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  int fromIndex; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 fromType; // rsi
  SVONode *v21; // rax
  char v22; // dl
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  int *M_current; // r14
  std::vector<int>::iterator v26; // rax
  AStarManager *v28; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  int __val; // [rsp+40h] [rbp-100h] BYREF
  int i; // [rsp+44h] [rbp-FCh]
  __gnu_cxx::__normal_iterator<int*,std::vector<int> > __lhs; // [rsp+48h] [rbp-F8h] BYREF
  __gnu_cxx::__normal_iterator<int*,std::vector<int> > __rhs; // [rsp+50h] [rbp-F0h] BYREF
  SVONode *node; // [rsp+58h] [rbp-E8h]
  AStarManager v41; // [rsp+60h] [rbp-E0h] BYREF
  char v42[176]; // [rsp+90h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 10 stepCnt:42 64 24 16 childIndexes:100";
  *(_QWORD *)(v6 + 16) = AStarPathFinder::NodePathFinding;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  if ( start == end )
  {
    result = start;
  }
  else
  {
    AStarPathFinder::InitSearchInfo(this, start, end, startPos, endPos);
    if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_endNode = end;
    if ( std::operator==<AStarManager>(&this->_astarManager, 0LL) )
    {
      result = 0LL;
    }
    else
    {
      v10 = std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_astarManager);
      AStarManager::SetOpen(v10, start);
      *(_DWORD *)(v6 + 48) = 0;
      while ( 1 )
      {
        if ( *(int *)(v6 + 48) > 10000 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v41._openList.c._M_impl._M_finish,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
            "NodePathFinding",
            46);
          v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  (common::milog::MiLogStream *const)&v41._openList.c._M_impl._M_finish,
                  (const char (*)[20])"Reach max iter num ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v6 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._openList.c._M_impl._M_finish);
          result = 0LL;
          goto LABEL_71;
        }
        ++*(_DWORD *)(v6 + 48);
        std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_astarManager);
        AStarManager::PopOpenListHead(&v41);
        std::shared_ptr<AStarInfo>::operator=(&this->_curAStarInfo, (std::shared_ptr<AStarInfo> *)&v41);
        std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)&v41);
        if ( std::operator==<AStarInfo>(&this->_curAStarInfo, 0LL) )
        {
          result = 0LL;
          goto LABEL_71;
        }
        v12 = (unsigned __int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curAStarInfo);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8(v12, 0LL);
        v13 = *(SVONode **)v12;
        if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        this->_curNode = v13;
        if ( !this->_curNode || std::operator==<AStarInfo>(&this->_curAStarInfo, 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v41._openList.c._M_impl._M_finish,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
            "NodePathFinding",
            60);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            (common::milog::MiLogStream *const)&v41._openList.c._M_impl._M_finish,
            (const char (*)[22])"should never be here.");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._openList.c._M_impl._M_finish);
          result = 0LL;
          goto LABEL_71;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_curNode, 0LL);
        if ( end == this->_curNode )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_curNode, 0LL);
        curNode = (__int64)this->_curNode;
        if ( *(_BYTE *)(((unsigned __int64)(curNode + 40) >> 3) + 0x7FFF8000) )
          curNode = __asan_report_load8(curNode + 40, 0LL);
        if ( *(_QWORD *)(curNode + 40) )
        {
          std::vector<int>::vector((std::vector<int> *const)(v6 + 64));
          v17 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curAStarInfo);
          if ( *(_BYTE *)(((unsigned __int64)&v17->fromIndex >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v17->fromIndex >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v17->fromIndex);
          }
          fromIndex = v17->fromIndex;
          v19 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curAStarInfo);
          if ( *(_BYTE *)(((unsigned __int64)&v19->fromType >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v19->fromType >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v19->fromType);
          }
          fromType = (unsigned int)v19->fromType;
          AStarPathFinder::GetClosedChildrenIndex(
            this,
            (Const::FromType)fromType,
            fromIndex,
            (std::vector<int> *)(v6 + 64));
          for ( i = 0; ; ++i )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->_curNode, fromType);
            v21 = this->_curNode;
            v22 = *(_BYTE *)(((unsigned __int64)&v21->childNum >> 3) + 0x7FFF8000);
            LOBYTE(fromType) = v22 != 0;
            if ( v22 != 0 && v22 <= 3 )
              __asan_report_load4(&v21->childNum);
            if ( i >= v21->childNum )
              break;
            v23 = (__int64)this->_curNode;
            if ( *(_BYTE *)(((unsigned __int64)(v23 + 40) >> 3) + 0x7FFF8000) )
              v23 = __asan_report_load8(v23 + 40, fromType);
            v24 = 8LL * i + *(_QWORD *)(v23 + 40);
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              v24 = __asan_report_load8(v24, fromType);
            node = *(SVONode **)v24;
            if ( node )
            {
              __rhs._M_current = std::vector<int>::end((std::vector<int> *const)(v6 + 64))._M_current;
              __val = SVONode::GetIndexAsChild(node);
              M_current = std::vector<int>::end((std::vector<int> *const)(v6 + 64))._M_current;
              v26._M_current = std::vector<int>::begin((std::vector<int> *const)(v6 + 64))._M_current;
              __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<int *,std::vector<int>>,int>(
                                   v26,
                                   (__gnu_cxx::__normal_iterator<int*,std::vector<int> >)M_current,
                                   &__val)._M_current;
              fromType = (unsigned __int64)&__rhs;
              if ( !__gnu_cxx::operator==<int *,std::vector<int>>(&__lhs, &__rhs) )
              {
                fromType = (unsigned __int64)node;
                node = AStarPathFinder::GetNodeByOriginNode(this, node);
                if ( node )
                {
                  fromType = (unsigned __int64)node;
                  if ( !AStarPathFinder::NodeInCloseList(this, node) )
                  {
                    if ( !AStarPathFinder::CheckVisitable(node, filterType) )
                    {
                      v28 = std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_astarManager);
                      fromType = (unsigned __int64)node;
                      AStarManager::SetClosed(v28, node);
                    }
                    else if ( AStarPathFinder::NodeInOpenList(this, node) )
                    {
                      v29 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curAStarInfo);
                      if ( *(_BYTE *)(((unsigned __int64)&v29->fromIndex >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&v29->fromIndex >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&v29->fromIndex);
                      }
                      fromType = (unsigned __int64)node;
                      AStarPathFinder::ProcessOldNode(this, node, Children, v29->fromIndex);
                    }
                    else
                    {
                      v30 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curAStarInfo);
                      if ( *(_BYTE *)(((unsigned __int64)&v30->fromIndex >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&v30->fromIndex >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&v30->fromIndex);
                      }
                      fromType = (unsigned __int64)node;
                      AStarPathFinder::ProcessNewNode(this, node, Children, v30->fromIndex);
                    }
                  }
                }
              }
            }
          }
          std::vector<int>::~vector((std::vector<int> *const)(v6 + 64));
        }
        else
        {
          AStarPathFinder::ProcessNeighborNodes(this, &this->_curNode->neighbors, Neighbor, filterType);
        }
        v31 = std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_astarManager);
        if ( !AStarManager::HasNodeToExplore(v31) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v41._openList.c._M_impl._M_finish,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
            "NodePathFinding",
            135);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
            (common::milog::MiLogStream *const)&v41._openList.c._M_impl._M_finish,
            (const char (*)[15])"No path found!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._openList.c._M_impl._M_finish);
          result = 0LL;
          goto LABEL_71;
        }
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v41._openList.c._M_impl._M_finish,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
        "NodePathFinding",
        66);
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)&v41._openList.c._M_impl._M_finish,
              (const char (*)[13])"Step Count: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._openList.c._M_impl._M_finish);
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_curNode, v6 + 48);
      result = this->_curNode;
    }
  }
LABEL_71:
  if ( v42 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 151: range 000000000CBBC740-000000000CBBCC92
SVONode *__cdecl AStarPathFinder::WorldPathFinding(
        AStarPathFinder *const this,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::shared_ptr<SVOWorld> *p_world,
        const std::shared_ptr<DynamicPlayerData> *p_dynamicData,
        FilterType filterType)
{
  std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rcx
  std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rcx
  const ToTheMoonVector3 *referPos; // rdx
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rbx
  SVONode *startNode; // [rsp+30h] [rbp-70h]
  SVONode *endNode; // [rsp+38h] [rbp-68h]
  std::shared_ptr<DynamicPlayerData> v18; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-30h] BYREF

  if ( std::operator==<SVOWorld>(p_world, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "WorldPathFinding",
      154);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v20,
      (const char (*)[51])"[MoonIsAStar][WorldPathFinding] World data is null");
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 0LL;
  }
  std::shared_ptr<DynamicPlayerData>::shared_ptr(&v18, p_dynamicData);
  v7 = std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::get(p_world);
  startNode = SVODataProcessor::FindNodeByPosition(v7, startPos, &v18);
  std::shared_ptr<DynamicPlayerData>::~shared_ptr(&v18);
  if ( !startNode )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "WorldPathFinding",
      160);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v20,
      (const char (*)[43])"[WorldPathFinding] Start pos not in block!");
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 0LL;
  }
  if ( !AStarPathFinder::CheckVisitable(startNode, filterType) )
    startNode = AStarPathFinder::AdaptiveSearch(this, startPos, startNode, 0, 1, filterType);
  if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_endPos = endPos;
  std::shared_ptr<DynamicPlayerData>::shared_ptr(&v18, p_dynamicData);
  v8 = std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::get(p_world);
  endNode = SVODataProcessor::FindNodeByPosition(v8, endPos, &v18);
  std::shared_ptr<DynamicPlayerData>::~shared_ptr(&v18);
  if ( !endNode )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "WorldPathFinding",
      172);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v20,
      (const char (*)[41])"[WorldPathFinding] End pos not in block!");
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 0LL;
  }
  if ( !AStarPathFinder::CheckVisitable(endNode, filterType) )
  {
    endNode = AStarPathFinder::AdaptiveSearch(this, endPos, endNode, 0, 1, filterType);
    if ( !endNode )
      return 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&endNode->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&endNode->referPos, endPos);
    referPos = endNode->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_endPos = referPos;
  }
  if ( !startNode )
    return 0LL;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
    "WorldPathFinding",
    189);
  v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v19, (const char (*)[13])"START NODE: ");
  SVONode::DebugInfo[abi:cxx11]((std::string *)&v20, startNode);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v20);
  std::string::~string(&v20);
  common::milog::MiLogStream::~MiLogStream(&v19);
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
    "WorldPathFinding",
    190);
  v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v19, (const char (*)[13])"FINIS NODE: ");
  SVONode::DebugInfo[abi:cxx11]((std::string *)&v20, endNode);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v20);
  std::string::~string(&v20);
  common::milog::MiLogStream::~MiLogStream(&v19);
  return AStarPathFinder::NodePathFinding(this, startNode, endNode, startPos, endPos, filterType);
};

// Line 196: range 000000000CBBCC94-000000000CBBD17F
SVONode *__cdecl AStarPathFinder::BlockPathFinding(
        AStarPathFinder *const this,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::shared_ptr<SVOBlock> *p_block,
        const std::shared_ptr<DynamicNodesInfo> *p_dynamicData,
        FilterType filterType)
{
  std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rcx
  std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rcx
  const ToTheMoonVector3 *referPos; // rdx
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rbx
  SVONode *startNode; // [rsp+30h] [rbp-70h]
  SVONode *endNode; // [rsp+38h] [rbp-68h]
  std::shared_ptr<DynamicNodesInfo> v18; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-30h] BYREF

  if ( std::operator==<SVOBlock>(p_block, 0LL) )
    return 0LL;
  std::shared_ptr<DynamicNodesInfo>::shared_ptr(&v18, p_dynamicData);
  v7 = std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::get(p_block);
  startNode = SVODataProcessor::FindNodeByPosition(v7, startPos, &v18);
  std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&v18);
  if ( !startNode )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "BlockPathFinding",
      205);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v20,
      (const char (*)[43])"[BlcokPathFinding] Start pos not in block!");
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 0LL;
  }
  if ( !AStarPathFinder::CheckVisitable(startNode, filterType) )
    startNode = AStarPathFinder::AdaptiveSearch(this, startPos, startNode, 0, 1, filterType);
  if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_endPos = endPos;
  std::shared_ptr<DynamicNodesInfo>::shared_ptr(&v18, p_dynamicData);
  v8 = std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::get(p_block);
  endNode = SVODataProcessor::FindNodeByPosition(v8, endPos, &v18);
  std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&v18);
  if ( !endNode )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "BlockPathFinding",
      217);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v20,
      (const char (*)[41])"[BlockPathFinding] End pos not in block!");
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 0LL;
  }
  if ( !AStarPathFinder::CheckVisitable(endNode, filterType) )
  {
    endNode = AStarPathFinder::AdaptiveSearch(this, endPos, endNode, 0, 1, filterType);
    if ( !endNode )
      return 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&endNode->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&endNode->referPos, endPos);
    referPos = endNode->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_endPos = referPos;
  }
  if ( !startNode )
    return 0LL;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
    "BlockPathFinding",
    234);
  v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v19, (const char (*)[13])"START NODE: ");
  SVONode::DebugInfo[abi:cxx11]((std::string *)&v20, startNode);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v20);
  std::string::~string(&v20);
  common::milog::MiLogStream::~MiLogStream(&v19);
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
    "BlockPathFinding",
    235);
  v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v19, (const char (*)[13])"FINIS NODE: ");
  SVONode::DebugInfo[abi:cxx11]((std::string *)&v20, endNode);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v20);
  std::string::~string(&v20);
  common::milog::MiLogStream::~MiLogStream(&v19);
  return AStarPathFinder::NodePathFinding(this, startNode, endNode, startPos, endPos, filterType);
};

// Line 241: range 000000000CBBD180-000000000CBBD7DC
SVONode *__cdecl AStarPathFinder::AdaptiveSearch(
        AStarPathFinder *const this,
        const ToTheMoonVector3 *targetPos,
        SVONode *node,
        bool adaptive,
        int layerCnt,
        FilterType filterType)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  SVONode *v9; // r14
  std::vector<SVONode*>::size_type v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  std::vector<SVONode*>::size_type v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __m128i v17; // xmm0
  std::vector<SVONode*>::size_type v18; // r14
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  SVONode *result; // rax
  std::allocator<SVONode*> __a; // [rsp+37h] [rbp-179h] BYREF
  int layer; // [rsp+38h] [rbp-178h]
  int nodeIndex; // [rsp+3Ch] [rbp-174h]
  int i; // [rsp+40h] [rbp-170h]
  float minDis; // [rsp+44h] [rbp-16Ch]
  int j; // [rsp+48h] [rbp-168h]
  float dis; // [rsp+4Ch] [rbp-164h]
  SVONode *targetNode; // [rsp+50h] [rbp-160h]
  SVONode *curNode; // [rsp+58h] [rbp-158h]
  common::milog::MiLogStream v38; // [rsp+60h] [rbp-150h] BYREF
  char v39[304]; // [rsp+80h] [rbp-130h] BYREF

  v6 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 32 8 12 neighbor:258 64 24 16 currentNodes:247 128 24 19 candidatesNodes:248 192 24 17 neighborNodes:249";
  *(_QWORD *)(v6 + 16) = AStarPathFinder::AdaptiveSearch;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -234881024;
  v8[536862723] = -218959118;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862726] = -218103808;
  v8[536862727] = -202116109;
  if ( !adaptive )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "AdaptiveSearch",
      244);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v38,
      (const char (*)[36])"[BlcokPathFinding] pos not walkable");
    common::milog::MiLogStream::~MiLogStream(&v38);
    v9 = node;
  }
  else
  {
    *(_QWORD *)(v6 + 32) = node;
    std::allocator<SVONode *>::allocator(&__a);
    std::vector<SVONode *>::vector(
      (std::vector<SVONode*> *const)(v6 + 64),
      (std::initializer_list<SVONode*>)__PAIR128__(1LL, v6 + 32),
      &__a);
    std::allocator<SVONode *>::~allocator(&__a);
    *(_QWORD *)(v6 + 128) = 0LL;
    *(_QWORD *)(v6 + 136) = 0LL;
    *(_QWORD *)(v6 + 144) = 0LL;
    std::vector<SVONode *>::vector((std::vector<SVONode*> *const)(v6 + 128));
    *(_QWORD *)(v6 + 192) = 0LL;
    *(_QWORD *)(v6 + 200) = 0LL;
    *(_QWORD *)(v6 + 208) = 0LL;
    std::vector<SVONode *>::vector((std::vector<SVONode*> *const)(v6 + 192));
    layer = 0;
LABEL_7:
    if ( layer >= layerCnt )
    {
      v9 = 0LL;
    }
    else
    {
      for ( nodeIndex = 0; ; ++nodeIndex )
      {
        v10 = nodeIndex;
        if ( v10 >= std::vector<SVONode *>::size((const std::vector<SVONode*> *const)(v6 + 64)) )
        {
          ++layer;
          goto LABEL_7;
        }
        v11 = nodeIndex;
        v12 = (unsigned __int64)std::vector<SVONode *>::operator[]((std::vector<SVONode*> *const)(v6 + 64), nodeIndex);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8(v12, v11);
        curNode = *(SVONode **)v12;
        for ( i = 0; ; ++i )
        {
          v13 = i;
          if ( v13 >= std::vector<SVONode *>::size(&curNode->neighbors) )
            break;
          v14 = i;
          v15 = (unsigned __int64)std::vector<SVONode *>::operator[](&curNode->neighbors, i);
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8(v15, v14);
          *(_QWORD *)(v6 + 32) = *(_QWORD *)v15;
          *(_QWORD *)(v6 + 32) = AStarPathFinder::GetNodeByOriginNode(this, *(SVONode **)(v6 + 32));
          if ( *(_QWORD *)(v6 + 32) && AStarPathFinder::CheckVisitable(*(const SVONode **)(v6 + 32), filterType) )
            std::vector<SVONode *>::push_back(
              (std::vector<SVONode*> *const)(v6 + 128),
              (const std::vector<SVONode*>::value_type *)(v6 + 32));
          std::vector<SVONode *>::push_back(
            (std::vector<SVONode*> *const)(v6 + 192),
            (const std::vector<SVONode*>::value_type *)(v6 + 32));
        }
        if ( !std::vector<SVONode *>::empty((const std::vector<SVONode*> *const)(v6 + 128)) )
          break;
        std::vector<SVONode *>::swap((std::vector<SVONode*> *const)(v6 + 64), (std::vector<SVONode*> *)(v6 + 192));
        std::vector<SVONode *>::clear((std::vector<SVONode*> *const)(v6 + 192));
      }
      v17 = (__m128i)0xBF800000;
      minDis = -1.0;
      targetNode = 0LL;
      for ( j = 0; ; ++j )
      {
        v18 = j;
        if ( v18 >= std::vector<SVONode *>::size((const std::vector<SVONode*> *const)(v6 + 128)) )
          break;
        v19 = j;
        v20 = (unsigned __int64)std::vector<SVONode *>::operator[]((std::vector<SVONode*> *const)(v6 + 128), j);
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v20 = __asan_report_load8(v20, v19);
        *(float *)v17.m128i_i32 = SVODataProcessor::PointDistanceToNode(*(const SVONode **)v20, targetPos);
        dis = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
        if ( minDis >= 0.0 )
        {
          v17 = (__m128i)LODWORD(minDis);
          if ( minDis <= dis )
            continue;
        }
        v17 = (__m128i)LODWORD(dis);
        minDis = dis;
        v21 = j;
        v22 = (unsigned __int64)std::vector<SVONode *>::operator[]((std::vector<SVONode*> *const)(v6 + 128), j);
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8(v22, v21);
        targetNode = *(SVONode **)v22;
      }
      v9 = targetNode;
    }
    std::vector<SVONode *>::~vector((std::vector<SVONode*> *const)(v6 + 192));
    std::vector<SVONode *>::~vector((std::vector<SVONode*> *const)(v6 + 128));
    std::vector<SVONode *>::~vector((std::vector<SVONode*> *const)(v6 + 64));
  }
  result = v9;
  if ( v39 == (char *)v6 )
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

// Line 291: range 000000000CBBD7DE-000000000CBBD935
void __cdecl AStarPathFinder::ProcessNeighborNodes(
        AStarPathFinder *const this,
        const std::vector<SVONode*> *neighborList,
        Const::FromType fromType,
        FilterType filterType)
{
  unsigned __int64 v4; // rax
  AStarManager *v6; // rdx
  int i; // [rsp+24h] [rbp-1Ch]
  SVONode *node; // [rsp+28h] [rbp-18h]

  for ( i = 0; i < std::vector<SVONode *>::size(neighborList); ++i )
  {
    v4 = (unsigned __int64)std::vector<SVONode *>::operator[](neighborList, i);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4, i);
    node = AStarPathFinder::GetNodeByOriginNode(this, *(SVONode **)v4);
    if ( node && !AStarPathFinder::NodeInCloseList(this, node) )
    {
      if ( !AStarPathFinder::CheckVisitable(node, filterType) )
      {
        v6 = std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_astarManager);
        AStarManager::SetClosed(v6, node);
      }
      else if ( AStarPathFinder::NodeInOpenList(this, node) )
      {
        AStarPathFinder::ProcessOldNode(this, node, fromType, i);
      }
      else
      {
        AStarPathFinder::ProcessNewNode(this, node, fromType, i);
      }
    }
  }
};

// Line 314: range 000000000CBBD936-000000000CBBD9A1
Const::Direction __cdecl AStarPathFinder::GetDirection(const AStarPathFinder *const this, int neighborIndex)
{
  Const::Direction result; // eax

  switch ( neighborIndex )
  {
    case 0:
      result = Right;
      break;
    case 1:
      result = Up;
      break;
    case 2:
      result = Front;
      break;
    case 3:
      result = Left;
      break;
    case 4:
      result = Down;
      break;
    case 5:
      result = Back;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      result = Other_0;
      break;
    default:
      result = Invalid_2;
      break;
  }
  return result;
};

// Line 341: range 000000000CBBD9A2-000000000CBBDB06
void __fastcall AStarPathFinder::GetClosedChildrenIndex(
        const AStarPathFinder *const this,
        Const::Direction dir,
        std::vector<int> *childrenIndexList)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<const Const::Direction,std::vector<int> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<const Const::Direction,std::vector<int> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 dir:340 64 8 8 item:342";
  *(_QWORD *)(v3 + 16) = AStarPathFinder::GetClosedChildrenIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = dir;
  *(std::map<Const::Direction,std::vector<int>>::iterator *)(v3 + 64) = std::map<Const::Direction,std::vector<int>>::find(
                                                                          &AStarPathFinder::dirToChildrenIndexMap,
                                                                          (const std::map<Const::Direction,std::vector<int>>::key_type *)(v3 + 48));
  __y._M_node = std::map<Const::Direction,std::vector<int>>::end(&AStarPathFinder::dirToChildrenIndexMap)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const Const::Direction,std::vector<int> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<Const::Direction const,std::vector<int>>>::operator->((const std::_Rb_tree_iterator<std::pair<const Const::Direction,std::vector<int> > > *const)(v3 + 64));
    std::vector<int>::operator=(childrenIndexList, &v6->second);
  }
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
};

// Line 348: range 000000000CBBDB08-000000000CBBDE33
void __fastcall AStarPathFinder::GetClosedChildrenIndex(
        const AStarPathFinder *const this,
        Const::FromType fromType,
        int fromIndex,
        std::vector<int> *indexes)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::map<Const::FromType,std::vector<std::vector<int>>> *v7; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>> *v8; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>> *v9; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const std::vector<int> *v12; // rax
  std::_Rb_tree_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > >::_Self __x; // [rsp+20h] [rbp-E0h] BYREF
  std::_Rb_tree_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 fromType:347 48 4 13 fromIndex:347 64 24 28 childrenIndexMapFromType:354";
  *(_QWORD *)(v4 + 16) = AStarPathFinder::GetClosedChildrenIndex;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 32) = fromType;
  *(_DWORD *)(v4 + 48) = fromIndex;
  v7 = std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&AStarPathFinder::childrenIndexMap);
  __y._M_node = std::map<Const::FromType,std::vector<std::vector<int>>>::end(v7)._M_node;
  v8 = std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&AStarPathFinder::childrenIndexMap);
  __x._M_node = std::map<Const::FromType,std::vector<std::vector<int>>>::find(
                  v8,
                  (const std::map<Const::FromType,std::vector<std::vector<int>>>::key_type *)(v4 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "GetClosedChildrenIndex",
      350);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"Illegal fromType");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    v9 = std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&AStarPathFinder::childrenIndexMap);
    v10 = std::map<Const::FromType,std::vector<std::vector<int>>>::operator[](
            v9,
            (const std::map<Const::FromType,std::vector<std::vector<int>>>::key_type *)(v4 + 32));
    std::vector<std::vector<int>>::vector((std::vector<std::vector<int>> *const)(v4 + 64), v10);
    if ( std::vector<std::vector<int>>::size((const std::vector<std::vector<int>> *const)(v4 + 64)) > *(int *)(v4 + 48) )
    {
      v12 = std::vector<std::vector<int>>::operator[](
              (std::vector<std::vector<int>> *const)(v4 + 64),
              *(int *)(v4 + 48));
      std::vector<int>::operator=(indexes, v12);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
        "GetClosedChildrenIndex",
        356);
      v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v17,
              (const char (*)[20])"Illegal from index ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::vector<std::vector<int>>::~vector((std::vector<std::vector<int>> *const)(v4 + 64));
  }
  if ( v18 == (char *)v4 )
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

// Line 364: range 000000000CBBDE34-000000000CBBE15F
void __fastcall AStarPathFinder::GetClosedVerticeIndex(
        const AStarPathFinder *const this,
        Const::FromType fromType,
        int fromIndex,
        std::vector<int> *indexes)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::map<Const::FromType,std::vector<std::vector<int>>> *v7; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>> *v8; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>> *v9; // rax
  std::map<Const::FromType,std::vector<std::vector<int>>>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const std::vector<int> *v12; // rax
  std::_Rb_tree_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > >::_Self __x; // [rsp+20h] [rbp-E0h] BYREF
  std::_Rb_tree_iterator<std::pair<const Const::FromType,std::vector<std::vector<int>> > >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 fromType:363 48 4 13 fromIndex:363 64 24 27 verticeIndexMapFromType:370";
  *(_QWORD *)(v4 + 16) = AStarPathFinder::GetClosedVerticeIndex;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 32) = fromType;
  *(_DWORD *)(v4 + 48) = fromIndex;
  v7 = std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&AStarPathFinder::fromNodeVerticeIndexMap);
  __y._M_node = std::map<Const::FromType,std::vector<std::vector<int>>>::end(v7)._M_node;
  v8 = std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&AStarPathFinder::fromNodeVerticeIndexMap);
  __x._M_node = std::map<Const::FromType,std::vector<std::vector<int>>>::find(
                  v8,
                  (const std::map<Const::FromType,std::vector<std::vector<int>>>::key_type *)(v4 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "GetClosedVerticeIndex",
      366);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"Illegal fromType");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    v9 = std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&AStarPathFinder::fromNodeVerticeIndexMap);
    v10 = std::map<Const::FromType,std::vector<std::vector<int>>>::operator[](
            v9,
            (const std::map<Const::FromType,std::vector<std::vector<int>>>::key_type *)(v4 + 32));
    std::vector<std::vector<int>>::vector((std::vector<std::vector<int>> *const)(v4 + 64), v10);
    if ( std::vector<std::vector<int>>::size((const std::vector<std::vector<int>> *const)(v4 + 64)) > *(int *)(v4 + 48) )
    {
      v12 = std::vector<std::vector<int>>::operator[](
              (std::vector<std::vector<int>> *const)(v4 + 64),
              *(int *)(v4 + 48));
      std::vector<int>::operator=(indexes, v12);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
        "GetClosedVerticeIndex",
        372);
      v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v17,
              (const char (*)[20])"Illegal from index ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::vector<std::vector<int>>::~vector((std::vector<std::vector<int>> *const)(v4 + 64));
  }
  if ( v18 == (char *)v4 )
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

// Line 380: range 000000000CBBE160-000000000CBBE5CE
void __cdecl AStarPathFinder::UpdateFromInfo(
        AStarPathFinder *const this,
        SVONode *node,
        Const::FromType fromType,
        int fromIndex)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v8; // rax
  SVONode *curNode; // r14
  __int64 v10; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Const::FromType v12; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int v15; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Const::Direction Direction; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  Const::Direction *p_fromDir; // rax
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-90h] BYREF
  char v24[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 9 astar:382";
  *(_QWORD *)(v4 + 16) = AStarPathFinder::UpdateFromInfo;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  AStarPathQueryData::AdaptiveGetAStarInfo((AStarPathQueryData *const)(v4 + 32), (SVONode *)this);
  if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v4 + 32), 0LL)
    || std::operator==<AStarInfo>(&this->_curAStarInfo, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "UpdateFromInfo",
      385);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v23, (const char (*)[21])"should never be here");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    if ( fromType )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_curNode, 0LL);
      curNode = this->_curNode;
    }
    else
    {
      v8 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)(v8 + 40) >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8 + 40, 0LL);
      curNode = *(SVONode **)(v8 + 40);
    }
    v10 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 40) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8();
    *(_QWORD *)(v10 + 40) = curNode;
    if ( fromType )
    {
      v12 = fromType;
    }
    else
    {
      v11 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)&v11->fromType >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->fromType >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->fromType);
      }
      v12 = v11->fromType;
    }
    v13 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v13->fromType >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->fromType >> 3) + 0x7FFF8000) <= 3 )
    {
      v13 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v13->fromType);
    }
    v13->fromType = v12;
    if ( fromType )
    {
      v15 = fromIndex;
    }
    else
    {
      v14 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)&v14->fromIndex >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->fromIndex >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v14->fromIndex);
      }
      v15 = v14->fromIndex;
    }
    v16 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v16->fromIndex >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v16->fromIndex >> 3) + 0x7FFF8000) <= 3 )
    {
      v16 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->fromIndex);
    }
    v16->fromIndex = v15;
    v17 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v17->fromIndex >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v17->fromIndex >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v17->fromIndex);
    }
    Direction = AStarPathFinder::GetDirection(this, v17->fromIndex);
    v19 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    p_fromDir = &v19->fromDir;
    if ( *(_BYTE *)(((unsigned __int64)p_fromDir >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_fromDir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_fromDir >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_fromDir);
    }
    v19->fromDir = Direction;
  }
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v4 + 32));
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 394: range 000000000CBBE5D0-000000000CBBE778
void __cdecl AStarPathFinder::AStarPathFinder(AStarPathFinder *const this, Player *player)
{
  AStarPathFinder *__args_0; // [rsp+18h] [rbp-28h] BYREF
  std::shared_ptr<AStarManager> __r; // [rsp+20h] [rbp-20h] BYREF

  AStarPathQueryData::AStarPathQueryData(&this->_queryData);
  std::shared_ptr<AStarManager>::shared_ptr(&this->_astarManager);
  std::shared_ptr<AStarInfo>::shared_ptr(&this->_curAStarInfo);
  std::shared_ptr<DynamicNodesInfo>::shared_ptr(&this->_curDynamicBlockData);
  if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_curNode = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_endNode = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_endPos = 0LL;
  __args_0 = this;
  std::make_shared<AStarManager,AStarPathFinder *>((AStarPathFinder **)&__r, &__args_0);
  std::shared_ptr<AStarManager>::operator=(&this->_astarManager, &__r);
  std::shared_ptr<AStarManager>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->_player >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_player = player;
};

// Line 403: range 000000000CBBE77A-000000000CBBE8F3
void __cdecl AStarPathFinder::~AStarPathFinder(AStarPathFinder *const this)
{
  std::shared_ptr<AStarManager> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<AStarManager>::shared_ptr(&__r, 0LL);
  std::shared_ptr<AStarManager>::operator=(&this->_astarManager, &__r);
  std::shared_ptr<AStarManager>::~shared_ptr(&__r);
  std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)&__r, 0LL);
  std::shared_ptr<AStarInfo>::operator=(&this->_curAStarInfo, (std::shared_ptr<AStarInfo> *)&__r);
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_curNode = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_endNode = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_endPos = 0LL;
  std::shared_ptr<DynamicNodesInfo>::shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)&__r, 0LL);
  std::shared_ptr<DynamicNodesInfo>::operator=(&this->_curDynamicBlockData, (std::shared_ptr<DynamicNodesInfo> *)&__r);
  std::shared_ptr<DynamicNodesInfo>::~shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)&__r);
  std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&this->_curDynamicBlockData);
  std::shared_ptr<AStarInfo>::~shared_ptr(&this->_curAStarInfo);
  std::shared_ptr<AStarManager>::~shared_ptr(&this->_astarManager);
  AStarPathQueryData::~AStarPathQueryData(&this->_queryData);
};

// Line 414: range 000000000CBBE8F4-000000000CBBE93F
void __cdecl AStarPathFinder::Clear(AStarPathFinder *const this)
{
  AStarManager *v1; // rax

  AStarPathQueryData::Clear(&this->_queryData);
  if ( std::operator!=<AStarManager>(&this->_astarManager, 0LL) )
  {
    v1 = std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_astarManager);
    AStarManager::Clear(v1);
  }
};

// Line 420: range 000000000CBBE940-000000000CBBE99B
bool __cdecl AStarPathFinder::CheckWalkable(const SVONode *node)
{
  if ( !node )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&node->area);
  }
  return node->area > EdgeBlocked;
};

// Line 427: range 000000000CBBE99C-000000000CBBEADE
bool __cdecl AStarPathFinder::CheckVisitable(const SVONode *node, FilterType filterType)
{
  if ( !node )
    return 0;
  if ( filterType == Water_4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&node->area);
    }
    return node->area == Mixed || node->area == Water;
  }
  else
  {
    if ( filterType > Water_4 )
      return 0;
    if ( filterType )
    {
      if ( filterType != Air_0 )
        return 0;
      if ( *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&node->area);
      }
      return node->area == Mixed || node->area == Walkable;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&node->area);
      }
      return node->area > EdgeBlocked;
    }
  }
};

// Line 444: range 000000000CBBEAE0-000000000CBBEB32
std::shared_ptr<AStarInfo> __cdecl AStarPathFinder::GetAStarInfo(AStarPathFinder *const this, SVONode *node)
{
  SVONode *v2; // rcx
  std::shared_ptr<AStarInfo> result; // rax

  v2 = node;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, node);
  result = AStarPathQueryData::GetAStarInfo(&this->_queryData, v2);
  result._M_ptr = (std::__shared_ptr<AStarInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 449: range 000000000CBBEB34-000000000CBBEB86
std::shared_ptr<AStarInfo> __cdecl AStarPathFinder::AdaptiveGetAStarInfo(AStarPathFinder *const this, SVONode *node)
{
  SVONode *v2; // rcx
  std::shared_ptr<AStarInfo> result; // rax

  v2 = node;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, node);
  result = AStarPathQueryData::AdaptiveGetAStarInfo(&this->_queryData, v2);
  result._M_ptr = (std::__shared_ptr<AStarInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 453: range 000000000CBBEB88-000000000CBBF9CB
void __cdecl AStarPathFinder::UpdateScore(
        AStarPathFinder *const this,
        std::shared_ptr<AStarInfo> *p_astar,
        SVONode *node,
        Const::FromType fromType)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  float *p_g; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  AStarPathFinder *endPos; // rdi
  SVONode *endNode; // rcx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  float *v15; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  float *v17; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  AStarPathFinder *p_endNode; // rdi
  SVONode *v23; // rcx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  float *v25; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  float *v27; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // r14
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *n; // rax
  int v34; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  char v36; // cl
  SVONode *v37; // rsi
  int v38; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  int v40; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  int v42; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rdx
  char v44; // cl
  SVONode *v45; // rsi
  int v46; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  int v48; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  int v50; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rdx
  char v52; // cl
  SVONode *v53; // rsi
  int v54; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  int v56; // ebx
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  float g; // [rsp+0h] [rbp-B0h]
  float h; // [rsp+0h] [rbp-B0h]
  float score; // [rsp+0h] [rbp-B0h]
  float v61; // [rsp+0h] [rbp-B0h]
  float v62; // [rsp+0h] [rbp-B0h]
  float v63; // [rsp+0h] [rbp-B0h]
  common::milog::MiLogStream v68; // [rsp+20h] [rbp-90h] BYREF
  char v69[112]; // [rsp+40h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 18 new_astar_sptr:480";
  *(_QWORD *)(v5 + 16) = AStarPathFinder::UpdateScore;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  if ( std::operator==<AStarInfo>(p_astar, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "UpdateScore",
      456);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v68, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v68);
    goto LABEL_98;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_endNode, 0LL);
  if ( node == this->_endNode )
  {
    v8 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
    p_g = &v8->g;
    if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_g);
    }
    v8->g = 0.0;
    v10 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
    if ( *(_BYTE *)(((unsigned __int64)&v10->h >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->h >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->h);
    }
    v10->h = 0.0;
    v11 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
    if ( *(_BYTE *)(((unsigned __int64)&v11->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->score >> 3) + 0x7FFF8000) <= 3 )
    {
      v11 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v11->score);
    }
    v11->score = 0.0;
    goto LABEL_98;
  }
  switch ( ConfigToTheMoon::ConfigParameters::astarMethod )
  {
    case Adaptive:
      if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endPos, 0LL);
      endPos = (AStarPathFinder *)this->_endPos;
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
      {
        endPos = (AStarPathFinder *)&this->_endNode;
        __asan_report_load8(&this->_endNode, 0LL);
      }
      endNode = this->_endNode;
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
      {
        endPos = (AStarPathFinder *)&this->_curNode;
        __asan_report_load8(&this->_curNode, 0LL);
      }
      AdaptiveAStarScoreCalculator::ProcessScore(
        (SVONode *)(v5 + 32),
        node,
        this->_curNode,
        (const ToTheMoonVector3 *)endNode,
        endPos,
        (bool)this);
      if ( !std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v5 + 32), 0LL) )
      {
        v14 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        v15 = &v14->g;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        g = v14->g;
        v16 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
        v17 = &v16->g;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v17);
        }
        v16->g = g;
        v18 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v18->h >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v18->h >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v18->h);
        }
        h = v18->h;
        v19 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
        if ( *(_BYTE *)(((unsigned __int64)&v19->h >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v19->h >> 3) + 0x7FFF8000) <= 3 )
        {
          v19 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v19->h);
        }
        v19->h = h;
        v20 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v20->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v20->score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v20->score);
        }
        score = v20->score;
        v21 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
        if ( *(_BYTE *)(((unsigned __int64)&v21->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v21->score >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->score);
        }
        v21->score = score;
      }
LABEL_37:
      std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v5 + 32));
      break;
    case Inflection:
      if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endPos, 0LL);
      p_endNode = (AStarPathFinder *)this->_endPos;
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
      {
        p_endNode = (AStarPathFinder *)&this->_endNode;
        __asan_report_load8(&this->_endNode, 0LL);
      }
      v23 = this->_endNode;
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
      {
        p_endNode = (AStarPathFinder *)&this->_curNode;
        __asan_report_load8(&this->_curNode, 0LL);
      }
      InflectionAStarScoreCalcualtor::ProcessScore(
        (SVONode *)(v5 + 32),
        node,
        this->_curNode,
        (const ToTheMoonVector3 *)v23,
        p_endNode);
      if ( !std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v5 + 32), 0LL) )
      {
        v24 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        v25 = &v24->g;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        v61 = v24->g;
        v26 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
        v27 = &v26->g;
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v27);
        }
        v26->g = v61;
        v28 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v28->h >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v28->h >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v28->h);
        }
        v62 = v28->h;
        v29 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
        if ( *(_BYTE *)(((unsigned __int64)&v29->h >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v29->h >> 3) + 0x7FFF8000) <= 3 )
        {
          v29 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v29->h);
        }
        v29->h = v62;
        v30 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v30->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v30->score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v30->score);
        }
        v63 = v30->score;
        v31 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
        if ( *(_BYTE *)(((unsigned __int64)&v31->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v31->score >> 3) + 0x7FFF8000) <= 3 )
        {
          v31 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v31->score);
        }
        v31->score = v63;
        v32 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        n = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
        if ( (((unsigned __int8)n + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&n->junctionPos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&n->junctionPos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&n->junctionPos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)n + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&n->junctionPos.z + 3) >> 3) + 0x7FFF8000) )
        {
          n = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&n->junctionPos, 12LL);
        }
        if ( (((unsigned __int8)v32 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v32->junctionPos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v32->junctionPos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v32->junctionPos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v32 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v32->junctionPos.z + 3) >> 3)
                                                           + 0x7FFF8000) )
        {
          n = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load_n(&v32->junctionPos, 12LL);
        }
        *(_QWORD *)&n->junctionPos.x = *(_QWORD *)&v32->junctionPos.x;
        n->junctionPos.z = v32->junctionPos.z;
      }
      goto LABEL_37;
    case Tendency:
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_curNode, 0LL);
      v37 = node;
      *(float *)v4.m128i_i32 = TendencyAStarScoreCalculator::GetNodeGValue(this, node, this->_curNode, fromType);
      v34 = _mm_cvtsi128_si32(v4);
      v35 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      v36 = *(_BYTE *)(((unsigned __int64)&v35->g >> 3) + 0x7FFF8000);
      LOBYTE(v37) = v36 != 0;
      if ( v36 != 0 && (char)((((_BYTE)v35 + 28) & 7) + 3) >= v36 )
        __asan_report_store4(&v35->g);
      LODWORD(v35->g) = v34;
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endNode, v37);
      *(float *)v4.m128i_i32 = TendencyAStarScoreCalculator::GetHValue(node, this->_endNode);
      v38 = _mm_cvtsi128_si32(v4);
      v39 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      if ( *(_BYTE *)(((unsigned __int64)&v39->h >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v39->h >> 3) + 0x7FFF8000) <= 3 )
      {
        v39 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v39->h);
      }
      LODWORD(v39->h) = v38;
      *(float *)v4.m128i_i32 = BaseAStarScoreCalculator::GetFScore(node, this);
      v40 = _mm_cvtsi128_si32(v4);
      v41 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      if ( *(_BYTE *)(((unsigned __int64)&v41->score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v41->score >> 3) + 0x7FFF8000) <= 3 )
      {
        v41 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v41->score);
      }
      LODWORD(v41->score) = v40;
      break;
    case Complex:
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_curNode, 0LL);
      v45 = node;
      *(float *)v4.m128i_i32 = ComplexAStarScoreCalculator::GetNodeGValue(this, node, this->_curNode, fromType);
      v42 = _mm_cvtsi128_si32(v4);
      v43 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      v44 = *(_BYTE *)(((unsigned __int64)&v43->g >> 3) + 0x7FFF8000);
      LOBYTE(v45) = v44 != 0;
      if ( v44 != 0 && (char)((((_BYTE)v43 + 28) & 7) + 3) >= v44 )
        __asan_report_store4(&v43->g);
      LODWORD(v43->g) = v42;
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endNode, v45);
      *(float *)v4.m128i_i32 = ComplexAStarScoreCalculator::GetHValue(node, this->_endNode);
      v46 = _mm_cvtsi128_si32(v4);
      v47 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      if ( *(_BYTE *)(((unsigned __int64)&v47->h >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v47->h >> 3) + 0x7FFF8000) <= 3 )
      {
        v47 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v47->h);
      }
      LODWORD(v47->h) = v46;
      *(float *)v4.m128i_i32 = BaseAStarScoreCalculator::GetFScore(node, this);
      v48 = _mm_cvtsi128_si32(v4);
      v49 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      if ( *(_BYTE *)(((unsigned __int64)&v49->score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v49->score >> 3) + 0x7FFF8000) <= 3 )
      {
        v49 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v49->score);
      }
      LODWORD(v49->score) = v48;
      break;
    default:
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_curNode, 0LL);
      v53 = node;
      *(float *)v4.m128i_i32 = AStarScoreCalculator::GetNodeGValue(this, node, this->_curNode, fromType);
      v50 = _mm_cvtsi128_si32(v4);
      v51 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      v52 = *(_BYTE *)(((unsigned __int64)&v51->g >> 3) + 0x7FFF8000);
      LOBYTE(v53) = v52 != 0;
      if ( v52 != 0 && (char)((((_BYTE)v51 + 28) & 7) + 3) >= v52 )
        __asan_report_store4(&v51->g);
      LODWORD(v51->g) = v50;
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endNode, v53);
      *(float *)v4.m128i_i32 = AStarScoreCalculator::GetHValue(node, this->_endNode);
      v54 = _mm_cvtsi128_si32(v4);
      v55 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      if ( *(_BYTE *)(((unsigned __int64)&v55->h >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v55->h >> 3) + 0x7FFF8000) <= 3 )
      {
        v55 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v55->h);
      }
      LODWORD(v55->h) = v54;
      *(float *)v4.m128i_i32 = BaseAStarScoreCalculator::GetFScore(node, this);
      v56 = _mm_cvtsi128_si32(v4);
      v57 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
      if ( *(_BYTE *)(((unsigned __int64)&v57->score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v57->score >> 3) + 0x7FFF8000) <= 3 )
      {
        v57 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v57->score);
      }
      LODWORD(v57->score) = v56;
      break;
  }
LABEL_98:
  if ( v69 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 512: range 000000000CBBF9CC-000000000CBBFF00
void __cdecl AStarPathFinder::InitSearchInfo(
        AStarPathFinder *const this,
        SVONode *start,
        SVONode *end,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  AStarManager *v9; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  ToTheMoonVector3 *p_junctionPos; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  ToTheMoonVector3 *v13; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  char v20[144]; // [rsp+30h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 13 startInfo:514 64 16 11 endInfo:515";
  *(_QWORD *)(v5 + 16) = AStarPathFinder::InitSearchInfo;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -202178560;
  AStarPathQueryData::ReInit(&this->_queryData);
  AStarPathQueryData::AdaptiveGetAStarInfo((AStarPathQueryData *const)(v5 + 32), (SVONode *)this);
  AStarPathQueryData::AdaptiveGetAStarInfo((AStarPathQueryData *const)(v5 + 64), (SVONode *)this);
  if ( startPos
    && endPos
    && !std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v5 + 32), 0LL)
    && !std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v5 + 64), 0LL)
    && !std::operator==<AStarManager>(&this->_astarManager, 0LL) )
  {
    v9 = std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_astarManager);
    AStarManager::InitSearchInfo(v9);
    v10 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    p_junctionPos = &v10->junctionPos;
    if ( ((unsigned __int8)p_junctionPos & 7) >= *(_BYTE *)(((unsigned __int64)p_junctionPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)p_junctionPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&p_junctionPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p_junctionPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p_junctionPos->z + 3) >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_store_n(p_junctionPos, 12LL);
    }
    if ( ((unsigned __int8)startPos & 7) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)startPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&startPos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(startPos, 12LL);
    }
    *(_QWORD *)&v10->junctionPos.x = *(_QWORD *)&startPos->x;
    v10->junctionPos.z = startPos->z;
    v12 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    v13 = &v12->junctionPos;
    if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v13->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v13 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v13, 12LL);
    }
    if ( ((unsigned __int8)endPos & 7) >= *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)endPos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)endPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&endPos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(endPos, 12LL);
    }
    *(_QWORD *)&v12->junctionPos.x = *(_QWORD *)&endPos->x;
    v12->junctionPos.z = endPos->z;
    v14 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v14->fromType >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v14->fromType >> 3) + 0x7FFF8000) <= 3 )
    {
      v14 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v14->fromType);
    }
    v14->fromType = Neighbor;
    v15 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v15->fromIndex >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v15->fromIndex >> 3) + 0x7FFF8000) <= 3 )
    {
      v15 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->fromIndex);
    }
    v15->fromIndex = 0;
    v16 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v16->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v16->score >> 3) + 0x7FFF8000) <= 3 )
    {
      v16 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->score);
    }
    v16->score = 0.0;
    AStarPathFinder::UpdateDynamicData(this, end);
  }
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v5 + 64));
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v5 + 32));
  if ( v20 == (char *)v5 )
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

// Line 530: range 000000000CBBFF02-000000000CBBFFDF
SVONode *__cdecl AStarPathFinder::GetNodeByOriginNode(AStarPathFinder *const this, SVONode *node)
{
  SVOStructure *curSVOBlock; // rbx
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx

  if ( !node )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_curSVOBlock >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_curSVOBlock, node);
  if ( !this->_curSVOBlock || (curSVOBlock = this->_curSVOBlock, curSVOBlock != SVONode::GetSVOStructure(node)) )
    AStarPathFinder::UpdateDynamicData(this, node);
  if ( std::operator==<DynamicNodesInfo>(&this->_curDynamicBlockData, 0LL) )
    return node;
  v5 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_curDynamicBlockData);
  return DynamicNodesInfo::GetNodeByOriginNode(v5, node);
};

// Line 548: range 000000000CBBFFE0-000000000CBC0388
void __cdecl AStarPathFinder::UpdateDynamicData(AStarPathFinder *const this, SVONode *node)
{
  unsigned __int64 p_M_parent; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  SVOStructure *SVOStructure; // rax
  __int64 curSVOBlock; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  IntPair *v12; // rax
  DynamicPlayerData v13; // [rsp+10h] [rbp-A0h] BYREF

  p_M_parent = (unsigned __int64)&v13.nodesInfo._M_t._M_impl._M_header._M_parent;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      p_M_parent = v3;
  }
  *(_QWORD *)p_M_parent = 1102416563LL;
  *(_QWORD *)(p_M_parent + 8) = "2 32 8 14 blockIndex:561 64 16 15 dynamicData:556";
  *(_QWORD *)(p_M_parent + 16) = AStarPathFinder::UpdateDynamicData;
  v4 = (_DWORD *)(p_M_parent >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  if ( node )
  {
    SVOStructure = SVONode::GetSVOStructure(node);
    if ( *(_BYTE *)(((unsigned __int64)&this->_curSVOBlock >> 3) + 0x7FFF8000) )
      SVOStructure = (SVOStructure *)__asan_report_store8();
    this->_curSVOBlock = SVOStructure;
    if ( *(_BYTE *)(((unsigned __int64)&this->_player >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_player, node);
    if ( this->_player && this->_curSVOBlock )
    {
      curSVOBlock = (__int64)this->_curSVOBlock;
      if ( *(_BYTE *)(((unsigned __int64)(curSVOBlock + 48) >> 3) + 0x7FFF8000) )
        curSVOBlock = __asan_report_load8(curSVOBlock + 48, node);
      if ( *(_QWORD *)(curSVOBlock + 48) )
      {
        Player::GetDynamicData((const Player *const)(p_M_parent + 64));
        if ( !std::operator==<DynamicPlayerData>((const std::shared_ptr<DynamicPlayerData> *)(p_M_parent + 64), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->_curSVOBlock >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->_curSVOBlock, 0LL);
          v7 = (__int64)this->_curSVOBlock;
          if ( *(_BYTE *)(((unsigned __int64)(v7 + 48) >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7 + 48, 0LL);
          v8 = *(_QWORD *)(v7 + 48);
          if ( *(_BYTE *)(((unsigned __int64)(v8 + 16) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(v8 + 16) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(v8 + 16);
          }
          v9 = *(unsigned int *)(v8 + 16);
          v10 = (__int64)this->_curSVOBlock;
          if ( *(_BYTE *)(((unsigned __int64)(v10 + 48) >> 3) + 0x7FFF8000) )
            v10 = __asan_report_load8(v10 + 48, v9);
          v11 = *(_QWORD *)(v10 + 48);
          if ( *(_BYTE *)(((unsigned __int64)(v11 + 12) >> 3) + 0x7FFF8000) != 0
            && (char)(((v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v11 + 12) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11 + 12);
          }
          IntPair::IntPair((IntPair *const)(p_M_parent + 32), *(_DWORD *)(v11 + 12), v9);
          v12 = (IntPair *)std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_parent + 64));
          DynamicPlayerData::GetBlockNodesInfo(&v13, v12);
          std::shared_ptr<DynamicNodesInfo>::operator=(
            &this->_curDynamicBlockData,
            (std::shared_ptr<DynamicNodesInfo> *)&v13);
          std::shared_ptr<DynamicNodesInfo>::~shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)&v13);
        }
        std::shared_ptr<DynamicPlayerData>::~shared_ptr((std::shared_ptr<DynamicPlayerData> *const)(p_M_parent + 64));
      }
    }
  }
  if ( &v13.nodesInfo._M_t._M_impl._M_header._M_parent == (std::_Rb_tree_node_base::_Base_ptr *)p_M_parent )
  {
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_parent >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_parent = 1172321806LL;
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_parent >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 566: range 000000000CBC038A-000000000CBC05E0
void __cdecl AStarPathFinder::ProcessNewNode(
        AStarPathFinder *const this,
        SVONode *node,
        Const::FromType fromType,
        const int rank)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  AStarManager *v7; // rdx
  std::shared_ptr<AStarInfo> p_astar; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 9 astar:568";
  *(_QWORD *)(v4 + 16) = AStarPathFinder::ProcessNewNode;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  AStarPathFinder::UpdateFromInfo(this, node, fromType, rank);
  AStarPathQueryData::AdaptiveGetAStarInfo((AStarPathQueryData *const)(v4 + 32), (SVONode *)this);
  std::shared_ptr<AStarInfo>::shared_ptr(&p_astar, (const std::shared_ptr<AStarInfo> *)(v4 + 32));
  AStarPathFinder::UpdateScore(this, &p_astar, node, fromType);
  std::shared_ptr<AStarInfo>::~shared_ptr(&p_astar);
  if ( std::operator==<AStarManager>(&this->_astarManager, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/a_star.cpp",
      "ProcessNewNode",
      582);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v11,
      (const char (*)[32])"astarManager should not be null");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    v7 = std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_astarManager);
    AStarManager::SetOpen(v7, node);
  }
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v4 + 32));
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 589: range 000000000CBC05E2-000000000CBC0906
void __cdecl AStarPathFinder::ProcessOldNode(
        AStarPathFinder *const this,
        SVONode *node,
        Const::FromType fromType,
        const int rank)
{
  SVONode *v4; // rdx
  const ToTheMoonVector3 *v5; // rcx
  SVONode *v6; // rdx
  __int64 v7; // rsi
  const ToTheMoonVector3 *endPos; // rcx
  SVONode *v9; // rdx
  __int64 v10; // rsi
  SVONode *endNode; // rdx
  SVONode *v12; // rdx

  if ( ConfigToTheMoon::ConfigParameters::astarMethod == Complex )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_endNode, node);
    endNode = this->_endNode;
    if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_curNode, node);
    ComplexAStarScoreCalculator::ProcessOldNode(node, this->_curNode, endNode, fromType, rank, this);
  }
  else
  {
    if ( ConfigToTheMoon::ConfigParameters::astarMethod > Complex )
      goto LABEL_32;
    if ( ConfigToTheMoon::ConfigParameters::astarMethod == Inflection )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endPos, node);
      endPos = this->_endPos;
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endNode, node);
      v9 = this->_endNode;
      v10 = *(unsigned __int8 *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000);
      if ( (_BYTE)v10 )
        __asan_report_load8(&this->_curNode, v10);
      InflectionAStarScoreCalcualtor::ProcessOldNode(node, this->_curNode, v9, endPos, fromType, rank, this);
      return;
    }
    if ( ConfigToTheMoon::ConfigParameters::astarMethod > Inflection )
    {
LABEL_32:
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endNode, node);
      v12 = this->_endNode;
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_curNode, node);
      AStarScoreCalculator::ProcessOldNode(node, this->_curNode, v12, fromType, rank, this);
      return;
    }
    if ( ConfigToTheMoon::ConfigParameters::astarMethod == Tendency )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endNode, node);
      v4 = this->_endNode;
      if ( *(_BYTE *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_curNode, node);
      TendencyAStarScoreCalculator::ProcessOldNode(node, this->_curNode, v4, fromType, rank, this);
    }
    else
    {
      if ( ConfigToTheMoon::ConfigParameters::astarMethod != Adaptive )
        goto LABEL_32;
      if ( *(_BYTE *)(((unsigned __int64)&this->_endPos >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endPos, node);
      v5 = this->_endPos;
      if ( *(_BYTE *)(((unsigned __int64)&this->_endNode >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_endNode, node);
      v6 = this->_endNode;
      v7 = *(unsigned __int8 *)(((unsigned __int64)&this->_curNode >> 3) + 0x7FFF8000);
      if ( (_BYTE)v7 )
        __asan_report_load8(&this->_curNode, v7);
      AdaptiveAStarScoreCalculator::ProcessOldNode(node, this->_curNode, v6, v5, fromType, rank, this);
    }
  }
};

// Line 616: range 000000000CBC0908-000000000CBC0A52
bool __cdecl AStarPathFinder::NodeInOpenList(const AStarPathFinder *const this, const SVONode *node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r15
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 astar:617";
  *(_QWORD *)(v2 + 16) = AStarPathFinder::NodeInOpenList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v2 + 32), (const SVONode *)this);
  if ( !std::operator!=<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v2 + 32), 0LL) )
    goto LABEL_9;
  v5 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v5->status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->status);
  }
  if ( v5->status == Open )
    v6 = 1;
  else
LABEL_9:
    v6 = 0;
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v2 + 32));
  result = v6;
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

// Line 621: range 000000000CBC0A54-000000000CBC0B9E
bool __cdecl AStarPathFinder::NodeInCloseList(const AStarPathFinder *const this, const SVONode *node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r15
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 astar:622";
  *(_QWORD *)(v2 + 16) = AStarPathFinder::NodeInCloseList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v2 + 32), (const SVONode *)this);
  if ( !std::operator!=<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v2 + 32), 0LL) )
    goto LABEL_9;
  v5 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v5->status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->status);
  }
  if ( v5->status == Closed )
    v6 = 1;
  else
LABEL_9:
    v6 = 0;
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v2 + 32));
  result = v6;
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

// Line 626: range 000000000CBC0BA0-000000000CBC0BEE
void __cdecl AStarManager::AStarManager(AStarManager *const this, AStarPathFinder *pathFinder)
{
  std::priority_queue<std::shared_ptr<AStarInfo>,std::vector<std::shared_ptr<AStarInfo>>,AStarCmp>::priority_queue<std::vector<std::shared_ptr<AStarInfo>>,void>(&this->_openList);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pathFinder = pathFinder;
};
