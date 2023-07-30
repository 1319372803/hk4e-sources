// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp

// Line 11: range 000000000CBDDFD6-000000000CBDE069
ToTheMoonVector3 *__cdecl SVOBuilder::ProtoPosToVector3(const ToTheMoonProto::Pos *pos)
{
  ToTheMoonVector3 *v1; // rbx
  float v3; // [rsp+Ch] [rbp-24h]
  float v4; // [rsp+10h] [rbp-20h]
  float v5; // [rsp+14h] [rbp-1Ch]

  v5 = ToTheMoonProto::Pos::x(pos);
  v4 = ToTheMoonProto::Pos::y(pos);
  v3 = ToTheMoonProto::Pos::z(pos);
  v1 = (ToTheMoonVector3 *)operator new(0xCuLL);
  ToTheMoonVector3::ToTheMoonVector3(v1, v5, v4, v3);
  return v1;
};

// Line 15: range 000000000CBDE06A-000000000CBDE1BB
SVONode *__cdecl SVOBuilder::ProtoToNode(const ToTheMoonProto::SVONodeProto *nodeProto, SVOLayer *layer)
{
  google::protobuf::int32 v3; // r12d
  uint64_t v4; // r13
  SVONode *v5; // rbx
  google::protobuf::int32 v6; // edx
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-40h] BYREF

  if ( nodeProto )
  {
    v3 = ToTheMoonProto::SVONodeProto::area(nodeProto);
    v4 = ToTheMoonProto::SVONodeProto::mortonindex(nodeProto);
    v5 = (SVONode *)operator new(0x90uLL);
    SVONode::SVONode(v5, (AreaType)v3, v4, layer);
    if ( v5 )
    {
      v6 = ToTheMoonProto::SVONodeProto::childnum(nodeProto);
      if ( *(_BYTE *)(((unsigned __int64)&v5->childNum >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v5->childNum >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&v5->childNum);
      }
      v5->childNum = v6;
    }
    return v5;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp",
      "ProtoToNode",
      18);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"nodeProto is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0LL;
  }
};

// Line 29: range 000000000CBDE1BC-000000000CBDE51A
SVOLayer *__cdecl SVOBuilder::ProtoToLayer(
        const ToTheMoonProto::SVOLayerProto *layerProto,
        std::map<long unsigned int,NodeInfoPair*> *layerNodeMap,
        SVOStructure *svo)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  SVOLayer *result; // rax
  int v7; // r15d
  SVOLayer *v8; // r14
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto> *v9; // rax
  const ToTheMoonProto::SVONodeProto *v10; // rdx
  NodeInfoPair *v11; // r14
  unsigned __int64 v12; // rax
  int i; // [rsp+2Ch] [rbp-A4h]
  SVOLayer *layer; // [rsp+30h] [rbp-A0h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 node:43";
  *(_QWORD *)(v3 + 16) = SVOBuilder::ProtoToLayer;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( layerProto )
  {
    v7 = ToTheMoonProto::SVOLayerProto::level(layerProto);
    v8 = (SVOLayer *)operator new(0x28uLL);
    SVOLayer::SVOLayer(v8, v7, svo);
    layer = v8;
    if ( v8 )
    {
      for ( i = 0; i < ToTheMoonProto::SVOLayerProto::nodedata_size(layerProto); ++i )
      {
        v9 = ToTheMoonProto::SVOLayerProto::nodedata(layerProto);
        v10 = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVONodeProto>::operator[](v9, i);
        *(_QWORD *)(v3 + 32) = SVOBuilder::ProtoToNode(v10, layer);
        std::vector<SVONode *>::push_back(&layer->nodeData, (const std::vector<SVONode*>::value_type *)(v3 + 32));
        v11 = (NodeInfoPair *)operator new(0x10uLL);
        NodeInfoPair::NodeInfoPair(v11, *(SVONode **)(v3 + 32), i);
        v12 = (unsigned __int64)std::map<unsigned long,NodeInfoPair *>::operator[](
                                  layerNodeMap,
                                  (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(*(_QWORD *)(v3 + 32)
                                                                                              + 24LL));
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_store8();
        *(_QWORD *)v12 = v11;
      }
      result = layer;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp",
        "ProtoToLayer",
        38);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v16, (const char (*)[14])"layer is null");
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp",
      "ProtoToLayer",
      32);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v16, (const char (*)[19])"layerProto is null");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0LL;
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
  return result;
};

