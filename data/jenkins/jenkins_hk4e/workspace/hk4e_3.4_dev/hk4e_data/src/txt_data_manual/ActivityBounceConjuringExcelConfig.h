// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBounceConjuringExcelConfig.h

// Line 17: range 000000000DE3DA8E-000000000DE3DAFD
void __cdecl ActivityBounceConjuringExcelConfigMgr::ActivityBounceConjuringExcelConfigMgr(
        ActivityBounceConjuringExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityBounceConjuringExcelConfigMgrBase::ActivityBounceConjuringExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityBounceConjuringExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityBounceConjuringExcelConfigMgrBase = v1;
  std::map<unsigned int,data::BounceConjuringPreviewExcelConfig>::map(&this->bounce_conjuring_preview_config_map_);
  std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::map(&this->bounce_conjuring_chapter_config_map_);
};

// Line 17: range 000000000D81A4E4-000000000D81A553
void __cdecl ActivityBounceConjuringExcelConfigMgr::~ActivityBounceConjuringExcelConfigMgr(
        ActivityBounceConjuringExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityBounceConjuringExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityBounceConjuringExcelConfigMgrBase = v1;
  std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::~map(&this->bounce_conjuring_chapter_config_map_);
  std::map<unsigned int,data::BounceConjuringPreviewExcelConfig>::~map(&this->bounce_conjuring_preview_config_map_);
  data::ActivityBounceConjuringExcelConfigMgrBase::~ActivityBounceConjuringExcelConfigMgrBase(this);
};
