// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GadgetArgumentExcelConfig.h

// Line 36: range 000000000DE52EAE-000000000DE52F0B
void __cdecl GadgetArgumentExcelConfigMgr::GadgetArgumentExcelConfigMgr(GadgetArgumentExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::GadgetArgumentExcelConfigMgrBase::GadgetArgumentExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'GadgetArgumentExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetArgumentExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>>::map(&this->argument_deshret_obelisk_chest_vec_map_);
};

// Line 36: range 000000000D81EE66-000000000D81EEC3
void __cdecl GadgetArgumentExcelConfigMgr::~GadgetArgumentExcelConfigMgr(GadgetArgumentExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetArgumentExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetArgumentExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>>::~map(&this->argument_deshret_obelisk_chest_vec_map_);
  data::GadgetArgumentExcelConfigMgrBase::~GadgetArgumentExcelConfigMgrBase(this);
};
