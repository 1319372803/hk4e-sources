// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DungeonElementChallengeExcelConfig.h

// Line 18: range 000000000DE2E40A-000000000DE2E467
void __cdecl DungeonElementChallengeExcelConfigMgr::DungeonElementChallengeExcelConfigMgr(
        DungeonElementChallengeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::DungeonElementChallengeExcelConfigMgrBase::DungeonElementChallengeExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'DungeonElementChallengeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonElementChallengeExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->dungeon_id_to_trial_map);
};

// Line 18: range 000000000D817154-000000000D8171B1
void __cdecl DungeonElementChallengeExcelConfigMgr::~DungeonElementChallengeExcelConfigMgr(
        DungeonElementChallengeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonElementChallengeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DungeonElementChallengeExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->dungeon_id_to_trial_map);
  data::DungeonElementChallengeExcelConfigMgrBase::~DungeonElementChallengeExcelConfigMgrBase(this);
};
