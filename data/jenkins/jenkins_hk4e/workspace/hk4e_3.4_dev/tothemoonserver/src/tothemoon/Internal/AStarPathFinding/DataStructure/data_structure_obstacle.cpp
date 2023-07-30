// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure_obstacle.cpp

// Line 11: range 000000000CBF277A-000000000CBF2989
void __cdecl DynamicNodesInfo::DynamicNodesInfo(DynamicNodesInfo *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v4; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> v5; // [rsp+10h] [rbp-90h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 4 i:13";
  *(_QWORD *)(v1 + 16) = DynamicNodesInfo::DynamicNodesInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::map(&this->nodeMap);
  std::map<int,std::shared_ptr<OperationCache>>::map(&this->handleMap);
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::map(&this->nodesAdded);
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::map(&this->nodesDestroyed);
  for ( *(_DWORD *)(v1 + 32) = 0; *(int *)(v1 + 32) <= 9; ++*(_DWORD *)(v1 + 32) )
  {
    memset(&v5, 0, sizeof(v5));
    std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::map(&v5);
    v4 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
           &this->nodeMap,
           (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v1 + 32));
    std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::operator=(v4, &v5);
    std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::~map(&v5);
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 18: range 000000000CBF298A-000000000CBF29D6
void __cdecl DynamicNodesInfo::~DynamicNodesInfo(DynamicNodesInfo *const this)
{
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::~map(&this->nodesDestroyed);
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::~map(&this->nodesAdded);
  std::map<int,std::shared_ptr<OperationCache>>::~map(&this->handleMap);
  std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::~map(&this->nodeMap);
};

// Line 23: range 000000000CBF29D8-000000000CBF2A85
void __cdecl DynamicNodesInfo::Clear(DynamicNodesInfo *const this)
{
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>> *__for_range; // [rsp+20h] [rbp-10h]
  std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > *layerDataItem; // [rsp+28h] [rbp-8h]

  __for_range = &this->nodeMap;
  __for_begin._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::begin(&this->nodeMap)._M_node;
  __for_end._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(&this->nodeMap)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    layerDataItem = std::_Rb_tree_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator*(&__for_begin);
    std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::clear(&layerDataItem->second);
    std::_Rb_tree_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator++(&__for_begin);
  }
  std::map<int,std::shared_ptr<OperationCache>>::clear(&this->handleMap);
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::clear(&this->nodesAdded);
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::clear(&this->nodesDestroyed);
};

// Line 33: range 000000000CBF2A86-000000000CBF2CCA
const DynamicNodesInfo *__fastcall DynamicNodesInfo::GetNode(
        const DynamicNodesInfo *const this,
        const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>> *layer,
        uint64_t index,
        __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::pointer v7; // rax
  std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::pointer v8; // rax
  std::_Rb_tree_const_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::pointer v9; // rax
  int v12; // [rsp+Ch] [rbp-E4h]
  std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  char v14[192]; // [rsp+30h] [rbp-C0h] BYREF

  v12 = index;
  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 8 layer:32 64 8 16 layerNodeData:34 96 8 11 nodeData:40 128 8 8 index:32";
  *(_QWORD *)(v4 + 16) = DynamicNodesInfo::GetNode;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  *(_DWORD *)(v4 + 48) = v12;
  *(_QWORD *)(v4 + 128) = a4;
  *(std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::const_iterator *)(v4 + 64) = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::find(layer, (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v4 + 48));
  __y._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(layer)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self *)(v4 + 64),
         &__y)
    || (v7 = std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > > *const)(v4 + 64)),
        *(std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::const_iterator *)(v4 + 96) = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::find(&v7->second, (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v4 + 128)),
        v8 = std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > > *const)(v4 + 64)),
        __y._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::end(&v8->second)._M_node,
        !std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::_Self *)(v4 + 96),
           (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::_Self *)&__y)) )
  {
    std::shared_ptr<DynamicSVONode>::shared_ptr((std::shared_ptr<DynamicSVONode> *const)this, 0LL);
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned long const,std::shared_ptr<DynamicSVONode>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > > *const)(v4 + 96));
    std::shared_ptr<DynamicSVONode>::shared_ptr((std::shared_ptr<DynamicSVONode> *const)this, &v9->second);
  }
  if ( v14 == (char *)v4 )
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
  return this;
};

// Line 49: range 000000000CBF2CCC-000000000CBF31C7
DynamicNodesInfo *__fastcall DynamicNodesInfo::AdaptiveGetNode(
        DynamicNodesInfo *const this,
        DynamicNodesInfo *node,
        __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v12; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v13; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v14; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::pointer v15; // rax
  std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::pointer v16; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::mapped_type *v17; // rax
  std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::pointer v18; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::mapped_type *v19; // rax
  DynamicNodesInfo *thisa; // [rsp+10h] [rbp-160h]
  std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self __y; // [rsp+28h] [rbp-148h] BYREF
  std::shared_ptr<DynamicSVONode> __r; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-130h] BYREF
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> v26; // [rsp+60h] [rbp-110h] BYREF
  char v27[224]; // [rsp+90h] [rbp-E0h] BYREF

  thisa = node;
  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 8 layer:52 64 8 8 index:53 96 8 16 layerNodeData:54 128 8 11 nodeData:61 160 8 7 node:48";
  *(_QWORD *)(v3 + 16) = DynamicNodesInfo::AdaptiveGetNode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_QWORD *)(v3 + 160) = a3;
  if ( !*(_QWORD *)(v3 + 160) )
    goto LABEL_8;
  v6 = *(_QWORD *)(v3 + 160);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6 + 8, node);
  if ( *(_QWORD *)(v6 + 8) )
  {
    v7 = *(_QWORD *)(v3 + 160);
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7 + 8, node);
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
    LOBYTE(node) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_load4(v8);
    *(_DWORD *)(v3 + 48) = *(_DWORD *)v8;
    v10 = *(_QWORD *)(v3 + 160);
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10 + 24, node);
    *(_QWORD *)(v3 + 64) = *(_QWORD *)(v10 + 24);
    *(std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::iterator *)(v3 + 96) = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::find(&thisa->nodeMap, (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v3 + 48));
    __y._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(&thisa->nodeMap)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure_obstacle.cpp",
        "AdaptiveGetNode",
        57);
      v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v25,
              (const char (*)[42])"wrong layer index or node_map not init : ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      memset(&v26, 0, sizeof(v26));
      std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::map(&v26);
      v12 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
              &thisa->nodeMap,
              (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v3 + 48));
      std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::operator=(v12, &v26);
      std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::~map(&v26);
    }
    v13 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
            &thisa->nodeMap,
            (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v3 + 48));
    *(std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::iterator *)(v3 + 128) = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::find(
                                                                                             v13,
                                                                                             (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v3 + 64));
    v14 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
            &thisa->nodeMap,
            (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v3 + 48));
    __y._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::end(v14)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::_Self *)(v3 + 128),
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::_Self *)&__y) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<DynamicSVONode>>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > > *const)(v3 + 128));
      std::shared_ptr<DynamicSVONode>::shared_ptr((std::shared_ptr<DynamicSVONode> *const)this, &v15->second);
    }
    else
    {
      std::make_shared<DynamicSVONode,SVONode *&>(&__r._M_ptr, (SVONode **)(v3 + 160));
      v16 = std::_Rb_tree_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > > *const)(v3 + 96));
      v17 = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::operator[](
              &v16->second,
              (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v3 + 64));
      std::shared_ptr<DynamicSVONode>::operator=(v17, &__r);
      std::shared_ptr<DynamicSVONode>::~shared_ptr(&__r);
      v18 = std::_Rb_tree_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > > *const)(v3 + 96));
      v19 = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::operator[](
              &v18->second,
              (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v3 + 64));
      std::shared_ptr<DynamicSVONode>::shared_ptr((std::shared_ptr<DynamicSVONode> *const)this, v19);
    }
  }
  else
  {
LABEL_8:
    std::shared_ptr<DynamicSVONode>::shared_ptr((std::shared_ptr<DynamicSVONode> *const)this, 0LL);
  }
  if ( v27 == (char *)v3 )
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
  return this;
};

