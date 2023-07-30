// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityLunaRiteExcelConfig.h

// Line 17: range 000000000DE40BE2-000000000DE40CD1
void __cdecl ActivityLunaRiteExcelConfigMgr::ActivityLunaRiteExcelConfigMgr(ActivityLunaRiteExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityLunaRiteExcelConfigMgrBase::ActivityLunaRiteExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityLunaRiteExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityLunaRiteExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->bundle_to_battle_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->next_bundle_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->searching_chest_group_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->searching_rune_group_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_to_area_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->bundle_to_area_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->searching_chest_num_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->searching_rune_num_map);
  std::unordered_set<unsigned int>::unordered_set(&this->searching_area_id_set);
};

// Line 17: range 000000000D81AFF6-000000000D81B0E5
void __cdecl ActivityLunaRiteExcelConfigMgr::~ActivityLunaRiteExcelConfigMgr(
        ActivityLunaRiteExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityLunaRiteExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityLunaRiteExcelConfigMgrBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->searching_area_id_set);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->searching_rune_num_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->searching_chest_num_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->bundle_to_area_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->group_to_area_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->searching_rune_group_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->searching_chest_group_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->next_bundle_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->bundle_to_battle_map);
  data::ActivityLunaRiteExcelConfigMgrBase::~ActivityLunaRiteExcelConfigMgrBase(this);
};
