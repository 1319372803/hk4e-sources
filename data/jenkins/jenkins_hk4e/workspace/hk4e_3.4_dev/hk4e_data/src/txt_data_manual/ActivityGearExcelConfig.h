// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityGearExcelConfig.h

// Line 18: range 000000000DE53808-000000000DE538BC
void __cdecl ActivityGearExcelConfigMgr::ActivityGearExcelConfigMgr(ActivityGearExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityGearExcelConfigMgrBase::ActivityGearExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityGearExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityGearExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->level_gear_data_map_);
  std::map<unsigned int,data::ActivityGearExcelConfig const*>::map(&this->activity_gear_config_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_state_trigger_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_state_trigger_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_state_trigger_id_);
  }
  this->quest_state_trigger_id_ = 0;
};

// Line 18: range 000000000D81F030-000000000D81F0A1
void __cdecl ActivityGearExcelConfigMgr::~ActivityGearExcelConfigMgr(ActivityGearExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityGearExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityGearExcelConfigMgrBase = v1;
  std::map<unsigned int,data::ActivityGearExcelConfig const*>::~map(&this->activity_gear_config_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->level_gear_data_map_);
  data::ActivityGearExcelConfigMgrBase::~ActivityGearExcelConfigMgrBase(this);
};
