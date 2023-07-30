// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySpiceExcelConfig.h

// Line 19: range 000000000DE50AA2-000000000DE50B13
void __cdecl ActivitySpiceExcelConfigMgr::ActivitySpiceExcelConfigMgr(ActivitySpiceExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivitySpiceExcelConfigMgrBase::ActivitySpiceExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivitySpiceExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySpiceExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->stage_material_data_map_);
  std::map<unsigned int,data::ActivitySpiceExcelConfig const*>::map(&this->activity_spice_config_map_);
};

// Line 19: range 000000000D81E646-000000000D81E6B7
void __cdecl ActivitySpiceExcelConfigMgr::~ActivitySpiceExcelConfigMgr(ActivitySpiceExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivitySpiceExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySpiceExcelConfigMgrBase = v1;
  std::map<unsigned int,data::ActivitySpiceExcelConfig const*>::~map(&this->activity_spice_config_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->stage_material_data_map_);
  data::ActivitySpiceExcelConfigMgrBase::~ActivitySpiceExcelConfigMgrBase(this);
};
