// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WidgetCameraExcelConfig.h

// Line 18: range 000000000DE3F892-000000000DE3F8EF
void __cdecl WidgetCameraExcelConfigMgr::WidgetCameraExcelConfigMgr(WidgetCameraExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::WidgetCameraExcelConfigMgrBase::WidgetCameraExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'WidgetCameraExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_WidgetCameraExcelConfigMgrBase = v1;
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->camera_scan_id_map_);
};

// Line 18: range 000000000D81ABAA-000000000D81AC07
void __cdecl WidgetCameraExcelConfigMgr::~WidgetCameraExcelConfigMgr(WidgetCameraExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'WidgetCameraExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_WidgetCameraExcelConfigMgrBase = v1;
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->camera_scan_id_map_);
  data::WidgetCameraExcelConfigMgrBase::~WidgetCameraExcelConfigMgrBase(this);
};