// Line 71: range 000000000CBF31C8-000000000CBF3350
const DynamicNodesInfo *__fastcall DynamicNodesInfo::GetOperation(
        const DynamicNodesInfo *const this,
        const std::map<int,std::shared_ptr<OperationCache>> *handle,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<OperationCache> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<OperationCache> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 handle:70 64 8 5 op:72";
  *(_QWORD *)(v3 + 16) = DynamicNodesInfo::GetOperation;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<int,std::shared_ptr<OperationCache>>::const_iterator *)(v3 + 64) = std::map<int,std::shared_ptr<OperationCache>>::find(
                                                                                  handle + 1,
                                                                                  (const std::map<int,std::shared_ptr<OperationCache>>::key_type *)(v3 + 48));
  __y._M_node = std::map<int,std::shared_ptr<OperationCache>>::end(handle + 1)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<OperationCache> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<OperationCache>::shared_ptr((std::shared_ptr<OperationCache> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<OperationCache>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<OperationCache> > > *const)(v3 + 64));
    std::shared_ptr<OperationCache>::shared_ptr((std::shared_ptr<OperationCache> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 79: range 000000000CBF3352-000000000CBF3470
SVONode *__cdecl DynamicNodesInfo::GetNode(
        const DynamicNodesInfo *const this,
        int level,
        uint64_t index,
        SVONode *defaultNode)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // r14
  SVONode *result; // rax
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 11 dynaNode:80";
  *(_QWORD *)(v4 + 16) = DynamicNodesInfo::GetNode;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  DynamicNodesInfo::GetNode((const DynamicNodesInfo *const)(v4 + 32), &this->nodeMap, (unsigned int)level, index);
  if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v4 + 32), 0LL) )
    v7 = std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 32));
  else
    v7 = (std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *)defaultNode;
  std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v4 + 32));
  result = v7;
  if ( v11 == (char *)v4 )
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

// Line 88: range 000000000CBF3472-000000000CBF3615
SVONode *__cdecl DynamicNodesInfo::GetNodeByOriginNode(const DynamicNodesInfo *const this, SVONode *node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // r14
  __int64 index; // rcx
  SVOLayer *layer; // rax
  SVONode *result; // rax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 dynaNode:91";
  *(_QWORD *)(v2 + 16) = DynamicNodesInfo::GetNodeByOriginNode;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( node )
  {
    if ( *(_BYTE *)(((unsigned __int64)&node->index >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->index, node);
    index = node->index;
    if ( *(_BYTE *)(((unsigned __int64)&node->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&node->layer, node);
    layer = node->layer;
    if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(node->layer);
    }
    DynamicNodesInfo::GetNode(
      (const DynamicNodesInfo *const)(v2 + 32),
      &this->nodeMap,
      (unsigned int)layer->level,
      index);
    if ( std::operator!=<DynamicSVONode>((const std::shared_ptr<DynamicSVONode> *)(v2 + 32), 0LL) )
      v5 = std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32));
    else
      v5 = (std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::element_type *)node;
    std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v2 + 32));
  }
  else
  {
    v5 = 0LL;
  }
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 98: range 000000000CBF3616-000000000CBF3715
bool __fastcall DynamicNodesInfo::ContainsHandle(const DynamicNodesInfo *const this, int handle)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<OperationCache> > >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<int const,std::shared_ptr<OperationCache> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 handle:97";
  *(_QWORD *)(v2 + 16) = DynamicNodesInfo::ContainsHandle;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = handle;
  __y._M_node = std::map<int,std::shared_ptr<OperationCache>>::end(&this->handleMap)._M_node;
  __x._M_node = std::map<int,std::shared_ptr<OperationCache>>::find(
                  &this->handleMap,
                  (const std::map<int,std::shared_ptr<OperationCache>>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
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

// Line 103: range 000000000CBF3716-000000000CBF3995
_BOOL8 __fastcall DynamicNodesInfo::ContainsNode(const DynamicNodesInfo *const this, int layer, uint64_t index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::pointer v8; // rax
  std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::pointer v9; // rax
  std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-E0h] BYREF
  char v13[192]; // [rsp+50h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 9 layer:102 64 8 17 layerNodeData:104 96 8 12 nodeData:111 128 8 9 index:102";
  *(_QWORD *)(v3 + 16) = DynamicNodesInfo::ContainsNode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 48) = layer;
  *(_QWORD *)(v3 + 128) = index;
  *(std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::const_iterator *)(v3 + 64) = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::find(&this->nodeMap, (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v3 + 48));
  __y._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(&this->nodeMap)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure_obstacle.cpp",
      "ContainsNode",
      107);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v12,
           (const char (*)[42])"wrong layer index or node_map not init : ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0LL;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > > *const)(v3 + 64));
    *(std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::const_iterator *)(v3 + 96) = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::find(
                                                                                                  &v8->second,
                                                                                                  (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v3 + 128));
    v9 = std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > > *const)(v3 + 64));
    __y._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::end(&v9->second)._M_node;
    result = !std::operator==(
                (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::_Self *)(v3 + 96),
                (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::_Self *)&__y);
  }
  if ( v13 == (char *)v3 )
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

