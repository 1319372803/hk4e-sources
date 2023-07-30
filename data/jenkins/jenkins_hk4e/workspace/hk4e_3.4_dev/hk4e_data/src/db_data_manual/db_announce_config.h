// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_announce_config.h

// Line 23: range 000000000CE439F6-000000000CE43CFA
void __cdecl data::AnnounceConfig::AnnounceConfig(data::AnnounceConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
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
  std::string::basic_string(&this->center_system_text);
  std::string::basic_string(&this->count_down_text);
  std::string::basic_string(&this->dungeon_confirm_text);
  if ( *(_BYTE *)(((unsigned __int64)&this->center_system_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_system_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_system_text_id);
  }
  this->center_system_text_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_text_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_text_id);
  }
  this->count_down_text_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_confirm_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_confirm_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_confirm_text_id);
  }
  this->dungeon_confirm_text_id = 0;
  std::string::basic_string(&this->server_version);
  if ( *(_BYTE *)(((unsigned __int64)&this->center_system_frequency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_system_frequency);
  }
  this->center_system_frequency = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_frequency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_frequency >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_frequency);
  }
  this->count_down_frequency = 0;
  std::map<unsigned int,std::set<unsigned int>>::map(&this->channel_config_map);
  std::set<unsigned int>::set(&this->platform_type_set);
  if ( *(char *)(((unsigned __int64)&this->is_center_system_last_5_every_minutes >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_center_system_last_5_every_minutes);
  this->is_center_system_last_5_every_minutes = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->enbale >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->enbale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->enbale);
  }
  this->enbale = 1;
};

