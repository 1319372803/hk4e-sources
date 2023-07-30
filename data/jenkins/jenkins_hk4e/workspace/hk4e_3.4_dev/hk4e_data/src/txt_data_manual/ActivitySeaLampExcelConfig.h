// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySeaLampExcelConfig.h

// Line 19: range 000000000DE1CB9E-000000000DE1CD18
void __cdecl ActivitySeaLampExcelConfigMgr::ActivitySeaLampExcelConfigMgr(ActivitySeaLampExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivitySeaLampExcelConfigMgrBase::ActivitySeaLampExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivitySeaLampExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySeaLampExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::map(&this->activity_section_config_map);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->activity_sorted_mini_parent_quest_list_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::unordered_map(&this->salvage_bundle_2_stage_play_type_map);
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::unordered_map(&this->salvage_stage_id_2_challenge_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->projection_level_to_stage_map);
  std::set<unsigned int>::set(&this->projection_level_set);
  std::set<unsigned int>::set(&this->projection_stage_set);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->projection_pre_level_map);
  std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::unordered_map(&this->salvage_challenge_info_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_gadget_id);
  }
  this->vehicle_gadget_id = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->fireworks_challenge_stage_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->fireworks_challenge_unlock_skill_map);
  std::string::basic_string(&this->back_player_pos_name);
  std::string::basic_string(&this->back_vehicle_pos_name);
};

// Line 19: range 000000000D812FEC-000000000D813123
void __cdecl ActivitySeaLampExcelConfigMgr::~ActivitySeaLampExcelConfigMgr(ActivitySeaLampExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivitySeaLampExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySeaLampExcelConfigMgrBase = v1;
  std::string::~string(&this->back_vehicle_pos_name);
  std::string::~string(&this->back_player_pos_name);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->fireworks_challenge_unlock_skill_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->fireworks_challenge_stage_map);
  std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::~unordered_map(&this->salvage_challenge_info_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->projection_pre_level_map);
  std::set<unsigned int>::~set(&this->projection_stage_set);
  std::set<unsigned int>::~set(&this->projection_level_set);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->projection_level_to_stage_map);
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::~unordered_map(&this->salvage_stage_id_2_challenge_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::~unordered_map(&this->salvage_bundle_2_stage_play_type_map);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->activity_sorted_mini_parent_quest_list_map);
  std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::~map(&this->activity_section_config_map);
  data::ActivitySeaLampExcelConfigMgrBase::~ActivitySeaLampExcelConfigMgrBase(this);
};
