// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityChannellerSlabExcelConfig.h

// Line 30: range 000000000DE39F42-000000000DE3A031
void __cdecl ActivityChannellerSlabExcelConfigMgr::ActivityChannellerSlabExcelConfigMgr(
        ActivityChannellerSlabExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityChannellerSlabExcelConfigMgrBase::ActivityChannellerSlabExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityChannellerSlabExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityChannellerSlabExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::unordered_map(&this->group_info_map);
  std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::unordered_map(&this->stage_config_map);
  std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::map(&this->stage_rounds_level_config_map);
  std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig const*>::unordered_map(&this->dungeon_config_map);
  std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::unordered_map(&this->loop_dungeon_preview_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->loop_dungeon_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>>>::unordered_map(&this->loop_dungeon_difficulty_map);
  std::map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::map(&this->buff_energy_config_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->buff_quality_cost_map);
};

// Line 30: range 000000000D8196F0-000000000D8197DF
void __cdecl ActivityChannellerSlabExcelConfigMgr::~ActivityChannellerSlabExcelConfigMgr(
        ActivityChannellerSlabExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityChannellerSlabExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityChannellerSlabExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->buff_quality_cost_map);
  std::map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::~map(&this->buff_energy_config_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>>>::~unordered_map(&this->loop_dungeon_difficulty_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->loop_dungeon_map);
  std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::~unordered_map(&this->loop_dungeon_preview_map);
  std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig const*>::~unordered_map(&this->dungeon_config_map);
  std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::~map(&this->stage_rounds_level_config_map);
  std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::~unordered_map(&this->stage_config_map);
  std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::~unordered_map(&this->group_info_map);
  data::ActivityChannellerSlabExcelConfigMgrBase::~ActivityChannellerSlabExcelConfigMgrBase(this);
};
