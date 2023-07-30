// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GearExcelConfig.h

// Line 18: range 000000000DE13C6C-000000000DE13CB9
void __cdecl GearExcelConfigMgr::GearExcelConfigMgr(GearExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::GearExcelConfigMgrBase::GearExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'GearExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GearExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D810BC2-000000000D810C0F
void __cdecl GearExcelConfigMgr::~GearExcelConfigMgr(GearExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GearExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GearExcelConfigMgrBase = v1;
  data::GearExcelConfigMgrBase::~GearExcelConfigMgrBase(this);
};
