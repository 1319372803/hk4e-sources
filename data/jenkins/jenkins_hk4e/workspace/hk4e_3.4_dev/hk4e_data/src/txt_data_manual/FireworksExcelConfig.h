// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/FireworksExcelConfig.h

// Line 27: range 000000000DE4767C-000000000DE476D9
void __cdecl FireworksExcelConfigMgr::FireworksExcelConfigMgr(FireworksExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::FireworksExcelConfigMgrBase::FireworksExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'FireworksExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FireworksExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>::unordered_map(&this->fireworks_reform_map_);
};

// Line 27: range 000000000D81C7C0-000000000D81C81D
void __cdecl FireworksExcelConfigMgr::~FireworksExcelConfigMgr(FireworksExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FireworksExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FireworksExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>::~unordered_map(&this->fireworks_reform_map_);
  data::FireworksExcelConfigMgrBase::~FireworksExcelConfigMgrBase(this);
};