// Line 51: range 000000000CBDE51C-000000000CBDE93C
SVOStructure *__cdecl SVOBuilder::ProtoToStructure(
        const ToTheMoonProto::SVOStructureProto *structProto,
        NodePairMap *nodeMap)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  SVOStructure *result; // rax
  const ToTheMoonProto::Pos *v6; // rax
  const google::protobuf::RepeatedField<int> *v7; // rax
  int *v8; // rax
  int *v9; // rdx
  const google::protobuf::RepeatedField<int> *v10; // rax
  int *v11; // rax
  int *v12; // rdx
  const google::protobuf::RepeatedField<int> *v13; // rax
  int *v14; // rax
  int *v15; // rdx
  SVOStructure *v16; // r14
  SVOStructure *v17; // r14
  std::map<long unsigned int,NodeInfoPair*> *v18; // r15
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto> *v19; // rax
  const ToTheMoonProto::SVOLayerProto *v20; // rax
  int width; // [rsp+24h] [rbp-BCh]
  int height; // [rsp+28h] [rbp-B8h]
  int depth; // [rsp+2Ch] [rbp-B4h]
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __x; // [rsp+30h] [rbp-B0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __y; // [rsp+38h] [rbp-A8h] BYREF
  ToTheMoonVector3 *basePos; // [rsp+40h] [rbp-A0h]
  SVOStructure *svo; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-90h] BYREF
  char v29[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 4 i:68";
  *(_QWORD *)(v2 + 16) = SVOBuilder::ProtoToStructure;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( structProto )
  {
    v6 = ToTheMoonProto::SVOStructureProto::basepos(structProto);
    basePos = SVOBuilder::ProtoPosToVector3(v6);
    v7 = ToTheMoonProto::SVOStructureProto::totalindex(structProto);
    v8 = (int *)google::protobuf::RepeatedField<int>::operator[](v7, 0);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    width = *v9;
    v10 = ToTheMoonProto::SVOStructureProto::totalindex(structProto);
    v11 = (int *)google::protobuf::RepeatedField<int>::operator[](v10, 1);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    height = *v12;
    v13 = ToTheMoonProto::SVOStructureProto::totalindex(structProto);
    v14 = (int *)google::protobuf::RepeatedField<int>::operator[](v13, 2);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    depth = *v15;
    v16 = (SVOStructure *)operator new(0x38uLL);
    SVOStructure::SVOStructure(v16, 10, basePos, width, height, depth);
    svo = v16;
    if ( v16 )
    {
      for ( *(_DWORD *)(v2 + 32) = 0;
            ToTheMoonProto::SVOStructureProto::layerdata_size(structProto) > *(_DWORD *)(v2 + 32);
            ++*(_DWORD *)(v2 + 32) )
      {
        __y._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::end(nodeMap)._M_cur;
        __x._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::find(
                       nodeMap,
                       (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v2 + 32))._M_cur;
        if ( std::__detail::operator==<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false>(&__x, &__y) )
          std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::operator[](
            nodeMap,
            (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v2 + 32));
        v17 = svo;
        v18 = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::operator[](
                nodeMap,
                (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v2 + 32));
        v19 = ToTheMoonProto::SVOStructureProto::layerdata(structProto);
        v20 = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOLayerProto>::operator[](v19, *(_DWORD *)(v2 + 32));
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)SVOBuilder::ProtoToLayer(v20, v18, svo);
        std::vector<SVOLayer *>::push_back(&v17->layerData, (std::vector<SVOLayer*>::value_type *)&__y);
      }
      result = svo;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp",
      "ProtoToStructure",
      54);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v28, (const char (*)[20])"structProto is null");
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0LL;
  }
  if ( v29 == (char *)v2 )
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

