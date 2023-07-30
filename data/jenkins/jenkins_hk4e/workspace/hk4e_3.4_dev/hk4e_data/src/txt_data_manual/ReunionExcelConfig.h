// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ReunionExcelConfig.h

// Line 17: range 000000000DE2E1C8-000000000DE2E25D
void __cdecl ReunionExcelConfigMgr::ReunionExcelConfigMgr(ReunionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ReunionExcelConfigMgrBase::ReunionExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ReunionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ReunionExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig *>>::map(&this->reunion_sign_in_config_map);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->reunion_massion_watcher_group_map);
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::map(&this->reunion_watcher_level_range_map);
  std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::map(&this->reunion_privilege_type_map);
};

// Line 17: range 000000000D817050-000000000D8170E5
void __cdecl ReunionExcelConfigMgr::~ReunionExcelConfigMgr(ReunionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReunionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ReunionExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::~map(&this->reunion_privilege_type_map);
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::~map(&this->reunion_watcher_level_range_map);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->reunion_massion_watcher_group_map);
  std::map<unsigned int,std::vector<data::ReunionSignInExcelConfig *>>::~map(&this->reunion_sign_in_config_map);
  data::ReunionExcelConfigMgrBase::~ReunionExcelConfigMgrBase(this);
};
