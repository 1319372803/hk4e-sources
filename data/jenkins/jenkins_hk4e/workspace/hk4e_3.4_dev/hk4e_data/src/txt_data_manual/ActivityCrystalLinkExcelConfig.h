// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityCrystalLinkExcelConfig.h

// Line 18: range 000000000DE4EA16-000000000DE4EA75
void __cdecl ActivityCrystalLinkExcelConfigMgr::ActivityCrystalLinkExcelConfigMgr(
        ActivityCrystalLinkExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityCrystalLinkExcelConfigMgrBase::ActivityCrystalLinkExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityCrystalLinkExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityCrystalLinkExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->schedule_level_map_);
};

// Line 18: range 000000000D81E008-000000000D81E067
void __cdecl ActivityCrystalLinkExcelConfigMgr::~ActivityCrystalLinkExcelConfigMgr(
        ActivityCrystalLinkExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityCrystalLinkExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityCrystalLinkExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->schedule_level_map_);
  data::ActivityCrystalLinkExcelConfigMgrBase::~ActivityCrystalLinkExcelConfigMgrBase(this);
};
