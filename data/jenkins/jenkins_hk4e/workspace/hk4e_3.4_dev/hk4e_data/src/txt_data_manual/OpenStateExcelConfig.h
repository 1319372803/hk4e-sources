// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/OpenStateExcelConfig.h

// Line 18: range 000000000DE176B2-000000000DE1770F
void __cdecl OpenStateExcelConfigMgr::OpenStateExcelConfigMgr(OpenStateExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::OpenStateExcelConfigMgrBase::OpenStateExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'OpenStateExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_OpenStateExcelConfigMgrBase = v1;
  std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<data::OpenStateCond const,std::vector<unsigned int>>>>::map(&this->cond_type_map_);
};

// Line 18: range 000000000D811BBC-000000000D811C19
void __cdecl OpenStateExcelConfigMgr::~OpenStateExcelConfigMgr(OpenStateExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OpenStateExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_OpenStateExcelConfigMgrBase = v1;
  std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<data::OpenStateCond const,std::vector<unsigned int>>>>::~map(&this->cond_type_map_);
  data::OpenStateExcelConfigMgrBase::~OpenStateExcelConfigMgrBase(this);
};
