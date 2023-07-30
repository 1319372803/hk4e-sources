// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/flag.hpp

// Line 80: range 000000000CE4EDBA-000000000CE4EE0F
bool __cdecl Flag<ConfigOption>::isOpen(const Flag<ConfigOption> *const this, ConfigOption option)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return (option & this->options) != 0;
};

// Line 1009: range 000000000C65B7F0-000000000C65B83F
void __cdecl Flag<ConfigOption>::Flag(Flag<ConfigOption> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->options = 0;
};
