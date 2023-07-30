// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/network/service_session_mgr.h

// Line 25: range 000000000389ED40-000000000389ED7A
void __cdecl ServiceSessionMgr::ServiceSessionMgr(ServiceSessionMgr *const this)
{
  std::mutex::mutex(&this->mu_);
  std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::unordered_map(&this->session_map_);
  std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::unordered_map(&this->type_to_app_ids_map_);
};

// Line 25: range 000000000389ED7C-000000000389EDAA
void __cdecl ServiceSessionMgr::~ServiceSessionMgr(ServiceSessionMgr *const this)
{
  std::unordered_map<unsigned int,boost::container::flat_set<unsigned int,std::less<unsigned int>,void>>::~unordered_map(&this->type_to_app_ids_map_);
  std::unordered_map<unsigned int,std::shared_ptr<ServiceSession>>::~unordered_map(&this->session_map_);
};
