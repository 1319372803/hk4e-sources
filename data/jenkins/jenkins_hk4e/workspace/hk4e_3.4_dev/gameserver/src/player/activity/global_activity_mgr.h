// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/global_activity_mgr.h

// Line 22: range 00000000176AE4AC-00000000176AE4D6
void __cdecl GlobalActivityMgr::~GlobalActivityMgr(GlobalActivityMgr *const this)
{
  std::unordered_map<unsigned int,data::RedPointConfig>::~unordered_map(&this->red_point_config_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->annoucne_config_id_set_);
};

// Line 25: range 00000000176AE480-00000000176AE4AA
void __cdecl GlobalActivityMgr::GlobalActivityMgr(GlobalActivityMgr *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->annoucne_config_id_set_);
  std::unordered_map<unsigned int,data::RedPointConfig>::unordered_map(&this->red_point_config_map_);
};
