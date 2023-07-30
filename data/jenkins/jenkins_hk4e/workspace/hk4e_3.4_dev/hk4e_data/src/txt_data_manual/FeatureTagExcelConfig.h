// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/FeatureTagExcelConfig.h

// Line 18: range 000000000DE295C8-000000000DE29615
void __cdecl FeatureTagExcelConfigMgr::FeatureTagExcelConfigMgr(FeatureTagExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::FeatureTagExcelConfigMgrBase::FeatureTagExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'FeatureTagExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FeatureTagExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D815D2A-000000000D815D77
void __cdecl FeatureTagExcelConfigMgr::~FeatureTagExcelConfigMgr(FeatureTagExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FeatureTagExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FeatureTagExcelConfigMgrBase = v1;
  data::FeatureTagExcelConfigMgrBase::~FeatureTagExcelConfigMgrBase(this);
};
