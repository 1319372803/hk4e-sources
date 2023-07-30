// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DraftExcelConfig.h

// Line 18: range 000000000DE32504-000000000DE32551
void __cdecl DraftExcelConfigMgr::DraftExcelConfigMgr(DraftExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::DraftExcelConfigMgrBase::DraftExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'DraftExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DraftExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D817F6E-000000000D817FBB
void __cdecl DraftExcelConfigMgr::~DraftExcelConfigMgr(DraftExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DraftExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DraftExcelConfigMgrBase = v1;
  data::DraftExcelConfigMgrBase::~DraftExcelConfigMgrBase(this);
};
