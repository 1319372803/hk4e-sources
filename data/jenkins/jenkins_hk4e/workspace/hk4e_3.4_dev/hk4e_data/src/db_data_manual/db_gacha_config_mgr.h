// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_gacha_config_mgr.h

// Line 22: range 000000000CE422A2-000000000CE4234F
void __cdecl data::GachaUpConfig::GachaUpConfig(data::GachaUpConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->item_parent_type = GACHA_ITEM_PARENT_INVALID;
  if ( *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prob);
  }
  this->prob = 0;
  std::set<unsigned int>::set(&this->item_set);
  std::vector<unsigned int>::vector(&this->original_item_vec);
};

// Line 22: range 000000000D40172E-000000000D40188D
void __cdecl data::GachaUpConfig::GachaUpConfig(data::GachaUpConfig *const this, const data::GachaUpConfig *a2)
{
  data::GachaItemParentType item_parent_type; // ecx
  uint32_t prob; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  item_parent_type = a2->item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->item_parent_type = item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->prob);
  }
  prob = a2->prob;
  if ( *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prob);
  }
  this->prob = prob;
  std::set<unsigned int>::set(&this->item_set, &a2->item_set);
  std::vector<unsigned int>::vector(&this->original_item_vec, &a2->original_item_vec);
};

// Line 22: range 000000000CE42350-000000000CE4237E
void __cdecl data::GachaUpConfig::~GachaUpConfig(data::GachaUpConfig *const this)
{
  std::vector<unsigned int>::~vector(&this->original_item_vec);
  std::set<unsigned int>::~set(&this->item_set);
};

// Line 30: range 000000000D1FB906-000000000D1FBEA9
data::GachaScheduleConfig *__cdecl data::GachaScheduleConfig::operator=(
        data::GachaScheduleConfig *const this,
        data::GachaScheduleConfig *a2)
{
  uint32_t schedule_id; // ecx
  data::GachaType gacha_type; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t cost_item_id; // ecx
  uint32_t cost_item_num; // ecx
  uint32_t gacha_pool_id; // ecx
  uint32_t gacha_prob_rule_id; // ecx
  uint32_t gacha_sort_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  schedule_id = a2->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gacha_type);
  }
  gacha_type = a2->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_type);
  }
  this->gacha_type = gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->begin_time);
  }
  begin_time = a2->begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_item_id);
  }
  cost_item_id = a2->cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_item_id);
  }
  this->cost_item_id = cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_item_num);
  }
  cost_item_num = a2->cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_item_num);
  }
  this->cost_item_num = cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_pool_id);
  }
  gacha_pool_id = a2->gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_pool_id);
  }
  this->gacha_pool_id = gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gacha_prob_rule_id);
  }
  gacha_prob_rule_id = a2->gacha_prob_rule_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_prob_rule_id);
  }
  this->gacha_prob_rule_id = gacha_prob_rule_id;
  std::vector<data::GachaUpConfig>::operator=(&this->up_config_vec, &a2->up_config_vec);
  std::set<unsigned int>::operator=(&this->gacha_rule_set, &a2->gacha_rule_set);
  std::string::operator=(&this->gacha_prefab_path, &a2->gacha_prefab_path);
  std::string::operator=(&this->gacha_prob_url, &a2->gacha_prob_url);
  std::string::operator=(&this->gacha_record_url, &a2->gacha_record_url);
  std::string::operator=(&this->gacha_prob_url_oversea, &a2->gacha_prob_url_oversea);
  std::string::operator=(&this->gacha_record_url_oversea, &a2->gacha_record_url_oversea);
  std::string::operator=(&this->gacha_preview_prefab_path, &a2->gacha_preview_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_sort_id);
  }
  gacha_sort_id = a2->gacha_sort_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_sort_id);
  }
  this->gacha_sort_id = gacha_sort_id;
  std::string::operator=(&this->title_textmap, &a2->title_textmap);
  std::vector<unsigned int>::operator=(&this->display_up4_item_vec, &a2->display_up4_item_vec);
  return this;
};

