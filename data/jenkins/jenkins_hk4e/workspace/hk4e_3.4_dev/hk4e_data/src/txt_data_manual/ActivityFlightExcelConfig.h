// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityFlightExcelConfig.h

// Line 24: range 00000000133A3590-00000000133A3670
void __cdecl ActivityFlightExcelConfigMgr::FlightActivityDailyConfig::FlightActivityDailyConfig(
        ActivityFlightExcelConfigMgr::FlightActivityDailyConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time_factor, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->time_factor = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_factor, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->gold_factor = 0;
};
