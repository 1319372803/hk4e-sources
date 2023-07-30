// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityRogueDiaryExcelConfig.h

// Line 21: range 000000000DE52A82-000000000DE52B5F
void __cdecl ActivityRogueDiaryExcelConfigMgr::ActivityRogueDiaryExcelConfigMgr(
        ActivityRogueDiaryExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityRogueDiaryExcelConfigMgrBase::ActivityRogueDiaryExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityRogueDiaryExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityRogueDiaryExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_round_count_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>>::unordered_map(&this->round_rand_vec_pair_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->dungeon_round_room_count_map);
  std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::unordered_map(&this->depot_card_type_weight_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->depot_card_count_map);
  std::map<unsigned int,unsigned int>::map(&this->card_rand_weight_map);
  std::map<unsigned int,unsigned int>::map(&this->card_retry_rand_weight_map);
  std::unordered_map<data::RogueDiaryResourceType,unsigned int>::unordered_map(&this->resource_cost_map);
};

// Line 21: range 000000000D81ECD2-000000000D81EDAF
void __cdecl ActivityRogueDiaryExcelConfigMgr::~ActivityRogueDiaryExcelConfigMgr(
        ActivityRogueDiaryExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityRogueDiaryExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityRogueDiaryExcelConfigMgrBase = v1;
  std::unordered_map<data::RogueDiaryResourceType,unsigned int>::~unordered_map(&this->resource_cost_map);
  std::map<unsigned int,unsigned int>::~map(&this->card_retry_rand_weight_map);
  std::map<unsigned int,unsigned int>::~map(&this->card_rand_weight_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->depot_card_count_map);
  std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::~unordered_map(&this->depot_card_type_weight_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->dungeon_round_room_count_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>>::~unordered_map(&this->round_rand_vec_pair_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_round_count_map);
  data::ActivityRogueDiaryExcelConfigMgrBase::~ActivityRogueDiaryExcelConfigMgrBase(this);
};
