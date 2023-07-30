// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/include/milog_common.h

// Line 84: range 000000000C992998-000000000C992A2D
void __fastcall common::milog::LogLevelInfo::~LogLevelInfo(common::milog::LogLevelInfo *const this)
{
  std::string *p_tail; // rdi
  common::milog::LogLevelInfo *M_p; // rdi
  common::milog::LogLevelInfo *v4; // rdi
  common::milog::LogLevelInfo *v5; // rdi

  p_tail = &this->tail;
  if ( *(_BYTE *)(((unsigned __int64)p_tail >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_tail);
LABEL_12:
    __asan_report_load8(p_tail);
    goto LABEL_13;
  }
  M_p = (common::milog::LogLevelInfo *)this->tail._M_dataplus._M_p;
  if ( M_p != (common::milog::LogLevelInfo *)&this->tail._anon_0 )
    operator delete(M_p);
  p_tail = &this->head;
  if ( *(_BYTE *)(((unsigned __int64)&this->head >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  v4 = (common::milog::LogLevelInfo *)this->head._M_dataplus._M_p;
  if ( v4 != (common::milog::LogLevelInfo *)&this->head._anon_0 )
    operator delete(v4);
  p_tail = &this->name;
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_tail);
    JUMPOUT(0xC992A1FLL);
  }
  v5 = (common::milog::LogLevelInfo *)this->name._M_dataplus._M_p;
  if ( v5 != (common::milog::LogLevelInfo *)&this->name._anon_0 )
    operator delete(v5);
};
