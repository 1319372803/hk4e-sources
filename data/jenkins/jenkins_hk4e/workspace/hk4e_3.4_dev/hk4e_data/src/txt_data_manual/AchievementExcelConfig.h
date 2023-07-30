// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AchievementExcelConfig.h

// Line 18: range 000000000DE26BC2-000000000DE26C45
void __cdecl AchievementExcelConfigMgr::AchievementExcelConfigMgr(AchievementExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::AchievementExcelConfigMgrBase::AchievementExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'AchievementExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AchievementExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->goal_to_achievement_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->achievement_to_watcher_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->watcher_to_achievement_map_);
};

// Line 18: range 000000000D8152F8-000000000D81537B
void __cdecl AchievementExcelConfigMgr::~AchievementExcelConfigMgr(AchievementExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AchievementExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AchievementExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->watcher_to_achievement_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->achievement_to_watcher_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->goal_to_achievement_map_);
  data::AchievementExcelConfigMgrBase::~AchievementExcelConfigMgrBase(this);
};
