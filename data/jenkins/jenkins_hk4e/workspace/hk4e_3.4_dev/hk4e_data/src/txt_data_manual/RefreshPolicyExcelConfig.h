// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RefreshPolicyExcelConfig.h

// Line 19: range 000000000DE1A5A8-000000000DE1A615
void __cdecl RefreshPolicyExcelConfigMgr::RefreshPolicyExcelConfigMgr(RefreshPolicyExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::RefreshPolicyExcelConfigMgrBase::RefreshPolicyExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'RefreshPolicyExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RefreshPolicyExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->time_points_map);
  std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>>::unordered_map(&this->gather_refresh_map);
};

// Line 19: range 000000000D81281A-000000000D812887
void __cdecl RefreshPolicyExcelConfigMgr::~RefreshPolicyExcelConfigMgr(RefreshPolicyExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RefreshPolicyExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RefreshPolicyExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>>::~unordered_map(&this->gather_refresh_map);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->time_points_map);
  data::RefreshPolicyExcelConfigMgrBase::~RefreshPolicyExcelConfigMgrBase(this);
};
