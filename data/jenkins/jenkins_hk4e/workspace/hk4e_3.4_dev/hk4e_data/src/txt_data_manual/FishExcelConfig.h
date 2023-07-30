// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/FishExcelConfig.h

// Line 18: range 000000000DE415CE-000000000DE41651
void __cdecl FishExcelConfigMgr::FishExcelConfigMgr(FishExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::FishExcelConfigMgrBase::FishExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'FishExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FishExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::map(&this->bait_feature_map_);
  std::map<unsigned int,std::unordered_set<unsigned int>>::map(&this->fish_feature_map_);
  std::set<unsigned int>::set(&this->furniture_fish_set_);
};

// Line 18: range 000000000D81B252-000000000D81B2D5
void __cdecl FishExcelConfigMgr::~FishExcelConfigMgr(FishExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FishExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FishExcelConfigMgrBase = v1;
  std::set<unsigned int>::~set(&this->furniture_fish_set_);
  std::map<unsigned int,std::unordered_set<unsigned int>>::~map(&this->fish_feature_map_);
  std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::~map(&this->bait_feature_map_);
  data::FishExcelConfigMgrBase::~FishExcelConfigMgrBase(this);
};
