// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CoopExcelConfig.h

// Line 16: range 000000000DE2AA22-000000000DE2AC31
void __cdecl CoopExcelConfigMgr::CoopExcelConfigMgr(CoopExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::CoopExcelConfigMgrBase::CoopExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'CoopExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CoopExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->main_coop_to_series_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->series_to_main_coop_map);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->time_to_chapter_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->avatar_chapter_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->chapter_unlock_item_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->cg_to_chapter_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->chapter_cg_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->point_to_cg_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->chapter_reward_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->coop_reward_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->chapter_point_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->chapter_start_point_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->chapter_end_point_map);
  std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::unordered_map(&this->chapter_point_edge_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->point_to_chapter_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->point_to_point_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->point_accept_quest_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->quest_start_point_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->quest_finish_point_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->main_coop_finish_point_map);
  std::set<unsigned int>::set(&this->cond_player_level_chapter_set);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->cond_avatar_fetter_level_chapter_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->cond_quest_chapter_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->cond_coop_point_chapter_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->cond_chapter_end_chapter_map);
};

// Line 16: range 000000000D816236-000000000D816445
void __cdecl CoopExcelConfigMgr::~CoopExcelConfigMgr(CoopExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CoopExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CoopExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->cond_chapter_end_chapter_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->cond_coop_point_chapter_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->cond_quest_chapter_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->cond_avatar_fetter_level_chapter_map);
  std::set<unsigned int>::~set(&this->cond_player_level_chapter_set);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->main_coop_finish_point_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->quest_finish_point_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->quest_start_point_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->point_accept_quest_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->point_to_point_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->point_to_chapter_map);
  std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::~unordered_map(&this->chapter_point_edge_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->chapter_end_point_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->chapter_start_point_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->chapter_point_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->coop_reward_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->chapter_reward_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->point_to_cg_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->chapter_cg_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->cg_to_chapter_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->chapter_unlock_item_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->avatar_chapter_map);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->time_to_chapter_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->series_to_main_coop_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->main_coop_to_series_map);
  data::CoopExcelConfigMgrBase::~CoopExcelConfigMgrBase(this);
};
