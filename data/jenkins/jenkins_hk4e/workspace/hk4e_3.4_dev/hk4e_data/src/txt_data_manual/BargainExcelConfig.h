// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BargainExcelConfig.h

// Line 18: range 000000000DE21FC4-000000000DE22011
void __cdecl BargainExcelConfigMgr::BargainExcelConfigMgr(BargainExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::BargainExcelConfigMgrBase::BargainExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'BargainExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BargainExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D814258-000000000D8142A5
void __cdecl BargainExcelConfigMgr::~BargainExcelConfigMgr(BargainExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BargainExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BargainExcelConfigMgrBase = v1;
  data::BargainExcelConfigMgrBase::~BargainExcelConfigMgrBase(this);
};
