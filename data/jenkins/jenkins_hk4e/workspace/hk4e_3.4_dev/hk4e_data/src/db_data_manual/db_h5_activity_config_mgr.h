// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_h5_activity_config_mgr.h

// Line 23: range 000000000D3B64D4-000000000D3B66C7
void __cdecl data::H5ActivityScheduleConfig::H5ActivityScheduleConfig(data::H5ActivityScheduleConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->h5_schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->h5_activity_id);
  }
  this->h5_activity_id = 0;
  std::string::basic_string(&this->begin_time_str);
  std::string::basic_string(&this->end_time_str);
  std::string::basic_string(&this->content_close_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->content_close_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->content_close_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->content_close_time);
  }
  this->content_close_time = 0;
  std::string::basic_string(&this->prefab_path);
  std::string::basic_string(&this->url_cn);
  std::string::basic_string(&this->url_os);
  if ( *(char *)(((unsigned __int64)&this->is_entrance_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_entrance_open);
  this->is_entrance_open = 1;
};

// Line 23: range 000000000D2C8E6E-000000000D2C8EE0
void __cdecl data::H5ActivityScheduleConfig::~H5ActivityScheduleConfig(data::H5ActivityScheduleConfig *const this)
{
  std::string::~string(&this->url_os);
  std::string::~string(&this->url_cn);
  std::string::~string(&this->prefab_path);
  std::string::~string(&this->content_close_time_str);
  std::string::~string(&this->end_time_str);
  std::string::~string(&this->begin_time_str);
};
