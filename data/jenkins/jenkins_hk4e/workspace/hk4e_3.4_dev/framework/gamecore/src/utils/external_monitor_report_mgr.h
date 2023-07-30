// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/utils/external_monitor_report_mgr.h

// Line 18: range 000000000C842214-000000000C8422B2
void __cdecl ExternalMonitorReportMgr::ExternalMonitorReportMgr(ExternalMonitorReportMgr *const this)
{
  std::mutex::mutex(&this->mu_);
  if ( *(_BYTE *)(((unsigned __int64)&this->get_token_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->get_token_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->get_token_num_);
  }
  this->get_token_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->login_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->login_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->login_num_);
  }
  this->login_num_ = 0;
};