// Line 79: range 000000000CBDE93E-000000000CBDEC87
std::shared_ptr<SVOBlock> __cdecl SVOBuilder::ProtoToBlock(
        const ToTheMoonProto::SVOBlockProto *blockProto,
        NodePairMap *nodeMap)
{
  NodePairMap *v2; // rdx
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::shared_ptr<SVOBlock> result; // rax
  const ToTheMoonProto::SVOStructureProto *v7; // rdx
  const google::protobuf::RepeatedField<int> *v8; // rax
  int *v9; // r8
  int (*v10)[2]; // r9
  int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // dl
  SVOStructure *v15; // r14
  SVOBlock *v16; // rax
  NodePairMap *nodeMapa; // [rsp+8h] [rbp-118h]
  int i; // [rsp+2Ch] [rbp-F4h]
  char v19[240]; // [rsp+30h] [rbp-F0h] BYREF

  nodeMapa = v2;
  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 10 sceneId:89 64 8 6 svo:84 96 8 13 blockIndex:92 128 16 14 _blockIndex:91 160 16 8 block:99";
  *(_QWORD *)(v3 + 16) = SVOBuilder::ProtoToBlock;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( nodeMap
    && (v7 = ToTheMoonProto::SVOBlockProto::svo((const ToTheMoonProto::SVOBlockProto *const)nodeMap),
        (*(_QWORD *)(v3 + 64) = SVOBuilder::ProtoToStructure(v7, nodeMapa)) != 0LL) )
  {
    *(_DWORD *)(v3 + 48) = ToTheMoonProto::SVOBlockProto::sceneid((const ToTheMoonProto::SVOBlockProto *const)nodeMap);
    v8 = ToTheMoonProto::SVOBlockProto::blockindex((const ToTheMoonProto::SVOBlockProto *const)nodeMap);
    google::protobuf::RepeatedField<int>::RepeatedField((google::protobuf::RepeatedField<int> *const)(v3 + 128), v8);
    for ( i = 0; i <= 1; ++i )
    {
      v11 = google::protobuf::RepeatedField<int>::operator[]((google::protobuf::RepeatedField<int> *const)(v3 + 128), i);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((4LL * i + v3 + 96) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)(((4 * i + v3 + 96) & 7) + 3) >= v14 )
        __asan_report_store4(4LL * i + v3 + 96);
      *(_DWORD *)(v3 + 192 + 4LL * i - 96) = v13;
    }
    std::make_shared<SVOBlock,SVOStructure *&,int &,int (&)[2]>(
      (SVOStructure **)(v3 + 160),
      (int *)(v3 + 64),
      (int (*)[2])(v3 + 48),
      (SVOStructure **)(v3 + 96),
      v9,
      v10);
    v15 = *(SVOStructure **)(v3 + 64);
    v16 = std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 160));
    SVOStructure::SetBlock(v15, v16);
    std::shared_ptr<SVOBlock>::shared_ptr(
      (std::shared_ptr<SVOBlock> *const)blockProto,
      (std::shared_ptr<SVOBlock> *)(v3 + 160));
    std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v3 + 160));
    google::protobuf::RepeatedField<int>::~RepeatedField((google::protobuf::RepeatedField<int> *const)(v3 + 128));
  }
  else
  {
    std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)blockProto, 0LL);
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)blockProto;
  return result;
};

