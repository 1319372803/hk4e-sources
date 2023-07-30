// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_config_mgr_base.h

// Line 21: range 000000000C63DA76-000000000C63DAB7
void __cdecl DbConfigMgrBase::DbConfigMgrBase(DbConfigMgrBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DbConfigMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DbConfigMgrBase = v1;
};
