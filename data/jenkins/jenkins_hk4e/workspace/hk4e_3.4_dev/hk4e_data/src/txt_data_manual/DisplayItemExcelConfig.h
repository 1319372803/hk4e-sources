// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DisplayItemExcelConfig.h

// Line 19: range 000000000DE4DFD8-000000000DE4E035
void __cdecl DisplayItemExcelConfigMgr::DisplayItemExcelConfigMgr(DisplayItemExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::DisplayItemExcelConfigMgrBase::DisplayItemExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'DisplayItemExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DisplayItemExcelConfigMgrBase = v1;
  std::set<unsigned int>::set(&this->bartender_material_set);
};

// Line 19: range 000000000D81DD3E-000000000D81DD9B
void __cdecl DisplayItemExcelConfigMgr::~DisplayItemExcelConfigMgr(DisplayItemExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DisplayItemExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DisplayItemExcelConfigMgrBase = v1;
  std::set<unsigned int>::~set(&this->bartender_material_set);
  data::DisplayItemExcelConfigMgrBase::~DisplayItemExcelConfigMgrBase(this);
};
