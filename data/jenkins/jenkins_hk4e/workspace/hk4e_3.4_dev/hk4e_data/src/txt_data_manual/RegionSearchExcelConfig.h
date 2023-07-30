// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RegionSearchExcelConfig.h

// Line 18: range 000000000DE365A4-000000000DE36627
void __cdecl RegionSearchExcelConfigMgr::RegionSearchExcelConfigMgr(RegionSearchExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityRegionSearchMgrBase::ActivityRegionSearchMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'RegionSearchExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityRegionSearchMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->play_search_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->region_play_map);
  std::set<unsigned int>::set(&this->activity_cond_set);
};

// Line 18: range 000000000D818BE0-000000000D818C63
void __cdecl RegionSearchExcelConfigMgr::~RegionSearchExcelConfigMgr(RegionSearchExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RegionSearchExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityRegionSearchMgrBase = v1;
  std::set<unsigned int>::~set(&this->activity_cond_set);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->region_play_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->play_search_map);
  data::ActivityRegionSearchMgrBase::~ActivityRegionSearchMgrBase(this);
};
