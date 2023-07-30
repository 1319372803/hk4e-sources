// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_live_config_mgr.h

// Line 23: range 000000000CE42F82-000000000CE4306D
void __cdecl data::LiveScheduleConfig::LiveScheduleConfig(data::LiveScheduleConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->live_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = 0;
  std::string::basic_string(&this->live_url);
  std::string::basic_string(&this->spare_live_url);
};

// Line 23: range 000000000D3B84D8-000000000D3B86AC
void __cdecl data::LiveScheduleConfig::LiveScheduleConfig(
        data::LiveScheduleConfig *const this,
        const data::LiveScheduleConfig *a2)
{
  uint32_t live_id; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  live_id = a2->live_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->live_id = live_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->begin_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->begin_time);
  }
  begin_time = a2->begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
  std::string::basic_string(&this->live_url, &a2->live_url);
  std::string::basic_string(&this->spare_live_url, &a2->spare_live_url);
};

// Line 23: range 000000000CE4306E-000000000CE4309C
void __cdecl data::LiveScheduleConfig::~LiveScheduleConfig(data::LiveScheduleConfig *const this)
{
  std::string::~string(&this->spare_live_url);
  std::string::~string(&this->live_url);
};
