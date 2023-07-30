// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.h

// Line 18: range 000000000DE5177E-000000000DE517FF
void __cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::ActivityLuminanceStoneChallengeExcelConfigMgr(
        ActivityLuminanceStoneChallengeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityLumianceStoneChallengeExcelConfigMgrBase::ActivityLumianceStoneChallengeExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityLuminanceStoneChallengeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityLumianceStoneChallengeExcelConfigMgrBase = v1;
  std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::map(&this->luminance_overall_config_map_);
  std::map<unsigned int,unsigned int>::map(&this->luminance_bundle_2_stage_map_);
  std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::map(&this->luminance_stage_excel_map_);
};

// Line 18: range 000000000D81E9F4-000000000D81EA75
void __cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::~ActivityLuminanceStoneChallengeExcelConfigMgr(
        ActivityLuminanceStoneChallengeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityLuminanceStoneChallengeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityLumianceStoneChallengeExcelConfigMgrBase = v1;
  std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::~map(&this->luminance_stage_excel_map_);
  std::map<unsigned int,unsigned int>::~map(&this->luminance_bundle_2_stage_map_);
  std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::~map(&this->luminance_overall_config_map_);
  data::ActivityLumianceStoneChallengeExcelConfigMgrBase::~ActivityLumianceStoneChallengeExcelConfigMgrBase(this);
};
