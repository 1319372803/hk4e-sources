// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/HuntingExcelConfig.h

// Line 20: range 000000000DE291C2-000000000DE292B1
void __cdecl HuntingExcelConfigMgr::HuntingExcelConfigMgr(HuntingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::HuntingExcelConfigMgrBase::HuntingExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'HuntingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HuntingExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::unordered_map(&this->city_difficulty_hunting_refresh_config_map_);
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::unordered_map(&this->city_difficulty_hunting_monster_config_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->hunting_region_clue_group_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,std::unordered_set<unsigned int>>>::unordered_map(&this->hunting_region_clue_type_group_map_);
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::unordered_map(&this->region_certain_monster_id_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->hunting_clue_monster_group_2_config_id_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->hunting_clue_monster_group_2_clue_config_id_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->hunting_clue_gather_group_2_config_id_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->hunting_clue_gather_2_clue_config_id_);
};

// Line 20: range 000000000D815BA0-000000000D815C8F
void __cdecl HuntingExcelConfigMgr::~HuntingExcelConfigMgr(HuntingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HuntingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HuntingExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->hunting_clue_gather_2_clue_config_id_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->hunting_clue_gather_group_2_config_id_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->hunting_clue_monster_group_2_clue_config_id_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->hunting_clue_monster_group_2_config_id_);
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::~unordered_map(&this->region_certain_monster_id_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,std::unordered_set<unsigned int>>>::~unordered_map(&this->hunting_region_clue_type_group_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->hunting_region_clue_group_map_);
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::~unordered_map(&this->city_difficulty_hunting_monster_config_map_);
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::~unordered_map(&this->city_difficulty_hunting_refresh_config_map_);
  data::HuntingExcelConfigMgrBase::~HuntingExcelConfigMgrBase(this);
};
