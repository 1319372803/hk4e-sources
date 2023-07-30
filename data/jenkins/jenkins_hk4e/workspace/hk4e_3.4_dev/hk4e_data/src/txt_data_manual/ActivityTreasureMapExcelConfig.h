// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityTreasureMapExcelConfig.h

// Line 18: range 000000000DE2DA30-000000000DE2DAE9
void __cdecl ActivityTreasureMapExcelConfigMgr::ActivityTreasureMapExcelConfigMgr(
        ActivityTreasureMapExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityTreasureMapExcelConfigMgrBase::ActivityTreasureMapExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityTreasureMapExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityTreasureMapExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig const*>::unordered_map(&this->bonus_region_unlock_map);
  std::unordered_map<unsigned int,std::vector<data::TreasureMapRegionExcelConfig const*>>::unordered_map(&this->mp_type_to_region_configs_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->region_groups_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_to_region_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_to_bonus_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->bonus_to_fragment_regions_map);
};

// Line 18: range 000000000D816E3C-000000000D816EF5
void __cdecl ActivityTreasureMapExcelConfigMgr::~ActivityTreasureMapExcelConfigMgr(
        ActivityTreasureMapExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityTreasureMapExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityTreasureMapExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->bonus_to_fragment_regions_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->group_to_bonus_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->group_to_region_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->region_groups_map);
  std::unordered_map<unsigned int,std::vector<data::TreasureMapRegionExcelConfig const*>>::~unordered_map(&this->mp_type_to_region_configs_map);
  std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig const*>::~unordered_map(&this->bonus_region_unlock_map);
  data::ActivityTreasureMapExcelConfigMgrBase::~ActivityTreasureMapExcelConfigMgrBase(this);
};
