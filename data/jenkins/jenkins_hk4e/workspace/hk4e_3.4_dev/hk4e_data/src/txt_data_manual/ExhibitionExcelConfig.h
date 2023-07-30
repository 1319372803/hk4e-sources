// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ExhibitionExcelConfig.h

// Line 22: range 000000000DE3C21E-000000000DE3C39D
void __cdecl ExhibitionExcelConfigMgr::ExhibitionExcelConfigMgr(ExhibitionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ExhibitionExcelConfigMgrBase::ExhibitionExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ExhibitionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ExhibitionExcelConfigMgrBase = v1;
  std::unordered_map<std::string,unsigned int>::unordered_map(&this->lua_trigger_key_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->series_exhibition_map);
  std::unordered_map<std::string,std::set<unsigned int>>::unordered_map(&this->lua_trigger_exhibition_map);
  std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::unordered_map(&this->server_trigger_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->monster_id_to_exhibition_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::set<unsigned int>>>>::unordered_map(&this->group_config_id_to_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->series_to_score_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->series_to_card_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->activity_series_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_series_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->series_to_list_data_map);
  std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::allocator<std::pair<std::pair<unsigned int,data::ExhibitionServerTriggerType> const,std::set<unsigned int>>>>::unordered_map(&this->param_trigger_type_to_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->exhibiton_to_reaction_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->monster_id_to_damage_percentage_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->gallery_id_to_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->group_id_to_exhibition_map);
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::unordered_map(&this->group_id_to_exhibition_time_map);
};

// Line 22: range 000000000D819DC4-000000000D819F43
void __cdecl ExhibitionExcelConfigMgr::~ExhibitionExcelConfigMgr(ExhibitionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ExhibitionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ExhibitionExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::~unordered_map(&this->group_id_to_exhibition_time_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->group_id_to_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->gallery_id_to_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->monster_id_to_damage_percentage_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->exhibiton_to_reaction_map);
  std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::allocator<std::pair<std::pair<unsigned int,data::ExhibitionServerTriggerType> const,std::set<unsigned int>>>>::~unordered_map(&this->param_trigger_type_to_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->series_to_list_data_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_series_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->activity_series_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->series_to_card_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->series_to_score_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::set<unsigned int>>>>::~unordered_map(&this->group_config_id_to_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->monster_id_to_exhibition_map);
  std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::~unordered_map(&this->server_trigger_exhibition_map);
  std::unordered_map<std::string,std::set<unsigned int>>::~unordered_map(&this->lua_trigger_exhibition_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->series_exhibition_map);
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->lua_trigger_key_map);
  data::ExhibitionExcelConfigMgrBase::~ExhibitionExcelConfigMgrBase(this);
};
