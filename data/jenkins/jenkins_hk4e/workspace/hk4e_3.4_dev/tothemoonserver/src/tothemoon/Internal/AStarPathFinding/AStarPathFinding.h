// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/AStarPathFinding.h

// Line 9: range 000000000CFCE200-000000000CFCE25A
void __cdecl ToTheMoonPathFinding::ToTheMoonPathFinding(ToTheMoonPathFinding *const this)
{
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOBlock>>>::shared_ptr(&this->block_data_map);
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOWorld>>>::shared_ptr(&this->world_data_map);
  std::shared_ptr<RefinedPathGenerator>::shared_ptr(&this->pathGenerator);
  std::shared_ptr<AStarPathFinder>::shared_ptr(&this->pathFinder);
  std::shared_ptr<VoxelCutter>::shared_ptr(&this->voxelCutter);
};

// Line 9: range 000000000D015FFC-000000000D016056
void __cdecl ToTheMoonPathFinding::~ToTheMoonPathFinding(ToTheMoonPathFinding *const this)
{
  std::shared_ptr<VoxelCutter>::~shared_ptr(&this->voxelCutter);
  std::shared_ptr<AStarPathFinder>::~shared_ptr(&this->pathFinder);
  std::shared_ptr<RefinedPathGenerator>::~shared_ptr(&this->pathGenerator);
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOWorld>>>::~shared_ptr(&this->world_data_map);
  std::shared_ptr<std::map<std::string,std::shared_ptr<SVOBlock>>>::~shared_ptr(&this->block_data_map);
};
