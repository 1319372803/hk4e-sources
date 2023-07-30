// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataProcess/block_linker.cpp

// Line 13: range 000000000CBD0782-000000000CBD09AD
void __cdecl BlockLinker::LinkBlocks(
        std::shared_ptr<SVOBlock> *p_block1,
        std::shared_ptr<SVOBlock> *p_block2,
        NodePairMap *nodeDict1,
        NodePairMap *nodeDict2,
        bool needTrim)
{
  std::shared_ptr<SVOBlock> v8; // [rsp+30h] [rbp-30h] BYREF
  std::shared_ptr<SVOBlock> v9; // [rsp+40h] [rbp-20h] BYREF

  std::shared_ptr<SVOBlock>::shared_ptr(&v9, p_block2);
  std::shared_ptr<SVOBlock>::shared_ptr(&v8, p_block1);
  BlockLinker::UpdateNeighborsForOutermostNode(&v8, &v9, nodeDict1, nodeDict2);
  std::shared_ptr<SVOBlock>::~shared_ptr(&v8);
  std::shared_ptr<SVOBlock>::~shared_ptr(&v9);
  std::shared_ptr<SVOBlock>::shared_ptr(&v9, p_block1);
  std::shared_ptr<SVOBlock>::shared_ptr(&v8, p_block2);
  BlockLinker::UpdateNeighborsForOutermostNode(&v8, &v9, nodeDict2, nodeDict1);
  std::shared_ptr<SVOBlock>::~shared_ptr(&v8);
  std::shared_ptr<SVOBlock>::~shared_ptr(&v9);
  if ( needTrim )
  {
    std::shared_ptr<SVOBlock>::shared_ptr(&v9, p_block2);
    std::shared_ptr<SVOBlock>::shared_ptr(&v8, p_block1);
    BlockLinker::RecheckEdgeBlcokedForEdgeNodes(&v8, &v9, nodeDict1);
    std::shared_ptr<SVOBlock>::~shared_ptr(&v8);
    std::shared_ptr<SVOBlock>::~shared_ptr(&v9);
    std::shared_ptr<SVOBlock>::shared_ptr(&v9, p_block1);
    std::shared_ptr<SVOBlock>::shared_ptr(&v8, p_block2);
    BlockLinker::RecheckEdgeBlcokedForEdgeNodes(&v8, &v9, nodeDict2);
    std::shared_ptr<SVOBlock>::~shared_ptr(&v8);
    std::shared_ptr<SVOBlock>::~shared_ptr(&v9);
  }
};

// Line 27: range 000000000CBD09AE-000000000CBD17A0
void __cdecl BlockLinker::UpdateNeighborsForOutermostNode(
        std::shared_ptr<SVOBlock> *p_block1,
        std::shared_ptr<SVOBlock> *p_block2,
        NodePairMap *nodeDict1,
        NodePairMap *nodeDict2)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char v13; // al
  std::shared_ptr<SVOBlock> *v14; // rsi
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  int v16; // r14d
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  int *blockIndex; // rax
  int v20; // r14d
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  char v22; // cl
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  const ToTheMoonVector3 *v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r15d
  int v29; // r14d
  __m128i v30; // xmm0
  int v31; // r15d
  int v32; // r14d
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  char v36; // dl
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  char v39; // dl
  unsigned __int64 v40; // rax
  const std::vector<long unsigned int> *v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  SVONode *v48; // r14
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // r14
  unsigned __int64 v52; // rax
  float v53; // [rsp+Ch] [rbp-2C4h]
  int level; // [rsp+3Ch] [rbp-294h]
  Const::Direction laterBlockDir; // [rsp+40h] [rbp-290h]
  int neighborIndex; // [rsp+44h] [rbp-28Ch]
  float levelSize; // [rsp+4Ch] [rbp-284h]
  int planeNodeNumX; // [rsp+50h] [rbp-280h]
  int planeNodeNumZ; // [rsp+54h] [rbp-27Ch]
  std::vector<std::vector<long unsigned int>>::iterator __for_begin; // [rsp+58h] [rbp-278h] BYREF
  std::vector<std::vector<long unsigned int>>::iterator __for_end; // [rsp+60h] [rbp-270h] BYREF
  std::vector<std::vector<long unsigned int>> *__for_range; // [rsp+68h] [rbp-268h]
  SVONode *node; // [rsp+70h] [rbp-260h]
  SVONode *neighbor; // [rsp+78h] [rbp-258h]
  std::shared_ptr<SVOBlock> v68; // [rsp+80h] [rbp-250h] BYREF
  std::shared_ptr<SVOBlock> v69; // [rsp+90h] [rbp-240h] BYREF
  common::milog::MiLogStream v70; // [rsp+A0h] [rbp-230h] BYREF
  char v71[528]; // [rsp+C0h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 12 20 blockOriginOffset:40 64 12 16 basePosOffset:46 96 12 18 baseIndexOffset:49 128 12 14 "
                        "indexOffset:64 160 24 22 outermostPosIndexes:72 224 24 14 posIndexVec:74 288 24 11 posIndex:76 3"
                        "52 24 19 neighborPosIndex:83 416 24 22 neighborPosIndexArr:87";
  *(_QWORD *)(v4 + 16) = BlockLinker::UpdateNeighborsForOutermostNode;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219020288;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862729] = -234881024;
  v6[536862730] = -218959118;
  v6[536862731] = -234881024;
  v6[536862732] = -218959118;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  if ( std::operator==<SVOBlock>(p_block1, 0LL) || std::operator==<SVOBlock>(p_block2, 0LL) )
    goto LABEL_22;
  v7 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7, 0LL);
  if ( !*(_QWORD *)v7 )
    goto LABEL_22;
  v8 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block2);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8, 0LL);
  if ( !*(_QWORD *)v8 )
    goto LABEL_22;
  v9 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(v9, 0LL);
  v10 = *(_QWORD *)v9;
  if ( *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8(v10 + 24, 0LL);
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_22;
  v11 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block2);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8(v11, 0LL);
  v12 = *(_QWORD *)v11;
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 24) >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8(v12 + 24, 0LL);
  if ( *(_QWORD *)(v12 + 24) )
    v13 = 0;
  else
