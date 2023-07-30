// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/mysql/include/mysql_mgr.h

// Line 58: range 000000000CDA86C4-000000000CDA8707
bool __cdecl common::midb::MySqlMgrT<std::mutex>::isInit(const common::midb::MySqlMgrT<std::mutex> *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  return this->is_init_;
};