// Line 121: range 000000000CBF3996-000000000CBF3D7F
__int64 __fastcall DynamicNodesInfo::AddChildNode(
        DynamicNodesInfo *const this,
        std::shared_ptr<DynamicSVONode> *p_parent,
        unsigned int childLayer,
        unsigned __int64 *childIndex,
        unsigned int childRank,
        SVOBlock *blockData)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r15d
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v12; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::mapped_type *v13; // rax
  std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > *v14; // rax
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::mapped_type *v15; // rax
  std::vector<std::shared_ptr<DynamicSVONode>> *v16; // rax
  __int64 result; // rax
  int *v18; // [rsp+0h] [rbp-140h]
  SVOBlock **v21; // [rsp+18h] [rbp-128h]
  std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self __x; // [rsp+30h] [rbp-110h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self __y; // [rsp+38h] [rbp-108h] BYREF
  std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > __r; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+70h] [rbp-D0h] BYREF

  v21 = (SVOBlock **)__PAIR64__(childLayer, childRank);
  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 4 14 childLayer:120 48 4 13 childRank:120 64 8 14 childIndex:120 96 8 13 blockData:120 128 16 9 child:127";
  *(_QWORD *)(v6 + 16) = DynamicNodesInfo::AddChildNode;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 32) = HIDWORD(v21);
  *(_QWORD *)(v6 + 64) = childIndex;
  *(_DWORD *)(v6 + 48) = (_DWORD)v21;
  *(_QWORD *)(v6 + 96) = blockData;
  __y._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(&this->nodeMap)._M_node;
  __x._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::find(
                  &this->nodeMap,
                  (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v6 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure_obstacle.cpp",
      "AddChildNode",
      123);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v25, (const char (*)[12])"ChildLayer ");
    v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v6 + 32));
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v10, (const char (*)[23])" Not Found In node_map");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v11 = 0;
  }
  else
  {
    std::make_shared<DynamicSVONode,std::shared_ptr<DynamicSVONode> &,int &,int &,unsigned long &,SVOBlock *&>(
      (std::shared_ptr<DynamicSVONode> *)(v6 + 128),
      (int *)p_parent,
      (int *)(v6 + 48),
      (unsigned __int64 *)(v6 + 32),
      (SVOBlock **)(v6 + 64),
      (std::shared_ptr<DynamicSVONode> *)(v6 + 96),
      v18,
      (int *)blockData,
      childIndex,
      v21);
    v12 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
            &this->nodeMap,
            (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v6 + 32));
    v13 = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::operator[](
            v12,
            (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v6 + 64));
    std::shared_ptr<DynamicSVONode>::operator=(v13, (const std::shared_ptr<DynamicSVONode> *)(v6 + 128));
    __y._M_node = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::end(&this->nodesAdded)._M_node;
    __x._M_node = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::find(
                    &this->nodesAdded,
                    (const std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::key_type *)(v6 + 32))._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > >::_Self *)&__x,
           (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > >::_Self *)&__y) )
    {
      std::make_shared<std::vector<std::shared_ptr<DynamicSVONode>>>();
      v14 = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::operator[](
              &this->nodesAdded,
              (const std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::key_type *)(v6 + 32));
      std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>::operator=(v14, &__r);
      std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>::~shared_ptr(&__r);
    }
    v15 = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::operator[](
            &this->nodesAdded,
            (const std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::key_type *)(v6 + 32));
    v16 = std::__shared_ptr_access<std::vector<std::shared_ptr<DynamicSVONode>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<std::shared_ptr<DynamicSVONode>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
    std::vector<std::shared_ptr<DynamicSVONode>>::push_back(
      v16,
      (const std::vector<std::shared_ptr<DynamicSVONode>>::value_type *)(v6 + 128));
    v11 = 1;
    std::shared_ptr<DynamicSVONode>::~shared_ptr((std::shared_ptr<DynamicSVONode> *const)(v6 + 128));
  }
  result = v11;
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 138: range 000000000CBF3D80-000000000CBF40C7
void __fastcall DynamicNodesInfo::DestroyNode(DynamicNodesInfo *const this, int level, uint64_t index, bool cached)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v7; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v8; // rax
  std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > *v9; // rax
  std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::mapped_type *v10; // rax
  std::vector<std::shared_ptr<DynamicSVONode>> *v11; // r14
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v12; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::mapped_type *v13; // rax
  std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> *v14; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::_Self __x; // [rsp+20h] [rbp-D0h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > __r; // [rsp+30h] [rbp-C0h] BYREF
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 9 level:137 64 8 17 layerDataIter:139 96 8 9 index:137";
  *(_QWORD *)(v4 + 16) = DynamicNodesInfo::DestroyNode;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = level;
  *(_QWORD *)(v4 + 96) = index;
  *(std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::iterator *)(v4 + 64) = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::find(&this->nodeMap, (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v4 + 48));
  __y._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(&this->nodeMap)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > >::_Self *)(v4 + 64),
          &__y) )
  {
    v7 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
           &this->nodeMap,
           (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v4 + 48));
    __y._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::end(v7)._M_node;
    v8 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
           &this->nodeMap,
           (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v4 + 48));
    __x._M_node = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::find(
                    v8,
                    (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v4 + 96))._M_node;
    if ( !std::operator==(
            &__x,
            (const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<DynamicSVONode> > >::_Self *)&__y) )
    {
      if ( cached )
      {
        __y._M_node = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::end(&this->nodesDestroyed)._M_node;
        __x._M_node = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::find(
                        &this->nodesDestroyed,
                        (const std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::key_type *)(v4 + 48))._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > >::_Self *)&__x,
               (const std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > >::_Self *)&__y) )
        {
          std::make_shared<std::vector<std::shared_ptr<DynamicSVONode>>>();
          v9 = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::operator[](
                 &this->nodesDestroyed,
                 (const std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::key_type *)(v4 + 48));
          std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>::operator=(v9, &__r);
          std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>::~shared_ptr(&__r);
        }
        v10 = std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>>>>>>::operator[](
                &this->nodesDestroyed,
                (const std::map<int,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> >,std::greater<int>,std::allocator<std::pair<int const,std::shared_ptr<std::vector<std::shared_ptr<DynamicSVONode>> > > > >::key_type *)(v4 + 48));
        v11 = std::__shared_ptr_access<std::vector<std::shared_ptr<DynamicSVONode>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<std::shared_ptr<DynamicSVONode>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10);
        v12 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
                &this->nodeMap,
                (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v4 + 48));
        v13 = std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::operator[](
                v12,
                (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v4 + 96));
        std::vector<std::shared_ptr<DynamicSVONode>>::push_back(v11, v13);
      }
      v14 = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::operator[](
              &this->nodeMap,
              (const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::key_type *)(v4 + 48));
      std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::erase(
        v14,
        (const std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>::key_type *)(v4 + 96));
    }
  }
  if ( v20 == (char *)v4 )
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

// Line 156: range 000000000CBF40C8-000000000CBF41E8
void __cdecl DynamicNodesInfo::DestroyNode(DynamicNodesInfo *const this, std::shared_ptr<DynamicSVONode> *p_node)
{
  __int64 v2; // rax
  char v3; // al
  __int64 v4; // rax
  uint64_t v5; // rbx
  __int64 v6; // rax
  int *v7; // rax

  if ( !std::operator!=<DynamicSVONode>(p_node, 0LL) )
    goto LABEL_6;
  v2 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
  if ( *(_BYTE *)(((unsigned __int64)(v2 + 8) >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2 + 8, 0LL);
  if ( *(_QWORD *)(v2 + 8) )
    v3 = 1;
  else
LABEL_6:
    v3 = 0;
  if ( v3 )
  {
    v4 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 24) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4 + 24, 0LL);
    v5 = *(_QWORD *)(v4 + 24);
    v6 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6 + 8, 0LL);
    v7 = *(int **)(v6 + 8);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v7);
    }
    DynamicNodesInfo::DestroyNode(this, *v7, v5, 0);
  }
};

// Line 162: range 000000000CBF41EA-000000000CBF437E
void __cdecl DynamicNodesInfo::DestroyNodeChildren(
        DynamicNodesInfo *const this,
        std::shared_ptr<DynamicSVONode> *p_node)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  char v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  char v8; // dl
  __int64 v9; // rax
  std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int targetLevel; // [rsp+1Ch] [rbp-14h]
  uint64_t i; // [rsp+20h] [rbp-10h]
  uint64_t firstChildIndex; // [rsp+28h] [rbp-8h]

  v3 = 0LL;
  if ( std::operator==<DynamicSVONode>(p_node, 0LL) )
    goto LABEL_5;
  v4 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 8) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4 + 8, 0LL);
  if ( *(_QWORD *)(v4 + 8) )
    v5 = 0;
  else
LABEL_5:
    v5 = 1;
  if ( !v5 )
  {
    v6 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6 + 8, 0LL);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
    LOBYTE(v3) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
      __asan_report_load4(v7);
    targetLevel = *(_DWORD *)v7 - 1;
    v9 = (__int64)std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 24) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9 + 24, v3);
    firstChildIndex = MortonCodeCalculator::ParentIndexToFirstChildIndex(*(_QWORD *)(v9 + 24));
    for ( i = 0LL; ; ++i )
    {
      v10 = std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicSVONode,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_node);
      if ( *(_BYTE *)(((unsigned __int64)&v10->childNum >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->childNum >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->childNum);
      }
      if ( i >= v10->childNum )
        break;
      DynamicNodesInfo::DestroyNode(this, targetLevel, i + firstChildIndex, 1);
    }
  }
};

