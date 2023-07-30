// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/LevelTagExcelConfig.h

// Line 17: range 000000000DE46A86-000000000DE46B3F
void __cdecl LevelTagExcelConfigMgr::LevelTagExcelConfigMgr(LevelTagExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::LevelTagExcelConfigMgrBase::LevelTagExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'LevelTagExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_LevelTagExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->level_tag_series_group_map_);
  std::set<unsigned int>::set(&this->initial_level_tag_id_set_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->related_group_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->level_tag_reset_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>::unordered_map(&this->level_tag_id_2_scene_tag_info_map_);
  std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::unordered_map(&this->level_tag_id_2_custom_gadget_map_);
};

// Line 17: range 000000000D81C4B4-000000000D81C56D
void __cdecl LevelTagExcelConfigMgr::~LevelTagExcelConfigMgr(LevelTagExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'LevelTagExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_LevelTagExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::~unordered_map(&this->level_tag_id_2_custom_gadget_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>::~unordered_map(&this->level_tag_id_2_scene_tag_info_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->level_tag_reset_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->related_group_map_);
  std::set<unsigned int>::~set(&this->initial_level_tag_id_set_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->level_tag_series_group_map_);
  data::LevelTagExcelConfigMgrBase::~LevelTagExcelConfigMgrBase(this);
};
