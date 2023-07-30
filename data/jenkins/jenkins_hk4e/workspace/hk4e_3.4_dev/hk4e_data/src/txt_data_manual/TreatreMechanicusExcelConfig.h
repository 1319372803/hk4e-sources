// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TreatreMechanicusExcelConfig.h

// Line 18: range 000000000DE32006-000000000DE32114
void __cdecl TreatreMechanicusExcelConfigMgr::TreatreMechanicusExcelConfigMgr(
        TreatreMechanicusExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::TreatreMechanicusExcelConfigMgrBase::TreatreMechanicusExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'TreatreMechanicusExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreatreMechanicusExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::unordered_map(&this->gear_levelup_config_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_difficult_level_map);
  std::unordered_map<int,std::set<unsigned int>>::unordered_map(&this->type_to_cards_map);
  std::set<unsigned int>::set(&this->in_battle_watcher_set);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_to_coin_rate);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->dungeon_default_gears_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->dungeon_gear_limit_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_normal_difficult_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_normal_difficult_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_normal_difficult_level);
  }
  this->max_normal_difficult_level = 0;
};

// Line 18: range 000000000D817D68-000000000D817E33
void __cdecl TreatreMechanicusExcelConfigMgr::~TreatreMechanicusExcelConfigMgr(
        TreatreMechanicusExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TreatreMechanicusExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreatreMechanicusExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_gear_limit_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->dungeon_default_gears_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_to_coin_rate);
  std::set<unsigned int>::~set(&this->in_battle_watcher_set);
  std::unordered_map<int,std::set<unsigned int>>::~unordered_map(&this->type_to_cards_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->dungeon_difficult_level_map);
  std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::~unordered_map(&this->gear_levelup_config_map);
  data::TreatreMechanicusExcelConfigMgrBase::~TreatreMechanicusExcelConfigMgrBase(this);
};
