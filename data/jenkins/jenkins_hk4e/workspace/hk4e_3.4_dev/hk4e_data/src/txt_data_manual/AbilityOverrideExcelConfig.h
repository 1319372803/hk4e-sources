// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AbilityOverrideExcelConfig.h

// Line 19: range 000000000DE45334-000000000DE45391
void __cdecl AbilityOverrideExcelConfigMgr::AbilityOverrideExcelConfigMgr(AbilityOverrideExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::AbilityOverrideExcelConfigMgrBase::AbilityOverrideExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'AbilityOverrideExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AbilityOverrideExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::unordered_map(&this->ability_override_param_map_);
};

// Line 19: range 000000000D81BF54-000000000D81BFB1
void __cdecl AbilityOverrideExcelConfigMgr::~AbilityOverrideExcelConfigMgr(AbilityOverrideExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityOverrideExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AbilityOverrideExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::~unordered_map(&this->ability_override_param_map_);
  data::AbilityOverrideExcelConfigMgrBase::~AbilityOverrideExcelConfigMgrBase(this);
};
