// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RepuationExcelConfig.h

// Line 23: range 000000000DE29B68-000000000DE29C57
void __cdecl ReputationExcelConfigMgr::ReputationExcelConfigMgr(ReputationExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ReputationExcelConfigMgrBase::ReputationExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ReputationExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ReputationExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::map(&this->city_level_config_map);
  std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::map(&this->city_parent_quest_config_map);
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::map(&this->group_npc_request_map);
  std::map<unsigned int,unsigned int>::map(&this->group_2_city_map);
  std::map<unsigned int,unsigned int>::map(&this->request_quest_2_city_map);
  std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::map(&this->city_entrance_config_map);
  std::vector<unsigned int>::vector(&this->request_parent_quest_vec);
  std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::map(&this->city_explore_config_map);
  std::map<unsigned int,unsigned int>::map(&this->virtual_item_2_city_map);
};

// Line 23: range 000000000D815EE2-000000000D815FD1
void __cdecl ReputationExcelConfigMgr::~ReputationExcelConfigMgr(ReputationExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReputationExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ReputationExcelConfigMgrBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->virtual_item_2_city_map);
  std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::~map(&this->city_explore_config_map);
  std::vector<unsigned int>::~vector(&this->request_parent_quest_vec);
  std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::~map(&this->city_entrance_config_map);
  std::map<unsigned int,unsigned int>::~map(&this->request_quest_2_city_map);
  std::map<unsigned int,unsigned int>::~map(&this->group_2_city_map);
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::~map(&this->group_npc_request_map);
  std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::~map(&this->city_parent_quest_config_map);
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::~map(&this->city_level_config_map);
  data::ReputationExcelConfigMgrBase::~ReputationExcelConfigMgrBase(this);
};
