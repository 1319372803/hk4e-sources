// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityFungusFighterExcelConfig.h

// Line 19: range 000000000DE59EDA-000000000DE59F93
void __cdecl ActivityFungusFighterExcelConfigMgr::ActivityFungusFighterExcelConfigMgr(
        ActivityFungusFighterExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityFungusFighterExcelConfigMgrBase::ActivityFungusFighterExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityFungusFighterExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityFungusFighterExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::FungusExcelConfig>::unordered_map(&this->capture_monster_id_2_fungus_config_map_);
  std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::unordered_map(&this->fungus_id_2_cultivate_config_map_);
  std::map<unsigned int,data::FungusPlotDungeonExcelConfig>::map(&this->plot_dungeon_id_2_plot_config_map_);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->training_stage_2_dungeon_id_vec_map_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->camp_id_2_fungus_id_set_map_);
  std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::map(&this->pool_id_2_detail_info_map_);
};

// Line 19: range 000000000D8206F8-000000000D8207B1
void __cdecl ActivityFungusFighterExcelConfigMgr::~ActivityFungusFighterExcelConfigMgr(
        ActivityFungusFighterExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityFungusFighterExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityFungusFighterExcelConfigMgrBase = v1;
  std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::~map(&this->pool_id_2_detail_info_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->camp_id_2_fungus_id_set_map_);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->training_stage_2_dungeon_id_vec_map_);
  std::map<unsigned int,data::FungusPlotDungeonExcelConfig>::~map(&this->plot_dungeon_id_2_plot_config_map_);
  std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::~unordered_map(&this->fungus_id_2_cultivate_config_map_);
  std::unordered_map<unsigned int,data::FungusExcelConfig>::~unordered_map(&this->capture_monster_id_2_fungus_config_map_);
  data::ActivityFungusFighterExcelConfigMgrBase::~ActivityFungusFighterExcelConfigMgrBase(this);
};
