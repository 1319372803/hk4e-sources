// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigPaimon.h

// Line 56: range 000000000ED91EC2-000000000ED9204C
void __cdecl data::ConfigPaimon::ConfigPaimon(data::ConfigPaimon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  data::Vector::Vector(&this->follow_off_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->slow_down_range_xz >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slow_down_range_xz >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slow_down_range_xz, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->slow_down_range_xz = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->slow_down_range_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slow_down_range_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slow_down_range_y, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->slow_down_range_y = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_random_cdmin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_random_cdmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_random_cdmin, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->show_random_cdmin = 4.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_random_cdmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_random_cdmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_random_cdmax, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->show_random_cdmax = 11.0;
  v1 = ((_BYTE)this + 32) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};
