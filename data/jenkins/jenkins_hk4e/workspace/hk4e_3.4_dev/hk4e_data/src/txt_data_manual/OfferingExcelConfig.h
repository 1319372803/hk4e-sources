// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/OfferingExcelConfig.h

// Line 18: range 000000000DE2CA88-000000000DE2CB0B
void __cdecl OfferingExcelConfigMgr::OfferingExcelConfigMgr(OfferingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::OfferingExcelConfigMgrBase::OfferingExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'OfferingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_OfferingExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::map(&this->offering_levelup_config_map);
  std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::map(&this->routine_close_config_map);
  std::map<unsigned int,unsigned int>::map(&this->offering_max_level_config_map);
};

// Line 18: range 000000000D816B1C-000000000D816B9F
void __cdecl OfferingExcelConfigMgr::~OfferingExcelConfigMgr(OfferingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OfferingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_OfferingExcelConfigMgrBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->offering_max_level_config_map);
  std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::~map(&this->routine_close_config_map);
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::~map(&this->offering_levelup_config_map);
  data::OfferingExcelConfigMgrBase::~OfferingExcelConfigMgrBase(this);
};
