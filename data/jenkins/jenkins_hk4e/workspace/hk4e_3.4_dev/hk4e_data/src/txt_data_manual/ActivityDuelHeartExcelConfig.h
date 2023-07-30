// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityDuelHeartExcelConfig.h

// Line 18: range 000000000DE5E02A-000000000DE5E089
void __cdecl ActivityDuelHeartExcelConfigMgr::ActivityDuelHeartExcelConfigMgr(
        ActivityDuelHeartExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityDuelHeartConfigMgrBase::ActivityDuelHeartConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityDuelHeartExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityDuelHeartConfigMgrBase = v1;
  std::map<unsigned int,std::set<data::DuelHeartDifficultyType>>::map(&this->level_difficulty_set_map_);
};

// Line 18: range 000000000D82156A-000000000D8215C9
void __cdecl ActivityDuelHeartExcelConfigMgr::~ActivityDuelHeartExcelConfigMgr(
        ActivityDuelHeartExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityDuelHeartExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityDuelHeartConfigMgrBase = v1;
  std::map<unsigned int,std::set<data::DuelHeartDifficultyType>>::~map(&this->level_difficulty_set_map_);
  data::ActivityDuelHeartConfigMgrBase::~ActivityDuelHeartConfigMgrBase(this);
};
