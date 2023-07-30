// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BoredExcelConfig.h

// Line 18: range 000000000DE14E98-000000000DE14F3A
void __cdecl BoredExcelConfigMgr::BoredExcelConfigMgr(BoredExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::BoredExcelConfigMgrBase::BoredExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'BoredExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BoredExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::BoredEventExcelConfig>::unordered_map(&this->bored_event_config_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_weight_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_weight_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_weight_);
  }
  this->total_weight_ = 0;
};

// Line 18: range 000000000D81104E-000000000D8110AD
void __cdecl BoredExcelConfigMgr::~BoredExcelConfigMgr(BoredExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BoredExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BoredExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::BoredEventExcelConfig>::~unordered_map(&this->bored_event_config_map_);
  data::BoredExcelConfigMgrBase::~BoredExcelConfigMgrBase(this);
};
