// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WidgetExcelConfig.h

// Line 17: range 000000000DE44F98-000000000DE4502D
void __cdecl WidgetExcelConfigMgr::WidgetExcelConfigMgr(WidgetExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::WidgetExcelConfigMgrBase::WidgetExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'WidgetExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_WidgetExcelConfigMgrBase = v1;
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::map(&this->widget_active_region_map_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->widget_active_gallery_map_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->widget_active_scene_map_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->widget_active_city_map_);
};

// Line 17: range 000000000D81BE34-000000000D81BEC9
void __cdecl WidgetExcelConfigMgr::~WidgetExcelConfigMgr(WidgetExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'WidgetExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_WidgetExcelConfigMgrBase = v1;
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->widget_active_city_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->widget_active_scene_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->widget_active_gallery_map_);
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::~map(&this->widget_active_region_map_);
  data::WidgetExcelConfigMgrBase::~WidgetExcelConfigMgrBase(this);
};
