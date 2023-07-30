// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/AStarPathFinding.cpp

// Line 18: range 000000000CBB9CB0-000000000CBBA372
ToTheMoonVector3 *__cdecl ToTheMoonPathFinding::GetWalkableInputPos(
        const ToTheMoonPathFinding *const this,
        const std::string *pointDesc,
        const SVOBlock *block)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  std::vector<std::string>::size_type v9; // r14
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  ToTheMoonVector3 *WalkableInputPos; // r14
  float *v13; // r15
  float *v14; // r14
  float *v15; // rax
  float *v16; // r8
  float *v17; // r9
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  ToTheMoonVector3 *result; // rax
  std::allocator<char> __a; // [rsp+23h] [rbp-18Dh] BYREF
  int i; // [rsp+24h] [rbp-18Ch]
  SVONode *node; // [rsp+28h] [rbp-188h]
  std::shared_ptr<DynamicNodesInfo> p_dynamicData; // [rsp+30h] [rbp-180h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-170h] BYREF
  char v28[336]; // [rsp+60h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 4 f:28 64 16 6 pos:36 96 24 12 posStrVec:23 160 24 4 v:26 224 32 9 posStr:19";
  *(_QWORD *)(v4 + 16) = ToTheMoonPathFinding::GetWalkableInputPos;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -202116109;
  std::string::basic_string(v4 + 224);
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/AStarPathFinding.cpp",
    "GetWalkableInputPos",
    20);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v27, (const char (*)[9])"Input a ");
  v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, pointDesc);
  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" position:");
  common::milog::MiLogStream::~MiLogStream(&v27);
  std::operator>><char>(&std::cin, v4 + 224);
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 96));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v27, ",", &__a);
  CommonUtils::split((const std::string *)(v4 + 224), (const std::string *)&v27, (std::vector<std::string> *)(v4 + 96));
  std::string::~string(&v27);
  std::allocator<char>::~allocator(&__a);
  std::vector<float>::vector((std::vector<float> *const)(v4 + 160));
  for ( i = 0; ; ++i )
  {
    v9 = i;
    if ( v9 >= std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 96)) )
      break;
    v10 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 96), i);
    *(float *)v3.m128i_i32 = std::stof(v10, 0LL);
    *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v3);
    std::vector<float>::push_back(
      (std::vector<float> *const)(v4 + 160),
      (const std::vector<float>::value_type *)(v4 + 48));
  }
  if ( std::vector<float>::size((const std::vector<float> *const)(v4 + 160)) > 2 )
  {
    v13 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 160), 2uLL);
    v14 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 160), 1uLL);
    v15 = std::vector<float>::operator[]((std::vector<float> *const)(v4 + 160), 0LL);
    std::make_shared<ToTheMoonVector3,float &,float &,float &>((float *)(v4 + 64), v15, v14, v13, v16, v17);
    std::shared_ptr<DynamicNodesInfo>::shared_ptr(&p_dynamicData, 0LL);
    v18 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    node = SVODataProcessor::FindNodeByPositionGeneral(block, v18, &p_dynamicData);
    std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicData);
    if ( node )
    {
      if ( !AStarPathFinder::CheckWalkable(node) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/tothemoon/Internal/AStarPathFinding/AStarPathFinding.cpp",
          "GetWalkableInputPos",
          45);
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v27, pointDesc);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v20,
          (const char (*)[31])" Point not walkable. Try again");
        common::milog::MiLogStream::~MiLogStream(&v27);
        WalkableInputPos = ToTheMoonPathFinding::GetWalkableInputPos(this, pointDesc, block);
      }
      else
      {
        WalkableInputPos = std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/AStarPathFinding.cpp",
        "GetWalkableInputPos",
        40);
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v27, pointDesc);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v19,
        (const char (*)[26])" Point not in block range");
      common::milog::MiLogStream::~MiLogStream(&v27);
      WalkableInputPos = ToTheMoonPathFinding::GetWalkableInputPos(this, pointDesc, block);
    }
    std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStarPathFinding.cpp",
      "GetWalkableInputPos",
      32);
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v27, pointDesc);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])" Parsed failed.");
    common::milog::MiLogStream::~MiLogStream(&v27);
    WalkableInputPos = 0LL;
  }
  std::vector<float>::~vector((std::vector<float> *const)(v4 + 160));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 96));
  std::string::~string((void *)(v4 + 224));
  result = WalkableInputPos;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 53: range 000000000CBBA374-000000000CBBA6A7
