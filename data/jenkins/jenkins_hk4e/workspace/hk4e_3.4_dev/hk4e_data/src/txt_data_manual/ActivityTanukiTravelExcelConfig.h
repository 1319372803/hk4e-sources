// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityTanukiTravelExcelConfig.h

// Line 23: range 000000000DE4835E-000000000DE48403
void __cdecl ActivityTanukiTravelExcelConfigMgr::ActivityTanukiTravelExcelConfigMgr(
        ActivityTanukiTravelExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityTanukiTravelExcelConfigMgrBase::ActivityTanukiTravelExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityTanukiTravelExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityTanukiTravelExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->level_info_map);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->last_quest_level_map);
  std::map<unsigned int,TanukiTravelActivityInfo>::map(&this->tanuki_travel_activity_info_map);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->activity_parent_quest_map);
  std::map<unsigned int,unsigned int>::map(&this->activity_guide_map);
};

// Line 23: range 000000000D81CA96-000000000D81CB3B
void __cdecl ActivityTanukiTravelExcelConfigMgr::~ActivityTanukiTravelExcelConfigMgr(
        ActivityTanukiTravelExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityTanukiTravelExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityTanukiTravelExcelConfigMgrBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->activity_guide_map);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->activity_parent_quest_map);
  std::map<unsigned int,TanukiTravelActivityInfo>::~map(&this->tanuki_travel_activity_info_map);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->last_quest_level_map);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->level_info_map);
  data::ActivityTanukiTravelExcelConfigMgrBase::~ActivityTanukiTravelExcelConfigMgrBase(this);
};