LABEL_22:
    v13 = 1;
  if ( !v13 )
  {
    std::shared_ptr<SVOBlock>::shared_ptr(&v69, p_block2);
    std::shared_ptr<SVOBlock>::shared_ptr(&v68, p_block1);
    v14 = &v69;
    laterBlockDir = BlockLinker::BlockIndexToDirectionRelation(&v68, &v69);
    std::shared_ptr<SVOBlock>::~shared_ptr(&v68);
    std::shared_ptr<SVOBlock>::~shared_ptr(&v69);
    neighborIndex = SVODataProcessor::DirectionToNeighborIndex(laterBlockDir);
    v15 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block2);
    if ( *(_BYTE *)(((unsigned __int64)&v15->blockIndex[1] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v15->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v15->blockIndex[1]);
    }
    v16 = v15->blockIndex[1];
    v17 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
    if ( *(_BYTE *)(((unsigned __int64)&v17->blockIndex[1] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v17->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v17->blockIndex[1]);
    }
    v53 = (float)((v16 - v17->blockIndex[1]) << 10);
    v18 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block2);
    blockIndex = v18->blockIndex;
    if ( *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)blockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(blockIndex);
    }
    v20 = v18->blockIndex[0];
    v21 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
    v22 = *(_BYTE *)(((unsigned __int64)v21->blockIndex >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v22 != 0;
    if ( v22 != 0 && (char)((((_BYTE)v21 + 12) & 7) + 3) >= v22 )
      __asan_report_load4(v21->blockIndex);
    ToTheMoonVector3::ToTheMoonVector3(
      (ToTheMoonVector3 *const)(v4 + 32),
      (float)((v20 - v21->blockIndex[0]) << 10),
      0.0,
      v53);
    v23 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block2);
    if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
      v23 = __asan_report_load8(v23, v14);
    v24 = *(_QWORD *)v23;
    if ( *(_BYTE *)(((unsigned __int64)(v24 + 24) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_load8(v24 + 24, v14);
    v25 = *(const ToTheMoonVector3 **)(v24 + 24);
    v26 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      v26 = __asan_report_load8(v26, v14);
    v27 = *(_QWORD *)v26;
    if ( *(_BYTE *)(((unsigned __int64)(v27 + 24) >> 3) + 0x7FFF8000) )
      v27 = __asan_report_load8(v27 + 24, v14);
    *(ToTheMoonVector3 *)(v4 + 128) = ToTheMoonVector3::Diff(v25, (const ToTheMoonVector3 *)*(_QWORD *)(v27 + 24));
    *(ToTheMoonVector3 *)(v4 + 64) = ToTheMoonVector3::Diff(
                                       (const ToTheMoonVector3 *const)(v4 + 128),
                                       (const ToTheMoonVector3 *)(v4 + 32));
    v28 = (int)std::round(*(float *)(v4 + 72));
    v29 = (int)std::round(*(float *)(v4 + 68));
    v30 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 64));
    *(float *)v30.m128i_i32 = std::round(*(float *)v30.m128i_i32);
    IntVector3::IntVector3((IntVector3 *const)(v4 + 96), (int)*(float *)v30.m128i_i32, v29, v28);
    for ( level = 9; level >= 0; --level )
    {
      *(float *)v30.m128i_i32 = SVODataProcessor::GetLevelSize(level);
      levelSize = COERCE_FLOAT(_mm_cvtsi128_si32(v30));
      v30 = 0LL;
      if ( levelSize == 0.0 )
      {
        common::milog::MiLogStream::create(
          &v70,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/DataProcess/block_linker.cpp",
          "UpdateNeighborsForOutermostNode",
          61);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v70,
          (const char (*)[30])"level size should not be zero");
        common::milog::MiLogStream::~MiLogStream(&v70);
        break;
      }
      v31 = (int)std::round((float)*(int *)(v4 + 104) / levelSize);
      v32 = (int)std::round((float)*(int *)(v4 + 100) / levelSize);
      v33 = (unsigned int)(int)std::round((float)*(int *)(v4 + 96) / levelSize);
      IntVector3::IntVector3((IntVector3 *const)(v4 + 128), v33, v32, v31);
      v34 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
      if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
        v34 = __asan_report_load8(v34, v33);
      v35 = *(_QWORD *)v34;
      v36 = *(_BYTE *)(((unsigned __int64)(v35 + 32) >> 3) + 0x7FFF8000);
      LOBYTE(v33) = v36 != 0;
      if ( v36 != 0 && v36 <= 3 )
        *(double *)v30.m128i_i64 = __asan_report_load4(v35 + 32);
      planeNodeNumX = (int)std::ceil((float)*(int *)(v35 + 32) / levelSize);
      v37 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        v37 = __asan_report_load8(v37, v33);
      v38 = *(_QWORD *)v37;
      v39 = *(_BYTE *)(((unsigned __int64)(v38 + 40) >> 3) + 0x7FFF8000);
      LOBYTE(v33) = v39 != 0;
      if ( v39 != 0 && v39 <= 3 )
        *(double *)v30.m128i_i64 = __asan_report_load4(v38 + 40);
      planeNodeNumZ = (int)std::ceil((float)*(int *)(v38 + 40) / levelSize);
      std::vector<std::vector<unsigned long>>::vector((std::vector<std::vector<long unsigned int>> *const)(v4 + 160));
      v40 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
      if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        v40 = __asan_report_load8(v40, v33);
      BlockLinker::LayerOutermostNodeIndex(
        *(SVOStructure **)v40,
        laterBlockDir,
        level,
        (std::vector<std::vector<long unsigned int>> *)(v4 + 160));
      __for_range = (std::vector<std::vector<long unsigned int>> *)(v4 + 160);
      __for_begin._M_current = std::vector<std::vector<unsigned long>>::begin((std::vector<std::vector<long unsigned int>> *const)(v4 + 160))._M_current;
      __for_end._M_current = std::vector<std::vector<unsigned long>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>(
                &__for_begin,
                &__for_end) )
      {
        v41 = __gnu_cxx::__normal_iterator<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>::operator*(&__for_begin);
        std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 224), v41);
        v42 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                  (std::vector<long unsigned int> *const)(v4 + 224),
                                  0LL);
        if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
          v42 = __asan_report_load8(v42, 0LL);
        *(_QWORD *)(v4 + 288) = *(_QWORD *)v42;
        v43 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                  (std::vector<long unsigned int> *const)(v4 + 224),
                                  1uLL);
        if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
          v43 = __asan_report_load8(v43, 1LL);
        *(_QWORD *)(v4 + 296) = *(_QWORD *)v43;
        v44 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                  (std::vector<long unsigned int> *const)(v4 + 224),
                                  2uLL);
        if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
          v44 = __asan_report_load8(v44, 2LL);
        *(_QWORD *)(v4 + 304) = *(_QWORD *)v44;
        node = NodePairMap::FindNode(nodeDict1, level, (uint64_t *)(v4 + 288));
        if ( node )
        {
          std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 352));
          BlockLinker::CrossBlockPosIndexForOutermostNode(
            (uint64_t *)(v4 + 288),
            (std::vector<long unsigned int> *)(v4 + 352),
            laterBlockDir,
            planeNodeNumX,
            planeNodeNumZ);
          v45 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                    (std::vector<long unsigned int> *const)(v4 + 352),
                                    0LL);
          if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
            v45 = __asan_report_load8(v45, 0LL);
          *(_QWORD *)(v4 + 416) = *(_QWORD *)v45 - *(int *)(v4 + 128);
          v46 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                    (std::vector<long unsigned int> *const)(v4 + 352),
                                    1uLL);
          if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
            v46 = __asan_report_load8(v46, 1LL);
          *(_QWORD *)(v4 + 424) = *(_QWORD *)v46 - *(int *)(v4 + 132);
          v47 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                    (std::vector<long unsigned int> *const)(v4 + 352),
                                    2uLL);
          if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
            v47 = __asan_report_load8(v47, 2LL);
          *(_QWORD *)(v4 + 432) = *(_QWORD *)v47 - *(int *)(v4 + 136);
          neighbor = NodePairMap::FindNode(nodeDict2, level, (uint64_t *)(v4 + 416));
          if ( neighbor )
          {
            v48 = neighbor;
            v49 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->neighbors, neighborIndex);
            if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
              v49 = __asan_report_store8();
            *(_QWORD *)v49 = v48;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&node->parent >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node->parent, (unsigned int)level);
            if ( node->parent )
            {
              v50 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->parent->neighbors, neighborIndex);
              if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
                v50 = __asan_report_load8(v50, neighborIndex);
              v51 = *(_QWORD *)v50;
              v52 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->neighbors, neighborIndex);
              if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
                v52 = __asan_report_store8();
              *(_QWORD *)v52 = v51;
            }
          }
          std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 352));
        }
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 224));
        __gnu_cxx::__normal_iterator<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>::operator++(&__for_begin);
      }
      std::vector<std::vector<unsigned long>>::~vector((std::vector<std::vector<long unsigned int>> *const)(v4 + 160));
    }
  }
  if ( v71 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 100: range 000000000CBD17A2-000000000CBD1EB8
void __cdecl BlockLinker::LinkWorld(
        std::shared_ptr<SVOWorld> *p_world,
        std::map<IntPair,std::shared_ptr<NodePairMap>> *p_worldNodeMap)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const std::pair<const IntPair,std::shared_ptr<SVOBlock> > *v6; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v8; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v10; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v12; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v13; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v15; // rax
  NodePairMap *v16; // r15
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v17; // rax
  NodePairMap *v18; // r14
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v20; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v21; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v23; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v25; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v27; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v28; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v30; // rax
  NodePairMap *v31; // r15
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v32; // rax
  NodePairMap *v33; // r14
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v35; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v36; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<IntPair,std::shared_ptr<SVOBlock>>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self v39; // [rsp+38h] [rbp-118h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self v40; // [rsp+40h] [rbp-110h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+48h] [rbp-108h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self __x; // [rsp+50h] [rbp-100h] BYREF
  std::map<IntPair,std::shared_ptr<SVOBlock>> *__for_range; // [rsp+58h] [rbp-F8h]
  std::shared_ptr<SVOBlock> p_block1; // [rsp+60h] [rbp-F0h] BYREF
  std::shared_ptr<SVOBlock> p_block2; // [rsp+70h] [rbp-E0h] BYREF
  char v46[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 key1:109 64 8 8 key2:117 96 24 8 item:105";
  *(_QWORD *)(v2 + 16) = BlockLinker::LinkWorld;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( !std::operator==<SVOWorld>(p_world, 0LL) )
  {
    v5 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
    __for_range = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
    __for_begin._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<SVOBlock>>>::operator*(&__for_begin);
      std::pair<IntPair const,std::shared_ptr<SVOBlock>>::pair(
        (std::pair<const IntPair,std::shared_ptr<SVOBlock> > *const)(v2 + 96),
        v6);
      *(std::map<IntPair,std::shared_ptr<NodePairMap>>::iterator *)(v2 + 64) = std::map<IntPair,std::shared_ptr<NodePairMap>>::end(p_worldNodeMap);
      __x._M_node = std::map<IntPair,std::shared_ptr<NodePairMap>>::find(
                      p_worldNodeMap,
                      (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 96))._M_node;
      if ( !std::operator==(
              &__x,
              (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self *)(v2 + 64)) )
      {
        IntPair::IntPair((IntPair *const)(v2 + 32), *(_DWORD *)(v2 + 96), *(_DWORD *)(v2 + 100) + 1);
        v7 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
        v8 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
        __y._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v8)._M_node;
        v9 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
        v10 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9);
        v40._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(
                        v10,
                        (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v2 + 32))._M_node;
        if ( std::operator!=(&v40, &__y) )
        {
          *(std::map<IntPair,std::shared_ptr<NodePairMap>>::iterator *)(v2 + 64) = std::map<IntPair,std::shared_ptr<NodePairMap>>::end(p_worldNodeMap);
          __x._M_node = std::map<IntPair,std::shared_ptr<NodePairMap>>::find(
                          p_worldNodeMap,
                          (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 32))._M_node;
          if ( std::operator!=(
                 &__x,
                 (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self *)(v2 + 64)) )
          {
            v12 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                    p_worldNodeMap,
                    (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 96));
            if ( std::operator!=<NodePairMap>(v12, 0LL) )
            {
              v13 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                      p_worldNodeMap,
                      (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 32));
              if ( std::operator!=<NodePairMap>(v13, 0LL) )
              {
                v15 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                        p_worldNodeMap,
                        (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 32));
                v16 = std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
                v17 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                        p_worldNodeMap,
                        (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 96));
                v18 = std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)v17);
                v19 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
                v20 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v19);
                v21 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](
                        v20,
                        (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v2 + 32));
                std::shared_ptr<SVOBlock>::shared_ptr(&p_block2, v21);
                std::shared_ptr<SVOBlock>::shared_ptr(&p_block1, (const std::shared_ptr<SVOBlock> *)(v2 + 104));
                BlockLinker::LinkBlocks(&p_block1, &p_block2, v18, v16, 1);
                std::shared_ptr<SVOBlock>::~shared_ptr(&p_block1);
                std::shared_ptr<SVOBlock>::~shared_ptr(&p_block2);
              }
            }
          }
        }
        IntPair::IntPair((IntPair *const)(v2 + 64), *(_DWORD *)(v2 + 96) + 1, *(_DWORD *)(v2 + 100));
        v22 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
        v23 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v22);
        v40._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v23)._M_node;
        v24 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
        v25 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v24);
        v39._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(
                        v25,
                        (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v2 + 64))._M_node;
        if ( std::operator!=(&v39, &v40) )
        {
          __x._M_node = std::map<IntPair,std::shared_ptr<NodePairMap>>::end(p_worldNodeMap)._M_node;
          __y._M_node = std::map<IntPair,std::shared_ptr<NodePairMap>>::find(
                          p_worldNodeMap,
                          (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 64))._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self *)&__y,
                 &__x) )
          {
            v27 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                    p_worldNodeMap,
                    (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 96));
            if ( std::operator!=<NodePairMap>(v27, 0LL) )
            {
              v28 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                      p_worldNodeMap,
                      (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 64));
              if ( std::operator!=<NodePairMap>(v28, 0LL) )
              {
                v30 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                        p_worldNodeMap,
                        (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 64));
                v31 = std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)v30);
                v32 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                        p_worldNodeMap,
                        (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v2 + 96));
                v33 = std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)v32);
                v34 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world);
                v35 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v34);
                v36 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](
                        v35,
                        (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v2 + 64));
                std::shared_ptr<SVOBlock>::shared_ptr(&p_block2, v36);
                std::shared_ptr<SVOBlock>::shared_ptr(&p_block1, (const std::shared_ptr<SVOBlock> *)(v2 + 104));
                BlockLinker::LinkBlocks(&p_block1, &p_block2, v33, v31, 1);
                std::shared_ptr<SVOBlock>::~shared_ptr(&p_block1);
                std::shared_ptr<SVOBlock>::~shared_ptr(&p_block2);
              }
            }
          }
        }
      }
      std::pair<IntPair const,std::shared_ptr<SVOBlock>>::~pair((std::pair<const IntPair,std::shared_ptr<SVOBlock> > *const)(v2 + 96));
      std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<SVOBlock>>>::operator++(&__for_begin);
    }
  }
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 146: range 000000000CBD1EBA-000000000CBD1F1B
int __cdecl BlockLinker::DirectionToNeighborIndex(Const::Direction toDir)
{
  int result; // eax

  switch ( toDir )
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
      result = 0;
      break;
  }
  return result;
};