// Line 23: range 000000000D0F18C4-000000000D0F1EEB
void __cdecl data::AnnounceConfig::AnnounceConfig(data::AnnounceConfig *const this, const data::AnnounceConfig *a2)
{
  uint32_t id; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t center_system_text_id; // ecx
  uint32_t count_down_text_id; // ecx
  uint32_t dungeon_confirm_text_id; // ecx
  uint32_t center_system_frequency; // ecx
  uint32_t count_down_frequency; // ecx
  bool is_center_system_last_5_every_minutes; // cl
  bool enbale; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
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
  std::string::basic_string(&this->center_system_text, &a2->center_system_text);
  std::string::basic_string(&this->count_down_text, &a2->count_down_text);
  std::string::basic_string(&this->dungeon_confirm_text, &a2->dungeon_confirm_text);
  if ( *(_BYTE *)(((unsigned __int64)&a2->center_system_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->center_system_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->center_system_text_id);
  }
  center_system_text_id = a2->center_system_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->center_system_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_system_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_system_text_id);
  }
  this->center_system_text_id = center_system_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count_down_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->count_down_text_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->count_down_text_id);
  }
  count_down_text_id = a2->count_down_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_text_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_text_id);
  }
  this->count_down_text_id = count_down_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_confirm_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_confirm_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_confirm_text_id);
  }
  dungeon_confirm_text_id = a2->dungeon_confirm_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_confirm_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_confirm_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_confirm_text_id);
  }
  this->dungeon_confirm_text_id = dungeon_confirm_text_id;
  std::string::basic_string(&this->server_version, &a2->server_version);
  if ( *(_BYTE *)(((unsigned __int64)&a2->center_system_frequency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->center_system_frequency);
  }
  center_system_frequency = a2->center_system_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&this->center_system_frequency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_system_frequency);
  }
  this->center_system_frequency = center_system_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count_down_frequency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->count_down_frequency >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->count_down_frequency);
  }
  count_down_frequency = a2->count_down_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_frequency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_frequency >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_frequency);
  }
  this->count_down_frequency = count_down_frequency;
  std::map<unsigned int,std::set<unsigned int>>::map(&this->channel_config_map, &a2->channel_config_map);
  std::set<unsigned int>::set(&this->platform_type_set, &a2->platform_type_set);
  if ( *(char *)(((unsigned __int64)&a2->is_center_system_last_5_every_minutes >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_center_system_last_5_every_minutes);
  is_center_system_last_5_every_minutes = a2->is_center_system_last_5_every_minutes;
  if ( *(char *)(((unsigned __int64)&this->is_center_system_last_5_every_minutes >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_center_system_last_5_every_minutes);
  this->is_center_system_last_5_every_minutes = is_center_system_last_5_every_minutes;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enbale >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->enbale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->enbale);
  }
  enbale = a2->enbale;
  if ( *(_BYTE *)(((unsigned __int64)&this->enbale >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->enbale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->enbale);
  }
  this->enbale = enbale;
};

// Line 23: range 000000000D43A3CA-000000000D43A974
void __cdecl data::AnnounceConfig::AnnounceConfig(data::AnnounceConfig *const this, data::AnnounceConfig *a2)
{
  uint32_t id; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t center_system_text_id; // ecx
  uint32_t count_down_text_id; // ecx
  uint32_t dungeon_confirm_text_id; // ecx
  uint32_t center_system_frequency; // ecx
  uint32_t count_down_frequency; // ecx
  bool is_center_system_last_5_every_minutes; // cl
  bool enbale; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
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
  std::string::basic_string(&this->center_system_text, &a2->center_system_text);
  std::string::basic_string(&this->count_down_text, &a2->count_down_text);
  std::string::basic_string(&this->dungeon_confirm_text, &a2->dungeon_confirm_text);
  if ( *(_BYTE *)(((unsigned __int64)&a2->center_system_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->center_system_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->center_system_text_id);
  }
  center_system_text_id = a2->center_system_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->center_system_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_system_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_system_text_id);
  }
  this->center_system_text_id = center_system_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count_down_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->count_down_text_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->count_down_text_id);
  }
  count_down_text_id = a2->count_down_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_text_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_text_id);
  }
  this->count_down_text_id = count_down_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_confirm_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_confirm_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_confirm_text_id);
  }
  dungeon_confirm_text_id = a2->dungeon_confirm_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_confirm_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_confirm_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_confirm_text_id);
  }
  this->dungeon_confirm_text_id = dungeon_confirm_text_id;
  std::string::basic_string(&this->server_version, &a2->server_version);
  if ( *(_BYTE *)(((unsigned __int64)&a2->center_system_frequency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->center_system_frequency);
  }
  center_system_frequency = a2->center_system_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&this->center_system_frequency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_system_frequency);
  }
  this->center_system_frequency = center_system_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count_down_frequency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->count_down_frequency >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->count_down_frequency);
  }
  count_down_frequency = a2->count_down_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_frequency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_frequency >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_frequency);
  }
  this->count_down_frequency = count_down_frequency;
  std::map<unsigned int,std::set<unsigned int>>::map(&this->channel_config_map, &a2->channel_config_map);
  std::set<unsigned int>::set(&this->platform_type_set, &a2->platform_type_set);
  if ( *(char *)(((unsigned __int64)&a2->is_center_system_last_5_every_minutes >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_center_system_last_5_every_minutes);
  is_center_system_last_5_every_minutes = a2->is_center_system_last_5_every_minutes;
  if ( *(char *)(((unsigned __int64)&this->is_center_system_last_5_every_minutes >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_center_system_last_5_every_minutes);
  this->is_center_system_last_5_every_minutes = is_center_system_last_5_every_minutes;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enbale >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->enbale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->enbale);
  }
  enbale = a2->enbale;
  if ( *(_BYTE *)(((unsigned __int64)&this->enbale >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->enbale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->enbale);
  }
  this->enbale = enbale;
};

// Line 23: range 000000000CE43CFC-000000000CE43D6E
void __cdecl data::AnnounceConfig::~AnnounceConfig(data::AnnounceConfig *const this)
{
  std::set<unsigned int>::~set(&this->platform_type_set);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->channel_config_map);
  std::string::~string(&this->server_version);
  std::string::~string(&this->dungeon_confirm_text);
  std::string::~string(&this->count_down_text);
  std::string::~string(&this->center_system_text);
};
