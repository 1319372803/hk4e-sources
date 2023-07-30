// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataProcess/path_finding_data_generator.h

// Line 15: range 000000000CFB7528-000000000CFB7552
void __cdecl BlockNodeDict::BlockNodeDict(BlockNodeDict *const this)
{
  std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::map(&this->nodeMap);
  std::map<int,std::map<unsigned long,int>>::map(&this->nodeIndexMap);
};

// Line 15: range 000000000D016B3C-000000000D016B66
void __cdecl BlockNodeDict::~BlockNodeDict(BlockNodeDict *const this)
{
  std::map<int,std::map<unsigned long,int>>::~map(&this->nodeIndexMap);
  std::map<int,std::shared_ptr<std::map<unsigned long,SVONode *>>>::~map(&this->nodeMap);
};
