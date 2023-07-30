// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_register_black_ip_config_mgr.h

// Line 29: range 000000000CE46D06-000000000CE46E1D
void __cdecl data::RegisterBlackIpConfig::RegisterBlackIpConfig(
        data::RegisterBlackIpConfig *const this,
        uint32_t ip_0,
        uint8_t pre)
{
  uint32_t v3; // edi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->ip_int = ip_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->prefix >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->prefix);
  }
  this->prefix = pre;
  v3 = (1 << this->prefix) - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_mask >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prefix_mask >> 3) + 0x7FFF8000) )
  {
    v3 = (_DWORD)this + 8;
    __asan_report_store4(&this->prefix_mask);
  }
  this->prefix_mask = v3;
  if ( this->prefix )
    this->ip_int &= this->prefix_mask;
};
