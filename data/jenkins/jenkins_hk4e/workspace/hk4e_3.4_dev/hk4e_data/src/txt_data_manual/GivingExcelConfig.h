// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GivingExcelConfig.h

// Line 18: range 000000000DE1A92C-000000000DE1A9AD
void __cdecl GivingExcelConfigMgr::GivingExcelConfigMgr(GivingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::GivingExcelConfigMgrBase::GivingExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'GivingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GivingExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map(&this->exact_giving_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->group_giving_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map(&this->vague_giving_map_);
};

// Line 18: range 000000000D812922-000000000D8129A3
void __cdecl GivingExcelConfigMgr::~GivingExcelConfigMgr(GivingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GivingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GivingExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map(&this->vague_giving_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->group_giving_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map(&this->exact_giving_map_);
  data::GivingExcelConfigMgrBase::~GivingExcelConfigMgrBase(this);
};
