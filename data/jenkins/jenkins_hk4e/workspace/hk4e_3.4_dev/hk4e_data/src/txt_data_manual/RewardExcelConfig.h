// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RewardExcelConfig.h

// Line 19: range 000000000DE1591C-000000000DE15969
void __cdecl RewardExcelConfigMgr::RewardExcelConfigMgr(RewardExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::RewardExcelConfigMgrBase::RewardExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'RewardExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RewardExcelConfigMgrBase = v1;
};

// Line 19: range 000000000D8113E2-000000000D81142F
void __cdecl RewardExcelConfigMgr::~RewardExcelConfigMgr(RewardExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RewardExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RewardExcelConfigMgrBase = v1;
  data::RewardExcelConfigMgrBase::~RewardExcelConfigMgrBase(this);
};
