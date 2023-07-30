// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BuffExcelConfig.h

// Line 18: range 000000000DE16A68-000000000DE16AC5
void __cdecl BuffExcelConfigMgr::BuffExcelConfigMgr(BuffExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::BuffExcelConfigMgrBase::BuffExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'BuffExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BuffExcelConfigMgrBase = v1;
  std::unordered_set<unsigned int>::unordered_set(&this->del_when_leave_scene_buff_set_);
};

// Line 18: range 000000000D811878-000000000D8118D5
void __cdecl BuffExcelConfigMgr::~BuffExcelConfigMgr(BuffExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BuffExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BuffExcelConfigMgrBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->del_when_leave_scene_buff_set_);
  data::BuffExcelConfigMgrBase::~BuffExcelConfigMgrBase(this);
};
