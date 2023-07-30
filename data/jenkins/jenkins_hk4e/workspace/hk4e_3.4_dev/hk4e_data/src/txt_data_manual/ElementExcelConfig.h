// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ElementExcelConfig.h

// Line 18: range 000000000DE0A616-000000000DE0A663
void __cdecl ElementExcelConfigMgr::ElementExcelConfigMgr(ElementExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ElementExcelConfigMgrBase::ElementExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ElementExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ElementExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D80ECD4-000000000D80ED21
void __cdecl ElementExcelConfigMgr::~ElementExcelConfigMgr(ElementExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ElementExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ElementExcelConfigMgrBase = v1;
  data::ElementExcelConfigMgrBase::~ElementExcelConfigMgrBase(this);
};
