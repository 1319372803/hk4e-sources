// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CompoundExcelConfig.h

// Line 18: range 000000000DE17304-000000000DE17363
void __cdecl CompoundExcelConfigMgr::CompoundExcelConfigMgr(CompoundExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::CompoundExcelConfigMgrBase::CompoundExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'CompoundExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CompoundExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->compound_group_ids_map);
};

// Line 18: range 000000000D811AA6-000000000D811B05
void __cdecl CompoundExcelConfigMgr::~CompoundExcelConfigMgr(CompoundExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CompoundExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CompoundExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->compound_group_ids_map);
  data::CompoundExcelConfigMgrBase::~CompoundExcelConfigMgrBase(this);
};