// Line 169: range 000000000CBD1F1C-000000000CBD1F75
const std::vector<int> *__cdecl BlockLinker::DirectionToPlanarNeighborIndexes(Const::Direction toDir)
{
  if ( toDir == Right )
    return &BlockLinker::RIGHT_PLANAR_NEIGHBOR_INDEXS;
  if ( toDir <= Right )
  {
    switch ( toDir )
    {
      case Left:
        return &BlockLinker::LEFT_PLANAR_NEIGHBOR_INDEXS;
      case Front:
        return &BlockLinker::FRONT_PLANAR_NEIGHBOR_INDEXS;
      case Back:
        return &BlockLinker::BACK_PLANAR_NEIGHBOR_INDEXS;
    }
  }
  return &BlockLinker::DEFAULT_VECTOR;
};

// Line 187: range 000000000CBD1F76-000000000CBD1FCF
const std::vector<int> *__cdecl BlockLinker::DirectionToDiagonalNeighborIndexes(Const::Direction toDir)
{
  if ( toDir == Right )
    return &BlockLinker::RIGHT_DIAGONAL_NEIGHBOR_INDEXS;
  if ( toDir <= Right )
  {
    switch ( toDir )
    {
      case Left:
        return &BlockLinker::LEFT_DIAGONAL_NEIGHBOR_INDEXS;
      case Front:
        return &BlockLinker::FRONT_DIAGONAL_NEIGHBOR_INDEXS;
      case Back:
        return &BlockLinker::BACK_DIAGONAL_NEIGHBOR_INDEXS;
    }
  }
  return &BlockLinker::DEFAULT_VECTOR;
};

