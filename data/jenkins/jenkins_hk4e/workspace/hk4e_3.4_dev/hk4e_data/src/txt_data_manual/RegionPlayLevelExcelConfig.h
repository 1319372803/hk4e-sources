// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RegionPlayLevelExcelConfig.h

// Line 18: range 000000000DE54376-000000000DE543C3
void __cdecl RegionPlayLevelExcelConfigMgr::RegionPlayLevelExcelConfigMgr(RegionPlayLevelExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::RegionPlayLevelExcelConfigMgrBase::RegionPlayLevelExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'RegionPlayLevelExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RegionPlayLevelExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D81F3AE-000000000D81F3FB
void __cdecl RegionPlayLevelExcelConfigMgr::~RegionPlayLevelExcelConfigMgr(RegionPlayLevelExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RegionPlayLevelExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RegionPlayLevelExcelConfigMgrBase = v1;
  data::RegionPlayLevelExcelConfigMgrBase::~RegionPlayLevelExcelConfigMgrBase(this);
};
