// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/OverflowTransformExcelConfig.h

// Line 18: range 000000000DE322FA-000000000DE32357
void __cdecl OverflowTransformExcelConfigMgr::OverflowTransformExcelConfigMgr(
        OverflowTransformExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::OverflowTransformExcelConfigMgrBase::OverflowTransformExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'OverflowTransformExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_OverflowTransformExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::unordered_map(&this->item_config_map);
};

// Line 18: range 000000000D817EA2-000000000D817EFF
void __cdecl OverflowTransformExcelConfigMgr::~OverflowTransformExcelConfigMgr(
        OverflowTransformExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OverflowTransformExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_OverflowTransformExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::~unordered_map(&this->item_config_map);
  data::OverflowTransformExcelConfigMgrBase::~OverflowTransformExcelConfigMgrBase(this);
};