// Line 173: range 000000000CBF4380-000000000CBF44BB
DynamicNodesInfo *__fastcall DynamicNodesInfo::AddHandle(
        DynamicNodesInfo *const this,
        std::map<int,std::shared_ptr<OperationCache>> *handle,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<OperationCache> *v6; // rax
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 handle:172";
  *(_QWORD *)(v3 + 16) = DynamicNodesInfo::AddHandle;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, handle);
  std::make_shared<OperationCache>();
  v6 = std::map<int,std::shared_ptr<OperationCache>>::operator[](
         handle + 1,
         (const std::map<int,std::shared_ptr<OperationCache>>::key_type *)(v3 + 32));
  std::shared_ptr<OperationCache>::operator=(v6, (const std::shared_ptr<OperationCache> *)this);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 181: range 000000000CBF44BC-000000000CBF45E2
__int64 __fastcall DynamicNodesInfo::RemoveHandle(DynamicNodesInfo *const this, int handle)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<OperationCache> > >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::shared_ptr<OperationCache> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 handle:180";
  *(_QWORD *)(v2 + 16) = DynamicNodesInfo::RemoveHandle;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = handle;
  __y._M_node = std::map<int,std::shared_ptr<OperationCache>>::end(&this->handleMap)._M_node;
  __x._M_node = std::map<int,std::shared_ptr<OperationCache>>::find(
                  &this->handleMap,
                  (const std::map<int,std::shared_ptr<OperationCache>>::key_type *)(v2 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    result = 0LL;
  }
  else
  {
    std::map<int,std::shared_ptr<OperationCache>>::erase(
      &this->handleMap,
      (const std::map<int,std::shared_ptr<OperationCache>>::key_type *)(v2 + 32));
    result = 1LL;
  }
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

// Line 189: range 000000000CBF45E4-000000000CBF45F1
const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>> *__cdecl DynamicNodesInfo::GetNodeMap(
        const DynamicNodesInfo *const this)
{
  return &this->nodeMap;
};

// Line 194: range 000000000CBF45F2-000000000CBF4603
DynamicNodesInfo::NodeMapAscendingOrder *__cdecl DynamicNodesInfo::GetNodesAdded(DynamicNodesInfo *const this)
{
  return &this->nodesAdded;
};

// Line 199: range 000000000CBF4604-000000000CBF4617
DynamicNodesInfo::NodeMapAscendingOrder *__cdecl DynamicNodesInfo::GetNodesDestroyed(DynamicNodesInfo *const this)
{
  return &this->nodesDestroyed;
};

// Line 204: range 000000000CBF4618-000000000CBF46A6
int __cdecl DynamicNodesInfo::GetNodeCount(const DynamicNodesInfo *const this)
{
  int cnt; // [rsp+1Ch] [rbp-24h]
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::map<int,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>>> *__for_range; // [rsp+30h] [rbp-10h]
  const std::pair<int const,std::map<long unsigned int,std::shared_ptr<DynamicSVONode>> > *item; // [rsp+38h] [rbp-8h]

  cnt = 0;
  __for_range = &this->nodeMap;
  __for_begin._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::begin(&this->nodeMap)._M_node;
  __for_end._M_node = std::map<int,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>::end(&this->nodeMap)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    item = std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator*(&__for_begin);
    cnt += std::map<unsigned long,std::shared_ptr<DynamicSVONode>>::size(&item->second);
    std::_Rb_tree_const_iterator<std::pair<int const,std::map<unsigned long,std::shared_ptr<DynamicSVONode>>>>::operator++(&__for_begin);
  }
  return cnt;
};

// Line 212: range 000000000CBF46A8-000000000CBF46FA
bool __cdecl DynamicSVONode::ContainWalkableNode(const DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->origin_area);
  }
  return this->origin_area > EdgeBlocked;
};

// Line 217: range 000000000CBF46FC-000000000CBF474E
bool __cdecl DynamicSVONode::IsWalkable(const DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->origin_area);
  }
  return this->origin_area == Walkable;
};

// Line 222: range 000000000CBF4750-000000000CBF47A2
bool __cdecl DynamicSVONode::IsBlocked(const DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->origin_area);
  }
  return this->origin_area <= EdgeBlocked;
};

// Line 227: range 000000000CBF47A4-000000000CBF47F6
bool __cdecl DynamicSVONode::IsMixed(const DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->origin_area);
  }
  return this->origin_area == Mixed;
};

// Line 231: range 000000000CBF47F8-000000000CBF4BAD
// local variable allocation has failed, the output may be wrong!
void __fastcall NodeObstacle::NodeObstacle(
        NodeObstacle *const this,
        NodeObstacleType type,
        ToTheMoonVector3 center,
        ToTheMoonVector3 extents,
        ToTheMoonQuaternion rotation)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // rdx
  char v10[160]; // [rsp+50h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 12 10 center:231 64 12 11 extents:231 96 16 12 rotation:231";
  *(_QWORD *)(v5 + 16) = NodeObstacle::NodeObstacle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -202178560;
  *(ToTheMoonVector3 *)(v5 + 32) = center;
  *(ToTheMoonVector3 *)(v5 + 64) = extents;
  *(ToTheMoonQuaternion *)(v5 + 96) = rotation;
  ToTheMoonVector3::ToTheMoonVector3(&this->center);
  ToTheMoonVector3::ToTheMoonVector3(&this->halfExtents);
  ToTheMoonQuaternion::ToTheMoonQuaternion(&this->rotation);
  std::vector<ToTheMoonVector3>::vector(&this->detectionPoints);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->type = type;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->center, 12LL);
  }
  this->center = *(ToTheMoonVector3 *)(v5 + 32);
  if ( *(char *)(((unsigned __int64)&this->halfExtents >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->halfExtents.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->halfExtents.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->halfExtents, 12LL);
  }
  this->halfExtents = *(ToTheMoonVector3 *)(v5 + 64);
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rotation.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation.w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotation, 16LL);
  }
  v8 = *(_QWORD *)(v5 + 104);
  *(_QWORD *)&this->rotation.x = *(_QWORD *)(v5 + 96);
  *(_QWORD *)&this->rotation.z = v8;
  if ( v10 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 251: range 000000000CBF4BAE-000000000CBF51F0
void __cdecl NodeObstacle::GetBoundary(
        const NodeObstacle *const this,
        ToTheMoonVector3 *minPos,
        ToTheMoonVector3 *maxPos)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  int i; // [rsp+2Ch] [rbp-74h]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 11 tempPos:254";
  *(_QWORD *)(v3 + 16) = NodeObstacle::GetBoundary;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  NodeObstacle::GetBoundaryVerticeByIndex(this, 0, minPos);
  if ( ((unsigned __int8)maxPos & 7) >= *(_BYTE *)(((unsigned __int64)maxPos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)maxPos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&maxPos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)maxPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&maxPos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(maxPos, 12LL);
  }
  if ( ((unsigned __int8)minPos & 7) >= *(_BYTE *)(((unsigned __int64)minPos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)minPos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&minPos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)minPos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&minPos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(minPos, 12LL);
  }
  *maxPos = *minPos;
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 32));
  for ( i = 1; i < std::vector<ToTheMoonVector3>::size(&NodeObstacle::verticeIndex); ++i )
  {
    NodeObstacle::GetBoundaryVerticeByIndex(this, i, (ToTheMoonVector3 *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)minPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)minPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)minPos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(minPos);
    }
    if ( *(float *)(v3 + 32) < minPos->x )
      x = *(float *)(v3 + 32);
    else
      x = minPos->x;
    if ( *(_BYTE *)(((unsigned __int64)minPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)minPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)minPos >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(minPos);
    }
    minPos->x = x;
    if ( *(_BYTE *)(((unsigned __int64)&minPos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)minPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&minPos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&minPos->y);
    }
    if ( *(float *)(v3 + 36) < minPos->y )
      y = *(float *)(v3 + 36);
    else
      y = minPos->y;
    if ( *(_BYTE *)(((unsigned __int64)&minPos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)minPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&minPos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&minPos->y);
    }
    minPos->y = y;
    if ( *(_BYTE *)(((unsigned __int64)&minPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)minPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&minPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&minPos->z);
    }
    if ( *(float *)(v3 + 40) < minPos->z )
      z = *(float *)(v3 + 40);
    else
      z = minPos->z;
    if ( *(_BYTE *)(((unsigned __int64)&minPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)minPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&minPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&minPos->z);
    }
    minPos->z = z;
    if ( *(_BYTE *)(((unsigned __int64)maxPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)maxPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)maxPos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(maxPos);
    }
    if ( maxPos->x < *(float *)(v3 + 32) )
      v9 = *(float *)(v3 + 32);
    else
      v9 = maxPos->x;
    if ( *(_BYTE *)(((unsigned __int64)maxPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)maxPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)maxPos >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(maxPos);
    }
    maxPos->x = v9;
    if ( *(_BYTE *)(((unsigned __int64)&maxPos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)maxPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&maxPos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&maxPos->y);
    }
    if ( maxPos->y < *(float *)(v3 + 36) )
      v10 = *(float *)(v3 + 36);
    else
      v10 = maxPos->y;
    if ( *(_BYTE *)(((unsigned __int64)&maxPos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)maxPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&maxPos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&maxPos->y);
    }
    maxPos->y = v10;
    if ( *(_BYTE *)(((unsigned __int64)&maxPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)maxPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&maxPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&maxPos->z);
    }
    if ( maxPos->z < *(float *)(v3 + 40) )
      v11 = *(float *)(v3 + 40);
    else
      v11 = maxPos->z;
    if ( *(_BYTE *)(((unsigned __int64)&maxPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)maxPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&maxPos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&maxPos->z);
    }
    maxPos->z = v11;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 268: range 000000000CBF51F2-000000000CBF53DC
