// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/PlayerExcelConfig.h

// Line 18: range 000000000DE15252-000000000DE15323
void __cdecl PlayerExcelConfigMgr::PlayerExcelConfigMgr(PlayerExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::PlayerExcelConfigMgrBase::PlayerExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'PlayerExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerExcelConfigMgrBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_max_level);
  }
  this->player_max_level = 0;
  std::map<unsigned int,unsigned int>::map(&this->player_level_to_expedition_limit_add_map_);
  std::vector<std::pair<unsigned int,unsigned int>>::vector(&this->player_level_limit_vec_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_parent_quest_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_player_level_set_);
};

// Line 18: range 000000000D811148-000000000D8111DB
void __cdecl PlayerExcelConfigMgr::~PlayerExcelConfigMgr(PlayerExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerExcelConfigMgrBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_player_level_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_parent_quest_set_);
  std::vector<std::pair<unsigned int,unsigned int>>::~vector(&this->player_level_limit_vec_);
  std::map<unsigned int,unsigned int>::~map(&this->player_level_to_expedition_limit_add_map_);
  data::PlayerExcelConfigMgrBase::~PlayerExcelConfigMgrBase(this);
};
