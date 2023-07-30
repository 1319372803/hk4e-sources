// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp

// Line 6: range 000000000CBCAEA0-000000000CBCB1A6
float __cdecl AStarScoreCalculator::GetNodeGValue(
        AStarPathFinder *pathHandler,
        const SVONode *node,
        const SVONode *fromNode,
        Const::FromType fromType)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  char v9; // cl
  const ToTheMoonVector3 *referPos; // rax
  float result; // xmm0_4
  float v12; // [rsp+0h] [rbp-A0h]
  float g; // [rsp+0h] [rbp-A0h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-80h] BYREF
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 fromAstar:13";
  *(_QWORD *)(v4 + 16) = AStarScoreCalculator::GetNodeGValue;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( pathHandler && node && fromNode )
  {
    AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v4 + 32), (const SVONode *)pathHandler);
    v7 = 0LL;
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v4 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "GetNodeGValue",
        16);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v16,
        (const char (*)[35])"[GetNodeGValue] fromAstar is null ");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v12 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v9 = *(_BYTE *)(((unsigned __int64)&v8->g >> 3) + 0x7FFF8000);
      LOBYTE(v7) = v9 != 0;
      if ( v9 != 0 && (char)((((_BYTE)v8 + 28) & 7) + 3) >= v9 )
        __asan_report_load4(&v8->g);
      g = v8->g;
      if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->referPos, v7);
      referPos = node->referPos;
      if ( *(_BYTE *)(((unsigned __int64)&fromNode->referPos >> 3) + 0x7FFF8000) )
        referPos = (const ToTheMoonVector3 *)__asan_report_load8(&fromNode->referPos, v7);
      v12 = ToTheMoonVector3::EuclideanDistance(referPos, fromNode->referPos) + g;
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v4 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetNodeGValue",
      10);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v16, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v12 = 0.0;
  }
  result = v12;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 23: range 000000000CBCB1A8-000000000CBCB2DD
float __cdecl AStarScoreCalculator::GetHValue(const SVONode *node, const SVONode *endNode)
{
  __m128i v2; // xmm0
  const ToTheMoonVector3 *referPos; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( !node )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->referPos, endNode);
  if ( node->referPos && endNode )
  {
    if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->referPos, endNode);
    referPos = node->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&endNode->referPos >> 3) + 0x7FFF8000) )
      referPos = (const ToTheMoonVector3 *)__asan_report_load8(&endNode->referPos, endNode);
    *(float *)v2.m128i_i32 = ToTheMoonVector3::EuclideanDistance(referPos, endNode->referPos);
    return COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  }
  else
  {
LABEL_6:
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetHValue",
      26);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v6, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0.0;
  }
};