bool __cdecl NodeObstacle::GetBoundaryVerticeByIndex(const NodeObstacle *const this, int index, ToTheMoonVector3 *pos)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  const ToTheMoonVector3 *v7; // rax
  ToTheMoonVector3 *p_center; // rsi
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 16 originOffset:272";
  *(_QWORD *)(v3 + 16) = NodeObstacle::GetBoundaryVerticeByIndex;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  if ( index < std::vector<ToTheMoonVector3>::size(&NodeObstacle::verticeIndex) )
  {
    v7 = std::vector<ToTheMoonVector3>::operator[](&NodeObstacle::verticeIndex, index);
    *(ToTheMoonVector3 *)(v3 + 32) = ToTheMoonVector3::ParallelMultiple(v7, &this->halfExtents);
    Geometry::RotateVectorByQuat(&this->rotation, (const ToTheMoonVector3 *)(v3 + 32), pos);
    p_center = &this->center;
    if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
    {
      p_center = (ToTheMoonVector3 *)12;
      __asan_report_store_n(pos, 12LL);
    }
    *pos = ToTheMoonVector3::operator+(pos, p_center);
    result = 1;
  }
  else
  {
    result = 0;
  }
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

// Line 279: range 000000000CBF53DE-000000000CBF58A6
void __cdecl DynamicSVONode::DynamicSVONode(DynamicSVONode *const this, SVONode *srcNode)
{
  int (**v2)(...); // rdx
  SVOLayer *layer; // rdx
  uint64_t index; // rdx
  AreaType area; // ecx
  AreaType v6; // ecx
  char v7; // al
  ToTheMoonVector3 *referPos; // rdx
  SVONode *parent; // rdx
  SVONode **children; // rdx
  int childNum; // ecx
  SVONode *srcNodea; // [rsp+0h] [rbp-20h]

  srcNodea = srcNode;
  SVONode::SVONode(this);
  v2 = (int (**)(...))(&`vtable for'DynamicSVONode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_SVONode = v2;
  if ( srcNode )
  {
    if ( *(_BYTE *)(((unsigned __int64)&srcNode->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&srcNode->layer, srcNode);
    layer = srcNode->layer;
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->layer = layer;
    if ( *(_BYTE *)(((unsigned __int64)&srcNode->index >> 3) + 0x7FFF8000) )
      __asan_report_load8(&srcNode->index, srcNode);
    index = srcNode->index;
    if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->index = index;
    if ( *(_BYTE *)(((unsigned __int64)&srcNode->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&srcNode->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&srcNode->area);
    }
    area = srcNode->area;
    if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->area);
    }
    this->area = area;
    v6 = srcNode->area;
    v7 = *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000);
    LOBYTE(srcNode) = v7 != 0;
    if ( v7 != 0 && v7 <= 3 )
      __asan_report_store4(&this->origin_area);
    this->origin_area = v6;
    if ( *(_BYTE *)(((unsigned __int64)&srcNodea->referPos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&srcNodea->referPos, srcNode);
    referPos = srcNodea->referPos;
    if ( *(_BYTE *)(((unsigned __int64)&this->referPos >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->referPos = referPos;
    if ( *(_BYTE *)(((unsigned __int64)&srcNodea->parent >> 3) + 0x7FFF8000) )
      __asan_report_load8(&srcNodea->parent, srcNode);
    parent = srcNodea->parent;
    if ( *(_BYTE *)(((unsigned __int64)&this->parent >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->parent = parent;
    if ( *(_BYTE *)(((unsigned __int64)&srcNodea->children >> 3) + 0x7FFF8000) )
      __asan_report_load8(&srcNodea->children, srcNode);
    children = srcNodea->children;
    if ( *(_BYTE *)(((unsigned __int64)&this->children >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->children = children;
    if ( *(_BYTE *)(((unsigned __int64)&srcNodea->childNum >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&srcNodea->childNum >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&srcNodea->childNum);
    }
    childNum = srcNodea->childNum;
    if ( *(_BYTE *)(((unsigned __int64)&this->childNum >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->childNum >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->childNum);
    }
    this->childNum = childNum;
    std::vector<SVONode *>::operator=(&this->neighbors, &srcNodea->neighbors);
    std::vector<SVONode *>::operator=(&this->planarNeighbors, &srcNodea->planarNeighbors);
    std::vector<SVONode *>::operator=(&this->diagonalNeighbors, &srcNodea->diagonalNeighbors);
    if ( *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->block_cnt);
    }
    this->block_cnt = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->divide_cnt);
    }
    this->divide_cnt = 0;
    if ( *(char *)(((unsigned __int64)&this->is_unique >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_unique);
    this->is_unique = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->origin_node >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->origin_node = srcNodea;
  }
};

// Line 302: range 000000000CBF58A8-000000000CBF5EAD
void __cdecl DynamicSVONode::DynamicSVONode(
        DynamicSVONode *const this,
        std::shared_ptr<DynamicSVONode> *p_parentNode,
        int childRank,
        int targetLayer,
        uint64_t targetIndex,
        SVOBlock *blockData)
{
  int (**v6)(...); // rdx
  unsigned __int64 v7; // rax
  SVOLayer *v8; // rdx
  SVONode *v9; // rax
  ToTheMoonVector3 *ChildReferPos; // rax
  std::allocator<SVONode*> __a; // [rsp+37h] [rbp-B9h] BYREF
  std::vector<SVONode*>::value_type __value; // [rsp+38h] [rbp-B8h] BYREF
  std::vector<SVONode*> __x; // [rsp+40h] [rbp-B0h] BYREF
  std::vector<SVONode*> v18; // [rsp+60h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+80h] [rbp-70h] BYREF
  std::initializer_list<SVONode*> __l; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-40h]
  __int64 v22; // [rsp+B8h] [rbp-38h]
  __int64 v23; // [rsp+C0h] [rbp-30h]
  __int64 v24; // [rsp+C8h] [rbp-28h]

  SVONode::SVONode(this);
  v6 = (int (**)(...))(&`vtable for'DynamicSVONode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_SVONode = v6;
  if ( !blockData )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)blockData >> 3) + 0x7FFF8000) )
    __asan_report_load8(blockData, p_parentNode);
  if ( blockData->svo )
  {
    if ( *(_BYTE *)(((unsigned __int64)blockData >> 3) + 0x7FFF8000) )
      __asan_report_load8(blockData, p_parentNode);
    v7 = (unsigned __int64)std::vector<SVOLayer *>::operator[](&blockData->svo->layerData, targetLayer);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7, targetLayer);
    v8 = *(SVOLayer **)v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->layer = v8;
    if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->index = targetIndex;
    if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->area);
    }
    this->area = Walkable;
    if ( *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->origin_area);
    }
    this->origin_area = Walkable;
    v9 = std::__shared_ptr<DynamicSVONode,(__gnu_cxx::_Lock_policy)2>::get(p_parentNode);
    if ( *(_BYTE *)(((unsigned __int64)&this->parent >> 3) + 0x7FFF8000) )
      v9 = (SVONode *)__asan_report_store8();
    this->parent = v9;
    if ( *(_BYTE *)(((unsigned __int64)&this->children >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->children = 0LL;
    ChildReferPos = SVODataProcessor::GetChildReferPos(this->parent, childRank);
    if ( *(_BYTE *)(((unsigned __int64)&this->referPos >> 3) + 0x7FFF8000) )
      ChildReferPos = (ToTheMoonVector3 *)__asan_report_store8();
    this->referPos = ChildReferPos;
    __l._M_array = 0LL;
    __l._M_len = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    std::vector<SVONode *>::operator=(&this->neighbors, (std::initializer_list<SVONode*>)__PAIR128__(6LL, &__l));
    std::allocator<SVONode *>::allocator(&__a);
    __value = 0LL;
    std::vector<SVONode *>::vector(&__x, 0xCuLL, &__value, &__a);
    std::vector<SVONode *>::operator=(&this->planarNeighbors, &__x);
    std::vector<SVONode *>::~vector(&__x);
    std::allocator<SVONode *>::~allocator(&__a);
    std::allocator<SVONode *>::allocator(&__a);
    __value = 0LL;
    std::vector<SVONode *>::vector(&v18, 8uLL, &__value, &__a);
    std::vector<SVONode *>::operator=(&this->diagonalNeighbors, &v18);
    std::vector<SVONode *>::~vector(&v18);
    std::allocator<SVONode *>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->block_cnt);
    }
    this->block_cnt = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->divide_cnt);
    }
    this->divide_cnt = 0;
    if ( *(char *)(((unsigned __int64)&this->is_unique >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_unique);
    this->is_unique = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->origin_node >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->origin_node = 0LL;
  }
  else
  {
LABEL_7:
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure_obstacle.cpp",
      "DynamicSVONode",
      305);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v19, (const char (*)[18])"Invalid blockData");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
};

