// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySumoExcelConfig.h

// Line 18: range 000000000DE3FF14-000000000DE3FF85
void __cdecl ActivitySumoExcelConfigMgr::ActivitySumoExcelConfigMgr(ActivitySumoExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivitySumoExcelConfigMgrBase::ActivitySumoExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivitySumoExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySumoExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>::map(&this->schedule_sumo_stage_map);
  std::set<unsigned int>::set(&this->watcher_id_set);
};

// Line 18: range 000000000D81AD18-000000000D81AD89
void __cdecl ActivitySumoExcelConfigMgr::~ActivitySumoExcelConfigMgr(ActivitySumoExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivitySumoExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySumoExcelConfigMgrBase = v1;
  std::set<unsigned int>::~set(&this->watcher_id_set);
  std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>::~map(&this->schedule_sumo_stage_map);
  data::ActivitySumoExcelConfigMgrBase::~ActivitySumoExcelConfigMgrBase(this);
};
