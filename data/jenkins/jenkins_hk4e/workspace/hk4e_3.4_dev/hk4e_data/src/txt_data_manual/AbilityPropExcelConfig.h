// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AbilityPropExcelConfig.h

// Line 18: range 000000000DE1F16C-000000000DE1F1B9
void __cdecl AbilityPropExcelConfigMgr::AbilityPropExcelConfigMgr(AbilityPropExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::AbilityPropExcelConfigMgrBase::AbilityPropExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'AbilityPropExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AbilityPropExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D81392A-000000000D813977
void __cdecl AbilityPropExcelConfigMgr::~AbilityPropExcelConfigMgr(AbilityPropExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityPropExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AbilityPropExcelConfigMgrBase = v1;
  data::AbilityPropExcelConfigMgrBase::~AbilityPropExcelConfigMgrBase(this);
};
