// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityPlantFlowerExcelConfig.h

// Line 18: range 000000000DE44A82-000000000DE44ADF
void __cdecl ActivityPlantFlowerExcelConfigMgr::ActivityPlantFlowerExcelConfigMgr(
        ActivityPlantFlowerExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityPlantFlowerExcelConfigMgrBase::ActivityPlantFlowerExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityPlantFlowerExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityPlantFlowerExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->schedule_flower_home_gather_id_map_);
};

// Line 18: range 000000000D81BCF4-000000000D81BD51
void __cdecl ActivityPlantFlowerExcelConfigMgr::~ActivityPlantFlowerExcelConfigMgr(
        ActivityPlantFlowerExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityPlantFlowerExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityPlantFlowerExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->schedule_flower_home_gather_id_map_);
  data::ActivityPlantFlowerExcelConfigMgrBase::~ActivityPlantFlowerExcelConfigMgrBase(this);
};
