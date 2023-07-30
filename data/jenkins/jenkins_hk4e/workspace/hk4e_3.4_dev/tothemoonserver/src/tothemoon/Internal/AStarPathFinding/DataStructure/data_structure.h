// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure.h

// Line 52: range 000000000CC2F8F6-000000000CC2FAD0
void __cdecl SVONode::SVONode(SVONode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SVONode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_SVONode = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->layer = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area);
  }
  this->area = Walkable;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->index = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->parent = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->children >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->children = 0LL;
  std::vector<SVONode *>::vector(&this->neighbors);
  if ( *(_BYTE *)(((unsigned __int64)&this->referPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->referPos = 0LL;
  std::vector<SVONode *>::vector(&this->planarNeighbors);
  std::vector<SVONode *>::vector(&this->diagonalNeighbors);
  if ( *(_BYTE *)(((unsigned __int64)&this->centerPos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->centerPos = 0LL;
};

// Line 121: range 000000000CC2FAD2-000000000CC2FC75
bool __cdecl IntPair::operator<(const IntPair *const this, const IntPair *ip_0)
{
  int first; // ecx
  int second; // ecx
  int v5; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  first = this->first;
  if ( *(_BYTE *)(((unsigned __int64)ip_0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ip_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ip_0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(ip_0);
  }
  if ( first == ip_0->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->second);
    }
    second = this->second;
    if ( *(_BYTE *)(((unsigned __int64)&ip_0->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)ip_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ip_0->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&ip_0->second);
    }
    return second < ip_0->second;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    v5 = this->first;
    if ( *(_BYTE *)(((unsigned __int64)ip_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ip_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ip_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ip_0);
    }
    return v5 < ip_0->first;
  }
};

// Line 129: range 000000000D0169C4-000000000D0169DE
void __cdecl SVOWorld::~SVOWorld(SVOWorld *const this)
{
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&this->worldMap);
};

// Line 175: range 000000000CCC6178-000000000CCC6192
void __cdecl NodePairMap::NodePairMap(NodePairMap *const this)
{
  std::unordered_map<int,std::map<unsigned long,NodeInfoPair *>>::unordered_map(this);
};

// Line 185: range 000000000CC2FCEE-000000000CC2FD22
void __cdecl StaticDataWrapper::StaticDataWrapper(StaticDataWrapper *const this)
{
  std::shared_ptr<SVOBlock>::shared_ptr(&this->currentBlock, 0LL);
  std::shared_ptr<SVOWorld>::shared_ptr(&this->currentWorld, 0LL);
};
