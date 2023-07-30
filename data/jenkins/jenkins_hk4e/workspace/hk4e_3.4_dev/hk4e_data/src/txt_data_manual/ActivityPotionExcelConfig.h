// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityPotionExcelConfig.h

// Line 18: range 000000000DE47F9E-000000000DE4800F
void __cdecl ActivityPotionExcelConfigMgr::ActivityPotionExcelConfigMgr(ActivityPotionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityPotionExcelConfigMgrBase::ActivityPotionExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityPotionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityPotionExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->stage_trial_avatar_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->stage_buff_id_map_);
};

// Line 18: range 000000000D81C96E-000000000D81C9DF
void __cdecl ActivityPotionExcelConfigMgr::~ActivityPotionExcelConfigMgr(ActivityPotionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityPotionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityPotionExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->stage_buff_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->stage_trial_avatar_map_);
  data::ActivityPotionExcelConfigMgrBase::~ActivityPotionExcelConfigMgrBase(this);
};
