// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityRogueExcelConfig.h

// Line 31: range 000000000DE443A2-000000000DE4476B
void __cdecl ActivityRogueExcelConfigMgr::ActivityRogueExcelConfigMgr(ActivityRogueExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityRogueExcelConfigMgrBase::ActivityRogueExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityRogueExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityRogueExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->card_pool_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->card_to_exclusive_group_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->exclusive_group_to_card_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->card_to_related_group_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->related_group_to_card_map);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::unordered_map(&this->depot_card_type_prob_map);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::unordered_map(&this->basic_card_depot_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::unordered_map(&this->rune_card_depot_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::unordered_map(&this->elem_card_depot_map);
  std::vector<std::string>::vector(&this->team_ability_group_vec);
  std::vector<std::string>::vector(&this->avatar_ability_group_vec);
  std::unordered_map<std::string,float>::unordered_map(&this->team_sgv_value_map);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map(&this->curse_pool_weight_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->curse_count_map);
  std::unordered_map<std::string,unsigned int>::unordered_map(&this->sgv_to_card_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->dungeon_curse_depot_prob_map);
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::unordered_map(&this->dungeon_cell_depot_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<unsigned int,unsigned int>>>>::unordered_map(&this->dungeon_stage_level_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->dungeon_cell_config_id_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->dungeon_cell_pair_config_id_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->dungeon_sequence_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->dungeon_sequence_pair_config_id_map_);
  std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig *>::map(&this->gadget_type_config_map_);
  std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::map(&this->gagdet_type_state_val_map_);
  std::map<data::RogueGadgetDirType,unsigned int>::map(&this->door_dir_rotation_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::unordered_map(&this->cell_adj_dir_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_id_2_cell_config_id_map_);
  std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::unordered_map(&this->dungeon_monster_pool_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>>>>::unordered_map(&this->stage_level_token_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->stage_unlock_rune_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->stage_first_pass_reward_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->stage_pre_quest_map);
  std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::unordered_map(&this->shikigami_level_cost_map);
  std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::unordered_map(&this->shikigami_level_unlock_map);
  std::string::basic_string(&this->noheal_avatar_sgv_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->noheal_avatar_sgv_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->noheal_avatar_sgv_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->noheal_avatar_sgv_value);
  }
  this->noheal_avatar_sgv_value = 0.0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_id_2_gadget_weight_config_map);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map(&this->dungeon_trap_gadget_weight_map);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map(&this->dungeon_ball_gadget_weight_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->dungeon_refresh_cost_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->stage_ssr_max_rand_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_refresh_free_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_refresh_free_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_refresh_free_count);
  }
  this->max_refresh_free_count = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_init_cell_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_boss_group_map);
};

// Line 31: range 000000000D81B918-000000000D81BC59
void __cdecl ActivityRogueExcelConfigMgr::~ActivityRogueExcelConfigMgr(ActivityRogueExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityRogueExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityRogueExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_boss_group_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_init_cell_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->stage_ssr_max_rand_count_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->dungeon_refresh_cost_map);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map(&this->dungeon_ball_gadget_weight_map);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map(&this->dungeon_trap_gadget_weight_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_id_2_gadget_weight_config_map);
  std::string::~string(&this->noheal_avatar_sgv_key);
  std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::~unordered_map(&this->shikigami_level_unlock_map);
  std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::~unordered_map(&this->shikigami_level_cost_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->stage_pre_quest_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->stage_first_pass_reward_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->stage_unlock_rune_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>>>>::~unordered_map(&this->stage_level_token_map_);
  std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::~unordered_map(&this->dungeon_monster_pool_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->group_id_2_cell_config_id_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::~unordered_map(&this->cell_adj_dir_map_);
  std::map<data::RogueGadgetDirType,unsigned int>::~map(&this->door_dir_rotation_map_);
  std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::~map(&this->gagdet_type_state_val_map_);
  std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig *>::~map(&this->gadget_type_config_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->dungeon_sequence_pair_config_id_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->dungeon_sequence_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->dungeon_cell_pair_config_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->dungeon_cell_config_id_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<unsigned int,unsigned int>>>>::~unordered_map(&this->dungeon_stage_level_map_);
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::~unordered_map(&this->dungeon_cell_depot_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->dungeon_curse_depot_prob_map);
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->sgv_to_card_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->curse_count_map);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map(&this->curse_pool_weight_map);
  std::unordered_map<std::string,float>::~unordered_map(&this->team_sgv_value_map);
  std::vector<std::string>::~vector(&this->avatar_ability_group_vec);
  std::vector<std::string>::~vector(&this->team_ability_group_vec);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::~unordered_map(&this->elem_card_depot_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::~unordered_map(&this->rune_card_depot_map);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::~unordered_map(&this->basic_card_depot_map);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::~unordered_map(&this->depot_card_type_prob_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->related_group_to_card_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->card_to_related_group_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->exclusive_group_to_card_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->card_to_exclusive_group_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->card_pool_map);
  data::ActivityRogueExcelConfigMgrBase::~ActivityRogueExcelConfigMgrBase(this);
};
