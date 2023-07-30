// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMoonfinTrialExcelConfig.h

// Line 20: range 000000000DE419D8-000000000DE41A47
void __cdecl ActivityMoonfinTrialExcelConfigMgr::ActivityMoonfinTrialExcelConfigMgr(
        ActivityMoonfinTrialExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityMoonfinTrialExcelConfigMgrBase::ActivityMoonfinTrialExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityMoonfinTrialExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMoonfinTrialExcelConfigMgrBase = v1;
  std::map<unsigned int,data::MoonfinTrialExcelConfig>::map(&this->moonfin_trial_preview_config_map_);
  std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::map(&this->moonfin_trial_activityid_2_level_config_map_);
};

// Line 20: range 000000000D81B3A8-000000000D81B417
void __cdecl ActivityMoonfinTrialExcelConfigMgr::~ActivityMoonfinTrialExcelConfigMgr(
        ActivityMoonfinTrialExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityMoonfinTrialExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMoonfinTrialExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::~map(&this->moonfin_trial_activityid_2_level_config_map_);
  std::map<unsigned int,data::MoonfinTrialExcelConfig>::~map(&this->moonfin_trial_preview_config_map_);
  data::ActivityMoonfinTrialExcelConfigMgrBase::~ActivityMoonfinTrialExcelConfigMgrBase(this);
};
