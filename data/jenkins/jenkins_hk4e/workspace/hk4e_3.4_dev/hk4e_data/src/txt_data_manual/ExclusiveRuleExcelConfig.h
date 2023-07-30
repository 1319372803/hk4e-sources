// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ExclusiveRuleExcelConfig.h

// Line 26: range 000000000DE375C8-000000000DE37635
void __cdecl ExclusiveRuleExcelConfigMgr::ExclusiveRuleExcelConfigMgr(ExclusiveRuleExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ExclusiveRuleExcelConfigMgrBase::ExclusiveRuleExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ExclusiveRuleExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ExclusiveRuleExcelConfigMgrBase = v1;
  std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::unordered_map(&this->exclusive_platform_map_);
  std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::unordered_map(&this->exclusive_rule_map_);
};

// Line 26: range 000000000D818F98-000000000D819005
void __cdecl ExclusiveRuleExcelConfigMgr::~ExclusiveRuleExcelConfigMgr(ExclusiveRuleExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ExclusiveRuleExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ExclusiveRuleExcelConfigMgrBase = v1;
  std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::~unordered_map(&this->exclusive_rule_map_);
  std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::~unordered_map(&this->exclusive_platform_map_);
  data::ExclusiveRuleExcelConfigMgrBase::~ExclusiveRuleExcelConfigMgrBase(this);
};
