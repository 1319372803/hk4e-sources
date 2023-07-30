// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/xml_config_mgr.h

// Line 22: range 000000000CE0AA5A-000000000CE0AA74
void __cdecl BehaviorTreeConfigMgr::BehaviorTreeConfigMgr(BehaviorTreeConfigMgr *const this)
{
  std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::unordered_map(&this->behavior_tree_map_);
};

// Line 26: range 000000000CE0AA76-000000000CE0AA90
void __cdecl BehaviorTreeConfigMgr::clear(BehaviorTreeConfigMgr *const this)
{
  std::unordered_map<std::string,std::shared_ptr<BehaviorTreeConfig>>::clear(&this->behavior_tree_map_);
};
