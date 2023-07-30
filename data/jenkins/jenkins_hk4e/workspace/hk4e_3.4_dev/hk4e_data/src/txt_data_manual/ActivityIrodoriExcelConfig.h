// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityIrodoriExcelConfig.h

// Line 19: range 000000000DE5038E-000000000DE5047D
void __cdecl ActivityIrodoriExcelConfigMgr::ActivityIrodoriExcelConfigMgr(ActivityIrodoriExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityIrodoriExcelConfigMgrBase::ActivityIrodoriExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityIrodoriExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityIrodoriExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gadget_id_theme_id_map_);
  std::set<unsigned int>::set(&this->tower_gadgets_set_);
  std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::unordered_map(&this->dungeon_id_to_level_config_ptr_map_);
  std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig const*>::unordered_map(&this->dungeon_id_to_map_config_ptr_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->theme_index_set_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gadget_id_to_gear_id_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->activity_id_to_chess_open_day_map_);
  std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::unordered_map(&this->map_id_to_entrance_detail_info_map_);
  std::map<unsigned int,std::map<std::string,unsigned int>>::map(&this->group_answer_map_);
};

// Line 19: range 000000000D81E446-000000000D81E535
void __cdecl ActivityIrodoriExcelConfigMgr::~ActivityIrodoriExcelConfigMgr(ActivityIrodoriExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityIrodoriExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityIrodoriExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<std::string,unsigned int>>::~map(&this->group_answer_map_);
  std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::~unordered_map(&this->map_id_to_entrance_detail_info_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->activity_id_to_chess_open_day_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gadget_id_to_gear_id_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->theme_index_set_map_);
  std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig const*>::~unordered_map(&this->dungeon_id_to_map_config_ptr_map_);
  std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::~unordered_map(&this->dungeon_id_to_level_config_ptr_map_);
  std::set<unsigned int>::~set(&this->tower_gadgets_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gadget_id_theme_id_map_);
  data::ActivityIrodoriExcelConfigMgrBase::~ActivityIrodoriExcelConfigMgrBase(this);
};
