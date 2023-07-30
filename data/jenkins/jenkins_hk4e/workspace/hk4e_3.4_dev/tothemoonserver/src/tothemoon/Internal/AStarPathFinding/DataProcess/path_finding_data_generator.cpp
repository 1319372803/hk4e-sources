// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataProcess/path_finding_data_generator.cpp

// Line 18: range 000000000CBD490A-000000000CBD4EBE
void __cdecl BlockPathFindingDataGenerator::SetUpBlockNodeDict(BlockPathFindingDataGenerator *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::pointer v4; // rax
  unsigned __int64 v5; // rax
  std::vector<SVOLayer*>::size_type v6; // rsi
  unsigned __int64 v7; // rax
  std::vector<SVOLayer*>::size_type v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  std::shared_ptr<std::map<long unsigned int,SVONode*> > *v11; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v12; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v13; // rax
  SVONode *v14; // r14
  unsigned __int64 v15; // rax
  int j; // [rsp+14h] [rbp-18Ch]
  std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::map<long unsigned int,SVONode*> > > >::_Self v17; // [rsp+18h] [rbp-188h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+20h] [rbp-180h] BYREF
  std::shared_ptr<SVOBlock> *block; // [rsp+28h] [rbp-178h]
  std::vector<SVOLayer*> *layerData; // [rsp+30h] [rbp-170h]
  std::vector<SVONode*> *nodeData; // [rsp+38h] [rbp-168h]
  size_t length; // [rsp+40h] [rbp-160h]
  SVONode *node; // [rsp+48h] [rbp-158h]
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >> *nodeMap; // [rsp+50h] [rbp-150h]
  std::map<long unsigned int,SVONode*> *layerMap; // [rsp+58h] [rbp-148h]
  std::pair<std::string,std::shared_ptr<BlockNodeDict> > __x; // [rsp+60h] [rbp-140h] BYREF
  char v27[272]; // [rsp+90h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 4 i:30 64 8 7 iter:19 96 16 16 blockNodeDict:22 128 16 11 nodeDict:44 160 32 6 key:20";
  *(_QWORD *)(v1 + 16) = BlockPathFindingDataGenerator::SetUpBlockNodeDict;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862726] = -202116109;
  *(std::map<std::string,std::shared_ptr<SVOBlock>>::iterator *)(v1 + 64) = std::map<std::string,std::shared_ptr<SVOBlock>>::begin(&this->_blockMap);
  while ( 1 )
  {
    __y._M_node = std::map<std::string,std::shared_ptr<SVOBlock>>::end(&this->_blockMap)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::_Self *)(v1 + 64),
            &__y) )
      break;
    v4 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<SVOBlock>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > > *const)(v1 + 64));
    std::string::basic_string(v1 + 160, v4);
    block = &std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<SVOBlock>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > > *const)(v1 + 64))->second;
    std::make_shared<BlockNodeDict>();
    std::pair<std::string,std::shared_ptr<BlockNodeDict>>::pair<std::string&,std::shared_ptr<BlockNodeDict>&,true>(
      &__x,
      (std::string *)(v1 + 160),
      (std::shared_ptr<BlockNodeDict> *)(v1 + 96));
    std::map<std::string,std::shared_ptr<BlockNodeDict>>::insert<std::pair<std::string,std::shared_ptr<BlockNodeDict>>>(
      &this->_blockNodeDictMap,
      &__x);
    std::pair<std::string,std::shared_ptr<BlockNodeDict>>::~pair(&__x);
    v5 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)block);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5, &__x);
    layerData = *(std::vector<SVOLayer*> **)v5;
    if ( !std::operator==<BlockNodeDict>((const std::shared_ptr<BlockNodeDict> *)(v1 + 96), 0LL) )
    {
      for ( *(_DWORD *)(v1 + 48) = 0; *(int *)(v1 + 48) <= 9; ++*(_DWORD *)(v1 + 48) )
      {
        v6 = *(int *)(v1 + 48);
        v7 = (unsigned __int64)std::vector<SVOLayer *>::operator[](layerData, v6);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7, v6);
        if ( *(_QWORD *)v7 )
        {
          v8 = *(int *)(v1 + 48);
          v9 = (unsigned __int64)std::vector<SVOLayer *>::operator[](layerData, v8);
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v9 = __asan_report_load8(v9, v8);
          nodeData = (std::vector<SVONode*> *)(*(_QWORD *)v9 + 8LL);
          length = std::vector<SVONode *>::size(nodeData);
          for ( j = 0; length > j; ++j )
          {
            v10 = (unsigned __int64)std::vector<SVONode *>::operator[](nodeData, j);
            if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
              v10 = __asan_report_load8(v10, j);
            node = *(SVONode **)v10;
            nodeMap = (std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >> *)std::__shared_ptr_access<BlockNodeDict,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockNodeDict,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            __y._M_node = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::end(nodeMap)._M_node;
            v17._M_node = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::find(
                            nodeMap,
                            (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v1 + 48))._M_node;
            if ( std::operator==(
                   &v17,
                   (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::map<long unsigned int,SVONode*> > > >::_Self *)&__y) )
            {
              std::make_shared<std::map<unsigned long,SVONode *>>();
              v11 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                      nodeMap,
                      (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v1 + 48));
              std::shared_ptr<std::map<unsigned long,SVONode *>>::operator=(
                v11,
                (const std::shared_ptr<std::map<long unsigned int,SVONode*> > *)(v1 + 128));
              std::shared_ptr<std::map<unsigned long,SVONode *>>::~shared_ptr((std::shared_ptr<std::map<long unsigned int,SVONode*> > *const)(v1 + 128));
            }
            v12 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                    nodeMap,
                    (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v1 + 48));
            if ( std::operator!=<std::map<unsigned long,SVONode *>>(v12, 0LL) )
            {
              v13 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                      nodeMap,
                      (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v1 + 48));
              layerMap = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13);
              v14 = node;
              v15 = (unsigned __int64)std::map<unsigned long,SVONode *>::operator[](layerMap, &node->index);
              if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
                v15 = __asan_report_store8();
              *(_QWORD *)v15 = v14;
            }
          }
        }
      }
    }
    std::shared_ptr<BlockNodeDict>::~shared_ptr((std::shared_ptr<BlockNodeDict> *const)(v1 + 96));
    std::string::~string((void *)(v1 + 160));
    std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<SVOBlock>>>::operator++(
      (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > > *const)(v1 + 64),
      0);
  }
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 57: range 000000000CBD4EC0-000000000CBD624C
void __cdecl BlockPathFindingDataGenerator::SetUpBlockMap(
        BlockPathFindingDataGenerator *const this,
        int xIndexMax,
        int zIndexMax,
        std::string *p_prefix)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v7; // dl
  std::map<std::string,std::shared_ptr<SVOBlock>>::mapped_type *v9; // rax
  const int *v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  SVOLayer **v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  std::map<std::string,std::shared_ptr<BlockNodeDict>>::mapped_type *v18; // rax
  const ToTheMoonProto::SVOStructureProto *v19; // rax
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto> *v20; // rax
  const ToTheMoonProto::SVOLayerProto *v21; // rax
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto> *v22; // rax
  const google::protobuf::RepeatedField<long int> *v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  const google::protobuf::RepeatedField<int> *v26; // rax
  const int *v27; // rax
  _DWORD *v28; // rdx
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v29; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v30; // rax
  std::map<long unsigned int,SVONode*> *v31; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v32; // rax
  std::map<long unsigned int,SVONode*> *v33; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v35; // rax
  std::map<long unsigned int,SVONode*> *v36; // rax
  unsigned __int64 v37; // rax
  SVONode *v38; // r14
  unsigned __int64 v39; // rax
  std::vector<int>::size_type v40; // r14
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v41; // rax
  int *v42; // rdx
  const google::protobuf::RepeatedField<long int> *v43; // rax
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  const google::protobuf::RepeatedField<int> *v46; // rax
  const int *v47; // rax
  _DWORD *v48; // rdx
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v49; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v50; // rax
  std::map<long unsigned int,SVONode*> *v51; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v52; // rax
  std::map<long unsigned int,SVONode*> *v53; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v55; // rax
  std::map<long unsigned int,SVONode*> *v56; // rax
  unsigned __int64 v57; // rax
  SVONode *v58; // r14
  unsigned __int64 v59; // rax
  std::vector<int>::size_type v60; // r14
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v61; // rax
  int *v62; // rdx
  const google::protobuf::RepeatedField<long int> *v63; // rax
  __int64 v64; // rsi
  unsigned __int64 v65; // rax
  const google::protobuf::RepeatedField<int> *v66; // rax
  const int *v67; // rax
  _DWORD *v68; // rdx
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v69; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v70; // rax
  std::map<long unsigned int,SVONode*> *v71; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v72; // rax
  std::map<long unsigned int,SVONode*> *v73; // rax
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::mapped_type *v75; // rax
  std::map<long unsigned int,SVONode*> *v76; // rax
  unsigned __int64 v77; // rax
  SVONode *v78; // r14
  unsigned __int64 v79; // rax
  std::allocator<Const::Direction> __a; // [rsp+33h] [rbp-30Dh] BYREF
  int i; // [rsp+34h] [rbp-30Ch]
  int j; // [rsp+38h] [rbp-308h]
  int i_0; // [rsp+3Ch] [rbp-304h]
  int j_0; // [rsp+40h] [rbp-300h]
  int k; // [rsp+44h] [rbp-2FCh]
  int layer; // [rsp+48h] [rbp-2F8h]
  int cnt; // [rsp+4Ch] [rbp-2F4h]
  int n; // [rsp+50h] [rbp-2F0h]
  int n_0; // [rsp+54h] [rbp-2ECh]
  Const::Direction neighborDir; // [rsp+58h] [rbp-2E8h]
  int neighborIndex; // [rsp+5Ch] [rbp-2E4h]
  int diagonalIndex; // [rsp+60h] [rbp-2E0h]
  int planarIndex; // [rsp+64h] [rbp-2DCh]
  std::_Rb_tree_iterator<std::pair<const std::string,ToTheMoonProto::SVOBlockProto*> >::_Self v96; // [rsp+68h] [rbp-2D8h] BYREF
  ToTheMoonProto::SVOBlockProto *blockProto; // [rsp+70h] [rbp-2D0h]
  int *totoalIndex; // [rsp+78h] [rbp-2C8h]
  const std::vector<int> *planarNeighborIndexes; // [rsp+80h] [rbp-2C0h]
  const std::vector<int> *diagonalNeighborIndexes; // [rsp+88h] [rbp-2B8h]
  SVOLayer **layerData; // [rsp+90h] [rbp-2B0h]
  unsigned __int64 totalCnt; // [rsp+98h] [rbp-2A8h]
  SVONode *node; // [rsp+A0h] [rbp-2A0h]
  std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >> *nodeMap; // [rsp+A8h] [rbp-298h]
  const ToTheMoonProto::SVONodeProto *nodeProto; // [rsp+B0h] [rbp-290h]
  SVONode *neighborNode; // [rsp+B8h] [rbp-288h]
  SVONode *diagonalNeighbor; // [rsp+C0h] [rbp-280h]
  SVONode *planarNeighbor; // [rsp+C8h] [rbp-278h]
  std::pair<std::string,ToTheMoonProto::SVOBlockProto*> v109; // [rsp+D0h] [rbp-270h] BYREF
  std::pair<std::string,std::shared_ptr<SVOBlock> > __x; // [rsp+100h] [rbp-240h] BYREF
  char v111[528]; // [rsp+130h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 4 9 level:110 48 4 17 diagonalLevel:139 64 8 14 mortonCode:109 96 8 20 planarMortonCode:12"
                        "5 128 8 22 diagonalMortonCode:138 160 8 13 blockProto:64 192 16 8 block:84 224 24 15 neighborDir"
                        "s:73 288 32 9 suffix:60 352 32 9 suffix:78 416 32 11 blockKey:80";
  *(_QWORD *)(v4 + 16) = BlockPathFindingDataGenerator::SetUpBlockMap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -202116109;
  for ( i = 0; i <= xIndexMax; ++i )
  {
    for ( j = 0; j <= zIndexMax; ++j )
    {
      std::string::basic_string(v4 + 288);
      AddrProcessor::GetSuffix(i, j, (std::string *)(v4 + 288));
      std::string::basic_string(v4 + 352);
      AddrProcessor::GetBlockFileAddr(i, j, (const std::string *)(v4 + 288), (std::string *)(v4 + 352));
      std::string::basic_string(v4 + 416, v4 + 352);
      *(_QWORD *)(v4 + 160) = ProtoParser::LoadBlockProto((std::string *)(v4 + 416));
      std::string::~string((void *)(v4 + 416));
      ProtoParser::ParseProtoBlock((const ToTheMoonProto::SVOBlockProto *)(v4 + 192));
      std::pair<std::string,std::shared_ptr<SVOBlock>>::pair<std::string&,std::shared_ptr<SVOBlock>&,true>(
        &__x,
        (std::string *)(v4 + 288),
        (std::shared_ptr<SVOBlock> *)(v4 + 192));
      std::map<std::string,std::shared_ptr<SVOBlock>>::insert<std::pair<std::string,std::shared_ptr<SVOBlock>>>(
        &this->_blockMap,
        &__x);
      std::pair<std::string,std::shared_ptr<SVOBlock>>::~pair(&__x);
      std::pair<std::string,ToTheMoonProto::SVOBlockProto *>::pair<std::string&,ToTheMoonProto::SVOBlockProto *&,true>(
        &v109,
        (std::string *)(v4 + 288),
        (ToTheMoonProto::SVOBlockProto **)(v4 + 160));
      std::map<std::string,ToTheMoonProto::SVOBlockProto *>::insert<std::pair<std::string,ToTheMoonProto::SVOBlockProto *>>(
        &this->_blockProtoMap,
        &v109);
      std::pair<std::string,ToTheMoonProto::SVOBlockProto *>::~pair(&v109);
      std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v4 + 192));
      std::string::~string((void *)(v4 + 352));
      std::string::~string((void *)(v4 + 288));
    }
  }
  BlockPathFindingDataGenerator::SetUpBlockNodeDict(this);
  *(_DWORD *)(v4 + 192) = 3;
  *(_DWORD *)(v4 + 196) = 4;
  *(_DWORD *)(v4 + 200) = 1;
  *(_DWORD *)(v4 + 204) = 2;
  std::allocator<Const::Direction>::allocator(&__a);
  std::vector<Const::Direction>::vector(
    (std::vector<Const::Direction> *const)(v4 + 224),
    (std::initializer_list<Const::Direction>)__PAIR128__(4LL, v4 + 192),
    &__a);
  std::allocator<Const::Direction>::~allocator(&__a);
  for ( i_0 = 0; i_0 <= xIndexMax; ++i_0 )
  {
    for ( j_0 = 0; j_0 <= zIndexMax; ++j_0 )
    {
      for ( k = 0; k <= 3; ++k )
      {
        v7 = *(_BYTE *)(((unsigned __int64)&BlockLinker::BLOCK_NEIGHBOR_DIRS[k] >> 3) + 0x7FFF8000);
        if ( v7 != 0 && (char)(((unsigned __int8)&BlockLinker::BLOCK_NEIGHBOR_DIRS[k] & 7) + 3) >= v7 )
          __asan_report_load4(&BlockLinker::BLOCK_NEIGHBOR_DIRS[k]);
        neighborDir = BlockLinker::BLOCK_NEIGHBOR_DIRS[k];
        std::string::basic_string(v4 + 352);
        AddrProcessor::GetSuffix(i_0, j_0, (std::string *)(v4 + 352));
        std::string::basic_string(v4 + 416);
        BlockLinker::DirectionToNeighborKey((const std::string *)(v4 + 352), neighborDir, (std::string *)(v4 + 416));
        *(std::map<std::string,std::shared_ptr<SVOBlock>>::iterator *)(v4 + 128) = std::map<std::string,std::shared_ptr<SVOBlock>>::end(&this->_blockMap);
        *(std::map<std::string,std::shared_ptr<SVOBlock>>::iterator *)(v4 + 96) = std::map<std::string,std::shared_ptr<SVOBlock>>::find(
                                                                                    &this->_blockMap,
                                                                                    (const std::map<std::string,std::shared_ptr<SVOBlock>>::key_type *)(v4 + 416));
        if ( !std::operator==(
                (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::_Self *)(v4 + 96),
                (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<SVOBlock> > >::_Self *)(v4 + 128)) )
        {
          *(std::map<std::string,ToTheMoonProto::SVOBlockProto*>::iterator *)(v4 + 160) = std::map<std::string,ToTheMoonProto::SVOBlockProto *>::end(&this->_blockProtoMap);
          v96._M_node = std::map<std::string,ToTheMoonProto::SVOBlockProto *>::find(
                          &this->_blockProtoMap,
                          (const std::map<std::string,ToTheMoonProto::SVOBlockProto*>::key_type *)(v4 + 416))._M_node;
          if ( !std::operator==(
                  &v96,
                  (const std::_Rb_tree_iterator<std::pair<const std::string,ToTheMoonProto::SVOBlockProto*> >::_Self *)(v4 + 160)) )
          {
            v9 = std::map<std::string,std::shared_ptr<SVOBlock>>::operator[](
                   &this->_blockMap,
                   (const std::map<std::string,std::shared_ptr<SVOBlock>>::key_type *)(v4 + 416));
            std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)(v4 + 192), v9);
            v10 = (const int *)(v4 + 416);
            v11 = (unsigned __int64)std::map<std::string,ToTheMoonProto::SVOBlockProto *>::operator[](
                                      &this->_blockProtoMap,
                                      (const std::map<std::string,ToTheMoonProto::SVOBlockProto*>::key_type *)(v4 + 416));
            if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
              v11 = __asan_report_load8(v11, v10);
            blockProto = *(ToTheMoonProto::SVOBlockProto **)v11;
            v12 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
              v12 = __asan_report_load8(v12, v10);
            totoalIndex = (int *)(*(_QWORD *)v12 + 32LL);
            neighborIndex = BlockLinker::DirectionToNeighborIndex(neighborDir);
            planarNeighborIndexes = BlockLinker::DirectionToPlanarNeighborIndexes(neighborDir);
            diagonalNeighborIndexes = BlockLinker::DirectionToDiagonalNeighborIndexes(neighborDir);
            for ( layer = 0; layer <= 9; ++layer )
            {
              v13 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
              if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
                v13 = __asan_report_load8(v13, v10);
              v10 = (const int *)layer;
              v14 = std::vector<SVOLayer *>::operator[](*(std::vector<SVOLayer*> *const *)v13, layer);
              layerData = v14;
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v14, v10);
              if ( *layerData )
              {
                if ( *(_BYTE *)(((unsigned __int64)layerData >> 3) + 0x7FFF8000) )
                  __asan_report_load8(layerData, v10);
                totalCnt = std::vector<SVONode *>::size(&(*layerData)->nodeData);
                for ( cnt = 0; totalCnt > cnt; ++cnt )
                {
                  if ( *(_BYTE *)(((unsigned __int64)layerData >> 3) + 0x7FFF8000) )
                    __asan_report_load8(layerData, v10);
                  v15 = cnt;
                  v16 = (unsigned __int64)std::vector<SVONode *>::operator[](&(*layerData)->nodeData, cnt);
                  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
                    v16 = __asan_report_load8(v16, v15);
                  node = *(SVONode **)v16;
                  v17 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
                    v17 = __asan_report_load8(v17, v15);
                  v10 = (const int *)(*(_QWORD *)v17 + 32LL);
                  if ( SVODataProcessor::CheckNodeInNeighborEdge(node, v10, neighborDir) )
                  {
                    v18 = std::map<std::string,std::shared_ptr<BlockNodeDict>>::operator[](
                            &this->_blockNodeDictMap,
                            (const std::map<std::string,std::shared_ptr<BlockNodeDict>>::key_type *)(v4 + 352));
                    nodeMap = (std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >> *)std::__shared_ptr_access<BlockNodeDict,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockNodeDict,(__gnu_cxx::_Lock_policy)2,false,false> *const)v18);
                    v19 = ToTheMoonProto::SVOBlockProto::svo(blockProto);
                    v20 = ToTheMoonProto::SVOStructureProto::layerdata(v19);
                    v21 = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::operator[](v20, layer);
                    v22 = ToTheMoonProto::SVOLayerProto::nodedata(v21);
                    nodeProto = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::operator[](v22, cnt);
                    v23 = ToTheMoonProto::SVONodeProto::neighbors(nodeProto);
                    v24 = (unsigned int)neighborIndex;
                    v25 = (unsigned __int64)google::protobuf::RepeatedField<long>::operator[](v23, neighborIndex);
                    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                      v25 = __asan_report_load8(v25, v24);
                    *(_QWORD *)(v4 + 64) = *(_QWORD *)v25;
                    v26 = ToTheMoonProto::SVONodeProto::neighborslevel(nodeProto);
                    v27 = google::protobuf::RepeatedField<int>::operator[](v26, neighborIndex);
                    v28 = v27;
                    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v27);
                    }
                    *(_DWORD *)(v4 + 32) = *v28;
                    *(std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::iterator *)(v4 + 160) = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::end(nodeMap);
                    *(std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::iterator *)(v4 + 96) = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::find(nodeMap, (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 32));
                    v10 = (const int *)(v4 + 160);
                    if ( !std::operator==(
                            (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::map<long unsigned int,SVONode*> > > >::_Self *)(v4 + 96),
                            (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::map<long unsigned int,SVONode*> > > >::_Self *)(v4 + 160)) )
                    {
                      v29 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                              nodeMap,
                              (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 32));
                      v10 = 0LL;
                      if ( !std::operator==<std::map<unsigned long,SVONode *>>(v29, 0LL) )
                      {
                        v30 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                nodeMap,
                                (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 32));
                        v31 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v30);
                        *(std::map<long unsigned int,SVONode*>::iterator *)(v4 + 160) = std::map<unsigned long,SVONode *>::end(v31);
                        v32 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                nodeMap,
                                (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 32));
                        v33 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v32);
                        v96._M_node = std::map<unsigned long,SVONode *>::find(
                                        v33,
                                        (const std::map<long unsigned int,SVONode*>::key_type *)(v4 + 64))._M_node;
                        v10 = (const int *)(v4 + 160);
                        if ( !std::operator==(
                                (const std::_Rb_tree_iterator<std::pair<long unsigned int const,SVONode*> >::_Self *)&v96,
                                (const std::_Rb_tree_iterator<std::pair<long unsigned int const,SVONode*> >::_Self *)(v4 + 160)) )
                        {
                          v35 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                  nodeMap,
                                  (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 32));
                          v36 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v35);
                          v37 = (unsigned __int64)std::map<unsigned long,SVONode *>::operator[](
                                                    v36,
                                                    (const std::map<long unsigned int,SVONode*>::key_type *)(v4 + 64));
                          if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                            v37 = __asan_report_load8(v37, v4 + 64);
                          neighborNode = *(SVONode **)v37;
                          v38 = neighborNode;
                          v10 = (const int *)neighborIndex;
                          v39 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->neighbors, neighborIndex);
                          if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
                            v39 = __asan_report_store8();
                          *(_QWORD *)v39 = v38;
                          for ( n = 0; ; ++n )
                          {
                            v40 = n;
                            if ( v40 >= std::vector<int>::size(planarNeighborIndexes) )
                              break;
                            v41 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](planarNeighborIndexes, n);
                            v42 = v41;
                            if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v41);
                            }
                            planarIndex = *v42;
                            v43 = ToTheMoonProto::SVONodeProto::planarneighbors(nodeProto);
                            v44 = (unsigned int)planarIndex;
                            v45 = (unsigned __int64)google::protobuf::RepeatedField<long>::operator[](v43, planarIndex);
                            if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
                              v45 = __asan_report_load8(v45, v44);
                            *(_QWORD *)(v4 + 96) = *(_QWORD *)v45;
                            v46 = ToTheMoonProto::SVONodeProto::planarneighborslevel(nodeProto);
                            v47 = google::protobuf::RepeatedField<int>::operator[](v46, planarIndex);
                            v48 = v47;
                            if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v47);
                            }
                            *(_DWORD *)(v4 + 48) = *v48;
                            *(std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::iterator *)(v4 + 160) = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::end(nodeMap);
                            *(std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::iterator *)(v4 + 128) = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::find(nodeMap, (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                            v10 = (const int *)(v4 + 160);
                            if ( !std::operator==(
                                    (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::map<long unsigned int,SVONode*> > > >::_Self *)(v4 + 128),
                                    (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::map<long unsigned int,SVONode*> > > >::_Self *)(v4 + 160)) )
                            {
                              v49 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                      nodeMap,
                                      (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                              v10 = 0LL;
                              if ( !std::operator==<std::map<unsigned long,SVONode *>>(v49, 0LL) )
                              {
                                v50 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                        nodeMap,
                                        (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                                v51 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v50);
                                *(std::map<long unsigned int,SVONode*>::iterator *)(v4 + 160) = std::map<unsigned long,SVONode *>::end(v51);
                                v52 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                        nodeMap,
                                        (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                                v53 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v52);
                                v96._M_node = std::map<unsigned long,SVONode *>::find(
                                                v53,
                                                (const std::map<long unsigned int,SVONode*>::key_type *)(v4 + 96))._M_node;
                                v10 = (const int *)(v4 + 160);
                                if ( !std::operator==(
                                        (const std::_Rb_tree_iterator<std::pair<long unsigned int const,SVONode*> >::_Self *)&v96,
                                        (const std::_Rb_tree_iterator<std::pair<long unsigned int const,SVONode*> >::_Self *)(v4 + 160)) )
                                {
                                  v55 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                          nodeMap,
                                          (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                                  v56 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v55);
                                  v57 = (unsigned __int64)std::map<unsigned long,SVONode *>::operator[](
                                                            v56,
                                                            (const std::map<long unsigned int,SVONode*>::key_type *)(v4 + 96));
                                  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
                                    v57 = __asan_report_load8(v57, v4 + 96);
                                  planarNeighbor = *(SVONode **)v57;
                                  v58 = planarNeighbor;
                                  v10 = (const int *)n;
                                  v59 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->planarNeighbors, n);
                                  if ( *(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
                                    v59 = __asan_report_store8();
                                  *(_QWORD *)v59 = v58;
                                }
                              }
                            }
                          }
                          for ( n_0 = 0; ; ++n_0 )
                          {
                            v60 = n_0;
                            if ( v60 >= std::vector<int>::size(diagonalNeighborIndexes) )
                              break;
                            v61 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](diagonalNeighborIndexes, n_0);
                            v62 = v61;
                            if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v61);
                            }
                            diagonalIndex = *v62;
                            v63 = ToTheMoonProto::SVONodeProto::diagonalneighbors(nodeProto);
                            v64 = (unsigned int)diagonalIndex;
                            v65 = (unsigned __int64)google::protobuf::RepeatedField<long>::operator[](
                                                      v63,
                                                      diagonalIndex);
                            if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
                              v65 = __asan_report_load8(v65, v64);
                            *(_QWORD *)(v4 + 128) = *(_QWORD *)v65;
                            v66 = ToTheMoonProto::SVONodeProto::diagonalneighborslevel(nodeProto);
                            v67 = google::protobuf::RepeatedField<int>::operator[](v66, diagonalIndex);
                            v68 = v67;
                            if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v67);
                            }
                            *(_DWORD *)(v4 + 48) = *v68;
                            *(std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::iterator *)(v4 + 160) = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::end(nodeMap);
                            v96._M_node = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::find(
                                            nodeMap,
                                            (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48))._M_node;
                            v10 = (const int *)(v4 + 160);
                            if ( !std::operator==(
                                    (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::map<long unsigned int,SVONode*> > > >::_Self *)&v96,
                                    (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::map<long unsigned int,SVONode*> > > >::_Self *)(v4 + 160)) )
                            {
                              v69 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                      nodeMap,
                                      (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                              v10 = 0LL;
                              if ( !std::operator==<std::map<unsigned long,SVONode *>>(v69, 0LL) )
                              {
                                v70 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                        nodeMap,
                                        (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                                v71 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v70);
                                *(std::map<long unsigned int,SVONode*>::iterator *)(v4 + 160) = std::map<unsigned long,SVONode *>::end(v71);
                                v72 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                        nodeMap,
                                        (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                                v73 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v72);
                                v96._M_node = std::map<unsigned long,SVONode *>::find(
                                                v73,
                                                (const std::map<long unsigned int,SVONode*>::key_type *)(v4 + 128))._M_node;
                                v10 = (const int *)(v4 + 160);
                                if ( !std::operator==(
                                        (const std::_Rb_tree_iterator<std::pair<long unsigned int const,SVONode*> >::_Self *)&v96,
                                        (const std::_Rb_tree_iterator<std::pair<long unsigned int const,SVONode*> >::_Self *)(v4 + 160)) )
                                {
                                  v75 = std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::operator[](
                                          nodeMap,
                                          (const std::map<int,std::shared_ptr<std::map<long unsigned int,SVONode*> >>::key_type *)(v4 + 48));
                                  v76 = std::__shared_ptr_access<std::map<unsigned long,SVONode *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<long unsigned int,SVONode*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v75);
                                  v77 = (unsigned __int64)std::map<unsigned long,SVONode *>::operator[](
                                                            v76,
                                                            (const std::map<long unsigned int,SVONode*>::key_type *)(v4 + 128));
                                  if ( *(_BYTE *)((v77 >> 3) + 0x7FFF8000) )
                                    v77 = __asan_report_load8(v77, v4 + 128);
                                  diagonalNeighbor = *(SVONode **)v77;
                                  v78 = diagonalNeighbor;
                                  v10 = (const int *)n_0;
                                  v79 = (unsigned __int64)std::vector<SVONode *>::operator[](
                                                            &node->diagonalNeighbors,
                                                            n_0);
                                  if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
                                    v79 = __asan_report_store8();
                                  *(_QWORD *)v79 = v78;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v4 + 192));
          }
        }
        std::string::~string((void *)(v4 + 416));
        std::string::~string((void *)(v4 + 352));
      }
    }
  }
  std::vector<Const::Direction>::~vector((std::vector<Const::Direction> *const)(v4 + 224));
  if ( v111 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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

// Line 156: range 000000000CBD624E-000000000CBD62D0
void __cdecl BlockPathFindingDataGenerator::BlockPathFindingDataGenerator(BlockPathFindingDataGenerator *const this)
{
  std::map<std::string,std::shared_ptr<SVOBlock>>::map(&this->_blockMap);
  std::map<std::string,ToTheMoonProto::SVOBlockProto *>::map(&this->_blockProtoMap);
  std::map<std::string,std::shared_ptr<BlockNodeDict>>::map(&this->_blockNodeDictMap);
  if ( *(_BYTE *)(((unsigned __int64)&this->nodeMap >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->nodeMap = 0LL;
  std::map<IntPair,std::shared_ptr<NodePairMap>>::map(&this->worldNodeMap);
};

// Line 160: range 000000000CBD62D2-000000000CBD642F
void __cdecl BlockPathFindingDataGenerator::~BlockPathFindingDataGenerator(BlockPathFindingDataGenerator *const this)
{
  _QWORD *p_vptr_MessageLite; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  std::map<std::string,ToTheMoonProto::SVOBlockProto*>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::string,ToTheMoonProto::SVOBlockProto*>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  std::map<std::string,ToTheMoonProto::SVOBlockProto*> *__for_range; // [rsp+28h] [rbp-18h]
  std::pair<const std::string,ToTheMoonProto::SVOBlockProto*> *blockProtoPair; // [rsp+30h] [rbp-10h]
  ToTheMoonProto::SVOBlockProto *blockProtoPtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->_blockProtoMap;
  __for_begin._M_node = std::map<std::string,ToTheMoonProto::SVOBlockProto *>::begin(&this->_blockProtoMap)._M_node;
  __for_end._M_node = std::map<std::string,ToTheMoonProto::SVOBlockProto *>::end(&this->_blockProtoMap)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    blockProtoPair = std::_Rb_tree_iterator<std::pair<std::string const,ToTheMoonProto::SVOBlockProto *>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&blockProtoPair->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&blockProtoPair->second, &__for_end);
    blockProtoPtr = blockProtoPair->second;
    if ( blockProtoPtr )
    {
      p_vptr_MessageLite = &blockProtoPtr->_vptr_MessageLite;
      if ( *(_BYTE *)(((unsigned __int64)blockProtoPtr >> 3) + 0x7FFF8000) )
        p_vptr_MessageLite = (_QWORD *)__asan_report_load8(blockProtoPtr, &__for_end);
      v2 = *p_vptr_MessageLite + 8LL;
      v3 = *(unsigned __int8 *)((v2 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v3 )
        p_vptr_MessageLite = (_QWORD *)__asan_report_load8(*p_vptr_MessageLite + 8LL, v3);
      (*(void (__fastcall **)(_QWORD *))v2)(p_vptr_MessageLite);
      blockProtoPtr = 0LL;
    }
    std::_Rb_tree_iterator<std::pair<std::string const,ToTheMoonProto::SVOBlockProto *>>::operator++(&__for_begin);
  }
  std::map<std::string,ToTheMoonProto::SVOBlockProto *>::clear(&this->_blockProtoMap);
  std::map<IntPair,std::shared_ptr<NodePairMap>>::~map(&this->worldNodeMap);
  std::map<std::string,std::shared_ptr<BlockNodeDict>>::~map(&this->_blockNodeDictMap);
  std::map<std::string,ToTheMoonProto::SVOBlockProto *>::~map(&this->_blockProtoMap);
  std::map<std::string,std::shared_ptr<SVOBlock>>::~map(&this->_blockMap);
};

// Line 171: range 000000000CBD6430-000000000CBD7A96
std::shared_ptr<SVOBlock> __cdecl BlockPathFindingDataGenerator::ProcessBlockProto(
        BlockPathFindingDataGenerator *const this,
        const ToTheMoonProto::SVOBlockProto *blockProto,
        NodePairMap *outerNodeMap)
{
  NodePairMap *v3; // rcx
  __m128i v4; // xmm0
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  char v10; // dl
  std::shared_ptr<SVOBlock> result; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  char v14; // al
  NodePairMap *nodeMap; // r13
  unsigned __int64 v16; // rax
  SVOLayer **v17; // rax
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto> *v18; // rax
  unsigned __int64 v19; // rax
  SVONode *NodeInBlock; // rax
  unsigned __int64 v21; // rax
  std::vector<SVOLayer*>::size_type v22; // rsi
  unsigned __int64 v23; // rax
  SVOLayer *v24; // r13
  uint64_t v25; // rdi
  SVONode **ChildNodePointerInBlock; // rax
  const google::protobuf::RepeatedField<long int> *v27; // rax
  unsigned __int64 v28; // rax
  const google::protobuf::RepeatedField<int> *v29; // rax
  int *v30; // rax
  int *v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  ToTheMoonVector3 *v37; // r13
  ToTheMoonVector3 *v38; // rdx
  std::vector<int>::reference v39; // rax
  int *v40; // rdx
  char v41; // cl
  _BOOL8 v42; // rsi
  float v43; // xmm0_4
  ToTheMoonVector3 *referPos; // rdx
  float v45; // xmm0_4
  char v46; // cl
  ToTheMoonVector3 *v47; // rdx
  char v48; // cl
  std::vector<int>::reference v49; // rax
  int *v50; // rdx
  char v51; // cl
  __int64 v52; // rsi
  float v53; // xmm0_4
  ToTheMoonVector3 *v54; // rdx
  float v55; // xmm0_4
  char v56; // cl
  ToTheMoonVector3 *v57; // rdx
  char v58; // cl
  std::vector<int>::reference v59; // rax
  int *v60; // rdx
  char v61; // cl
  __int64 v62; // rsi
  float v63; // xmm0_4
  ToTheMoonVector3 *v64; // rdx
  float v65; // xmm0_4
  char v66; // cl
  ToTheMoonVector3 *v67; // r13
  ToTheMoonVector3 *v68; // rdx
  std::vector<int>::reference v69; // rax
  int *v70; // rdx
  char v71; // cl
  _BOOL8 v72; // rsi
  float v73; // xmm0_4
  ToTheMoonVector3 *centerPos; // rdx
  float v75; // xmm0_4
  char v76; // cl
  ToTheMoonVector3 *v77; // rdx
  char v78; // cl
  std::vector<int>::reference v79; // rax
  int *v80; // rdx
  char v81; // cl
  __int64 v82; // rsi
  float v83; // xmm0_4
  ToTheMoonVector3 *v84; // rdx
  float v85; // xmm0_4
  char v86; // cl
  ToTheMoonVector3 *v87; // rdx
  char v88; // cl
  std::vector<int>::reference v89; // rax
  int *v90; // rdx
  char v91; // cl
  __int64 v92; // rsi
  ToTheMoonVector3 *v93; // rdx
  float v94; // xmm0_4
  NodePairMap *v95; // r13
  float x; // [rsp+Ch] [rbp-1D4h]
  float y; // [rsp+Ch] [rbp-1D4h]
  float z; // [rsp+Ch] [rbp-1D4h]
  float v99; // [rsp+Ch] [rbp-1D4h]
  float v100; // [rsp+Ch] [rbp-1D4h]
  float v101; // [rsp+Ch] [rbp-1D4h]
  NodePairMap *outerNodeMapa; // [rsp+10h] [rbp-1D0h]
  BlockPathFindingDataGenerator *thisa; // [rsp+20h] [rbp-1C0h]
  int i; // [rsp+38h] [rbp-1A8h]
  int j; // [rsp+3Ch] [rbp-1A4h]
  int k; // [rsp+40h] [rbp-1A0h]
  int neighborLevel; // [rsp+44h] [rbp-19Ch]
  float levelSize; // [rsp+48h] [rbp-198h]
  std::vector<SVOLayer*>::iterator __for_begin; // [rsp+50h] [rbp-190h] BYREF
  std::vector<SVOLayer*>::iterator __for_end; // [rsp+58h] [rbp-188h] BYREF
  std::vector<SVONode*>::iterator __for_begin_0; // [rsp+60h] [rbp-180h] BYREF
  std::vector<SVONode*>::iterator __for_end_0; // [rsp+68h] [rbp-178h] BYREF
  __int64 start; // [rsp+70h] [rbp-170h]
  SVOLayer **layerData; // [rsp+78h] [rbp-168h]
  std::vector<SVONode*> *nodeData; // [rsp+80h] [rbp-160h]
  const ToTheMoonProto::SVOStructureProto *protoSvoData; // [rsp+88h] [rbp-158h]
  const ToTheMoonProto::SVOLayerProto *protoLayerData; // [rsp+90h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto> *protoNodeData; // [rsp+98h] [rbp-148h]
  SVONode *node; // [rsp+A0h] [rbp-140h]
  const ToTheMoonProto::SVONodeProto *rawNodeData; // [rsp+A8h] [rbp-138h]
  int64_t neighborIndex; // [rsp+B0h] [rbp-130h]
  SVONode *neighborPtr; // [rsp+B8h] [rbp-128h]
  __int64 startPosTime; // [rsp+C0h] [rbp-120h]
  std::vector<SVOLayer*> *__for_range; // [rsp+C8h] [rbp-118h]
  __int64 finishPosTime; // [rsp+D0h] [rbp-110h]
  __int64 finish; // [rsp+D8h] [rbp-108h]
  SVOLayer *layerData_0; // [rsp+E0h] [rbp-100h]
  std::vector<SVONode*> *__for_range_0; // [rsp+E8h] [rbp-F8h]
  SVONode *node_0; // [rsp+F0h] [rbp-F0h]
  ToTheMoonVector3 **basePos; // [rsp+F8h] [rbp-E8h]
  std::shared_ptr<NodePairMap> p_targetNodeMap; // [rsp+100h] [rbp-E0h] BYREF
  common::milog::MiLogStream v134; // [rsp+110h] [rbp-D0h] BYREF
  char v135[176]; // [rsp+130h] [rbp-B0h] BYREF

  thisa = (BlockPathFindingDataGenerator *)blockProto;
  outerNodeMapa = v3;
  v5 = (unsigned __int64)v135;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 13 blockData:183 64 24 12 posIndex:264";
  *(_QWORD *)(v5 + 16) = BlockPathFindingDataGenerator::ProcessBlockProto;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  start = clock();
  if ( outerNodeMapa )
  {
    if ( *(_BYTE *)(((unsigned __int64)&blockProto[2]._blockindex_cached_byte_size_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)&blockProto[2]._blockindex_cached_byte_size_ = outerNodeMapa;
  }
  else
  {
    v8 = operator new(0x38uLL);
    v9 = v8;
    v10 = *(_BYTE *)(((v8 + 55) >> 3) + 0x7FFF8000);
    LOBYTE(blockProto) = v10 != 0;
    if ( *(char *)((v8 >> 3) + 0x7FFF8000) < 0 || v10 != 0 && (char)((v8 + 55) & 7) >= v10 )
    {
      blockProto = (const ToTheMoonProto::SVOBlockProto *)56;
      __asan_report_store_n(v8, 56LL);
    }
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 48) = 0LL;
    NodePairMap::NodePairMap((NodePairMap *const)v9);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->nodeMap >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    thisa->nodeMap = (NodePairMap *)v9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->nodeMap >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->nodeMap, blockProto);
  if ( thisa->nodeMap )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->nodeMap >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->nodeMap, blockProto);
    SVOBuilder::ProtoToBlock((const ToTheMoonProto::SVOBlockProto *)(v5 + 32), outerNodeMap);
    v12 = 0LL;
    if ( std::operator==<SVOBlock>((const std::shared_ptr<SVOBlock> *)(v5 + 32), 0LL) || !outerNodeMap )
      goto LABEL_24;
    v13 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(v13, 0LL);
    if ( std::vector<SVOLayer *>::size(*(const std::vector<SVOLayer*> *const *)v13) > 9 )
      v14 = 0;
    else
LABEL_24:
      v14 = 1;
    if ( v14 )
    {
      if ( !outerNodeMapa )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->nodeMap >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->nodeMap, 0LL);
        if ( thisa->nodeMap )
        {
          nodeMap = thisa->nodeMap;
          if ( nodeMap )
          {
            NodePairMap::~NodePairMap(thisa->nodeMap);
            operator delete(nodeMap, 0x38uLL);
          }
          if ( *(_BYTE *)(((unsigned __int64)&thisa->nodeMap >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          thisa->nodeMap = 0LL;
        }
      }
      std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)this, 0LL);
    }
    else
    {
      for ( i = 0; i <= 9; ++i )
      {
        v16 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(v16, v12);
        v12 = i;
        v17 = std::vector<SVOLayer *>::operator[](*(std::vector<SVOLayer*> *const *)v16, i);
        layerData = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v17, i);
        if ( *layerData )
        {
          if ( *(_BYTE *)(((unsigned __int64)layerData >> 3) + 0x7FFF8000) )
            __asan_report_load8(layerData, i);
          nodeData = &(*layerData)->nodeData;
          protoSvoData = ToTheMoonProto::SVOBlockProto::svo((const ToTheMoonProto::SVOBlockProto *const)outerNodeMap);
          v18 = ToTheMoonProto::SVOStructureProto::layerdata(protoSvoData);
          v12 = (unsigned int)i;
          protoLayerData = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::operator[](v18, i);
          protoNodeData = ToTheMoonProto::SVOLayerProto::nodedata(protoLayerData);
          for ( j = 0; j < std::vector<SVONode *>::size(nodeData); ++j )
          {
            v19 = (unsigned __int64)std::vector<SVONode *>::operator[](nodeData, j);
            if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
              v19 = __asan_report_load8(v19, j);
            node = *(SVONode **)v19;
            rawNodeData = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::operator[](protoNodeData, j);
            std::shared_ptr<NodePairMap>::shared_ptr(&p_targetNodeMap, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node->index, 0LL);
            v12 = (unsigned int)i;
            NodeInBlock = BlockPathFindingDataGenerator::GetNodeInBlock(
                            thisa,
                            i,
                            node->index >> 3,
                            parent,
                            0,
                            &p_targetNodeMap);
            if ( *(_BYTE *)(((unsigned __int64)&node->parent >> 3) + 0x7FFF8000) )
              NodeInBlock = (SVONode *)__asan_report_store8();
            node->parent = NodeInBlock;
            std::shared_ptr<NodePairMap>::~shared_ptr(&p_targetNodeMap);
            if ( i > 0 )
            {
              std::shared_ptr<NodePairMap>::shared_ptr(&p_targetNodeMap, 0LL);
              v21 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
              if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                v21 = __asan_report_load8(v21, 0LL);
              v22 = i - 1;
              v23 = (unsigned __int64)std::vector<SVOLayer *>::operator[](*(std::vector<SVOLayer*> *const *)v21, v22);
              if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
                v23 = __asan_report_load8(v23, v22);
              v24 = *(SVOLayer **)v23;
              v25 = ToTheMoonProto::SVONodeProto::children(rawNodeData);
              v12 = (unsigned int)i;
              ChildNodePointerInBlock = BlockPathFindingDataGenerator::GetChildNodePointerInBlock(
                                          thisa,
                                          i,
                                          v25,
                                          v24,
                                          &p_targetNodeMap);
              if ( *(_BYTE *)(((unsigned __int64)&node->children >> 3) + 0x7FFF8000) )
                ChildNodePointerInBlock = (SVONode **)__asan_report_store8();
              node->children = ChildNodePointerInBlock;
              std::shared_ptr<NodePairMap>::~shared_ptr(&p_targetNodeMap);
            }
            for ( k = 0; k < ToTheMoonProto::SVONodeProto::neighbors_size(rawNodeData); ++k )
            {
              v27 = ToTheMoonProto::SVONodeProto::neighbors(rawNodeData);
              v12 = (unsigned int)k;
              v28 = (unsigned __int64)google::protobuf::RepeatedField<long>::operator[](v27, k);
              if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
                v28 = __asan_report_load8(v28, (unsigned int)k);
              neighborIndex = *(_QWORD *)v28;
              if ( neighborIndex >= 0 )
              {
                v29 = ToTheMoonProto::SVONodeProto::neighborslevel(rawNodeData);
                v30 = (int *)google::protobuf::RepeatedField<int>::operator[](v29, k);
                v31 = v30;
                if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                {
                  *(double *)v4.m128i_i64 = __asan_report_load4(v30);
                }
                neighborLevel = *v31;
                std::shared_ptr<NodePairMap>::shared_ptr(&p_targetNodeMap, 0LL);
                neighborPtr = BlockPathFindingDataGenerator::GetNodeInBlock(
                                thisa,
                                i,
                                neighborIndex,
                                neighbor,
                                neighborLevel,
                                &p_targetNodeMap);
                std::shared_ptr<NodePairMap>::~shared_ptr(&p_targetNodeMap);
                v12 = k;
                v32 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->neighbors, k);
                if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                  v32 = __asan_report_store8();
                *(_QWORD *)v32 = neighborPtr;
              }
            }
          }
        }
      }
      startPosTime = clock();
      v33 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
        v33 = __asan_report_load8(v33, v12);
      __for_range = *(std::vector<SVOLayer*> **)v33;
      __for_begin._M_current = std::vector<SVOLayer *>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<SVOLayer *>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<SVOLayer **,std::vector<SVOLayer *>>(&__for_begin, &__for_end) )
      {
        v34 = (unsigned __int64)__gnu_cxx::__normal_iterator<SVOLayer **,std::vector<SVOLayer *>>::operator*(&__for_begin);
        if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
          v34 = __asan_report_load8(v34, &__for_end);
        layerData_0 = *(SVOLayer **)v34;
        if ( *(_BYTE *)(((unsigned __int64)layerData_0 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)layerData_0 >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)v4.m128i_i64 = __asan_report_load4(layerData_0);
        }
        *(float *)v4.m128i_i32 = SVODataProcessor::GetLevelSize(layerData_0->level);
        levelSize = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
        v4 = (__m128i)LODWORD(levelSize);
        __for_range_0 = &layerData_0->nodeData;
        __for_begin_0._M_current = std::vector<SVONode *>::begin(&layerData_0->nodeData)._M_current;
        __for_end_0._M_current = std::vector<SVONode *>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<SVONode **,std::vector<SVONode *>>(&__for_begin_0, &__for_end_0) )
        {
          v35 = (unsigned __int64)__gnu_cxx::__normal_iterator<SVONode **,std::vector<SVONode *>>::operator*(&__for_begin_0);
          if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
            v35 = __asan_report_load8(v35, &__for_end_0);
          node_0 = *(SVONode **)v35;
          v36 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
          if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
            v36 = __asan_report_load8(v36, &__for_end_0);
          basePos = (ToTheMoonVector3 **)(*(_QWORD *)v36 + 24LL);
          if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
            __asan_report_load8(basePos, &__for_end_0);
          if ( *basePos )
          {
            std::vector<int>::vector((std::vector<int> *const)(v5 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&node_0->index >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node_0->index, &__for_end_0);
            MortonCodeCalculator::MortonCodeIndexToCoordination(node_0->index, (std::vector<int> *)(v5 + 64));
            v37 = (ToTheMoonVector3 *)operator new(0xCuLL);
            ToTheMoonVector3::ToTheMoonVector3(v37);
            if ( *(_BYTE *)(((unsigned __int64)&node_0->referPos >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            node_0->referPos = v37;
            if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
              __asan_report_load8(basePos, v5 + 64);
            v38 = *basePos;
            if ( *(_BYTE *)(((unsigned __int64)*basePos >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)*basePos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)*basePos >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(*basePos);
            }
            x = v38->x;
            v39 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 64), 0LL);
            v40 = v39;
            v41 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
            v42 = v41 != 0;
            if ( v41 != 0 && (char)(((unsigned __int8)v39 & 7) + 3) >= v41 )
              __asan_report_load4(v39);
            v43 = (float)*v40 * levelSize;
            if ( *(_BYTE *)(((unsigned __int64)&node_0->referPos >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node_0->referPos, v42);
            referPos = node_0->referPos;
            v45 = v43 + x;
            v46 = *(_BYTE *)(((unsigned __int64)referPos >> 3) + 0x7FFF8000);
            LOBYTE(v42) = v46 != 0;
            if ( v46 != 0 && (char)(((unsigned __int8)referPos & 7) + 3) >= v46 )
              __asan_report_store4(node_0->referPos);
            referPos->x = v45;
            if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
              __asan_report_load8(basePos, v42);
            v47 = *basePos;
            v48 = *(_BYTE *)(((unsigned __int64)&(*basePos)->y >> 3) + 0x7FFF8000);
            if ( v48 != 0 && (char)(((*(_BYTE *)basePos + 4) & 7) + 3) >= v48 )
              __asan_report_load4(&(*basePos)->y);
            y = v47->y;
            v52 = 1LL;
            v49 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 64), 1uLL);
            v50 = v49;
            v51 = *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000);
            LOBYTE(v52) = v51 != 0;
            if ( v51 != 0 && (char)(((unsigned __int8)v49 & 7) + 3) >= v51 )
              __asan_report_load4(v49);
            v53 = (float)*v50 * levelSize;
            if ( *(_BYTE *)(((unsigned __int64)&node_0->referPos >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node_0->referPos, v52);
            v54 = node_0->referPos;
            v55 = v53 + y;
            v56 = *(_BYTE *)(((unsigned __int64)&v54->y >> 3) + 0x7FFF8000);
            LOBYTE(v52) = v56 != 0;
            if ( v56 != 0 && (char)((((_BYTE)v54 + 4) & 7) + 3) >= v56 )
              __asan_report_store4(&v54->y);
            v54->y = v55;
            if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
              __asan_report_load8(basePos, v52);
            v57 = *basePos;
            v58 = *(_BYTE *)(((unsigned __int64)&(*basePos)->z >> 3) + 0x7FFF8000);
            if ( v58 != 0 && (char)(((*(_BYTE *)basePos + 8) & 7) + 3) >= v58 )
              __asan_report_load4(&(*basePos)->z);
            z = v57->z;
            v62 = 2LL;
            v59 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 64), 2uLL);
            v60 = v59;
            v61 = *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000);
            LOBYTE(v62) = v61 != 0;
            if ( v61 != 0 && (char)(((unsigned __int8)v59 & 7) + 3) >= v61 )
              __asan_report_load4(v59);
            v63 = (float)*v60 * levelSize;
            if ( *(_BYTE *)(((unsigned __int64)&node_0->referPos >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node_0->referPos, v62);
            v64 = node_0->referPos;
            v65 = v63 + z;
            v66 = *(_BYTE *)(((unsigned __int64)&v64->z >> 3) + 0x7FFF8000);
            LOBYTE(v62) = v66 != 0;
            if ( v66 != 0 && (char)((((_BYTE)v64 + 8) & 7) + 3) >= v66 )
              __asan_report_store4(&v64->z);
            v64->z = v65;
            v67 = (ToTheMoonVector3 *)operator new(0xCuLL);
            ToTheMoonVector3::ToTheMoonVector3(v67);
            if ( *(_BYTE *)(((unsigned __int64)&node_0->centerPos >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            node_0->centerPos = v67;
            if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
              __asan_report_load8(basePos, v62);
            v68 = *basePos;
            if ( *(_BYTE *)(((unsigned __int64)*basePos >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)*basePos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)*basePos >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(*basePos);
            }
            v99 = v68->x;
            v69 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 64), 0LL);
            v70 = v69;
            v71 = *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000);
            v72 = v71 != 0;
            if ( v71 != 0 && (char)(((unsigned __int8)v69 & 7) + 3) >= v71 )
              __asan_report_load4(v69);
            v73 = (float)((float)*v70 + 0.5) * levelSize;
            if ( *(_BYTE *)(((unsigned __int64)&node_0->centerPos >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node_0->centerPos, v72);
            centerPos = node_0->centerPos;
            v75 = v73 + v99;
            v76 = *(_BYTE *)(((unsigned __int64)centerPos >> 3) + 0x7FFF8000);
            LOBYTE(v72) = v76 != 0;
            if ( v76 != 0 && (char)(((unsigned __int8)centerPos & 7) + 3) >= v76 )
              __asan_report_store4(node_0->centerPos);
            centerPos->x = v75;
            if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
              __asan_report_load8(basePos, v72);
            v77 = *basePos;
            v78 = *(_BYTE *)(((unsigned __int64)&(*basePos)->y >> 3) + 0x7FFF8000);
            if ( v78 != 0 && (char)(((*(_BYTE *)basePos + 4) & 7) + 3) >= v78 )
              __asan_report_load4(&(*basePos)->y);
            v100 = v77->y;
            v82 = 1LL;
            v79 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 64), 1uLL);
            v80 = v79;
            v81 = *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000);
            LOBYTE(v82) = v81 != 0;
            if ( v81 != 0 && (char)(((unsigned __int8)v79 & 7) + 3) >= v81 )
              __asan_report_load4(v79);
            v83 = (float)((float)*v80 + 0.5) * levelSize;
            if ( *(_BYTE *)(((unsigned __int64)&node_0->centerPos >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node_0->centerPos, v82);
            v84 = node_0->centerPos;
            v85 = v83 + v100;
            v86 = *(_BYTE *)(((unsigned __int64)&v84->y >> 3) + 0x7FFF8000);
            LOBYTE(v82) = v86 != 0;
            if ( v86 != 0 && (char)((((_BYTE)v84 + 4) & 7) + 3) >= v86 )
              __asan_report_store4(&v84->y);
            v84->y = v85;
            if ( *(_BYTE *)(((unsigned __int64)basePos >> 3) + 0x7FFF8000) )
              __asan_report_load8(basePos, v82);
            v87 = *basePos;
            v88 = *(_BYTE *)(((unsigned __int64)&(*basePos)->z >> 3) + 0x7FFF8000);
            if ( v88 != 0 && (char)(((*(_BYTE *)basePos + 8) & 7) + 3) >= v88 )
              __asan_report_load4(&(*basePos)->z);
            v101 = v87->z;
            v92 = 2LL;
            v89 = std::vector<int>::operator[]((std::vector<int> *const)(v5 + 64), 2uLL);
            v90 = v89;
            v91 = *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000);
            LOBYTE(v92) = v91 != 0;
            if ( v91 != 0 && (char)(((unsigned __int8)v89 & 7) + 3) >= v91 )
              __asan_report_load4(v89);
            v4 = (__m128i)0x3F000000u;
            *(float *)v4.m128i_i32 = (float)((float)*v90 + 0.5) * levelSize;
            if ( *(_BYTE *)(((unsigned __int64)&node_0->centerPos >> 3) + 0x7FFF8000) )
              __asan_report_load8(&node_0->centerPos, v92);
            v93 = node_0->centerPos;
            v94 = *(float *)v4.m128i_i32 + v101;
            if ( *(_BYTE *)(((unsigned __int64)&v93->z >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v93 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v93->z >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(&v93->z);
            }
            v93->z = v94;
            std::vector<int>::~vector((std::vector<int> *const)(v5 + 64));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v134,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/tothemoon/Internal/AStarPathFinding/DataProcess/path_finding_data_generator.cpp",
              "ProcessBlockProto",
              261);
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              &v134,
              (const char (*)[16])"BasePos is null");
            common::milog::MiLogStream::~MiLogStream(&v134);
          }
          __gnu_cxx::__normal_iterator<SVONode **,std::vector<SVONode *>>::operator++(&__for_begin_0);
        }
        __gnu_cxx::__normal_iterator<SVOLayer **,std::vector<SVOLayer *>>::operator++(&__for_begin);
      }
      finishPosTime = clock();
      if ( !outerNodeMapa )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->nodeMap >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->nodeMap, &__for_end);
        if ( thisa->nodeMap )
        {
          v95 = thisa->nodeMap;
          if ( v95 )
          {
            NodePairMap::~NodePairMap(thisa->nodeMap);
            operator delete(v95, 0x38uLL);
          }
          if ( *(_BYTE *)(((unsigned __int64)&thisa->nodeMap >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          thisa->nodeMap = 0LL;
        }
      }
      finish = clock();
      std::shared_ptr<SVOBlock>::shared_ptr(
        (std::shared_ptr<SVOBlock> *const)this,
        (std::shared_ptr<SVOBlock> *)(v5 + 32));
    }
    std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v5 + 32));
  }
  else
  {
    std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)this, 0LL);
  }
  if ( v135 == (char *)v5 )
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
  result._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 290: range 000000000CBD7A98-000000000CBD7B78
