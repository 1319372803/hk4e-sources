// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TreeTypeExcelConfig.h

// Line 18: range 000000000DE3711A-000000000DE37167
void __cdecl TreeTypeExcelConfigMgr::TreeTypeExcelConfigMgr(TreeTypeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::TreeTypeExcelConfigMgrBase::TreeTypeExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'TreeTypeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeTypeExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D818EA4-000000000D818EF1
void __cdecl TreeTypeExcelConfigMgr::~TreeTypeExcelConfigMgr(TreeTypeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TreeTypeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeTypeExcelConfigMgrBase = v1;
  data::TreeTypeExcelConfigMgrBase::~TreeTypeExcelConfigMgrBase(this);
};
