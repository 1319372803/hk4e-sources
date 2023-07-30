// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp

// Line 12: range 000000000CBC13CC-000000000CBC21FE
bool __cdecl RefinedPathGenerator::NodeToWindow(const SVONode *node1, const SVONode *node2, NodeWindow *outWindow)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r14
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float *p_x; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  _DWORD *v11; // rdx
  double v12; // xmm0_8
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  float *p_y; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  float *v16; // rax
  double v17; // xmm0_8
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  float *p_z; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  float *v21; // rax
  double v22; // xmm0_8
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  ToTheMoonVector3 *referPos; // rdx
  bool result; // al
  float l2_start; // [rsp+0h] [rbp-270h]
  float l2_starta; // [rsp+0h] [rbp-270h]
  float l2_startb; // [rsp+0h] [rbp-270h]
  float l2_end; // [rsp+4h] [rbp-26Ch]
  float l2_enda; // [rsp+4h] [rbp-26Ch]
  float l2_endb; // [rsp+4h] [rbp-26Ch]
  ToTheMoonVector3 *node1MinPos; // [rsp+20h] [rbp-250h]
  ToTheMoonVector3 *node2MinPos; // [rsp+28h] [rbp-248h]
  ToTheMoonVector3 p1; // [rsp+30h] [rbp-240h] BYREF
  ToTheMoonVector3 p2; // [rsp+3Ch] [rbp-234h] BYREF
  ToTheMoonVector3 p3; // [rsp+48h] [rbp-228h] BYREF
  ToTheMoonVector3 p4; // [rsp+54h] [rbp-21Ch] BYREF
  common::milog::MiLogStream v53; // [rsp+60h] [rbp-210h] BYREF
  std::string val; // [rsp+80h] [rbp-1F0h] BYREF
  std::string v55; // [rsp+A0h] [rbp-1D0h] BYREF
  NodeWindow v56; // [rsp+C0h] [rbp-1B0h] BYREF
  NodeWindow v57; // [rsp+100h] [rbp-170h] BYREF
  NodeWindow v58; // [rsp+140h] [rbp-130h] BYREF
  char v59[240]; // [rsp+180h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 12 15 commentPartX:26 64 12 15 commentPartY:26 96 12 15 commentPartZ:26 128 16 14 node1MaxP"
                        "os:18 160 16 14 node2MaxPos:20";
  *(_QWORD *)(v3 + 16) = RefinedPathGenerator::NodeToWindow;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( !node1 || !node2 )
  {
    v6 = 0;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(((unsigned __int64)&node1->referPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node1->referPos, node2);
  node1MinPos = node1->referPos;
  SVODataProcessor::GetEndPos((const SVONode *)(v3 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&node2->referPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node2->referPos, node1);
  node2MinPos = node2->referPos;
  SVODataProcessor::GetEndPos((const SVONode *)(v3 + 160));
  if ( node1MinPos
    && node2MinPos
    && !std::operator==<ToTheMoonVector3>((const std::shared_ptr<ToTheMoonVector3> *)(v3 + 128), 0LL)
    && !std::operator==<ToTheMoonVector3>((const std::shared_ptr<ToTheMoonVector3> *)(v3 + 160), 0LL) )
  {
    PlaneLine::PlaneLine((PlaneLine *const)(v3 + 32));
    PlaneLine::PlaneLine((PlaneLine *const)(v3 + 64));
    PlaneLine::PlaneLine((PlaneLine *const)(v3 + 96));
    v8 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    p_x = &v8->x;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    l2_end = *p_x;
    if ( *(_BYTE *)(((unsigned __int64)node2MinPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)node2MinPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)node2MinPos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(node2MinPos);
    }
    l2_start = node2MinPos->x;
    v10 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    v11 = (_DWORD *)&v10->x;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    LODWORD(v12) = *v11;
    if ( *(_BYTE *)(((unsigned __int64)node1MinPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)node1MinPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)node1MinPos >> 3) + 0x7FFF8000) )
    {
      v12 = __asan_report_load4(node1MinPos);
    }
    Geometry::GetLineSegmentCommonPart(node1MinPos->x, *(float *)&v12, l2_start, l2_end, (PlaneLine *)(v3 + 32));
    v13 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    p_y = &v13->y;
    if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_y);
    }
    l2_enda = v13->y;
    if ( *(_BYTE *)(((unsigned __int64)&node2MinPos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)node2MinPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node2MinPos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&node2MinPos->y);
    }
    l2_starta = node2MinPos->y;
    v15 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    v16 = &v15->y;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    *(float *)&v17 = v15->y;
    if ( *(_BYTE *)(((unsigned __int64)&node1MinPos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)node1MinPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node1MinPos->y >> 3) + 0x7FFF8000) )
    {
      v17 = __asan_report_load4(&node1MinPos->y);
    }
    Geometry::GetLineSegmentCommonPart(node1MinPos->y, *(float *)&v17, l2_starta, l2_enda, (PlaneLine *)(v3 + 64));
    v18 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    p_z = &v18->z;
    if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_z);
    }
    l2_endb = v18->z;
    if ( *(_BYTE *)(((unsigned __int64)&node2MinPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)node2MinPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node2MinPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&node2MinPos->z);
    }
    l2_startb = node2MinPos->z;
    v20 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    v21 = &v20->z;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v21);
    }
    *(float *)&v22 = v20->z;
    if ( *(_BYTE *)(((unsigned __int64)&node1MinPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)node1MinPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&node1MinPos->z >> 3) + 0x7FFF8000) )
    {
      v22 = __asan_report_load4(&node1MinPos->z);
    }
    Geometry::GetLineSegmentCommonPart(node1MinPos->z, *(float *)&v22, l2_startb, l2_endb, (PlaneLine *)(v3 + 96));
    if ( PlaneLine::IsPoint((const PlaneLine *const)(v3 + 32)) )
    {
      ToTheMoonVector3::ToTheMoonVector3(&p4, *(float *)(v3 + 32), *(float *)(v3 + 64), *(float *)(v3 + 100));
      ToTheMoonVector3::ToTheMoonVector3(&p3, *(float *)(v3 + 32), *(float *)(v3 + 68), *(float *)(v3 + 100));
      ToTheMoonVector3::ToTheMoonVector3(&p2, *(float *)(v3 + 32), *(float *)(v3 + 68), *(float *)(v3 + 96));
      ToTheMoonVector3::ToTheMoonVector3(&p1, *(float *)(v3 + 32), *(float *)(v3 + 64), *(float *)(v3 + 96));
      NodeWindow::NodeWindow(&v56, &p1, &p2, &p3, &p4);
      if ( ((unsigned __int8)outWindow & 7) >= *(_BYTE *)(((unsigned __int64)outWindow >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)outWindow >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)&outWindow->hasInitDir >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)outWindow + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&outWindow->hasInitDir >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store_n(outWindow, 61LL);
      }
      v23 = *(_QWORD *)&v56.p1.z;
      *(_QWORD *)&outWindow->p1.x = *(_QWORD *)&v56.p1.x;
      *(_QWORD *)&outWindow->p1.z = v23;
      v24 = *(_QWORD *)&v56.p3.x;
      *(_QWORD *)&outWindow->p2.y = *(_QWORD *)&v56.p2.y;
      *(_QWORD *)&outWindow->p3.x = v24;
      v25 = *(_QWORD *)&v56.p3.z;
      v26 = *(_QWORD *)&v56.p4.y;
      *(_QWORD *)&outWindow->p3.z = *(_QWORD *)&v56.p3.z;
      *(_QWORD *)&outWindow->p4.y = v26;
      outWindow->pointOutDir = v56.pointOutDir;
      outWindow->hasInitDir = v56.hasInitDir;
    }
    else if ( PlaneLine::IsPoint((const PlaneLine *const)(v3 + 64)) )
    {
      ToTheMoonVector3::ToTheMoonVector3(&p4, *(float *)(v3 + 32), *(float *)(v3 + 64), *(float *)(v3 + 100));
      ToTheMoonVector3::ToTheMoonVector3(&p3, *(float *)(v3 + 36), *(float *)(v3 + 64), *(float *)(v3 + 100));
      ToTheMoonVector3::ToTheMoonVector3(&p2, *(float *)(v3 + 36), *(float *)(v3 + 64), *(float *)(v3 + 96));
      ToTheMoonVector3::ToTheMoonVector3(&p1, *(float *)(v3 + 32), *(float *)(v3 + 64), *(float *)(v3 + 96));
      NodeWindow::NodeWindow(&v57, &p1, &p2, &p3, &p4);
      if ( ((unsigned __int8)outWindow & 7) >= *(_BYTE *)(((unsigned __int64)outWindow >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)outWindow >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)&outWindow->hasInitDir >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)outWindow + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&outWindow->hasInitDir >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store_n(outWindow, 61LL);
      }
      v27 = *(_QWORD *)&v57.p1.z;
      *(_QWORD *)&outWindow->p1.x = *(_QWORD *)&v57.p1.x;
      *(_QWORD *)&outWindow->p1.z = v27;
      v28 = *(_QWORD *)&v57.p3.x;
      *(_QWORD *)&outWindow->p2.y = *(_QWORD *)&v57.p2.y;
      *(_QWORD *)&outWindow->p3.x = v28;
      v25 = *(_QWORD *)&v57.p3.z;
      v29 = *(_QWORD *)&v57.p4.y;
      *(_QWORD *)&outWindow->p3.z = *(_QWORD *)&v57.p3.z;
      *(_QWORD *)&outWindow->p4.y = v29;
      outWindow->pointOutDir = v57.pointOutDir;
      outWindow->hasInitDir = v57.hasInitDir;
    }
    else
    {
      if ( !PlaneLine::IsPoint((const PlaneLine *const)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
          "NodeToWindow",
          56);
        v33 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v53,
                (const char (*)[28])"Error: nodes not contact!! ");
        SVONode::DebugInfo[abi:cxx11](&val, node1);
        v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &val);
        v35 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])" |TO| ");
        SVONode::DebugInfo[abi:cxx11](&v55, node2);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, &v55);
        std::string::~string(&v55);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v53);
        v6 = 0;
        goto LABEL_63;
      }
      ToTheMoonVector3::ToTheMoonVector3(&p4, *(float *)(v3 + 32), *(float *)(v3 + 68), *(float *)(v3 + 96));
      ToTheMoonVector3::ToTheMoonVector3(&p3, *(float *)(v3 + 36), *(float *)(v3 + 68), *(float *)(v3 + 96));
      ToTheMoonVector3::ToTheMoonVector3(&p2, *(float *)(v3 + 36), *(float *)(v3 + 64), *(float *)(v3 + 96));
      ToTheMoonVector3::ToTheMoonVector3(&p1, *(float *)(v3 + 32), *(float *)(v3 + 64), *(float *)(v3 + 96));
      NodeWindow::NodeWindow(&v58, &p1, &p2, &p3, &p4);
      if ( ((unsigned __int8)outWindow & 7) >= *(_BYTE *)(((unsigned __int64)outWindow >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)outWindow >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)&outWindow->hasInitDir >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)outWindow + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&outWindow->hasInitDir >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store_n(outWindow, 61LL);
      }
      v30 = *(_QWORD *)&v58.p1.z;
      *(_QWORD *)&outWindow->p1.x = *(_QWORD *)&v58.p1.x;
      *(_QWORD *)&outWindow->p1.z = v30;
      v31 = *(_QWORD *)&v58.p3.x;
      *(_QWORD *)&outWindow->p2.y = *(_QWORD *)&v58.p2.y;
      *(_QWORD *)&outWindow->p3.x = v31;
      v25 = *(_QWORD *)&v58.p3.z;
      v32 = *(_QWORD *)&v58.p4.y;
      *(_QWORD *)&outWindow->p3.z = *(_QWORD *)&v58.p3.z;
      *(_QWORD *)&outWindow->p4.y = v32;
      outWindow->pointOutDir = v58.pointOutDir;
      outWindow->hasInitDir = v58.hasInitDir;
    }
    if ( *(_BYTE *)(((unsigned __int64)&node2->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node2->referPos, v25);
    referPos = node2->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&node1->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node1->referPos, v25);
    if ( !NodeWindow::InitPointOutDir(outWindow, node1->referPos, referPos) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v55,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
        "NodeToWindow",
        61);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        (common::milog::MiLogStream *const)&v55,
        (const char (*)[24])"Init PointOutDir Failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v55);
    }
    v6 = 1;
    goto LABEL_63;
  }
  v6 = 0;
LABEL_63:
  std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v3 + 160));
  std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v3 + 128));