// Line 205: range 000000000CBD1FD0-000000000CBD20DD
void __cdecl BlockLinker::PosIndexDiffToPlanarNeighborIndexes(int xDiff, int zDiff, std::vector<int> *res)
{
  std::initializer_list<int> __l; // [rsp+1Ch] [rbp-24h] BYREF

  if ( xDiff != 1 )
    goto LABEL_6;
  if ( zDiff == 1 )
  {
    LODWORD(__l._M_array) = 4;
    std::vector<int>::operator=(res, (std::initializer_list<int>)__PAIR128__(1LL, &__l));
    return;
  }
  if ( zDiff == -1 )
  {
    LODWORD(__l._M_array) = 5;
    std::vector<int>::operator=(res, (std::initializer_list<int>)__PAIR128__(1LL, &__l));
  }
  else
  {
LABEL_6:
    if ( xDiff == -1 )
    {
      if ( zDiff == 1 )
      {
        LODWORD(__l._M_array) = 6;
        std::vector<int>::operator=(res, (std::initializer_list<int>)__PAIR128__(1LL, &__l));
      }
      else if ( zDiff == -1 )
      {
        LODWORD(__l._M_array) = 7;
        std::vector<int>::operator=(res, (std::initializer_list<int>)__PAIR128__(1LL, &__l));
      }
    }
  }
};

// Line 231: range 000000000CBD20DE-000000000CBD220E
void __cdecl BlockLinker::PosIndexDiffToDiagonalNeighborIndexes(int xDiff, int zDiff, std::vector<int> *res)
{
  std::initializer_list<int> __l; // [rsp+18h] [rbp-28h] BYREF

  if ( xDiff != 1 )
    goto LABEL_6;
  if ( zDiff == 1 )
  {
    __l._M_array = (std::initializer_list<int>::iterator)0x200000000LL;
    std::vector<int>::operator=(res, (std::initializer_list<int>)__PAIR128__(2LL, &__l));
    return;
  }
  if ( zDiff == -1 )
  {
    __l._M_array = (std::initializer_list<int>::iterator)0x300000001LL;
    std::vector<int>::operator=(res, (std::initializer_list<int>)__PAIR128__(2LL, &__l));
  }
  else
  {
LABEL_6:
    if ( xDiff == -1 )
    {
      if ( zDiff == 1 )
      {
        __l._M_array = (std::initializer_list<int>::iterator)0x600000004LL;
        std::vector<int>::operator=(res, (std::initializer_list<int>)__PAIR128__(2LL, &__l));
      }
      else if ( zDiff == -1 )
      {
        __l._M_array = (std::initializer_list<int>::iterator)0x700000005LL;
        std::vector<int>::operator=(res, (std::initializer_list<int>)__PAIR128__(2LL, &__l));
      }
    }
  }
};

// Line 255: range 000000000CBD2210-000000000CBD24CD
void __cdecl BlockLinker::DirectionToNeighborKey(
        const std::string *blockIndex,
        Const::Direction toDir,
        std::string *neighborKey)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *v6; // rax
  std::string *v7; // rax
  std::allocator<char> __a; // [rsp+27h] [rbp-A9h] BYREF
  int x; // [rsp+28h] [rbp-A8h]
  int z; // [rsp+2Ch] [rbp-A4h]
  std::string seperator; // [rsp+30h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 14 indexesStr:256";
  *(_QWORD *)(v3 + 16) = BlockLinker::DirectionToNeighborKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&seperator, "_", &__a);
  CommonUtils::split(blockIndex, &seperator, (std::vector<std::string> *)(v3 + 32));
  std::string::~string(&seperator);
  std::allocator<char>::~allocator(&__a);
  v6 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 32), 0LL);
  x = CommonUtils::StoiDefaultZero(v6);
  v7 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 32), 1uLL);
  z = CommonUtils::StoiDefaultZero(v7);
  if ( toDir == Right )
  {
    AddrProcessor::GetSuffix(x + 1, z, neighborKey);
  }
  else if ( toDir <= Right )
  {
    switch ( toDir )
    {
      case Left:
        AddrProcessor::GetSuffix(x - 1, z, neighborKey);
        break;
      case Front:
        AddrProcessor::GetSuffix(x, z + 1, neighborKey);
        break;
      case Back:
        AddrProcessor::GetSuffix(x, z - 1, neighborKey);
        break;
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 32));
  if ( v13 == (char *)v3 )
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