std::shared_ptr<SVOBlock> __cdecl BlockPathFindingDataGenerator::ProcessWorldBlockProto(
        BlockPathFindingDataGenerator *const this,
        const IntPair *blockIndex,
        const ToTheMoonProto::SVOBlockProto *blockProto)
{
  NodePairMap *v3; // rcx
  std::shared_ptr<NodePairMap> *v4; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v5; // rax
  std::shared_ptr<SVOBlock> result; // rax
  NodePairMap *blockProtoa; // [rsp+0h] [rbp-40h]
  std::shared_ptr<NodePairMap> __r; // [rsp+20h] [rbp-20h] BYREF

  blockProtoa = v3;
  std::make_shared<NodePairMap>();
  v4 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
         (std::map<IntPair,std::shared_ptr<NodePairMap>> *const)&blockIndex[19],
         (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)blockProto);
  std::shared_ptr<NodePairMap>::operator=(v4, &__r);
  std::shared_ptr<NodePairMap>::~shared_ptr(&__r);
  v5 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
         (std::map<IntPair,std::shared_ptr<NodePairMap>> *const)&blockIndex[19],
         (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)blockProto);
  std::__shared_ptr<NodePairMap,(__gnu_cxx::_Lock_policy)2>::get(v5);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, blockProto);
  result = BlockPathFindingDataGenerator::ProcessBlockProto(
             this,
             (const ToTheMoonProto::SVOBlockProto *)blockIndex,
             blockProtoa);
  result._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 296: range 000000000CBD7B7A-000000000CBD7CF7