// Line 326: range 000000000CBF5EAE-000000000CBF5F31
void __cdecl DynamicSVONode::~DynamicSVONode(DynamicSVONode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DynamicSVONode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_SVONode = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_node >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->origin_node = 0LL;
  SVONode::~SVONode(this);
};

// Line 326: range 000000000CBF5F32-000000000CBF5F5C
void __cdecl DynamicSVONode::~DynamicSVONode(DynamicSVONode *const this)
{
  DynamicSVONode::~DynamicSVONode(this);
  operator delete(this, 0xB0uLL);
};

// Line 332: range 000000000CBF5F5E-000000000CBF61DD
void __cdecl DynamicSVONode::AddBlock(DynamicSVONode *const this, std::shared_ptr<OperationCache> *p_op)
{
  char v2; // al
  std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  void *p_y; // rsi
  std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::vector<long unsigned int> *v7; // rax
  std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::vector<long unsigned int> *v9; // rax
  std::_Rb_tree_iterator<std::pair<int const,std::vector<long unsigned int> > >::_Self __x; // [rsp+10h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::vector<long unsigned int> > >::_Self __y; // [rsp+18h] [rbp-38h] BYREF
  std::vector<long unsigned int> v13; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<OperationCache>(p_op, 0LL) )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->layer, 0LL);
  if ( this->layer )
    v2 = 0;
  else
LABEL_5:
    v2 = 1;
  if ( !v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->block_cnt);
    }
    ++this->block_cnt;
    v3 = std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op);
    __y._M_node = std::map<int,std::vector<unsigned long>>::end(&v3->block_refer)._M_node;
    v4 = std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op);
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->layer, 0LL);
    __x._M_node = std::map<int,std::vector<unsigned long>>::find(&v4->block_refer, &this->layer->level)._M_node;
    p_y = &__y;
    if ( std::operator==(&__x, &__y) )
    {
      memset(&v13, 0, sizeof(v13));
      std::vector<unsigned long>::vector(&v13);
      v6 = std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op);
      if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->layer, &__y);
      v7 = std::map<int,std::vector<unsigned long>>::operator[](&v6->block_refer, &this->layer->level);
      p_y = &v13;
      std::vector<unsigned long>::operator=(v7, &v13);
      std::vector<unsigned long>::~vector(&v13);
    }
    v8 = std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op);
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->layer, p_y);
    v9 = std::map<int,std::vector<unsigned long>>::operator[](&v8->block_refer, &this->layer->level);
    std::vector<unsigned long>::push_back(v9, &this->index);
    if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->area);
    }
    this->area = Blocked;
  }
};

// Line 343: range 000000000CBF61DE-000000000CBF6238
void __cdecl DynamicSVONode::ReduceBlock(DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->block_cnt);
  }
  --this->block_cnt;
};

// Line 348: range 000000000CBF623A-000000000CBF6534
void __cdecl DynamicSVONode::AddDivide(DynamicSVONode *const this, std::shared_ptr<OperationCache> *p_op)
{
  char v2; // al
  std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::map<int,std::vector<long unsigned int>> *p_divide_refer; // rdx
  void *p_y; // rsi
  std::map<int,std::vector<long unsigned int>> *v6; // rdx
  std::vector<long unsigned int> *v7; // rax
  std::map<int,std::vector<long unsigned int>> *v8; // rdx
  std::vector<long unsigned int> *v9; // rax
  SVOLayer *layer; // rax
  AreaType v11; // esi
  std::_Rb_tree_iterator<std::pair<int const,std::vector<long unsigned int> > >::_Self __x; // [rsp+10h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::vector<long unsigned int> > >::_Self __y; // [rsp+18h] [rbp-38h] BYREF
  std::vector<long unsigned int> v15; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<OperationCache>(p_op, 0LL) )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->layer, 0LL);
  if ( this->layer )
    v2 = 0;
  else