// Line 106: range 000000000CBDEC88-000000000CBDF1D6
std::shared_ptr<SVOWorld> __cdecl SVOBuilder::ProtoToWorld(
        const ToTheMoonProto::SVOWorldProto *worldProto,
        std::map<IntPair,std::shared_ptr<NodePairMap>> *worldNodeMap,
        std::map<IntPair,const ToTheMoonProto::SVOBlockProto*> *blockProtoMap,
        BlockPathFindingDataGenerator *dataGenerator)
{
  BlockPathFindingDataGenerator *v4; // r8
  __m128i v5; // xmm0
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::shared_ptr<SVOWorld> result; // rax
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto> *v10; // rax
  NodePairMap *v11; // rax
  int v12; // r14d
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int v14; // r14d
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  int *blockIndex; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v17; // rax
  std::shared_ptr<SVOBlock> *v18; // rax
  std::shared_ptr<NodePairMap> *v19; // rax
  const google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto> *v20; // rax
  const ToTheMoonProto::SVOBlockProto *v21; // r14
  unsigned __int64 v22; // rax
  BlockPathFindingDataGenerator *dataGeneratora; // [rsp+8h] [rbp-128h]
  const ToTheMoonProto::SVOWorldProto *worldProtoa; // [rsp+20h] [rbp-110h]
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > __args_0; // [rsp+38h] [rbp-F8h] BYREF
  char v28[208]; // [rsp+60h] [rbp-D0h] BYREF

  worldProtoa = (const ToTheMoonProto::SVOWorldProto *)worldNodeMap;
  dataGeneratora = v4;
  v6 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 32 8 11 intPair:121 64 16 12 blockMap:112 96 16 11 nodeMap:115 128 16 9 block:116";
  *(_QWORD *)(v6 + 16) = SVOBuilder::ProtoToWorld;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -202178560;
  if ( worldNodeMap && dataGeneratora )
  {
    std::make_shared<std::map<IntPair,std::shared_ptr<SVOBlock>>>();
    HIDWORD(__args_0._M_ptr) = 0;
    while ( SHIDWORD(__args_0._M_ptr) < ToTheMoonProto::SVOWorldProto::blocks_size(worldProtoa) )
    {
      std::make_shared<NodePairMap>();
      std::__shared_ptr<NodePairMap,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<NodePairMap,(__gnu_cxx::_Lock_policy)2> *const)(v6 + 96));
      v10 = ToTheMoonProto::SVOWorldProto::blocks(worldProtoa);
      v11 = (NodePairMap *)google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto>::operator[](
                             v10,
                             SHIDWORD(__args_0._M_ptr));
      BlockPathFindingDataGenerator::ProcessBlockProto(
        (BlockPathFindingDataGenerator *const)(v6 + 128),
        (const ToTheMoonProto::SVOBlockProto *)dataGeneratora,
        v11);
      if ( std::operator==<SVOBlock>((const std::shared_ptr<SVOBlock> *)(v6 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__args_0._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp",
          "ProtoToWorld",
          118);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)&__args_0._M_refcount,
          (const char (*)[34])"block is null@from proto to block");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__args_0._M_refcount);
        worldNodeMap = 0LL;
        std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)worldProto, 0LL);
        v12 = 0;
      }
      else
      {
        v13 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v13->blockIndex[1] >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->blockIndex[1] >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)v5.m128i_i64 = __asan_report_load4(&v13->blockIndex[1]);
        }
        v14 = v13->blockIndex[1];
        v15 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
        blockIndex = v15->blockIndex;
        if ( *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)blockIndex & 7) + 3) >= *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) )
        {
          *(double *)v5.m128i_i64 = __asan_report_load4(blockIndex);
        }
        IntPair::IntPair((IntPair *const)(v6 + 32), v15->blockIndex[0], v14);
        v17 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
        v18 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](
                v17,
                (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v6 + 32));
        std::shared_ptr<SVOBlock>::operator=(v18, (const std::shared_ptr<SVOBlock> *)(v6 + 128));
        v19 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
                (std::map<IntPair,std::shared_ptr<NodePairMap>> *const)blockProtoMap,
                (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v6 + 32));
        std::shared_ptr<NodePairMap>::operator=(v19, (const std::shared_ptr<NodePairMap> *)(v6 + 96));
        v20 = ToTheMoonProto::SVOWorldProto::blocks(worldProtoa);
        v21 = google::protobuf::RepeatedPtrField<ToTheMoonProto::SVOBlockProto>::operator[](
                v20,
                SHIDWORD(__args_0._M_ptr));
        worldNodeMap = (std::map<IntPair,std::shared_ptr<NodePairMap>> *)(v6 + 32);
        v22 = (unsigned __int64)std::map<IntPair,ToTheMoonProto::SVOBlockProto const*>::operator[](
                                  (std::map<IntPair,const ToTheMoonProto::SVOBlockProto*> *const)dataGenerator,
                                  (const std::map<IntPair,const ToTheMoonProto::SVOBlockProto*>::key_type *)(v6 + 32));
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_store8();
        *(_QWORD *)v22 = v21;
        v12 = 1;
      }
      std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v6 + 128));
      std::shared_ptr<NodePairMap>::~shared_ptr((std::shared_ptr<NodePairMap> *const)(v6 + 96));
      if ( v12 != 1 )
        goto LABEL_23;
      ++HIDWORD(__args_0._M_ptr);
    }
    *(float *)v5.m128i_i32 = ToTheMoonProto::SVOWorldProto::side_length(worldProtoa);
    LODWORD(__args_0._M_ptr) = _mm_cvtsi128_si32(v5);
    if ( *(_WORD *)(((unsigned __int64)worldProto >> 3) + 0x7FFF8000) )
      __asan_report_store16(worldProto, worldNodeMap);
    std::make_shared<SVOWorld,std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>> &,float>(
      (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)worldProto,
      (float *)(v6 + 64),
      &__args_0,
      (float *)(v6 + 64));