std::shared_ptr<SVOWorld> __cdecl BlockPathFindingDataGenerator::ProcessBlockProtoMapToWorldWithInterBlockLink(
        BlockPathFindingDataGenerator *const this,
        const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *blockProtoMap)
{
  std::map<IntPair,std::shared_ptr<NodePairMap>> *v2; // rdx
  unsigned __int64 p_M_parent; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<SVOWorld> result; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>> *blockProtoMapa; // [rsp+8h] [rbp-88h]
  std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> v8[2]; // [rsp+20h] [rbp-70h] BYREF

  blockProtoMapa = v2;
  p_M_parent = (unsigned __int64)&v8[0]._M_t._M_impl._M_header._M_parent;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      p_M_parent = v4;
  }
  *(_QWORD *)p_M_parent = 1102416563LL;
  *(_QWORD *)(p_M_parent + 8) = "1 32 16 13 worldData:297";
  *(_QWORD *)(p_M_parent + 16) = BlockPathFindingDataGenerator::ProcessBlockProtoMapToWorldWithInterBlockLink;
  v5 = p_M_parent >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  SVOBuilder::BlockProtoToWorld(
    (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *)(p_M_parent + 32),
    blockProtoMapa,
    (BlockPathFindingDataGenerator *)&blockProtoMap[3]._M_t._M_impl.std::_Rb_tree_header);
  std::shared_ptr<SVOWorld>::shared_ptr(
    (std::shared_ptr<SVOWorld> *const)v8,
    (const std::shared_ptr<SVOWorld> *)(p_M_parent + 32));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, p_M_parent + 32);
  BlockPathFindingDataGenerator::BuildWorldNodeLinks(this, (std::shared_ptr<SVOWorld> *)blockProtoMap, v8);
  std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)v8);
  std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)(p_M_parent + 32));
  if ( &v8[0]._M_t._M_impl._M_header._M_parent == (std::_Rb_tree_node_base::_Base_ptr *)p_M_parent )
  {
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_parent = 1172321806LL;
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 303: range 000000000CBD7CF8-000000000CBD7DF1
std::shared_ptr<SVOWorld> __cdecl BlockPathFindingDataGenerator::ProcessBlockProtoMapToWorldWithoutInterBlockLink(
        BlockPathFindingDataGenerator *const this,
        const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *blockProtoMap)
{
  std::map<IntPair,std::shared_ptr<NodePairMap>> *v2; // rdx
  BlockPathFindingDataGenerator *v3; // rdi
  std::shared_ptr<SVOWorld> result; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>> *blockProtoMapa; // [rsp+8h] [rbp-68h]
  std::shared_ptr<SVOWorld> v7; // [rsp+20h] [rbp-50h] BYREF
  std::map<IntPair,std::shared_ptr<NodePairMap>> p_worldNodeMap; // [rsp+30h] [rbp-40h] BYREF

  blockProtoMapa = v2;
  v3 = (BlockPathFindingDataGenerator *)&blockProtoMap[3]._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v3 = this;
    __asan_report_store16(this, blockProtoMap);
  }
  SVOBuilder::BlockProtoToWorld(
    (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *)this,
    blockProtoMapa,
    v3);
  std::map<IntPair,std::shared_ptr<NodePairMap>>::map(
    &p_worldNodeMap,
    (const std::map<IntPair,std::shared_ptr<NodePairMap>> *)&blockProtoMap[3]._M_t._M_impl.std::_Rb_tree_header);
  std::shared_ptr<SVOWorld>::shared_ptr(&v7, (const std::shared_ptr<SVOWorld> *)this);
  BlockLinker::LinkWorld(&v7, &p_worldNodeMap);
  std::shared_ptr<SVOWorld>::~shared_ptr(&v7);
  std::map<IntPair,std::shared_ptr<NodePairMap>>::~map(&p_worldNodeMap);
  result._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 310: range 000000000CBD7DF2-000000000CBD87C0
void __cdecl BlockPathFindingDataGenerator::UpdateWorldBlockNeighbors(
        BlockPathFindingDataGenerator *const this,
        std::shared_ptr<SVOBlock> *p_updatedBlock,
        const IntPair *blockIndex,
        BlockPathFindingDataGenerator *blockGenerator,
        std::shared_ptr<ToTheMoonProto::SVOBlockProto> *p_blockProto,
        std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *p_blockMap)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  char v14; // dl
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  char v18; // cl
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int maxX; // [rsp+3Ch] [rbp-144h]
  int maxY; // [rsp+40h] [rbp-140h]
  int maxZ; // [rsp+44h] [rbp-13Ch]
  int y; // [rsp+48h] [rbp-138h]
  int z; // [rsp+4Ch] [rbp-134h]
  int x; // [rsp+50h] [rbp-130h]
  int y_0; // [rsp+54h] [rbp-12Ch]
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self __x; // [rsp+58h] [rbp-128h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self __y; // [rsp+60h] [rbp-120h] BYREF
  const ToTheMoonProto::SVOStructureProto *svoDataProto; // [rsp+68h] [rbp-118h]
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto> *layerDataProtos; // [rsp+70h] [rbp-110h]
  const ToTheMoonProto::SVOLayerProto *layerProto; // [rsp+78h] [rbp-108h]
  unsigned __int64 index1; // [rsp+80h] [rbp-100h]
  unsigned __int64 index2; // [rsp+88h] [rbp-F8h]
  unsigned __int64 index3; // [rsp+90h] [rbp-F0h]
  unsigned __int64 index4; // [rsp+98h] [rbp-E8h]
  std::shared_ptr<NodePairMap> p_blockNodeMap; // [rsp+A0h] [rbp-E0h] BYREF
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > v47; // [rsp+B0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v48; // [rsp+C0h] [rbp-C0h] BYREF
  std::string val; // [rsp+E0h] [rbp-A0h] BYREF
  char v50[128]; // [rsp+100h] [rbp-80h] BYREF

  v6 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 9 level:320 64 16 16 blockNodeMap:315";
  *(_QWORD *)(v6 + 16) = BlockPathFindingDataGenerator::UpdateWorldBlockNeighbors;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202178560;
  __y._M_node = std::map<IntPair,std::shared_ptr<NodePairMap>>::end(&this->worldNodeMap)._M_node;
  __x._M_node = std::map<IntPair,std::shared_ptr<NodePairMap>>::find(&this->worldNodeMap, blockIndex)._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/path_finding_data_generator.cpp",
      "UpdateWorldBlockNeighbors",
      312);
    v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v48,
           (const char (*)[41])"[UpdateWorldBlockNeighbors] block index ");
    IntPair::ToString[abi:cxx11](&val, blockIndex);
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v10, (const char (*)[22])"not in world node map");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v48);
  }
  else
  {
    v11 = std::map<IntPair,std::shared_ptr<NodePairMap>>::at(&this->worldNodeMap, blockIndex);
    std::shared_ptr<NodePairMap>::shared_ptr((std::shared_ptr<NodePairMap> *const)(v6 + 64), v11);
    v12 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_updatedBlock);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12, v11);
    v13 = *(_QWORD *)v12;
    v14 = *(_BYTE *)(((unsigned __int64)(v13 + 32) >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v14 != 0;
    if ( v14 != 0 && v14 <= 3 )
      __asan_report_load4(v13 + 32);
    maxX = *(_DWORD *)(v13 + 32) - 1;
    v15 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_updatedBlock);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8(v15, v11);
    v16 = *(_QWORD *)v15;
    v17 = *(_QWORD *)v15 + 36LL;
    v18 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v18 != 0;
    if ( v18 != 0 && (char)((v17 & 7) + 3) >= v18 )
      __asan_report_load4(v17);
    maxY = *(_DWORD *)(v16 + 36) - 1;
    v19 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_updatedBlock);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load8(v19, v11);
    v20 = *(_QWORD *)v19;
    if ( *(_BYTE *)(((unsigned __int64)(v20 + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v20 + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v20 + 40);
    }
    maxZ = *(_DWORD *)(v20 + 40) - 1;
    for ( *(_DWORD *)(v6 + 48) = 0; *(int *)(v6 + 48) <= 9; ++*(_DWORD *)(v6 + 48) )
    {
      v21 = std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_blockProto);
      svoDataProto = ToTheMoonProto::SVOBlockProto::svo(v21);
      layerDataProtos = ToTheMoonProto::SVOStructureProto::layerdata(svoDataProto);
      if ( google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::size(layerDataProtos) > *(_DWORD *)(v6 + 48) )
      {
        layerProto = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::operator[](
                       layerDataProtos,
                       *(_DWORD *)(v6 + 48));
        for ( y = 0; y < maxY; ++y )
        {
          for ( z = 0; z < maxZ; ++z )
          {
            index1 = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(0LL, y, z);
            std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v47, p_blockMap);
            std::shared_ptr<NodePairMap>::shared_ptr(&p_blockNodeMap, (const std::shared_ptr<NodePairMap> *)(v6 + 64));
            BlockPathFindingDataGenerator::UpdateWorldBlockNeighborsForNode(
              this,
              *(_DWORD *)(v6 + 48),
              index1,
              Left,
              blockIndex,
              &p_blockNodeMap,
              layerProto,
              &v47);
            std::shared_ptr<NodePairMap>::~shared_ptr(&p_blockNodeMap);
            std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v47);
            index2 = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(maxX, y, z);
            std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v47, p_blockMap);
            std::shared_ptr<NodePairMap>::shared_ptr(&p_blockNodeMap, (const std::shared_ptr<NodePairMap> *)(v6 + 64));
            BlockPathFindingDataGenerator::UpdateWorldBlockNeighborsForNode(
              this,
              *(_DWORD *)(v6 + 48),
              index2,
              Right,
              blockIndex,
              &p_blockNodeMap,
              layerProto,
              &v47);
            std::shared_ptr<NodePairMap>::~shared_ptr(&p_blockNodeMap);
            std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v47);
          }
        }
        for ( x = 0; x < maxX; ++x )
        {
          for ( y_0 = 0; y_0 < maxY; ++y_0 )
          {
            index3 = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(x, y_0, 0LL);
            std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v47, p_blockMap);
            std::shared_ptr<NodePairMap>::shared_ptr(&p_blockNodeMap, (const std::shared_ptr<NodePairMap> *)(v6 + 64));
            BlockPathFindingDataGenerator::UpdateWorldBlockNeighborsForNode(
              this,
              *(_DWORD *)(v6 + 48),
              index3,
              Back,
              blockIndex,
              &p_blockNodeMap,
              layerProto,
              &v47);
            std::shared_ptr<NodePairMap>::~shared_ptr(&p_blockNodeMap);
            std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v47);
            index4 = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(x, y_0, maxZ);
            std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v47, p_blockMap);
            std::shared_ptr<NodePairMap>::shared_ptr(&p_blockNodeMap, (const std::shared_ptr<NodePairMap> *)(v6 + 64));
            BlockPathFindingDataGenerator::UpdateWorldBlockNeighborsForNode(
              this,
              *(_DWORD *)(v6 + 48),
              index4,
              Front,
              blockIndex,
              &p_blockNodeMap,
              layerProto,
              &v47);
            std::shared_ptr<NodePairMap>::~shared_ptr(&p_blockNodeMap);
            std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v47);
          }
        }
        if ( (maxX & 1) != 0 )
          v23 = maxX / 2 + 1;
        else
          v23 = maxX / 2;
        maxX = v23;
        if ( (maxY & 1) != 0 )
          v24 = maxY / 2 + 1;
        else
          v24 = maxY / 2;
        maxY = v24;
        if ( (maxZ & 1) != 0 )
          v25 = maxZ / 2 + 1;
        else
          v25 = maxZ / 2;
        maxZ = v25;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/DataProcess/path_finding_data_generator.cpp",
          "UpdateWorldBlockNeighbors",
          324);
        v22 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[57])"[UpdateWorldBlockNeighbors] Proto data don't have layer ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
    }
    std::shared_ptr<NodePairMap>::~shared_ptr((std::shared_ptr<NodePairMap> *const)(v6 + 64));
  }
  if ( v50 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 358: range 000000000CBD87C2-000000000CBD8D80
void __cdecl BlockPathFindingDataGenerator::UpdateWorldNeighborBlocks(
        BlockPathFindingDataGenerator *const this,
        const IntPair *blockIndex,
        BlockPathFindingDataGenerator *blockGenerator,
        std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *p_blockMap)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r12
  std::map<IntPair,std::shared_ptr<NodePairMap>>::mapped_type *v8; // rax
  int second; // edi
  std::allocator<IntPair> __a; // [rsp+3Fh] [rbp-171h] BYREF
  std::vector<IntPair>::iterator __for_begin; // [rsp+40h] [rbp-170h] BYREF
  std::vector<IntPair>::iterator __for_end; // [rsp+48h] [rbp-168h] BYREF
  std::vector<IntPair> *__for_range; // [rsp+50h] [rbp-160h]
  IntPair *neighborBlockDiff; // [rsp+58h] [rbp-158h]
  std::shared_ptr<NodePairMap> p_updatedBlockNodeMap; // [rsp+60h] [rbp-150h] BYREF
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > v19; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-130h] BYREF
  std::string val; // [rsp+A0h] [rbp-110h] BYREF
  IntPair v22; // [rsp+C0h] [rbp-F0h] BYREF
  IntPair v23; // [rsp+C8h] [rbp-E8h] BYREF
  IntPair v24; // [rsp+D0h] [rbp-E0h] BYREF
  IntPair v25; // [rsp+D8h] [rbp-D8h] BYREF
  IntPair v26; // [rsp+E0h] [rbp-D0h] BYREF
  IntPair v27; // [rsp+E8h] [rbp-C8h] BYREF
  IntPair v28; // [rsp+F0h] [rbp-C0h] BYREF
  IntPair v29; // [rsp+F8h] [rbp-B8h] BYREF
  char v30[176]; // [rsp+100h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 23 updatedBlockNodeMap:363 64 24 27 neighborBlockIndexDiffs:364";
  *(_QWORD *)(v4 + 16) = BlockPathFindingDataGenerator::UpdateWorldNeighborBlocks;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  __for_end._M_current = (IntPair *)std::map<IntPair,std::shared_ptr<NodePairMap>>::end(&this->worldNodeMap)._M_node;
  __for_begin._M_current = (IntPair *)std::map<IntPair,std::shared_ptr<NodePairMap>>::find(
                                        &this->worldNodeMap,
                                        blockIndex)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self *)&__for_begin,
         (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/path_finding_data_generator.cpp",
      "UpdateWorldNeighborBlocks",
      360);
    v7 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v20,
           (const char (*)[77])"[UpdateWorldNeighborBlocks] block index not found in world node map. index: ");
    IntPair::ToString[abi:cxx11](&val, blockIndex);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v8 = std::map<IntPair,std::shared_ptr<NodePairMap>>::at(&this->worldNodeMap, blockIndex);
    std::shared_ptr<NodePairMap>::shared_ptr((std::shared_ptr<NodePairMap> *const)(v4 + 32), v8);
    IntPair::IntPair(&v22, -1, -1);
    IntPair::IntPair(&v23, -1, 0);
    IntPair::IntPair(&v24, -1, 1);
    IntPair::IntPair(&v25, 0, -1);
    IntPair::IntPair(&v26, 0, 1);
    IntPair::IntPair(&v27, 1, -1);
    IntPair::IntPair(&v28, 1, 0);
    IntPair::IntPair(&v29, 1, 1);
    std::allocator<IntPair>::allocator(&__a);
    std::vector<IntPair>::vector(
      (std::vector<IntPair> *const)(v4 + 64),
      (std::initializer_list<IntPair>)__PAIR128__(8LL, &v22),
      &__a);
    std::allocator<IntPair>::~allocator(&__a);
    __for_range = (std::vector<IntPair> *)(v4 + 64);
    __for_begin._M_current = std::vector<IntPair>::begin((std::vector<IntPair> *const)(v4 + 64))._M_current;
    __for_end._M_current = std::vector<IntPair>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<IntPair *,std::vector<IntPair>>(&__for_begin, &__for_end) )
    {
      neighborBlockDiff = __gnu_cxx::__normal_iterator<IntPair *,std::vector<IntPair>>::operator*(&__for_begin);
      std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v19, p_blockMap);
      std::shared_ptr<NodePairMap>::shared_ptr(&p_updatedBlockNodeMap, (const std::shared_ptr<NodePairMap> *)(v4 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&neighborBlockDiff->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)neighborBlockDiff + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&neighborBlockDiff->second >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&neighborBlockDiff->second);
      }
      second = neighborBlockDiff->second;
      if ( *(_BYTE *)(((unsigned __int64)neighborBlockDiff >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)neighborBlockDiff & 7) + 3) >= *(_BYTE *)(((unsigned __int64)neighborBlockDiff >> 3)
                                                                            + 0x7FFF8000) )
      {
        second = (int)neighborBlockDiff;
        __asan_report_load4(neighborBlockDiff);
      }
      BlockPathFindingDataGenerator::UpdateWorldForNeighborBlock(
        this,
        neighborBlockDiff->first,
        second,
        &p_updatedBlockNodeMap,
        blockIndex,
        blockGenerator,
        &v19);
      std::shared_ptr<NodePairMap>::~shared_ptr(&p_updatedBlockNodeMap);
      std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v19);
      __gnu_cxx::__normal_iterator<IntPair *,std::vector<IntPair>>::operator++(&__for_begin);
    }
    std::vector<IntPair>::~vector((std::vector<IntPair> *const)(v4 + 64));
    std::shared_ptr<NodePairMap>::~shared_ptr((std::shared_ptr<NodePairMap> *const)(v4 + 32));
  }
  if ( v30 == (char *)v4 )
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

