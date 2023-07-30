// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/InvestigationExcelConfig.h

// Line 18: range 000000000DE1B5F8-000000000DE1B68D
void __cdecl InvestigationExcelConfigMgr::InvestigationExcelConfigMgr(InvestigationExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::InvestigationExcelConfigMgrBase::InvestigationExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'InvestigationExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_InvestigationExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::unordered_map(&this->investigation_monster_config_ids_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->pre_investigation_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->investigation_to_target_map_);
  std::unordered_map<unsigned int,data::MonsterCategory>::unordered_map(&this->investigation_monster_to_catogory_map_);
};

// Line 18: range 000000000D812BFE-000000000D812C93
void __cdecl InvestigationExcelConfigMgr::~InvestigationExcelConfigMgr(InvestigationExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'InvestigationExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_InvestigationExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::MonsterCategory>::~unordered_map(&this->investigation_monster_to_catogory_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->investigation_to_target_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->pre_investigation_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::~unordered_map(&this->investigation_monster_config_ids_map);
  data::InvestigationExcelConfigMgrBase::~InvestigationExcelConfigMgrBase(this);
};
