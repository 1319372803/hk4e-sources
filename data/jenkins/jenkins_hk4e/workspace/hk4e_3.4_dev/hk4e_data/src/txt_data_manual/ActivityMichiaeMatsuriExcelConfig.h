// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.h

// Line 24: range 000000000DE4CCAC-000000000DE4CD65
void __cdecl ActivityMichiaeMatsuriExcelConfigMgr::ActivityMichiaeMatsuriExcelConfigMgr(
        ActivityMichiaeMatsuriExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityMichiaeMatsuriExcelConfigMgrBase::ActivityMichiaeMatsuriExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityMichiaeMatsuriExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMichiaeMatsuriExcelConfigMgrBase = v1;
  std::map<unsigned int,data::MichiaeOverallExcelConfig>::map(&this->michiae_preview_config_map_);
  std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::map(&this->michiae_dark_challenge_config_map_);
  std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::map(&this->michiae_battle_skill_config_map_);
  std::map<unsigned int,data::MichiaeBossChallengeExcelConfig>::map(&this->michiae_boss_challenge_config_map_);
  std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>>::map(&this->michiae_chest_group_config_to_pos_map_);
  std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::map(&this->michiae_challenge_group_to_pos_map_);
};

// Line 24: range 000000000D81D8C6-000000000D81D97F
void __cdecl ActivityMichiaeMatsuriExcelConfigMgr::~ActivityMichiaeMatsuriExcelConfigMgr(
        ActivityMichiaeMatsuriExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityMichiaeMatsuriExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMichiaeMatsuriExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::~map(&this->michiae_challenge_group_to_pos_map_);
  std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>>::~map(&this->michiae_chest_group_config_to_pos_map_);
  std::map<unsigned int,data::MichiaeBossChallengeExcelConfig>::~map(&this->michiae_boss_challenge_config_map_);
  std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::~map(&this->michiae_battle_skill_config_map_);
  std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::~map(&this->michiae_dark_challenge_config_map_);
  std::map<unsigned int,data::MichiaeOverallExcelConfig>::~map(&this->michiae_preview_config_map_);
  data::ActivityMichiaeMatsuriExcelConfigMgrBase::~ActivityMichiaeMatsuriExcelConfigMgrBase(this);
};
