// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TrialAvatarExcelConfig.h

// Line 18: range 000000000DE14A5A-000000000DE14AB9
void __cdecl TrialAvatarExcelConfigMgr::TrialAvatarExcelConfigMgr(TrialAvatarExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::TrialAvatarExcelConfigMgrBase::TrialAvatarExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'TrialAvatarExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TrialAvatarExcelConfigMgrBase = v1;
  std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::map(&this->trial_avatar_template_config_map);
};

// Line 18: range 000000000D810F34-000000000D810F93
void __cdecl TrialAvatarExcelConfigMgr::~TrialAvatarExcelConfigMgr(TrialAvatarExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TrialAvatarExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TrialAvatarExcelConfigMgrBase = v1;
  std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::~map(&this->trial_avatar_template_config_map);
  data::TrialAvatarExcelConfigMgrBase::~TrialAvatarExcelConfigMgrBase(this);
};
