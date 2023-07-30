// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_cmd_frequency_config_mgr.h

// Line 25: range 000000000CE3EF82-000000000CE3F064
void __cdecl data::CmdFrequencyConfig::CmdFrequencyConfig(data::CmdFrequencyConfig *const this)
{
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->frequency_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->frequency_limit);
  }
  this->frequency_limit = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->discard_packet_freq_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->discard_packet_freq_limit);
  }
  this->discard_packet_freq_limit = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->disconnect_freq_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disconnect_freq_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disconnect_freq_limit);
  }
  this->disconnect_freq_limit = 0.0;
};

// Line 25: range 000000000D3A6E90-000000000D3A702D
void __cdecl data::CmdFrequencyConfig::CmdFrequencyConfig(
        data::CmdFrequencyConfig *const this,
        const data::CmdFrequencyConfig *a2)
{
  float frequency_limit; // xmm0_4
  float discard_packet_freq_limit; // xmm0_4
  float disconnect_freq_limit; // xmm0_4

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->frequency_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->frequency_limit);
  }
  frequency_limit = a2->frequency_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->frequency_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->frequency_limit);
  }
  this->frequency_limit = frequency_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->discard_packet_freq_limit >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->discard_packet_freq_limit);
  }
  discard_packet_freq_limit = a2->discard_packet_freq_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->discard_packet_freq_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->discard_packet_freq_limit);
  }
  this->discard_packet_freq_limit = discard_packet_freq_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disconnect_freq_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->disconnect_freq_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->disconnect_freq_limit);
  }
  disconnect_freq_limit = a2->disconnect_freq_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->disconnect_freq_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disconnect_freq_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disconnect_freq_limit);
  }
  this->disconnect_freq_limit = disconnect_freq_limit;
};

// Line 25: range 000000000CE3F066-000000000CE3F080
void __cdecl data::CmdFrequencyConfig::~CmdFrequencyConfig(data::CmdFrequencyConfig *const this)
{
  std::string::~string(this);
};