// Line 381: range 000000000CBD8D82-000000000CBD965E
void __cdecl BlockPathFindingDataGenerator::UpdateWorldForNeighborBlock(
        BlockPathFindingDataGenerator *const this,
        int xDiff,
        int zDiff,
        std::shared_ptr<NodePairMap> *p_updatedBlockNodeMap,
        const IntPair *blockIndex,
        BlockPathFindingDataGenerator *blockGenerator,
        std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *p_blockMap)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  int v10; // ecx
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v11; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v12; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  char v22; // cl
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  bool isLineContact; // [rsp+3Fh] [rbp-F1h]
  int maxX; // [rsp+40h] [rbp-F0h]
  int maxY; // [rsp+44h] [rbp-ECh]
  int maxZ; // [rsp+48h] [rbp-E8h]
  int level; // [rsp+4Ch] [rbp-E4h]
  int y; // [rsp+50h] [rbp-E0h]
  int z; // [rsp+54h] [rbp-DCh]
  int x_0; // [rsp+58h] [rbp-D8h]
  int y_0; // [rsp+5Ch] [rbp-D4h]
  int y_1; // [rsp+60h] [rbp-D0h]
  int x_1; // [rsp+68h] [rbp-C8h]
  int z_1; // [rsp+6Ch] [rbp-C4h]
  int z_0; // [rsp+70h] [rbp-C0h]
  Const::Direction dir_0; // [rsp+74h] [rbp-BCh]
  int x; // [rsp+78h] [rbp-B8h]
  Const::Direction dir; // [rsp+7Ch] [rbp-B4h]
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+80h] [rbp-B0h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+88h] [rbp-A8h] BYREF
  std::shared_ptr<SVOBlock> *neighborBlock; // [rsp+90h] [rbp-A0h]
  unsigned __int64 nodeIndex_1; // [rsp+98h] [rbp-98h]
  unsigned __int64 nodeIndex_0; // [rsp+A0h] [rbp-90h]
  unsigned __int64 nodeIndex; // [rsp+A8h] [rbp-88h]
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > v60; // [rsp+B0h] [rbp-80h] BYREF
  std::shared_ptr<NodePairMap> v61; // [rsp+C0h] [rbp-70h] BYREF
  char v62[96]; // [rsp+D0h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 8 22 neighborBlockIndex:384";
  *(_QWORD *)(v7 + 16) = BlockPathFindingDataGenerator::UpdateWorldForNeighborBlock;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116352;
  isLineContact = abs32(xDiff) + abs32(zDiff) == 1;
  if ( *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)blockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(blockIndex);
  }
  v10 = blockIndex->first + xDiff;
  if ( *(_BYTE *)(((unsigned __int64)&blockIndex->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)blockIndex + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blockIndex->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&blockIndex->second);
  }
  IntPair::IntPair((IntPair *const)(v7 + 32), v10, zDiff + blockIndex->second);
  if ( !std::operator==<std::map<IntPair,std::shared_ptr<SVOBlock>>>(p_blockMap, 0LL) )
  {
    v11 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_blockMap);
    __y._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v11)._M_node;
    v12 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_blockMap);
    __x._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(
                    v12,
                    (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v7 + 32))._M_node;
    if ( !std::operator==(&__x, &__y) )
    {
      v14 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_blockMap);
      neighborBlock = std::map<IntPair,std::shared_ptr<SVOBlock>>::at(
                        v14,
                        (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v7 + 32));
      v15 = 0LL;
      if ( !std::operator==<SVOBlock>(neighborBlock, 0LL) )
      {
        v16 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)neighborBlock);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(v16, 0LL);
        v17 = *(_QWORD *)v16;
        v18 = *(_BYTE *)(((unsigned __int64)(v17 + 32) >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v18 != 0;
        if ( v18 != 0 && v18 <= 3 )
          __asan_report_load4(v17 + 32);
        maxX = *(_DWORD *)(v17 + 32) - 1;
        v19 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)neighborBlock);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8(v19, v15);
        v20 = *(_QWORD *)v19;
        v21 = *(_QWORD *)v19 + 36LL;
        v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v22 != 0;
        if ( v22 != 0 && (char)((v21 & 7) + 3) >= v22 )
          __asan_report_load4(v21);
        maxY = *(_DWORD *)(v20 + 36) - 1;
        v23 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)neighborBlock);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v23 = __asan_report_load8(v23, v15);
        v24 = *(_QWORD *)v23;
        if ( *(_BYTE *)(((unsigned __int64)(v24 + 40) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v24 + 40) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v24 + 40);
        }
        maxZ = *(_DWORD *)(v24 + 40) - 1;
        for ( level = 0; level <= 9; ++level )
        {
          if ( isLineContact )
          {
            if ( zDiff )
            {
              if ( zDiff == 1 )
                v27 = 0;
              else
                v27 = maxZ;
              z_0 = v27;
              if ( zDiff == 1 )
                v28 = 2;
              else
                v28 = 1;
              dir_0 = v28;
              for ( x_0 = 0; x_0 < maxX; ++x_0 )
              {
                for ( y_0 = 0; y_0 < maxY; ++y_0 )
                {
                  nodeIndex_0 = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(x_0, y_0, z_0);
                  std::shared_ptr<NodePairMap>::shared_ptr(&v61, p_updatedBlockNodeMap);
                  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v60, p_blockMap);
                  BlockPathFindingDataGenerator::UpdateWorldNeighborBlocksForNode(
                    this,
                    isLineContact,
                    level,
                    nodeIndex_0,
                    xDiff,
                    zDiff,
                    (const IntPair *)(v7 + 32),
                    &v60,
                    &v61,
                    dir_0);
                  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v60);
                  std::shared_ptr<NodePairMap>::~shared_ptr(&v61);
                }
              }
            }
            else
            {
              if ( xDiff == 1 )
                v25 = 0;
              else
                v25 = maxX;
              x = v25;
              if ( xDiff == 1 )
                v26 = 3;
              else
                v26 = 4;
              dir = v26;
              for ( y = 0; y < maxY; ++y )
              {
                for ( z = 0; z < maxZ; ++z )
                {
                  nodeIndex = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(x, y, z);
                  std::shared_ptr<NodePairMap>::shared_ptr(&v61, p_updatedBlockNodeMap);
                  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v60, p_blockMap);
                  BlockPathFindingDataGenerator::UpdateWorldNeighborBlocksForNode(
                    this,
                    isLineContact,
                    level,
                    nodeIndex,
                    xDiff,
                    0,
                    (const IntPair *)(v7 + 32),
                    &v60,
                    &v61,
                    dir);
                  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v60);
                  std::shared_ptr<NodePairMap>::~shared_ptr(&v61);
                }
              }
            }
          }
          else
          {
            if ( xDiff == 1 )
              v29 = 0;
            else
              v29 = maxX;
            x_1 = v29;
            if ( zDiff == 1 )
              v30 = 0;
            else
              v30 = maxZ;
            z_1 = v30;
            for ( y_1 = 0; y_1 < maxY; ++y_1 )
            {
              nodeIndex_1 = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(x_1, y_1, z_1);
              std::shared_ptr<NodePairMap>::shared_ptr(&v61, p_updatedBlockNodeMap);
              std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v60, p_blockMap);
              BlockPathFindingDataGenerator::UpdateWorldNeighborBlocksForNode(
                this,
                0,
                level,
                nodeIndex_1,
                xDiff,
                zDiff,
                (const IntPair *)(v7 + 32),
                &v60,
                &v61,
                None_11);
              std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v60);
              std::shared_ptr<NodePairMap>::~shared_ptr(&v61);
            }
          }
          if ( (maxX & 1) != 0 )
            v31 = maxX / 2 + 1;
          else
            v31 = maxX / 2;
          maxX = v31;
          if ( (maxY & 1) != 0 )
            v32 = maxY / 2 + 1;
          else
            v32 = maxY / 2;
          maxY = v32;
          if ( (maxZ & 1) != 0 )
            v33 = maxZ / 2 + 1;
          else
            v33 = maxZ / 2;
          maxZ = v33;
        }
      }
    }
  }
  if ( v62 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 433: range 000000000CBD9660-000000000CBDA3A7
std::shared_ptr<SVOWorld> __cdecl BlockPathFindingDataGenerator::BuildWorldNodeLinks(
        BlockPathFindingDataGenerator *const this,
        std::shared_ptr<SVOWorld> *p_worldData,
        const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *blockProtoMap)
{
  const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *v3; // rcx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::shared_ptr<SVOWorld> result; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::pair<const IntPair,std::shared_ptr<SVOBlock> > *v9; // rax
  const std::map<int,std::shared_ptr<IntPair>> *v10; // rsi
  unsigned __int64 v11; // rax
  SVOLayer **v12; // rax
  std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto> *v14; // rax
  std::vector<SVONode*>::size_type v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  std::shared_ptr<NodePairMap> *v18; // rsi
  SVONode *NodeInBlock; // rax
  std::shared_ptr<NodePairMap> *v20; // rsi
  unsigned __int64 v21; // rax
  std::vector<SVOLayer*>::size_type v22; // rsi
  unsigned __int64 v23; // rax
  SVOLayer *v24; // r14
  uint64_t v25; // rax
  SVONode **ChildNodePointerInBlock; // rax
  std::pair<const Const::NeighborType,std::map<int,std::shared_ptr<IntPair>> > *m; // r14
  std::vector<int>::reference v28; // rax
  int *v29; // rdx
  int v30; // r15d
  std::vector<int>::reference v31; // rax
  int *v32; // rdx
  int v33; // r14d
  std::vector<int>::reference v34; // rax
  int *v35; // rdx
  const google::protobuf::RepeatedField<long int> *v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  const google::protobuf::RepeatedField<int> *v39; // rax
  int *v40; // rax
  int *v41; // rdx
  SVONode *NeighborInBlock; // r14
  unsigned __int64 v43; // rax
  SVOBlock *block; // [rsp+8h] [rbp-378h]
  std::initializer_list<std::pair<const Const::NeighborType,std::map<int,std::shared_ptr<IntPair>> > > __l; // [rsp+10h] [rbp-370h]
  const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *blockProtoMapa; // [rsp+20h] [rbp-360h]
  std::less<Const::NeighborType> __comp; // [rsp+49h] [rbp-337h] BYREF
  std::allocator<std::pair<const Const::NeighborType,std::map<int,std::shared_ptr<IntPair>> > > __a; // [rsp+4Ah] [rbp-336h] BYREF
  bool inBorder; // [rsp+4Bh] [rbp-335h]
  Const::NeighborType __x; // [rsp+4Ch] [rbp-334h] BYREF
  Const::NeighborType v53; // [rsp+50h] [rbp-330h] BYREF
  Const::NeighborType __k; // [rsp+54h] [rbp-32Ch] BYREF
  int k; // [rsp+58h] [rbp-328h]
  int i; // [rsp+5Ch] [rbp-324h]
  int j; // [rsp+60h] [rbp-320h]
  int neighborLevel; // [rsp+64h] [rbp-31Ch]
  std::map<IntPair,std::shared_ptr<SVOBlock>>::iterator __for_begin; // [rsp+68h] [rbp-318h] BYREF
  std::map<IntPair,std::shared_ptr<SVOBlock>>::iterator __for_end; // [rsp+70h] [rbp-310h] BYREF
  std::map<IntPair,std::shared_ptr<SVOBlock>> *__for_range; // [rsp+78h] [rbp-308h]
  std::pair<const IntPair,std::shared_ptr<SVOBlock> > *it; // [rsp+80h] [rbp-300h]
  std::shared_ptr<SVOBlock> *blockData; // [rsp+88h] [rbp-2F8h]
  const std::shared_ptr<ToTheMoonProto::SVOBlockProto> *blockProto; // [rsp+90h] [rbp-2F0h]
  std::shared_ptr<NodePairMap> *blockNodeMap; // [rsp+98h] [rbp-2E8h]
  SVOLayer **layerData; // [rsp+A0h] [rbp-2E0h]
  std::vector<SVONode*> *nodeData; // [rsp+A8h] [rbp-2D8h]
  const ToTheMoonProto::SVOStructureProto *protoSvoData; // [rsp+B0h] [rbp-2D0h]
  const ToTheMoonProto::SVOLayerProto *protoLayerData; // [rsp+B8h] [rbp-2C8h]
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto> *protoNodeData; // [rsp+C0h] [rbp-2C0h]
  SVONode *node; // [rsp+C8h] [rbp-2B8h]
  const ToTheMoonProto::SVONodeProto *rawNodeData; // [rsp+D0h] [rbp-2B0h]
  uint64_t neighborIndex; // [rsp+D8h] [rbp-2A8h]
  std::shared_ptr<NodePairMap> p_targetNodeMap; // [rsp+E0h] [rbp-2A0h] BYREF
  std::shared_ptr<NodePairMap> v75; // [rsp+F0h] [rbp-290h] BYREF
  std::map<int,std::shared_ptr<IntPair>> __y; // [rsp+120h] [rbp-260h] BYREF
  std::map<int,std::shared_ptr<IntPair>> v77; // [rsp+150h] [rbp-230h] BYREF
  std::pair<const Const::NeighborType,std::map<int,std::shared_ptr<IntPair>> > v78; // [rsp+180h] [rbp-200h] BYREF
  std::pair<const Const::NeighborType,std::map<int,std::shared_ptr<IntPair>> > v79; // [rsp+1B8h] [rbp-1C8h] BYREF
  std::pair<const Const::NeighborType,std::map<int,std::shared_ptr<IntPair>> > v80; // [rsp+1F0h] [rbp-190h] BYREF
  __int64 v81; // [rsp+228h] [rbp-158h] BYREF
  char v82[336]; // [rsp+230h] [rbp-150h] BYREF

  blockProtoMapa = v3;
  v4 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 11 intPair:438 64 24 12 posIndex:473 128 48 18 borderBlockMap:468 208 48 29 diagonalNeigh"
                        "borBorderMap:503";
  *(_QWORD *)(v4 + 16) = BlockPathFindingDataGenerator::BuildWorldNodeLinks;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  if ( std::operator==<SVOWorld>((const std::shared_ptr<SVOWorld> *)blockProtoMap, 0LL) )
  {
    std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)this, 0LL);
  }
  else
  {
    v8 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockProtoMap);
    __for_range = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
    __for_begin._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<SVOBlock>>>::operator*(&__for_begin);
      it = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9, &__for_end);
      *(IntPair *)(v4 + 32) = it->first;
      blockData = &it->second;
      blockProto = std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::at(
                     blockProtoMapa,
                     (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::key_type *)(v4 + 32));
      if ( !std::operator==<ToTheMoonProto::SVOBlockProto>(blockProto, 0LL) )
      {
        v10 = (const std::map<int,std::shared_ptr<IntPair>> *)(v4 + 32);
        blockNodeMap = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                         (std::map<IntPair,std::shared_ptr<NodePairMap>> *const)&p_worldData[9]._M_refcount,
                         (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v4 + 32));
        for ( i = 0; i <= 9; ++i )
        {
          v11 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockData);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8(v11, v10);
          v10 = (const std::map<int,std::shared_ptr<IntPair>> *)i;
          v12 = std::vector<SVOLayer *>::operator[](*(std::vector<SVOLayer*> *const *)v11, i);
          layerData = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v12, v10);
          if ( *layerData )
          {
            if ( *(_BYTE *)(((unsigned __int64)layerData >> 3) + 0x7FFF8000) )
              __asan_report_load8(layerData, v10);
            nodeData = &(*layerData)->nodeData;
            v13 = std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockProto);
            protoSvoData = ToTheMoonProto::SVOBlockProto::svo(v13);
            v14 = ToTheMoonProto::SVOStructureProto::layerdata(protoSvoData);
            v10 = (const std::map<int,std::shared_ptr<IntPair>> *)(unsigned int)i;
            protoLayerData = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::operator[](v14, i);
            protoNodeData = ToTheMoonProto::SVOLayerProto::nodedata(protoLayerData);
            for ( j = 0; ; ++j )
            {
              v15 = j;
              if ( v15 >= std::vector<SVONode *>::size(nodeData) )
                break;
              v16 = j;
              v17 = (unsigned __int64)std::vector<SVONode *>::operator[](nodeData, j);
              if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
                v17 = __asan_report_load8(v17, v16);
              node = *(SVONode **)v17;
              rawNodeData = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::operator[](
                              protoNodeData,
                              j);
              v18 = blockNodeMap;
              std::shared_ptr<NodePairMap>::shared_ptr(&p_targetNodeMap, blockNodeMap);
              if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
                __asan_report_load8(&node->index, v18);
              NodeInBlock = BlockPathFindingDataGenerator::GetNodeInBlock(
                              (const BlockPathFindingDataGenerator *const)p_worldData,
                              i,
                              node->index >> 3,
                              parent,
                              0,
                              &p_targetNodeMap);
              if ( *(_BYTE *)(((unsigned __int64)&node->parent >> 3) + 0x7FFF8000) )
                NodeInBlock = (SVONode *)__asan_report_store8();
              node->parent = NodeInBlock;
              std::shared_ptr<NodePairMap>::~shared_ptr(&p_targetNodeMap);
              if ( i > 0 )
              {
                v20 = blockNodeMap;
                std::shared_ptr<NodePairMap>::shared_ptr(&v75, blockNodeMap);
                v21 = (unsigned __int64)std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockData);
                if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                  v21 = __asan_report_load8(v21, v20);
                v22 = i - 1;
                v23 = (unsigned __int64)std::vector<SVOLayer *>::operator[](*(std::vector<SVOLayer*> *const *)v21, v22);
                if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
                  v23 = __asan_report_load8(v23, v22);
                v24 = *(SVOLayer **)v23;
                v25 = ToTheMoonProto::SVONodeProto::children(rawNodeData);
                ChildNodePointerInBlock = BlockPathFindingDataGenerator::GetChildNodePointerInBlock(
                                            (const BlockPathFindingDataGenerator *const)p_worldData,
                                            i,
                                            v25,
                                            v24,
                                            &v75);
                if ( *(_BYTE *)(((unsigned __int64)&node->children >> 3) + 0x7FFF8000) )
                  ChildNodePointerInBlock = (SVONode **)__asan_report_store8();
                node->children = ChildNodePointerInBlock;
                std::shared_ptr<NodePairMap>::~shared_ptr(&v75);
              }
              __x = Normal_1;
              memset(&__y, 0, sizeof(__y));
              std::map<int,std::shared_ptr<IntPair>>::map(&__y);
              std::pair<Const::NeighborType const,std::map<int,std::shared_ptr<IntPair>>>::pair<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>,true>(
                &v78,
                &__x,
                &__y);
              v53 = Planar;
              memset(&v77, 0, sizeof(v77));
              std::map<int,std::shared_ptr<IntPair>>::map(&v77);
              std::pair<Const::NeighborType const,std::map<int,std::shared_ptr<IntPair>>>::pair<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>,true>(
                &v79,
                &v53,
                &v77);
              __k = Diagonal;
              *(_QWORD *)(v4 + 208) = 0LL;
              *(_QWORD *)(v4 + 216) = 0LL;
              *(_QWORD *)(v4 + 224) = 0LL;
              *(_QWORD *)(v4 + 232) = 0LL;
              *(_QWORD *)(v4 + 240) = 0LL;
              *(_QWORD *)(v4 + 248) = 0LL;
              std::map<int,std::shared_ptr<IntPair>>::map((std::map<int,std::shared_ptr<IntPair>> *const)(v4 + 208));
              std::pair<Const::NeighborType const,std::map<int,std::shared_ptr<IntPair>>>::pair<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>,true>(
                &v80,
                &__k,
                (std::map<int,std::shared_ptr<IntPair>> *)(v4 + 208));
              __l._M_array = &v78;
              __l._M_len = 3LL;
              std::allocator<std::pair<Const::NeighborType const,std::map<int,std::shared_ptr<IntPair>>>>::allocator(&__a);
              std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::map(
                (std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>> *const)(v4 + 128),
                __l,
                &__comp,
                &__a);
              std::allocator<std::pair<Const::NeighborType const,std::map<int,std::shared_ptr<IntPair>>>>::~allocator(&__a);
              for ( m = (std::pair<const Const::NeighborType,std::map<int,std::shared_ptr<IntPair>> > *)&v81;
                    m != &v78;
                    std::pair<Const::NeighborType const,std::map<int,std::shared_ptr<IntPair>>>::~pair(m) )
              {
                --m;
              }
              std::map<int,std::shared_ptr<IntPair>>::~map((std::map<int,std::shared_ptr<IntPair>> *const)(v4 + 208));
              std::map<int,std::shared_ptr<IntPair>>::~map(&v77);
              std::map<int,std::shared_ptr<IntPair>>::~map(&__y);
              std::vector<int>::vector((std::vector<int> *const)(v4 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
                __asan_report_load8(&node->index, &v78);
              MortonCodeCalculator::MortonCodeIndexToCoordination(node->index, (std::vector<int> *)(v4 + 64));
              block = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockData);
              v28 = std::vector<int>::operator[]((std::vector<int> *const)(v4 + 64), 2uLL);
              v29 = v28;
              if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v28);
              }
              v30 = *v29;
              v31 = std::vector<int>::operator[]((std::vector<int> *const)(v4 + 64), 1uLL);
              v32 = v31;
              if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v31);
              }
              v33 = *v32;
              v34 = std::vector<int>::operator[]((std::vector<int> *const)(v4 + 64), 0LL);
              v35 = v34;
              if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v34);
              }
              inBorder = SVODataProcessor::GenerateBorderNodeBlockMap(
                           (std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>> *)(v4 + 128),
                           *v35,
                           v33,
                           v30,
                           block);
              __k = Normal_1;
              v10 = std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::operator[](
                      (std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>> *const)(v4 + 128),
                      &__k);
              std::map<int,std::shared_ptr<IntPair>>::map(
                (std::map<int,std::shared_ptr<IntPair>> *const)(v4 + 208),
                v10);
              for ( k = 0; k <= 5; ++k )
              {
                v36 = ToTheMoonProto::SVONodeProto::neighbors(rawNodeData);
                v37 = (unsigned int)k;
                v38 = (unsigned __int64)google::protobuf::RepeatedField<long>::operator[](v36, k);
                if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                  v38 = __asan_report_load8(v38, v37);
                neighborIndex = *(_QWORD *)v38;
                v39 = ToTheMoonProto::SVONodeProto::neighborslevel(rawNodeData);
                v40 = (int *)google::protobuf::RepeatedField<int>::operator[](v39, k);
                v41 = v40;
                if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v40);
                }
                neighborLevel = *v41;
                std::shared_ptr<NodePairMap>::shared_ptr(&v75, blockNodeMap);
                NeighborInBlock = BlockPathFindingDataGenerator::GetNeighborInBlock(
                                    (const BlockPathFindingDataGenerator *const)p_worldData,
                                    k,
                                    i,
                                    neighborLevel,
                                    neighborIndex,
                                    inBorder,
                                    (const std::map<int,std::shared_ptr<IntPair>> *)(v4 + 208),
                                    &v75);
                v10 = (const std::map<int,std::shared_ptr<IntPair>> *)k;
                v43 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->neighbors, k);
                if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
                  v43 = __asan_report_store8();
                *(_QWORD *)v43 = NeighborInBlock;
                std::shared_ptr<NodePairMap>::~shared_ptr(&v75);
              }
              std::map<int,std::shared_ptr<IntPair>>::~map((std::map<int,std::shared_ptr<IntPair>> *const)(v4 + 208));
              std::vector<int>::~vector((std::vector<int> *const)(v4 + 64));
              std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>>::~map((std::map<Const::NeighborType,std::map<int,std::shared_ptr<IntPair>>> *const)(v4 + 128));
            }
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<SVOBlock>>>::operator++(&__for_begin);
    }
    std::shared_ptr<SVOWorld>::shared_ptr(
      (std::shared_ptr<SVOWorld> *const)this,
      (std::shared_ptr<SVOWorld> *)blockProtoMap);
  }
  if ( v82 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 518: range 000000000CBDA3A8-000000000CBDA6DD
void __cdecl BlockPathFindingDataGenerator::UpdateWorldBlockNeighborsForNode(
        BlockPathFindingDataGenerator *const this,
        int level,
        int index,
        Const::Direction dir,
        const IntPair *blockIndex,
        std::shared_ptr<NodePairMap> *p_blockNodeMap,
        const ToTheMoonProto::SVOLayerProto *layerProto,
        std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *p_blockMap)
{
  int order; // ebx
  common::milog::MiLogStream *v9; // rax
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto> *v10; // rcx
  const google::protobuf::RepeatedField<int> *v11; // rax
  unsigned int *v12; // rax
  unsigned int *v13; // rdx
  const google::protobuf::RepeatedField<long int> *v14; // rax
  unsigned __int64 v15; // rax
  SVONode *NeighborNodeInWorld; // rbx
  unsigned __int64 v17; // rax
  int neighborOrder; // [rsp+3Ch] [rbp-64h]
  unsigned int neighborLevel; // [rsp+40h] [rbp-60h]
  int neighborIndex; // [rsp+44h] [rbp-5Ch]
  const ToTheMoonProto::SVONodeProto *nodeProto; // [rsp+50h] [rbp-50h]
  NodeInfoPair *curNodeInfo; // [rsp+58h] [rbp-48h]
  std::shared_ptr<NodePairMap> p_targetNodeMap; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-30h] BYREF

  std::shared_ptr<NodePairMap>::shared_ptr(&p_targetNodeMap, p_blockNodeMap);
  curNodeInfo = BlockPathFindingDataGenerator::GetNodeInfoPairInLayer(this, level, index, &p_targetNodeMap);
  std::shared_ptr<NodePairMap>::~shared_ptr(&p_targetNodeMap);
  if ( curNodeInfo )
  {
    if ( *(_BYTE *)(((unsigned __int64)&curNodeInfo->order >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&curNodeInfo->order >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&curNodeInfo->order);
    }
    order = curNodeInfo->order;
    if ( order < ToTheMoonProto::SVOLayerProto::nodedata_size(layerProto) )
    {
      v10 = ToTheMoonProto::SVOLayerProto::nodedata(layerProto);
      if ( *(_BYTE *)(((unsigned __int64)&curNodeInfo->order >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&curNodeInfo->order >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&curNodeInfo->order);
      }
      nodeProto = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::operator[](v10, curNodeInfo->order);
      neighborOrder = BlockLinker::DirectionToNeighborIndex(dir);
      v11 = ToTheMoonProto::SVONodeProto::neighborslevel(nodeProto);
      v12 = (unsigned int *)google::protobuf::RepeatedField<int>::operator[](v11, neighborOrder);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      neighborLevel = *v13;
      v14 = ToTheMoonProto::SVONodeProto::neighbors(nodeProto);
      v15 = (unsigned __int64)google::protobuf::RepeatedField<long>::operator[](v14, neighborOrder);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v15, (unsigned int)neighborOrder);
      neighborIndex = *(_QWORD *)v15;
      std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(
        (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *const)&p_targetNodeMap,
        p_blockMap);
      NeighborNodeInWorld = BlockPathFindingDataGenerator::GetNeighborNodeInWorld(
                              this,
                              neighborLevel,
                              neighborIndex,
                              dir,
                              blockIndex,
                              (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)&p_targetNodeMap);
      if ( *(_BYTE *)(((unsigned __int64)curNodeInfo >> 3) + 0x7FFF8000) )
        __asan_report_load8(curNodeInfo, neighborLevel);
      v17 = (unsigned __int64)std::vector<SVONode *>::operator[](&curNodeInfo->node->neighbors, neighborOrder);
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_store8();
      *(_QWORD *)v17 = NeighborNodeInWorld;
      std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr((std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *const)&p_targetNodeMap);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/path_finding_data_generator.cpp",
        "UpdateWorldBlockNeighborsForNode",
        523);
      v9 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v27,
             (const char (*)[57])"[UpdateWorldBlockNeighbors] Proto data don't have order ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v9, &curNodeInfo->order);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
};

// Line 553: range 000000000CBDA6DE-000000000CBDA988
void __cdecl BlockPathFindingDataGenerator::UpdateWorldNeighborBlocksForNode(
        BlockPathFindingDataGenerator *const this,
        bool isLineContact,
        int level,
        int nodeIndex,
        int xDiff,
        int zDiff,
        const IntPair *neighborBlockIndex,
        std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *p_blockMap,
        std::shared_ptr<NodePairMap> *p_updatedBlockNodeMap,
        Const::Direction dir)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  SVONode *NodeInLayer; // r13
  unsigned __int64 v16; // rax
  int neighborOrder; // [rsp+2Ch] [rbp-A4h]
  SVONode *node; // [rsp+38h] [rbp-98h]
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > v21; // [rsp+40h] [rbp-90h] BYREF
  char v22[128]; // [rsp+50h] [rbp-80h] BYREF

  v10 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v10 = v11;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "1 32 24 10 orders:565";
  *(_QWORD *)(v10 + 16) = BlockPathFindingDataGenerator::UpdateWorldNeighborBlocksForNode;
  v12 = (_DWORD *)(v10 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -218103808;
  v12[536862722] = -202116109;
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v21, p_blockMap);
  node = BlockPathFindingDataGenerator::GetNeighborNodeInWorld(this, level, nodeIndex, neighborBlockIndex, &v21);
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v21);
  if ( node && isLineContact )
  {
    neighborOrder = BlockLinker::DirectionToNeighborIndex(dir);
    std::shared_ptr<NodePairMap>::shared_ptr((std::shared_ptr<NodePairMap> *const)&v21, p_updatedBlockNodeMap);
    v13 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->neighbors, neighborOrder);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(v13, neighborOrder);
    v14 = *(_QWORD *)v13;
    if ( *(_BYTE *)(((unsigned __int64)(v14 + 24) >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v14 + 24, neighborOrder);
    NodeInLayer = BlockPathFindingDataGenerator::GetNodeInLayer(
                    this,
                    level,
                    *(_QWORD *)(v14 + 24),
                    (const std::shared_ptr<NodePairMap> *)&v21);
    v16 = (unsigned __int64)std::vector<SVONode *>::operator[](&node->neighbors, neighborOrder);
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_store8();
    *(_QWORD *)v16 = NodeInLayer;
    std::shared_ptr<NodePairMap>::~shared_ptr((std::shared_ptr<NodePairMap> *const)&v21);
  }
  if ( v22 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 585: range 000000000CBDA98A-000000000CBDACA5
std::vector<SVONode*>::reference __fastcall BlockPathFindingDataGenerator::GetChildNodePointerInBlock(
        const BlockPathFindingDataGenerator *const this,
        int thisLevel,
        uint64_t targetIndex,
        SVOLayer *lowerLayer,
        const std::shared_ptr<NodePairMap> *p_targetNodeMap)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  NodePairMap *nodeMap; // rax
  std::vector<SVONode*>::reference result; // rax
  unsigned __int64 v11; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __x; // [rsp+38h] [rbp-A8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __y; // [rsp+40h] [rbp-A0h] BYREF
  NodePairMap *tarNodeMap; // [rsp+48h] [rbp-98h]
  std::map<long unsigned int,NodeInfoPair*> *layerNode; // [rsp+50h] [rbp-90h]
  NodeInfoPair *target; // [rsp+58h] [rbp-88h]
  char v20[128]; // [rsp+60h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 level:586 64 8 15 targetIndex:584";
  *(_QWORD *)(v5 + 16) = BlockPathFindingDataGenerator::GetChildNodePointerInBlock;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116352;
  *(_QWORD *)(v5 + 64) = targetIndex;
  *(_DWORD *)(v5 + 48) = thisLevel - 1;
  if ( std::operator==<NodePairMap>(p_targetNodeMap, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->nodeMap >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->nodeMap, 0LL);
    nodeMap = this->nodeMap;
  }
  else
  {
    nodeMap = std::__shared_ptr<NodePairMap,(__gnu_cxx::_Lock_policy)2>::get(p_targetNodeMap);
  }
  tarNodeMap = nodeMap;
  if ( !nodeMap
    || (__y._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::end(tarNodeMap)._M_cur,
        __x._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::find(
                       tarNodeMap,
                       (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v5 + 48))._M_cur,
        std::__detail::operator==<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false>(&__x, &__y)) )
  {
    result = 0LL;
  }
  else
  {
    layerNode = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::operator[](
                  tarNodeMap,
                  (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v5 + 48));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::end(layerNode)._M_node;
    __x._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::find(layerNode, (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v5 + 64))._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__x,
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__y) )
    {
      result = 0LL;
    }
    else
    {
      v11 = (unsigned __int64)std::map<unsigned long,NodeInfoPair *>::operator[](
                                layerNode,
                                (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v5 + 64));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11, v5 + 64);
      target = *(NodeInfoPair **)v11;
      if ( *(_BYTE *)(((unsigned __int64)&target->order >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&target->order >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&target->order);
      }
      if ( lowerLayer )
        result = std::vector<SVONode *>::operator[](&lowerLayer->nodeData, target->order);
      else
        result = 0LL;
    }
  }
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
  return result;
};

