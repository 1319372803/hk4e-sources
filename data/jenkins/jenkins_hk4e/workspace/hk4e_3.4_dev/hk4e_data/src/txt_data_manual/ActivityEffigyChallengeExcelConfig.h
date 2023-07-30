// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityEffigyChallengeExcelConfig.h

// Line 17: range 000000000DE2D130-000000000DE2D18F
void __cdecl ActivityEffigyChallengeExcelConfigMgr::ActivityEffigyChallengeExcelConfigMgr(
        ActivityEffigyChallengeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityEffigyChallengeExcelConfigMgrBase::ActivityEffigyChallengeExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityEffigyChallengeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityEffigyChallengeExcelConfigMgrBase = v1;
  std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::map(&this->effigy_difficulty_map_);
};

// Line 17: range 000000000D816CB0-000000000D816D0F
void __cdecl ActivityEffigyChallengeExcelConfigMgr::~ActivityEffigyChallengeExcelConfigMgr(
        ActivityEffigyChallengeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityEffigyChallengeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityEffigyChallengeExcelConfigMgrBase = v1;
  std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::~map(&this->effigy_difficulty_map_);
  data::ActivityEffigyChallengeExcelConfigMgrBase::~ActivityEffigyChallengeExcelConfigMgrBase(this);
};