// Line 30: range 000000000CE41F96-000000000CE422A0
void __cdecl data::GachaScheduleConfig::GachaScheduleConfig(data::GachaScheduleConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_type);
  }
  this->gacha_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_item_id);
  }
  this->cost_item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_item_num);
  }
  this->cost_item_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_pool_id);
  }
  this->gacha_pool_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_prob_rule_id);
  }
  this->gacha_prob_rule_id = 0;
  std::vector<data::GachaUpConfig>::vector(&this->up_config_vec);
  std::set<unsigned int>::set(&this->gacha_rule_set);
  std::string::basic_string(&this->gacha_prefab_path);
  std::string::basic_string(&this->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url);
  std::string::basic_string(&this->gacha_prob_url_oversea);
  std::string::basic_string(&this->gacha_record_url_oversea);
  std::string::basic_string(&this->gacha_preview_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_sort_id);
  }
  this->gacha_sort_id = 0;
  std::string::basic_string(&this->title_textmap);
  std::vector<unsigned int>::vector(&this->display_up4_item_vec);
};

// Line 30: range 000000000D0E20CC-000000000D0E274A
void __cdecl data::GachaScheduleConfig::GachaScheduleConfig(
        data::GachaScheduleConfig *const this,
        const data::GachaScheduleConfig *a2)
{
  uint32_t schedule_id; // ecx
  data::GachaType gacha_type; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t cost_item_id; // ecx
  uint32_t cost_item_num; // ecx
  uint32_t gacha_pool_id; // ecx
  uint32_t gacha_prob_rule_id; // ecx
  uint32_t gacha_sort_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  schedule_id = a2->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gacha_type);
  }
  gacha_type = a2->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_type);
  }
  this->gacha_type = gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->begin_time);
  }
  begin_time = a2->begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_item_id);
  }
  cost_item_id = a2->cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_item_id);
  }
  this->cost_item_id = cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_item_num);
  }
  cost_item_num = a2->cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_item_num);
  }
  this->cost_item_num = cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_pool_id);
  }
  gacha_pool_id = a2->gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_pool_id);
  }
  this->gacha_pool_id = gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gacha_prob_rule_id);
  }
  gacha_prob_rule_id = a2->gacha_prob_rule_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_prob_rule_id);
  }
  this->gacha_prob_rule_id = gacha_prob_rule_id;
  std::vector<data::GachaUpConfig>::vector(&this->up_config_vec, &a2->up_config_vec);
  std::set<unsigned int>::set(&this->gacha_rule_set, &a2->gacha_rule_set);
  std::string::basic_string(&this->gacha_prefab_path, &a2->gacha_prefab_path);
  std::string::basic_string(&this->gacha_prob_url, &a2->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url, &a2->gacha_record_url);
  std::string::basic_string(&this->gacha_prob_url_oversea, &a2->gacha_prob_url_oversea);
  std::string::basic_string(&this->gacha_record_url_oversea, &a2->gacha_record_url_oversea);
  std::string::basic_string(&this->gacha_preview_prefab_path, &a2->gacha_preview_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_sort_id);
  }
  gacha_sort_id = a2->gacha_sort_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_sort_id);
  }
  this->gacha_sort_id = gacha_sort_id;
  std::string::basic_string(&this->title_textmap, &a2->title_textmap);
  std::vector<unsigned int>::vector(&this->display_up4_item_vec, &a2->display_up4_item_vec);
};

