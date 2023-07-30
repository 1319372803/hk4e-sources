// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure.cpp

// Line 14: range 000000000CBEB2A6-000000000CBEB634
void __cdecl SVONode::SVONode(SVONode *const this, AreaType area, uint64_t mortonCode, SVOLayer *layer)
{
  int (**v4)(...); // rdx
  std::allocator<SVONode*> __a; // [rsp+27h] [rbp-99h] BYREF
  std::vector<SVONode*>::value_type __value; // [rsp+28h] [rbp-98h] BYREF
  std::vector<SVONode*> __x; // [rsp+30h] [rbp-90h] BYREF
  std::vector<SVONode*> v10; // [rsp+50h] [rbp-70h] BYREF
  std::initializer_list<SVONode*> __l; // [rsp+70h] [rbp-50h] BYREF
  __int64 v12; // [rsp+80h] [rbp-40h]
  __int64 v13; // [rsp+88h] [rbp-38h]
  __int64 v14; // [rsp+90h] [rbp-30h]
  __int64 v15; // [rsp+98h] [rbp-28h]

  v4 = (int (**)(...))(&`vtable for'SVONode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_SVONode = v4;
  std::vector<SVONode *>::vector(&this->neighbors);
  std::vector<SVONode *>::vector(&this->planarNeighbors);
  std::vector<SVONode *>::vector(&this->diagonalNeighbors);
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area);
  }
  this->area = area;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->index = mortonCode;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->layer = layer;
  if ( *(_BYTE *)(((unsigned __int64)&this->children >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->children = 0LL;
  __l._M_array = 0LL;
  __l._M_len = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  std::vector<SVONode *>::operator=(&this->neighbors, (std::initializer_list<SVONode*>)__PAIR128__(6LL, &__l));
  std::allocator<SVONode *>::allocator(&__a);
  __value = 0LL;
  std::vector<SVONode *>::vector(&__x, 0xCuLL, &__value, &__a);
  std::vector<SVONode *>::operator=(&this->planarNeighbors, &__x);
  std::vector<SVONode *>::~vector(&__x);
  std::allocator<SVONode *>::~allocator(&__a);
  std::allocator<SVONode *>::allocator(&__a);
  __value = 0LL;
  std::vector<SVONode *>::vector(&v10, 8uLL, &__value, &__a);
  std::vector<SVONode *>::operator=(&this->diagonalNeighbors, &v10);
  std::vector<SVONode *>::~vector(&v10);
  std::allocator<SVONode *>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->centerPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->centerPos = 0LL;
};

// Line 25: range 000000000CBEB636-000000000CBEB7DF
void __cdecl SVONode::~SVONode(SVONode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SVONode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_SVONode = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->referPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->referPos, v1);
  if ( this->referPos )
  {
    v1 = 12LL;
    operator delete(this->referPos, 0xCuLL);
    if ( *(_BYTE *)(((unsigned __int64)&this->referPos >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->referPos = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->children >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->children = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->centerPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->centerPos, v1);
  if ( this->centerPos )
  {
    operator delete(this->centerPos, 0xCuLL);
    if ( *(_BYTE *)(((unsigned __int64)&this->centerPos >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->centerPos = 0LL;
  }
  std::vector<SVONode *>::~vector(&this->diagonalNeighbors);
  std::vector<SVONode *>::~vector(&this->planarNeighbors);
  std::vector<SVONode *>::~vector(&this->neighbors);
};

// Line 25: range 000000000CBEB7E0-000000000CBEB80A
void __cdecl SVONode::~SVONode(SVONode *const this)
{
  SVONode::~SVONode(this);
  operator delete(this, 0x90uLL);
};

// Line 32: range 000000000CBEB80C-000000000CBEBCCE
std::string *__cdecl SVONode::DebugInfo[abi:cxx11](std::string *retstr, const SVONode *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  int level; // [rsp+1Ch] [rbp-1C4h]
  std::string __rhs; // [rsp+20h] [rbp-1C0h] BYREF
  std::string __lhs; // [rsp+40h] [rbp-1A0h] BYREF
  std::string v11; // [rsp+60h] [rbp-180h] BYREF
  std::string v12; // [rsp+80h] [rbp-160h] BYREF
  std::string v13; // [rsp+A0h] [rbp-140h] BYREF
  std::string v14; // [rsp+C0h] [rbp-120h] BYREF
  std::string v15; // [rsp+E0h] [rbp-100h] BYREF
  std::string v16; // [rsp+100h] [rbp-E0h] BYREF
  std::string v17; // [rsp+120h] [rbp-C0h] BYREF
  std::string v18; // [rsp+140h] [rbp-A0h] BYREF
  std::string v19; // [rsp+160h] [rbp-80h] BYREF
  char v20[96]; // [rsp+180h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 endPos:34";
  *(_QWORD *)(v2 + 16) = SVONode::DebugInfo[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  level = SVODataProcessor::GetNodeLevel(this);
  SVODataProcessor::GetEndPos((const SVONode *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->index, this);
  std::to_string(&v18, this->index);
  std::to_string(&v15, level);
  v5 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  ToTheMoonVector3::ToString[abi:cxx11](&v12, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->referPos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->referPos, v5);
  ToTheMoonVector3::ToString[abi:cxx11](&__rhs, this->referPos);
  std::operator+<char>(&__lhs, "Pos FROM ", &__rhs);
  std::operator+<char>(&v11, &__lhs, " TO ");
  std::operator+<char>(&v13, &v11, &v12);
  std::operator+<char>(&v14, &v13, " LEVEL ");
  std::operator+<char>(&v16, &v14, &v15);
  std::operator+<char>(&v17, &v16, " INDEX ");
  std::operator+<char>(&v19, &v17, &v18);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v19, "\n");
  std::string::~string(&v19);
  std::string::~string(&v17);
  std::string::~string(&v16);
  std::string::~string(&v14);
  std::string::~string(&v13);
  std::string::~string(&v11);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v12);
  std::string::~string(&v15);
  std::string::~string(&v18);
  std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v2 + 32));
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 43: range 000000000CBEBCD0-000000000CBEBCDA
void __cdecl SVONode::DebugNeighbors(const SVONode *const this)
{
  ;
};

// Line 55: range 000000000CBEBCDC-000000000CBEBCE6
void __cdecl SVONode::DebugChildren(const SVONode *const this)
{
  ;
};

// Line 67: range 000000000CBEBCE8-000000000CBEBD25
int __cdecl SVONode::GetIndexAsChild(const SVONode *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->index, v1);
  return this->index & 7;
};

// Line 72: range 000000000CBEBD26-000000000CBEBDD1
bool __cdecl SVONode::InBotLayer(const SVONode *const this)
{
  __int64 v1; // rsi
  SVOLayer *layer; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->layer, v1);
  if ( !this->layer )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->layer, v1);
  layer = this->layer;
  if ( *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this->layer);
  }
  return layer->level == 0;
};

// Line 79: range 000000000CBEBDD2-000000000CBEBE1F
bool __cdecl SVONode::ContainWalkableNode(const SVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->area);
  }
  return this->area > EdgeBlocked;
};

// Line 84: range 000000000CBEBE20-000000000CBEBE6D
bool __cdecl SVONode::IsWalkable(const SVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->area);
  }
  return this->area == Walkable;
};

// Line 89: range 000000000CBEBE6E-000000000CBEBEBB
bool __cdecl SVONode::IsBlocked(const SVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->area);
  }
  return this->area <= EdgeBlocked;
};

// Line 94: range 000000000CBEBEBC-000000000CBEBF09
bool __cdecl SVONode::IsMixed(const SVONode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->area);
  }
  return this->area == Mixed;
};

// Line 99: range 000000000CBEBF0A-000000000CBEBF7D
SVOStructure *__cdecl SVONode::GetSVOStructure(const SVONode *const this)
{
  __int64 v1; // rsi
  __int64 layer; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->layer, v1);
  if ( !this->layer )
    return 0LL;
  layer = (__int64)this->layer;
  if ( *(_BYTE *)(((unsigned __int64)(layer + 32) >> 3) + 0x7FFF8000) )
    layer = __asan_report_load8(layer + 32, v1);
  return *(SVOStructure **)(layer + 32);
};

// Line 103: range 000000000CBEBF7E-000000000CBEC00C
void __cdecl SVOLayer::SVOLayer(SVOLayer *const this, int level, SVOStructure *svo)
{
  std::vector<SVONode *>::vector(&this->nodeData);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->svo >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->svo = svo;
};

// Line 108: range 000000000CBEC00E-000000000CBEC150
void __cdecl SVOLayer::~SVOLayer(SVOLayer *const this)
{
  unsigned __int64 v1; // rax
  _QWORD *p_vptr_SVONode; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  std::vector<SVONode*>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<SVONode*>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<SVONode*> *__for_range; // [rsp+20h] [rbp-10h]
  SVONode *node; // [rsp+28h] [rbp-8h]

  __for_range = &this->nodeData;
  __for_begin._M_current = std::vector<SVONode *>::begin(&this->nodeData)._M_current;
  __for_end._M_current = std::vector<SVONode *>::end(&this->nodeData)._M_current;
  while ( __gnu_cxx::operator!=<SVONode **,std::vector<SVONode *>>(&__for_begin, &__for_end) )
  {
    v1 = (unsigned __int64)__gnu_cxx::__normal_iterator<SVONode **,std::vector<SVONode *>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8(v1, &__for_end);
    node = *(SVONode **)v1;
    if ( node )
    {
      p_vptr_SVONode = &node->_vptr_SVONode;
      if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
        p_vptr_SVONode = (_QWORD *)__asan_report_load8(node, &__for_end);
      v3 = *p_vptr_SVONode + 8LL;
      v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v4 )
        p_vptr_SVONode = (_QWORD *)__asan_report_load8(*p_vptr_SVONode + 8LL, v4);
      (*(void (__fastcall **)(_QWORD *))v3)(p_vptr_SVONode);
      node = 0LL;
    }
    __gnu_cxx::__normal_iterator<SVONode **,std::vector<SVONode *>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->svo >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->svo = 0LL;
  std::vector<SVONode *>::~vector(&this->nodeData);
};

// Line 117: range 000000000CBEC152-000000000CBEC199
bool __cdecl SVOLayer::IsBotLayer(const SVOLayer *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->level > 0;
};

// Line 121: range 000000000CBEC19A-000000000CBEC2E7
void __cdecl SVOStructure::SVOStructure(
        SVOStructure *const this,
        int totalLayer,
        ToTheMoonVector3 *basePos,
        int width,
        int height,
        int depth)
{
  std::vector<SVOLayer *>::vector(&this->layerData);
  if ( *(_BYTE *)(((unsigned __int64)&this->basePos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->basePos = basePos;
  if ( *(_BYTE *)(((unsigned __int64)this->totalIndex >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this->totalIndex >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this->totalIndex);
  }
  this->totalIndex[0] = width;
  if ( *(_BYTE *)(((unsigned __int64)&this->totalIndex[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->totalIndex[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->totalIndex[1]);
  }
  this->totalIndex[1] = height;
  if ( *(_BYTE *)(((unsigned __int64)&this->totalIndex[2] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->totalIndex[2] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->totalIndex[2]);
  }
  this->totalIndex[2] = depth;
  if ( *(_BYTE *)(((unsigned __int64)&this->block >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->block = 0LL;
};

// Line 129: range 000000000CBEC2E8-000000000CBEC466
void __cdecl SVOStructure::~SVOStructure(SVOStructure *const this)
{
  unsigned __int64 v1; // rax
  SVOLayer *v2; // rbx
  std::vector<SVOLayer*>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<SVOLayer*>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::vector<SVOLayer*> *__for_range; // [rsp+20h] [rbp-20h]
  SVOLayer *layer; // [rsp+28h] [rbp-18h]

  __for_range = &this->layerData;
  __for_begin._M_current = std::vector<SVOLayer *>::begin(&this->layerData)._M_current;
  __for_end._M_current = std::vector<SVOLayer *>::end(&this->layerData)._M_current;
  while ( __gnu_cxx::operator!=<SVOLayer **,std::vector<SVOLayer *>>(&__for_begin, &__for_end) )
  {
    v1 = (unsigned __int64)__gnu_cxx::__normal_iterator<SVOLayer **,std::vector<SVOLayer *>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8(v1, &__for_end);
    layer = *(SVOLayer **)v1;
    if ( layer )
    {
      v2 = layer;
      SVOLayer::~SVOLayer(layer);
      operator delete(v2, 0x28uLL);
      layer = 0LL;
    }
    __gnu_cxx::__normal_iterator<SVOLayer **,std::vector<SVOLayer *>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->basePos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->basePos, &__for_end);
  if ( this->basePos )
  {
    operator delete(this->basePos, 0xCuLL);
    if ( *(_BYTE *)(((unsigned __int64)&this->basePos >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->basePos = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->block >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->block = 0LL;
  std::vector<SVOLayer *>::~vector(&this->layerData);
};

// Line 139: range 000000000CBEC468-000000000CBEC4AB
void __cdecl SVOStructure::SetBlock(SVOStructure *const this, SVOBlock *block)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->block >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->block = block;
};

// Line 150: range 000000000CBEC4AC-000000000CBEC665
void __cdecl SVOBlock::SVOBlock(SVOBlock *const this, SVOStructure *svo, int sceneId, int *blockIndex)
{
  int *v4; // rcx
  int *v5; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->svo = svo;
  if ( *(_BYTE *)(((unsigned __int64)&this->sceneId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sceneId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sceneId);
  }
  this->sceneId = sceneId;
  v4 = this->blockIndex;
  if ( ((unsigned __int8)blockIndex & 7) >= *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)blockIndex >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)blockIndex + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)blockIndex + 7) & 7) >= *(_BYTE *)((((unsigned __int64)blockIndex + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(blockIndex, 8LL);
  }
  v5 = *(int **)blockIndex;
  if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)v4 + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v4 + 7) >> 3) + 0x7FFF8000) )
  {
    v5 = v4;
    __asan_report_store_n(v4, 8LL);
  }
  *(_QWORD *)v4 = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->md5 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->md5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->md5);
  }
  this->md5 = 0;
};

// Line 157: range 000000000CBEC666-000000000CBEC782
void __cdecl SVOBlock::SVOBlock(SVOBlock *const this)
{
  unsigned __int64 blockIndex; // rax
  __int64 i; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->svo = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->sceneId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sceneId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sceneId);
  }
  this->sceneId = 0;
  blockIndex = (unsigned __int64)this->blockIndex;
  for ( i = 1LL; i >= 0; --i )
  {
    if ( *(_BYTE *)((blockIndex >> 3) + 0x7FFF8000) != 0
      && (char)((blockIndex & 7) + 3) >= *(_BYTE *)((blockIndex >> 3) + 0x7FFF8000) )
    {
      blockIndex = __asan_report_store4(blockIndex);
    }
    *(_DWORD *)blockIndex = 0;
    blockIndex += 4LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->md5 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->md5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->md5);
  }
  this->md5 = 0;
};

// Line 166: range 000000000CBEC784-000000000CBEC812
void __cdecl SVOBlock::~SVOBlock(SVOBlock *const this)
{
  __int64 v1; // rsi
  SVOStructure *svo; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  if ( this->svo )
  {
    svo = this->svo;
    if ( this->svo )
    {
      SVOStructure::~SVOStructure(this->svo);
      operator delete(svo, 0x38uLL);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->svo = 0LL;
  }
};

// Line 171: range 000000000CBEC814-000000000CBEC958
void __cdecl SVOWorld::SVOWorld(
        SVOWorld *const this,
        std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *p_worldMap,
        float blockSideLength)
{
  ToTheMoonVector3 v3; // [rsp+24h] [rbp-1Ch] BYREF

  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(&this->worldMap);
  ToTheMoonVector3::ToTheMoonVector3(&this->basePos);
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::operator=(&this->worldMap, p_worldMap);
  if ( *(_BYTE *)(((unsigned __int64)&this->blockSize >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blockSize >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blockSize);
  }
  this->blockSize = blockSideLength;
  ToTheMoonVector3::ToTheMoonVector3(&v3, 0.0, 0.0, 0.0);
  if ( *(char *)(((unsigned __int64)&this->basePos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->basePos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->basePos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->basePos, 12LL);
  }
  this->basePos = v3;
};

// Line 179: range 000000000CBEC95A-000000000CBEC9D4
bool __cdecl SVOWorld::Contains(const SVOWorld *const this, const IntPair *blockIndex)
{
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v3; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v4; // rdx
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+10h] [rbp-10h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+18h] [rbp-8h] BYREF

  if ( std::operator==<std::map<IntPair,std::shared_ptr<SVOBlock>>>(&this->worldMap, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  __y._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v3)._M_node;
  v4 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  __x._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(v4, blockIndex)._M_node;
  return std::operator==(&__x, &__y);
};

// Line 188: range 000000000CBEC9D6-000000000CBECAAE
std::shared_ptr<SVOBlock> __cdecl SVOWorld::GetBlockData(const SVOWorld *const this, const IntPair *blockIndex)
{
  const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *v2; // rdx
  std::shared_ptr<SVOBlock> result; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v4; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v5; // rdx
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v6; // rdx
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v7; // rdx
  const std::map<IntPair,std::shared_ptr<SVOBlock>>::key_type *blockIndexa; // [rsp+8h] [rbp-28h]
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+20h] [rbp-10h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __y; // [rsp+28h] [rbp-8h] BYREF

  blockIndexa = v2;
  if ( std::operator==<std::map<IntPair,std::shared_ptr<SVOBlock>>>(
         (const std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)blockIndex,
         0LL) )
  {
    std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)this, 0LL);
  }
  else
  {
    v4 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockIndex);
    __y._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v4)._M_node;
    v5 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockIndex);
    __x._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(v5, blockIndexa)._M_node;
    if ( std::operator==(&__x, &__y) )
    {
      std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)this, 0LL);
    }
    else
    {
      v6 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)blockIndex);
      v7 = std::map<IntPair,std::shared_ptr<SVOBlock>>::at(v6, blockIndexa);
      std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)this, v7);
    }
  }
  result._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 198: range 000000000CBECAB0-000000000CBECB2E
void __cdecl NodeInfoPair::NodeInfoPair(NodeInfoPair *const this, SVONode *node, int order)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node = node;
  if ( *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order);
  }
  this->order = order;
};

// Line 203: range 000000000CBECB30-000000000CBECB6A
void __cdecl NodeInfoPair::~NodeInfoPair(NodeInfoPair *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node = 0LL;
};

// Line 208: range 000000000CBECB6C-000000000CBECBAA
void __cdecl SVOLayerNodeDict::SVOLayerNodeDict(SVOLayerNodeDict *const this, int totalLayer)
{
  __int64 i; // rbx

  for ( i = 9LL; i >= 0; --i )
  {
    std::map<unsigned long,SVONode *>::map(this->layerNodeDict);
    this = (SVOLayerNodeDict *const)((char *)this + 48);
  }
};

// Line 212: range 000000000CBECBAC-000000000CBECC45
void __cdecl PlanePosIndex::PlanePosIndex(PlanePosIndex *const this, int x, int z)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = x;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = z;
};

// Line 217: range 000000000CBECC46-000000000CBECCDF
void __cdecl IntPair::IntPair(IntPair *const this, int first, int second)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->first = first;
  if ( *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->second);
  }
  this->second = second;
};

// Line 223: range 000000000CBECCE0-000000000CBECD75
void __cdecl IntPair::IntPair(IntPair *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->first = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->second);
  }
  this->second = 0;
};

// Line 230: range 000000000CBECD76-000000000CBECF86
std::string *__cdecl IntPair::ToString[abi:cxx11](std::string *retstr, const IntPair *const this)
{
  std::string __rhs; // [rsp+10h] [rbp-90h] BYREF
  std::string __lhs; // [rsp+30h] [rbp-70h] BYREF
  std::string v5; // [rsp+50h] [rbp-50h] BYREF
  std::string v6; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->second);
  }
  std::to_string(&v6, this->second);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  std::to_string(&__rhs, this->first);
  std::operator+<char>(&__lhs, "_", &__rhs);
  std::operator+<char>(&v5, &__lhs, "_");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v5, &v6);
  std::string::~string(&v5);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v6);
  return retstr;
};

// Line 235: range 000000000CBECF88-000000000CBED016
void __cdecl StaticDataWrapper::~StaticDataWrapper(StaticDataWrapper *const this)
{
  std::shared_ptr<SVOBlock> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<SVOBlock>::shared_ptr(&__r, 0LL);
  std::shared_ptr<SVOBlock>::operator=(&this->currentBlock, &__r);
  std::shared_ptr<SVOBlock>::~shared_ptr(&__r);
  std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)&__r, 0LL);
  std::shared_ptr<SVOWorld>::operator=(&this->currentWorld, (std::shared_ptr<SVOWorld> *)&__r);
  std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)&__r);
  std::shared_ptr<SVOWorld>::~shared_ptr(&this->currentWorld);
  std::shared_ptr<SVOBlock>::~shared_ptr(&this->currentBlock);
};

// Line 241: range 000000000CBED018-000000000CBED228
void __cdecl NodePairMap::~NodePairMap(NodePairMap *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  __int64 v4; // rax
  void *v5; // r14
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __y; // [rsp+10h] [rbp-A0h] BYREF
  std::map<long unsigned int,NodeInfoPair*> *layerNodeMap; // [rsp+18h] [rbp-98h]
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 11 iterMap:243 64 8 12 iterItem:245";
  *(_QWORD *)(v1 + 16) = NodePairMap::~NodePairMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  *(std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::iterator *)(v1 + 32) = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::begin(this);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::end(this)._M_cur;
    if ( !std::__detail::operator!=<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> *)(v1 + 32),
            &__y) )
      break;
    layerNodeMap = &std::__detail::_Node_iterator<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false,false> *const)(v1 + 32))->second;
    *(std::map<long unsigned int,NodeInfoPair*>::iterator *)(v1 + 64) = std::map<unsigned long,NodeInfoPair *>::begin(layerNodeMap);
    while ( 1 )
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::end(layerNodeMap)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)(v1 + 64),
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__y) )
        break;
      v4 = (__int64)std::_Rb_tree_iterator<std::pair<unsigned long const,NodeInfoPair *>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> > *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v4 + 8) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(v4 + 8, &__y);
      v5 = *(void **)(v4 + 8);
      if ( v5 )
      {
        NodeInfoPair::~NodeInfoPair(*(NodeInfoPair *const *)(v4 + 8));
        operator delete(v5, 0x10uLL);
      }
      std::_Rb_tree_iterator<std::pair<unsigned long const,NodeInfoPair *>>::operator++(
        (std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> > *const)(v1 + 64),
        0);
    }
    std::__detail::_Node_iterator<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false,false> *const)(v1 + 32),
      0);
  }
  std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::~unordered_map(this);
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 252: range 000000000CBED22A-000000000CBED4FD
SVONode *__fastcall NodePairMap::FindNode(NodePairMap *const this, int level, uint64_t *indexes)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  SVONode *result; // rax
  uint64_t *v7; // rax
  uint64_t v8; // rdx
  uint64_t *v9; // rax
  __int64 v10; // rsi
  uint64_t v11; // rcx
  __int64 v12; // rsi
  std::map<long unsigned int,NodeInfoPair*> *v13; // rax
  std::map<long unsigned int,NodeInfoPair*> *v14; // rax
  std::map<long unsigned int,NodeInfoPair*> *v15; // rax
  char *v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __x; // [rsp+20h] [rbp-90h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v22[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 level:251 64 8 9 index:255";
  *(_QWORD *)(v3 + 16) = NodePairMap::FindNode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = level;
  __y._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::end(this)._M_cur;
  __x._M_cur = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::find(
                 this,
                 (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v3 + 48))._M_cur;
  if ( std::__detail::operator==<std::pair<int const,std::map<unsigned long,NodeInfoPair *>>,false>(&__x, &__y) )
  {
    result = 0LL;
  }
  else
  {
    v7 = indexes + 2;
    if ( *(_BYTE *)(((unsigned __int64)(indexes + 2) >> 3) + 0x7FFF8000) )
      v7 = (uint64_t *)__asan_report_load8(indexes + 2, &__y);
    v8 = *v7;
    v9 = indexes + 1;
    v10 = *(unsigned __int8 *)(((unsigned __int64)(indexes + 1) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v10 )
      v9 = (uint64_t *)__asan_report_load8(indexes + 1, v10);
    v11 = *v9;
    v12 = *(unsigned __int8 *)(((unsigned __int64)indexes >> 3) + 0x7FFF8000);
    if ( (_BYTE)v12 )
      __asan_report_load8(indexes, v12);
    *(_QWORD *)(v3 + 64) = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(*indexes, v11, v8);
    v13 = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::at(
            this,
            (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v3 + 48));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::end(v13)._M_node;
    v14 = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::at(
            this,
            (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v3 + 48));
    __x._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::map<long unsigned int,NodeInfoPair*> >,false>::__node_type *)std::map<unsigned long,NodeInfoPair *>::find(v14, (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v3 + 64))._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__x,
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,NodeInfoPair*> >::_Self *)&__y) )
    {
      result = 0LL;
    }
    else
    {
      v15 = std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::at(
              this,
              (const std::unordered_map<int,std::map<long unsigned int,NodeInfoPair*>>::key_type *)(v3 + 48));
      v16 = (char *)(v3 + 64);
      v17 = (unsigned __int64)std::map<unsigned long,NodeInfoPair *>::operator[](
                                v15,
                                (const std::map<long unsigned int,NodeInfoPair*>::key_type *)(v3 + 64));
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8(v17, v16);
      v18 = *(_QWORD *)v17;
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(v18, v16);
      result = *(SVONode **)v18;
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
  return result;
};
