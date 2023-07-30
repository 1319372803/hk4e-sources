// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CustomDungeonExcelConfig.h

// Line 38: range 000000000F77690E-000000000F776920
bool __cdecl CustomDungeonExcelConfigMgr::isAdventureDungeon(uint64_t dungeon_guid)
{
  return (_DWORD)dungeon_guid == 0;
};
