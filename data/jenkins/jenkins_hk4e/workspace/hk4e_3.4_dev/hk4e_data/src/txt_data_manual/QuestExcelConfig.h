// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/QuestExcelConfig.h

// Line 18: range 000000000DE1078A-000000000DE109E1
void __cdecl QuestExcelConfigMgr::QuestExcelConfigMgr(QuestExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::QuestExcelConfigMgrBase::QuestExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'QuestExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_QuestExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::map<unsigned int,data::TalkExcelConfig>>::unordered_map(&this->npc_talk_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->talk_series_map);
  std::unordered_map<data::QuestCondType,std::set<unsigned int>>::unordered_map(&this->accept_cond_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->item_accept_cond_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->post_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->robot_post_quest_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::unordered_map<unsigned int,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::unordered_map<unsigned int,std::vector<unsigned int>>>>>::unordered_map(&this->entry_point_quest_config_map);
  std::set<unsigned int>::set(&this->mp_block_quest_set);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->exclusive_npc_quests);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->shared_npc_quests);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->trial_avatar_quest_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->quest_trial_avatar_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->entrance_child_quest_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->quest_need_start_time_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->parent_quest_series_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->exclusive_place_quests);
  std::unordered_set<unsigned int>::unordered_set(&this->coop_parent_quest_set);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->coop_point_to_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->quest_to_coop_point_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->coop_point_to_quest_max_order_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->coop_point_to_quest_min_order_map);
  std::unordered_set<unsigned int>::unordered_set(&this->quest_group_set);
  std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int,std::string>>>::unordered_map(&this->quest_scene_range_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->quest_group_gadget_set_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->quest_group_region_set_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->parent_quest_res_collection_map);
  std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::unordered_map(&this->rewind_bind_groups_map);
  std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>>::unordered_map(&this->entrance_random_template_map);
  std::unordered_map<unsigned int,std::vector<data::RandomQuestElemPoolExcelConfig>>::unordered_map(&this->elem_pool_map);
};

// Line 18: range 000000000D80FE88-000000000D8100DF
void __cdecl QuestExcelConfigMgr::~QuestExcelConfigMgr(QuestExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'QuestExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_QuestExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<data::RandomQuestElemPoolExcelConfig>>::~unordered_map(&this->elem_pool_map);
  std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>>::~unordered_map(&this->entrance_random_template_map);
  std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::~unordered_map(&this->rewind_bind_groups_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->parent_quest_res_collection_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->quest_group_region_set_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->quest_group_gadget_set_map);
  std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int,std::string>>>::~unordered_map(&this->quest_scene_range_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->quest_group_set);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->coop_point_to_quest_min_order_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->coop_point_to_quest_max_order_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->quest_to_coop_point_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->coop_point_to_quest_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->coop_parent_quest_set);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->exclusive_place_quests);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->parent_quest_series_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->quest_need_start_time_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->entrance_child_quest_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->quest_trial_avatar_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->trial_avatar_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->shared_npc_quests);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->exclusive_npc_quests);
  std::set<unsigned int>::~set(&this->mp_block_quest_set);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::unordered_map<unsigned int,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::unordered_map<unsigned int,std::vector<unsigned int>>>>>::~unordered_map(&this->entry_point_quest_config_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->robot_post_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->post_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->item_accept_cond_quest_map);
  std::unordered_map<data::QuestCondType,std::set<unsigned int>>::~unordered_map(&this->accept_cond_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->talk_series_map);
  std::unordered_map<unsigned int,std::map<unsigned int,data::TalkExcelConfig>>::~unordered_map(&this->npc_talk_map);
  data::QuestExcelConfigMgrBase::~QuestExcelConfigMgrBase(this);
};
