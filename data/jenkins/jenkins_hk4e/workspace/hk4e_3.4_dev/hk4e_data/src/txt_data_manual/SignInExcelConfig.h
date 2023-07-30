// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/SignInExcelConfig.h

// Line 20: range 000000000DE1F672-000000000DE1F6D1
void __cdecl SignInExcelConfigMgr::SignInExcelConfigMgr(SignInExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::SignInExcelConfigMgrBase::SignInExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'SignInExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SignInExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::unordered_map(&this->id_day_config_map_);
};

// Line 20: range 000000000D813A3E-000000000D813A9D
void __cdecl SignInExcelConfigMgr::~SignInExcelConfigMgr(SignInExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SignInExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SignInExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::~unordered_map(&this->id_day_config_map_);
  data::SignInExcelConfigMgrBase::~SignInExcelConfigMgrBase(this);
};
