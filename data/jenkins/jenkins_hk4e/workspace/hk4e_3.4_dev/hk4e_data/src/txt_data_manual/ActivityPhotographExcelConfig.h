// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityPhotographExcelConfig.h

// Line 21: range 000000000DE4ED8C-000000000DE4EDFB
void __cdecl ActivityPhotographExcelConfigMgr::ActivityPhotographExcelConfigMgr(
        ActivityPhotographExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityPhotographExcelConfigMgrBase::ActivityPhotographExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityPhotographExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityPhotographExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::unordered_map(&this->activity_id_2_config_map);
  std::unordered_map<unsigned int,Vector3>::unordered_map(&this->pos_id_2_center_map);
};

// Line 21: range 000000000D81E102-000000000D81E171
void __cdecl ActivityPhotographExcelConfigMgr::~ActivityPhotographExcelConfigMgr(
        ActivityPhotographExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityPhotographExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityPhotographExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,Vector3>::~unordered_map(&this->pos_id_2_center_map);
  std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::~unordered_map(&this->activity_id_2_config_map);
  data::ActivityPhotographExcelConfigMgrBase::~ActivityPhotographExcelConfigMgrBase(this);
};
