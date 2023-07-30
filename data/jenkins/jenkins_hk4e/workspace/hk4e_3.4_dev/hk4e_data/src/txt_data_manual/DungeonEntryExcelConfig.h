// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DungeonEntryExcelConfig.h

// Line 18: range 000000000DE1D56E-000000000DE1D5DB
void __cdecl DungeonEntryExcelConfigMgr::DungeonEntryExcelConfigMgr(DungeonEntryExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::DungeonEntryDataConfigMgrBase::DungeonEntryDataConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'DungeonEntryExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonEntryDataConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->scene_dungeon_entry_id_map);
  std::unordered_set<unsigned int>::unordered_set(&this->trial_dungeon_id_set);
};

// Line 18: range 000000000D813326-000000000D813393
void __cdecl DungeonEntryExcelConfigMgr::~DungeonEntryExcelConfigMgr(DungeonEntryExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonEntryExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonEntryDataConfigMgrBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->trial_dungeon_id_set);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->scene_dungeon_entry_id_map);
  data::DungeonEntryDataConfigMgrBase::~DungeonEntryDataConfigMgrBase(this);
};
