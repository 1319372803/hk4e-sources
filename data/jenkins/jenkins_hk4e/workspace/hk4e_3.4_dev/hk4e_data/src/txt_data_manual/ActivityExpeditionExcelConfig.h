// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityExpeditionExcelConfig.h

// Line 17: range 000000000DE307C6-000000000DE3086D
void __cdecl ActivityExpeditionExcelConfigMgr::ActivityExpeditionExcelConfigMgr(
        ActivityExpeditionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityExpeditionExcelConfigMgrBase::ActivityExpeditionExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityExpeditionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityExpeditionExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->path_2_super_elem_map_);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->difficulty_2_path_map_);
  std::map<unsigned int,float>::map(&this->avatar_level_2_probability_map_);
  std::vector<unsigned int>::vector(&this->mark_id_vec_);
  std::map<unsigned int,data::ExpeditionChallengeExcelConfig const*>::map(&this->day_2_challenge_config_map_);
};

// Line 17: range 000000000D817908-000000000D8179AF
void __cdecl ActivityExpeditionExcelConfigMgr::~ActivityExpeditionExcelConfigMgr(
        ActivityExpeditionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityExpeditionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityExpeditionExcelConfigMgrBase = v1;
  std::map<unsigned int,data::ExpeditionChallengeExcelConfig const*>::~map(&this->day_2_challenge_config_map_);
  std::vector<unsigned int>::~vector(&this->mark_id_vec_);
  std::map<unsigned int,float>::~map(&this->avatar_level_2_probability_map_);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->difficulty_2_path_map_);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->path_2_super_elem_map_);
  data::ActivityExpeditionExcelConfigMgrBase::~ActivityExpeditionExcelConfigMgrBase(this);
};