LABEL_5:
    v2 = 1;
  if ( !v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->divide_cnt);
    }
    ++this->divide_cnt;
    v3 = std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op);
    __y._M_node = std::map<int,std::vector<unsigned long>>::end(&v3->divide_refer)._M_node;
    p_divide_refer = &std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op)->divide_refer;
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->layer, (((_BYTE)this - 108) & 7u) + 3);
    __x._M_node = std::map<int,std::vector<unsigned long>>::find(p_divide_refer, &this->layer->level)._M_node;
    p_y = &__y;
    if ( std::operator==(&__x, &__y) )
    {
      memset(&v15, 0, sizeof(v15));
      std::vector<unsigned long>::vector(&v15);
      v6 = &std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op)->divide_refer;
      if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->layer, &__y);
      v7 = std::map<int,std::vector<unsigned long>>::operator[](v6, &this->layer->level);
      p_y = &v15;
      std::vector<unsigned long>::operator=(v7, &v15);
      std::vector<unsigned long>::~vector(&v15);
    }
    v8 = &std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op)->divide_refer;
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->layer, p_y);
    v9 = std::map<int,std::vector<unsigned long>>::operator[](v8, &this->layer->level);
    std::vector<unsigned long>::push_back(v9, &this->index);
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->layer, &this->index);
    layer = this->layer;
    if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->layer);
    }
    if ( layer->level )
      v11 = Mixed;
    else
      v11 = Blocked;
    if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->area);
    }
    this->area = v11;
  }
};

// Line 360: range 000000000CBF6536-000000000CBF6598
void __cdecl DynamicSVONode::ReduceDivide(DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->divide_cnt);
  }
  --this->divide_cnt;
};

// Line 365: range 000000000CBF659A-000000000CBF67FB
void __cdecl DynamicSVONode::AddEdgeBlocked(DynamicSVONode *const this, std::shared_ptr<OperationCache> *p_op)
{
  char v2; // al
  std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::map<int,std::vector<long unsigned int>> *p_edge_block_refer_l1; // rdx
  void *p_y; // rsi
  std::map<int,std::vector<long unsigned int>> *v6; // rdx
  std::vector<long unsigned int> *v7; // rax
  std::map<int,std::vector<long unsigned int>> *v8; // rdx
  std::vector<long unsigned int> *v9; // rax
  std::_Rb_tree_iterator<std::pair<int const,std::vector<long unsigned int> > >::_Self __x; // [rsp+10h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::vector<long unsigned int> > >::_Self __y; // [rsp+18h] [rbp-38h] BYREF
  std::vector<long unsigned int> v13; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<OperationCache>(p_op, 0LL) )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->layer, 0LL);
  if ( this->layer )
    v2 = 0;
  else
LABEL_5:
    v2 = 1;
  if ( !v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->edge_blocked_cnt_l1 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->edge_blocked_cnt_l1 >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->edge_blocked_cnt_l1);
    }
    ++this->edge_blocked_cnt_l1;
    v3 = std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op);
    __y._M_node = std::map<int,std::vector<unsigned long>>::end(&v3->edge_block_refer_l1)._M_node;
    p_edge_block_refer_l1 = &std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op)->edge_block_refer_l1;
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->layer, (((_BYTE)this - 100) & 7u) + 3);
    __x._M_node = std::map<int,std::vector<unsigned long>>::find(p_edge_block_refer_l1, &this->layer->level)._M_node;
    p_y = &__y;
    if ( std::operator==(&__x, &__y) )
    {
      memset(&v13, 0, sizeof(v13));
      std::vector<unsigned long>::vector(&v13);
      v6 = &std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op)->edge_block_refer_l1;
      if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->layer, &__y);
      v7 = std::map<int,std::vector<unsigned long>>::operator[](v6, &this->layer->level);
      p_y = &v13;
      std::vector<unsigned long>::operator=(v7, &v13);
      std::vector<unsigned long>::~vector(&v13);
    }
    v8 = &std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OperationCache,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_op)->edge_block_refer_l1;
    if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->layer, p_y);
    v9 = std::map<int,std::vector<unsigned long>>::operator[](v8, &this->layer->level);
    std::vector<unsigned long>::push_back(v9, &this->index);
    DynamicSVONode::DecreaseSetAreaType(this, EdgeBlocked);
  }
};

// Line 378: range 000000000CBF67FC-000000000CBF685E
void __cdecl DynamicSVONode::ReduceEdgeBlocked(DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->edge_blocked_cnt_l1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->edge_blocked_cnt_l1 >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->edge_blocked_cnt_l1);
  }
  --this->edge_blocked_cnt_l1;
};

// Line 383: range 000000000CBF6860-000000000CBF68AC
int __cdecl DynamicSVONode::GetBlockCnt(const DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->block_cnt);
  }
  return this->block_cnt;
};

// Line 388: range 000000000CBF68AE-000000000CBF6902
int __cdecl DynamicSVONode::GetDivideCnt(const DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->divide_cnt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->divide_cnt);
  }
  return this->divide_cnt;
};

// Line 393: range 000000000CBF6904-000000000CBF6958
int __cdecl DynamicSVONode::GetEdgeBlockCnt(const DynamicSVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->edge_blocked_cnt_l1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->edge_blocked_cnt_l1 >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->edge_blocked_cnt_l1);
  }
  return this->edge_blocked_cnt_l1;
};

// Line 398: range 000000000CBF695A-000000000CBF69A7
bool __cdecl DynamicSVONode::IsUnique(const DynamicSVONode *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_unique >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_unique);
  return this->is_unique;
};

// Line 403: range 000000000CBF69A8-000000000CBF6AB8
// local variable allocation has failed, the output may be wrong!
void __cdecl DynamicSVONode::SetAreaType(DynamicSVONode *const this, AreaType area)
{
  SVOLayer *layer; // rax

  if ( area != Mixed )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->layer, *(_QWORD *)&area);
  if ( !this->layer )
    goto LABEL_11;
  layer = this->layer;
  if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this->layer);
  }
  if ( !layer->level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->area);
    }
    this->area = Walkable;
  }
  else
  {
LABEL_11:
    if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->area);
    }
    this->area = area;
  }
};

// Line 418: range 000000000CBF6ABA-000000000CBF6B1F
bool __cdecl DynamicSVONode::DecreaseSetAreaType(DynamicSVONode *const this, AreaType area)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->area);
  }
  if ( area > this->area )
    return 0;
  this->area = area;
  return 1;
};

// Line 427: range 000000000CBF6B20-000000000CBF6BA8
void __cdecl DynamicSVONode::RestoreArea(DynamicSVONode *const this)
{
  AreaType origin_area; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->origin_area);
  }
  origin_area = this->origin_area;
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area);
  }
  this->area = origin_area;
};