void __cdecl ToTheMoonPathFinding::PathFindingTest(
        ToTheMoonPathFinding *const this,
        const std::string *suffix,
        ToTheMoonVector3 *startPos,
        ToTheMoonVector3 *endPos)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  char v8; // al
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  AStarPathFinder *v10; // r14
  std::shared_ptr<SVOBlock> p_block; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<DynamicNodesInfo> p_dynamicData; // [rsp+40h] [rbp-C0h] BYREF
  std::string __lhs; // [rsp+50h] [rbp-B0h] BYREF
  std::string v16; // [rsp+70h] [rbp-90h] BYREF
  char v17[112]; // [rsp+90h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 8 block:54";
  *(_QWORD *)(v4 + 16) = ToTheMoonPathFinding::PathFindingTest;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::operator+<char>(&__lhs, "E:\\Data\\SVOBlockData", suffix);
  std::operator+<char>(&v16, &__lhs, ".data");
  ProtoParser::ParseProtoBlock((const std::string *)(v4 + 32));
  std::string::~string(&v16);
  std::string::~string(&__lhs);
  if ( std::operator==<SVOBlock>((const std::shared_ptr<SVOBlock> *)(v4 + 32), 0LL)
    || std::operator==<AStarPathFinder>(&this->pathFinder, 0LL) )
  {
    goto LABEL_9;
  }
  v7 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7, 0LL);
  if ( !*(_QWORD *)v7 )
