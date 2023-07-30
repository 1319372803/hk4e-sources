// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityGroupLinksExcelConfig.h

// Line 19: range 000000000DE40560-000000000DE405F5
void __cdecl ActivityGroupLinksExcelConfigMgr::ActivityGroupLinksExcelConfigMgr(
        ActivityGroupLinksExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityGroupLinksExcelConfigMgrBase::ActivityGroupLinksExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityGroupLinksExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityGroupLinksExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_to_bundle_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->bundle_to_link_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->link_bundle_index_map);
  std::unordered_map<unsigned int,Vector3>::unordered_map(&this->group_bundle_hint_group_pos_map);
};

// Line 19: range 000000000D81AE6C-000000000D81AF01
void __cdecl ActivityGroupLinksExcelConfigMgr::~ActivityGroupLinksExcelConfigMgr(
        ActivityGroupLinksExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityGroupLinksExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityGroupLinksExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,Vector3>::~unordered_map(&this->group_bundle_hint_group_pos_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->link_bundle_index_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->bundle_to_link_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->group_to_bundle_map);
  data::ActivityGroupLinksExcelConfigMgrBase::~ActivityGroupLinksExcelConfigMgrBase(this);
};
