// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aclient/include/aclient_base.h

// Line 25: range 000000000C83978A-000000000C8397CB
void __cdecl common::minet::AClientBase::AClientBase(common::minet::AClientBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'common::minet::AClientBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientBase = v1;
};