// Line 34: range 000000000CBCB2DE-000000000CBCB77B
void __cdecl AStarScoreCalculator::ProcessOldNode(
        SVONode *node,
        const SVONode *curNode,
        const SVONode *endNode,
        Const::FromType fromType,
        int rank,
        AStarPathFinder *pathHandler)
{
  __m128i v6; // xmm0
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v11; // rax
  const SVONode *v12; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Const::FromType v14; // eax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  float *p_g; // rax
  __m128i g_low; // xmm0
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  float *v19; // rax
  int v20; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const SVONode *curNodea; // [rsp+20h] [rbp-C0h]
  Const::FromType referfromType; // [rsp+40h] [rbp-A0h]
  float gScore; // [rsp+44h] [rbp-9Ch]
  const SVONode *referNode; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-90h] BYREF
  char v30[112]; // [rsp+70h] [rbp-70h] BYREF

  curNodea = curNode;
  v7 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 8 astar:43";
  *(_QWORD *)(v7 + 16) = AStarScoreCalculator::ProcessOldNode;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202178560;
  if ( !pathHandler || (curNode = 0LL, std::operator==<AStarInfo>(&pathHandler->_curAStarInfo, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "ProcessOldNode",
      37);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v29, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    if ( fromType )
    {
      v12 = curNodea;
    }
    else
    {
      v11 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)(v11 + 40) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11 + 40, curNode);
      v12 = *(const SVONode **)(v11 + 40);
    }
    referNode = v12;
    if ( fromType )
    {
      v14 = fromType;
    }
    else
    {
      v13 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)&v13->fromType >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->fromType >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)v6.m128i_i64 = __asan_report_load4(&v13->fromType);
      }
      v14 = v13->fromType;
    }
    referfromType = v14;
    AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v7 + 32), (const SVONode *)pathHandler);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v7 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "ProcessOldNode",
        46);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v29,
        (const char (*)[48])"[ProcessOldNode] Old node should has astar info");
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      *(float *)v6.m128i_i32 = AStarScoreCalculator::GetNodeGValue(pathHandler, node, referNode, referfromType);
      gScore = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      v15 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
      p_g = &v15->g;
      if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_g);
      }
      g_low = (__m128i)LODWORD(v15->g);
      if ( *(float *)g_low.m128i_i32 > gScore )
      {
        AStarPathFinder::UpdateFromInfo(pathHandler, node, fromType, rank);
        v18 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
        v19 = &v18->g;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v19);
        }
        v18->g = gScore;
        *(float *)g_low.m128i_i32 = BaseAStarScoreCalculator::GetFScore(node, pathHandler);
        v20 = _mm_cvtsi128_si32(g_low);
        v21 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v21->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v21->score >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->score);
        }
        LODWORD(v21->score) = v20;
      }
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v7 + 32));
  }
  if ( v30 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 60: range 000000000CBCB77C-000000000CBCBBF1
void __cdecl BaseInflectionAStarScoreCalculator::GetJunctionPoint(
        const SVONode *node,
        Const::FromType fromType,
        int fromIndex,
        int level,
        AStarPathFinder *pathFinder,
        bool toLargerNode,
        ToTheMoonVector3 *junctionPos)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  std::vector<int>::reference v10; // rax
  int *v11; // rdx
  std::vector<int>::reference v12; // rax
  int *v13; // rdx
  int v14; // r14d
  std::vector<int>::reference v15; // rax
  int *v16; // rdx
  std::vector<int>::reference v17; // rax
  int *v18; // rdx
  std::vector<int>::reference v19; // rax
  __int64 v20; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v22; // r12
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+40h] [rbp-90h] BYREF

  v7 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 10 indexes:61";
  *(_QWORD *)(v7 + 16) = BaseInflectionAStarScoreCalculator::GetJunctionPoint;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218103808;
  v9[536862722] = -202116109;
  std::vector<int>::vector((std::vector<int> *const)(v7 + 32));
  if ( !pathFinder )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetJunctionPoint",
      64);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v27, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_30;
  }
  if ( toLargerNode )
    AStarPathFinder::GetClosedVerticeIndex(pathFinder, fromType, fromIndex, (std::vector<int> *)(v7 + 32));
  else
    AStarPathFinder::GetClosedChildrenIndex(pathFinder, fromType, fromIndex, (std::vector<int> *)(v7 + 32));
  if ( fromType == DiagonalNeighbor )
  {
    v10 = std::vector<int>::operator[]((std::vector<int> *const)(v7 + 32), 0LL);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    SVODataProcessor::GetVerticePosition(node, *v11, junctionPos);
  }
  else
  {
    if ( fromType > DiagonalNeighbor )
      goto LABEL_27;
    if ( fromType == Neighbor )
    {
      v17 = std::vector<int>::operator[]((std::vector<int> *const)(v7 + 32), 3uLL);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v14 = *v18;
      v19 = std::vector<int>::operator[]((std::vector<int> *const)(v7 + 32), 0LL);
      v16 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
    }
    else
    {
      if ( fromType != PlanarNeighbor )
      {
LABEL_27:
        v20 = 8LL;
        exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
        v22 = (_QWORD *)exception;
        if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
        {
          v20 = exception;
          __asan_report_store8();
        }
        *v22 = "Invalid from type";
        __asan_handle_no_return(v20);
        _cxa_throw(v22, (struct type_info *)&`typeinfo for'char const*, 0LL);
      }
      v12 = std::vector<int>::operator[]((std::vector<int> *const)(v7 + 32), 1uLL);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v15 = std::vector<int>::operator[]((std::vector<int> *const)(v7 + 32), 0LL);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
    }
    SVODataProcessor::GetVerticeMiddlePosition(node, *v16, v14, level, junctionPos);
  }
LABEL_30:
  std::vector<int>::~vector((std::vector<int> *const)(v7 + 32));
  if ( v28 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 87: range 000000000CBCBBF2-000000000CBCC10B
void __cdecl BaseInflectionAStarScoreCalculator::GetJunctionPointAdv(
        const SVONode *node,
        const SVONode *fromNode,
        Const::FromType fromType,
        int fromIndex,
        int level,
        AStarPathFinder *pathFinder,
        bool toLargerNode,
        ToTheMoonVector3 *junctionPos)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  std::vector<int>::reference v11; // rax
  int *v12; // rdx
  std::vector<int>::reference v13; // rax
  int *v14; // rdx
  int v15; // r14d
  std::vector<int>::reference v16; // rax
  int *v17; // rdx
  std::vector<int>::reference v18; // rax
  int *v19; // rdx
  std::vector<int>::reference v20; // rax
  __int64 v21; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v23; // r12
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 32 12 17 nodeCenterPos:100 64 24 10 indexes:88";
  *(_QWORD *)(v8 + 16) = BaseInflectionAStarScoreCalculator::GetJunctionPointAdv;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -219020288;
  v10[536862722] = -218103808;
  v10[536862723] = -202116109;
  std::vector<int>::vector((std::vector<int> *const)(v8 + 64));
  if ( !pathFinder )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetJunctionPointAdv",
      91);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v28, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v28);
    goto LABEL_29;
  }
  if ( toLargerNode )
    AStarPathFinder::GetClosedVerticeIndex(pathFinder, fromType, fromIndex, (std::vector<int> *)(v8 + 64));
  else
    AStarPathFinder::GetClosedChildrenIndex(pathFinder, fromType, fromIndex, (std::vector<int> *)(v8 + 64));
  if ( fromType != DiagonalNeighbor )
  {
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v8 + 32));
    SVODataProcessor::GetCenterPos(node, (ToTheMoonVector3 *)(v8 + 32));
    if ( fromType <= DiagonalNeighbor )
    {
      if ( fromType == Neighbor )
      {
        v18 = std::vector<int>::operator[]((std::vector<int> *const)(v8 + 64), 3uLL);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v15 = *v19;
        v20 = std::vector<int>::operator[]((std::vector<int> *const)(v8 + 64), 0LL);
        v17 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        goto LABEL_20;
      }
      if ( fromType == PlanarNeighbor )
      {
        v13 = std::vector<int>::operator[]((std::vector<int> *const)(v8 + 64), 1uLL);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        v16 = std::vector<int>::operator[]((std::vector<int> *const)(v8 + 64), 0LL);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
LABEL_20:
        SVODataProcessor::GetVerticeMiddlePosition(node, *v17, v15, level, junctionPos);
        goto LABEL_29;
      }
    }
    v21 = 8LL;
    exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
    v23 = (_QWORD *)exception;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    {
      v21 = exception;
      __asan_report_store8();
    }
    *v23 = "Invalid from type";
    __asan_handle_no_return(v21);
    _cxa_throw(v23, (struct type_info *)&`typeinfo for'char const*, 0LL);
  }
  v11 = std::vector<int>::operator[]((std::vector<int> *const)(v8 + 64), 0LL);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  SVODataProcessor::GetVerticePosition(node, *v12, junctionPos);
LABEL_29:
  std::vector<int>::~vector((std::vector<int> *const)(v8 + 64));
  if ( v29 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 118: range 000000000CBCC10C-000000000CBCC16D
// local variable allocation has failed, the output may be wrong!
void __cdecl BaseInflectionAStarScoreCalculator::GetJunctionPointV2(
        const SVONode *node,
        Const::FromType fromType,
        int fromIndex,
        int level,
        AStarPathFinder *pathFinder,
        bool toLargerNode,
        ToTheMoonVector3 *junctionPos)
{
  if ( *(_BYTE *)(((unsigned __int64)&pathFinder->_endPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&pathFinder->_endPos, *(_QWORD *)&fromType);
  SVODataProcessor::TuckPosInNode(pathFinder->_endPos, node, junctionPos);
};

// Line 123: range 000000000CBCC16E-000000000CBCC218
float __cdecl BaseInflectionAStarScoreCalculator::GetHValue(
        const ToTheMoonVector3 *junctionPoint,
        const ToTheMoonVector3 *endPos)
{
  __m128i v2; // xmm0
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( junctionPoint )
  {
    *(float *)v2.m128i_i32 = ToTheMoonVector3::EuclideanDistance(junctionPoint, endPos);
    return COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetHValue",
      126);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v5, (const char (*)[22])"junctionPoint is null");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0.0;
  }
};

// Line 133: range 000000000CBCC21A-000000000CBCC993
std::shared_ptr<AStarInfo> *__fastcall BaseInflectionAStarScoreCalculator::ProcessScore(
        std::shared_ptr<AStarInfo> *node,
        const SVONode *fromNode,
        const SVONode *endNode,
        const ToTheMoonVector3 *endPos,
        const ToTheMoonVector3 *pathFinder,
        SVONode *recordJunctionPos,
        __m128i a7,
        char a8)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  const SVONode *v11; // rax
  int v12; // eax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int fromIndex; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  int v18; // xmm1_4
  int v19; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  float *p_g; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  int v23; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  float *v25; // rax
  int v26; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  int v28; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  int fromLevel; // [rsp+4Ch] [rbp-114h]
  int toLevel; // [rsp+50h] [rbp-110h]
  int referLevel; // [rsp+54h] [rbp-10Ch]
  const SVONode *referNode; // [rsp+58h] [rbp-108h]
  std::shared_ptr<AStarInfo> p_astar; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v39; // [rsp+70h] [rbp-F0h] BYREF
  char v40[208]; // [rsp+90h] [rbp-D0h] BYREF

  v8 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(160LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "4 32 8 8 node:132 64 12 17 junctionPoint:160 96 16 13 nodeAstar:142 128 16 9 astar:148";
  *(_QWORD *)(v8 + 16) = BaseInflectionAStarScoreCalculator::ProcessScore;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862722] = -219020288;
  v10[536862723] = -219021312;
  v10[536862724] = -202178560;
  *(_QWORD *)(v8 + 32) = fromNode;
  if ( recordJunctionPos )
  {
    fromLevel = SVODataProcessor::GetNodeLevel(endNode);
    toLevel = SVODataProcessor::GetNodeLevel(*(const SVONode **)(v8 + 32));
    AStarPathQueryData::AdaptiveGetAStarInfo((AStarPathQueryData *const)(v8 + 96), recordJunctionPos);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v8 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "ProcessScore",
        145);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v39,
        (const char (*)[38])"should nerver be here: nodeAstar null");
      common::milog::MiLogStream::~MiLogStream(&v39);
      std::shared_ptr<AStarInfo>::shared_ptr(node, 0LL);
    }
    else
    {
      std::make_shared<AStarInfo,SVONode *&>((SVONode **)(v8 + 128), (SVONode **)(v8 + 32));
      if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v8 + 128), 0LL) )
      {
        std::shared_ptr<AStarInfo>::shared_ptr(node, 0LL);
      }
      else
      {
        if ( toLevel <= fromLevel )
          v11 = *(const SVONode **)(v8 + 32);
        else
          v11 = endNode;
        referNode = v11;
        if ( toLevel <= fromLevel )
          v12 = toLevel;
        else
          v12 = fromLevel;
        referLevel = v12;
        ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v8 + 64));
        v13 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v13->fromIndex >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->fromIndex >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)a7.m128i_i64 = __asan_report_load4(&v13->fromIndex);
        }
        fromIndex = v13->fromIndex;
        v15 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v15->fromType >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->fromType >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)a7.m128i_i64 = __asan_report_load4(&v15->fromType);
        }
        BaseInflectionAStarScoreCalculator::GetJunctionPointV2(
          referNode,
          v15->fromType,
          fromIndex,
          referLevel,
          (AStarPathFinder *)recordJunctionPos,
          toLevel > fromLevel,
          (ToTheMoonVector3 *)(v8 + 64));
        if ( a8 )
        {
          v16 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 128));
          if ( (((unsigned __int8)v16 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v16->junctionPos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&v16->junctionPos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v16->junctionPos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v16 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v16->junctionPos.z + 3) >> 3)
                                                             + 0x7FFF8000) )
          {
            v16 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v16->junctionPos, 12LL);
          }
          *(_QWORD *)&v16->junctionPos.x = *(_QWORD *)(v8 + 64);
          v16->junctionPos.z = *(float *)(v8 + 72);
          v17 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v17->fromType >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v17->fromType >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v17->fromType);
          }
          v18 = *(_DWORD *)(v8 + 72);
          a7 = (__m128i)*(unsigned __int64 *)(v8 + 64);
          *(float *)a7.m128i_i32 = InflectionAStarScoreCalcualtor::GetNodeGValue(
                                     *(const ToTheMoonVector3 *)a7.m128i_i8,
                                     (const AStarPathFinder *)recordJunctionPos,
                                     endNode,
                                     v17->fromType);
          v19 = _mm_cvtsi128_si32(a7);
          v20 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 128));
          p_g = &v20->g;
          if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_g);
          }
          LODWORD(v20->g) = v19;
        }
        else
        {
          v22 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v22->fromType >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v22->fromType >> 3) + 0x7FFF8000) <= 3 )
          {
            *(double *)a7.m128i_i64 = __asan_report_load4(&v22->fromType);
          }
          *(float *)a7.m128i_i32 = AdaptiveAStarScoreCalculator::GetNodeGValue(
                                     (const AStarPathFinder *)recordJunctionPos,
                                     endNode,
                                     v22->fromType,
                                     fromLevel);
          v23 = _mm_cvtsi128_si32(a7);
          v24 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 128));
          v25 = &v24->g;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v25);
          }
          LODWORD(v24->g) = v23;
        }
        *(float *)a7.m128i_i32 = BaseInflectionAStarScoreCalculator::GetHValue(
                                   (const ToTheMoonVector3 *)(v8 + 64),
                                   pathFinder);
        v26 = _mm_cvtsi128_si32(a7);
        v27 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v27->h >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v27->h >> 3) + 0x7FFF8000) <= 3 )
        {
          v27 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v27->h);
        }
        LODWORD(v27->h) = v26;
        std::shared_ptr<AStarInfo>::shared_ptr(&p_astar, (const std::shared_ptr<AStarInfo> *)(v8 + 128));
        *(float *)a7.m128i_i32 = BaseAStarScoreCalculator::GetFScore(&p_astar);
        v28 = _mm_cvtsi128_si32(a7);
        v29 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v29->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v29->score >> 3) + 0x7FFF8000) <= 3 )
        {
          v29 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v29->score);
        }
        LODWORD(v29->score) = v28;
        std::shared_ptr<AStarInfo>::~shared_ptr(&p_astar);
        std::shared_ptr<AStarInfo>::shared_ptr(node, (std::shared_ptr<AStarInfo> *)(v8 + 128));
      }
      std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v8 + 128));
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v8 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "ProcessScore",
      136);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v39, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v39);
    std::shared_ptr<AStarInfo>::shared_ptr(node, 0LL);
  }
  if ( v40 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8010) = -168430091;
  }
  return node;
};