// Line 281: range 000000000CBD24CE-000000000CBD293E
void __cdecl BlockLinker::DirectionToNeighborBlockIndex(
        const IntPair *curBlockIndex,
        Const::Direction toDir,
        IntPair *neighborBlockIndex)
{
  int first; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int second; // ecx

  if ( toDir == Right )
  {
    if ( *(_BYTE *)(((unsigned __int64)curBlockIndex >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)curBlockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curBlockIndex >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(curBlockIndex);
    }
    v9 = curBlockIndex->first + 1;
    if ( *(_BYTE *)(((unsigned __int64)neighborBlockIndex >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)neighborBlockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)neighborBlockIndex >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(neighborBlockIndex);
    }
    neighborBlockIndex->first = v9;
    if ( *(_BYTE *)(((unsigned __int64)&curBlockIndex->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)curBlockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curBlockIndex->second >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&curBlockIndex->second);
    }
    second = curBlockIndex->second;
    if ( *(_BYTE *)(((unsigned __int64)&neighborBlockIndex->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)neighborBlockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&neighborBlockIndex->second >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_store4(&neighborBlockIndex->second);
    }
    neighborBlockIndex->second = second;
  }
  else if ( toDir <= Right )
  {
    switch ( toDir )
    {
      case Left:
        if ( *(_BYTE *)(((unsigned __int64)curBlockIndex >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)curBlockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curBlockIndex >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(curBlockIndex);
        }
        v7 = curBlockIndex->first - 1;
        if ( *(_BYTE *)(((unsigned __int64)neighborBlockIndex >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)neighborBlockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)neighborBlockIndex >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(neighborBlockIndex);
        }
        neighborBlockIndex->first = v7;
        if ( *(_BYTE *)(((unsigned __int64)&curBlockIndex->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)curBlockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curBlockIndex->second >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&curBlockIndex->second);
        }
        v8 = curBlockIndex->second;
        if ( *(_BYTE *)(((unsigned __int64)&neighborBlockIndex->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)neighborBlockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&neighborBlockIndex->second >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_store4(&neighborBlockIndex->second);
        }
        neighborBlockIndex->second = v8;
        break;
      case Front:
        if ( *(_BYTE *)(((unsigned __int64)curBlockIndex >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)curBlockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curBlockIndex >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(curBlockIndex);
        }
        first = curBlockIndex->first;
        if ( *(_BYTE *)(((unsigned __int64)neighborBlockIndex >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)neighborBlockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)neighborBlockIndex >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(neighborBlockIndex);
        }
        neighborBlockIndex->first = first;
        if ( *(_BYTE *)(((unsigned __int64)&curBlockIndex->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)curBlockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curBlockIndex->second >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&curBlockIndex->second);
        }
        v4 = curBlockIndex->second + 1;
        if ( *(_BYTE *)(((unsigned __int64)&neighborBlockIndex->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)neighborBlockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&neighborBlockIndex->second >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_store4(&neighborBlockIndex->second);
        }
        neighborBlockIndex->second = v4;
        break;
      case Back:
        if ( *(_BYTE *)(((unsigned __int64)curBlockIndex >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)curBlockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curBlockIndex >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(curBlockIndex);
        }
        v5 = curBlockIndex->first;
        if ( *(_BYTE *)(((unsigned __int64)neighborBlockIndex >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)neighborBlockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)neighborBlockIndex >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(neighborBlockIndex);
        }
        neighborBlockIndex->first = v5;
        if ( *(_BYTE *)(((unsigned __int64)&curBlockIndex->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)curBlockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curBlockIndex->second >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&curBlockIndex->second);
        }
        v6 = curBlockIndex->second - 1;
        if ( *(_BYTE *)(((unsigned __int64)&neighborBlockIndex->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)neighborBlockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&neighborBlockIndex->second >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_store4(&neighborBlockIndex->second);
        }
        neighborBlockIndex->second = v6;
        break;
    }
  }
};

// Line 306: range 000000000CBD2940-000000000CBD2B55
Const::Direction __cdecl BlockLinker::BlockIndexToDirectionRelation(
        std::shared_ptr<SVOBlock> *p_block1,
        std::shared_ptr<SVOBlock> *p_block2)
{
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  int *blockIndex; // rax
  int v6; // ebx
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  int *v8; // rax
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int v10; // ebx
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v14; // rbx
  int x_diff; // [rsp+18h] [rbp-18h]
  int z_diff; // [rsp+1Ch] [rbp-14h]

  if ( std::operator==<SVOBlock>(p_block1, 0LL) || std::operator==<SVOBlock>(p_block2, 0LL) )
    return 999;
  v4 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block2);
  blockIndex = v4->blockIndex;
  if ( *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)blockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(blockIndex);
  }
  v6 = v4->blockIndex[0];
  v7 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
  v8 = v7->blockIndex;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  x_diff = v6 - v7->blockIndex[0];
  v9 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block2);
  if ( *(_BYTE *)(((unsigned __int64)&v9->blockIndex[1] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->blockIndex[1]);
  }
  v10 = v9->blockIndex[1];
  v11 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
  if ( *(_BYTE *)(((unsigned __int64)&v11->blockIndex[1] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->blockIndex[1]);
  }
  z_diff = v10 - v11->blockIndex[1];
  if ( !x_diff )
  {
    if ( z_diff == 1 )
      return 1;
    if ( z_diff == -1 )
      return 2;
LABEL_25:
    v12 = 8LL;
    exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
    v14 = (_QWORD *)exception;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    {
      v12 = exception;
      __asan_report_store8();
    }
    *v14 = "Wrong block index diff";
    __asan_handle_no_return(v12);
    _cxa_throw(v14, (struct type_info *)&`typeinfo for'char const*, 0LL);
  }
  if ( z_diff )
    goto LABEL_25;
  if ( x_diff == 1 )
    return 4;
  if ( x_diff != -1 )
    goto LABEL_25;
  return 3;
};

// Line 332: range 000000000CBD2B56-000000000CBD2E48
void __cdecl BlockLinker::CrossBlockPosIndexForOutermostNode(
        uint64_t *nodePosIndex,
        std::vector<long unsigned int> *neighborPosIndex,
        Const::Direction laterBlockDir,
        int planeNodeNumX,
        int planeNodeNumZ)
{
  std::initializer_list<long unsigned int> x; // [rsp+38h] [rbp-88h]
  unsigned __int64 z; // [rsp+48h] [rbp-78h]
  std::initializer_list<long unsigned int> v10; // [rsp+50h] [rbp-70h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp-60h]
  common::milog::MiLogStream v12; // [rsp+70h] [rbp-50h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)nodePosIndex >> 3) + 0x7FFF8000) )
    __asan_report_load8(nodePosIndex, neighborPosIndex);
  x._M_array = (std::initializer_list<long unsigned int>::iterator)*nodePosIndex;
  if ( *(_BYTE *)(((unsigned __int64)(nodePosIndex + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(nodePosIndex + 1, neighborPosIndex);
  x._M_len = nodePosIndex[1];
  if ( *(_BYTE *)(((unsigned __int64)(nodePosIndex + 2) >> 3) + 0x7FFF8000) )
    __asan_report_load8(nodePosIndex + 2, neighborPosIndex);
  z = nodePosIndex[2];
  if ( laterBlockDir == Right )
  {
    v10._M_array = 0LL;
    v10._M_len = x._M_len;
    v11 = z;
    std::vector<unsigned long>::operator=(
      neighborPosIndex,
      (std::initializer_list<long unsigned int>)__PAIR128__(3LL, &v10));
  }
  else
  {
    if ( laterBlockDir <= Right )
    {
      switch ( laterBlockDir )
      {
        case Left:
          v10._M_array = (std::initializer_list<long unsigned int>::iterator)(planeNodeNumX - 1LL);
          v10._M_len = x._M_len;
          v11 = z;
          std::vector<unsigned long>::operator=(
            neighborPosIndex,
            (std::initializer_list<long unsigned int>)__PAIR128__(3LL, &v10));
          return;
        case Front:
          v11 = 0LL;
          v10 = x;
          std::vector<unsigned long>::operator=(
            neighborPosIndex,
            (std::initializer_list<long unsigned int>)__PAIR128__(3LL, &v10));
          return;
        case Back:
          v10 = x;
          v11 = planeNodeNumZ - 1LL;
          std::vector<unsigned long>::operator=(
            neighborPosIndex,
            (std::initializer_list<long unsigned int>)__PAIR128__(3LL, &v10));
          return;
      }
    }
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/block_linker.cpp",
      "CrossBlockPosIndexForOutermostNode",
      351);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      &v12,
      (const char (*)[57])"[CrossBlockPosIndexForOutermostNode] Wrong laterBlockDir");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
};

// Line 357: range 000000000CBD2E4A-000000000CBD3612
void __cdecl BlockLinker::RecheckEdgeBlcokedForEdgeNodes(
        std::shared_ptr<SVOBlock> *p_block1,
        std::shared_ptr<SVOBlock> *p_block2,
        NodePairMap *nodeDict1)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  char v10; // dl
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::mapped_type *v13; // rsi
  unsigned __int64 v14; // rax
  const std::vector<long unsigned int> *v15; // rax
  unsigned __int64 v16; // rax
  uint64_t v17; // r15
  unsigned __int64 v18; // rax
  uint64_t v19; // r14
  unsigned __int64 v20; // rax
  char *v21; // rsi
  unsigned __int64 v22; // rax
  std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type __x; // [rsp+28h] [rbp-1B8h] BYREF
  int planeNodeNumX; // [rsp+2Ch] [rbp-1B4h]
  int planeNodeNumZ; // [rsp+30h] [rbp-1B0h]
  Const::Direction dir; // [rsp+34h] [rbp-1ACh]
  std::vector<std::vector<long unsigned int>>::iterator __for_begin; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<std::vector<long unsigned int>>::iterator __for_end; // [rsp+40h] [rbp-1A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> v31; // [rsp+48h] [rbp-198h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __y; // [rsp+50h] [rbp-190h] BYREF
  std::vector<std::vector<long unsigned int>> *__for_range; // [rsp+58h] [rbp-188h]
  NodeInfoPair *nodeInfo; // [rsp+60h] [rbp-180h]
  SVONode *node; // [rsp+68h] [rbp-178h]
  std::shared_ptr<SVOBlock> v36; // [rsp+70h] [rbp-170h] BYREF
  std::shared_ptr<SVOBlock> v37; // [rsp+80h] [rbp-160h] BYREF
  char v38[336]; // [rsp+90h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 8 14 mortonCode:372 80 24 15 posIndexVec:368 144 24 12 posIndex:370 208 48 20 botLayerNodePair:367";
  *(_QWORD *)(v3 + 16) = BlockLinker::RecheckEdgeBlcokedForEdgeNodes;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  v6 = 0LL;
  if ( !std::operator==<SVOBlock>(p_block1, 0LL) )
  {
    v6 = 0LL;
    if ( !std::operator==<SVOBlock>(p_block2, 0LL) )
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8, 0LL);
      v9 = *(_QWORD *)v8;
      v10 = *(_BYTE *)(((unsigned __int64)(v9 + 32) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v10 != 0;
      if ( v10 != 0 && v10 <= 3 )
        __asan_report_load4(v9 + 32);
      planeNodeNumX = *(_DWORD *)(v9 + 32);
      v11 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11, v6);
      v12 = *(_QWORD *)v11;
      if ( *(_BYTE *)(((unsigned __int64)(v12 + 40) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v12 + 40) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v12 + 40);
      }
      planeNodeNumZ = *(_DWORD *)(v12 + 40);
      std::shared_ptr<SVOBlock>::shared_ptr(&v37, p_block2);
      std::shared_ptr<SVOBlock>::shared_ptr(&v36, p_block1);
      dir = BlockLinker::BlockIndexToDirectionRelation(&v36, &v37);
      std::shared_ptr<SVOBlock>::~shared_ptr(&v36);
      std::shared_ptr<SVOBlock>::~shared_ptr(&v37);
      __y._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::end(nodeDict1)._M_cur;
      __x = 0;
      v31._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::find(nodeDict1, &__x)._M_cur;
      if ( !std::__detail::operator==<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false>(&v31, &__y) )
      {
        __x = 0;
        v13 = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::operator[](nodeDict1, &__x);
        std::map<unsigned long,NodeInfoPair *>::map((std::map<long unsigned int,NodeInfoPair*> *const)(v3 + 208), v13);
        std::vector<std::vector<unsigned long>>::vector((std::vector<std::vector<long unsigned int>> *const)(v3 + 80));
        v14 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_block1);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(v14, v13);
        BlockLinker::LayerEdgeNodeIndex(
          *(SVOStructure **)v14,
          dir,
          0,
          (std::vector<std::vector<long unsigned int>> *)(v3 + 80));
        __for_range = (std::vector<std::vector<long unsigned int>> *)(v3 + 80);
        __for_begin._M_current = std::vector<std::vector<unsigned long>>::begin((std::vector<std::vector<long unsigned int>> *const)(v3 + 80))._M_current;
        __for_end._M_current = std::vector<std::vector<unsigned long>>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>(
                  &__for_begin,
                  &__for_end) )
        {
          v15 = __gnu_cxx::__normal_iterator<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>::operator*(&__for_begin);
          std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 144), v15);
          v16 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                    (std::vector<long unsigned int> *const)(v3 + 144),
                                    2uLL);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(v16, 2LL);
          v17 = *(_QWORD *)v16;
          v18 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                    (std::vector<long unsigned int> *const)(v3 + 144),
                                    1uLL);
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8(v18, 1LL);
          v19 = *(_QWORD *)v18;
          v20 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                    (std::vector<long unsigned int> *const)(v3 + 144),
                                    0LL);
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v20 = __asan_report_load8(v20, 0LL);
          *(_QWORD *)(v3 + 48) = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(*(_QWORD *)v20, v19, v17);
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::end((std::map<long unsigned int,NodeInfoPair*> *const)(v3 + 208))._M_node;
          v31._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::find((std::map<long unsigned int,NodeInfoPair*> *const)(v3 + 208), (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v3 + 48))._M_node;
          if ( !std::operator==(
                  (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&v31,
                  (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__y) )
          {
            v21 = (char *)(v3 + 48);
            v22 = (unsigned __int64)std::map<unsigned long,NodeInfoPair *>::operator[](
                                      (std::map<long unsigned int,NodeInfoPair*> *const)(v3 + 208),
                                      (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v3 + 48));
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              v22 = __asan_report_load8(v22, v21);
            nodeInfo = *(NodeInfoPair **)v22;
            if ( nodeInfo )
            {
              if ( *(_BYTE *)(((unsigned __int64)nodeInfo >> 3) + 0x7FFF8000) )
                __asan_report_load8(nodeInfo, v21);
              node = nodeInfo->node;
              if ( node )
              {
                if ( *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&node->area);
                }
                if ( node->area == EdgeBlocked
                  && !BlockLinker::CheckNodeEdgeBlocked(node, dir, planeNodeNumX, planeNodeNumZ) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&node->area);
                  }
                  node->area = Walkable;
                }
              }
            }
          }
          std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 144));
          __gnu_cxx::__normal_iterator<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>::operator++(&__for_begin);
        }
        std::vector<std::vector<unsigned long>>::~vector((std::vector<std::vector<long unsigned int>> *const)(v3 + 80));
        std::map<unsigned long,NodeInfoPair *>::~map((std::map<long unsigned int,NodeInfoPair*> *const)(v3 + 208));
      }
    }
  }
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 395: range 000000000CBD3614-000000000CBD3F38
void __cdecl BlockLinker::LayerEdgeNodeIndex(
        SVOStructure *svo,
        Const::Direction dir,
        int level,
        std::vector<std::vector<long unsigned int>> *posIndexVec)
{
  __m128i v4; // xmm0
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  std::initializer_list<long unsigned int> __l; // [rsp+0h] [rbp-150h]
  std::initializer_list<long unsigned int> v9; // [rsp+10h] [rbp-140h]
  std::allocator<long unsigned int> __a; // [rsp+43h] [rbp-10Dh] BYREF
  float levelSize; // [rsp+44h] [rbp-10Ch]
  uint64_t i; // [rsp+48h] [rbp-108h]
  uint64_t j; // [rsp+50h] [rbp-100h]
  uint64_t k; // [rsp+58h] [rbp-F8h]
  uint64_t i_0; // [rsp+60h] [rbp-F0h]
  uint64_t j_0; // [rsp+68h] [rbp-E8h]
  uint64_t k_0; // [rsp+70h] [rbp-E0h]
  uint64_t i_1; // [rsp+78h] [rbp-D8h]
  uint64_t j_1; // [rsp+80h] [rbp-D0h]
  uint64_t k_1; // [rsp+88h] [rbp-C8h]
  uint64_t i_2; // [rsp+90h] [rbp-C0h]
  uint64_t j_2; // [rsp+98h] [rbp-B8h]
  uint64_t k_2; // [rsp+A0h] [rbp-B0h]
  unsigned __int64 x_num; // [rsp+A8h] [rbp-A8h]
  unsigned __int64 y_num; // [rsp+B0h] [rbp-A0h]
  unsigned __int64 z_num; // [rsp+B8h] [rbp-98h]
  std::initializer_list<long unsigned int> v28; // [rsp+C0h] [rbp-90h] BYREF
  uint64_t v29; // [rsp+D0h] [rbp-80h]
  std::vector<long unsigned int> __x; // [rsp+E0h] [rbp-70h] BYREF
  common::milog::MiLogStream v31; // [rsp+100h] [rbp-50h] BYREF

  *(float *)v4.m128i_i32 = SVODataProcessor::GetLevelSize(level);
  levelSize = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( !svo || levelSize == 0.0 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/block_linker.cpp",
      "LayerEdgeNodeIndex",
      399);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v31, (const char (*)[17])"Unexpected error");
    common::milog::MiLogStream::~MiLogStream(&v31);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)svo->totalIndex >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)svo->totalIndex >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(svo->totalIndex);
  }
  v5 = std::ceil((float)svo->totalIndex[0] / levelSize);
  if ( v5 >= 9.223372e18 )
    x_num = (unsigned int)(int)(float)(v5 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    x_num = (unsigned int)(int)v5;
  if ( *(_BYTE *)(((unsigned __int64)&svo->totalIndex[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)svo + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&svo->totalIndex[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&svo->totalIndex[1]);
  }
  v6 = std::ceil((float)svo->totalIndex[1] / levelSize);
  if ( v6 >= 9.223372e18 )
    y_num = (unsigned int)(int)(float)(v6 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    y_num = (unsigned int)(int)v6;
  if ( *(_BYTE *)(((unsigned __int64)&svo->totalIndex[2] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&svo->totalIndex[2] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&svo->totalIndex[2]);
  }
  v7 = std::ceil((float)svo->totalIndex[2] / levelSize);
  if ( v7 >= 9.223372e18 )
    z_num = (unsigned int)(int)(float)(v7 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    z_num = (unsigned int)(int)v7;
  if ( dir == Right )
  {
    for ( i_2 = 0LL; i_2 < y_num; ++i_2 )
    {
      for ( j_2 = 0LL; j_2 < z_num; ++j_2 )
      {
        for ( k_2 = 0LL; k_2 < ConfigToTheMoon::ConfigParameters::EDGE_TRIM_NUM; ++k_2 )
        {
          v28._M_array = (std::initializer_list<long unsigned int>::iterator)(x_num - k_2 - 1);
          v28._M_len = i_2;
          v29 = j_2;
          std::allocator<unsigned long>::allocator(&__a);
          std::vector<unsigned long>::vector(
            &__x,
            (std::initializer_list<long unsigned int>)__PAIR128__(3LL, &v28),
            &__a);
          std::vector<std::vector<unsigned long>>::push_back(posIndexVec, &__x);
          std::vector<unsigned long>::~vector(&__x);
          std::allocator<unsigned long>::~allocator(&__a);
        }
      }
    }
  }
  else
  {
    if ( dir > Right )
    {
LABEL_61:
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/block_linker.cpp",
        "LayerEdgeNodeIndex",
        451);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v31,
        (const char (*)[31])"[LayerEdgeNodeIndex] Wrong Dir");
      common::milog::MiLogStream::~MiLogStream(&v31);
      return;
    }
    switch ( dir )
    {
      case Left:
        for ( i_1 = 0LL; i_1 < y_num; ++i_1 )
        {
          for ( j_1 = 0LL; j_1 < z_num; ++j_1 )
          {
            for ( k_1 = 0LL; k_1 < ConfigToTheMoon::ConfigParameters::EDGE_TRIM_NUM; ++k_1 )
            {
              v28._M_array = (std::initializer_list<long unsigned int>::iterator)k_1;
              v28._M_len = i_1;
              v29 = j_1;
              std::allocator<unsigned long>::allocator(&__a);
              std::vector<unsigned long>::vector(
                &__x,
                (std::initializer_list<long unsigned int>)__PAIR128__(3LL, &v28),
                &__a);
              std::vector<std::vector<unsigned long>>::push_back(posIndexVec, &__x);
              std::vector<unsigned long>::~vector(&__x);
              std::allocator<unsigned long>::~allocator(&__a);
            }
          }
        }
        break;
      case Front:
        for ( i = 0LL; i < x_num; ++i )
        {
          for ( j = 0LL; j < y_num; ++j )
          {
            for ( k = 0LL; k < ConfigToTheMoon::ConfigParameters::EDGE_TRIM_NUM; ++k )
            {
              v28._M_array = (std::initializer_list<long unsigned int>::iterator)i;
              v28._M_len = j;
              v29 = z_num - k - 1;
              __l._M_array = (std::initializer_list<long unsigned int>::iterator)&v28;
              __l._M_len = 3LL;
              std::allocator<unsigned long>::allocator(&__a);
              std::vector<unsigned long>::vector(&__x, __l, &__a);
              std::vector<std::vector<unsigned long>>::push_back(posIndexVec, &__x);
              std::vector<unsigned long>::~vector(&__x);
              std::allocator<unsigned long>::~allocator(&__a);
            }
          }
        }
        break;
      case Back:
        for ( i_0 = 0LL; i_0 < x_num; ++i_0 )
        {
          for ( j_0 = 0LL; j_0 < y_num; ++j_0 )
          {
            for ( k_0 = 0LL; k_0 < ConfigToTheMoon::ConfigParameters::EDGE_TRIM_NUM; ++k_0 )
            {
              v28._M_array = (std::initializer_list<long unsigned int>::iterator)i_0;
              v28._M_len = j_0;
              v29 = k_0;
              v9._M_array = (std::initializer_list<long unsigned int>::iterator)&v28;
              v9._M_len = 3LL;
              std::allocator<unsigned long>::allocator(&__a);
              std::vector<unsigned long>::vector(&__x, v9, &__a);
              std::vector<std::vector<unsigned long>>::push_back(posIndexVec, &__x);
              std::vector<unsigned long>::~vector(&__x);
              std::allocator<unsigned long>::~allocator(&__a);
            }
          }
        }
        break;
      default:
        goto LABEL_61;
    }
  }
};

// Line 457: range 000000000CBD3F3A-000000000CBD3F8D
bool __cdecl BlockLinker::CheckNodeEdgeBlocked(
        SVONode *node,
        Const::Direction dir,
        int planeNodeNumX,
        int planeNodeNumZ)
{
  int i; // [rsp+2Ch] [rbp-4h]

  for ( i = 0; i <= 5; ++i )
  {
    if ( BlockLinker::CheckBlockedInNeighborDir(node, ConfigToTheMoon::ConfigParameters::EDGE_TRIM_NUM, i) )
      return 1;
  }
  return 0;
};

// Line 467: range 000000000CBD3F8E-000000000CBD40A1
bool __cdecl BlockLinker::CheckBlockedInNeighborDir(SVONode *node, int checkLength, int neighborRank)
{
  unsigned __int64 v4; // rax
  int checkNum; // [rsp+14h] [rbp-1Ch]
  int nodeLevel; // [rsp+18h] [rbp-18h]
  SVONode *curNode; // [rsp+20h] [rbp-10h]
  SVONode *neighborInDir; // [rsp+28h] [rbp-8h]

  if ( !checkLength )
    return 0;
  checkNum = 0;
  curNode = node;
  if ( !node )
    return 0;
  while ( checkNum < checkLength )
  {
    v4 = (unsigned __int64)std::vector<SVONode *>::operator[](&curNode->neighbors, neighborRank);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4, neighborRank);
    neighborInDir = *(SVONode **)v4;
    if ( !*(_QWORD *)v4 )
      return 1;
    if ( *(_BYTE *)(((unsigned __int64)&neighborInDir->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&neighborInDir->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&neighborInDir->area);
    }
    if ( neighborInDir->area == Blocked )
      return 1;
    nodeLevel = SVODataProcessor::GetNodeLevel(neighborInDir);
    checkNum += (int)SVODataProcessor::GetLevelSize(nodeLevel);
    curNode = neighborInDir;
  }
  return 0;
};

// Line 492: range 000000000CBD40A2-000000000CBD4908
void __cdecl BlockLinker::LayerOutermostNodeIndex(
        SVOStructure *svo,
        Const::Direction dir,
        int level,
        std::vector<std::vector<long unsigned int>> *outermostPosIndexVec)
{
  __m128i v4; // xmm0
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  std::initializer_list<long unsigned int> __l; // [rsp+0h] [rbp-130h]
  std::initializer_list<long unsigned int> v9; // [rsp+10h] [rbp-120h]
  std::allocator<long unsigned int> __a; // [rsp+43h] [rbp-EDh] BYREF
  float levelSize; // [rsp+44h] [rbp-ECh]
  uint64_t i; // [rsp+48h] [rbp-E8h]
  uint64_t j; // [rsp+50h] [rbp-E0h]
  uint64_t i_0; // [rsp+58h] [rbp-D8h]
  uint64_t j_0; // [rsp+60h] [rbp-D0h]
  uint64_t i_1; // [rsp+68h] [rbp-C8h]
  uint64_t j_1; // [rsp+70h] [rbp-C0h]
  uint64_t i_2; // [rsp+78h] [rbp-B8h]
  uint64_t j_2; // [rsp+80h] [rbp-B0h]
  unsigned __int64 x_num; // [rsp+88h] [rbp-A8h]
  unsigned __int64 y_num; // [rsp+90h] [rbp-A0h]
  unsigned __int64 z_num; // [rsp+98h] [rbp-98h]
  std::initializer_list<long unsigned int> v24; // [rsp+A0h] [rbp-90h] BYREF
  uint64_t v25; // [rsp+B0h] [rbp-80h]
  std::vector<long unsigned int> __x; // [rsp+C0h] [rbp-70h] BYREF
  common::milog::MiLogStream v27; // [rsp+E0h] [rbp-50h] BYREF

  *(float *)v4.m128i_i32 = SVODataProcessor::GetLevelSize(level);
  levelSize = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( !svo || levelSize == 0.0 )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/block_linker.cpp",
      "LayerOutermostNodeIndex",
      496);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v27, (const char (*)[17])"Unexpected error");
    common::milog::MiLogStream::~MiLogStream(&v27);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)svo->totalIndex >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)svo->totalIndex >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(svo->totalIndex);
  }
  v5 = std::ceil((float)svo->totalIndex[0] / levelSize);
  if ( v5 >= 9.223372e18 )
    x_num = (unsigned int)(int)(float)(v5 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    x_num = (unsigned int)(int)v5;
  if ( *(_BYTE *)(((unsigned __int64)&svo->totalIndex[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)svo + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&svo->totalIndex[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&svo->totalIndex[1]);
  }
  v6 = std::ceil((float)svo->totalIndex[1] / levelSize);
  if ( v6 >= 9.223372e18 )
    y_num = (unsigned int)(int)(float)(v6 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    y_num = (unsigned int)(int)v6;
  if ( *(_BYTE *)(((unsigned __int64)&svo->totalIndex[2] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&svo->totalIndex[2] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&svo->totalIndex[2]);
  }
  v7 = std::ceil((float)svo->totalIndex[2] / levelSize);
  if ( v7 >= 9.223372e18 )
    z_num = (unsigned int)(int)(float)(v7 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    z_num = (unsigned int)(int)v7;
  if ( dir == Right )
  {
    for ( i_2 = 0LL; i_2 < y_num; ++i_2 )
    {
      for ( j_2 = 0LL; j_2 < z_num; ++j_2 )
      {
        v24._M_array = (std::initializer_list<long unsigned int>::iterator)(x_num - 1);
        v24._M_len = i_2;
        v25 = j_2;
        std::allocator<unsigned long>::allocator(&__a);
        std::vector<unsigned long>::vector(&__x, (std::initializer_list<long unsigned int>)__PAIR128__(3LL, &v24), &__a);
        std::vector<std::vector<unsigned long>>::push_back(outermostPosIndexVec, &__x);
        std::vector<unsigned long>::~vector(&__x);
        std::allocator<unsigned long>::~allocator(&__a);
      }
    }
  }
  else
  {
    if ( dir > Right )
    {
LABEL_49:
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/block_linker.cpp",
        "LayerOutermostNodeIndex",
        545);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v27, (const char (*)[22])"Unexpected direction ");
      common::milog::MiLogStream::~MiLogStream(&v27);
      return;
    }
    switch ( dir )
    {
      case Left:
        for ( i_1 = 0LL; i_1 < y_num; ++i_1 )
        {
          for ( j_1 = 0LL; j_1 < z_num; ++j_1 )
          {
            v24._M_array = 0LL;
            v24._M_len = i_1;
            v25 = j_1;
            std::allocator<unsigned long>::allocator(&__a);
            std::vector<unsigned long>::vector(
              &__x,
              (std::initializer_list<long unsigned int>)__PAIR128__(3LL, &v24),
              &__a);
            std::vector<std::vector<unsigned long>>::push_back(outermostPosIndexVec, &__x);
            std::vector<unsigned long>::~vector(&__x);
            std::allocator<unsigned long>::~allocator(&__a);
          }
        }
        break;
      case Front:
        for ( i = 0LL; i < x_num; ++i )
        {
          for ( j = 0LL; j < y_num; ++j )
          {
            v24._M_array = (std::initializer_list<long unsigned int>::iterator)i;
            v24._M_len = j;
            v25 = z_num - 1;
            __l._M_array = (std::initializer_list<long unsigned int>::iterator)&v24;
            __l._M_len = 3LL;
            std::allocator<unsigned long>::allocator(&__a);
            std::vector<unsigned long>::vector(&__x, __l, &__a);
            std::vector<std::vector<unsigned long>>::push_back(outermostPosIndexVec, &__x);
            std::vector<unsigned long>::~vector(&__x);
            std::allocator<unsigned long>::~allocator(&__a);
          }
        }
        break;
      case Back:
        for ( i_0 = 0LL; i_0 < x_num; ++i_0 )
        {
          for ( j_0 = 0LL; j_0 < y_num; ++j_0 )
          {
            v25 = 0LL;
            v24._M_array = (std::initializer_list<long unsigned int>::iterator)i_0;
            v24._M_len = j_0;
            v9._M_array = (std::initializer_list<long unsigned int>::iterator)&v24;
            v9._M_len = 3LL;
            std::allocator<unsigned long>::allocator(&__a);
            std::vector<unsigned long>::vector(&__x, v9, &__a);
            std::vector<std::vector<unsigned long>>::push_back(outermostPosIndexVec, &__x);
            std::vector<unsigned long>::~vector(&__x);
            std::allocator<unsigned long>::~allocator(&__a);
          }
        }
        break;
      default:
        goto LABEL_49;
    }
  }
};