// Line 601: range 000000000CBDACA6-000000000CBDAFB0
SVONode *__fastcall BlockPathFindingDataGenerator::GetNeighborInBlock(
        const BlockPathFindingDataGenerator *const this,
        int neighborRank,
        int thisLevel,
        int neighborLevel,
        int neighborIndex,
        bool inBorder,
        const std::map<int,std::shared_ptr<IntPair>> *neighborBorderMap,
        const std::shared_ptr<NodePairMap> *p_targetNodeMap)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // r12
  SVONode *result; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  bool foundBorderNode; // [rsp+27h] [rbp-A9h]
  std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<IntPair> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  SVONode *neighborPtr; // [rsp+30h] [rbp-A0h]
  const std::shared_ptr<IntPair> *blockIndex; // [rsp+38h] [rbp-98h]
  std::shared_ptr<NodePairMap> v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[128]; // [rsp+50h] [rbp-80h] BYREF
  IntPair v24; // 0:rsi.8

  v8 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(96LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 48 4 16 neighborRank:600 64 8 8 item:608";
  *(_QWORD *)(v8 + 16) = BlockPathFindingDataGenerator::GetNeighborInBlock;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556943;
  v10[536862722] = -202116352;
  *(_DWORD *)(v8 + 48) = neighborRank;
  if ( neighborIndex >= 0 )
  {
    neighborPtr = 0LL;
    foundBorderNode = 0;
    if ( inBorder )
    {
      *(std::map<int,std::shared_ptr<IntPair>>::const_iterator *)(v8 + 64) = std::map<int,std::shared_ptr<IntPair>>::find(
                                                                               neighborBorderMap,
                                                                               (const std::map<int,std::shared_ptr<IntPair>>::key_type *)(v8 + 48));
      __y._M_node = std::map<int,std::shared_ptr<IntPair>>::end(neighborBorderMap)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<IntPair> > >::_Self *)(v8 + 64),
             &__y) )
      {
        blockIndex = &std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<IntPair>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<IntPair> > > *const)(v8 + 64))->second;
        if ( std::operator!=<IntPair>(blockIndex, 0LL) )
        {
          v12 = (unsigned __int64)std::__shared_ptr_access<IntPair,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<IntPair,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockIndex);
          v13 = v12;
          if ( (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((v12 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((v12 + 7) & 7) >= *(_BYTE *)(((v12 + 7) >> 3) + 0x7FFF8000) )
          {
            v13 = 8LL;
            __asan_report_load_n(v12, 8LL);
          }
          v24 = *(IntPair *)v13;
          neighborPtr = BlockPathFindingDataGenerator::GetNodeInBlock(
                          this,
                          v24,
                          thisLevel,
                          neighborIndex,
                          neighbor,
                          neighborLevel);
          foundBorderNode = 1;
        }
      }
    }
    if ( !foundBorderNode )
    {
      std::shared_ptr<NodePairMap>::shared_ptr(&v22, p_targetNodeMap);
      neighborPtr = BlockPathFindingDataGenerator::GetNodeInBlock(
                      this,
                      thisLevel,
                      neighborIndex,
                      neighbor,
                      neighborLevel,
                      &v22);
      std::shared_ptr<NodePairMap>::~shared_ptr(&v22);
    }
    result = neighborPtr;
  }
  else
  {
    result = 0LL;
  }
  if ( v23 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 629: range 000000000CBDAFB2-000000000CBDB10F
SVONode *__cdecl BlockPathFindingDataGenerator::GetNodeInBlock(
        const BlockPathFindingDataGenerator *const this,
        int thisLevel,
        uint64_t targetIndex,
        Const::Relation relation,
        int targetLevel,
        const std::shared_ptr<NodePairMap> *p_targetNodeMap)
{
  SVONode *NodeInLayer; // rbx
  std::shared_ptr<NodePairMap> v10; // [rsp+30h] [rbp-20h] BYREF

  if ( relation == neighbor )
  {
    std::shared_ptr<NodePairMap>::shared_ptr(&v10, p_targetNodeMap);
    NodeInLayer = BlockPathFindingDataGenerator::GetNodeInLayer(this, targetLevel, targetIndex, &v10);
    std::shared_ptr<NodePairMap>::~shared_ptr(&v10);
  }
  else
  {
    if ( relation > neighbor )
      return 0LL;
    if ( relation )
    {
      if ( relation != child )
        return 0LL;
      std::shared_ptr<NodePairMap>::shared_ptr(&v10, p_targetNodeMap);
      NodeInLayer = BlockPathFindingDataGenerator::GetNodeInLayer(this, thisLevel - 1, targetIndex, &v10);
      std::shared_ptr<NodePairMap>::~shared_ptr(&v10);
    }
    else
    {
      std::shared_ptr<NodePairMap>::shared_ptr(&v10, p_targetNodeMap);
      NodeInLayer = BlockPathFindingDataGenerator::GetNodeInLayer(this, thisLevel + 1, targetIndex, &v10);
      std::shared_ptr<NodePairMap>::~shared_ptr(&v10);
    }
  }
  return NodeInLayer;
};

// Line 644: range 000000000CBDB110-000000000CBDB254
SVONode *__fastcall BlockPathFindingDataGenerator::GetNodeInBlock(
        const BlockPathFindingDataGenerator *const this,
        IntPair blockIndex,
        int thisLevel,
        uint64_t targetIndex,
        int relation,
        int targetLevel)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  SVONode *result; // rax
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF
  IntPair v15; // 0:rsi.8
  IntPair v16; // 0:rsi.8
  IntPair v17; // 0:rsi.8

  v6 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 8 14 blockIndex:643";
  *(_QWORD *)(v6 + 16) = BlockPathFindingDataGenerator::GetNodeInBlock;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116352;
  *(IntPair *)(v6 + 32) = blockIndex;
  if ( relation == 2 )
  {
    v17 = *(IntPair *)(v6 + 32);
    result = BlockPathFindingDataGenerator::GetNodeInLayer(this, v17, targetLevel, targetIndex);
  }
  else
  {
    if ( relation > 2 )
      goto LABEL_12;
    if ( !relation )
    {
      v15 = *(IntPair *)(v6 + 32);
      result = BlockPathFindingDataGenerator::GetNodeInLayer(this, v15, thisLevel + 1, targetIndex);
      goto LABEL_13;
    }
    if ( relation == 1 )
    {
      v16 = *(IntPair *)(v6 + 32);
      result = BlockPathFindingDataGenerator::GetNodeInLayer(this, v16, thisLevel - 1, targetIndex);
    }
    else
    {
LABEL_12:
      result = 0LL;
    }
  }
LABEL_13:
  if ( v14 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 659: range 000000000CBDB256-000000000CBDB50B
SVONode *__fastcall BlockPathFindingDataGenerator::GetNodeInLayer(
        const BlockPathFindingDataGenerator *const this,
        int level,
        uint64_t targetIndex,
        const std::shared_ptr<NodePairMap> *p_targetNodeMap)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  NodePairMap *nodeMap; // rax
  SVONode *result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  NodePairMap *tarNodeMap; // [rsp+30h] [rbp-B0h]
  std::map<long unsigned int,NodeInfoPair*> *layerNode; // [rsp+38h] [rbp-A8h]
  char v17[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 9 level:658 64 8 10 target:665 96 8 15 targetIndex:658";
  *(_QWORD *)(v4 + 16) = BlockPathFindingDataGenerator::GetNodeInLayer;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = level;
  *(_QWORD *)(v4 + 96) = targetIndex;
  if ( std::operator==<NodePairMap>(p_targetNodeMap, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->nodeMap >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->nodeMap, 0LL);
    nodeMap = this->nodeMap;
  }
  else
  {
    nodeMap = std::__shared_ptr<NodePairMap,(__gnu_cxx::_Lock_policy)2>::get(p_targetNodeMap);
  }
  tarNodeMap = nodeMap;
  if ( !nodeMap
    || (__y._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::end(tarNodeMap)._M_cur,
        *(std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::iterator *)(v4 + 64) = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::find(tarNodeMap, (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v4 + 48)),
        std::__detail::operator==<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> *)(v4 + 64),
          &__y)) )
  {
    result = 0LL;
  }
  else
  {
    layerNode = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::operator[](
                  tarNodeMap,
                  (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v4 + 48));
    *(std::map<long unsigned int,NodeInfoPair*>::iterator *)(v4 + 64) = std::map<unsigned long,NodeInfoPair *>::find(
                                                                          layerNode,
                                                                          (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v4 + 96));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::end(layerNode)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)(v4 + 64),
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__y) )
    {
      result = 0LL;
    }
    else
    {
      v10 = (__int64)std::_Rb_tree_iterator<std::pair<unsigned long const,NodeInfoPair *>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> > *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10 + 8, &__y);
      v11 = *(_QWORD *)(v10 + 8);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11, &__y);
      result = *(SVONode **)v11;
    }
  }
  if ( v17 == (char *)v4 )
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

