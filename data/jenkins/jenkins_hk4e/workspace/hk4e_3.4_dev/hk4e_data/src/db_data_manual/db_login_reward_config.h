// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_login_reward_config.h

// Line 25: range 000000000CE432E2-000000000CE436E7
void __cdecl data::DbLoginRewardConfig::DbLoginRewardConfig(data::DbLoginRewardConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_type);
  }
  this->config_type = LOGIN_REWARD_FIRST;
  std::string::basic_string(&this->reward_rules_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->email_valid_days);
  }
  this->email_valid_days = 0;
  std::string::basic_string(&this->email_title);
  std::string::basic_string(&this->email_sender);
  std::string::basic_string(&this->email_content);
  std::string::basic_string(&this->item_list_str);
  std::string::basic_string(&this->effective_account_type_list_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = 0;
  std::vector<unsigned int>::vector(&this->effective_account_type_vec);
  common::tools::MathExpression::MathExpression(&this->reward_expression);
  proto::EquipParamList::EquipParamList(&this->reward_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->email_title_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->email_title_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->email_title_text_id);
  }
  this->email_title_text_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->email_sender_text_id);
  }
  this->email_sender_text_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_content_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->email_content_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->email_content_text_id);
  }
  this->email_content_text_id = 0;
  std::string::basic_string(&this->tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->importance);
  }
  this->importance = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_collectible >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_collectible >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_collectible);
  }
  this->is_collectible = 0;
};

// Line 25: range 000000000D3B93BE-000000000D3B9AE1
void __cdecl data::DbLoginRewardConfig::DbLoginRewardConfig(
        data::DbLoginRewardConfig *const this,
        const data::DbLoginRewardConfig *a2)
{
  uint32_t config_id; // ecx
  proto::LoginRewardConfigType config_type; // ecx
  uint32_t email_valid_days; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t email_title_text_id; // ecx
  uint32_t email_sender_text_id; // ecx
  uint32_t email_content_text_id; // ecx
  uint32_t importance; // ecx
  bool is_collectible; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_type);
  }
  config_type = a2->config_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_type);
  }
  this->config_type = config_type;
  std::string::basic_string(&this->reward_rules_str, &a2->reward_rules_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->email_valid_days);
  }
  email_valid_days = a2->email_valid_days;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->email_valid_days);
  }
  this->email_valid_days = email_valid_days;
  std::string::basic_string(&this->email_title, &a2->email_title);
  std::string::basic_string(&this->email_sender, &a2->email_sender);
  std::string::basic_string(&this->email_content, &a2->email_content);
  std::string::basic_string(&this->item_list_str, &a2->item_list_str);
  std::string::basic_string(&this->effective_account_type_list_str, &a2->effective_account_type_list_str);
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
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
  std::vector<unsigned int>::vector(&this->effective_account_type_vec, &a2->effective_account_type_vec);
  common::tools::MathExpression::MathExpression(&this->reward_expression, &a2->reward_expression);
  proto::EquipParamList::EquipParamList(&this->reward_item_list, &a2->reward_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_title_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->email_title_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->email_title_text_id);
  }
  email_title_text_id = a2->email_title_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_title_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->email_title_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->email_title_text_id);
  }
  this->email_title_text_id = email_title_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_sender_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->email_sender_text_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->email_sender_text_id);
  }
  email_sender_text_id = a2->email_sender_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->email_sender_text_id);
  }
  this->email_sender_text_id = email_sender_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_content_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->email_content_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->email_content_text_id);
  }
  email_content_text_id = a2->email_content_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_content_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->email_content_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->email_content_text_id);
  }
  this->email_content_text_id = email_content_text_id;
  std::string::basic_string(&this->tag, &a2->tag);
  if ( *(_BYTE *)(((unsigned __int64)&a2->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->importance);
  }
  importance = a2->importance;
  if ( *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->importance);
  }
  this->importance = importance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_collectible >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_collectible >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_collectible);
  }
  is_collectible = a2->is_collectible;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_collectible >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_collectible >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_collectible);
  }
  this->is_collectible = is_collectible;
};

// Line 25: range 000000000CE436E8-000000000CE437A2
void __cdecl data::DbLoginRewardConfig::~DbLoginRewardConfig(data::DbLoginRewardConfig *const this)
{
  std::string::~string(&this->tag);
  proto::EquipParamList::~EquipParamList(&this->reward_item_list);
  common::tools::MathExpression::~MathExpression(&this->reward_expression);
  std::vector<unsigned int>::~vector(&this->effective_account_type_vec);
  std::string::~string(&this->effective_account_type_list_str);
  std::string::~string(&this->item_list_str);
  std::string::~string(&this->email_content);
  std::string::~string(&this->email_sender);
  std::string::~string(&this->email_title);
  std::string::~string(&this->reward_rules_str);
};

// Line 56: range 000000000CE4476A-000000000CE44807
void __cdecl data::DbTextmapConfig::DbTextmapConfig(data::DbTextmapConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->text_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delete_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delete_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delete_time);
  }
  this->delete_time = 0;
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->multi_text_map);
};

// Line 56: range 000000000CE44808-000000000CE44826
void __cdecl data::DbTextmapConfig::~DbTextmapConfig(data::DbTextmapConfig *const this)
{
  std::unordered_map<unsigned int,std::string>::~unordered_map(&this->multi_text_map);
};

// Line 181: range 000000000D3BC404-000000000D3BC521
void __cdecl data::DbTextmapConfig::DbTextmapConfig(data::DbTextmapConfig *const this, const data::DbTextmapConfig *a2)
{
  uint32_t text_id; // ecx
  uint32_t delete_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  text_id = a2->text_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->text_id = text_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delete_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->delete_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->delete_time);
  }
  delete_time = a2->delete_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->delete_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delete_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delete_time);
  }
  this->delete_time = delete_time;
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->multi_text_map, &a2->multi_text_map);
};
