// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure_a_star.h

// Line 55: range 000000000CCC559C-000000000CCC56A5
void __cdecl Pyramid::Pyramid(Pyramid *const this, const Pyramid *a2)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->top.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->top.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->top.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->top.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 12LL);
  }
  *(_QWORD *)&this->top.x = *(_QWORD *)&a2->top.x;
  this->top.z = a2->top.z;
  std::shared_ptr<NodeWindow>::shared_ptr(&this->base, &a2->base);
};

// Line 55: range 000000000CCC56A6-000000000CCC56C4
void __cdecl Pyramid::~Pyramid(Pyramid *const this)
{
  std::shared_ptr<NodeWindow>::~shared_ptr(&this->base);
};

// Line 63: range 000000000D016BE2-000000000D016C2C
void __cdecl SquareBasedWedge::~SquareBasedWedge(SquareBasedWedge *const this)
{
  std::shared_ptr<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>>::~shared_ptr(&this->baseToTopMap);
  std::shared_ptr<ToTheMoonVector3>::~shared_ptr(&this->planeVec);
  std::shared_ptr<NodeWindow>::~shared_ptr(&this->base);
  std::shared_ptr<ToTheMoonLine>::~shared_ptr(&this->topLine);
};

// Line 82: range 000000000CCC535E-000000000CCC5378
void __cdecl AStarPathQueryData::AStarPathQueryData(AStarPathQueryData *const this)
{
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::unordered_map(&this->astarInfoMap);
};

// Line 82: range 000000000CCC537A-000000000CCC5394
void __cdecl AStarPathQueryData::~AStarPathQueryData(AStarPathQueryData *const this)
{
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::~unordered_map(&this->astarInfoMap);
};
