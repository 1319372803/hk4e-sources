// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure_obstacle.h

// Line 9: range 000000000CFBB252-000000000CFBB28C
void __cdecl OperationCache::OperationCache(OperationCache *const this)
{
  std::map<int,std::vector<unsigned long>>::map(&this->block_refer);
  std::map<int,std::vector<unsigned long>>::map(&this->divide_refer);
  std::map<int,std::vector<unsigned long>>::map(&this->edge_block_refer_l1);
};

// Line 9: range 000000000D01678C-000000000D0167C6
void __cdecl OperationCache::~OperationCache(OperationCache *const this)
{
  std::map<int,std::vector<unsigned long>>::~map(&this->edge_block_refer_l1);
  std::map<int,std::vector<unsigned long>>::~map(&this->divide_refer);
  std::map<int,std::vector<unsigned long>>::~map(&this->block_refer);
};

// Line 117: range 000000000CCC4F40-000000000CCC4F5E
void __cdecl NodeObstacle::~NodeObstacle(NodeObstacle *const this)
{
  std::vector<ToTheMoonVector3>::~vector(&this->detectionPoints);
};
