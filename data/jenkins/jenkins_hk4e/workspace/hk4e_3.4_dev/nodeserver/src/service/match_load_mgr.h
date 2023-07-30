// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/service/match_load_mgr.h

// Line 23: range 00000000038992EC-0000000003899316
void __cdecl MatchLoadMgr::MatchLoadMgr(MatchLoadMgr *const this)
{
  std::mutex::mutex(&this->mu_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->workload_info_map_);
};

// Line 24: range 0000000003899318-0000000003899336
void __cdecl MatchLoadMgr::~MatchLoadMgr(MatchLoadMgr *const this)
{
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->workload_info_map_);
};