// Line 432: range 000000000CBF6BAA-000000000CBF6D7F
void __fastcall DynamicPlayerData::AddHandler(
        DynamicPlayerData *const this,
        int handle,
        std::shared_ptr<DynamicNodesInfo> *p_dynamicBlock)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::vector<std::shared_ptr<DynamicNodesInfo>> *v6; // rax
  std::vector<std::shared_ptr<DynamicNodesInfo>> *v7; // rax
  std::_Rb_tree_iterator<std::pair<int const,std::vector<std::shared_ptr<DynamicNodesInfo>> > >::_Self __x; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::vector<std::shared_ptr<DynamicNodesInfo>> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  std::vector<std::shared_ptr<DynamicNodesInfo>> v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 handle:431";
  *(_QWORD *)(v3 + 16) = DynamicPlayerData::AddHandler;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = handle;
  __y._M_node = std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::end(&this->handlesInfo)._M_node;
  __x._M_node = std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::find(
                  &this->handlesInfo,
                  (const std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::key_type *)(v3 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    memset(&v11, 0, sizeof(v11));
    std::vector<std::shared_ptr<DynamicNodesInfo>>::vector(&v11);
    v6 = std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::operator[](
           &this->handlesInfo,
           (const std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::key_type *)(v3 + 32));
    std::vector<std::shared_ptr<DynamicNodesInfo>>::operator=(v6, &v11);
    std::vector<std::shared_ptr<DynamicNodesInfo>>::~vector(&v11);
  }
  v7 = std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::operator[](
         &this->handlesInfo,
         (const std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::key_type *)(v3 + 32));
  std::vector<std::shared_ptr<DynamicNodesInfo>>::push_back(v7, p_dynamicBlock);
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 438: range 000000000CBF6D80-000000000CBF6DED
void __cdecl DynamicPlayerData::DynamicPlayerData(DynamicPlayerData *const this)
{
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::map(&this->nodesInfo);
  std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::map(&this->handlesInfo);
  ToTheMoonVector3::ToTheMoonVector3(&this->basePos);
};

// Line 442: range 000000000CBF6DEE-000000000CBF6E18
void __cdecl DynamicPlayerData::~DynamicPlayerData(DynamicPlayerData *const this)
{
  std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::~map(&this->handlesInfo);
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::~map(&this->nodesInfo);
};

// Line 447: range 000000000CBF6E1A-000000000CBF6EA9
std::shared_ptr<DynamicNodesInfo> __cdecl DynamicPlayerData::GetBlockNodesInfo(
        const DynamicPlayerData *const this,
        IntPair *blockIndex)
{
  IntPair *v2; // rdx
  std::shared_ptr<DynamicNodesInfo> result; // rax
  const std::shared_ptr<DynamicNodesInfo> *v4; // rdx
  IntPair *blockIndexa; // [rsp+8h] [rbp-28h]
  std::_Rb_tree_const_iterator<std::pair<const IntPair,std::shared_ptr<DynamicNodesInfo> > >::_Self __x; // [rsp+20h] [rbp-10h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const IntPair,std::shared_ptr<DynamicNodesInfo> > >::_Self __y; // [rsp+28h] [rbp-8h] BYREF

  blockIndexa = v2;
  __y._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::end((const std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)blockIndex)._M_node;
  __x._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::find(
                  (const std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)blockIndex,
                  blockIndexa)._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    std::shared_ptr<DynamicNodesInfo>::shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)this, 0LL);
  }
  else
  {
    v4 = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::at(
           (const std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)blockIndex,
           blockIndexa);
    std::shared_ptr<DynamicNodesInfo>::shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)this, v4);
  }
  result._M_ptr = (std::__shared_ptr<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 452: range 000000000CBF6EAA-000000000CBF6F87
std::shared_ptr<DynamicNodesInfo> __cdecl DynamicPlayerData::AdaptiveGetBlockNodesInfo(
        DynamicPlayerData *const this,
        IntPair *blockIndex)
{
  IntPair *v2; // rdx
  std::shared_ptr<DynamicNodesInfo> *v3; // rax
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::mapped_type *v4; // rdx
  std::shared_ptr<DynamicNodesInfo> result; // rax
  IntPair *blockIndexa; // [rsp+8h] [rbp-48h]
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<DynamicNodesInfo> > >::_Self __x; // [rsp+20h] [rbp-30h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<DynamicNodesInfo> > >::_Self __y; // [rsp+28h] [rbp-28h] BYREF
  std::shared_ptr<DynamicNodesInfo> __r; // [rsp+30h] [rbp-20h] BYREF

  blockIndexa = v2;
  __y._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::end((std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)blockIndex)._M_node;
  __x._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::find(
                  (std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)blockIndex,
                  blockIndexa)._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    std::make_shared<DynamicNodesInfo>();
    v3 = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::operator[](
           (std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)blockIndex,
           blockIndexa);
    std::shared_ptr<DynamicNodesInfo>::operator=(v3, &__r);
    std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&__r);
  }
  v4 = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::at(
         (std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *const)blockIndex,
         blockIndexa);
  std::shared_ptr<DynamicNodesInfo>::shared_ptr((std::shared_ptr<DynamicNodesInfo> *const)this, v4);
  result._M_ptr = (std::__shared_ptr<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 459: range 000000000CBF6F88-000000000CBF7057
std::shared_ptr<DynamicNodesInfo> __cdecl DynamicPlayerData::AdaptiveGetBlockNodesInfoAsHandleTarget(
        DynamicPlayerData *const this,
        IntPair *blockIndex,
        int handle)
{
  int v3; // ecx
  std::shared_ptr<DynamicNodesInfo> result; // rax
  int handlea; // [rsp+4h] [rbp-3Ch]
  std::shared_ptr<DynamicNodesInfo> p_dynamicBlock; // [rsp+20h] [rbp-20h] BYREF

  handlea = v3;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, blockIndex);
  DynamicPlayerData::AdaptiveGetBlockNodesInfo(this, blockIndex);
  if ( std::operator!=<DynamicNodesInfo>((const std::shared_ptr<DynamicNodesInfo> *)this, 0LL) )
  {
    std::shared_ptr<DynamicNodesInfo>::shared_ptr(&p_dynamicBlock, (const std::shared_ptr<DynamicNodesInfo> *)this);
    DynamicPlayerData::AddHandler((DynamicPlayerData *const)blockIndex, handlea, &p_dynamicBlock);
    std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicBlock);
  }
  result._M_ptr = (std::__shared_ptr<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 467: range 000000000CBF7058-000000000CBF719A
__int64 __fastcall DynamicPlayerData::GetBlockNodesInfoFromHandle(
        DynamicPlayerData *const this,
        int handle,
        std::vector<std::shared_ptr<DynamicNodesInfo>> *res)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::mapped_type *v7; // rax
  std::_Rb_tree_iterator<std::pair<int const,std::vector<std::shared_ptr<DynamicNodesInfo>> > >::_Self __x; // [rsp+20h] [rbp-70h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::vector<std::shared_ptr<DynamicNodesInfo>> > >::_Self __y; // [rsp+28h] [rbp-68h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 handle:466";
  *(_QWORD *)(v3 + 16) = DynamicPlayerData::GetBlockNodesInfoFromHandle;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = handle;
  __y._M_node = std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::end(&this->handlesInfo)._M_node;
  __x._M_node = std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::find(
                  &this->handlesInfo,
                  (const std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::key_type *)(v3 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::at(
           &this->handlesInfo,
           (const std::map<int,std::vector<std::shared_ptr<DynamicNodesInfo>>>::key_type *)(v3 + 32));
    std::vector<std::shared_ptr<DynamicNodesInfo>>::operator=(res, v7);
    result = 1LL;
  }
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

// Line 475: range 000000000CBF719C-000000000CBF71A9
const std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *__cdecl DynamicPlayerData::GetNodeInfo(
        const DynamicPlayerData *const this)
{
  return &this->nodesInfo;
};

// Line 480: range 000000000CBF71AA-000000000CBF7252
int __cdecl DynamicPlayerData::GetNodeCount(const DynamicPlayerData *const this)
{
  std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  int cnt; // [rsp+1Ch] [rbp-24h]
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::map<IntPair,std::shared_ptr<DynamicNodesInfo>> *__for_range; // [rsp+30h] [rbp-10h]
  const std::pair<const IntPair,std::shared_ptr<DynamicNodesInfo> > *item; // [rsp+38h] [rbp-8h]

  cnt = 0;
  __for_range = &this->nodesInfo;
  __for_begin._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::begin(&this->nodesInfo)._M_node;
  __for_end._M_node = std::map<IntPair,std::shared_ptr<DynamicNodesInfo>>::end(&this->nodesInfo)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    item = std::_Rb_tree_const_iterator<std::pair<IntPair const,std::shared_ptr<DynamicNodesInfo>>>::operator*(&__for_begin);
    if ( std::operator!=<DynamicNodesInfo>(&item->second, 0LL) )
    {
      v1 = std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicNodesInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&item->second);
      cnt += DynamicNodesInfo::GetNodeCount(v1);
    }
    std::_Rb_tree_const_iterator<std::pair<IntPair const,std::shared_ptr<DynamicNodesInfo>>>::operator++(&__for_begin);
  }
  return cnt;
};