LABEL_64:
  result = v6;
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 67: range 000000000CBC2200-000000000CBC256D
SharedTopPlaneSectorRelation __cdecl RefinedPathGenerator::RelationBetweenPyramidInPlane(
        const Pyramid *from,
        const Pyramid *to,
        Const::Direction toDir,
        bool *hasOverlap)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  SharedTopPlaneSectorRelation result; // eax
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  SharedTopPlaneSectorRelation relation; // [rsp+2Ch] [rbp-104h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-100h] BYREF
  char v13[224]; // [rsp+50h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 12 10 toStart:76 64 12 8 toEnd:77 96 12 12 fromStart:79 128 12 10 fromEnd:80 160 12 7 axis:82";
  *(_QWORD *)(v4 + 16) = RefinedPathGenerator::RelationBetweenPyramidInPlane;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219020288;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -202177536;
  if ( std::operator==<NodeWindow>(&from->base, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
      "RelationBetweenPyramidInPlane",
      70);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v12,
      (const char (*)[42])"base of from pyramid should never be null");
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = Invalid_4;
  }
  else
  {
    v8 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&from->base);
    if ( !NodeWindow::IsPointIn(v8, &from->top, toDir) )
    {
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 32));
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 64));
      RefinedPathGenerator::FastPyramidToPlaneSector(
        to,
        toDir,
        (ToTheMoonVector3 *)(v4 + 32),
        (ToTheMoonVector3 *)(v4 + 64));
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 96));
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 128));
      RefinedPathGenerator::FullPyramidToPlaneSector(
        from,
        toDir,
        (ToTheMoonVector3 *)(v4 + 96),
        (ToTheMoonVector3 *)(v4 + 128));
      *(ToTheMoonVector3 *)(v4 + 160) = Geometry::CommonAxis::DirectionToVector3(toDir);
      relation = RefinedPathGenerator::RelationBetweenPyramidInPlane(
                   *(ToTheMoonVector3 *)(v4 + 96),
                   *(ToTheMoonVector3 *)(v4 + 128),
                   *(ToTheMoonVector3 *)(v4 + 32),
                   *(ToTheMoonVector3 *)(v4 + 64),
                   *(ToTheMoonVector3 *)(v4 + 160));
      if ( relation == Negative || relation == Positive )
      {
        if ( *(_BYTE *)(((unsigned __int64)hasOverlap >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)hasOverlap & 7) >= *(_BYTE *)(((unsigned __int64)hasOverlap >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(hasOverlap);
        }
        *hasOverlap = 0;
      }
      result = relation;
    }
    else
    {
      result = FromIncluded;
    }
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 96: range 000000000CBC256E-000000000CBC2B27
bool __cdecl RefinedPathGenerator::PyramidStep(
        RefinedPathGenerator *const this,
        const Pyramid *to,
        std::vector<ToTheMoonVector3> *path)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v7; // r14
  std::__shared_ptr_access<Pyramid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool result; // al
  std::vector<SharedTopPlaneSectorRelation>::value_type __x; // [rsp+28h] [rbp-168h] BYREF
  Const::Direction toDir; // [rsp+2Ch] [rbp-164h]
  std::shared_ptr<Pyramid> v16; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-150h] BYREF
  char v18[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 14 hasOverlap:101 64 12 14 toPlaneVec:102 96 16 19 inflectionPoint:144 128 24 16 relation"
                        "List:110 192 32 7 from:99";
  *(_QWORD *)(v3 + 16) = RefinedPathGenerator::PyramidStep;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219020288;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  if ( std::operator==<Pyramid>(&this->currentPyramid, 0LL) || std::operator==<NodeWindow>(&to->base, 0LL) )
  {
    v7 = 0;
    goto LABEL_31;
  }
  v8 = std::__shared_ptr_access<Pyramid,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Pyramid,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  Pyramid::Pyramid((Pyramid *const)(v3 + 192), v8);
  if ( !ToTheMoonVector3::Equal((const ToTheMoonVector3 *const)(v3 + 192), &to->top) )
  {
    __asan_handle_no_return(v3 + 192);
    __assert_fail(
      "from.top.Equal(to.top)",
      "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
      0x64u,
      "bool RefinedPathGenerator::PyramidStep(const Pyramid&, std::vector<ToTheMoonVector3>&)");
  }
  *(_BYTE *)(v3 + 48) = 1;
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 64));
  v9 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&to->base);
  NodeWindow::GetPlaneVector(v9, (ToTheMoonVector3 *)(v3 + 64));
  toDir = RefinedPathGenerator::AxisVectorToDirection((const ToTheMoonVector3 *)(v3 + 64));
  std::vector<SharedTopPlaneSectorRelation>::vector((std::vector<SharedTopPlaneSectorRelation> *const)(v3 + 128));
  if ( toDir != Front )
  {
    __x = RefinedPathGenerator::RelationBetweenPyramidInPlane((const Pyramid *)(v3 + 192), to, Front, (bool *)(v3 + 48));
    std::vector<SharedTopPlaneSectorRelation>::push_back(
      (std::vector<SharedTopPlaneSectorRelation> *const)(v3 + 128),
      &__x);
  }
  if ( toDir != Up )
  {
    __x = RefinedPathGenerator::RelationBetweenPyramidInPlane((const Pyramid *)(v3 + 192), to, Up, (bool *)(v3 + 48));
    std::vector<SharedTopPlaneSectorRelation>::push_back(
      (std::vector<SharedTopPlaneSectorRelation> *const)(v3 + 128),
      &__x);
  }
  if ( toDir != Left )
  {
    __x = RefinedPathGenerator::RelationBetweenPyramidInPlane((const Pyramid *)(v3 + 192), to, Left, (bool *)(v3 + 48));
    std::vector<SharedTopPlaneSectorRelation>::push_back(
      (std::vector<SharedTopPlaneSectorRelation> *const)(v3 + 128),
      &__x);
  }
  if ( std::vector<SharedTopPlaneSectorRelation>::size((const std::vector<SharedTopPlaneSectorRelation> *const)(v3 + 128)) != 2
    && toDir )
  {
    __asan_handle_no_return(v3 + 128);
    __assert_fail(
      "relationList.size() == 2 || toDir == Direction::None",
      "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
      0x79u,
      "bool RefinedPathGenerator::PyramidStep(const Pyramid&, std::vector<ToTheMoonVector3>&)");
  }
  if ( RefinedPathGenerator::PlaneSectorLegalRelationAllEqual(
         (const std::vector<SharedTopPlaneSectorRelation> *)(v3 + 128),
         ToIncluded,
         toDir) )
  {
    goto LABEL_29;
  }
  if ( RefinedPathGenerator::PlaneSectorLegalRelationAllEqual(
         (const std::vector<SharedTopPlaneSectorRelation> *)(v3 + 128),
         FromIncluded,
         toDir) )
  {
    std::make_shared<Pyramid,Pyramid const&>((const Pyramid *)(v3 + 96), to);
    std::shared_ptr<Pyramid>::operator=(&this->currentPyramid, (std::shared_ptr<Pyramid> *)(v3 + 96));
    std::shared_ptr<Pyramid>::~shared_ptr((std::shared_ptr<Pyramid> *const)(v3 + 96));
LABEL_29:
    v7 = 1;
    goto LABEL_30;
  }
  if ( !std::operator==<NodeWindow>(&to->base, 0LL) )
  {
    RefinedPathGenerator::GenerateInflectionPoint(
      (RefinedPathGenerator *const)(v3 + 96),
      (const Pyramid *)this,
      (const Pyramid *)(v3 + 192));
    if ( std::operator!=<ToTheMoonVector3>((const std::shared_ptr<ToTheMoonVector3> *)(v3 + 96), 0LL) )
    {
      v10 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      std::vector<ToTheMoonVector3>::push_back(path, v10);
      v11 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      std::make_shared<Pyramid,ToTheMoonVector3 &,std::shared_ptr<NodeWindow> const&>(
        (ToTheMoonVector3 *)&v16,
        (const std::shared_ptr<NodeWindow> *)v11,
        (ToTheMoonVector3 *)&to->base,
        (const std::shared_ptr<NodeWindow> *)v11);
      std::shared_ptr<Pyramid>::operator=(&this->currentPyramid, &v16);
      std::shared_ptr<Pyramid>::~shared_ptr(&v16);
    }
    std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v3 + 96));
    goto LABEL_29;
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
    "PyramidStep",
    141);
  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
    &v17,
    (const char (*)[42])"base of 'to' pyramid should never be null");
  common::milog::MiLogStream::~MiLogStream(&v17);
  v7 = 0;
LABEL_30:
  std::vector<SharedTopPlaneSectorRelation>::~vector((std::vector<SharedTopPlaneSectorRelation> *const)(v3 + 128));
  Pyramid::~Pyramid((Pyramid *const)(v3 + 192));
LABEL_31:
  result = v7;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 155: range 000000000CBC2B28-000000000CBC2FE3
std::shared_ptr<ToTheMoonVector3> __cdecl RefinedPathGenerator::GenerateInflectionPoint(
        RefinedPathGenerator *const this,
        const Pyramid *from,
        const Pyramid *to)
{
  const Pyramid *v3; // rcx
  __m128i v4; // xmm0
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const ToTheMoonVector3 *v11; // rax
  const ToTheMoonVector3 *v12; // rax
  const ToTheMoonVector3 *v13; // rax
  const ToTheMoonVector3 *v14; // rax
  const ToTheMoonVector3 *v15; // rax
  ToTheMoonVector3 *v16; // rcx
  std::shared_ptr<ToTheMoonVector3> result; // rax
  const Pyramid *toa; // [rsp+0h] [rbp-110h]
  __int64 minIndex; // [rsp+20h] [rbp-F0h]
  float disToTop; // [rsp+28h] [rbp-E8h]
  __int64 i; // [rsp+2Ch] [rbp-E4h]
  float curDisToTop; // [rsp+34h] [rbp-DCh]
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *toPlanePos; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  toa = v3;
  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 12 17 toPlaneNormal:163 64 24 14 candidates:156";
  *(_QWORD *)(v5 + 16) = RefinedPathGenerator::GenerateInflectionPoint;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  std::vector<ToTheMoonVector3>::vector((std::vector<ToTheMoonVector3> *const)(v5 + 64));
  if ( std::operator==<NodeWindow>(&to->base, 0LL) || std::operator==<NodeWindow>(&toa->base, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
      "GenerateInflectionPoint",
      158);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v25,
      (const char (*)[49])"base of 'from'/'to' pyramid should never be null");
    common::milog::MiLogStream::~MiLogStream(&v25);
    std::shared_ptr<ToTheMoonVector3>::shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)this, 0LL);
  }
  else
  {
    v9 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&to->base);
    NodeWindow::GetCandidates(v9, (std::vector<ToTheMoonVector3> *)(v5 + 64));
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v5 + 32));
    v10 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&toa->base);
    NodeWindow::GetPlaneVector(v10, (ToTheMoonVector3 *)(v5 + 32));
    toPlanePos = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&toa->base);
    LODWORD(minIndex) = 0;
    v11 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v5 + 64), 0LL);
    *(float *)v4.m128i_i32 = Geometry::PointDistanceToPlane(v11, (const ToTheMoonVector3 *)(v5 + 32), &toPlanePos->p1);
    HIDWORD(minIndex) = _mm_cvtsi128_si32(v4);
    v12 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v5 + 64), 0LL);
    *(float *)v4.m128i_i32 = ToTheMoonVector3::EuclideanDistance(&to->top, v12);
    disToTop = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    LODWORD(i) = 1;
    while ( (int)i < std::vector<ToTheMoonVector3>::size((const std::vector<ToTheMoonVector3> *const)(v5 + 64)) )
    {
      v13 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v5 + 64), (int)i);
      *(float *)v4.m128i_i32 = Geometry::PointDistanceToPlane(v13, (const ToTheMoonVector3 *)(v5 + 32), &toPlanePos->p1);
      HIDWORD(i) = _mm_cvtsi128_si32(v4);
      if ( *((float *)&minIndex + 1) <= *((float *)&i + 1) )
      {
        v4 = _mm_cvtsi32_si128(HIDWORD(i));
        if ( Algebra::IsClose(*(float *)v4.m128i_i32, *((float *)&minIndex + 1)) )
        {
          v15 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v5 + 64), (int)i);
          *(float *)v4.m128i_i32 = ToTheMoonVector3::EuclideanDistance(&to->top, v15);
          curDisToTop = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
          v4 = (__m128i)LODWORD(disToTop);
          if ( disToTop > curDisToTop )
          {
            minIndex = i;
            v4 = (__m128i)LODWORD(curDisToTop);
            disToTop = curDisToTop;
          }
        }
      }
      else
      {
        v4 = (__m128i)HIDWORD(i);
        minIndex = i;
        v14 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v5 + 64), (int)i);
        *(float *)v4.m128i_i32 = ToTheMoonVector3::EuclideanDistance(&to->top, v14);
        disToTop = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      }
      LODWORD(i) = i + 1;
    }
    v16 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v5 + 64), (int)minIndex);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, (int)minIndex);
    std::make_shared<ToTheMoonVector3,ToTheMoonVector3&>((ToTheMoonVector3 *)this, v16);
  }
  std::vector<ToTheMoonVector3>::~vector((std::vector<ToTheMoonVector3> *const)(v5 + 64));
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 194: range 000000000CBC2FE4-000000000CBC2FFE
void __cdecl RefinedPathGenerator::RefinedPathGenerator(RefinedPathGenerator *const this)
{
  std::shared_ptr<Pyramid>::shared_ptr(&this->currentPyramid);
};

// Line 198: range 000000000CBC3000-000000000CBC304A
void __cdecl RefinedPathGenerator::~RefinedPathGenerator(RefinedPathGenerator *const this)
{
  std::shared_ptr<Pyramid> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<Pyramid>::shared_ptr(&__r, 0LL);
  std::shared_ptr<Pyramid>::operator=(&this->currentPyramid, &__r);
  std::shared_ptr<Pyramid>::~shared_ptr(&__r);
  std::shared_ptr<Pyramid>::~shared_ptr(&this->currentPyramid);
};

// Line 204: range 000000000CBC304C-000000000CBC308A
void __cdecl RefinedPathGenerator::Clear(RefinedPathGenerator *const this)
{
  std::shared_ptr<Pyramid> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<Pyramid>::shared_ptr(&__r, 0LL);
  std::shared_ptr<Pyramid>::operator=(&this->currentPyramid, &__r);
  std::shared_ptr<Pyramid>::~shared_ptr(&__r);
};

// Line 209: range 000000000CBC308C-000000000CBC3951
void __cdecl RefinedPathGenerator::GeneratePath(
        RefinedPathGenerator *const this,
        SVONode *finishNode,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::vector<ToTheMoonVector3> *path,
        AStarPathFinder *pathFinder)
{
  unsigned __int64 p_M_before_begin; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rax
  unsigned __int64 n; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  SVONode *nextNode; // [rsp+38h] [rbp-1E8h]
  AStarPathFinder v26; // [rsp+40h] [rbp-1E0h] BYREF

  p_M_before_begin = (unsigned __int64)&v26._queryData.astarInfoMap._M_h._M_before_begin;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(416LL);
    if ( v7 )
      p_M_before_begin = v7;
  }
  *(_QWORD *)p_M_before_begin = 1102416563LL;
  *(_QWORD *)(p_M_before_begin + 8) = "7 32 16 18 modifiedEndPos:215 64 16 15 finishAstar:219 96 16 13 nextAstar:234 128 "
                                      "16 20 modifiedStartPos:257 160 32 18 finallyPyramid:251 224 64 14 fromWindow:222 3"
                                      "20 64 17 finallyWindow:247";
  *(_QWORD *)(p_M_before_begin + 16) = RefinedPathGenerator::GeneratePath;
  v8 = (_DWORD *)(p_M_before_begin >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862726] = -218959118;
  v8[536862729] = -218959118;
  v8[536862732] = -202116109;
  if ( pathFinder )
  {
    SVODataProcessor::TuckPosInNode((const ToTheMoonVector3 *)(p_M_before_begin + 32), (const SVONode *)endPos);
    v9 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 32));
    std::vector<ToTheMoonVector3>::push_back(path, v9);
    AStarPathFinder::GetAStarInfo((AStarPathFinder *const)(p_M_before_begin + 64), (SVONode *)pathFinder);
    if ( !std::operator!=<AStarInfo>((const std::shared_ptr<AStarInfo> *)(p_M_before_begin + 64), 0LL) )
      goto LABEL_10;
    v10 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 40) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10 + 40, 0LL);
    if ( *(_QWORD *)(v10 + 40) )
      v11 = 1;
    else
LABEL_10:
      v11 = 0;
    if ( v11 )
    {
      NodeWindow::NodeWindow((NodeWindow *const)(p_M_before_begin + 224));
      v12 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v12 + 40) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12 + 40, 0LL);
      if ( !RefinedPathGenerator::NodeToWindow(
              finishNode,
              *(const SVONode **)(v12 + 40),
              (NodeWindow *)(p_M_before_begin + 224)) )
      {
        std::vector<ToTheMoonVector3>::push_back(path, startPos);
LABEL_40:
        std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(p_M_before_begin + 64));
        std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(p_M_before_begin + 32));
        goto LABEL_41;
      }
      std::make_shared<NodeWindow,NodeWindow&>(
        (NodeWindow *)(p_M_before_begin + 128),
        (NodeWindow *)(p_M_before_begin + 224));
      std::make_shared<Pyramid,ToTheMoonVector3 const&,std::shared_ptr<NodeWindow>>(
        (const ToTheMoonVector3 *)(p_M_before_begin + 96),
        (std::shared_ptr<NodeWindow> *)endPos,
        (const ToTheMoonVector3 *)(p_M_before_begin + 128),
        (std::shared_ptr<NodeWindow> *)endPos);
      std::shared_ptr<Pyramid>::operator=(&this->currentPyramid, (std::shared_ptr<Pyramid> *)(p_M_before_begin + 96));
      std::shared_ptr<Pyramid>::~shared_ptr((std::shared_ptr<Pyramid> *const)(p_M_before_begin + 96));
      std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(p_M_before_begin + 128));
      if ( std::operator==<Pyramid>(&this->currentPyramid, 0LL) )
        goto LABEL_40;
      v13 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v13 + 40) >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v13 + 40, 0LL);
      nextNode = *(SVONode **)(v13 + 40);
      AStarPathFinder::GetAStarInfo((AStarPathFinder *const)(p_M_before_begin + 96), (SVONode *)pathFinder);
      while ( 1 )
      {
        if ( !std::operator!=<AStarInfo>((const std::shared_ptr<AStarInfo> *)(p_M_before_begin + 96), 0LL) )
          goto LABEL_25;
        v14 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v14 + 40) >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(v14 + 40, 0LL);
        if ( *(_QWORD *)(v14 + 40) )
          v15 = 1;
        else
