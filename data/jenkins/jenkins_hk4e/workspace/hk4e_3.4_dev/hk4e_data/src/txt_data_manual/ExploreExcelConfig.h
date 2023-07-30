// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ExploreExcelConfig.h

// Line 20: range 000000000DE272F2-000000000DE2733F
void __cdecl ExploreExcelConfigMgr::ExploreExcelConfigMgr(ExploreExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ExploreExcelConfigMgrBase::ExploreExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ExploreExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ExploreExcelConfigMgrBase = v1;
};

// Line 20: range 000000000D815530-000000000D81557D
void __cdecl ExploreExcelConfigMgr::~ExploreExcelConfigMgr(ExploreExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ExploreExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ExploreExcelConfigMgrBase = v1;
  data::ExploreExcelConfigMgrBase::~ExploreExcelConfigMgrBase(this);
};