// Line 184: range 000000000CBCC994-000000000CBCCE7A
std::shared_ptr<AStarInfo> *__fastcall BaseInflectionAStarScoreCalculator::TryProcessScore(
        std::shared_ptr<AStarInfo> *node,
        const SVONode *fromNode,
        const SVONode *endNode,
        const ToTheMoonVector3 *endPos,
        const ToTheMoonVector3 *pathFinder,
        AStarPathFinder *fromType,
        __m128i a7,
        Const::FromType fromIndex,
        int recordJunctionPos,
        char a10)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r13
  const SVONode *v13; // rax
  int v14; // eax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  int v16; // xmm1_4
  int v17; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  float *p_g; // rax
  int v20; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  float *v22; // rax
  int v23; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  int v25; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  int fromLevel; // [rsp+4Ch] [rbp-D4h]
  int toLevel; // [rsp+50h] [rbp-D0h]
  int referLevel; // [rsp+54h] [rbp-CCh]
  const SVONode *referNode; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<AStarInfo> p_astar; // [rsp+60h] [rbp-C0h] BYREF
  char v36[176]; // [rsp+70h] [rbp-B0h] BYREF

  v10 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "3 32 8 8 node:183 64 12 17 junctionPoint:199 96 16 9 astar:187";
  *(_QWORD *)(v10 + 16) = BaseInflectionAStarScoreCalculator::TryProcessScore;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -218959360;
  v12[536862722] = -219020288;
  v12[536862723] = -202178560;
  *(_QWORD *)(v10 + 32) = fromNode;
  fromLevel = SVODataProcessor::GetNodeLevel(endNode);
  toLevel = SVODataProcessor::GetNodeLevel(*(const SVONode **)(v10 + 32));
  std::make_shared<AStarInfo,SVONode *&>((SVONode **)(v10 + 96), (SVONode **)(v10 + 32));
  if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v10 + 96), 0LL) )
  {
    std::shared_ptr<AStarInfo>::shared_ptr(node, 0LL);
  }
  else
  {
    if ( toLevel <= fromLevel )
      v13 = *(const SVONode **)(v10 + 32);
    else
      v13 = endNode;
    referNode = v13;
    if ( toLevel <= fromLevel )
      v14 = toLevel;
    else
      v14 = fromLevel;
    referLevel = v14;
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v10 + 64));
    BaseInflectionAStarScoreCalculator::GetJunctionPoint(
      referNode,
      fromIndex,
      recordJunctionPos,
      referLevel,
      fromType,
      toLevel > fromLevel,
      (ToTheMoonVector3 *)(v10 + 64));
    if ( a10 )
    {
      v15 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 96));
      if ( (((unsigned __int8)v15 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->junctionPos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v15->junctionPos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v15->junctionPos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v15 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->junctionPos.z + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        v15 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v15->junctionPos, 12LL);
      }
      *(_QWORD *)&v15->junctionPos.x = *(_QWORD *)(v10 + 64);
      v15->junctionPos.z = *(float *)(v10 + 72);
      v16 = *(_DWORD *)(v10 + 72);
      a7 = (__m128i)*(unsigned __int64 *)(v10 + 64);
      *(float *)a7.m128i_i32 = InflectionAStarScoreCalcualtor::GetNodeGValue(
                                 *(const ToTheMoonVector3 *)a7.m128i_i8,
                                 fromType,
                                 endNode,
                                 fromIndex);
      v17 = _mm_cvtsi128_si32(a7);
      v18 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 96));
      p_g = &v18->g;
      if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_g);
      }
      LODWORD(v18->g) = v17;
    }
    else
    {
      *(float *)a7.m128i_i32 = AdaptiveAStarScoreCalculator::GetNodeGValue(fromType, endNode, fromIndex, fromLevel);
      v20 = _mm_cvtsi128_si32(a7);
      v21 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 96));
      v22 = &v21->g;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v22);
      }
      LODWORD(v21->g) = v20;
    }
    *(float *)a7.m128i_i32 = BaseInflectionAStarScoreCalculator::GetHValue(
                               (const ToTheMoonVector3 *)(v10 + 64),
                               pathFinder);
    v23 = _mm_cvtsi128_si32(a7);
    v24 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v24->h >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v24->h >> 3) + 0x7FFF8000) <= 3 )
    {
      v24 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v24->h);
    }
    LODWORD(v24->h) = v23;
    std::shared_ptr<AStarInfo>::shared_ptr(&p_astar, (const std::shared_ptr<AStarInfo> *)(v10 + 96));
    *(float *)a7.m128i_i32 = BaseAStarScoreCalculator::GetFScore(&p_astar);
    v25 = _mm_cvtsi128_si32(a7);
    v26 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v10 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v26->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v26->score >> 3) + 0x7FFF8000) <= 3 )
    {
      v26 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v26->score);
    }
    LODWORD(v26->score) = v25;
    std::shared_ptr<AStarInfo>::~shared_ptr(&p_astar);
    std::shared_ptr<AStarInfo>::shared_ptr(node, (std::shared_ptr<AStarInfo> *)(v10 + 96));
  }
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v10 + 96));
  if ( v36 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return node;
};

