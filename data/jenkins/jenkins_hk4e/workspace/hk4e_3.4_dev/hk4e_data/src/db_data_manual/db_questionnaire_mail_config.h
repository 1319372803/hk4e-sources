// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_questionnaire_mail_config.h

// Line 25: range 000000000D2049E4-000000000D204E30
data::DbQuestionnaireMailConfig *__cdecl data::DbQuestionnaireMailConfig::operator=(
        data::DbQuestionnaireMailConfig *const this,
        data::DbQuestionnaireMailConfig *a2)
{
  uint32_t config_id; // ecx
  uint32_t email_valid_days; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t email_title_text_id; // ecx
  uint32_t email_sender_text_id; // ecx
  uint32_t email_content_text_id; // ecx

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
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->email_valid_days);
  }
  email_valid_days = a2->email_valid_days;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->email_valid_days);
  }
  this->email_valid_days = email_valid_days;
  std::string::operator=(&this->email_title, &a2->email_title);
  std::string::operator=(&this->email_sender, &a2->email_sender);
  std::string::operator=(&this->email_content, &a2->email_content);
  std::string::operator=(&this->item_list_str, &a2->item_list_str);
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
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
  proto::EquipParamList::operator=(&this->reward_item_list, &a2->reward_item_list);
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
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->email_sender_text_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->email_sender_text_id);
  }
  email_sender_text_id = a2->email_sender_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3)
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
  std::string::operator=(&this->tag, &a2->tag);
  return this;
};

// Line 25: range 000000000CE43F26-000000000CE441CD
void __cdecl data::DbQuestionnaireMailConfig::DbQuestionnaireMailConfig(data::DbQuestionnaireMailConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->email_valid_days);
  }
  this->email_valid_days = 0;
  std::string::basic_string(&this->email_title);
  std::string::basic_string(&this->email_sender);
  std::string::basic_string(&this->email_content);
  std::string::basic_string(&this->item_list_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->begin_time);
  }
  this->begin_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = 0;
  proto::EquipParamList::EquipParamList(&this->reward_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->email_title_text_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->email_title_text_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->email_title_text_id);
  }
  this->email_title_text_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3)
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
};

// Line 25: range 000000000D0EF55E-000000000D0EFA24
void __cdecl data::DbQuestionnaireMailConfig::DbQuestionnaireMailConfig(
        data::DbQuestionnaireMailConfig *const this,
        const data::DbQuestionnaireMailConfig *a2)
{
  uint32_t config_id; // ecx
  uint32_t email_valid_days; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t email_title_text_id; // ecx
  uint32_t email_sender_text_id; // ecx
  uint32_t email_content_text_id; // ecx

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
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->email_valid_days);
  }
  email_valid_days = a2->email_valid_days;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->email_valid_days);
  }
  this->email_valid_days = email_valid_days;
  std::string::basic_string(&this->email_title, &a2->email_title);
  std::string::basic_string(&this->email_sender, &a2->email_sender);
  std::string::basic_string(&this->email_content, &a2->email_content);
  std::string::basic_string(&this->item_list_str, &a2->item_list_str);
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
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
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
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->email_sender_text_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->email_sender_text_id);
  }
  email_sender_text_id = a2->email_sender_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3)
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
};

// Line 25: range 000000000D20459A-000000000D2049E3
void __cdecl data::DbQuestionnaireMailConfig::DbQuestionnaireMailConfig(
        data::DbQuestionnaireMailConfig *const this,
        data::DbQuestionnaireMailConfig *a2)
{
  uint32_t config_id; // ecx
  uint32_t email_valid_days; // ecx
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  uint32_t email_title_text_id; // ecx
  uint32_t email_sender_text_id; // ecx
  uint32_t email_content_text_id; // ecx

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
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->email_valid_days);
  }
  email_valid_days = a2->email_valid_days;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->email_valid_days);
  }
  this->email_valid_days = email_valid_days;
  std::string::basic_string(&this->email_title, &a2->email_title);
  std::string::basic_string(&this->email_sender, &a2->email_sender);
  std::string::basic_string(&this->email_content, &a2->email_content);
  std::string::basic_string(&this->item_list_str, &a2->item_list_str);
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
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
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
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->email_sender_text_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->email_sender_text_id);
  }
  email_sender_text_id = a2->email_sender_text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_sender_text_id >> 3)
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
};

// Line 25: range 000000000CE441CE-000000000CE44240
void __cdecl data::DbQuestionnaireMailConfig::~DbQuestionnaireMailConfig(data::DbQuestionnaireMailConfig *const this)
{
  std::string::~string(&this->tag);
  proto::EquipParamList::~EquipParamList(&this->reward_item_list);
  std::string::~string(&this->item_list_str);
  std::string::~string(&this->email_content);
  std::string::~string(&this->email_sender);
  std::string::~string(&this->email_title);
};