LABEL_9:
    v8 = 1;
  else
    v8 = 0;
  if ( !v8 )
  {
    v9 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9, 0LL);
    v10 = std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->pathFinder);
    std::shared_ptr<DynamicNodesInfo>::shared_ptr(&p_dynamicData, 0LL);
    std::shared_ptr<SVOBlock>::shared_ptr(&p_block, (const std::shared_ptr<SVOBlock> *)(v4 + 32));
    AStarPathFinder::BlockPathFinding(v10, startPos, endPos, &p_block, &p_dynamicData, All_0);
    std::shared_ptr<SVOBlock>::~shared_ptr(&p_block);
    std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicData);
  }
  std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v4 + 32));
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 66: range 000000000CBBA6A8-000000000CBBAA19
std::shared_ptr<std::vector<ToTheMoonVector3> > __cdecl ToTheMoonPathFinding::GetPath(
        ToTheMoonPathFinding *const this,
        const std::string *suffix,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::vector<int> *levelList,
        std::vector<long int> *indexList,
        bool useRefinedPath,
        bool useFullNeighbor,
        ConfigToTheMoon::AStarMethod astarMethod,
        const std::shared_ptr<DynamicPlayerData> *p_playerNodeData,
        const std::shared_ptr<SVOWorld> *p_worldData)
{
  std::shared_ptr<SVOWorld> *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  std::map<std::string,std::shared_ptr<SVOWorld>> *v14; // rax
  std::map<std::string,std::shared_ptr<SVOWorld>> *v15; // rax
  std::shared_ptr<std::vector<ToTheMoonVector3> > result; // rax
  std::map<std::string,std::shared_ptr<SVOWorld>> *v18; // rax
  std::map<std::string,std::shared_ptr<SVOWorld>>::mapped_type *v19; // rax
  AStarPathFinder *v20; // r14
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOWorld> > >::_Self __x; // [rsp+48h] [rbp-A8h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOWorld> > >::_Self __y; // [rsp+50h] [rbp-A0h] BYREF
  SVONode *finishNode; // [rsp+58h] [rbp-98h]
  std::shared_ptr<SVOWorld> p_world; // [rsp+60h] [rbp-90h] BYREF
  std::shared_ptr<DynamicPlayerData> p_dynamicData; // [rsp+70h] [rbp-80h] BYREF
  char v30[112]; // [rsp+80h] [rbp-70h] BYREF
  const std::shared_ptr<SVOWorld> *p_worldDataa; // [rsp+128h] [rbp+38h]

  v11 = (std::shared_ptr<SVOWorld> *)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v11 = (std::shared_ptr<SVOWorld> *)v12;
  }
  v11->_M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v11->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 8 world:73";
  v11[1]._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)ToTheMoonPathFinding::GetPath;
  v13 = (unsigned __int64)v11 >> 3;
  *(_DWORD *)(v13 + 2147450880) = -235802127;
  *(_DWORD *)(v13 + 2147450884) = -202178560;
  if ( std::operator==<SVOWorld>(p_worldDataa, 0LL)
    && std::operator==<std::map<std::string,std::shared_ptr<SVOWorld>>>(
         (const std::shared_ptr<std::map<std::string,std::shared_ptr<SVOWorld>> > *)&suffix->_anon_0,
         0LL)
    || (v14 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOWorld>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOWorld>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&suffix->_anon_0),
        __y._M_node = std::map<std::string,std::shared_ptr<SVOWorld>>::end(v14)._M_node,
        v15 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOWorld>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOWorld>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&suffix->_anon_0),
        __x._M_node = std::map<std::string,std::shared_ptr<SVOWorld>>::find(
                        v15,
                        (const std::map<std::string,std::shared_ptr<SVOWorld>>::key_type *)startPos)._M_node,
        std::operator==(&__x, &__y))
    || std::operator==<AStarPathFinder>((const std::shared_ptr<AStarPathFinder> *)&suffix[1]._anon_0, 0LL) )
  {
    std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
      (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
      0LL);
  }
  else
  {
    if ( std::operator==<SVOWorld>(p_worldDataa, 0LL) )
    {
      v18 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOWorld>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOWorld>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&suffix->_anon_0);
      v19 = std::map<std::string,std::shared_ptr<SVOWorld>>::operator[](
              v18,
              (const std::map<std::string,std::shared_ptr<SVOWorld>>::key_type *)startPos);
    }
    else
    {
      v19 = (std::map<std::string,std::shared_ptr<SVOWorld>>::mapped_type *)p_worldDataa;
    }
    std::shared_ptr<SVOWorld>::shared_ptr(v11 + 2, v19);
    v20 = std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&suffix[1]._anon_0);
    std::shared_ptr<DynamicPlayerData>::shared_ptr(
      &p_dynamicData,
      (const std::shared_ptr<DynamicPlayerData> *)p_worldData);
    std::shared_ptr<SVOWorld>::shared_ptr(&p_world, v11 + 2);
    finishNode = AStarPathFinder::WorldPathFinding(
                   v20,
                   endPos,
                   (const ToTheMoonVector3 *)levelList,
                   &p_world,
                   &p_dynamicData,
                   All_0);
    std::shared_ptr<SVOWorld>::~shared_ptr(&p_world);
    std::shared_ptr<DynamicPlayerData>::~shared_ptr(&p_dynamicData);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, endPos);
    ToTheMoonPathFinding::NodePathToPointPath(
      this,
      (SVONode *)suffix,
      (const ToTheMoonVector3 *)finishNode,
      endPos,
      levelList,
      indexList,
      useRefinedPath);
    std::shared_ptr<SVOWorld>::~shared_ptr(v11 + 2);
  }
  if ( v30 == (char *)v11 )
  {
    *(_QWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v11->_M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 81: range 000000000CBBAA1A-000000000CBBAD7B
std::shared_ptr<std::vector<ToTheMoonVector3> > __cdecl ToTheMoonPathFinding::GetPathInBlock(
        ToTheMoonPathFinding *const this,
        const std::string *suffix,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::vector<int> *levelList,
        std::vector<long int> *indexList,
        bool useRefinedPath,
        bool useFullNeighbor,
        ConfigToTheMoon::AStarMethod astarMethod,
        const std::shared_ptr<DynamicNodesInfo> *p_playerNodeData,
        const std::shared_ptr<SVOBlock> *p_blockData)
{
  std::shared_ptr<SVOBlock> *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  std::map<std::string,std::shared_ptr<SVOBlock>> *v14; // rax
  std::map<std::string,std::shared_ptr<SVOBlock>> *v15; // rax
  std::shared_ptr<std::vector<ToTheMoonVector3> > result; // rax
  std::map<std::string,std::shared_ptr<SVOBlock>> *v18; // rax
  std::map<std::string,std::shared_ptr<SVOBlock>>::mapped_type *v19; // rax
  AStarPathFinder *v20; // r14
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+48h] [rbp-A8h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+50h] [rbp-A0h] BYREF
  SVONode *finishNode; // [rsp+58h] [rbp-98h]
  std::shared_ptr<SVOBlock> p_block; // [rsp+60h] [rbp-90h] BYREF
  std::shared_ptr<DynamicNodesInfo> p_dynamicData; // [rsp+70h] [rbp-80h] BYREF
  char v30[112]; // [rsp+80h] [rbp-70h] BYREF
  const std::shared_ptr<SVOBlock> *p_blockDataa; // [rsp+128h] [rbp+38h]

  v11 = (std::shared_ptr<SVOBlock> *)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v11 = (std::shared_ptr<SVOBlock> *)v12;
  }
  v11->_M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v11->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 8 block:87";
  v11[1]._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)ToTheMoonPathFinding::GetPathInBlock;
  v13 = (unsigned __int64)v11 >> 3;
  *(_DWORD *)(v13 + 2147450880) = -235802127;
  *(_DWORD *)(v13 + 2147450884) = -202178560;
  if ( std::operator==<SVOBlock>(p_blockDataa, 0LL)
    && std::operator==<std::map<std::string,std::shared_ptr<SVOBlock>>>(
         (const std::shared_ptr<std::map<std::string,std::shared_ptr<SVOBlock>> > *)suffix,
         0LL)
    || (v14 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)suffix),
        __y._M_node = std::map<std::string,std::shared_ptr<SVOBlock>>::end(v14)._M_node,
        v15 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)suffix),
        __x._M_node = std::map<std::string,std::shared_ptr<SVOBlock>>::find(
                        v15,
                        (const std::map<std::string,std::shared_ptr<SVOBlock>>::key_type *)startPos)._M_node,
        std::operator==(&__x, &__y))
    || std::operator==<AStarPathFinder>((const std::shared_ptr<AStarPathFinder> *)&suffix[1]._anon_0, 0LL) )
  {
    std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
      (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
      0LL);
  }
  else
  {
    if ( std::operator==<SVOBlock>(p_blockDataa, 0LL) )
    {
      v18 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)suffix);
      v19 = std::map<std::string,std::shared_ptr<SVOBlock>>::operator[](
              v18,
              (const std::map<std::string,std::shared_ptr<SVOBlock>>::key_type *)startPos);
    }
    else
    {
      v19 = (std::map<std::string,std::shared_ptr<SVOBlock>>::mapped_type *)p_blockDataa;
    }
    std::shared_ptr<SVOBlock>::shared_ptr(v11 + 2, v19);
    v20 = std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&suffix[1]._anon_0);
    std::shared_ptr<DynamicNodesInfo>::shared_ptr(
      &p_dynamicData,
      (const std::shared_ptr<DynamicNodesInfo> *)p_blockData);
    std::shared_ptr<SVOBlock>::shared_ptr(&p_block, v11 + 2);
    finishNode = AStarPathFinder::BlockPathFinding(
                   v20,
                   endPos,
                   (const ToTheMoonVector3 *)levelList,
                   &p_block,
                   &p_dynamicData,
                   All_0);
    std::shared_ptr<SVOBlock>::~shared_ptr(&p_block);
    std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicData);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, endPos);
    ToTheMoonPathFinding::NodePathToPointPath(
      this,
      (SVONode *)suffix,
      (const ToTheMoonVector3 *)finishNode,
      endPos,
      levelList,
      indexList,
      useRefinedPath);
    std::shared_ptr<SVOBlock>::~shared_ptr(v11 + 2);
  }
  if ( v30 == (char *)v11 )
  {
    *(_QWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v11->_M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 94: range 000000000CBBAD7C-000000000CBBB628
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<std::vector<ToTheMoonVector3> > __cdecl ToTheMoonPathFinding::NodePathToPointPath(
        ToTheMoonPathFinding *const this,
        SVONode *finishNode,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::vector<int> *levelList,
        std::vector<long int> *indexList,
        bool useRefinedPath)
{
  unsigned __int64 p_M_refcount; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  std::shared_ptr<std::vector<ToTheMoonVector3> > result; // rax
  SVONode *v12; // rax
  std::_Hashtable<int,std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,std::allocator<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > > >,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::__node_base *p_M_before_begin; // rsi
  RefinedPathGenerator *v14; // r14
  std::__shared_ptr<AStarPathFinder,(__gnu_cxx::_Lock_policy)2>::element_type *v15; // r9
  const std::vector<ToTheMoonVector3>::value_type *v16; // rsi
  std::vector<ToTheMoonVector3> *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  SVONode *v20; // rax
  __int64 v21; // rax
  std::vector<ToTheMoonVector3> *v22; // rax
  __int64 v23; // rax
  SVONode *v24; // rax
  std::vector<ToTheMoonVector3> *v25; // rax
  std::vector<int>::value_type __x; // [rsp+48h] [rbp-148h] BYREF
  int i; // [rsp+4Ch] [rbp-144h]
  int cnt; // [rsp+50h] [rbp-140h]
  int maxcnt; // [rsp+54h] [rbp-13Ch]
  std::vector<long int>::value_type v35; // [rsp+58h] [rbp-138h] BYREF
  AStarPathFinder v36; // [rsp+60h] [rbp-130h] BYREF
  char v37; // [rsp+1A8h] [rbp+18h]

  p_M_refcount = (unsigned __int64)&v36._astarManager._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(192LL);
    if ( v8 )
      p_M_refcount = v8;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "4 32 12 5 p:177 64 16 14 finishAstar:99 96 16 7 res:103 128 24 8 path:113";
  *(_QWORD *)(p_M_refcount + 16) = ToTheMoonPathFinding::NodePathToPointPath;
  v9 = (_DWORD *)(p_M_refcount >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219020288;
  v9[536862722] = -219021312;
  v9[536862723] = -219021312;
  v9[536862724] = -218103808;
  v9[536862725] = -202116109;
  if ( !startPos
    || std::operator==<AStarPathFinder>((const std::shared_ptr<AStarPathFinder> *)&finishNode->childNum, 0LL)
    || std::operator==<RefinedPathGenerator>((const std::shared_ptr<RefinedPathGenerator> *)&finishNode->parent, 0LL)
    || !levelList
    || !endPos )
  {
    std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
      (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
      0LL);
  }
  else
  {
    v12 = (SVONode *)std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&finishNode->childNum);
    AStarPathFinder::GetAStarInfo((AStarPathFinder *const)(p_M_refcount + 64), v12);
    if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(p_M_refcount + 64), 0LL) )
    {
      std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
        (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
        0LL);
    }
    else
    {
      std::make_shared<std::vector<ToTheMoonVector3>>();
      p_M_before_begin = 0LL;
      if ( std::operator==<std::vector<ToTheMoonVector3>>(
             (const std::shared_ptr<std::vector<ToTheMoonVector3> > *)(p_M_refcount + 96),
             0LL) )
      {
        std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
          (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
          0LL);
      }
      else
      {
        maxcnt = 0x10000;
        cnt = 0;
        if ( v37 )
        {
          std::vector<ToTheMoonVector3>::vector((std::vector<ToTheMoonVector3> *const)(p_M_refcount + 128));
          v14 = std::__shared_ptr_access<RefinedPathGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RefinedPathGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)&finishNode->parent);
          v15 = std::__shared_ptr<AStarPathFinder,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<AStarPathFinder,(__gnu_cxx::_Lock_policy)2> *const)&finishNode->childNum);
          v16 = startPos;
          RefinedPathGenerator::GeneratePath(
            v14,
            (SVONode *)startPos,
            endPos,
            (const ToTheMoonVector3 *)levelList,
            (std::vector<ToTheMoonVector3> *)(p_M_refcount + 128),
            v15);
          for ( i = 0;
                i < std::vector<ToTheMoonVector3>::size((const std::vector<ToTheMoonVector3> *const)(p_M_refcount + 128));
                ++i )
          {
            v17 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
            v16 = std::vector<ToTheMoonVector3>::operator[](
                    (std::vector<ToTheMoonVector3> *const)(p_M_refcount + 128),
                    i);
            std::vector<ToTheMoonVector3>::push_back(v17, v16);
          }
          do
          {
            v18 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
            if ( *(_BYTE *)(((unsigned __int64)(v18 + 40) >> 3) + 0x7FFF8000) )
              v18 = __asan_report_load8(v18 + 40, v16);
            if ( !*(_QWORD *)(v18 + 40) )
              break;
            ++cnt;
            __x = SVODataProcessor::GetNodeLevel((const SVONode *)startPos);
            std::vector<int>::push_back((std::vector<int> *const)indexList, &__x);
            if ( *(_BYTE *)(((unsigned __int64)&startPos[2] >> 3) + 0x7FFF8000) )
              __asan_report_load8(&startPos[2], &__x);
            v35 = *(_QWORD *)&startPos[2].x;
            std::vector<long>::push_back((std::vector<long int> *const)useRefinedPath, &v35);
            v19 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
            if ( *(_BYTE *)(((unsigned __int64)(v19 + 40) >> 3) + 0x7FFF8000) )
              v19 = __asan_report_load8(v19 + 40, &v35);
            startPos = *(const ToTheMoonVector3 **)(v19 + 40);
            v20 = (SVONode *)std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&finishNode->childNum);
            AStarPathFinder::GetAStarInfo(&v36, v20);
            std::shared_ptr<AStarInfo>::operator=(
              (std::shared_ptr<AStarInfo> *const)(p_M_refcount + 64),
              (std::shared_ptr<AStarInfo> *)&v36);
            std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)&v36);
            v16 = 0LL;
            if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(p_M_refcount + 64), 0LL) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v36._queryData.astarInfoMap._M_h._M_rehash_policy,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "./src/tothemoon/Internal/AStarPathFinding/AStarPathFinding.cpp",
                "NodePathToPointPath",
                129);
              common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                (common::milog::MiLogStream *const)&v36._queryData.astarInfoMap._M_h._M_rehash_policy,
                (const char (*)[20])"finishAstar is null");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v36._queryData.astarInfoMap._M_h._M_rehash_policy);
              break;
            }
          }
          while ( cnt <= maxcnt );
          __x = SVODataProcessor::GetNodeLevel((const SVONode *)startPos);
          std::vector<int>::push_back((std::vector<int> *const)indexList, &__x);
          if ( *(_BYTE *)(((unsigned __int64)&startPos[2] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&startPos[2], &__x);
          v35 = *(_QWORD *)&startPos[2].x;
          std::vector<long>::push_back((std::vector<long int> *const)useRefinedPath, &v35);
          std::vector<ToTheMoonVector3>::~vector((std::vector<ToTheMoonVector3> *const)(p_M_refcount + 128));
        }
        else
        {
          do
          {
            v21 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
            if ( *(_BYTE *)(((unsigned __int64)(v21 + 40) >> 3) + 0x7FFF8000) )
              v21 = __asan_report_load8(v21 + 40, p_M_before_begin);
            if ( !*(_QWORD *)(v21 + 40) )
              break;
            ++cnt;
            ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(p_M_refcount + 32));
            SVODataProcessor::GetCenterPos((const SVONode *)startPos, (ToTheMoonVector3 *)(p_M_refcount + 32));
            v22 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
            std::vector<ToTheMoonVector3>::push_back(
              v22,
              (const std::vector<ToTheMoonVector3>::value_type *)(p_M_refcount + 32));
            __x = SVODataProcessor::GetNodeLevel((const SVONode *)startPos);
            std::vector<int>::push_back((std::vector<int> *const)indexList, &__x);
            if ( *(_BYTE *)(((unsigned __int64)&startPos[2] >> 3) + 0x7FFF8000) )
              __asan_report_load8(&startPos[2], &__x);
            v35 = *(_QWORD *)&startPos[2].x;
            std::vector<long>::push_back((std::vector<long int> *const)useRefinedPath, &v35);
            v23 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
            if ( *(_BYTE *)(((unsigned __int64)(v23 + 40) >> 3) + 0x7FFF8000) )
              v23 = __asan_report_load8(v23 + 40, &v35);
            startPos = *(const ToTheMoonVector3 **)(v23 + 40);
            v24 = (SVONode *)std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&finishNode->childNum);
            AStarPathFinder::GetAStarInfo(
              (AStarPathFinder *const)&v36._queryData.astarInfoMap._M_h._M_before_begin,
              v24);
            p_M_before_begin = &v36._queryData.astarInfoMap._M_h._M_before_begin;
            std::shared_ptr<AStarInfo>::operator=(
              (std::shared_ptr<AStarInfo> *const)(p_M_refcount + 64),
              (std::shared_ptr<AStarInfo> *)&v36._queryData.astarInfoMap._M_h._M_before_begin);
            std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)&v36._queryData.astarInfoMap._M_h._M_before_begin);
          }
          while ( cnt <= maxcnt );
          ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(p_M_refcount + 32));
          SVODataProcessor::GetCenterPos((const SVONode *)startPos, (ToTheMoonVector3 *)(p_M_refcount + 32));
          v25 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
          std::vector<ToTheMoonVector3>::push_back(
            v25,
            (const std::vector<ToTheMoonVector3>::value_type *)(p_M_refcount + 32));
          __x = SVODataProcessor::GetNodeLevel((const SVONode *)startPos);
          std::vector<int>::push_back((std::vector<int> *const)indexList, &__x);
          if ( *(_BYTE *)(((unsigned __int64)&startPos[2] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&startPos[2], &__x);
          v35 = *(_QWORD *)&startPos[2].x;
          std::vector<long>::push_back((std::vector<long int> *const)useRefinedPath, &v35);
        }
        std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
          (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
          (std::shared_ptr<std::vector<ToTheMoonVector3> > *)(p_M_refcount + 96));
      }
      std::shared_ptr<std::vector<ToTheMoonVector3>>::~shared_ptr((std::shared_ptr<std::vector<ToTheMoonVector3> > *const)(p_M_refcount + 96));
    }
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(p_M_refcount + 64));
  }
  if ( &v36._astarManager._M_refcount == (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 190: range 000000000CBBB62A-000000000CBBBB08
bool __cdecl ToTheMoonPathFinding::AddObstacle(
        ToTheMoonPathFinding *const this,
        std::shared_ptr<DynamicNodesInfo> *p_dynamicData,
        const std::string *suffix,
        int handle_id,
        NodeObstacleType type,
        const ToTheMoonVector3 *center,
        const ToTheMoonVector3 *halfExtents,
        const ToTheMoonQuaternion *rotation,
        bool useEdge)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // r12
  std::map<std::string,std::shared_ptr<SVOBlock>> *v12; // rax
  std::map<std::string,std::shared_ptr<SVOBlock>> *v13; // rdx
  common::milog::MiLogStream *v15; // rdx
  bool v16; // r14
  VoxelCutter *v18; // r14
  std::map<std::string,std::shared_ptr<SVOBlock>> *v19; // rdx
  std::map<std::string,std::shared_ptr<SVOBlock>>::mapped_type *v20; // rax
  bool result; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+30h] [rbp-110h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+38h] [rbp-108h] BYREF
  std::shared_ptr<SVOBlock> p_staticData; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+70h] [rbp-D0h] BYREF

  v9 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(160LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "1 48 72 12 obstacle:202";
  *(_QWORD *)(v9 + 16) = ToTheMoonPathFinding::AddObstacle;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = 61937;
  v11[536862723] = -218103808;
  v11[536862724] = -202116109;
  if ( std::operator==<std::map<std::string,std::shared_ptr<SVOBlock>>>(&this->block_data_map, 0LL)
    || (v12 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)this),
        __y._M_node = std::map<std::string,std::shared_ptr<SVOBlock>>::end(v12)._M_node,
        v13 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)this),
        __x._M_node = std::map<std::string,std::shared_ptr<SVOBlock>>::find(v13, suffix)._M_node,
        std::operator==(&__x, &__y)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/AStarPathFinding.cpp",
      "AddObstacle",
      193);
    v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v28,
            (const char (*)[47])"[ToTheMoon][AddObs] No static data for suffix ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, suffix);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v16 = 0;
  }
  else if ( std::operator==<VoxelCutter>(&this->voxelCutter, 0LL) || !center || !halfExtents || !rotation )
  {
    v16 = 0;
  }
  else
  {
    v18 = std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->voxelCutter);
    v19 = std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<std::string,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    v20 = std::map<std::string,std::shared_ptr<SVOBlock>>::operator[](v19, suffix);
    std::shared_ptr<SVOBlock>::shared_ptr(&p_staticData, v20);
    VoxelCutter::SetCurrentStaticData(v18, &p_staticData);
    std::shared_ptr<SVOBlock>::~shared_ptr(&p_staticData);
    if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(center, 12LL);
    }
    if ( ((unsigned __int8)halfExtents & 7) >= *(_BYTE *)(((unsigned __int64)halfExtents >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)halfExtents >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&halfExtents->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)halfExtents + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&halfExtents->z + 3) >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load_n(halfExtents, 12LL);
    }
    if ( ((unsigned __int8)rotation & 7) >= *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&rotation->w + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)rotation + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&rotation->w + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(rotation, 16LL);
    }
    NodeObstacle::NodeObstacle((NodeObstacle *const)(v9 + 48), type, *center, *halfExtents, *rotation);
    v16 = 1;
    NodeObstacle::~NodeObstacle((NodeObstacle *const)(v9 + 48));
  }
  result = v16;
  if ( v29 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 207: range 000000000CBBBB0A-000000000CBBBBB3
bool __cdecl ToTheMoonPathFinding::RemoveObstacle(
        ToTheMoonPathFinding *const this,
        std::shared_ptr<DynamicPlayerData> *p_dynamic_data,
        const std::string *suffix,
        int handle_id)
{
  bool v4; // bl
  VoxelCutter *v5; // rbx
  std::shared_ptr<DynamicPlayerData> p_dynamicData; // [rsp+20h] [rbp-20h] BYREF

  if ( std::operator==<VoxelCutter>(&this->voxelCutter, 0LL) )
    return 0;
  v5 = std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->voxelCutter);
  std::shared_ptr<DynamicPlayerData>::shared_ptr(&p_dynamicData, p_dynamic_data);
  v4 = VoxelCutter::RemoveObstacle(v5, &p_dynamicData, handle_id, 1);
  std::shared_ptr<DynamicPlayerData>::~shared_ptr(&p_dynamicData);
  return v4;
};

