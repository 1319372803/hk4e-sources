// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RandTaskExcelConfig.h

// Line 18: range 000000000DE184EA-000000000DE18549
void __cdecl RandTaskExcelConfigMgr::RandTaskExcelConfigMgr(RandTaskExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::RandTaskExcelConfigMgrBase::RandTaskExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'RandTaskExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RandTaskExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->content_type_2_task_map_);
};

// Line 18: range 000000000D811F5C-000000000D811FBB
void __cdecl RandTaskExcelConfigMgr::~RandTaskExcelConfigMgr(RandTaskExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RandTaskExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RandTaskExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->content_type_2_task_map_);
  data::RandTaskExcelConfigMgrBase::~RandTaskExcelConfigMgrBase(this);
};
