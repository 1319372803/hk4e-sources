// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/HandbookQuestGuideExcelConfig.h

// Line 17: range 000000000DE1B83A-000000000DE1B887
void __cdecl HandbookQuestGuideExcelConfigMgr::HandbookQuestGuideExcelConfigMgr(
        HandbookQuestGuideExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::HandbookQuestGuideExcelConfigMgrBase::HandbookQuestGuideExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'HandbookQuestGuideExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandbookQuestGuideExcelConfigMgrBase = v1;
};

// Line 17: range 000000000D812D02-000000000D812D4F
void __cdecl HandbookQuestGuideExcelConfigMgr::~HandbookQuestGuideExcelConfigMgr(
        HandbookQuestGuideExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HandbookQuestGuideExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandbookQuestGuideExcelConfigMgrBase = v1;
  data::HandbookQuestGuideExcelConfigMgrBase::~HandbookQuestGuideExcelConfigMgrBase(this);
};
