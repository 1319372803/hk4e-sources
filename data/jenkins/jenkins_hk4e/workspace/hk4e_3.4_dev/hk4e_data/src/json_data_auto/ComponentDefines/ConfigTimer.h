// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigTimer.h

// Line 19: range 000000000ED8C0EE-000000000ED8C24F
void __cdecl data::ConfigTimer::ConfigTimer(data::ConfigTimer *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->life_infinite = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_check_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_check_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_check_time, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->start_check_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_interval, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->check_interval = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_time, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->life_time = 0.0;
  v3 = ((_BYTE)this + 16) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};
