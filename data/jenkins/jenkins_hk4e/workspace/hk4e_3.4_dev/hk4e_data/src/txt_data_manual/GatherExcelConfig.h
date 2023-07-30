// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GatherExcelConfig.h

// Line 18: range 000000000DE0BDE6-000000000DE0BE57
void __cdecl GatherExcelConfigMgr::GatherExcelConfigMgr(GatherExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::GatherExcelConfigMgrBase::GatherExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'GatherExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GatherExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>>::unordered_map(&this->block_gather_vec_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->gadget_to_point_type_map);
};

// Line 18: range 000000000D80F21C-000000000D80F28D
void __cdecl GatherExcelConfigMgr::~GatherExcelConfigMgr(GatherExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GatherExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GatherExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->gadget_to_point_type_map);
  std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>>::~unordered_map(&this->block_gather_vec_map);
  data::GatherExcelConfigMgrBase::~GatherExcelConfigMgrBase(this);
};
