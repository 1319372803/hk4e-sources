// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityAsterExcelConfig.h

// Line 18: range 000000000DE284DE-000000000DE28649
void __cdecl ActivityAsterExcelConfigMgr::ActivityAsterExcelConfigMgr(ActivityAsterExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityAsterExcelConfigMgrBase::ActivityAsterExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityAsterExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityAsterExcelConfigMgrBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_first_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_little_first_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aster_little_first_stage_id_);
  }
  this->aster_little_first_stage_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_little_last_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_little_last_stage_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->aster_little_last_stage_id_);
  }
  this->aster_little_last_stage_id_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->watcher_phase_map_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->phase_watcher_set_map_);
  std::set<unsigned int>::set(&this->aster_watcher_set_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->aster_little_watcher_set_map_);
  std::vector<unsigned int>::vector(&this->aster_mid_refresh_id_vec_);
  std::map<unsigned int,unsigned int>::map(&this->aster_mid_group_camp_map_);
  std::map<unsigned int,data::AsterActivityPerviewExcelConfig>::map(&this->activity_aster_preview_map_);
  std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>>::map(&this->activity_aster_phase_map_);
};

// Line 18: range 000000000D81593A-000000000D815A17
void __cdecl ActivityAsterExcelConfigMgr::~ActivityAsterExcelConfigMgr(ActivityAsterExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityAsterExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityAsterExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>>::~map(&this->activity_aster_phase_map_);
  std::map<unsigned int,data::AsterActivityPerviewExcelConfig>::~map(&this->activity_aster_preview_map_);
  std::map<unsigned int,unsigned int>::~map(&this->aster_mid_group_camp_map_);
  std::vector<unsigned int>::~vector(&this->aster_mid_refresh_id_vec_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->aster_little_watcher_set_map_);
  std::set<unsigned int>::~set(&this->aster_watcher_set_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->phase_watcher_set_map_);
  std::map<unsigned int,unsigned int>::~map(&this->watcher_phase_map_);
  data::ActivityAsterExcelConfigMgrBase::~ActivityAsterExcelConfigMgrBase(this);
};