// Line 227: range 000000000CBCCE7C-000000000CBCD654
void __cdecl BaseInflectionAStarScoreCalculator::ProcessOldNode(
        SVONode *node,
        const SVONode *curNode,
        const SVONode *endNode,
        const ToTheMoonVector3 *endPos,
        Const::FromType fromType,
        int rank,
        AStarPathFinder *pathHandler,
        bool recordJunctionPos)
{
  __m128i v8; // xmm0
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  _DWORD *v11; // r13
  __int64 v13; // rax
  const SVONode *v14; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Const::FromType v16; // eax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  int fromIndex; // eax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  char v21; // al
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  float *p_g; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  float *v25; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *n; // rax
  float score; // [rsp+0h] [rbp-100h]
  float g; // [rsp+0h] [rbp-100h]
  float h; // [rsp+0h] [rbp-100h]
  float v35; // [rsp+0h] [rbp-100h]
  const SVONode *curNodea; // [rsp+20h] [rbp-E0h]
  Const::FromType referfromType; // [rsp+40h] [rbp-C0h]
  const SVONode *referNode; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v43; // [rsp+50h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+70h] [rbp-90h] BYREF

  curNodea = curNode;
  v9 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "2 32 16 9 astar:236 64 16 13 new_astar:244";
  *(_QWORD *)(v9 + 16) = BaseInflectionAStarScoreCalculator::ProcessOldNode;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -219021312;
  v11[536862722] = -202178560;
  if ( !pathHandler || (curNode = 0LL, std::operator==<AStarInfo>(&pathHandler->_curAStarInfo, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "ProcessOldNode",
      230);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v43, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v43);
  }
  else
  {
    if ( fromType )
    {
      v14 = curNodea;
    }
    else
    {
      v13 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)(v13 + 40) >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v13 + 40, curNode);
      v14 = *(const SVONode **)(v13 + 40);
    }
    referNode = v14;
    if ( fromType )
    {
      v16 = fromType;
    }
    else
    {
      v15 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)&v15->fromType >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->fromType >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)v8.m128i_i64 = __asan_report_load4(&v15->fromType);
      }
      v16 = v15->fromType;
    }
    referfromType = v16;
    AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v9 + 32), (const SVONode *)pathHandler);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v9 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "ProcessOldNode",
        239);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v43,
        (const char (*)[48])"[ProcessOldNode] Old node should has astar info");
      common::milog::MiLogStream::~MiLogStream(&v43);
    }
    else
    {
      if ( fromType )
      {
        fromIndex = rank;
      }
      else
      {
        v17 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
        if ( *(_BYTE *)(((unsigned __int64)&v17->fromIndex >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->fromIndex >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)v8.m128i_i64 = __asan_report_load4(&v17->fromIndex);
        }
        fromIndex = v17->fromIndex;
      }
      BaseInflectionAStarScoreCalculator::TryProcessScore(
        (std::shared_ptr<AStarInfo> *)(v9 + 64),
        node,
        referNode,
        (const ToTheMoonVector3 *)endNode,
        endPos,
        pathHandler,
        v8,
        referfromType,
        fromIndex,
        recordJunctionPos);
      if ( !std::operator!=<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v9 + 64), 0LL) )
        goto LABEL_34;
      v19 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v19->score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v19->score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v19->score);
      }
      score = v19->score;
      v20 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v20->score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v20->score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v20->score);
      }
      if ( v20->score > score )
        v21 = 1;
      else
