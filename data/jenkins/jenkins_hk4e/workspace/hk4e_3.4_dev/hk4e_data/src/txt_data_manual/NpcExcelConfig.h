// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/NpcExcelConfig.h

// Line 18: range 000000000DE0E958-000000000DE0E9A5
void __cdecl NpcExcelConfigMgr::NpcExcelConfigMgr(NpcExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::NpcExcelConfigMgrBase::NpcExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'NpcExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_NpcExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D80FAA4-000000000D80FAF1
void __cdecl NpcExcelConfigMgr::~NpcExcelConfigMgr(NpcExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NpcExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_NpcExcelConfigMgrBase = v1;
  data::NpcExcelConfigMgrBase::~NpcExcelConfigMgrBase(this);
};
