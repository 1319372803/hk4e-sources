// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityRockBoardExploreExcelConfig.h

// Line 20: range 000000000DE57FA6-000000000DE58015
void __cdecl ActivityRockBoardExploreExcelConfigMgr::ActivityRockBoardExploreExcelConfigMgr(
        ActivityRockBoardExploreExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityRockBoardExploreExcelConfigMgrBase::ActivityRockBoardExploreExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityRockBoardExploreExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityRockBoardExploreExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->bundle_id_2_stage_id_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->quest_id_2_stage_id_map_);
};

// Line 20: range 000000000D820134-000000000D8201A3
void __cdecl ActivityRockBoardExploreExcelConfigMgr::~ActivityRockBoardExploreExcelConfigMgr(
        ActivityRockBoardExploreExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityRockBoardExploreExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityRockBoardExploreExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->quest_id_2_stage_id_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->bundle_id_2_stage_id_map_);
  data::ActivityRockBoardExploreExcelConfigMgrBase::~ActivityRockBoardExploreExcelConfigMgrBase(this);
};
