// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GCGPlayingExcelConfig.h

// Line 17: range 000000000DE4B9AC-000000000DE4BB61
void __cdecl GCGPlayingExcelConfigMgr::GCGPlayingExcelConfigMgr(GCGPlayingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::GCGPlayingExcelConfigMgrBase::GCGPlayingExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGPlayingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPlayingExcelConfigMgrBase = v1;
  std::set<unsigned int>::set(&this->level_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->repeatable_level_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->valid_group_level_set_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->level_challenge_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->level_id_2_group_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->group_level_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_id_2_challenge_level_map_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->cond_quest_character_map_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->quest_unlock_character_map_);
  std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::map(&this->match_rank_map_);
  std::map<unsigned int,unsigned int>::map(&this->world_level_2_config_map_);
  std::map<bool,std::vector<unsigned int>>::map(&this->match_ai_name_map_);
  std::map<unsigned int,unsigned int>::map(&this->quest_2_quest_level_map_);
  std::map<unsigned int,unsigned int>::map(&this->quest_2_guide_group_map_);
  std::map<unsigned int,unsigned int>::map(&this->level_2_guide_group_map_);
  std::set<unsigned int>::set(&this->world_challenge_unlock_quest_set_);
  std::set<unsigned int>::set(&this->world_challenge_unlock_level_set_);
  std::set<unsigned int>::set(&this->boss_challenge_unlock_quest_set_);
  std::set<unsigned int>::set(&this->boss_challenge_unlock_level_set_);
  std::set<unsigned int>::set(&this->tavern_challenge_unlock_level_set_);
};

// Line 17: range 000000000D81D3A0-000000000D81D555
void __cdecl GCGPlayingExcelConfigMgr::~GCGPlayingExcelConfigMgr(GCGPlayingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPlayingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPlayingExcelConfigMgrBase = v1;
  std::set<unsigned int>::~set(&this->tavern_challenge_unlock_level_set_);
  std::set<unsigned int>::~set(&this->boss_challenge_unlock_level_set_);
  std::set<unsigned int>::~set(&this->boss_challenge_unlock_quest_set_);
  std::set<unsigned int>::~set(&this->world_challenge_unlock_level_set_);
  std::set<unsigned int>::~set(&this->world_challenge_unlock_quest_set_);
  std::map<unsigned int,unsigned int>::~map(&this->level_2_guide_group_map_);
  std::map<unsigned int,unsigned int>::~map(&this->quest_2_guide_group_map_);
  std::map<unsigned int,unsigned int>::~map(&this->quest_2_quest_level_map_);
  std::map<bool,std::vector<unsigned int>>::~map(&this->match_ai_name_map_);
  std::map<unsigned int,unsigned int>::~map(&this->world_level_2_config_map_);
  std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::~map(&this->match_rank_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->quest_unlock_character_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->cond_quest_character_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->group_id_2_challenge_level_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->group_level_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->level_id_2_group_id_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->level_challenge_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->valid_group_level_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->repeatable_level_set_);
  std::set<unsigned int>::~set(&this->level_set_);
  data::GCGPlayingExcelConfigMgrBase::~GCGPlayingExcelConfigMgrBase(this);
};
