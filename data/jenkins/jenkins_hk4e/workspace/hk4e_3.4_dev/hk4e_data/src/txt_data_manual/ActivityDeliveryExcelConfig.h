// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityDeliveryExcelConfig.h

// Line 18: range 000000000DE279BA-000000000DE27A3D
void __cdecl ActivityDeliveryExcelConfigMgr::ActivityDeliveryExcelConfigMgr(ActivityDeliveryExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityDeliveryExcelConfigMgrBase::ActivityDeliveryExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityDeliveryExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityDeliveryExcelConfigMgrBase = v1;
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::map(&this->daily_delivery_quest_map);
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::map(&this->daily_delivery_parent_quest_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->daily_delivery_watcher_quest_map);
};

// Line 18: range 000000000D815700-000000000D815783
void __cdecl ActivityDeliveryExcelConfigMgr::~ActivityDeliveryExcelConfigMgr(
        ActivityDeliveryExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityDeliveryExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityDeliveryExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->daily_delivery_watcher_quest_map);
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::~map(&this->daily_delivery_parent_quest_map);
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::~map(&this->daily_delivery_quest_map);
  data::ActivityDeliveryExcelConfigMgrBase::~ActivityDeliveryExcelConfigMgrBase(this);
};
