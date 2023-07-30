// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MatchExcelConfig.h

// Line 26: range 000000000DE3B076-000000000DE3B12A
void __cdecl MatchExcelConfigMgr::MatchExcelConfigMgr(MatchExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::MatchExcelConfigMgrBase::MatchExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'MatchExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,MatchNewRuleConfig>::unordered_map(&this->dungeon_id_match_new_rule_config_map_);
  std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::unordered_map(&this->match_limit_config_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_punish_time);
  }
  this->max_punish_time = 0;
};

// Line 26: range 000000000D819B48-000000000D819BB9
void __cdecl MatchExcelConfigMgr::~MatchExcelConfigMgr(MatchExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MatchExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::~unordered_map(&this->match_limit_config_map);
  std::unordered_map<unsigned int,MatchNewRuleConfig>::~unordered_map(&this->dungeon_id_match_new_rule_config_map_);
  data::MatchExcelConfigMgrBase::~MatchExcelConfigMgrBase(this);
};
