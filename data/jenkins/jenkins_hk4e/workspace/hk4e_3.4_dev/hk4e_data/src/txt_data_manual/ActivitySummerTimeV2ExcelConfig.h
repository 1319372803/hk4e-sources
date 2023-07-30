// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.h

// Line 19: range 000000000DE53DAE-000000000DE53E31
void __cdecl ActivitySummerTimeV2ExcelConfigMgr::ActivitySummerTimeV2ExcelConfigMgr(
        ActivitySummerTimeV2ExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivitySummerTimeV2ExcelConfigMgrBase::ActivitySummerTimeV2ExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivitySummerTimeV2ExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySummerTimeV2ExcelConfigMgrBase = v1;
  std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::map(&this->dungeon_id_2_dungeon_excel_config_map);
  std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::map(&this->gallery_id_2_boat_excel_config_map);
  std::set<unsigned int>::set(&this->cycle_dungeon_id_set);
};

// Line 19: range 000000000D81F1A0-000000000D81F223
void __cdecl ActivitySummerTimeV2ExcelConfigMgr::~ActivitySummerTimeV2ExcelConfigMgr(
        ActivitySummerTimeV2ExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivitySummerTimeV2ExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySummerTimeV2ExcelConfigMgrBase = v1;
  std::set<unsigned int>::~set(&this->cycle_dungeon_id_set);
  std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::~map(&this->gallery_id_2_boat_excel_config_map);
  std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::~map(&this->dungeon_id_2_dungeon_excel_config_map);
  data::ActivitySummerTimeV2ExcelConfigMgrBase::~ActivitySummerTimeV2ExcelConfigMgrBase(this);
};
