// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBlessingExcelConfig.h

// Line 20: range 000000000DE2FE22-000000000DE2FEC9
void __cdecl ActivityBlessingExcelConfigMgr::ActivityBlessingExcelConfigMgr(ActivityBlessingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityBlessingExcelConfigMgrBase::ActivityBlessingExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityBlessingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityBlessingExcelConfigMgrBase = v1;
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::map(&this->blessing_scan_type_map);
  std::set<unsigned int>::set(&this->pic_id_set);
  std::vector<unsigned int>::vector(&this->blessing_type_id_vec);
  std::map<unsigned int,std::unordered_set<unsigned int>>::map(&this->up_pool_drop_map);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->scan_type_id_scan_id_map);
};

// Line 20: range 000000000D8176F4-000000000D81779B
void __cdecl ActivityBlessingExcelConfigMgr::~ActivityBlessingExcelConfigMgr(
        ActivityBlessingExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityBlessingExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityBlessingExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->scan_type_id_scan_id_map);
  std::map<unsigned int,std::unordered_set<unsigned int>>::~map(&this->up_pool_drop_map);
  std::vector<unsigned int>::~vector(&this->blessing_type_id_vec);
  std::set<unsigned int>::~set(&this->pic_id_set);
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::~map(&this->blessing_scan_type_map);
  data::ActivityBlessingExcelConfigMgrBase::~ActivityBlessingExcelConfigMgrBase(this);
};
