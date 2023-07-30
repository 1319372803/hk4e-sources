// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/EnvAnimalExcelConfig.h

// Line 18: range 000000000DE15CB8-000000000DE15D27
void __cdecl EnvAnimalExcelConfigMgr::EnvAnimalExcelConfigMgr(EnvAnimalExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::EnvAnimalExcelConfigMgrBase::EnvAnimalExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'EnvAnimalExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_EnvAnimalExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::unordered_map(&this->animal_gather_config_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->exclude_weathers_map_);
};

// Line 18: range 000000000D8114CA-000000000D811539
void __cdecl EnvAnimalExcelConfigMgr::~EnvAnimalExcelConfigMgr(EnvAnimalExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EnvAnimalExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_EnvAnimalExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->exclude_weathers_map_);
  std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::~unordered_map(&this->animal_gather_config_map_);
  data::EnvAnimalExcelConfigMgrBase::~EnvAnimalExcelConfigMgrBase(this);
};
