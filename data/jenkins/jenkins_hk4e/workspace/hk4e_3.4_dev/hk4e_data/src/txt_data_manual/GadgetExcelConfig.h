// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GadgetExcelConfig.h

// Line 18: range 000000000DE0B7BE-000000000DE0B80B
void __cdecl GadgetExcelConfigMgr::GadgetExcelConfigMgr(GadgetExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::GadgetExcelConfigMgrBase::GadgetExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'GadgetExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D80F0EC-000000000D80F139
void __cdecl GadgetExcelConfigMgr::~GadgetExcelConfigMgr(GadgetExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetExcelConfigMgrBase = v1;
  data::GadgetExcelConfigMgrBase::~GadgetExcelConfigMgrBase(this);
};
