// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ShareCDExcelConfig.h

// Line 18: range 000000000DE4E3DC-000000000DE4E429
void __cdecl ShareCDExcelConfigMgr::ShareCDExcelConfigMgr(ShareCDExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ShareCDExcelConfigMgrBase::ShareCDExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ShareCDExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ShareCDExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D81DEC6-000000000D81DF13
void __cdecl ShareCDExcelConfigMgr::~ShareCDExcelConfigMgr(ShareCDExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ShareCDExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ShareCDExcelConfigMgrBase = v1;
  data::ShareCDExcelConfigMgrBase::~ShareCDExcelConfigMgrBase(this);
};