LABEL_25:
          v15 = 0;
        if ( !v15 )
          break;
        NodeWindow::NodeWindow((NodeWindow *const)(p_M_before_begin + 320));
        v16 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v16 + 40) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(v16 + 40, 0LL);
        if ( !RefinedPathGenerator::NodeToWindow(
                nextNode,
                *(const SVONode **)(v16 + 40),
                (NodeWindow *)(p_M_before_begin + 320)) )
          break;
        std::make_shared<NodeWindow,NodeWindow&>(
          (NodeWindow *)(p_M_before_begin + 128),
          (NodeWindow *)(p_M_before_begin + 320));
        n = (unsigned __int64)std::__shared_ptr_access<Pyramid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Pyramid,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
        if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(n, 12LL);
        }
        Pyramid::Pyramid(
          (Pyramid *const)(p_M_before_begin + 160),
          *(ToTheMoonVector3 *)n,
          (std::shared_ptr<NodeWindow> *)(p_M_before_begin + 128));
        std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(p_M_before_begin + 128));
        RefinedPathGenerator::PyramidStep(this, (const Pyramid *)(p_M_before_begin + 160), path);
        v18 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v18 + 40) >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8(v18 + 40, p_M_before_begin + 160);
        nextNode = *(SVONode **)(v18 + 40);
        AStarPathFinder::GetAStarInfo(&v26, (SVONode *)pathFinder);
        std::shared_ptr<AStarInfo>::operator=(
          (std::shared_ptr<AStarInfo> *const)(p_M_before_begin + 96),
          (std::shared_ptr<AStarInfo> *)&v26);
        std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)&v26);
        Pyramid::~Pyramid((Pyramid *const)(p_M_before_begin + 160));
      }
      NodeWindow::NodeWindow((NodeWindow *const)(p_M_before_begin + 320), startPos, startPos, startPos, startPos);
      std::make_shared<NodeWindow,NodeWindow&>(
        (NodeWindow *)(p_M_before_begin + 128),
        (NodeWindow *)(p_M_before_begin + 320));
      v19 = (unsigned __int64)std::__shared_ptr_access<Pyramid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Pyramid,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
      if ( *(char *)((v19 >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((v19 + 11) & 7) >= *(_BYTE *)(((v19 + 11) >> 3) + 0x7FFF8000) )
      {
        v19 = __asan_report_load_n(v19, 12LL);
      }
      Pyramid::Pyramid(
        (Pyramid *const)(p_M_before_begin + 160),
        *(ToTheMoonVector3 *)v19,
        (std::shared_ptr<NodeWindow> *)(p_M_before_begin + 128));
      std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(p_M_before_begin + 128));
      RefinedPathGenerator::PyramidStep(this, (const Pyramid *)(p_M_before_begin + 160), path);
      Pyramid::~Pyramid((Pyramid *const)(p_M_before_begin + 160));
      std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(p_M_before_begin + 96));
    }
    SVODataProcessor::TuckPosInNode((const ToTheMoonVector3 *)(p_M_before_begin + 128), (const SVONode *)startPos);
    v20 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_before_begin + 128));
    std::vector<ToTheMoonVector3>::push_back(path, v20);
    std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(p_M_before_begin + 128));
    goto LABEL_40;
  }
LABEL_41:
  if ( &v26._queryData.astarInfoMap._M_h._M_before_begin == (std::_Hashtable<int,std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,std::allocator<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > > >,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::__node_base *)p_M_before_begin )
  {
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)p_M_before_begin = 1172321806LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_before_begin >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_before_begin >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 264: range 000000000CBC3952-000000000CBC441A
void __cdecl RefinedPathGenerator::FastPyramidToPlaneSector(
        const Pyramid *pyramid,
        Const::Direction dir,
        ToTheMoonVector3 *start,
        ToTheMoonVector3 *end)
{
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  float *p_z; // rax
  double v6; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  _DWORD *p_x; // rdx
  double v9; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  float *v11; // rax
  double v12; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  ToTheMoonVector3 *p_p3; // rax
  double v15; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  float *v17; // rax
  double v18; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  _DWORD *v20; // rdx
  double v21; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  float *v23; // rax
  double v24; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  ToTheMoonVector3 *v26; // rax
  double v27; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  float *v29; // rax
  double v30; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  float *p_y; // rax
  double v33; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  float *v35; // rax
  double v36; // xmm0_8
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rdx
  float *v38; // rax
  double v39; // xmm0_8
  float v42; // [rsp+10h] [rbp-30h]
  float v43; // [rsp+10h] [rbp-30h]
  float v44; // [rsp+10h] [rbp-30h]
  float v45; // [rsp+10h] [rbp-30h]
  float v46; // [rsp+10h] [rbp-30h]
  float v47; // [rsp+10h] [rbp-30h]
  ToTheMoonVector3 v48; // [rsp+34h] [rbp-Ch] BYREF

  if ( !std::operator==<NodeWindow>(&pyramid->base, 0LL) )
  {
    if ( dir == Up )
    {
      v4 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
      p_z = &v4->p1.z;
      if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_z);
      }
      *(float *)&v6 = v4->p1.z;
      if ( *(_BYTE *)(((unsigned __int64)&pyramid->top.z >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&pyramid->top.z >> 3) + 0x7FFF8000) <= 3 )
      {
        v6 = __asan_report_load4(&pyramid->top.z);
      }
      v42 = *(float *)&v6 - pyramid->top.z;
      v7 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
      p_x = (_DWORD *)&v7->p1.x;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      LODWORD(v9) = *p_x;
      if ( *(_BYTE *)(((unsigned __int64)pyramid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)pyramid >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = __asan_report_load4(pyramid);
      }
      ToTheMoonVector3::ToTheMoonVector3(&v48, *(float *)&v9 - pyramid->top.x, 0.0, v42);
      if ( ((unsigned __int8)start & 7) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)start + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(start, 12LL);
      }
      *start = v48;
      v10 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
      v11 = &v10->p3.z;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(float *)&v12 = v10->p3.z;
      if ( *(_BYTE *)(((unsigned __int64)&pyramid->top.z >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&pyramid->top.z >> 3) + 0x7FFF8000) <= 3 )
      {
        v12 = __asan_report_load4(&pyramid->top.z);
      }
      v43 = *(float *)&v12 - pyramid->top.z;
      v13 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
      p_p3 = &v13->p3;
      if ( *(_BYTE *)(((unsigned __int64)p_p3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_p3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_p3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_p3);
      }
      *(float *)&v15 = v13->p3.x;
      if ( *(_BYTE *)(((unsigned __int64)pyramid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)pyramid >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = __asan_report_load4(pyramid);
      }
      ToTheMoonVector3::ToTheMoonVector3(&v48, *(float *)&v15 - pyramid->top.x, 0.0, v43);
      if ( ((unsigned __int8)end & 7) >= *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)end + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(end, 12LL);
      }
      *end = v48;
    }
    else if ( dir <= Up )
    {
      if ( dir == Front )
      {
        v28 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
        v29 = &v28->p1.z;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        *(float *)&v30 = v28->p1.z;
        if ( *(_BYTE *)(((unsigned __int64)&pyramid->top.z >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&pyramid->top.z >> 3) + 0x7FFF8000) <= 3 )
        {
          v30 = __asan_report_load4(&pyramid->top.z);
        }
        v46 = *(float *)&v30 - pyramid->top.z;
        v31 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
        p_y = &v31->p1.y;
        if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_y);
        }
        *(float *)&v33 = v31->p1.y;
        if ( *(_BYTE *)(((unsigned __int64)&pyramid->top.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pyramid + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pyramid->top.y >> 3) + 0x7FFF8000) )
        {
          v33 = __asan_report_load4(&pyramid->top.y);
        }
        ToTheMoonVector3::ToTheMoonVector3(&v48, 0.0, *(float *)&v33 - pyramid->top.y, v46);
        if ( ((unsigned __int8)start & 7) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)start + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(start, 12LL);
        }
        *start = v48;
        v34 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
        v35 = &v34->p3.z;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v35);
        }
        *(float *)&v36 = v34->p3.z;
        if ( *(_BYTE *)(((unsigned __int64)&pyramid->top.z >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&pyramid->top.z >> 3) + 0x7FFF8000) <= 3 )
        {
          v36 = __asan_report_load4(&pyramid->top.z);
        }
        v47 = *(float *)&v36 - pyramid->top.z;
        v37 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
        v38 = &v37->p3.y;
        if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v38);
        }
        *(float *)&v39 = v37->p3.y;
        if ( *(_BYTE *)(((unsigned __int64)&pyramid->top.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pyramid + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pyramid->top.y >> 3) + 0x7FFF8000) )
        {
          v39 = __asan_report_load4(&pyramid->top.y);
        }
        ToTheMoonVector3::ToTheMoonVector3(&v48, 0.0, *(float *)&v39 - pyramid->top.y, v47);
        if ( ((unsigned __int8)end & 7) >= *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)end + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(end, 12LL);
        }
        *end = v48;
      }
      else if ( dir == Left )
      {
        v16 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
        v17 = &v16->p1.y;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        *(float *)&v18 = v16->p1.y;
        if ( *(_BYTE *)(((unsigned __int64)&pyramid->top.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pyramid + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pyramid->top.y >> 3) + 0x7FFF8000) )
        {
          v18 = __asan_report_load4(&pyramid->top.y);
        }
        v44 = *(float *)&v18 - pyramid->top.y;
        v19 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
        v20 = (_DWORD *)&v19->p1.x;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        LODWORD(v21) = *v20;
        if ( *(_BYTE *)(((unsigned __int64)pyramid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)pyramid >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = __asan_report_load4(pyramid);
        }
        ToTheMoonVector3::ToTheMoonVector3(&v48, *(float *)&v21 - pyramid->top.x, v44, 0.0);
        if ( ((unsigned __int8)start & 7) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)start + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(start, 12LL);
        }
        *start = v48;
        v22 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
        v23 = &v22->p3.y;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        *(float *)&v24 = v22->p3.y;
        if ( *(_BYTE *)(((unsigned __int64)&pyramid->top.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pyramid + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pyramid->top.y >> 3) + 0x7FFF8000) )
        {
          v24 = __asan_report_load4(&pyramid->top.y);
        }
        v45 = *(float *)&v24 - pyramid->top.y;
        v25 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&pyramid->base);
        v26 = &v25->p3;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        *(float *)&v27 = v25->p3.x;
        if ( *(_BYTE *)(((unsigned __int64)pyramid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)pyramid >> 3) + 0x7FFF8000) <= 3 )
        {
          v27 = __asan_report_load4(pyramid);
        }
        ToTheMoonVector3::ToTheMoonVector3(&v48, *(float *)&v27 - pyramid->top.x, v45, 0.0);
        if ( ((unsigned __int8)end & 7) >= *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)end + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(end, 12LL);
        }
        *end = v48;
      }
    }
  }
};

