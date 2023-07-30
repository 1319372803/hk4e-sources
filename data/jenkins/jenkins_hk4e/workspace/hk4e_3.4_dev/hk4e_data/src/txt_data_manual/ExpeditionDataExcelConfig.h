// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ExpeditionDataExcelConfig.h

// Line 18: range 000000000DE1958E-000000000DE195DB
void __cdecl ExpeditionDataExcelConfigMgr::ExpeditionDataExcelConfigMgr(ExpeditionDataExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ExpeditionDataExcelConfigMgrBase::ExpeditionDataExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ExpeditionDataExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ExpeditionDataExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D81235C-000000000D8123A9
void __cdecl ExpeditionDataExcelConfigMgr::~ExpeditionDataExcelConfigMgr(ExpeditionDataExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ExpeditionDataExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ExpeditionDataExcelConfigMgrBase = v1;
  data::ExpeditionDataExcelConfigMgrBase::~ExpeditionDataExcelConfigMgrBase(this);
};