LABEL_23:
    std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr((std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *const)(v6 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__args_0._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp",
      "ProtoToWorld",
      109);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&__args_0._M_refcount,
      (const char (*)[19])"worldProto is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__args_0._M_refcount);
    std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)worldProto, 0LL);
  }
  if ( v28 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)worldProto;
  return result;
};

// Line 130: range 000000000CBDF1D8-000000000CBDF570
std::shared_ptr<SVOWorld> __cdecl SVOBuilder::BlockProtoToWorld(
        const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *blockProtoMap,
        std::map<IntPair,std::shared_ptr<NodePairMap>> *worldNodeMap,
        BlockPathFindingDataGenerator *dataGenerator)
{
  BlockPathFindingDataGenerator *v3; // rcx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::pair<const IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto> > *v7; // rax
  NodePairMap *v8; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v9; // rax
  std::shared_ptr<SVOBlock> *v10; // rax
  std::shared_ptr<NodePairMap> *v11; // rax
  std::shared_ptr<SVOWorld> result; // rax
  BlockPathFindingDataGenerator *dataGeneratora; // [rsp+0h] [rbp-150h]
  std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *__for_range; // [rsp+38h] [rbp-118h]
  char v18[272]; // [rsp+40h] [rbp-110h] BYREF

  dataGeneratora = v3;
  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 8 11 intPair:138 64 16 12 blockMap:131 96 16 11 nodeMap:136 128 16 9 block:137 160 24 18 bl"
                        "ockProtoItem:133";
  *(_QWORD *)(v4 + 16) = SVOBuilder::BlockProtoToWorld;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  std::make_shared<std::map<IntPair,std::shared_ptr<SVOBlock>>>();
  __for_range = (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *)worldNodeMap;
  __for_begin._M_node = std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::begin((const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)worldNodeMap)._M_node;
  __for_end._M_node = std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::end((const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)worldNodeMap)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<IntPair const,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>>::operator*(&__for_begin);
    std::pair<IntPair const,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::pair(
      (std::pair<const IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto> > *const)(v4 + 160),
      v7);
    std::make_shared<NodePairMap>();
    std::__shared_ptr<NodePairMap,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<NodePairMap,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 96));
    v8 = (NodePairMap *)std::__shared_ptr<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 168));
    BlockPathFindingDataGenerator::ProcessBlockProto(
      (BlockPathFindingDataGenerator *const)(v4 + 128),
      (const ToTheMoonProto::SVOBlockProto *)dataGeneratora,
      v8);
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(v4 + 160);
    v9 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v10 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](
            v9,
            (const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *)(v4 + 32));
    std::shared_ptr<SVOBlock>::operator=(v10, (const std::shared_ptr<SVOBlock> *)(v4 + 128));
    v11 = std::map<IntPair,std::shared_ptr<NodePairMap>>::operator[](
            (std::map<IntPair,std::shared_ptr<NodePairMap>> *const)dataGenerator,
            (const std::map<IntPair,std::shared_ptr<NodePairMap>>::key_type *)(v4 + 32));
    std::shared_ptr<NodePairMap>::operator=(v11, (const std::shared_ptr<NodePairMap> *)(v4 + 96));
    std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v4 + 128));
    std::shared_ptr<NodePairMap>::~shared_ptr((std::shared_ptr<NodePairMap> *const)(v4 + 96));
    std::pair<IntPair const,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::~pair((std::pair<const IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto> > *const)(v4 + 160));
    std::_Rb_tree_const_iterator<std::pair<IntPair const,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)blockProtoMap >> 3) + 0x7FFF8000) )
    __asan_report_store16(blockProtoMap, &__for_end);
  std::make_shared<SVOWorld,std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>> &,int const&>(
    (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)blockProtoMap,
    (const int *)(v4 + 64),
    (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)&ConfigToTheMoon::ConfigParameters::DEFAULT_BLOCK_SIDE_LENGTH,
    (const int *)(v4 + 64));
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr((std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *const)(v4 + 64));
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)blockProtoMap;
  return result;
};

