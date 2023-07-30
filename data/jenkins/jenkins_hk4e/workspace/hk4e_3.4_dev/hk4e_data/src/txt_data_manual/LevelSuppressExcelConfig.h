// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/LevelSuppressExcelConfig.h

// Line 18: range 000000000DE178BC-000000000DE17909
void __cdecl LevelSuppressExcelConfigMgr::LevelSuppressExcelConfigMgr(LevelSuppressExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::LevelSuppressExcelConfigMgrBase::LevelSuppressExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'LevelSuppressExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_LevelSuppressExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D811C88-000000000D811CD5
void __cdecl LevelSuppressExcelConfigMgr::~LevelSuppressExcelConfigMgr(LevelSuppressExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'LevelSuppressExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_LevelSuppressExcelConfigMgrBase = v1;
  data::LevelSuppressExcelConfigMgrBase::~LevelSuppressExcelConfigMgrBase(this);
};
