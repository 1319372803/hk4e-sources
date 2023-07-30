// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mail/player_mail_comp.h

// Line 33: range 000000001385C5B2-000000001385C95B
void __cdecl MailData::MailData(MailData *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v2 = (int (**)(...))(&`vtable for'MailData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mail_id, v1, &this->mail_id);
  }
  this->mail_id = 0;
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->content);
  std::string::basic_string(&this->sender);
  std::vector<ItemParam>::vector(&this->item_param_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->send_time, v1, &this->send_time);
  }
  this->send_time = 0;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->expire_time, v3, v4);
  this->expire_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->importance, v3, &this->importance);
  }
  this->importance = 0;
  v5 = (((_BYTE)this - 108) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->config_id, v5, v6);
  this->config_id = 0;
  std::vector<std::string>::vector(&this->argument_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_limit_type, v5, &this->item_limit_type);
  }
  this->item_limit_type = 0;
  v7 = (((_BYTE)this - 76) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->source_type, v7, v8);
  this->source_type = 0;
  std::string::basic_string(&this->tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason_type, v7, &this->reason_type);
  }
  this->reason_type = 0;
  v9 = ((_BYTE)this - 36) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_read >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_read >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_read, v9, v10);
  this->is_read = 0;
  v11 = ((_BYTE)this - 35) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_attachment_got, v11, v12);
  this->is_attachment_got = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collect_state, v11, &this->collect_state);
  }
  this->collect_state = MAIL_COLLECTIBLE_UNKONW;
};

// Line 33: range 0000000017857A4A-00000000178580FF
void __cdecl MailData::MailData(MailData *const this, MailData *a2)
{
  int (**v2)(...); // rdx
  uint32_t mail_id; // ecx
  char v4; // al
  std::vector<ItemParam> *p_item_param_vec; // rsi
  uint32_t send_time; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t expire_time; // ecx
  char v10; // dl
  __int64 v11; // rdx
  uint32_t importance; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t config_id; // ecx
  char v16; // dl
  __int64 v17; // rdx
  std::vector<std::string> *p_argument_vec; // rsi
  uint32_t item_limit_type; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t source_type; // ecx
  char v23; // dl
  __int64 v24; // rdx
  std::string *p_tag; // rsi
  uint32_t reason_type; // ecx
  char v27; // al
  __int64 v28; // rsi
  bool is_read; // cl
  char v30; // dl
  __int64 v31; // rdx
  __int64 v32; // rsi
  bool is_attachment_got; // cl
  char v34; // dl
  __int64 v35; // rdx
  proto::MailCollectState collect_state; // ecx
  char v37; // al
  MailData *v38; // [rsp+0h] [rbp-10h]

  v38 = a2;
  common::milog::DescribalBase::DescribalBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'MailData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mail_id);
  }
  mail_id = a2->mail_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->mail_id, a2, &this->mail_id);
  }
  this->mail_id = mail_id;
  std::string::basic_string(&this->title, &v38->title);
  std::string::basic_string(&this->content, &v38->content);
  std::string::basic_string(&this->sender, &v38->sender);
  p_item_param_vec = &v38->item_param_vec;
  std::vector<ItemParam>::vector(&this->item_param_vec, &v38->item_param_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v38->send_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->send_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->send_time);
  }
  send_time = v38->send_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_item_param_vec) = v7 != 0;
    __asan_report_store4(&this->send_time, p_item_param_vec, &this->send_time);
  }
  this->send_time = send_time;
  v8 = (((_BYTE)v38 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->expire_time);
  }
  expire_time = v38->expire_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->expire_time, v8, v11);
  this->expire_time = expire_time;
  if ( *(_BYTE *)(((unsigned __int64)&v38->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->importance);
  }
  importance = v38->importance;
  v13 = *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v8) = v13 != 0;
    __asan_report_store4(&this->importance, v8, &this->importance);
  }
  this->importance = importance;
  v14 = (((_BYTE)v38 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->config_id);
  }
  config_id = v38->config_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->config_id, v14, v17);
  this->config_id = config_id;
  p_argument_vec = &v38->argument_vec;
  std::vector<std::string>::vector(&this->argument_vec, &v38->argument_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v38->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->item_limit_type);
  }
  item_limit_type = v38->item_limit_type;
  v20 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_argument_vec) = v20 != 0;
    __asan_report_store4(&this->item_limit_type, p_argument_vec, &this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  v21 = (((_BYTE)v38 - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->source_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->source_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->source_type);
  }
  source_type = v38->source_type;
  v23 = *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store4(&this->source_type, v21, v24);
  this->source_type = source_type;
  p_tag = &v38->tag;
  std::string::basic_string(&this->tag, &v38->tag);
  if ( *(_BYTE *)(((unsigned __int64)&v38->reason_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->reason_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->reason_type);
  }
  reason_type = v38->reason_type;
  v27 = *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(p_tag) = v27 != 0;
    __asan_report_store4(&this->reason_type, p_tag, &this->reason_type);
  }
  this->reason_type = reason_type;
  v28 = ((_BYTE)v38 - 36) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v38->is_read >> 3) + 0x7FFF8000) != 0
    && (char)v28 >= *(_BYTE *)(((unsigned __int64)&v38->is_read >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v38->is_read);
  }
  is_read = v38->is_read;
  v30 = *(_BYTE *)(((unsigned __int64)&this->is_read >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store1(&this->is_read, v28, v31);
  this->is_read = is_read;
  v32 = ((_BYTE)v38 - 35) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v38->is_attachment_got >> 3) + 0x7FFF8000) != 0
    && (char)v32 >= *(_BYTE *)(((unsigned __int64)&v38->is_attachment_got >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v38->is_attachment_got);
  }
  is_attachment_got = v38->is_attachment_got;
  v34 = *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000);
  LOBYTE(v32) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this - 35) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->is_attachment_got, v32, v35);
  this->is_attachment_got = is_attachment_got;
  if ( *(_BYTE *)(((unsigned __int64)&v38->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->collect_state);
  }
  collect_state = v38->collect_state;
  v37 = *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000);
  if ( v37 != 0 && v37 <= 3 )
  {
    LOBYTE(v32) = v37 != 0;
    __asan_report_store4(&this->collect_state, v32, &this->collect_state);
  }
  this->collect_state = collect_state;
};

// Line 33: range 0000000017737F0C-000000001773863E
void __cdecl MailData::MailData(MailData *const this, const MailData *a2)
{
  int (**v2)(...); // rdx
  uint32_t mail_id; // ecx
  char v4; // al
  std::vector<ItemParam> *p_item_param_vec; // rsi
  uint32_t send_time; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t expire_time; // ecx
  char v10; // dl
  __int64 v11; // rdx
  uint32_t importance; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t config_id; // ecx
  char v16; // dl
  __int64 v17; // rdx
  std::vector<std::string> *p_argument_vec; // rsi
  uint32_t item_limit_type; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t source_type; // ecx
  char v23; // dl
  __int64 v24; // rdx
  std::string *p_tag; // rsi
  uint32_t reason_type; // ecx
  char v27; // al
  __int64 v28; // rsi
  bool is_read; // cl
  char v30; // dl
  __int64 v31; // rdx
  __int64 v32; // rsi
  bool is_attachment_got; // cl
  char v34; // dl
  __int64 v35; // rdx
  proto::MailCollectState collect_state; // ecx
  char v37; // al
  const MailData *v38; // [rsp+0h] [rbp-20h]

  v38 = a2;
  common::milog::DescribalBase::DescribalBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'MailData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mail_id);
  }
  mail_id = a2->mail_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->mail_id, a2, &this->mail_id);
  }
  this->mail_id = mail_id;
  std::string::basic_string(&this->title, &v38->title);
  std::string::basic_string(&this->content, &v38->content);
  std::string::basic_string(&this->sender, &v38->sender);
  p_item_param_vec = &v38->item_param_vec;
  std::vector<ItemParam>::vector(&this->item_param_vec, &v38->item_param_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v38->send_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->send_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->send_time);
  }
  send_time = v38->send_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_item_param_vec) = v7 != 0;
    __asan_report_store4(&this->send_time, p_item_param_vec, &this->send_time);
  }
  this->send_time = send_time;
  v8 = (((_BYTE)v38 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->expire_time);
  }
  expire_time = v38->expire_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->expire_time, v8, v11);
  this->expire_time = expire_time;
  if ( *(_BYTE *)(((unsigned __int64)&v38->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->importance);
  }
  importance = v38->importance;
  v13 = *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v8) = v13 != 0;
    __asan_report_store4(&this->importance, v8, &this->importance);
  }
  this->importance = importance;
  v14 = (((_BYTE)v38 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->config_id);
  }
  config_id = v38->config_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->config_id, v14, v17);
  this->config_id = config_id;
  p_argument_vec = &v38->argument_vec;
  std::vector<std::string>::vector(&this->argument_vec, &v38->argument_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v38->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->item_limit_type);
  }
  item_limit_type = v38->item_limit_type;
  v20 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_argument_vec) = v20 != 0;
    __asan_report_store4(&this->item_limit_type, p_argument_vec, &this->item_limit_type);
  }
  this->item_limit_type = item_limit_type;
  v21 = (((_BYTE)v38 - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->source_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->source_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->source_type);
  }
  source_type = v38->source_type;
  v23 = *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store4(&this->source_type, v21, v24);
  this->source_type = source_type;
  p_tag = &v38->tag;
  std::string::basic_string(&this->tag, &v38->tag);
  if ( *(_BYTE *)(((unsigned __int64)&v38->reason_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->reason_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->reason_type);
  }
  reason_type = v38->reason_type;
  v27 = *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(p_tag) = v27 != 0;
    __asan_report_store4(&this->reason_type, p_tag, &this->reason_type);
  }
  this->reason_type = reason_type;
  v28 = ((_BYTE)v38 - 36) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v38->is_read >> 3) + 0x7FFF8000) != 0
    && (char)v28 >= *(_BYTE *)(((unsigned __int64)&v38->is_read >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v38->is_read);
  }
  is_read = v38->is_read;
  v30 = *(_BYTE *)(((unsigned __int64)&this->is_read >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store1(&this->is_read, v28, v31);
  this->is_read = is_read;
  v32 = ((_BYTE)v38 - 35) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v38->is_attachment_got >> 3) + 0x7FFF8000) != 0
    && (char)v32 >= *(_BYTE *)(((unsigned __int64)&v38->is_attachment_got >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v38->is_attachment_got);
  }
  is_attachment_got = v38->is_attachment_got;
  v34 = *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000);
  LOBYTE(v32) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this - 35) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->is_attachment_got, v32, v35);
  this->is_attachment_got = is_attachment_got;
  if ( *(_BYTE *)(((unsigned __int64)&v38->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->collect_state);
  }
  collect_state = v38->collect_state;
  v37 = *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000);
  if ( v37 != 0 && v37 <= 3 )
  {
    LOBYTE(v32) = v37 != 0;
    __asan_report_store4(&this->collect_state, v32, &this->collect_state);
  }
  this->collect_state = collect_state;
};

// Line 33: range 000000001385C95C-000000001385CA01
void __cdecl MailData::~MailData(MailData *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MailData + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::string::~string(&this->tag);
  std::vector<std::string>::~vector(&this->argument_vec);
  std::vector<ItemParam>::~vector(&this->item_param_vec);
  std::string::~string(&this->sender);
  std::string::~string(&this->content);
  std::string::~string(&this->title);
};

// Line 64: range 00000000178879A8-0000000017887A39
void __cdecl PlayerMailComp::~PlayerMailComp(PlayerMailComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerMailComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<std::string,proto::MailBin>::~unordered_map(&this->new_wait_add_mail_map_);
  std::map<unsigned int,unsigned int>::~map(&this->action_seq_map_);
  std::map<unsigned long,proto::MailBin>::~map(&this->wait_add_mail_map_);
  std::set<unsigned int>::~set(&this->has_take_attachment_mail_id_set_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 64: range 0000000017887A3A-0000000017887A64
void __cdecl PlayerMailComp::~PlayerMailComp(PlayerMailComp *const this)
{
  PlayerMailComp::~PlayerMailComp(this);
  operator delete(this, 0x100uLL);
};

// Line 73: range 0000000017213F2A-0000000017213F34
uint32_t __cdecl PlayerMailComp::getType()
{
  return 15;
};
