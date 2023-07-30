// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MultistageExcelConfig.h

// Line 19: range 000000000DE4CF12-000000000DE4CF5F
void __cdecl MultistageExcelConfigMgr::MultistageExcelConfigMgr(MultistageExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::MultistageExcelConfigMgrBase::MultistageExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'MultistageExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MultistageExcelConfigMgrBase = v1;
};

// Line 19: range 000000000D81D9EE-000000000D81DA3B
void __cdecl MultistageExcelConfigMgr::~MultistageExcelConfigMgr(MultistageExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MultistageExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MultistageExcelConfigMgrBase = v1;
  data::MultistageExcelConfigMgrBase::~MultistageExcelConfigMgrBase(this);
};