// Line 30: range 000000000D1FB33A-000000000D1FB8DA
void __cdecl data::GachaScheduleConfig::GachaScheduleConfig(
        data::GachaScheduleConfig *const this,
        data::GachaScheduleConfig *a2)
{
  uint32_t schedule_id; // ecx
  data::GachaType gacha_type; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t cost_item_id; // ecx
  uint32_t cost_item_num; // ecx
  uint32_t gacha_pool_id; // ecx
  uint32_t gacha_prob_rule_id; // ecx
  uint32_t gacha_sort_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  schedule_id = a2->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gacha_type);
  }
  gacha_type = a2->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_type);
  }
  this->gacha_type = gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->begin_time);
  }
  begin_time = a2->begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_item_id);
  }
  cost_item_id = a2->cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_item_id);
  }
  this->cost_item_id = cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_item_num);
  }
  cost_item_num = a2->cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_item_num);
  }
  this->cost_item_num = cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_pool_id);
  }
  gacha_pool_id = a2->gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_pool_id);
  }
  this->gacha_pool_id = gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gacha_prob_rule_id);
  }
  gacha_prob_rule_id = a2->gacha_prob_rule_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_prob_rule_id);
  }
  this->gacha_prob_rule_id = gacha_prob_rule_id;
  std::vector<data::GachaUpConfig>::vector(&this->up_config_vec, &a2->up_config_vec);
  std::set<unsigned int>::set(&this->gacha_rule_set, &a2->gacha_rule_set);
  std::string::basic_string(&this->gacha_prefab_path, &a2->gacha_prefab_path);
  std::string::basic_string(&this->gacha_prob_url, &a2->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url, &a2->gacha_record_url);
  std::string::basic_string(&this->gacha_prob_url_oversea, &a2->gacha_prob_url_oversea);
  std::string::basic_string(&this->gacha_record_url_oversea, &a2->gacha_record_url_oversea);
  std::string::basic_string(&this->gacha_preview_prefab_path, &a2->gacha_preview_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_sort_id);
  }
  gacha_sort_id = a2->gacha_sort_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_sort_id);
  }
  this->gacha_sort_id = gacha_sort_id;
  std::string::basic_string(&this->title_textmap, &a2->title_textmap);
  std::vector<unsigned int>::vector(&this->display_up4_item_vec, &a2->display_up4_item_vec);
};

// Line 30: range 000000000CE0AEEA-000000000CE0AFA6
void __cdecl data::GachaScheduleConfig::~GachaScheduleConfig(data::GachaScheduleConfig *const this)
{
  std::vector<unsigned int>::~vector(&this->display_up4_item_vec);
  std::string::~string(&this->title_textmap);
  std::string::~string(&this->gacha_preview_prefab_path);
  std::string::~string(&this->gacha_record_url_oversea);
  std::string::~string(&this->gacha_prob_url_oversea);
  std::string::~string(&this->gacha_record_url);
  std::string::~string(&this->gacha_prob_url);
  std::string::~string(&this->gacha_prefab_path);
  std::set<unsigned int>::~set(&this->gacha_rule_set);
  std::vector<data::GachaUpConfig>::~vector(&this->up_config_vec);
};

// Line 68: range 000000000CE42482-000000000CE424E9
void __cdecl data::GachaNewbieUrlConfig::GachaNewbieUrlConfig(data::GachaNewbieUrlConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->priority = 0;
  std::string::basic_string(&this->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url);
};

// Line 68: range 000000000D3B2CCA-000000000D3B2DA4
void __cdecl data::GachaNewbieUrlConfig::GachaNewbieUrlConfig(
        data::GachaNewbieUrlConfig *const this,
        const data::GachaNewbieUrlConfig *a2)
{
  uint32_t priority; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->priority = priority;
  std::string::basic_string(&this->gacha_prob_url, &a2->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url, &a2->gacha_record_url);
};

// Line 68: range 000000000CE424EA-000000000CE42518
void __cdecl data::GachaNewbieUrlConfig::~GachaNewbieUrlConfig(data::GachaNewbieUrlConfig *const this)
{
  std::string::~string(&this->gacha_record_url);
  std::string::~string(&this->gacha_prob_url);
};

// Line 75: range 000000000D0DEFF4-000000000D0DF12C
void __cdecl data::GachaUpConfig::GachaUpConfig(data::GachaUpConfig *const this, data::GachaUpConfig *a2)
{
  data::GachaItemParentType item_parent_type; // ecx
  uint32_t prob; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  item_parent_type = a2->item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->item_parent_type = item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->prob);
  }
  prob = a2->prob;
  if ( *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prob);
  }
  this->prob = prob;
  std::set<unsigned int>::set(&this->item_set, &a2->item_set);
  std::vector<unsigned int>::vector(&this->original_item_vec, &a2->original_item_vec);
};
