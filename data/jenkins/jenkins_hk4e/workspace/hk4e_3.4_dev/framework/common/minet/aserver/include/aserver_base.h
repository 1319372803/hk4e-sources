// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aserver/include/aserver_base.h

// Line 25: range 000000000C69ED2C-000000000C69ED6D
void __cdecl common::minet::AServerBase::AServerBase(common::minet::AServerBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'common::minet::AServerBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerBase = v2;
};