// Line 674: range 000000000CBDB50C-000000000CBDB79E
NodeInfoPair *__fastcall BlockPathFindingDataGenerator::GetNodeInfoPairInLayer(
        const BlockPathFindingDataGenerator *const this,
        int level,
        uint64_t targetIndex,
        const std::shared_ptr<NodePairMap> *p_targetNodeMap)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  NodePairMap *nodeMap; // rax
  NodeInfoPair *result; // rax
  __int64 v10; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  NodePairMap *tarNodeMap; // [rsp+30h] [rbp-B0h]
  std::map<long unsigned int,NodeInfoPair*> *layerNode; // [rsp+38h] [rbp-A8h]
  char v16[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 9 level:673 64 8 10 target:680 96 8 15 targetIndex:673";
  *(_QWORD *)(v4 + 16) = BlockPathFindingDataGenerator::GetNodeInfoPairInLayer;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = level;
  *(_QWORD *)(v4 + 96) = targetIndex;
  if ( std::operator==<NodePairMap>(p_targetNodeMap, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->nodeMap >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->nodeMap, 0LL);
    nodeMap = this->nodeMap;
  }
  else
  {
    nodeMap = std::__shared_ptr<NodePairMap,(__gnu_cxx::_Lock_policy)2>::get(p_targetNodeMap);
  }
  tarNodeMap = nodeMap;
  if ( !nodeMap
    || (__y._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::end(tarNodeMap)._M_cur,
        *(std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::iterator *)(v4 + 64) = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::find(tarNodeMap, (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v4 + 48)),
        std::__detail::operator==<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> *)(v4 + 64),
          &__y)) )
  {
    result = 0LL;
  }
  else
  {
    layerNode = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::operator[](
                  tarNodeMap,
                  (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v4 + 48));
    *(std::map<long unsigned int,NodeInfoPair*>::iterator *)(v4 + 64) = std::map<unsigned long,NodeInfoPair *>::find(
                                                                          layerNode,
                                                                          (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v4 + 96));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::end(layerNode)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)(v4 + 64),
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__y) )
    {
      result = 0LL;
    }
    else
    {
      v10 = (__int64)std::_Rb_tree_iterator<std::pair<unsigned long const,NodeInfoPair *>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> > *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10 + 8, &__y);
      result = *(NodeInfoPair **)(v10 + 8);
    }
  }
  if ( v16 == (char *)v4 )
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

