// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/UIInteractExcelConfig.h

// Line 18: range 000000000DE4E1E2-000000000DE4E22F
void __cdecl UIInteractExcelConfigMgr::UIInteractExcelConfigMgr(UIInteractExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::UIInteractExcelConfigMgrBase::UIInteractExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'UIInteractExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_UIInteractExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D81DE0A-000000000D81DE57
void __cdecl UIInteractExcelConfigMgr::~UIInteractExcelConfigMgr(UIInteractExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UIInteractExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_UIInteractExcelConfigMgrBase = v1;
  data::UIInteractExcelConfigMgrBase::~UIInteractExcelConfigMgrBase(this);
};
