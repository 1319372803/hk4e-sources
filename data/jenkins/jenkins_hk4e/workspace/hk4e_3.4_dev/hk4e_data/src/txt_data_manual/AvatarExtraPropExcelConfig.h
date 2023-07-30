// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarExtraPropExcelConfig.h

// Line 18: range 000000000DE033A2-000000000DE033EF
void __cdecl AvatarExtraPropExcelConfigMgr::AvatarExtraPropExcelConfigMgr(AvatarExtraPropExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::AvatarExtraPropExcelConfigMgrBase::AvatarExtraPropExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'AvatarExtraPropExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AvatarExtraPropExcelConfigMgrBase = v1;
};

// Line 18: range 000000000D80E7FC-000000000D80E849
void __cdecl AvatarExtraPropExcelConfigMgr::~AvatarExtraPropExcelConfigMgr(AvatarExtraPropExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarExtraPropExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AvatarExtraPropExcelConfigMgrBase = v1;
  data::AvatarExtraPropExcelConfigMgrBase::~AvatarExtraPropExcelConfigMgrBase(this);
};
