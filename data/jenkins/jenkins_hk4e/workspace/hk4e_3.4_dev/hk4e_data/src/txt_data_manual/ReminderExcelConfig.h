// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ReminderExcelConfig.h

// Line 18: range 000000000DE1413A-000000000DE14199
void __cdecl ReminderExcelConfigMgr::ReminderExcelConfigMgr(ReminderExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ReminderExcelConfigMgrBase::ReminderExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ReminderExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ReminderExcelConfigMgrBase = v1;
  std::unordered_map<std::string,unsigned int>::unordered_map(&this->key_to_message_map);
};

// Line 18: range 000000000D810CD6-000000000D810D35
void __cdecl ReminderExcelConfigMgr::~ReminderExcelConfigMgr(ReminderExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReminderExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ReminderExcelConfigMgrBase = v1;
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->key_to_message_map);
  data::ReminderExcelConfigMgrBase::~ReminderExcelConfigMgrBase(this);
};
