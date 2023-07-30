// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityDragonSpineExcelConfig.h

// Line 20: range 000000000DE2C00C-000000000DE2C108
void __cdecl ActivityDragonSpineExcelConfigMgr::ActivityDragonSpineExcelConfigMgr(
        ActivityDragonSpineExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityDragonSpineExcelConfigMgrBase::ActivityDragonSpineExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityDragonSpineExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityDragonSpineExcelConfigMgrBase = v1;
  std::map<unsigned int,std::set<unsigned int>>::map(&this->chapter_mission_map_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->chapter_watcher_map_);
  std::map<unsigned int,unsigned int>::map(&this->watcher_mission_map_);
  std::map<unsigned int,unsigned int>::map(&this->chapter_id_2_config_id_map_);
  std::map<unsigned int,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::map(&this->mission_ban_drop_config_map_);
  std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::map(&this->enhance_level_config_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_enhance_weapon_chapter_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_enhance_weapon_chapter_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_enhance_weapon_chapter_id_);
  }
  this->max_enhance_weapon_chapter_id_ = 0;
};

// Line 20: range 000000000D8168C8-000000000D816981
void __cdecl ActivityDragonSpineExcelConfigMgr::~ActivityDragonSpineExcelConfigMgr(
        ActivityDragonSpineExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityDragonSpineExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityDragonSpineExcelConfigMgrBase = v1;
  std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::~map(&this->enhance_level_config_map_);
  std::map<unsigned int,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::~map(&this->mission_ban_drop_config_map_);
  std::map<unsigned int,unsigned int>::~map(&this->chapter_id_2_config_id_map_);
  std::map<unsigned int,unsigned int>::~map(&this->watcher_mission_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->chapter_watcher_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->chapter_mission_map_);
  data::ActivityDragonSpineExcelConfigMgrBase::~ActivityDragonSpineExcelConfigMgrBase(this);
};
