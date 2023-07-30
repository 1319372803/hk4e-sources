// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MonsterExcelConfig.h

// Line 19: range 000000000DE0E51C-000000000DE0E641
void __cdecl MonsterExcelConfigMgr::MonsterExcelConfigMgr(MonsterExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::MonsterExcelConfigMgrBase::MonsterExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'MonsterExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->monster_tag_map);
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->monster_tag_hash_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->monster_sub_tag_map);
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->monster_sub_tag_hash_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->exclude_weathers_map_);
  std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::unordered_map(&this->base_level_prop_map_);
  std::unordered_map<std::string,data::ItemLimitType>::unordered_map(&this->drop_tag_item_limit_type_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->special_name_map_);
  std::set<unsigned int>::set(&this->special_name_lab_id_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->animal_id_describe_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->describe_id_to_monster_id_set_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::unordered_map(&this->capture_map_);
};

// Line 19: range 000000000D80F8E4-000000000D80FA09
void __cdecl MonsterExcelConfigMgr::~MonsterExcelConfigMgr(MonsterExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MonsterExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::~unordered_map(&this->capture_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->describe_id_to_monster_id_set_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->animal_id_describe_id_map_);
  std::set<unsigned int>::~set(&this->special_name_lab_id_set_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->special_name_map_);
  std::unordered_map<std::string,data::ItemLimitType>::~unordered_map(&this->drop_tag_item_limit_type_map_);
  std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::~unordered_map(&this->base_level_prop_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->exclude_weathers_map_);
  std::unordered_map<unsigned int,std::string>::~unordered_map(&this->monster_sub_tag_hash_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->monster_sub_tag_map);
  std::unordered_map<unsigned int,std::string>::~unordered_map(&this->monster_tag_hash_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->monster_tag_map);
  data::MonsterExcelConfigMgrBase::~MonsterExcelConfigMgrBase(this);
};
