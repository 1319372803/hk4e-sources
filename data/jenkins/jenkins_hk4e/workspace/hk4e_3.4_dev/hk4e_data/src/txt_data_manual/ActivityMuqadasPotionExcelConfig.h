// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMuqadasPotionExcelConfig.h

// Line 18: range 000000000DE560F8-000000000DE56145
void __cdecl ActivityMuqadasPotionExcelConfigMgr::ActivityMuqadasPotionExcelConfigMgr(
        ActivityMuqadasPotionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityMuqadasPotionExcelConfigMgrBase::ActivityMuqadasPotionExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityMuqadasPotionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMuqadasPotionExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D81F9EC-000000000D81FA39
void __cdecl ActivityMuqadasPotionExcelConfigMgr::~ActivityMuqadasPotionExcelConfigMgr(
        ActivityMuqadasPotionExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityMuqadasPotionExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMuqadasPotionExcelConfigMgrBase = v1;
  data::ActivityMuqadasPotionExcelConfigMgrBase::~ActivityMuqadasPotionExcelConfigMgrBase(this);
};
