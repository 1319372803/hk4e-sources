// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySalesmanExcelConfig.h

// Line 18: range 000000000DE22B7E-000000000DE22BCB
void __cdecl ActivitySalesmanExcelConfigMgr::ActivitySalesmanExcelConfigMgr(ActivitySalesmanExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivitySalesmanExcelConfigMgrBase::ActivitySalesmanExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivitySalesmanExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySalesmanExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D814560-000000000D8145AD
void __cdecl ActivitySalesmanExcelConfigMgr::~ActivitySalesmanExcelConfigMgr(
        ActivitySalesmanExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivitySalesmanExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySalesmanExcelConfigMgrBase = v1;
  data::ActivitySalesmanExcelConfigMgrBase::~ActivitySalesmanExcelConfigMgrBase(this);
};
