// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityTreasureSeelieExcelConfig.h

// Line 19: range 000000000DE565B6-000000000DE56625
void __cdecl ActivityTreasureSeelieExcelConfigMgr::ActivityTreasureSeelieExcelConfigMgr(
        ActivityTreasureSeelieExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityTreasureSeelieExcelConfigMgrBase::ActivityTreasureSeelieExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityTreasureSeelieExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityTreasureSeelieExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->schedule_id_to_open_days_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>::unordered_map(&this->schedule_id_open_day_to_region_config_map_);
};

// Line 19: range 000000000D81FAF0-000000000D81FB5F
void __cdecl ActivityTreasureSeelieExcelConfigMgr::~ActivityTreasureSeelieExcelConfigMgr(
        ActivityTreasureSeelieExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityTreasureSeelieExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityTreasureSeelieExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>::~unordered_map(&this->schedule_id_open_day_to_region_config_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->schedule_id_to_open_days_map_);
  data::ActivityTreasureSeelieExcelConfigMgrBase::~ActivityTreasureSeelieExcelConfigMgrBase(this);
};
