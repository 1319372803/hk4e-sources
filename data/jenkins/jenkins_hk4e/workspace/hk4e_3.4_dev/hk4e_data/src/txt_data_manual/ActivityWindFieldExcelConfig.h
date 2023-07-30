// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityWindFieldExcelConfig.h

// Line 19: range 000000000DE56EAE-000000000DE56F1D
void __cdecl ActivityWindFieldExcelConfigMgr::ActivityWindFieldExcelConfigMgr(
        ActivityWindFieldExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityWindFieldConfigMgrBase::ActivityWindFieldConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityWindFieldExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityWindFieldConfigMgrBase = v1;
  std::map<unsigned int,data::WindFieldStageExcelConfig>::map(&this->dungeon_id_2_stage_excel_config_map);
  std::map<unsigned int,data::WindFieldStageExcelConfig>::map(&this->gallery_id_2_stage_excel_config_map);
};

// Line 19: range 000000000D81FD96-000000000D81FE05
void __cdecl ActivityWindFieldExcelConfigMgr::~ActivityWindFieldExcelConfigMgr(
        ActivityWindFieldExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityWindFieldExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityWindFieldConfigMgrBase = v1;
  std::map<unsigned int,data::WindFieldStageExcelConfig>::~map(&this->gallery_id_2_stage_excel_config_map);
  std::map<unsigned int,data::WindFieldStageExcelConfig>::~map(&this->dungeon_id_2_stage_excel_config_map);
  data::ActivityWindFieldConfigMgrBase::~ActivityWindFieldConfigMgrBase(this);
};
