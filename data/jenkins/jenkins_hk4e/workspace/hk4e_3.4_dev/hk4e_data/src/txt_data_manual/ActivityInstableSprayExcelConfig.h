// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityInstableSprayExcelConfig.h

// Line 17: range 000000000DE55D94-000000000DE55DE1
void __cdecl ActivityInstableSprayExcelConfigMgr::ActivityInstableSprayExcelConfigMgr(
        ActivityInstableSprayExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityInstableSprayExcelConfigMgrBase::ActivityInstableSprayExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityInstableSprayExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityInstableSprayExcelConfigMgrBase = v1;
};

// Line 17: range 000000000D81F904-000000000D81F951
void __cdecl ActivityInstableSprayExcelConfigMgr::~ActivityInstableSprayExcelConfigMgr(
        ActivityInstableSprayExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityInstableSprayExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityInstableSprayExcelConfigMgrBase = v1;
  data::ActivityInstableSprayExcelConfigMgrBase::~ActivityInstableSprayExcelConfigMgrBase(this);
};
