// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityIslandPartyExcelConfig.h

// Line 19: range 000000000DE54844-000000000DE548C7
void __cdecl ActivityIslandPartyExcelConfigMgr::ActivityIslandPartyExcelConfigMgr(
        ActivityIslandPartyExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityIslandPartyExcelConfigMgrBase::ActivityIslandPartyExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityIslandPartyExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityIslandPartyExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::unordered_map(&this->gallery_id_config_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->stage_id_score_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->stage_id_card_map);
};

// Line 19: range 000000000D81F4C2-000000000D81F545
void __cdecl ActivityIslandPartyExcelConfigMgr::~ActivityIslandPartyExcelConfigMgr(
        ActivityIslandPartyExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityIslandPartyExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityIslandPartyExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->stage_id_card_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->stage_id_score_map);
  std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::~unordered_map(&this->gallery_id_config_map);
  data::ActivityIslandPartyExcelConfigMgrBase::~ActivityIslandPartyExcelConfigMgrBase(this);
};