// Line 290: range 000000000CBC441C-000000000CBC4BAF
// local variable allocation has failed, the output may be wrong!
void __cdecl RefinedPathGenerator::FullPyramidToPlaneSector(
        const Pyramid *pyramid,
        Const::Direction dir,
        ToTheMoonVector3 *start,
        ToTheMoonVector3 *end)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __m128i v10; // xmm0
  std::vector<ToTheMoonVector3>::size_type v11; // r14
  unsigned __int64 n; // rax
  std::allocator<ToTheMoonVector3> __a; // [rsp+3Fh] [rbp-1B1h] BYREF
  float minAngle; // [rsp+40h] [rbp-1B0h]
  float maxAnlge; // [rsp+44h] [rbp-1ACh]
  int i; // [rsp+48h] [rbp-1A8h]
  float angle; // [rsp+4Ch] [rbp-1A4h]
  char __l[20]; // [rsp+50h] [rbp-1A0h] BYREF
  int v21; // [rsp+64h] [rbp-18Ch]
  __int64 v22; // [rsp+68h] [rbp-188h]
  int v23; // [rsp+70h] [rbp-180h]
  char v24[368]; // [rsp+80h] [rbp-170h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 12 15 minAngleVec:293 64 12 15 maxAngleVec:294 96 12 8 axis:298 128 12 7 vec:300 160 24 17 "
                        "targetVecList:297 224 64 8 base:291";
  *(_QWORD *)(v5 + 16) = RefinedPathGenerator::FullPyramidToPlaneSector;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -219020288;
  v7[536862724] = -219020288;
  v7[536862725] = -234881024;
  v7[536862726] = -218959118;
  v7[536862729] = -202116109;
  NodeWindow::NodeWindow((NodeWindow *const)(v5 + 224));
  Pyramid::NodeWindowByRelationVec(pyramid, (NodeWindow *)(v5 + 224));
  *(_QWORD *)(v5 + 32) = *(_QWORD *)(v5 + 224);
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(v5 + 232);
  *(_QWORD *)(v5 + 64) = *(_QWORD *)(v5 + 224);
  *(_DWORD *)(v5 + 72) = *(_DWORD *)(v5 + 232);
  minAngle = 0.0;
  maxAnlge = 0.0;
  *(_QWORD *)__l = *(_QWORD *)(v5 + 236);
  *(_DWORD *)&__l[8] = *(_DWORD *)(v5 + 244);
  *(_QWORD *)&__l[12] = *(_QWORD *)(v5 + 248);
  v21 = *(_DWORD *)(v5 + 256);
  v22 = *(_QWORD *)(v5 + 260);
  v23 = *(_DWORD *)(v5 + 268);
  std::allocator<ToTheMoonVector3>::allocator(&__a);
  std::vector<ToTheMoonVector3>::vector(
    (std::vector<ToTheMoonVector3> *const)(v5 + 160),
    (std::initializer_list<ToTheMoonVector3>)__PAIR128__(3LL, __l),
    &__a);
  std::allocator<ToTheMoonVector3>::~allocator(&__a);
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = Geometry::CommonAxis::DirectionToVector3(dir);
  v9 = v8;
  v10 = v4;
  *(_QWORD *)(v5 + 96) = v9;
  *(_DWORD *)(v5 + 104) = v4.m128i_i32[0];
  for ( i = 0; ; ++i )
  {
    v11 = i;
    if ( v11 >= std::vector<ToTheMoonVector3>::size((const std::vector<ToTheMoonVector3> *const)(v5 + 160)) )
      break;
    n = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v5 + 160), i);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 12LL);
    }
    *(_QWORD *)(v5 + 128) = *(_QWORD *)n;
    *(_DWORD *)(v5 + 136) = *(_DWORD *)(n + 8);
    *(float *)v10.m128i_i32 = ToTheMoonVector3::SignedAngle(
                                (const ToTheMoonVector3 *const)(v5 + 224),
                                (const ToTheMoonVector3 *)(v5 + 128),
                                (const ToTheMoonVector3 *)(v5 + 96));
    angle = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
    if ( minAngle > angle )
    {
      minAngle = angle;
      *(_QWORD *)(v5 + 32) = *(_QWORD *)(v5 + 128);
      *(_DWORD *)(v5 + 40) = *(_DWORD *)(v5 + 136);
    }
    v10 = (__m128i)LODWORD(angle);
    if ( angle > maxAnlge )
    {
      v10 = (__m128i)LODWORD(angle);
      maxAnlge = angle;
      *(_QWORD *)(v5 + 64) = *(_QWORD *)(v5 + 128);
      *(_DWORD *)(v5 + 72) = *(_DWORD *)(v5 + 136);
    }
  }
  if ( ((unsigned __int8)start & 7) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)start + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&start->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(start, 12LL);
  }
  *(_QWORD *)&start->x = *(_QWORD *)(v5 + 32);
  start->z = *(float *)(v5 + 40);
  if ( ((unsigned __int8)end & 7) >= *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)end + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&end->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(end, 12LL);
  }
  *(_QWORD *)&end->x = *(_QWORD *)(v5 + 64);
  end->z = *(float *)(v5 + 72);
  if ( dir == Up )
  {
    if ( *(_BYTE *)(((unsigned __int64)&start->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)start + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&start->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&start->y);
    }
    start->y = 0.0;
    if ( *(_BYTE *)(((unsigned __int64)&end->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)end + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&end->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&end->y);
    }
    end->y = 0.0;
  }
  else if ( dir <= Up )
  {
    if ( dir == Front )
    {
      if ( *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)start & 7) + 3) >= *(_BYTE *)(((unsigned __int64)start >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(start);
      }
      start->x = 0.0;
      if ( *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)end & 7) + 3) >= *(_BYTE *)(((unsigned __int64)end >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(end);
      }
      end->x = 0.0;
    }
    else if ( dir == Left )
    {
      if ( *(_BYTE *)(((unsigned __int64)&start->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)start + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&start->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&start->z);
      }
      start->z = 0.0;
      if ( *(_BYTE *)(((unsigned __int64)&end->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)end + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&end->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&end->z);
      }
      end->z = 0.0;
    }
  }
  std::vector<ToTheMoonVector3>::~vector((std::vector<ToTheMoonVector3> *const)(v5 + 160));
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 333: range 000000000CBC4BB0-000000000CBC4E39
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall RefinedPathGenerator::RelationBetweenPyramidInPlane(
        ToTheMoonVector3 baseStart,
        ToTheMoonVector3 baseEnd,
        ToTheMoonVector3 targetStart,
        ToTheMoonVector3 targetEnd,
        ToTheMoonVector3 axis)
{
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  _DWORD *v13; // r12
  __int64 result; // rax
  RelationRayToCircularSector startRelation; // [rsp+48h] [rbp-E8h]
  RelationRayToCircularSector endRelation; // [rsp+4Ch] [rbp-E4h]
  char v18[224]; // [rsp+50h] [rbp-E0h] BYREF

  v11 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(192LL);
    if ( v12 )
      v11 = v12;
  }
  *(_QWORD *)v11 = 1102416563LL;
  *(_QWORD *)(v11 + 8) = "5 32 12 13 baseStart:332 64 12 11 baseEnd:332 96 12 15 targetStart:332 128 12 13 targetEnd:332 "
                         "160 12 8 axis:332";
  *(_QWORD *)(v11 + 16) = RefinedPathGenerator::RelationBetweenPyramidInPlane;
  v13 = (_DWORD *)(v11 >> 3);
  v13[536862720] = -235802127;
  v13[536862721] = -219020288;
  v13[536862722] = -219020288;
  v13[536862723] = -219020288;
  v13[536862724] = -219020288;
  v13[536862725] = -202177536;
  *(ToTheMoonVector3 *)(v11 + 32) = baseStart;
  *(ToTheMoonVector3 *)(v11 + 64) = baseEnd;
  *(ToTheMoonVector3 *)(v11 + 96) = targetStart;
  *(ToTheMoonVector3 *)(v11 + 128) = targetEnd;
  *(ToTheMoonVector3 *)(v11 + 160) = axis;
  startRelation = Geometry::GetRelationFromRayToCircularSector(
                    (const ToTheMoonVector3 *)(v11 + 32),
                    (const ToTheMoonVector3 *)(v11 + 64),
                    (const ToTheMoonVector3 *)(v11 + 96),
                    (const ToTheMoonVector3 *)(v11 + 160));
  endRelation = Geometry::GetRelationFromRayToCircularSector(
                  (const ToTheMoonVector3 *)(v11 + 32),
                  (const ToTheMoonVector3 *)(v11 + 64),
                  (const ToTheMoonVector3 *)(v11 + 128),
                  (const ToTheMoonVector3 *)(v11 + 160));
  if ( startRelation && endRelation )
  {
    if ( startRelation == endRelation )
    {
      if ( startRelation == Postive )
        result = 3LL;
      else
        result = 4LL;
    }
    else
    {
      result = 2LL;
    }
  }
  else
  {
    result = startRelation == endRelation;
  }
  if ( v18 == (char *)v11 )
  {
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v11 = 1172321806LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 350: range 000000000CBC4E3A-000000000CBC5014
Const::Direction __cdecl RefinedPathGenerator::AxisVectorToDirection(const ToTheMoonVector3 *axis)
{
  __int64 v2; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v4; // rbx
  const ToTheMoonVector3 *axisa; // [rsp+8h] [rbp-28h]
  bool xZero; // [rsp+19h] [rbp-17h]
  bool yZero; // [rsp+1Ah] [rbp-16h]
  bool zZero; // [rsp+1Bh] [rbp-15h]
  int sum; // [rsp+1Ch] [rbp-14h]

  axisa = axis;
  if ( *(_BYTE *)(((unsigned __int64)axis >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)axis & 7) + 3) >= *(_BYTE *)(((unsigned __int64)axis >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(axis);
  }
  xZero = Algebra::IsClose(axis->x, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&axis->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)axis + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis->y >> 3) + 0x7FFF8000) )
  {
    axis = (const ToTheMoonVector3 *)((char *)axis + 4);
    __asan_report_load4(&axisa->y);
  }
  yZero = Algebra::IsClose(axisa->y, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&axisa->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)axisa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axisa->z >> 3) + 0x7FFF8000) )
  {
    axis = (const ToTheMoonVector3 *)&axisa->z;
    __asan_report_load4(&axisa->z);
  }
  zZero = Algebra::IsClose(axisa->z, 0.0);
  sum = yZero + xZero + zZero;
  if ( sum == 3 )
    return 0;
  if ( sum != 2 )
  {
    __asan_handle_no_return(axis);
    __assert_fail(
      "sum == 2",
      "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
      0x165u,
      "static Const::Direction RefinedPathGenerator::AxisVectorToDirection(const ToTheMoonVector3&)");
  }
  if ( !xZero )
    return 1;
  if ( !yZero )
    return 5;
  if ( zZero )
  {
    v2 = 8LL;
    exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
    v4 = (_QWORD *)exception;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    {
      v2 = exception;
      __asan_report_store8();
    }
    *v4 = "Wrong axis";
    __asan_handle_no_return(v2);
    _cxa_throw(v4, (struct type_info *)&`typeinfo for'char const*, 0LL);
  }
  return 3;
};

// Line 368: range 000000000CBC5016-000000000CBC50E1
bool __cdecl RefinedPathGenerator::PlaneSectorLegalRelationAllEqual(
        const std::vector<SharedTopPlaneSectorRelation> *relationList,
        SharedTopPlaneSectorRelation relation,
        Const::Direction toDir)
{
  std::vector<SharedTopPlaneSectorRelation>::const_reference v3; // rax
  _DWORD *v4; // rdx
  int mismatchLimit; // [rsp+18h] [rbp-18h]
  int i; // [rsp+1Ch] [rbp-14h]

  mismatchLimit = toDir == None_11;
  for ( i = 0; i < std::vector<SharedTopPlaneSectorRelation>::size(relationList); ++i )
  {
    v3 = std::vector<SharedTopPlaneSectorRelation>::operator[](relationList, i);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( relation != *v4 && --mismatchLimit < 0 )
      return 0;
  }
  return 1;
};

// Line 382: range 000000000CBC50E2-000000000CBC5888
void __cdecl RefinedPathGeneratorBeta::GeneratePath(
        RefinedPathGeneratorBeta *const this,
        SVONode *finishNode,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::vector<ToTheMoonVector3> *path,
        AStarPathFinder *pathFinder)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  const ToTheMoonVector3 *v13; // r8
  std::shared_ptr<NodeWindow> *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  SVONode *nextNode; // [rsp+38h] [rbp-1D8h]
  char v26[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(416LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 32 16 18 modifiedEndPos:388 64 16 15 finishAstar:392 96 16 13 nextAstar:413 128 16 20 modified"
                        "StartPos:442 160 24 18 lineCollection:409 224 64 14 fromWindow:397 320 64 12 toWindow:416";
  *(_QWORD *)(v6 + 16) = RefinedPathGeneratorBeta::GeneratePath;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862725] = -234881024;
  v8[536862726] = -218959118;
  v8[536862729] = -218959118;
  v8[536862732] = -202116109;
  if ( pathFinder )
  {
    SVODataProcessor::TuckPosInNode((const ToTheMoonVector3 *)(v6 + 32), (const SVONode *)endPos);
    v9 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    std::vector<ToTheMoonVector3>::push_back(path, v9);
    AStarPathFinder::GetAStarInfo((AStarPathFinder *const)(v6 + 64), (SVONode *)pathFinder);
    nextNode = 0LL;
    if ( !std::operator!=<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v6 + 64), 0LL) )
      goto LABEL_10;
    v10 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 40) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10 + 40, 0LL);
    if ( *(_QWORD *)(v10 + 40) )
      v11 = 1;
    else
LABEL_10:
      v11 = 0;
    if ( v11 )
    {
      NodeWindow::NodeWindow((NodeWindow *const)(v6 + 224));
      v12 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v12 + 40) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12 + 40, 0LL);
      if ( !RefinedPathGenerator::NodeToWindow(finishNode, *(const SVONode **)(v12 + 40), (NodeWindow *)(v6 + 224)) )
        goto LABEL_37;
      std::make_shared<NodeWindow,NodeWindow&>((NodeWindow *)(v6 + 128), (NodeWindow *)(v6 + 224));
      std::make_shared<SquareBasedWedge,ToTheMoonVector3 const&,ToTheMoonVector3 const&,std::shared_ptr<NodeWindow>>(
        (const ToTheMoonVector3 *)(v6 + 96),
        endPos,
        (std::shared_ptr<NodeWindow> *)endPos,
        (const ToTheMoonVector3 *)(v6 + 128),
        v13,
        v14);
      std::shared_ptr<SquareBasedWedge>::operator=(&this->currentWedge, (std::shared_ptr<SquareBasedWedge> *)(v6 + 96));
      std::shared_ptr<SquareBasedWedge>::~shared_ptr((std::shared_ptr<SquareBasedWedge> *const)(v6 + 96));
      std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v6 + 128));
      if ( std::operator==<SquareBasedWedge>(&this->currentWedge, 0LL) )
        goto LABEL_37;
      std::vector<std::shared_ptr<ToTheMoonLine>>::vector((std::vector<std::shared_ptr<ToTheMoonLine>> *const)(v6 + 160));
      v15 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v15 + 40) >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v15 + 40, 0LL);
      nextNode = *(SVONode **)(v15 + 40);
      AStarPathFinder::GetAStarInfo((AStarPathFinder *const)(v6 + 96), (SVONode *)pathFinder);
      while ( 1 )
      {
        if ( !std::operator!=<AStarInfo>((const std::shared_ptr<AStarInfo> *)(v6 + 96), 0LL) )
          goto LABEL_25;
        v16 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v16 + 40) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(v16 + 40, 0LL);
        if ( *(_QWORD *)(v16 + 40) )
          v17 = 1;
        else
LABEL_25:
          v17 = 0;
        if ( !v17 )
          break;
        NodeWindow::NodeWindow((NodeWindow *const)(v6 + 320));
        v18 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v18 + 40) >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8(v18 + 40, 0LL);
        if ( !RefinedPathGenerator::NodeToWindow(nextNode, *(const SVONode **)(v18 + 40), (NodeWindow *)(v6 + 320)) )
          break;
        std::make_shared<NodeWindow,NodeWindow&>((NodeWindow *)(v6 + 128), (NodeWindow *)(v6 + 320));
        RefinedPathGeneratorBeta::WedgeStep(
          this,
          (std::shared_ptr<NodeWindow> *)(v6 + 128),
          (std::vector<std::shared_ptr<ToTheMoonLine>> *)(v6 + 160));
        std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v6 + 128));
        v19 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v19 + 40) >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8(v19 + 40, v6 + 128);
        nextNode = *(SVONode **)(v19 + 40);
        AStarPathFinder::GetAStarInfo((AStarPathFinder *const)(v6 + 128), (SVONode *)pathFinder);
        std::shared_ptr<AStarInfo>::operator=(
          (std::shared_ptr<AStarInfo> *const)(v6 + 96),
          (std::shared_ptr<AStarInfo> *)(v6 + 128));
        std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v6 + 128));
      }
      if ( std::operator!=<SquareBasedWedge>(&this->currentWedge, 0LL) )
        RefinedPathGeneratorBeta::GenerateLastLine(
          this,
          startPos,
          (std::vector<std::shared_ptr<ToTheMoonLine>> *)(v6 + 160));
      RefinedPathGeneratorBeta::LineStep(
        this,
        (const std::vector<std::shared_ptr<ToTheMoonLine>> *)(v6 + 160),
        startPos,
        endPos,
        path);
      std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v6 + 96));
      std::vector<std::shared_ptr<ToTheMoonLine>>::~vector((std::vector<std::shared_ptr<ToTheMoonLine>> *const)(v6 + 160));
    }
    if ( nextNode )
    {
      SVODataProcessor::TuckPosInNode((const ToTheMoonVector3 *)(v6 + 128), (const SVONode *)startPos);
      v20 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
      std::vector<ToTheMoonVector3>::push_back(path, v20);
      std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v6 + 128));
      goto LABEL_39;
    }
LABEL_37:
    std::vector<ToTheMoonVector3>::push_back(path, startPos);
LABEL_39:
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(v6 + 64));
    std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v6 + 32));
  }
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 449: range 000000000CBC588A-000000000CBC58D8
void __cdecl RefinedPathGeneratorBeta::Clear(RefinedPathGeneratorBeta *const this)
{
  std::shared_ptr<SquareBasedWedge> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<SquareBasedWedge>::shared_ptr(&__r, 0LL);
  std::shared_ptr<SquareBasedWedge>::operator=(&this->currentWedge, &__r);
  std::shared_ptr<SquareBasedWedge>::~shared_ptr(&__r);
  std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::clear(&this->lineLinkage);
};

// Line 455: range 000000000CBC58DA-000000000CBC6E10
bool __cdecl RefinedPathGeneratorBeta::WedgeStep(
        RefinedPathGeneratorBeta *const this,
        std::shared_ptr<NodeWindow> *p_nextWindow,
        std::vector<std::shared_ptr<ToTheMoonLine>> *lineCollection)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v9; // r14
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rbx
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  ToTheMoonVector3 *v23; // rsi
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  ToTheMoonVector3 *v25; // r15
  ToTheMoonVector3 *v26; // r14
  ToTheMoonVector3 *v27; // rax
  ToTheMoonVector3 *v28; // r9
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  NodeWindow *v30; // rax
  NodeWindow *v31; // rax
  int v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  ToTheMoonVector3 *v35; // r9
  int v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  ToTheMoonVector3 *v39; // r9
  int v40; // xmm0_4
  double v41; // xmm0_8
  double v42; // xmm0_8
  ToTheMoonVector3 *v43; // r9
  bool result; // al
  ToTheMoonVector3 *v45; // [rsp+0h] [rbp-330h]
  ToTheMoonVector3 *planeNormal; // [rsp+8h] [rbp-328h]
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *planePoint; // [rsp+10h] [rbp-320h]
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *planePointa; // [rsp+10h] [rbp-320h]
  std::vector<ToTheMoonVector3>::reference planePointb; // [rsp+10h] [rbp-320h]
  std::allocator<ToTheMoonVector3*> __a; // [rsp+37h] [rbp-2F9h] BYREF
  int intersectCnt; // [rsp+38h] [rbp-2F8h]
  Axis topAxis; // [rsp+3Ch] [rbp-2F4h]
  Axis nextPlaneNormal; // [rsp+40h] [rbp-2F0h]
  Axis curPlaneNormal; // [rsp+44h] [rbp-2ECh]
  Axis curPlaneNormal_0; // [rsp+48h] [rbp-2E8h]
  float z; // [rsp+4Ch] [rbp-2E4h]
  float y; // [rsp+50h] [rbp-2E0h]
  float x; // [rsp+54h] [rbp-2DCh]
  std::vector<ToTheMoonVector3*>::iterator __for_begin; // [rsp+58h] [rbp-2D8h] BYREF
  std::vector<ToTheMoonVector3*>::iterator __for_end; // [rsp+60h] [rbp-2D0h] BYREF
  std::shared_ptr<NodeWindow> *baseWindow; // [rsp+68h] [rbp-2C8h]
  std::vector<ToTheMoonVector3*> *__for_range; // [rsp+70h] [rbp-2C0h]
  ToTheMoonVector3 *pod; // [rsp+78h] [rbp-2B8h]
  ToTheMoonVector3 *p1; // [rsp+80h] [rbp-2B0h]
  ToTheMoonVector3 *p2; // [rsp+88h] [rbp-2A8h]
  ToTheMoonVector3 **vertice; // [rsp+90h] [rbp-2A0h]
  ToTheMoonVector3 *topPoint; // [rsp+98h] [rbp-298h]
  ToTheMoonVector3 v70; // [rsp+A4h] [rbp-28Ch] BYREF
  std::shared_ptr<NodeWindow> p_newBase; // [rsp+B0h] [rbp-280h] BYREF
  common::milog::MiLogStream __l; // [rsp+C0h] [rbp-270h] BYREF
  ToTheMoonVector3 v73[49]; // [rsp+E0h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v73;
  v45 = v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 12 13 intersect:505 80 16 17 projectWindow:547 112 16 17 projectWindow:520 144 16 15 projec"
                        "tLine:503 176 24 16 baseVertices:486 240 24 20 projectPointList:494 304 36 12 curRange:536 384 3"
                        "6 13 nextRange:536 464 36 16 overlapRange:536";
  *(_QWORD *)(v3 + 16) = RefinedPathGeneratorBeta::WedgeStep;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = 0x4000000;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -234618880;
  v5[536862731] = -218959118;
  v5[536862733] = -218959356;
  v5[536862734] = 62194;
  v5[536862735] = -217841664;
  v5[536862736] = -202116109;
  if ( std::operator==<NodeWindow>(p_nextWindow, 0LL)
    || std::operator==<SquareBasedWedge>(&this->currentWedge, 0LL)
    || (v6 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this),
        std::operator==<NodeWindow>(&v6->base, 0LL))
    || (v7 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this),
        std::operator==<ToTheMoonLine>(&v7->topLine, 0LL)) )
  {
    v9 = 0;
    goto LABEL_92;
  }
  baseWindow = &std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this)->base;
  v10 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  v11 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10);
  topAxis = RefinedPathGeneratorBeta::TopLineToAxis(v11);
  v12 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_nextWindow);
  nextPlaneNormal = Geometry::PlaneNormalToAxis(&v12->pointOutDir);
  if ( topAxis == nextPlaneNormal )
  {
    std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, p_nextWindow);
    RefinedPathGeneratorBeta::OnTopLineNormalToNextWindow(this, &p_newBase, lineCollection);
    std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
    v9 = 1;
    goto LABEL_92;
  }
  v13 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  planePoint = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13->base);
  v14 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  planeNormal = &std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14->base)->pointOutDir;
  v15 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  v16 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
  if ( Geometry::PointInPlane(&v16->start, planeNormal, &planePoint->p1) )
  {
    v17 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow);
    curPlaneNormal = Geometry::PlaneNormalToAxis(&v17->pointOutDir);
    v18 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    planePointa = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18->base);
    v19 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    v20 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)v19);
    if ( NodeWindow::IsPointIn(planePointa, &v20->start, curPlaneNormal) )
    {
      v21 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
      std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, p_nextWindow);
      SquareBasedWedge::SetBase(v21, &p_newBase);
      std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
      v9 = 1;
      goto LABEL_92;
    }
  }
  __l.log_ = (common::milog::MiLog *)std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow);
  __l.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)&std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow)->p2;
  __l.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow)->p3;
  __l.ostr_ = (common::milog::MilogStringStream *)&std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow)->p4;
  std::allocator<ToTheMoonVector3 *>::allocator(&__a);
  std::vector<ToTheMoonVector3 *>::vector(
    (std::vector<ToTheMoonVector3*> *const)(v3 + 176),
    (std::initializer_list<ToTheMoonVector3*>)__PAIR128__(4LL, &__l),
    &__a);
  std::allocator<ToTheMoonVector3 *>::~allocator(&__a);
  intersectCnt = 0;
  std::vector<ToTheMoonVector3>::vector((std::vector<ToTheMoonVector3> *const)(v3 + 240));
  __for_range = (std::vector<ToTheMoonVector3*> *)(v3 + 176);
  __for_begin._M_current = std::vector<ToTheMoonVector3 *>::begin((std::vector<ToTheMoonVector3*> *const)(v3 + 176))._M_current;
  __for_end._M_current = std::vector<ToTheMoonVector3 *>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>(&__for_begin, &__for_end) )
  {
    vertice = __gnu_cxx::__normal_iterator<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>::operator*(&__for_begin);
    v22 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    if ( *(_BYTE *)(((unsigned __int64)vertice >> 3) + 0x7FFF8000) )
      __asan_report_load8(vertice, &__for_end);
    v23 = *vertice;
    topPoint = SquareBasedWedge::GetTopFromBase(v22, *vertice);
    if ( !topPoint )
    {
      common::milog::MiLogStream::create(
        &__l,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
        "WedgeStep",
        500);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&__l, (const char (*)[19])"should not be here");
      common::milog::MiLogStream::~MiLogStream(&__l);
      v9 = 0;
      goto LABEL_91;
    }
    if ( *(_BYTE *)(((unsigned __int64)vertice >> 3) + 0x7FFF8000) )
      __asan_report_load8(vertice, v23);
    std::make_shared<ToTheMoonLine,ToTheMoonVector3 &,ToTheMoonVector3 &>(
      (ToTheMoonVector3 *)(v3 + 144),
      topPoint,
      *vertice,
      topPoint);
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 48));
    v24 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_nextWindow);
    std::shared_ptr<ToTheMoonLine>::shared_ptr(
      (std::shared_ptr<ToTheMoonLine> *const)&p_newBase,
      (const std::shared_ptr<ToTheMoonLine> *)(v3 + 144));
    LOBYTE(v24) = NodeWindow::IntersectFromLineSeg(
                    v24,
                    (std::shared_ptr<ToTheMoonLine> *)&p_newBase,
                    (ToTheMoonVector3 *)(v3 + 48),
                    1);
    std::shared_ptr<ToTheMoonLine>::~shared_ptr((std::shared_ptr<ToTheMoonLine> *const)&p_newBase);
    if ( (_BYTE)v24 )
    {
      ++intersectCnt;
      std::vector<ToTheMoonVector3>::push_back(
        (std::vector<ToTheMoonVector3> *const)(v3 + 240),
        (const std::vector<ToTheMoonVector3>::value_type *)(v3 + 48));
    }
    std::shared_ptr<ToTheMoonLine>::~shared_ptr((std::shared_ptr<ToTheMoonLine> *const)(v3 + 144));
    __gnu_cxx::__normal_iterator<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>::operator++(&__for_begin);
  }
  if ( !intersectCnt )
  {
    std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, p_nextWindow);
    RefinedPathGeneratorBeta::OnWindowsSeperate(this, &p_newBase, lineCollection);
    std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
LABEL_90:
    v9 = 1;
    goto LABEL_91;
  }
  if ( intersectCnt == 4 )
  {
    planePointb = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v3 + 240), 3uLL);
    v25 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v3 + 240), 2uLL);
    v26 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v3 + 240), 1uLL);
    v27 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v3 + 240), 0LL);
    std::make_shared<NodeWindow,ToTheMoonVector3 &,ToTheMoonVector3 &,ToTheMoonVector3 &,ToTheMoonVector3 &>(
      (ToTheMoonVector3 *)(v3 + 112),
      v27,
      v26,
      v25,
      planePointb,
      v28,
      v73,
      planeNormal);
    std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, (const std::shared_ptr<NodeWindow> *)(v3 + 112));
    std::shared_ptr<NodeWindow>::shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 144), p_nextWindow);
    RefinedPathGeneratorBeta::ProjectionOverlapStep(
      this,
      (std::shared_ptr<NodeWindow> *)(v3 + 144),
      &p_newBase,
      lineCollection);
    std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 144));
    std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
    std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 112));
    goto LABEL_90;
  }
  if ( intersectCnt != 2 )
  {
    common::milog::MiLogStream::create(
      &__l,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
      "WedgeStep",
      528);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &__l,
      (const char (*)[31])"[WedgeStep] should not be here");
    common::milog::MiLogStream::~MiLogStream(&__l);
  }
  v29 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow);
  curPlaneNormal_0 = Geometry::PlaneNormalToAxis(&v29->pointOutDir);
  if ( curPlaneNormal_0 == nextPlaneNormal )
    goto LABEL_37;
  Range3D::Range3D((Range3D *const)(v3 + 304));
  Range3D::Range3D((Range3D *const)(v3 + 384));
  Range3D::Range3D((Range3D *const)(v3 + 464));
  v30 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow);
  NodeWindow::ToRange3D(v30, (Range3D *)(v3 + 304));
  v31 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_nextWindow);
  NodeWindow::ToRange3D(v31, (Range3D *)(v3 + 384));
  Range3D::Overlap((const Range3D *const)(v3 + 304), (const Range3D *)(v3 + 384), (Range3D *)(v3 + 464));
  if ( !Range3D::Illegal((const Range3D *const)(v3 + 464)) )
  {
LABEL_37:
    std::shared_ptr<NodeWindow>::shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 80), 0LL);
    pod = &std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow)->pointOutDir;
    p1 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v3 + 240), 0LL);
    p2 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v3 + 240), 1uLL);
    if ( *(_BYTE *)(((unsigned __int64)pod >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pod & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pod >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pod);
    }
    if ( !Algebra::IsClose(pod->x, 0.0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)pod >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pod & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pod >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pod);
      }
      if ( pod->x <= 0.0 )
        v32 = -8388608;
      else
        v32 = 2139095040;
      LODWORD(x) = v32;
      if ( *(_BYTE *)(((unsigned __int64)&p2->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p2->z);
      }
      v33 = p2->z;
      if ( *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p2->y);
      }
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 48), x, p2->y, v33);
      if ( *(_BYTE *)(((unsigned __int64)&p1->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p1->z);
      }
      v34 = p1->z;
      if ( *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p1->y);
      }
      ToTheMoonVector3::ToTheMoonVector3(&v70, x, p1->y, v34);
      std::make_shared<NodeWindow,ToTheMoonVector3 &,ToTheMoonVector3 &,ToTheMoonVector3,ToTheMoonVector3>(
        (ToTheMoonVector3 *)(v3 + 112),
        p1,
        p2,
        &v70,
        (ToTheMoonVector3 *)(v3 + 48),
        v35,
        v73,
        planeNormal);
      std::shared_ptr<NodeWindow>::operator=(
        (std::shared_ptr<NodeWindow> *const)(v3 + 80),
        (std::shared_ptr<NodeWindow> *)(v3 + 112));
      std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 112));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&pod->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pod + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pod->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pod->y);
      }
      if ( !Algebra::IsClose(pod->y, 0.0) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&pod->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pod + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pod->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pod->y);
        }
        if ( pod->y <= 0.0 )
          v36 = -8388608;
        else
          v36 = 2139095040;
        LODWORD(y) = v36;
        if ( *(_BYTE *)(((unsigned __int64)&p2->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&p2->z);
        }
        v37 = p2->z;
        if ( *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p2);
        }
        ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 48), p2->x, y, v37);
        if ( *(_BYTE *)(((unsigned __int64)&p1->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&p1->z);
        }
        v38 = p1->z;
        if ( *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p1);
        }
        ToTheMoonVector3::ToTheMoonVector3(&v70, p1->x, y, v38);
        std::make_shared<NodeWindow,ToTheMoonVector3 &,ToTheMoonVector3 &,ToTheMoonVector3,ToTheMoonVector3>(
          (ToTheMoonVector3 *)(v3 + 144),
          p1,
          p2,
          &v70,
          (ToTheMoonVector3 *)(v3 + 48),
          v39,
          v73,
          planeNormal);
        std::shared_ptr<NodeWindow>::operator=(
          (std::shared_ptr<NodeWindow> *const)(v3 + 80),
          (std::shared_ptr<NodeWindow> *)(v3 + 144));
        std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 144));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&pod->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pod + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pod->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pod->z);
        }
        if ( !Algebra::IsClose(pod->z, 0.0) )
        {
          common::milog::MiLogStream::create(
            &__l,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
            "WedgeStep",
            572);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &__l,
            (const char (*)[21])"should never be here");
          common::milog::MiLogStream::~MiLogStream(&__l);
        }
        if ( *(_BYTE *)(((unsigned __int64)&pod->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pod + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pod->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pod->z);
        }
        if ( pod->z <= 0.0 )
          v40 = -8388608;
        else
          v40 = 2139095040;
        LODWORD(z) = v40;
        if ( *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&p2->y);
        }
        *(float *)&v41 = p2->y;
        if ( *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) )
        {
          v41 = __asan_report_load4(p2);
        }
        ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 48), p2->x, *(float *)&v41, z);
        if ( *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&p1->y);
        }
        *(float *)&v42 = p1->y;
        if ( *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) )
        {
          v42 = __asan_report_load4(p1);
        }
        ToTheMoonVector3::ToTheMoonVector3(&v70, p1->x, *(float *)&v42, z);
        std::make_shared<NodeWindow,ToTheMoonVector3 &,ToTheMoonVector3 &,ToTheMoonVector3,ToTheMoonVector3>(
          (ToTheMoonVector3 *)&p_newBase,
          p1,
          p2,
          &v70,
          (ToTheMoonVector3 *)(v3 + 48),
          v43,
          v73,
          planeNormal);
        std::shared_ptr<NodeWindow>::operator=((std::shared_ptr<NodeWindow> *const)(v3 + 80), &p_newBase);
        std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
      }
    }
    std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, (const std::shared_ptr<NodeWindow> *)(v3 + 80));
    std::shared_ptr<NodeWindow>::shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 144), p_nextWindow);
    RefinedPathGeneratorBeta::ProjectionOverlapStep(
      this,
      (std::shared_ptr<NodeWindow> *)(v3 + 144),
      &p_newBase,
      lineCollection);
    std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 144));
    std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
    std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v3 + 80));
    goto LABEL_90;
  }
  std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, p_nextWindow);
  RefinedPathGeneratorBeta::OnWindowsSeperate(this, &p_newBase, lineCollection);
  std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
  v9 = 1;
LABEL_91:
  std::vector<ToTheMoonVector3>::~vector((std::vector<ToTheMoonVector3> *const)(v3 + 240));
  std::vector<ToTheMoonVector3 *>::~vector((std::vector<ToTheMoonVector3*> *const)(v3 + 176));
LABEL_92:
  result = v9;
  if ( v45 == (ToTheMoonVector3 *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 586: range 000000000CBC6E12-000000000CBC8BEA
bool __cdecl RefinedPathGeneratorBeta::LineStep(
        RefinedPathGeneratorBeta *const this,
        const std::vector<std::shared_ptr<ToTheMoonLine>> *lineCollection,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::vector<ToTheMoonVector3> *pathWithEndPos)
{
  std::shared_ptr<ToTheMoonLine> *v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  const std::shared_ptr<ToTheMoonLine> *v8; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const std::shared_ptr<ToTheMoonLine> *v10; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  float *p_x; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  ToTheMoonVector3 *p_end; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  ToTheMoonVector3 *v17; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  ToTheMoonVector3 *v19; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  float *p_y; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  float *v23; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  float *v25; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  float *v27; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  float *p_z; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  float *v31; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rsi
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  float *v34; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  float *v36; // rax
  ToTheMoonVector3 *v37; // rsi
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  float *v39; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  float *v41; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  float *v43; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  ToTheMoonVector3 *v45; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rdx
  ToTheMoonVector3 *v47; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rdx
  float *v49; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rdx
  float *v51; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rdx
  float *v53; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rdx
  float *v55; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rdx
  float *v57; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rdx
  float *v59; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rdx
  float *v61; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rdx
  float *v63; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  float *v65; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rdx
  float *v67; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rdx
  float *v69; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rdx
  float *v71; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rdx
  float *v73; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rdx
  float *v75; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rdx
  float *v77; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  float *v79; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rax
  float *v82; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  float *v84; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v85; // rdx
  ToTheMoonVector3 *v86; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v87; // rdx
  ToTheMoonVector3 *v88; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v89; // rdx
  float *v90; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v91; // rdx
  float *v92; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rdx
  float *v94; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v95; // rdx
  float *v96; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v97; // rdx
  float *v98; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v99; // rdx
  float *v100; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v101; // rdx
  float *v102; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v103; // rax
  float *v104; // rdx
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v105; // rdx
  float *v106; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v107; // rdx
  float *v108; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v109; // rdx
  float *v110; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v111; // rdx
  float *v112; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v113; // rdx
  float *v114; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v115; // rax
  float *v116; // rdx
  bool result; // al
  float v118; // [rsp+4h] [rbp-11Ch]
  float x; // [rsp+4h] [rbp-11Ch]
  float y; // [rsp+4h] [rbp-11Ch]
  float v121; // [rsp+4h] [rbp-11Ch]
  float z; // [rsp+4h] [rbp-11Ch]
  float v123; // [rsp+4h] [rbp-11Ch]
  float v124; // [rsp+4h] [rbp-11Ch]
  float v125; // [rsp+4h] [rbp-11Ch]
  float v126; // [rsp+4h] [rbp-11Ch]
  float v127; // [rsp+4h] [rbp-11Ch]
  float v128; // [rsp+4h] [rbp-11Ch]
  float v129; // [rsp+4h] [rbp-11Ch]
  bool isCoplanar; // [rsp+3Bh] [rbp-E5h]
  int i; // [rsp+3Ch] [rbp-E4h]
  float finalX; // [rsp+40h] [rbp-E0h]
  float finalY; // [rsp+44h] [rbp-DCh]
  float finalZ; // [rsp+48h] [rbp-D8h]
  float finalX_0; // [rsp+4Ch] [rbp-D4h]
  float finalY_0; // [rsp+50h] [rbp-D0h]
  float finalZ_0; // [rsp+54h] [rbp-CCh]
  int lastAxis; // [rsp+58h] [rbp-C8h]
  int curAxis; // [rsp+5Ch] [rbp-C4h]
  Axis nextAxis; // [rsp+60h] [rbp-C0h]
  ToTheMoonVector3 pos; // [rsp+64h] [rbp-BCh] BYREF
  std::shared_ptr<ToTheMoonLine> p_curLine; // [rsp+70h] [rbp-B0h] BYREF
  std::shared_ptr<ToTheMoonLine> p_line; // [rsp+80h] [rbp-A0h] BYREF
  char v147[144]; // [rsp+90h] [rbp-90h] BYREF

  v5 = (std::shared_ptr<ToTheMoonLine> *)v147;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = (std::shared_ptr<ToTheMoonLine> *)v6;
  }
  v5->_M_ptr = (std::__shared_ptr<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v5->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"2 32 16 11 curLine:590 64 16 12 nextLine:591";
  v5[1]._M_ptr = (std::__shared_ptr<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2>::element_type *)RefinedPathGeneratorBeta::LineStep;
  v7 = (_DWORD *)((unsigned __int64)v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -202178560;
  std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::clear(&this->lineLinkage);
  v8 = std::vector<std::shared_ptr<ToTheMoonLine>>::operator[](lineCollection, 0LL);
  std::shared_ptr<ToTheMoonLine>::shared_ptr(v5 + 2, v8);
  std::shared_ptr<ToTheMoonLine>::shared_ptr(v5 + 4, 0LL);
  for ( i = 1; i < std::vector<std::shared_ptr<ToTheMoonLine>>::size(lineCollection); ++i )
  {
    v9 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
    curAxis = RefinedPathGeneratorBeta::TopLineToAxis(v9);
    v10 = std::vector<std::shared_ptr<ToTheMoonLine>>::operator[](lineCollection, i);
    std::shared_ptr<ToTheMoonLine>::operator=(v5 + 4, v10);
    v11 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
    nextAxis = RefinedPathGeneratorBeta::TopLineToAxis(v11);
    if ( curAxis == nextAxis )
    {
      if ( curAxis == 2 )
      {
        v28 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        p_z = &v28->start.z;
        if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_z);
        }
        z = v28->start.z;
        v30 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
        v31 = &v30->end.z;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        if ( z > v30->end.z )
        {
LABEL_40:
          std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 2);
          v32 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          RefinedPathGeneratorBeta::AddLinePosToPath(this, &v32->start, &p_line, pathWithEndPos);
          std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
          goto LABEL_113;
        }
        v33 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v34 = &v33->end.z;
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v34);
        }
        v123 = v33->end.z;
        v35 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
        v36 = &v35->end.z;
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v36);
        }
        if ( v35->end.z > v123 )
          goto LABEL_46;
LABEL_48:
        std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 4);
        std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_curLine, v5 + 2);
        RefinedPathGeneratorBeta::SetLineLinkage(this, &p_curLine, &p_line);
        std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_curLine);
        goto LABEL_47;
      }
      if ( curAxis > 2 )
        goto LABEL_113;
      if ( !curAxis )
      {
        v12 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        p_x = &v12->start.x;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        v118 = *p_x;
        v14 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
        p_end = &v14->end;
        if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_end & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_end);
        }
        if ( v118 > v14->end.x )
          goto LABEL_40;
        v16 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v17 = &v16->end;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        x = v16->end.x;
        v18 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
        v19 = &v18->end;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        if ( v18->end.x <= x )
          goto LABEL_48;
LABEL_46:
        std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 2);
        v37 = &std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2])->end;
        RefinedPathGeneratorBeta::AddLinePosToPath(this, v37, &p_line, pathWithEndPos);
LABEL_47:
        std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
        goto LABEL_113;
      }
      if ( curAxis == 1 )
      {
        v20 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        p_y = &v20->start.y;
        if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_y);
        }
        y = v20->start.y;
        v22 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
        v23 = &v22->end.y;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        if ( y > v22->end.y )
          goto LABEL_40;
        v24 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v25 = &v24->end.y;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        v121 = v24->end.y;
        v26 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
        v27 = &v26->end.y;
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v27);
        }
        if ( v26->end.y <= v121 )
          goto LABEL_48;
        goto LABEL_46;
      }
    }
    else
    {
      std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 4);
      std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_curLine, v5 + 2);
      isCoplanar = Geometry::CheckIfVerticalLinesCoplanar(&p_curLine, &p_line, (Axis)curAxis, nextAxis);
      std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_curLine);
      std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
      if ( isCoplanar )
      {
        std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 4);
        std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_curLine, v5 + 2);
        RefinedPathGeneratorBeta::SetLineLinkage(this, &p_curLine, &p_line);
        std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_curLine);
        std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
      }
      else if ( curAxis == 2 )
      {
        v66 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
        v67 = &v66->start.z;
        if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v67);
        }
        finalZ = v66->start.z;
        v68 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v69 = &v68->start.z;
        if ( *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v69 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v69);
        }
        if ( v68->start.z <= finalZ )
        {
          v72 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          v73 = &v72->end.z;
          if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v73);
          }
          if ( finalZ > v72->end.z )
          {
            v74 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
            v75 = &v74->end.z;
            if ( *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v75 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v75);
            }
            finalZ = v74->end.z;
          }
        }
        else
        {
          v70 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          v71 = &v70->start.z;
          if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v71);
          }
          finalZ = v70->start.z;
        }
        std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 2);
        v76 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v77 = &v76->start.y;
        if ( *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v77 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v77);
        }
        v126 = v76->start.y;
        v78 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v79 = &v78->start.x;
        if ( *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v78 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v78);
        }
        ToTheMoonVector3::ToTheMoonVector3(&pos, *v79, v126, finalZ);
        RefinedPathGeneratorBeta::AddLinePosToPath(this, &pos, &p_line, pathWithEndPos);
        std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
      }
      else if ( curAxis <= 2 )
      {
        if ( curAxis )
        {
          if ( curAxis == 1 )
          {
            v52 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
            v53 = &v52->start.y;
            if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v53);
            }
            finalY = v52->start.y;
            v54 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
            v55 = &v54->start.y;
            if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v55);
            }
            if ( v54->start.y <= finalY )
            {
              v58 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
              v59 = &v58->end.y;
              if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v59);
              }
              if ( finalY > v58->end.y )
              {
                v60 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
                v61 = &v60->end.y;
                if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v61);
                }
                finalY = v60->end.y;
              }
            }
            else
            {
              v56 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
              v57 = &v56->start.y;
              if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v57);
              }
              finalY = v56->start.y;
            }
            std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 2);
            v62 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
            v63 = &v62->start.z;
            if ( *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v63 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v63);
            }
            v125 = v62->start.z;
            v64 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
            v65 = &v64->start.x;
            if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v64);
            }
            ToTheMoonVector3::ToTheMoonVector3(&pos, *v65, finalY, v125);
            RefinedPathGeneratorBeta::AddLinePosToPath(this, &pos, &p_line, pathWithEndPos);
            std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
          }
        }
        else
        {
          v38 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4]);
          v39 = &v38->start.x;
          if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v38);
          }
          finalX = *v39;
          v40 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          v41 = &v40->start.x;
          if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v40);
          }
          if ( *v41 <= finalX )
          {
            v44 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
            v45 = &v44->end;
            if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v45);
            }
            if ( finalX > v44->end.x )
            {
              v46 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
              v47 = &v46->end;
              if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v47);
              }
              finalX = v46->end.x;
            }
          }
          else
          {
            v42 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
            v43 = &v42->start.x;
            if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v42);
            }
            finalX = *v43;
          }
          std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 2);
          v48 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          v49 = &v48->start.z;
          if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v49);
          }
          v124 = v48->start.z;
          v50 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          v51 = &v50->start.y;
          if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v51);
          }
          ToTheMoonVector3::ToTheMoonVector3(&pos, finalX, v50->start.y, v124);
          RefinedPathGeneratorBeta::AddLinePosToPath(this, &pos, &p_line, pathWithEndPos);
          std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
        }
      }
    }
LABEL_113:
    std::shared_ptr<ToTheMoonLine>::operator=(v5 + 2, v5 + 4);
  }
  v80 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
  lastAxis = RefinedPathGeneratorBeta::TopLineToAxis(v80);
  if ( lastAxis == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&startPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)startPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&startPos->z);
    }
    finalZ_0 = startPos->z;
    v105 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
    v106 = &v105->start.z;
    if ( *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v106 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v106);
    }
    if ( v105->start.z <= finalZ_0 )
    {
      v109 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
      v110 = &v109->end.z;
      if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v110 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v110);
      }
      if ( finalZ_0 > v109->end.z )
      {
        v111 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v112 = &v111->end.z;
        if ( *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v112 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v112);
        }
        finalZ_0 = v111->end.z;
      }
    }
    else
    {
      v107 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
      v108 = &v107->start.z;
      if ( *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v108 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v108);
      }
      finalZ_0 = v107->start.z;
    }
    std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 2);
    v113 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
    v114 = &v113->start.y;
    if ( *(_BYTE *)(((unsigned __int64)v114 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v114 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v114 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v114);
    }
    v129 = v113->start.y;
    v115 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
    v116 = &v115->start.x;
    if ( *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v115 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v115);
    }
    ToTheMoonVector3::ToTheMoonVector3(&pos, *v116, v129, finalZ_0);
    RefinedPathGeneratorBeta::AddLinePosToPath(this, &pos, &p_line, pathWithEndPos);
    std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
  }
  else if ( lastAxis <= 2 )
  {
    if ( lastAxis )
    {
      if ( lastAxis == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&startPos->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)startPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startPos->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&startPos->y);
        }
        finalY_0 = startPos->y;
        v93 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v94 = &v93->start.y;
        if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v94 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v94);
        }
        if ( v93->start.y <= finalY_0 )
        {
          v97 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          v98 = &v97->end.y;
          if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v98 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v98);
          }
          if ( finalY_0 > v97->end.y )
          {
            v99 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
            v100 = &v99->end.y;
            if ( *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v100 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v100);
            }
            finalY_0 = v99->end.y;
          }
        }
        else
        {
          v95 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          v96 = &v95->start.y;
          if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v96 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v96);
          }
          finalY_0 = v95->start.y;
        }
        std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 2);
        v101 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v102 = &v101->start.z;
        if ( *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v102 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v102);
        }
        v128 = v101->start.z;
        v103 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v104 = &v103->start.x;
        if ( *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v103 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v103);
        }
        ToTheMoonVector3::ToTheMoonVector3(&pos, *v104, finalY_0, v128);
        RefinedPathGeneratorBeta::AddLinePosToPath(this, &pos, &p_line, pathWithEndPos);
        std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)startPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(startPos);
      }
      finalX_0 = startPos->x;
      v81 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
      v82 = &v81->start.x;
      if ( *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v81 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v81);
      }
      if ( *v82 <= finalX_0 )
      {
        v85 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v86 = &v85->end;
        if ( *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v86 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v86);
        }
        if ( finalX_0 > v85->end.x )
        {
          v87 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
          v88 = &v87->end;
          if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v88 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v88);
          }
          finalX_0 = v87->end.x;
        }
      }
      else
      {
        v83 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
        v84 = &v83->start.x;
        if ( *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v83 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v83);
        }
        finalX_0 = *v84;
      }
      std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_line, v5 + 2);
      v89 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
      v90 = &v89->start.z;
      if ( *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v90 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v90);
      }
      v127 = v89->start.z;
      v91 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
      v92 = &v91->start.y;
      if ( *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v92 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v92);
      }
      ToTheMoonVector3::ToTheMoonVector3(&pos, finalX_0, v91->start.y, v127);
      RefinedPathGeneratorBeta::AddLinePosToPath(this, &pos, &p_line, pathWithEndPos);
      std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_line);
    }
  }
  std::shared_ptr<ToTheMoonLine>::~shared_ptr(v5 + 4);
  std::shared_ptr<ToTheMoonLine>::~shared_ptr(v5 + 2);
  result = 1;
  if ( v147 == (char *)v5 )
  {
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v5->_M_ptr = (std::__shared_ptr<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 728: range 000000000CBC8BEC-000000000CBC8F28
bool __cdecl RefinedPathGeneratorBeta::ProjectionOverlapStep(
        RefinedPathGeneratorBeta *const this,
        std::shared_ptr<NodeWindow> *p_nextWindow,
        std::shared_ptr<NodeWindow> *p_projectWindow,
        std::vector<std::shared_ptr<ToTheMoonLine>> *lineCollection)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool v7; // r14
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  bool result; // al
  std::shared_ptr<NodeWindow> v12; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<NodeWindow> p_newBase; // [rsp+30h] [rbp-A0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 13 resIsLine:734 64 16 17 overlapWindow:735";
  *(_QWORD *)(v4 + 16) = RefinedPathGeneratorBeta::ProjectionOverlapStep;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( std::operator==<SquareBasedWedge>(&this->currentWedge, 0LL) )
  {
    v7 = 0;
  }
  else
  {
    *(_BYTE *)(v4 + 48) = 0;
    std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, p_projectWindow);
    std::shared_ptr<NodeWindow>::shared_ptr(&v12, p_nextWindow);
    RefinedPathGeneratorBeta::WindowOverlap(
      (RefinedPathGeneratorBeta *const)(v4 + 64),
      (std::shared_ptr<NodeWindow> *)this,
      &v12,
      (bool *)&p_newBase);
    std::shared_ptr<NodeWindow>::~shared_ptr(&v12);
    std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
    if ( std::operator==<NodeWindow>((const std::shared_ptr<NodeWindow> *)(v4 + 64), 0LL) )
    {
      std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, p_nextWindow);
      RefinedPathGeneratorBeta::OnWindowsSeperate(this, &p_newBase, lineCollection);
    }
    else
    {
      v8 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
      std::shared_ptr<NodeWindow>::shared_ptr(&p_newBase, (const std::shared_ptr<NodeWindow> *)(v4 + 64));
      SquareBasedWedge::SetBase(v8, &p_newBase);
    }
    std::shared_ptr<NodeWindow>::~shared_ptr(&p_newBase);
    v7 = 1;
    std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v4 + 64));
  }
  result = v7;
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

// Line 755: range 000000000CBC8F2A-000000000CBC912F
bool __cdecl RefinedPathGeneratorBeta::OnWindowsSeperate(
        RefinedPathGeneratorBeta *const this,
        std::shared_ptr<NodeWindow> *p_nextWindow,
        std::vector<std::shared_ptr<ToTheMoonLine>> *lineCollection)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  bool v6; // r15
  bool result; // al
  std::shared_ptr<SquareBasedWedge> v9; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<NodeWindow> v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 newTopLine:756";
  *(_QWORD *)(v3 + 16) = RefinedPathGeneratorBeta::OnWindowsSeperate;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::shared_ptr<NodeWindow>::shared_ptr(&v10, p_nextWindow);
  std::shared_ptr<SquareBasedWedge>::shared_ptr(&v9, &this->currentWedge);
  RefinedPathGeneratorBeta::GenerateNewTopLine(
    (RefinedPathGeneratorBeta *const)(v3 + 32),
    &this->currentWedge,
    (std::shared_ptr<NodeWindow> *)&v9);
  std::shared_ptr<SquareBasedWedge>::~shared_ptr(&v9);
  std::shared_ptr<NodeWindow>::~shared_ptr(&v10);
  if ( std::operator==<ToTheMoonLine>((const std::shared_ptr<ToTheMoonLine> *)(v3 + 32), 0LL) )
  {
    v6 = 0;
  }
  else
  {
    std::make_shared<SquareBasedWedge,std::shared_ptr<ToTheMoonLine> &,std::shared_ptr&<NodeWindow>>(
      (std::shared_ptr<ToTheMoonLine> *)&v10,
      (std::shared_ptr<NodeWindow> *)(v3 + 32),
      (std::shared_ptr<ToTheMoonLine> *)p_nextWindow,
      (std::shared_ptr<NodeWindow> *)(v3 + 32));
    std::shared_ptr<SquareBasedWedge>::operator=(&this->currentWedge, (std::shared_ptr<SquareBasedWedge> *)&v10);
    std::shared_ptr<SquareBasedWedge>::~shared_ptr((std::shared_ptr<SquareBasedWedge> *const)&v10);
    std::vector<std::shared_ptr<ToTheMoonLine>>::push_back(
      lineCollection,
      (const std::vector<std::shared_ptr<ToTheMoonLine>>::value_type *)(v3 + 32));
    v6 = 1;
  }
  std::shared_ptr<ToTheMoonLine>::~shared_ptr((std::shared_ptr<ToTheMoonLine> *const)(v3 + 32));
  result = v6;
  if ( v11 == (char *)v3 )
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

// Line 766: range 000000000CBC9130-000000000CBC91A3
bool __cdecl RefinedPathGeneratorBeta::OnTopLineNormalToNextWindow(
        RefinedPathGeneratorBeta *const this,
        std::shared_ptr<NodeWindow> *p_nextWindow,
        std::vector<std::shared_ptr<ToTheMoonLine>> *lineCollection)
{
  bool v3; // bl
  std::shared_ptr<NodeWindow> v6; // [rsp+20h] [rbp-20h] BYREF

  std::shared_ptr<NodeWindow>::shared_ptr(&v6, p_nextWindow);
  v3 = RefinedPathGeneratorBeta::OnWindowsSeperate(this, &v6, lineCollection);
  std::shared_ptr<NodeWindow>::~shared_ptr(&v6);
  return v3;
};

// Line 771: range 000000000CBC91A4-000000000CBC959F
void __cdecl RefinedPathGeneratorBeta::GenerateLastLine(
        RefinedPathGeneratorBeta *const this,
        const ToTheMoonVector3 *lastPos,
        std::vector<std::shared_ptr<ToTheMoonLine>> *lineCollection)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  ToTheMoonVector3 **M_current; // r14
  std::vector<ToTheMoonVector3*>::iterator v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // al
  unsigned __int64 v11; // rax
  ToTheMoonVector3 *v12; // r14
  unsigned __int64 v13; // rax
  std::allocator<ToTheMoonVector3*> __a; // [rsp+27h] [rbp-D9h] BYREF
  std::shared_ptr<NodeWindow> *baseWindow; // [rsp+28h] [rbp-D8h]
  PointDistanceComparer __comp; // [rsp+34h] [rbp-CCh] BYREF
  std::shared_ptr<ToTheMoonLine> v18; // [rsp+40h] [rbp-C0h] BYREF
  std::initializer_list<ToTheMoonVector3*> __l; // [rsp+50h] [rbp-B0h] BYREF
  ToTheMoonVector3 *p_p3; // [rsp+60h] [rbp-A0h]
  ToTheMoonVector3 *p_p4; // [rsp+68h] [rbp-98h]
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 16 baseVertices:781";
  *(_QWORD *)(v3 + 16) = RefinedPathGeneratorBeta::GenerateLastLine;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( !std::operator==<SquareBasedWedge>(&this->currentWedge, 0LL) )
  {
    baseWindow = &std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)this)->base;
    if ( !std::operator==<NodeWindow>(baseWindow, 0LL) )
    {
      __l._M_array = (std::initializer_list<ToTheMoonVector3*>::iterator)std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow);
      __l._M_len = (std::initializer_list<ToTheMoonVector3*>::size_type)&std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow)->p2;
      p_p3 = &std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow)->p3;
      p_p4 = &std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)baseWindow)->p4;
      std::allocator<ToTheMoonVector3 *>::allocator(&__a);
      std::vector<ToTheMoonVector3 *>::vector(
        (std::vector<ToTheMoonVector3*> *const)(v3 + 32),
        (std::initializer_list<ToTheMoonVector3*>)__PAIR128__(4LL, &__l),
        &__a);
      std::allocator<ToTheMoonVector3 *>::~allocator(&__a);
      PointDistanceComparer::PointDistanceComparer(&__comp, lastPos);
      M_current = std::vector<ToTheMoonVector3 *>::end((std::vector<ToTheMoonVector3*> *const)(v3 + 32))._M_current;
      v7._M_current = std::vector<ToTheMoonVector3 *>::begin((std::vector<ToTheMoonVector3*> *const)(v3 + 32))._M_current;
      std::sort<__gnu_cxx::__normal_iterator<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>,PointDistanceComparer>(
        v7,
        (__gnu_cxx::__normal_iterator<ToTheMoonVector3**,std::vector<ToTheMoonVector3*> >)M_current,
        __comp);
      v8 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                               (std::vector<ToTheMoonVector3*> *const)(v3 + 32),
                               0LL);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8, 0LL);
      if ( !*(_QWORD *)v8 )
        goto LABEL_12;
      v9 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                               (std::vector<ToTheMoonVector3*> *const)(v3 + 32),
                               1uLL);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9, 1LL);
      if ( *(_QWORD *)v9 )
        v10 = 0;
      else
LABEL_12:
        v10 = 1;
      if ( !v10 )
      {
        v11 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                  (std::vector<ToTheMoonVector3*> *const)(v3 + 32),
                                  1uLL);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(v11, 1LL);
        v12 = *(ToTheMoonVector3 **)v11;
        v13 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                  (std::vector<ToTheMoonVector3*> *const)(v3 + 32),
                                  0LL);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(v13, 0LL);
        std::make_shared<ToTheMoonLine,ToTheMoonVector3 &,ToTheMoonVector3 &>(
          (ToTheMoonVector3 *)&v18,
          *(ToTheMoonVector3 **)v13,
          v12,
          *(ToTheMoonVector3 **)v13);
        std::vector<std::shared_ptr<ToTheMoonLine>>::push_back(lineCollection, &v18);
        std::shared_ptr<ToTheMoonLine>::~shared_ptr(&v18);
      }
      std::vector<ToTheMoonVector3 *>::~vector((std::vector<ToTheMoonVector3*> *const)(v3 + 32));
    }
  }
  if ( v22 == (char *)v3 )
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

// Line 801: range 000000000CBC95A0-000000000CBC9A6D
std::shared_ptr<ToTheMoonLine> __cdecl RefinedPathGeneratorBeta::GenerateNewTopLine(
        RefinedPathGeneratorBeta *const this,
        std::shared_ptr<SquareBasedWedge> *p_curWedge,
        std::shared_ptr<NodeWindow> *p_nextWindow)
{
  std::shared_ptr<NodeWindow> *v3; // rcx
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::shared_ptr<ToTheMoonLine> result; // rax
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  NodeWindow *v12; // r14
  std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  const ToTheMoonVector3 *v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  ToTheMoonVector3 *v20; // r14
  unsigned __int64 v21; // rax
  ToTheMoonVector3 *v22; // rcx
  std::shared_ptr<NodeWindow> *p_nextWindowa; // [rsp+0h] [rbp-110h]
  int i; // [rsp+24h] [rbp-ECh]
  Axis nextAxis; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<ToTheMoonLine> p_refLine; // [rsp+30h] [rbp-E0h] BYREF
  ToTheMoonLine topLine; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+80h] [rbp-90h] BYREF

  p_nextWindowa = v3;
  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 7 res:814";
  *(_QWORD *)(v4 + 16) = RefinedPathGeneratorBeta::GenerateNewTopLine;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( std::operator==<SquareBasedWedge>((const std::shared_ptr<SquareBasedWedge> *)p_nextWindow, 0LL)
    || (v7 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_nextWindow),
        std::operator==<NodeWindow>(&v7->base, 0LL))
    || std::operator==<NodeWindow>(p_nextWindowa, 0LL) )
  {
    std::shared_ptr<ToTheMoonLine>::shared_ptr((std::shared_ptr<ToTheMoonLine> *const)this, 0LL);
  }
  else
  {
    v10 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_nextWindowa);
    nextAxis = Geometry::PlaneNormalToAxis(&v10->pointOutDir);
    std::vector<ToTheMoonVector3 *>::vector((std::vector<ToTheMoonVector3*> *const)(v4 + 32));
    v11 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_nextWindow);
    v12 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11->base);
    v13 = std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SquareBasedWedge,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_curWedge);
    std::shared_ptr<ToTheMoonLine>::shared_ptr(&p_refLine, &v13->topLine);
    v14 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_nextWindowa);
    NodeWindow::SortVerticesByDisToPlaneAndRefLine(v12, (std::vector<ToTheMoonVector3*> *)(v4 + 32), v14, &p_refLine);
    std::shared_ptr<ToTheMoonLine>::~shared_ptr(&p_refLine);
    v15 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                              (std::vector<ToTheMoonVector3*> *const)(v4 + 32),
                              0LL);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8(v15, 0LL);
    if ( *(_QWORD *)v15 )
    {
      for ( i = 1; ; ++i )
      {
        if ( i >= std::vector<ToTheMoonVector3 *>::size((const std::vector<ToTheMoonVector3*> *const)(v4 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
            "GenerateNewTopLine",
            830);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v29,
            (const char (*)[42])"[GenerateNewTopLine] should never be here");
          common::milog::MiLogStream::~MiLogStream(&v29);
          std::shared_ptr<ToTheMoonLine>::shared_ptr((std::shared_ptr<ToTheMoonLine> *const)this, 0LL);
          goto LABEL_31;
        }
        v16 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                  (std::vector<ToTheMoonVector3*> *const)(v4 + 32),
                                  i);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(v16, i);
        v17 = *(const ToTheMoonVector3 **)v16;
        v18 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                  (std::vector<ToTheMoonVector3*> *const)(v4 + 32),
                                  0LL);
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8(v18, 0LL);
        ToTheMoonLine::ToTheMoonLine(&topLine, *(const ToTheMoonVector3 **)v18, v17);
        if ( RefinedPathGeneratorBeta::TopLineToAxis(&topLine) != nextAxis )
          break;
      }
      v19 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                (std::vector<ToTheMoonVector3*> *const)(v4 + 32),
                                i);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(v19, i);
      v20 = *(ToTheMoonVector3 **)v19;
      v21 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                (std::vector<ToTheMoonVector3*> *const)(v4 + 32),
                                0LL);
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8(v21, 0LL);
      v22 = *(ToTheMoonVector3 **)v21;
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store16(this, 0LL);
      std::make_shared<ToTheMoonLine,ToTheMoonVector3 &,ToTheMoonVector3 &>((ToTheMoonVector3 *)this, v22, v20, v22);
    }
    else
    {
      std::shared_ptr<ToTheMoonLine>::shared_ptr((std::shared_ptr<ToTheMoonLine> *const)this, 0LL);
    }
LABEL_31:
    std::vector<ToTheMoonVector3 *>::~vector((std::vector<ToTheMoonVector3*> *const)(v4 + 32));
  }
  if ( v30 == (char *)v4 )
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
  result._M_ptr = (std::__shared_ptr<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 835: range 000000000CBC9A6E-000000000CBCA431
std::shared_ptr<NodeWindow> __cdecl RefinedPathGeneratorBeta::WindowOverlap(
        RefinedPathGeneratorBeta *const this,
        std::shared_ptr<NodeWindow> *p_nextWindow,
        std::shared_ptr<NodeWindow> *p_projectWindow,
        bool *resIsLine)
{
  bool *v4; // r8
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  NodeWindow *v9; // rax
  NodeWindow *v10; // rax
  _BOOL4 IsPoint; // r14d
  int v12; // r14d
  std::shared_ptr<NodeWindow> result; // rax
  ToTheMoonVector3 *v14; // r9
  ToTheMoonVector3 *v15; // r9
  ToTheMoonVector3 *v16; // r9
  NodeWindow *v17; // r14
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  ToTheMoonVector3 *v19; // [rsp+0h] [rbp-230h]
  bool *resIsLinea; // [rsp+8h] [rbp-228h]
  int isPointCnt; // [rsp+30h] [rbp-200h]
  float z; // [rsp+34h] [rbp-1FCh]
  float y; // [rsp+38h] [rbp-1F8h]
  float x; // [rsp+3Ch] [rbp-1F4h]
  ToTheMoonVector3 v27; // [rsp+40h] [rbp-1F0h] BYREF
  ToTheMoonVector3 v28; // [rsp+4Ch] [rbp-1E4h] BYREF
  ToTheMoonVector3 v29; // [rsp+58h] [rbp-1D8h] BYREF
  ToTheMoonVector3 __args_0; // [rsp+64h] [rbp-1CCh] BYREF
  std::shared_ptr<NodeWindow> v31; // [rsp+70h] [rbp-1C0h] BYREF
  std::shared_ptr<NodeWindow> v32; // [rsp+80h] [rbp-1B0h] BYREF
  std::shared_ptr<NodeWindow> v33; // [rsp+90h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v34; // [rsp+A0h] [rbp-190h] BYREF
  char v35[368]; // [rsp+C0h] [rbp-170h] BYREF

  resIsLinea = v4;
  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 16 13 outWindow:865 80 36 10 range1:841 160 36 10 range2:843 240 36 11 overlap:846";
  *(_QWORD *)(v5 + 16) = RefinedPathGeneratorBeta::WindowOverlap;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862723] = -234618880;
  v7[536862724] = -218959118;
  v7[536862726] = -218959356;
  v7[536862727] = 62194;
  v7[536862728] = -217841664;
  v7[536862729] = -202116109;
  if ( std::operator==<NodeWindow>(p_projectWindow, 0LL)
    || std::operator==<NodeWindow>((const std::shared_ptr<NodeWindow> *)resIsLine, 0LL) )
  {
    goto LABEL_14;
  }
  Range3D::Range3D((Range3D *const)(v5 + 80));
  v9 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_projectWindow);
  NodeWindow::ToRange3D(v9, (Range3D *)(v5 + 80));
  Range3D::Range3D((Range3D *const)(v5 + 160));
  v10 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)resIsLine);
  NodeWindow::ToRange3D(v10, (Range3D *)(v5 + 160));
  Range3D::Range3D((Range3D *const)(v5 + 240));
  Range3D::Overlap((const Range3D *const)(v5 + 80), (const Range3D *)(v5 + 160), (Range3D *)(v5 + 240));
  if ( Range3D::Illegal((const Range3D *const)(v5 + 240)) )
    goto LABEL_14;
  IsPoint = PlaneLine::IsPoint((const PlaneLine *const)(v5 + 240));
  v12 = PlaneLine::IsPoint((const PlaneLine *const)(v5 + 252)) + IsPoint;
  isPointCnt = v12 + PlaneLine::IsPoint((const PlaneLine *const)(v5 + 264));
  if ( isPointCnt == 3 )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
      "WindowOverlap",
      856);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v34,
      (const char (*)[39])"[WindowOverlap]should never be here 11");
    common::milog::MiLogStream::~MiLogStream(&v34);
    std::shared_ptr<NodeWindow>::shared_ptr((std::shared_ptr<NodeWindow> *const)this, 0LL);
    goto LABEL_32;
  }
  if ( isPointCnt == 2 )
  {
LABEL_14:
    std::shared_ptr<NodeWindow>::shared_ptr((std::shared_ptr<NodeWindow> *const)this, 0LL);
  }
  else
  {
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    if ( PlaneLine::IsPoint((const PlaneLine *const)(v5 + 240)) )
    {
      if ( *(float *)(v5 + 84) != *(float *)(v5 + 160) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
          "WindowOverlap",
          869);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v34,
          (const char (*)[38])"[WindowOverlap]should never be here 1");
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      x = *(float *)(v5 + 240);
      ToTheMoonVector3::ToTheMoonVector3(&__args_0, x, *(float *)(v5 + 256), *(float *)(v5 + 268));
      ToTheMoonVector3::ToTheMoonVector3(&v29, x, *(float *)(v5 + 252), *(float *)(v5 + 268));
      ToTheMoonVector3::ToTheMoonVector3(&v28, x, *(float *)(v5 + 256), *(float *)(v5 + 264));
      ToTheMoonVector3::ToTheMoonVector3(&v27, x, *(float *)(v5 + 252), *(float *)(v5 + 264));
      std::make_shared<NodeWindow,ToTheMoonVector3,ToTheMoonVector3,ToTheMoonVector3,ToTheMoonVector3>(
        (ToTheMoonVector3 *)&v31,
        &v27,
        &v28,
        &v29,
        &__args_0,
        v14,
        v19,
        (ToTheMoonVector3 *)resIsLinea);
      std::shared_ptr<NodeWindow>::operator=((std::shared_ptr<NodeWindow> *const)(v5 + 48), &v31);
      std::shared_ptr<NodeWindow>::~shared_ptr(&v31);
    }
    else if ( PlaneLine::IsPoint((const PlaneLine *const)(v5 + 252)) )
    {
      if ( *(float *)(v5 + 96) != *(float *)(v5 + 172) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
          "WindowOverlap",
          881);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v34,
          (const char (*)[38])"[WindowOverlap]should never be here 2");
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      y = *(float *)(v5 + 252);
      ToTheMoonVector3::ToTheMoonVector3(&__args_0, *(float *)(v5 + 244), y, *(float *)(v5 + 268));
      ToTheMoonVector3::ToTheMoonVector3(&v29, *(float *)(v5 + 240), y, *(float *)(v5 + 268));
      ToTheMoonVector3::ToTheMoonVector3(&v28, *(float *)(v5 + 244), y, *(float *)(v5 + 264));
      ToTheMoonVector3::ToTheMoonVector3(&v27, *(float *)(v5 + 240), y, *(float *)(v5 + 264));
      std::make_shared<NodeWindow,ToTheMoonVector3,ToTheMoonVector3,ToTheMoonVector3,ToTheMoonVector3>(
        (ToTheMoonVector3 *)&v32,
        &v27,
        &v28,
        &v29,
        &__args_0,
        v15,
        v19,
        (ToTheMoonVector3 *)resIsLinea);
      std::shared_ptr<NodeWindow>::operator=((std::shared_ptr<NodeWindow> *const)(v5 + 48), &v32);
      std::shared_ptr<NodeWindow>::~shared_ptr(&v32);
    }
    else
    {
      if ( *(float *)(v5 + 108) != *(float *)(v5 + 184) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
          "WindowOverlap",
          893);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v34,
          (const char (*)[38])"[WindowOverlap]should never be here 3");
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      if ( !PlaneLine::IsPoint((const PlaneLine *const)(v5 + 104)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/AStar/path_generator.cpp",
          "WindowOverlap",
          895);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v34,
          (const char (*)[38])"[WindowOverlap]should never be here 4");
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      z = *(float *)(v5 + 264);
      ToTheMoonVector3::ToTheMoonVector3(&__args_0, *(float *)(v5 + 244), *(float *)(v5 + 256), z);
      ToTheMoonVector3::ToTheMoonVector3(&v29, *(float *)(v5 + 240), *(float *)(v5 + 256), z);
      ToTheMoonVector3::ToTheMoonVector3(&v28, *(float *)(v5 + 244), *(float *)(v5 + 252), z);
      ToTheMoonVector3::ToTheMoonVector3(&v27, *(float *)(v5 + 240), *(float *)(v5 + 252), z);
      std::make_shared<NodeWindow,ToTheMoonVector3,ToTheMoonVector3,ToTheMoonVector3,ToTheMoonVector3>(
        (ToTheMoonVector3 *)&v33,
        &v27,
        &v28,
        &v29,
        &__args_0,
        v16,
        v19,
        (ToTheMoonVector3 *)resIsLinea);
      std::shared_ptr<NodeWindow>::operator=((std::shared_ptr<NodeWindow> *const)(v5 + 48), &v33);
      std::shared_ptr<NodeWindow>::~shared_ptr(&v33);
    }
    if ( std::operator==<NodeWindow>((const std::shared_ptr<NodeWindow> *)(v5 + 48), 0LL) )
    {
      std::shared_ptr<NodeWindow>::shared_ptr((std::shared_ptr<NodeWindow> *const)this, 0LL);
    }
    else
    {
      v17 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
      v18 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_projectWindow);
      NodeWindow::InitPointOutDir(v17, &v18->pointOutDir);
      std::shared_ptr<NodeWindow>::shared_ptr(
        (std::shared_ptr<NodeWindow> *const)this,
        (std::shared_ptr<NodeWindow> *)(v5 + 48));
    }
    std::shared_ptr<NodeWindow>::~shared_ptr((std::shared_ptr<NodeWindow> *const)(v5 + 48));
  }
LABEL_32:
  if ( v35 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<NodeWindow,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 914: range 000000000CBCA432-000000000CBCA571
Axis __cdecl RefinedPathGeneratorBeta::TopLineToAxis(const ToTheMoonLine *topLine)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Axis result; // eax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 7 dir:915";
  *(_QWORD *)(v1 + 16) = RefinedPathGeneratorBeta::TopLineToAxis;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  *(ToTheMoonVector3 *)(v1 + 32) = ToTheMoonVector3::Diff(&topLine->end, &topLine->start);
  if ( !Algebra::IsClose(*(float *)(v1 + 32), 0.0) )
  {
    result = X;
  }
  else if ( !Algebra::IsClose(*(float *)(v1 + 36), 0.0) )
  {
    result = Y;
  }
  else if ( !Algebra::IsClose(*(float *)(v1 + 40), 0.0) )
  {
    result = Z;
  }
  else
  {
    result = None_13;
  }
  if ( v5 == (char *)v1 )
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

// Line 926: range 000000000CBCA572-000000000CBCAE5F
bool __cdecl RefinedPathGeneratorBeta::AddLinePosToPath(
        RefinedPathGeneratorBeta *const this,
        const ToTheMoonVector3 *pos,
        std::shared_ptr<ToTheMoonLine> *p_line,
        std::vector<ToTheMoonVector3> *path)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // r15
  std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::mapped_type *v8; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 n; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  ToTheMoonVector3 *p_end; // rax
  float x; // xmm1_4
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  ToTheMoonVector3 *v15; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  float *p_x; // rdx
  float v18; // xmm1_4
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  float *p_y; // rax
  float y; // xmm1_4
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  float *v23; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  float *v25; // rax
  float v26; // xmm1_4
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  float *p_z; // rax
  float z; // xmm1_4
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  float *v31; // rax
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rdx
  float *v33; // rax
  float v34; // xmm1_4
  const std::vector<ToTheMoonVector3>::value_type *v35; // rdx
  bool result; // al
  int cnt; // [rsp+24h] [rbp-ECh]
  int i; // [rsp+28h] [rbp-E8h]
  int axis; // [rsp+2Ch] [rbp-E4h]
  std::_Rb_tree_iterator<std::pair<const std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine> > >::_Self __x; // [rsp+30h] [rbp-E0h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine> > >::_Self __y; // [rsp+38h] [rbp-D8h] BYREF
  char v44[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 12 16 posOnCurLine:946 64 16 14 targetLine:934 96 24 19 intermediatePos:933";
  *(_QWORD *)(v4 + 16) = RefinedPathGeneratorBeta::AddLinePosToPath;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  if ( std::operator==<ToTheMoonLine>(p_line, 0LL) )
  {
    v7 = 0;
  }
  else
  {
    std::vector<ToTheMoonVector3>::vector((std::vector<ToTheMoonVector3> *const)(v4 + 96));
    std::shared_ptr<ToTheMoonLine>::shared_ptr((std::shared_ptr<ToTheMoonLine> *const)(v4 + 64), p_line);
    cnt = 0;
    do
    {
      __y._M_node = std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::end(&this->lineLinkage)._M_node;
      __x._M_node = std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::find(
                      &this->lineLinkage,
                      (const std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::key_type *)(v4 + 64))._M_node;
      if ( !std::operator!=(&__x, &__y) )
        break;
      ++cnt;
      v8 = std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::at(
             &this->lineLinkage,
             (const std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::key_type *)(v4 + 64));
      std::shared_ptr<ToTheMoonLine>::operator=((std::shared_ptr<ToTheMoonLine> *const)(v4 + 64), v8);
      if ( std::operator==<ToTheMoonLine>((const std::shared_ptr<ToTheMoonLine> *)(v4 + 64), 0LL) )
        break;
      v9 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      axis = RefinedPathGeneratorBeta::TopLineToAxis(v9);
      n = (unsigned __int64)std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      *(_QWORD *)(v4 + 32) = *(_QWORD *)n;
      *(_DWORD *)(v4 + 40) = *(_DWORD *)(n + 8);
      if ( axis == 2 )
      {
        v27 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        p_z = &v27->end.z;
        if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_z);
        }
        z = v27->end.z;
        if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pos->z);
        }
        if ( pos->z <= z )
        {
          v32 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v33 = &v32->start.z;
          if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v33);
          }
          v34 = v32->start.z;
          if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pos->z);
          }
          if ( pos->z > v34 )
            *(float *)(v4 + 40) = pos->z;
        }
        else
        {
          v30 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v31 = &v30->end.z;
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v31);
          }
          *(float *)(v4 + 40) = v30->end.z;
        }
      }
      else if ( axis <= 2 )
      {
        if ( axis )
        {
          if ( axis == 1 )
          {
            v19 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            p_y = &v19->end.y;
            if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_y);
            }
            y = v19->end.y;
            if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&pos->y);
            }
            if ( pos->y <= y )
            {
              v24 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              v25 = &v24->start.y;
              if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v25);
              }
              v26 = v24->start.y;
              if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(&pos->y);
              }
              if ( pos->y > v26 )
                *(float *)(v4 + 36) = pos->y;
            }
            else
            {
              v22 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              v23 = &v22->end.y;
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v23);
              }
              *(float *)(v4 + 36) = v22->end.y;
            }
          }
        }
        else
        {
          v11 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          p_end = &v11->end;
          if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_end & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_end);
          }
          x = v11->end.x;
          if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(pos);
          }
          if ( pos->x <= x )
          {
            v16 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            p_x = &v16->start.x;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v16);
            }
            v18 = *p_x;
            if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(pos);
            }
            if ( pos->x > v18 )
              *(float *)(v4 + 32) = pos->x;
          }
          else
          {
            v14 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v15 = &v14->end;
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v15);
            }
            *(float *)(v4 + 32) = v14->end.x;
          }
        }
      }
      std::vector<ToTheMoonVector3>::push_back(
        (std::vector<ToTheMoonVector3> *const)(v4 + 96),
        (const std::vector<ToTheMoonVector3>::value_type *)(v4 + 32));
    }
    while ( cnt <= 500 );
    for ( i = std::vector<ToTheMoonVector3>::size((const std::vector<ToTheMoonVector3> *const)(v4 + 96)) - 1; i >= 0; --i )
    {
      v35 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v4 + 96), i);
      std::vector<ToTheMoonVector3>::push_back(path, v35);
    }
    std::vector<ToTheMoonVector3>::push_back(path, pos);
    v7 = 1;
    std::shared_ptr<ToTheMoonLine>::~shared_ptr((std::shared_ptr<ToTheMoonLine> *const)(v4 + 64));
    std::vector<ToTheMoonVector3>::~vector((std::vector<ToTheMoonVector3> *const)(v4 + 96));
  }
  result = v7;
  if ( v44 == (char *)v4 )
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

// Line 986: range 000000000CBCAE60-000000000CBCAE9F
void __cdecl RefinedPathGeneratorBeta::SetLineLinkage(
        RefinedPathGeneratorBeta *const this,
        std::shared_ptr<ToTheMoonLine> *p_curLine,
        std::shared_ptr<ToTheMoonLine> *p_nextLine)
{
  std::shared_ptr<ToTheMoonLine> *v3; // rdx

  v3 = std::map<std::shared_ptr<ToTheMoonLine>,std::shared_ptr<ToTheMoonLine>>::operator[](
         &this->lineLinkage,
         p_nextLine);
  std::shared_ptr<ToTheMoonLine>::operator=(v3, p_curLine);
};
