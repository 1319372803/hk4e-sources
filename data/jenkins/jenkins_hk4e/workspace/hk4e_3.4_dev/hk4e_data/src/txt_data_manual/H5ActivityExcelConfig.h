// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/H5ActivityExcelConfig.h

// Line 18: range 000000000DE3A8AA-000000000DE3A8F7
void __cdecl H5ActivityExcelConfigMgr::H5ActivityExcelConfigMgr(H5ActivityExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::H5ActivityExcelConfigMgrBase::H5ActivityExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'H5ActivityExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_H5ActivityExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D8199EA-000000000D819A37
void __cdecl H5ActivityExcelConfigMgr::~H5ActivityExcelConfigMgr(H5ActivityExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'H5ActivityExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_H5ActivityExcelConfigMgrBase = v1;
  data::H5ActivityExcelConfigMgrBase::~H5ActivityExcelConfigMgrBase(this);
};