// Line 147: range 000000000CBDF572-000000000CBDF80E
ToTheMoonProto::SVONodeProto *__cdecl SVOBuilder::NodeToProto(const SVONode *node)
{
  __int64 v1; // rsi
  ToTheMoonProto::SVONodeProto *v3; // rbx
  __int64 area; // rsi
  uint64_t index; // rsi
  unsigned __int64 children; // rax
  __int64 v7; // rax
  google::protobuf::int64 v8; // rdx
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( !node )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&node->referPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&node->referPos, v1);
  if ( node->referPos )
  {
    v3 = (ToTheMoonProto::SVONodeProto *)operator new(0xC8uLL);
    ToTheMoonProto::SVONodeProto::SVONodeProto(v3);
    if ( v3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&node->area >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&node->area);
      }
      area = (unsigned int)node->area;
      ToTheMoonProto::SVONodeProto::set_area(v3, area);
      if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->index, area);
      index = node->index;
      ToTheMoonProto::SVONodeProto::set_mortonindex(v3, index);
      if ( *(_BYTE *)(((unsigned __int64)&node->children >> 3) + 0x7FFF8000) )
        __asan_report_load8(&node->children, index);
      if ( node->children )
      {
        children = (unsigned __int64)node->children;
        if ( *(_BYTE *)((children >> 3) + 0x7FFF8000) )
          children = __asan_report_load8(node->children, index);
        v7 = *(_QWORD *)children;
        if ( *(_BYTE *)(((unsigned __int64)(v7 + 24) >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7 + 24, index);
        v8 = *(_QWORD *)(v7 + 24);
      }
      else
      {
        v8 = -1LL;
      }
      ToTheMoonProto::SVONodeProto::set_children(v3, v8);
      return v3;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp",
        "NodeToProto",
        156);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v9, (const char (*)[18])"nodeProto is null");
      common::milog::MiLogStream::~MiLogStream(&v9);
      return 0LL;
    }
  }
  else
  {
LABEL_5:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/svo_builder.cpp",
      "NodeToProto",
      150);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v9, (const char (*)[25])"node or referPos is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0LL;
  }
};

// Line 168: range 000000000CBDF810-000000000CBDF86C
void __cdecl SVOBuilder::NodeToWrapperProto(const SVONode *node, ToTheMoonProto::SVONodeWrapperProto *wrapperProto)
{
  int v2; // edx
  ToTheMoonProto::SVONodeProto *v3; // rdx

  if ( wrapperProto )
  {
    if ( node )
    {
      v2 = SVOBuilder::NodeToLevel(node);
      ToTheMoonProto::SVONodeWrapperProto::set_level(wrapperProto, v2);
      v3 = SVOBuilder::NodeToProto(node);
      ToTheMoonProto::SVONodeWrapperProto::set_allocated_svonode(wrapperProto, v3);
    }
  }
};

// Line 177: range 000000000CBDF86E-000000000CBDF8DC
int __cdecl SVOBuilder::NodeToLevel(const SVONode *node)
{
  __int64 v1; // rsi
  const SVONode *nodea; // [rsp+8h] [rbp-18h]
  int parentLevel; // [rsp+1Ch] [rbp-4h]

  nodea = node;
  if ( !node )
    return -1;
  for ( parentLevel = 0; ; ++parentLevel )
  {
    if ( *(_BYTE *)(((unsigned __int64)&nodea->parent >> 3) + 0x7FFF8000) )
      __asan_report_load8(&nodea->parent, v1);
    if ( !nodea->parent )
      break;
    nodea = nodea->parent;
  }
  return 9 - parentLevel;
};