LABEL_34:
        v21 = 0;
      if ( v21 )
      {
        AStarPathFinder::UpdateFromInfo(pathHandler, node, fromType, rank);
        v22 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 64));
        p_g = &v22->g;
        if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_g);
        }
        g = v22->g;
        v24 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 32));
        v25 = &v24->g;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v25);
        }
        v24->g = g;
        v26 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v26->h >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v26->h >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v26->h);
        }
        h = v26->h;
        v27 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v27->h >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v27->h >> 3) + 0x7FFF8000) <= 3 )
        {
          v27 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v27->h);
        }
        v27->h = h;
        v28 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v28->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v28->score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v28->score);
        }
        v35 = v28->score;
        v29 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v29->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v29->score >> 3) + 0x7FFF8000) <= 3 )
        {
          v29 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v29->score);
        }
        v29->score = v35;
        if ( recordJunctionPos )
        {
          v30 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 64));
          n = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v9 + 32));
          if ( (((unsigned __int8)n + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&n->junctionPos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&n->junctionPos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&n->junctionPos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)n + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&n->junctionPos.z + 3) >> 3)
                                                           + 0x7FFF8000) )
          {
            n = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&n->junctionPos, 12LL);
          }
          if ( (((unsigned __int8)v30 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v30->junctionPos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&v30->junctionPos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v30->junctionPos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v30 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v30->junctionPos.z + 3) >> 3)
                                                             + 0x7FFF8000) )
          {
            n = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load_n(&v30->junctionPos, 12LL);
          }
          *(_QWORD *)&n->junctionPos.x = *(_QWORD *)&v30->junctionPos.x;
          n->junctionPos.z = v30->junctionPos.z;
        }
      }
      std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v9 + 64));
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v9 + 32));
  }
  if ( v44 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 257: range 000000000CBCD656-000000000CBCD837
float __cdecl BaseAStarScoreCalculator::GetFScore(SVONode *node, AStarPathFinder *pathHandler)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // r14d
  float result; // xmm0_4
  std::shared_ptr<AStarInfo> p_astar; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 9 astar:263";
  *(_QWORD *)(v3 + 16) = BaseAStarScoreCalculator::GetFScore;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( pathHandler )
  {
    AStarPathQueryData::AdaptiveGetAStarInfo((AStarPathQueryData *const)(v3 + 32), (SVONode *)pathHandler);
    std::shared_ptr<AStarInfo>::shared_ptr(&p_astar, (const std::shared_ptr<AStarInfo> *)(v3 + 32));
    *(float *)v2.m128i_i32 = BaseAStarScoreCalculator::GetFScore(&p_astar);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    std::shared_ptr<AStarInfo>::~shared_ptr(&p_astar);
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetFScore",
      260);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v9, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = 0.0;
  }
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 268: range 000000000CBCD838-000000000CBCD96B
float __cdecl BaseAStarScoreCalculator::GetFScore(const std::shared_ptr<AStarInfo> *p_astar)
{
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  float *p_g; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  float g; // [rsp+4h] [rbp-3Ch]
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<AStarInfo>(p_astar, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetFScore",
      271);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v6, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0.0;
  }
  else
  {
    v2 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
    p_g = &v2->g;
    if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_g);
    }
    g = v2->g;
    v4 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_astar);
    if ( *(_BYTE *)(((unsigned __int64)&v4->h >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v4->h >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v4->h);
    }
    return v4->h + g;
  }
};