// Line 689: range 000000000CBDB7A0-000000000CBDB8F9
SVONode *__cdecl BlockPathFindingDataGenerator::GetNeighborNodeInWorld(
        const BlockPathFindingDataGenerator *const this,
        int level,
        uint64_t targetIndex,
        Const::Direction targetDir,
        const IntPair *curBlockIndex,
        std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *p_blockMap)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  SVONode *NeighborNodeInWorld; // r13
  SVONode *result; // rax
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > v15; // [rsp+30h] [rbp-70h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v6 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 8 20 targetBlockIndex:690";
  *(_QWORD *)(v6 + 16) = BlockPathFindingDataGenerator::GetNeighborNodeInWorld;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116352;
  IntPair::IntPair((IntPair *const)(v6 + 32));
  BlockLinker::DirectionToNeighborBlockIndex(curBlockIndex, targetDir, (IntPair *)(v6 + 32));
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&v15, p_blockMap);
  NeighborNodeInWorld = BlockPathFindingDataGenerator::GetNeighborNodeInWorld(
                          this,
                          level,
                          targetIndex,
                          (const IntPair *)(v6 + 32),
                          &v15);
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&v15);
  result = NeighborNodeInWorld;
  if ( v16 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 696: range 000000000CBDB8FA-000000000CBDBA70
SVONode *__cdecl BlockPathFindingDataGenerator::GetNeighborNodeInWorld(
        const BlockPathFindingDataGenerator *const this,
        int level,
        uint64_t targetIndex,
        const IntPair *targetBlockIndex,
        std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *p_blockMap)
{
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v6; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v7; // rdx
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v9; // rdx
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v10; // rax
  std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *v11; // rax
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+38h] [rbp-28h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+40h] [rbp-20h] BYREF
  SVONode *targetNode; // [rsp+48h] [rbp-18h]
  IntPair v19; // 0:rsi.8

  if ( ((unsigned __int8)targetBlockIndex & 7) >= *(_BYTE *)(((unsigned __int64)targetBlockIndex >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)targetBlockIndex >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&targetBlockIndex->second + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)targetBlockIndex + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&targetBlockIndex->second + 3) >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load_n(targetBlockIndex, 8LL);
  }
  v19 = *targetBlockIndex;
  targetNode = BlockPathFindingDataGenerator::GetNodeInLayer(this, v19, level, targetIndex);
  if ( targetNode )
    return targetNode;
  if ( std::operator==<std::map<IntPair,std::shared_ptr<SVOBlock>>>(p_blockMap, 0LL) )
    return 0LL;
  v6 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_blockMap);
  __y._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v6)._M_node;
  v7 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_blockMap);
  __x._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(v7, targetBlockIndex)._M_node;
  if ( std::operator==(&__x, &__y) )
    return 0LL;
  v9 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_blockMap);
  v10 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](v9, targetBlockIndex);
  v11 = std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::get(v10);
  return SVODataProcessor::FindNodeByLayerAndIndex(v11, level, targetIndex);
};

