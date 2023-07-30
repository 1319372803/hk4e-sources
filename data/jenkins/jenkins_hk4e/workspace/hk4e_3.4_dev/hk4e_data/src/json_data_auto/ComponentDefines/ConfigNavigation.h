// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigNavigation.h

// Line 33: range 000000000ED8C416-000000000ED8C57D
void __cdecl data::ConfigNavigation::ConfigNavigation(data::ConfigNavigation *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->type = None_26;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->size_x, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->size_x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->size_y, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->size_y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->size_z, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->size_z = 0.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};
