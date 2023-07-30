// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityShopExcelConfig.h

// Line 17: range 000000000DE2AF48-000000000DE2AFC9
void __cdecl ActivityShopExcelConfigMgr::ActivityShopExcelConfigMgr(ActivityShopExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityShopExcelConfigMgrBase::ActivityShopExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityShopExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityShopExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->shop_type_schedule_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->sheet_open_day_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->sheet_shop_type_map_);
};

// Line 17: range 000000000D8164E0-000000000D816561
void __cdecl ActivityShopExcelConfigMgr::~ActivityShopExcelConfigMgr(ActivityShopExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityShopExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityShopExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->sheet_shop_type_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->sheet_open_day_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->shop_type_schedule_map_);
  data::ActivityShopExcelConfigMgrBase::~ActivityShopExcelConfigMgrBase(this);
};
