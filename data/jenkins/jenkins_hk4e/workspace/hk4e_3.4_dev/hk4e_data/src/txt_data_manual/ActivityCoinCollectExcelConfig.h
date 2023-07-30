// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityCoinCollectExcelConfig.h

// Line 18: range 000000000DE5C212-000000000DE5C271
void __cdecl ActivityCoinCollectExcelConfigMgr::ActivityCoinCollectExcelConfigMgr(
        ActivityCoinCollectExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityCoinCollectExcelConfigMgrBase::ActivityCoinCollectExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityCoinCollectExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityCoinCollectExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->gallery_id_2_level_id_map_);
};

// Line 18: range 000000000D820F08-000000000D820F67
void __cdecl ActivityCoinCollectExcelConfigMgr::~ActivityCoinCollectExcelConfigMgr(
        ActivityCoinCollectExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityCoinCollectExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityCoinCollectExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->gallery_id_2_level_id_map_);
  data::ActivityCoinCollectExcelConfigMgrBase::~ActivityCoinCollectExcelConfigMgrBase(this);
};
