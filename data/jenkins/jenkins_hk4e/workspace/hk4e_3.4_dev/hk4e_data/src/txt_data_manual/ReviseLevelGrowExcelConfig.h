// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ReviseLevelGrowExcelConfig.h

// Line 18: range 000000000DE274EC-000000000DE27539
void __cdecl ReviseLevelGrowExcelConfigMgr::ReviseLevelGrowExcelConfigMgr(ReviseLevelGrowExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ReviseLevelGrowExcelConfigMgrBase::ReviseLevelGrowExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ReviseLevelGrowExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ReviseLevelGrowExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D8155EC-000000000D815639
void __cdecl ReviseLevelGrowExcelConfigMgr::~ReviseLevelGrowExcelConfigMgr(ReviseLevelGrowExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReviseLevelGrowExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ReviseLevelGrowExcelConfigMgrBase = v1;
  data::ReviseLevelGrowExcelConfigMgrBase::~ReviseLevelGrowExcelConfigMgrBase(this);
};
