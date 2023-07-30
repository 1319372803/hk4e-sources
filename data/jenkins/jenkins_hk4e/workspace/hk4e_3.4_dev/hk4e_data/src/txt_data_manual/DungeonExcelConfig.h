// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DungeonExcelConfig.h

// Line 19: range 000000000DE13A2A-000000000DE13ABF
void __cdecl DungeonExcelConfigMgr::DungeonExcelConfigMgr(DungeonExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::DungeonExcelConfigMgrBase::DungeonExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'DungeonExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->scene_dungeon_map);
  std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::unordered_map(&this->dungeon_level_config_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->serial_dungeons_map);
  std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::unordered_map(&this->daily_dungeon_map);
};

// Line 19: range 000000000D810ABE-000000000D810B53
void __cdecl DungeonExcelConfigMgr::~DungeonExcelConfigMgr(DungeonExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::~unordered_map(&this->daily_dungeon_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->serial_dungeons_map);
  std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::~unordered_map(&this->dungeon_level_config_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->scene_dungeon_map);
  data::DungeonExcelConfigMgrBase::~DungeonExcelConfigMgrBase(this);
};
