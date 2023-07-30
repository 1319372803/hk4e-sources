// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMistTrialExcelConfig.h

// Line 17: range 000000000DE37DC6-000000000DE37E6D
void __cdecl ActivityMistTrialExcelConfigMgr::ActivityMistTrialExcelConfigMgr(
        ActivityMistTrialExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityMistTrialExcelConfigMgrBase::ActivityMistTrialExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityMistTrialExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMistTrialExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->schedule_level_map);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->schedule_stat_map);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->schedule_watcher_map);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->level_watcher_map);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->schedule_dungeon_id_map);
};

// Line 17: range 000000000D819144-000000000D8191EB
void __cdecl ActivityMistTrialExcelConfigMgr::~ActivityMistTrialExcelConfigMgr(
        ActivityMistTrialExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityMistTrialExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMistTrialExcelConfigMgrBase = v1;
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->schedule_dungeon_id_map);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->level_watcher_map);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->schedule_watcher_map);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->schedule_stat_map);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->schedule_level_map);
  data::ActivityMistTrialExcelConfigMgrBase::~ActivityMistTrialExcelConfigMgrBase(this);
};