// Line 278: range 000000000CBCD96C-000000000CBCDAC2
bool __cdecl BaseAStarScoreCalculator::Sort(
        const std::shared_ptr<AStarInfo> *p_n1,
        const std::shared_ptr<AStarInfo> *p_n2)
{
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  float score; // [rsp+Ch] [rbp-44h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<AStarInfo>(p_n1, 0LL) || std::operator==<AStarInfo>(p_n2, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "Sort",
      281);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v7, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
  else
  {
    v4 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_n1);
    if ( *(_BYTE *)(((unsigned __int64)&v4->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v4->score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v4->score);
    }
    score = v4->score;
    v5 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_n2);
    if ( *(_BYTE *)(((unsigned __int64)&v5->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v5->score);
    }
    return v5->score > score;
  }
};

// Line 289: range 000000000CBCDAC4-000000000CBCDDA7
float __cdecl TendencyAStarScoreCalculator::GetNodeGValue(
        AStarPathFinder *pathHandler,
        const SVONode *node,
        const SVONode *fromNode,
        Const::FromType fromType)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  float *p_g; // rax
  float result; // xmm0_4
  float v10; // [rsp+0h] [rbp-B0h]
  float g; // [rsp+0h] [rbp-B0h]
  int level; // [rsp+2Ch] [rbp-84h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-80h] BYREF
  char v16[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 fromAstar:296";
  *(_QWORD *)(v4 + 16) = TendencyAStarScoreCalculator::GetNodeGValue;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( pathHandler )
  {
    level = SVODataProcessor::GetNodeLevel(node);
    AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v4 + 32), (const SVONode *)pathHandler);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v4 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "GetNodeGValue",
        299);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v15, (const char (*)[22])"should nerver be here");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v10 = 0.0;
    }
    else
    {
      v7 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      p_g = &v7->g;
      if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_g);
      }
      g = v7->g;
      v10 = (float)((float)(AStarScoreCalculator::GetNodeGValue(pathHandler, node, fromNode, fromType) * 10.0)
                  / (float)((float)level + 10.0))
          + g;
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v4 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetNodeGValue",
      292);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v15, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v10 = 0.0;
  }
  result = v10;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 306: range 000000000CBCDDA8-000000000CBCDDCC
float __cdecl TendencyAStarScoreCalculator::GetHValue(const SVONode *node, const SVONode *endNode)
{
  return AStarScoreCalculator::GetHValue(node, endNode);
};