// Line 214: range 000000000CBBBBB4-000000000CBBBCB5
void __cdecl ToTheMoonPathFinding::Init(ToTheMoonPathFinding *const this)
{
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOBlock>> > __r; // [rsp+10h] [rbp-10h] BYREF

  std::make_shared<std::map<std::string,std::shared_ptr<SVOBlock>>>();
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOBlock>>>::operator=(&this->block_data_map, &__r);
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOBlock>>>::~shared_ptr(&__r);
  std::make_shared<std::map<std::string,std::shared_ptr<SVOWorld>>>();
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOWorld>>>::operator=(
    &this->world_data_map,
    (std::shared_ptr<std::map<std::string,std::shared_ptr<SVOWorld>> > *)&__r);
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOWorld>>>::~shared_ptr((std::shared_ptr<std::map<std::string,std::shared_ptr<SVOWorld>> > *const)&__r);
  std::make_shared<RefinedPathGenerator>();
  std::shared_ptr<RefinedPathGenerator>::operator=(&this->pathGenerator, (std::shared_ptr<RefinedPathGenerator> *)&__r);
  std::shared_ptr<RefinedPathGenerator>::~shared_ptr((std::shared_ptr<RefinedPathGenerator> *const)&__r);
  std::make_shared<AStarPathFinder>();
  std::shared_ptr<AStarPathFinder>::operator=(&this->pathFinder, (std::shared_ptr<AStarPathFinder> *)&__r);
  std::shared_ptr<AStarPathFinder>::~shared_ptr((std::shared_ptr<AStarPathFinder> *const)&__r);
  std::make_shared<VoxelCutter>();
  std::shared_ptr<VoxelCutter>::operator=(&this->voxelCutter, (std::shared_ptr<VoxelCutter> *)&__r);
  std::shared_ptr<VoxelCutter>::~shared_ptr((std::shared_ptr<VoxelCutter> *const)&__r);
  ToTheMoonPathFinding::LoadData(this);
};

// Line 227: range 000000000CBBBCB6-000000000CBBBCC0
void __cdecl ToTheMoonPathFinding::LoadData(ToTheMoonPathFinding *const this)
{
  ;
};

// Line 233: range 000000000CBBBCC2-000000000CBBBCCC
void __cdecl ToTheMoonPathFinding::Fini(ToTheMoonPathFinding *const this)
{
  ;
};
