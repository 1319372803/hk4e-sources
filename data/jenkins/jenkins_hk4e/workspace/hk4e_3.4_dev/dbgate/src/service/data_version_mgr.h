// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/service/data_version_mgr.h

// Line 26: range 000000000C5FB962-000000000C5FB98C
void __cdecl DataVersionMgr::DataVersionMgr(DataVersionMgr *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->data_version_map_);
  std::mutex::mutex(&this->data_version_mu_);
};

// Line 27: range 000000000C5FB98E-000000000C5FB9A8
void __cdecl DataVersionMgr::~DataVersionMgr(DataVersionMgr *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->data_version_map_);
};
