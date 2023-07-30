// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityWinterCampExcelConfig.h

// Line 17: range 000000000DE46286-000000000DE4633F
void __cdecl ActivityWinterCampExcelConfigMgr::ActivityWinterCampExcelConfigMgr(
        ActivityWinterCampExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityWinterCampExcelConfigMgrBase::ActivityWinterCampExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityWinterCampExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityWinterCampExcelConfigMgrBase = v1;
  std::map<unsigned int,std::set<unsigned int>>::map(&this->snowman_item_id_map);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->snowman_group_id_map);
  std::map<unsigned int,unsigned int>::map(&this->group_gadget_num_map);
  std::map<unsigned int,unsigned int>::map(&this->explore_link_id_map);
  std::map<unsigned int,unsigned int>::map(&this->battle_link_id_map);
  std::map<unsigned int,unsigned int>::map(&this->race_gallery_id_map);
};

// Line 17: range 000000000D81C2EA-000000000D81C3A3
void __cdecl ActivityWinterCampExcelConfigMgr::~ActivityWinterCampExcelConfigMgr(
        ActivityWinterCampExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityWinterCampExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityWinterCampExcelConfigMgrBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->race_gallery_id_map);
  std::map<unsigned int,unsigned int>::~map(&this->battle_link_id_map);
  std::map<unsigned int,unsigned int>::~map(&this->explore_link_id_map);
  std::map<unsigned int,unsigned int>::~map(&this->group_gadget_num_map);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->snowman_group_id_map);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->snowman_item_id_map);
  data::ActivityWinterCampExcelConfigMgrBase::~ActivityWinterCampExcelConfigMgrBase(this);
};