// Line 707: range 000000000CBDBA72-000000000CBDBDE3
SVONode *__fastcall BlockPathFindingDataGenerator::GetNodeInLayer(
        const BlockPathFindingDataGenerator *const this,
        IntPair blockIndex,
        int level,
        uint64_t targetIndex)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  SVONode *v7; // r14
  std::_Rb_tree_const_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::pointer v8; // rax
  std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  SVONode *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self __y; // [rsp+20h] [rbp-140h] BYREF
  std::map<long unsigned int,NodeInfoPair*> *layerData; // [rsp+28h] [rbp-138h]
  char v18[304]; // [rsp+30h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 9 level:706 64 8 13 blockItem:708 96 8 13 layerItem:713 128 8 10 target:718 160 8 15 targ"
                        "etIndex:706 192 8 14 blockIndex:706 224 16 13 blockData:711";
  *(_QWORD *)(v4 + 16) = BlockPathFindingDataGenerator::GetNodeInLayer;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -202178560;
  *(IntPair *)(v4 + 192) = blockIndex;
  *(_DWORD *)(v4 + 48) = level;
  *(_QWORD *)(v4 + 160) = targetIndex;
  *(std::map<IntPair,std::shared_ptr<NodePairMap>>::const_iterator *)(v4 + 64) = std::map<IntPair,std::shared_ptr<NodePairMap>>::find(
                                                                                   &this->worldNodeMap,
                                                                                   (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v4 + 192));
  __y._M_node = std::map<IntPair,std::shared_ptr<NodePairMap>>::end(&this->worldNodeMap)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Self *)(v4 + 64),
         &__y) )
  {
    v7 = 0LL;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<IntPair const,std::shared_ptr<NodePairMap>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > > *const)(v4 + 64));
    std::shared_ptr<NodePairMap>::shared_ptr((std::shared_ptr<NodePairMap> *const)(v4 + 224), &v8->second);
    v9 = std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
    *(std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::iterator *)(v4 + 96) = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::find(
                                                                                                  v9,
                                                                                                  (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v4 + 48));
    v10 = std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodePairMap,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<const IntPair,std::shared_ptr<NodePairMap> > >::_Base_ptr)std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::end(v10)._M_cur;
    if ( std::__detail::operator==<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> *)(v4 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> *)&__y) )
    {
      v7 = 0LL;
    }
    else
    {
      layerData = &std::__detail::_Node_iterator<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false,false> *const)(v4 + 96))->second;
      *(std::map<long unsigned int,NodeInfoPair*>::iterator *)(v4 + 128) = std::map<unsigned long,NodeInfoPair *>::find(
                                                                             layerData,
                                                                             (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v4 + 160));
      __y._M_node = std::map<unsigned long,NodeInfoPair *>::end(layerData)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)(v4 + 128),
             (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__y) )
      {
        v7 = 0LL;
      }
      else
      {
        v11 = (__int64)std::_Rb_tree_iterator<std::pair<unsigned long const,NodeInfoPair *>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> > *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(v11 + 8, &__y);
        v12 = *(_QWORD *)(v11 + 8);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8(v12, &__y);
        v7 = *(SVONode **)v12;
      }
    }
    std::shared_ptr<NodePairMap>::~shared_ptr((std::shared_ptr<NodePairMap> *const)(v4 + 224));
  }
  result = v7;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
