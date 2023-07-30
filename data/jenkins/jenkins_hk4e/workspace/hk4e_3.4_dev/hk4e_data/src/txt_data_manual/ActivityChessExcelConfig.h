// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityChessExcelConfig.h

// Line 17: range 000000000DE3F410-000000000DE3F57B
void __cdecl ActivityChessExcelConfigMgr::ActivityChessExcelConfigMgr(ActivityChessExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityChessExcelConfigMgrBase::ActivityChessExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityChessExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityChessExcelConfigMgrBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_chess_level_);
  }
  this->max_chess_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_day_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_day_index_);
  }
  this->max_day_index_ = 0;
  std::map<unsigned int,data::ActivityChessMapExcelConfig>::map(&this->chess_map_config_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->level_2_quality_weight_map_);
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::map(&this->level_2_normal_card_pool_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->level_2_curse_card_weight_map_);
  std::map<unsigned int,unsigned int>::map(&this->level_2_safe_card_num_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_max_tower_num_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->gear_ban_dungeons_map_);
  std::set<unsigned int>::set(&this->tower_gadgets_set_);
};

// Line 17: range 000000000D81AA32-000000000D81AB0F
void __cdecl ActivityChessExcelConfigMgr::~ActivityChessExcelConfigMgr(ActivityChessExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityChessExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityChessExcelConfigMgrBase = v1;
  std::set<unsigned int>::~set(&this->tower_gadgets_set_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->gear_ban_dungeons_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_max_tower_num_map_);
  std::map<unsigned int,unsigned int>::~map(&this->level_2_safe_card_num_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->level_2_curse_card_weight_map_);
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::~map(&this->level_2_normal_card_pool_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->level_2_quality_weight_map_);
  std::map<unsigned int,data::ActivityChessMapExcelConfig>::~map(&this->chess_map_config_map_);
  data::ActivityChessExcelConfigMgrBase::~ActivityChessExcelConfigMgrBase(this);
};
