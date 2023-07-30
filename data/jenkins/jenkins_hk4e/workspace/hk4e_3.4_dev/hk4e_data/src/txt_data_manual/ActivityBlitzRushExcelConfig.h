// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBlitzRushExcelConfig.h

// Line 18: range 000000000DE3E7CA-000000000DE3E83B
void __cdecl ActivityBlitzRushExcelConfigMgr::ActivityBlitzRushExcelConfigMgr(
        ActivityBlitzRushExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityBlitzRushExcelConfigMgrBase::ActivityBlitzRushExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityBlitzRushExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityBlitzRushExcelConfigMgrBase = v1;
  std::map<unsigned int,data::BlitzRushExcelConfig>::map(&this->blitz_rush_preview_config_map_);
  std::map<unsigned int,data::BlitzRushParkourExcelConfig>::map(&this->group_id_to_parkour_config_map_);
};

// Line 18: range 000000000D81A7F8-000000000D81A869
void __cdecl ActivityBlitzRushExcelConfigMgr::~ActivityBlitzRushExcelConfigMgr(
        ActivityBlitzRushExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityBlitzRushExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityBlitzRushExcelConfigMgrBase = v1;
  std::map<unsigned int,data::BlitzRushParkourExcelConfig>::~map(&this->group_id_to_parkour_config_map_);
  std::map<unsigned int,data::BlitzRushExcelConfig>::~map(&this->blitz_rush_preview_config_map_);
  data::ActivityBlitzRushExcelConfigMgrBase::~ActivityBlitzRushExcelConfigMgrBase(this);
};