// Line 311: range 000000000CBCDDCE-000000000CBCE26B
void __cdecl TendencyAStarScoreCalculator::ProcessOldNode(
        SVONode *node,
        const SVONode *curNode,
        const SVONode *endNode,
        Const::FromType fromType,
        int rank,
        AStarPathFinder *pathHandler)
{
  __m128i v6; // xmm0
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v11; // rax
  const SVONode *v12; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Const::FromType v14; // eax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  float *p_g; // rax
  __m128i g_low; // xmm0
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  float *v19; // rax
  int v20; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const SVONode *curNodea; // [rsp+20h] [rbp-C0h]
  Const::FromType referfromType; // [rsp+40h] [rbp-A0h]
  float gScore; // [rsp+44h] [rbp-9Ch]
  const SVONode *referNode; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-90h] BYREF
  char v30[112]; // [rsp+70h] [rbp-70h] BYREF

  curNodea = curNode;
  v7 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 9 astar:320";
  *(_QWORD *)(v7 + 16) = TendencyAStarScoreCalculator::ProcessOldNode;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202178560;
  if ( !pathHandler || (curNode = 0LL, std::operator==<AStarInfo>(&pathHandler->_curAStarInfo, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "ProcessOldNode",
      314);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v29, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    if ( fromType )
    {
      v12 = curNodea;
    }
    else
    {
      v11 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)(v11 + 40) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11 + 40, curNode);
      v12 = *(const SVONode **)(v11 + 40);
    }
    referNode = v12;
    if ( fromType )
    {
      v14 = fromType;
    }
    else
    {
      v13 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)&v13->fromType >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->fromType >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)v6.m128i_i64 = __asan_report_load4(&v13->fromType);
      }
      v14 = v13->fromType;
    }
    referfromType = v14;
    AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v7 + 32), (const SVONode *)pathHandler);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v7 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "ProcessOldNode",
        323);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v29,
        (const char (*)[48])"[ProcessOldNode] Old node should has astar info");
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      *(float *)v6.m128i_i32 = TendencyAStarScoreCalculator::GetNodeGValue(pathHandler, node, referNode, referfromType);
      gScore = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      v15 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
      p_g = &v15->g;
      if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_g);
      }
      g_low = (__m128i)LODWORD(v15->g);
      if ( *(float *)g_low.m128i_i32 > gScore )
      {
        AStarPathFinder::UpdateFromInfo(pathHandler, node, fromType, rank);
        v18 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
        v19 = &v18->g;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v19);
        }
        v18->g = gScore;
        *(float *)g_low.m128i_i32 = BaseAStarScoreCalculator::GetFScore(node, pathHandler);
        v20 = _mm_cvtsi128_si32(g_low);
        v21 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v21->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v21->score >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->score);
        }
        LODWORD(v21->score) = v20;
      }
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v7 + 32));
  }
  if ( v30 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 336: range 000000000CBCE26C-000000000CBCE69B
float __cdecl AdaptiveAStarScoreCalculator::GetNodeGValue(
        const AStarPathFinder *pathHandler,
        const SVONode *fromNode,
        Const::FromType fromType,
        int level)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  float v7; // xmm0_4
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  float *v9; // rax
  float v10; // xmm5_4
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  float *v12; // rax
  float v13; // xmm6_4
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  float *p_g; // rax
  float v16; // xmm7_4
  __int64 v17; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v19; // rbx
  float result; // xmm0_4
  float v21; // [rsp+4h] [rbp-ACh]
  float layerWidth; // [rsp+2Ch] [rbp-84h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-80h] BYREF
  char v26[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 fromAstar:343";
  *(_QWORD *)(v4 + 16) = AdaptiveAStarScoreCalculator::GetNodeGValue;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( !pathHandler )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetNodeGValue",
      339);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v25, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v21 = 0.0;
    goto LABEL_26;
  }
  v7 = std::pow<int,int>(2, level);
  layerWidth = v7;
  AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v4 + 32), (const SVONode *)pathHandler);
  if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetNodeGValue",
      347);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v25,
      (const char (*)[35])"[GetNodeGValue] fromAstar is null ");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v21 = 0.0;
  }
  else
  {
    if ( fromType == DiagonalNeighbor )
    {
      v14 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      p_g = &v14->g;
      if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_g);
      }
      v16 = 0.866 * layerWidth + v14->g;
      v21 = v16;
      goto LABEL_25;
    }
    if ( fromType > DiagonalNeighbor )
      goto LABEL_22;
    if ( fromType == Neighbor )
    {
      v8 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v9 = &v8->g;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v10 = 0.5 * layerWidth + v8->g;
      v21 = v10;
      goto LABEL_25;
    }
    if ( fromType != PlanarNeighbor )
    {
LABEL_22:
      v17 = 8LL;
      exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
      v19 = (_QWORD *)exception;
      if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      {
        v17 = exception;
        __asan_report_store8();
      }
      *v19 = "Invalid from type for get node g value";
      __asan_handle_no_return(v17);
      _cxa_throw(v19, (struct type_info *)&`typeinfo for'char const*, 0LL);
    }
    v11 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = &v11->g;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    v13 = 0.707 * layerWidth + v11->g;
    v21 = v13;
  }
LABEL_25:
  std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v4 + 32));
LABEL_26:
  result = v21;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 364: range 000000000CBCE69C-000000000CBCE719
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<AStarInfo> __cdecl AdaptiveAStarScoreCalculator::ProcessScore(
        SVONode *node,
        const SVONode *fromNode,
        const SVONode *endNode,
        const ToTheMoonVector3 *endPos,
        AStarPathFinder *pathFinder,
        bool recordJunctionPos)
{
  __m128i v6; // xmm0
  std::shared_ptr<AStarInfo> result; // rax
  _BOOL8 pathFindera; // [rsp+10h] [rbp-30h]

  pathFindera = recordJunctionPos;
  if ( *(_WORD *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
    __asan_report_store16(node, fromNode);
  BaseInflectionAStarScoreCalculator::ProcessScore(
    (std::shared_ptr<AStarInfo> *)node,
    fromNode,
    endNode,
    endPos,
    (const ToTheMoonVector3 *)pathFinder,
    (SVONode *)pathFindera,
    v6,
    0);
  result._M_ptr = (std::__shared_ptr<AStarInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)node;
  return result;
};

// Line 369: range 000000000CBCE71A-000000000CBCE76A
void __cdecl AdaptiveAStarScoreCalculator::ProcessOldNode(
        SVONode *node,
        const SVONode *curNode,
        const SVONode *endNode,
        const ToTheMoonVector3 *endPos,
        Const::FromType fromType,
        int rank,
        AStarPathFinder *pathHandler)
{
  BaseInflectionAStarScoreCalculator::ProcessOldNode(node, curNode, endNode, endPos, fromType, rank, pathHandler, 0);
};

// Line 374: range 000000000CBCE76C-000000000CBCEA75
// local variable allocation has failed, the output may be wrong!
float __fastcall InflectionAStarScoreCalcualtor::GetNodeGValue(
        ToTheMoonVector3 junctionPos,
        const SVONode *pathHandler,
        const SVONode *fromNode,
        Const::FromType fromType)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  float *p_g; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  float result; // xmm0_4
  float v11; // [rsp+8h] [rbp-C8h]
  float g; // [rsp+8h] [rbp-C8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 12 15 junctionPos:373 64 16 9 astar:380";
  *(_QWORD *)(v4 + 16) = InflectionAStarScoreCalcualtor::GetNodeGValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -202178560;
  *(ToTheMoonVector3 *)(v4 + 32) = junctionPos;
  if ( pathHandler )
  {
    AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v4 + 64), pathHandler);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "GetNodeGValue",
        383);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v13,
        (const char (*)[37])"should nerver be here: astar is null");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v11 = 0.0;
    }
    else
    {
      v7 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      p_g = &v7->g;
      if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_g);
      }
      g = v7->g;
      v9 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v11 = ToTheMoonVector3::EuclideanDistance((const ToTheMoonVector3 *const)(v4 + 32), &v9->junctionPos) + g;
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetNodeGValue",
      377);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v13, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v11 = 0.0;
  }
  result = v11;
  if ( v14 == (char *)v4 )
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

// Line 390: range 000000000CBCEA76-000000000CBCEAED
std::shared_ptr<AStarInfo> __cdecl InflectionAStarScoreCalcualtor::ProcessScore(
        SVONode *node,
        const SVONode *fromNode,
        const SVONode *endNode,
        const ToTheMoonVector3 *endPos,
        AStarPathFinder *pathFinder)
{
  SVONode *v5; // r9
  __m128i v6; // xmm0
  std::shared_ptr<AStarInfo> result; // rax
  SVONode *pathFindera; // [rsp+0h] [rbp-30h]

  pathFindera = v5;
  if ( *(_WORD *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
    __asan_report_store16(node, fromNode);
  BaseInflectionAStarScoreCalculator::ProcessScore(
    (std::shared_ptr<AStarInfo> *)node,
    fromNode,
    endNode,
    endPos,
    (const ToTheMoonVector3 *)pathFinder,
    pathFindera,
    v6,
    1);
  result._M_ptr = (std::__shared_ptr<AStarInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)node;
  return result;
};

// Line 395: range 000000000CBCEAEE-000000000CBCEB3E
void __cdecl InflectionAStarScoreCalcualtor::ProcessOldNode(
        SVONode *node,
        const SVONode *curNode,
        const SVONode *endNode,
        const ToTheMoonVector3 *endPos,
        Const::FromType fromType,
        int rank,
        AStarPathFinder *pathHandler)
{
  BaseInflectionAStarScoreCalculator::ProcessOldNode(node, curNode, endNode, endPos, fromType, rank, pathHandler, 1);
};

// Line 400: range 000000000CBCEB40-000000000CBCF000
float __cdecl ComplexAStarScoreCalculator::GetNodeGValue(
        AStarPathFinder *pathHandler,
        const SVONode *node,
        const SVONode *fromNode,
        Const::FromType fromType)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  SVOLayer *layer; // rax
  __int64 level; // rsi
  SVOLayer *v9; // rax
  __int64 v10; // rsi
  float v11; // xmm0_4
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  SVOLayer *v14; // rax
  float v15; // xmm7_4
  float result; // xmm0_4
  float v17; // [rsp+8h] [rbp-B8h]
  double g; // [rsp+8h] [rbp-B8h]
  float coef; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-80h] BYREF
  char v23[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 fromAstar:406";
  *(_QWORD *)(v4 + 16) = ComplexAStarScoreCalculator::GetNodeGValue;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( !pathHandler || !node || !fromNode )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->layer, node);
  if ( !node->layer )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&fromNode->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&fromNode->layer, node);
  if ( fromNode->layer )
  {
    AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v4 + 32), (const SVONode *)pathHandler);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v4 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "GetNodeGValue",
        409);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v22,
        (const char (*)[35])"[GetNodeGValue] fromAstar is null ");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v17 = 0.0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->layer, 0LL);
      layer = node->layer;
      if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(node->layer);
      }
      level = (unsigned int)layer->level;
      if ( *(_BYTE *)(((unsigned __int64)&fromNode->layer >> 3) + 0x7FFF8000) )
        __asan_report_load8(&fromNode->layer, level);
      v9 = fromNode->layer;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(fromNode->layer);
      }
      v10 = (unsigned int)(level - v9->level);
      coef = 1.0;
      if ( (int)v10 > 0 )
      {
        v11 = std::pow<double,int>(0.8, v10);
        coef = v11;
      }
      v12 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v13 = *(_BYTE *)(((unsigned __int64)&v12->g >> 3) + 0x7FFF8000);
      LOBYTE(v10) = v13 != 0;
      if ( v13 != 0 && (char)((((_BYTE)v12 + 28) & 7) + 3) >= v13 )
        __asan_report_load4(&v12->g);
      g = v12->g;
      if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->layer, v10);
      v14 = node->layer;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(node->layer);
      }
      v15 = SVODataProcessor::GetLevelSize(v14->level) * (coef * 0.5) + g;
      v17 = v15;
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v4 + 32));
  }
  else
  {
LABEL_13:
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetNodeGValue",
      403);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v22, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v17 = 0.0;
  }
  result = v17;
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 422: range 000000000CBCF002-000000000CBCF1DB
float __cdecl ComplexAStarScoreCalculator::GetHValue(const SVONode *node, const SVONode *endNode)
{
  SVOLayer *layer; // rax
  char v4; // dl
  const ToTheMoonVector3 *centerPos; // rax
  const SVONode *endNodea; // [rsp+0h] [rbp-50h]
  float halfLevlSize; // [rsp+18h] [rbp-38h]
  float res; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  endNodea = endNode;
  if ( !node )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&node->centerPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->centerPos, endNode);
  if ( node->centerPos && endNode )
  {
    if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->layer, endNode);
    layer = node->layer;
    v4 = *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000);
    LOBYTE(endNode) = v4 != 0;
    if ( v4 != 0 && v4 <= 3 )
      __asan_report_load4(node->layer);
    halfLevlSize = SVODataProcessor::GetLevelSize(layer->level) * 0.5;
    if ( *(_BYTE *)(((unsigned __int64)&node->centerPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->centerPos, endNode);
    centerPos = node->centerPos;
    if ( *(_BYTE *)(((unsigned __int64)&endNodea->centerPos >> 3) + 0x7FFF8000) )
      centerPos = (const ToTheMoonVector3 *)__asan_report_load8(&endNodea->centerPos, endNode);
    res = ToTheMoonVector3::EuclideanDistance(centerPos, endNodea->centerPos) - halfLevlSize;
    if ( res <= 0.0 )
      return 0.0;
    else
      return res;
  }
  else
  {
LABEL_6:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "GetHValue",
      425);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v9,
      (const char (*)[60])"[ComplexAStarScoreCalculator::GetHValue] Should not be here");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0.0;
  }
};

// Line 436: range 000000000CBCF1DC-000000000CBCF679
void __cdecl ComplexAStarScoreCalculator::ProcessOldNode(
        SVONode *node,
        const SVONode *curNode,
        const SVONode *endNode,
        Const::FromType fromType,
        int rank,
        AStarPathFinder *pathHandler)
{
  __m128i v6; // xmm0
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v11; // rax
  const SVONode *v12; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Const::FromType v14; // eax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  float *p_g; // rax
  __m128i g_low; // xmm0
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  float *v19; // rax
  int v20; // r14d
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const SVONode *curNodea; // [rsp+20h] [rbp-C0h]
  Const::FromType referfromType; // [rsp+40h] [rbp-A0h]
  float gScore; // [rsp+44h] [rbp-9Ch]
  const SVONode *referNode; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-90h] BYREF
  char v30[112]; // [rsp+70h] [rbp-70h] BYREF

  curNodea = curNode;
  v7 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 16 9 astar:445";
  *(_QWORD *)(v7 + 16) = ComplexAStarScoreCalculator::ProcessOldNode;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202178560;
  if ( !pathHandler || (curNode = 0LL, std::operator==<AStarInfo>(&pathHandler->_curAStarInfo, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
      "ProcessOldNode",
      439);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v29, (const char (*)[22])"should nerver be here");
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    if ( fromType )
    {
      v12 = curNodea;
    }
    else
    {
      v11 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)(v11 + 40) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11 + 40, curNode);
      v12 = *(const SVONode **)(v11 + 40);
    }
    referNode = v12;
    if ( fromType )
    {
      v14 = fromType;
    }
    else
    {
      v13 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pathHandler->_curAStarInfo);
      if ( *(_BYTE *)(((unsigned __int64)&v13->fromType >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->fromType >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)v6.m128i_i64 = __asan_report_load4(&v13->fromType);
      }
      v14 = v13->fromType;
    }
    referfromType = v14;
    AStarPathQueryData::GetAStarInfo((const AStarPathQueryData *const)(v7 + 32), (const SVONode *)pathHandler);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v7 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/score_calculator.cpp",
        "ProcessOldNode",
        448);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v29,
        (const char (*)[48])"[ProcessOldNode] Old node should has astar info");
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      *(float *)v6.m128i_i32 = ComplexAStarScoreCalculator::GetNodeGValue(pathHandler, node, referNode, referfromType);
      gScore = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      v15 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
      p_g = &v15->g;
      if ( *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_g & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_g >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_g);
      }
      g_low = (__m128i)LODWORD(v15->g);
      if ( *(float *)g_low.m128i_i32 > gScore )
      {
        AStarPathFinder::UpdateFromInfo(pathHandler, node, fromType, rank);
        v18 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
        v19 = &v18->g;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v19);
        }
        v18->g = gScore;
        *(float *)g_low.m128i_i32 = BaseAStarScoreCalculator::GetFScore(node, pathHandler);
        v20 = _mm_cvtsi128_si32(g_low);
        v21 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v21->score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v21->score >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->score);
        }
        LODWORD(v21->score) = v20;
      }
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v7 + 32));
  }
  if ( v30 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
