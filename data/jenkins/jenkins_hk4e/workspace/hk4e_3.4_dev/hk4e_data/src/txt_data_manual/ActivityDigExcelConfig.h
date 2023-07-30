// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityDigExcelConfig.h

// Line 17: range 000000000DE4553E-000000000DE4559B
void __cdecl ActivityDigExcelConfigMgr::ActivityDigExcelConfigMgr(ActivityDigExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityDigExcelConfigMgrBase::ActivityDigExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityDigExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityDigExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->stage_group_link_map);
};

// Line 17: range 000000000D81C020-000000000D81C07D
void __cdecl ActivityDigExcelConfigMgr::~ActivityDigExcelConfigMgr(ActivityDigExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityDigExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityDigExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->stage_group_link_map);
  data::ActivityDigExcelConfigMgrBase::~ActivityDigExcelConfigMgrBase(this);
};
