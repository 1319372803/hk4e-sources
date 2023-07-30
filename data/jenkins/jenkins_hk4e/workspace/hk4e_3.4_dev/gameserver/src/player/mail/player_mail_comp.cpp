// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mail/player_mail_comp.cpp

// Line 28: range 000000001757B3CA-000000001757B4ED
int32_t __cdecl MailData::fromRedisMail(MailData *const this, const proto::MailRedisData *mail)
{
  __int64 v2; // rdx
  char v3; // al
  bool v4; // cl
  char v5; // dl
  __int64 v6; // rdx
  bool is_attachment_got; // cl
  char v8; // dl
  __int64 v9; // rdx
  const proto::MailBin *v10; // rdx
  const proto::MailRedisData *maila; // [rsp+0h] [rbp-10h]

  maila = mail;
  v2 = proto::MailRedisData::id(mail);
  v3 = *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(mail) = v3 != 0;
    __asan_report_store4(&this->mail_id, mail, v2);
  }
  this->mail_id = v2;
  v4 = proto::MailRedisData::is_read(maila);
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_read >> 3) + 0x7FFF8000);
  LOBYTE(mail) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_read, mail, v6);
  this->is_read = v4;
  is_attachment_got = proto::MailRedisData::is_attachment_got(maila);
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000);
  LOBYTE(mail) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this - 35) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_attachment_got, mail, v9);
  this->is_attachment_got = is_attachment_got;
  v10 = proto::MailRedisData::mail_bin(maila);
  MailData::fromMailBin(this, v10);
  return 0;
};

// Line 39: range 000000001757B4EE-000000001757B84A
int32_t __cdecl MailData::toMailBin(const MailData *const this, proto::MailBin *mail_bin)
{
  google::protobuf::RepeatedPtrField<proto::ItemParamBin> *v2; // rax
  google::protobuf::RepeatedPtrField<std::string > *v3; // rax

  proto::MailBin::set_title(mail_bin, &this->title);
  proto::MailBin::set_content(mail_bin, &this->content);
  proto::MailBin::set_sender(mail_bin, &this->sender);
  v2 = proto::MailBin::mutable_item_param_list(mail_bin);
  common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParamBin,void (ItemParam::*)(proto::ItemParamBin&)const>(
    &this->item_param_vec,
    v2,
    (void (*)(const ItemParam *, proto::ItemParamBin *))ItemParam::toBin);
  if ( *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->send_time);
  }
  proto::MailBin::set_send_time(mail_bin, this->send_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time);
  }
  proto::MailBin::set_expire_time(mail_bin, this->expire_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->importance);
  }
  proto::MailBin::set_importance(mail_bin, this->importance);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id);
  }
  proto::MailBin::set_config_id(mail_bin, this->config_id);
  v3 = proto::MailBin::mutable_argument_list[abi:cxx11](mail_bin);
  common::tools::MiscUtils::toRepeated<std::string,std::string>(&this->argument_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_limit_type);
  }
  proto::MailBin::set_item_limit_type(mail_bin, this->item_limit_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->source_type);
  }
  proto::MailBin::set_source_type(mail_bin, this->source_type);
  proto::MailBin::set_tag(mail_bin, &this->tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason_type);
  }
  proto::MailBin::set_reason_type(mail_bin, this->reason_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->collect_state);
  }
  proto::MailBin::set_collect_state(mail_bin, this->collect_state);
  return 0;
};

// Line 59: range 000000001757B84C-000000001757BBF1
int32_t __cdecl MailData::fromMailBin(MailData *const this, const proto::MailBin *mail_bin)
{
  const std::string *v2; // rax
  const std::string *v3; // rax
  const std::string *v4; // rax
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *v5; // rax
  std::vector<ItemParam> *p_item_param_vec; // rsi
  __int64 v7; // rdx
  char v8; // al
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // al
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  const google::protobuf::RepeatedPtrField<std::string > *v17; // rsi
  __int64 v18; // rdx
  char v19; // al
  uint32_t v20; // ecx
  char v21; // dl
  __int64 v22; // rdx
  const std::string *v23; // rsi
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rsi

  v2 = proto::MailBin::title[abi:cxx11](mail_bin);
  std::string::operator=(&this->title, v2);
  v3 = proto::MailBin::content[abi:cxx11](mail_bin);
  std::string::operator=(&this->content, v3);
  v4 = proto::MailBin::sender[abi:cxx11](mail_bin);
  std::string::operator=(&this->sender, v4);
  v5 = proto::MailBin::item_param_list(mail_bin);
  p_item_param_vec = &this->item_param_vec;
  common::tools::MiscUtils::repeatedToVector<ItemParam,proto::ItemParamBin,void (ItemParam::*)(proto::ItemParamBin const&)>(
    v5,
    &this->item_param_vec,
    (void (*)(ItemParam *, const proto::ItemParamBin *))ItemParam::fromBin);
  v7 = proto::MailBin::send_time(mail_bin);
  v8 = *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_item_param_vec) = v8 != 0;
    __asan_report_store4(&this->send_time, p_item_param_vec, v7);
  }
  this->send_time = v7;
  v9 = proto::MailBin::expire_time(mail_bin);
  v10 = *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000);
  LOBYTE(p_item_param_vec) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->expire_time, p_item_param_vec, v11);
  this->expire_time = v9;
  v12 = proto::MailBin::importance(mail_bin);
  v13 = *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_item_param_vec) = v13 != 0;
    __asan_report_store4(&this->importance, p_item_param_vec, v12);
  }
  this->importance = v12;
  v14 = proto::MailBin::config_id(mail_bin);
  v15 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  LOBYTE(p_item_param_vec) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->config_id, p_item_param_vec, v16);
  this->config_id = v14;
  v17 = proto::MailBin::argument_list[abi:cxx11](mail_bin);
  common::tools::MiscUtils::fromRepeated<std::string,std::string>(&this->argument_vec, v17);
  v18 = proto::MailBin::item_limit_type(mail_bin);
  v19 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->item_limit_type, v17, v18);
  }
  this->item_limit_type = v18;
  if ( proto::MailBin::source_type(mail_bin) )
    v20 = proto::MailBin::source_type(mail_bin);
  else
    v20 = 1;
  v21 = *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store4(&this->source_type, v17, v22);
  this->source_type = v20;
  v23 = proto::MailBin::tag[abi:cxx11](mail_bin);
  std::string::operator=(&this->tag, v23);
  v24 = proto::MailBin::reason_type(mail_bin);
  v25 = *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->reason_type, v23, v24);
  }
  this->reason_type = v24;
  v26 = proto::MailBin::collect_state(mail_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collect_state, v26, &this->collect_state);
  }
  this->collect_state = v26;
  return 0;
};

// Line 79: range 000000001757BBF2-000000001757BF47
int32_t __cdecl MailData::toClient(const MailData *const this, proto::MailData *mail_data)
{
  google::protobuf::RepeatedPtrField<proto::MailItem> *v2; // rax
  google::protobuf::RepeatedPtrField<std::string > *v3; // rax
  proto::MailTextContent *mail_text_content; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mail_id);
  }
  proto::MailData::set_mail_id(mail_data, this->mail_id);
  mail_text_content = proto::MailData::mutable_mail_text_content(mail_data);
  proto::MailTextContent::set_title(mail_text_content, &this->title);
  proto::MailTextContent::set_content(mail_text_content, &this->content);
  proto::MailTextContent::set_sender(mail_text_content, &this->sender);
  v2 = proto::MailData::mutable_item_list(mail_data);
  common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::MailItem,void (ItemParam::*)(proto::MailItem&)const>(
    &this->item_param_vec,
    v2,
    (void (*)(const ItemParam *, proto::MailItem *))ItemParam::toMailItem);
  if ( *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->send_time);
  }
  proto::MailData::set_send_time(mail_data, this->send_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time);
  }
  proto::MailData::set_expire_time(mail_data, this->expire_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->importance);
  }
  proto::MailData::set_importance(mail_data, this->importance);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_read >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_read >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_read);
  }
  proto::MailData::set_is_read(mail_data, this->is_read);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_attachment_got);
  }
  proto::MailData::set_is_attachment_got(mail_data, this->is_attachment_got);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id);
  }
  proto::MailData::set_config_id(mail_data, this->config_id);
  v3 = proto::MailData::mutable_argument_list[abi:cxx11](mail_data);
  common::tools::MiscUtils::toRepeated<std::string,std::string>(&this->argument_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->collect_state);
  }
  proto::MailData::set_collect_state(mail_data, this->collect_state);
  return 0;
};

// Line 102: range 000000001757BF48-000000001757C318
void __cdecl MailData::toCheckCollectStateParam(const MailData *const this, MailCheckCollectStateParam *check_param)
{
  uint32_t mail_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t config_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t send_time; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t expire_time; // ecx
  char v12; // dl
  __int64 v13; // rdx
  proto::MailCollectState collect_state; // ecx
  char v15; // al
  __int64 v16; // rsi
  bool is_attachment_got; // cl
  char v18; // dl
  __int64 v19; // rdx
  uint32_t *p_count; // rax
  MailCheckCollectStateParam *check_parama; // [rsp+0h] [rbp-30h]
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+20h] [rbp-10h]
  const ItemParam *item_param; // [rsp+28h] [rbp-8h]

  check_parama = check_param;
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mail_id);
  }
  mail_id = this->mail_id;
  v3 = *(_BYTE *)(((unsigned __int64)check_param >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(check_param) = v3 != 0;
    __asan_report_store4(check_parama, check_param, check_parama);
  }
  check_parama->mail_id = mail_id;
  v4 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id);
  }
  config_id = this->config_id;
  v6 = *(_BYTE *)(((unsigned __int64)&check_parama->config_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)check_parama + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&check_parama->config_id, v4, v7);
  check_parama->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->send_time);
  }
  send_time = this->send_time;
  v9 = *(_BYTE *)(((unsigned __int64)&check_parama->send_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&check_parama->send_time, v4, &check_parama->send_time);
  }
  check_parama->send_time = send_time;
  v10 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time);
  }
  expire_time = this->expire_time;
  v12 = *(_BYTE *)(((unsigned __int64)&check_parama->expire_time >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)check_parama + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&check_parama->expire_time, v10, v13);
  check_parama->expire_time = expire_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->collect_state);
  }
  collect_state = this->collect_state;
  v15 = *(_BYTE *)(((unsigned __int64)&check_parama->collect_state >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v10) = v15 != 0;
    __asan_report_store4(&check_parama->collect_state, v10, &check_parama->collect_state);
  }
  check_parama->collect_state = collect_state;
  v16 = ((_BYTE)this - 35) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000) != 0
    && (char)v16 >= *(_BYTE *)(((unsigned __int64)&this->is_attachment_got >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_attachment_got);
  }
  is_attachment_got = this->is_attachment_got;
  v18 = *(_BYTE *)(((unsigned __int64)&check_parama->is_attachment_got >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)check_parama + 20) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&check_parama->is_attachment_got, v16, v19);
  check_parama->is_attachment_got = is_attachment_got;
  __for_range = &this->item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(&this->item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(&this->item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    p_count = &item_param->count;
    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_count);
    }
    if ( item_param->count )
      std::set<unsigned int>::insert(&check_parama->item_set, &item_param->item_id);
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
};

// Line 120: range 000000001757C31A-000000001757C39A
bool __cdecl MailData::isExpired(const MailData *const this)
{
  time_t expire_time; // rbx
  bool result; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time);
  }
  result = 0;
  if ( this->expire_time )
  {
    expire_time = this->expire_time;
    if ( expire_time <= common::tools::TimeUtils::getNow() )
      return 1;
  }
  return result;
};

// Line 125: range 000000001757C39C-000000001757CC9B
std::string *__cdecl MailData::getDesc[abi:cxx11](std::string *retstr, const MailData *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  const ItemParam *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r15
  const std::string *v31; // rax
  __int64 v32; // rax
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+10h] [rbp-600h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+18h] [rbp-5F8h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+20h] [rbp-5F0h]
  const std::vector<std::string> *__for_range_0; // [rsp+28h] [rbp-5E8h]
  const std::string *arg; // [rsp+30h] [rbp-5E0h]
  const ItemParam *item_param; // [rsp+38h] [rbp-5D8h]
  char v40[32]; // [rsp+40h] [rbp-5D0h] BYREF
  char v41[32]; // [rsp+60h] [rbp-5B0h] BYREF
  char v42[1424]; // [rsp+80h] [rbp-590h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1376LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 376 7 oss:126 480 376 17 attachment_os:129 928 376 15 argument_os:136";
  *(_QWORD *)(v2 + 16) = MailData::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -218959118;
  v4[536862746] = -234881024;
  v4[536862747] = -218959118;
  v4[536862748] = -218959118;
  v4[536862760] = -218103808;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  std::ostringstream::basic_ostringstream(v2 + 480);
  __for_range = &this->item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(&this->item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(&this->item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    item_param = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v6 = std::ostream::operator<<(v2 + 480, item_param->item_id);
    v7 = std::operator<<<std::char_traits<char>>(v6, ":");
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->count);
    }
    v8 = std::ostream::operator<<(v7, item_param->count);
    v9 = std::operator<<<std::char_traits<char>>(v8, ":");
    if ( *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->level);
    }
    v10 = std::ostream::operator<<(v9, item_param->level);
    v11 = std::operator<<<std::char_traits<char>>(v10, ":");
    if ( *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->promote_level);
    }
    v12 = std::ostream::operator<<(v11, item_param->promote_level);
    std::operator<<<std::char_traits<char>>(v12, ",");
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  std::ostringstream::basic_ostringstream(v2 + 928);
  __for_range_0 = &this->argument_vec;
  __for_begin._M_current = (const ItemParam *)std::vector<std::string>::begin(&this->argument_vec)._M_current;
  __for_end._M_current = (const ItemParam *)std::vector<std::string>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)&__for_end) )
  {
    arg = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)&__for_begin);
    v13 = std::operator<<<char>(v2 + 928, arg);
    std::operator<<<std::char_traits<char>>(v13, ",");
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)&__for_begin);
  }
  v14 = std::operator<<<std::char_traits<char>>(v2 + 32, "[reason_type = ");
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason_type);
  }
  v15 = std::ostream::operator<<(v14, this->reason_type);
  v16 = std::operator<<<std::char_traits<char>>(v15, " | limit_type = ");
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_limit_type);
  }
  v17 = std::ostream::operator<<(v16, this->item_limit_type);
  v18 = std::operator<<<std::char_traits<char>>(v17, " | source_type = ");
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->source_type);
  }
  v19 = std::ostream::operator<<(v18, this->source_type);
  v20 = std::operator<<<std::char_traits<char>>(v19, " | config_id = ");
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id);
  }
  v21 = std::ostream::operator<<(v20, this->config_id);
  v22 = std::operator<<<std::char_traits<char>>(v21, " | send_time = ");
  if ( *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->send_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->send_time);
  }
  v23 = std::ostream::operator<<(v22, this->send_time);
  v24 = std::operator<<<std::char_traits<char>>(v23, " | expire_time = ");
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time);
  }
  v25 = std::ostream::operator<<(v24, this->expire_time);
  v26 = std::operator<<<std::char_traits<char>>(v25, " | attachment = ");
  std::ostringstream::str(v40, v2 + 480);
  v27 = std::operator<<<char>(v26, v40);
  v28 = std::operator<<<std::char_traits<char>>(v27, " | argument = ");
  std::ostringstream::str(v41, v2 + 928);
  v29 = std::operator<<<char>(v28, v41);
  v30 = std::operator<<<std::char_traits<char>>(v29, " | collect_type = ");
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->collect_state);
  }
  v31 = proto::MailCollectState_Name[abi:cxx11](this->collect_state);
  v32 = std::operator<<<char>(v30, v31);
  std::operator<<<std::char_traits<char>>(v32, "]");
  std::string::~string(v41);
  std::string::~string(v40);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 928);
  std::ostringstream::~ostringstream(v2 + 480);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v42 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1376LL, v42);
  }
  return retstr;
};

// Line 151: range 000000001757CC9C-000000001757CE3A
void __cdecl PlayerMailComp::PlayerMailComp(PlayerMailComp *const this, Player *player)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  PlayerCompBase::PlayerCompBase(this, player);
  v2 = (int (**)(...))(&`vtable for'PlayerMailComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->get_mail_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->get_mail_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->get_mail_start_time_, player, &this->get_mail_start_time_);
  }
  this->get_mail_start_time_ = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->get_collected_mail_start_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->get_collected_mail_start_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->get_collected_mail_start_time_, v3, v4);
  this->get_collected_mail_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->take_attachment_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->take_attachment_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->take_attachment_start_time_, v3, &this->take_attachment_start_time_);
  }
  this->take_attachment_start_time_ = 0;
  std::set<unsigned int>::set(&this->has_take_attachment_mail_id_set_);
  std::map<unsigned long,proto::MailBin>::map(&this->wait_add_mail_map_);
  std::map<unsigned int,unsigned int>::map(&this->action_seq_map_);
  std::unordered_map<std::string,proto::MailBin>::unordered_map(&this->new_wait_add_mail_map_);
  if ( *(char *)(((unsigned __int64)&this->is_collectible_mail_transfered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_collectible_mail_transfered_, v3, &this->is_collectible_mail_transfered_);
  this->is_collectible_mail_transfered_ = 0;
};

// Line 156: range 000000001757CE3C-000000001757D6A7
int32_t __cdecl PlayerMailComp::fromBin(PlayerMailComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  proto::MailBin *v9; // rax
  common::milog::MiLogStream *v10; // r13
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  proto::MailBin *v14; // rax
  google::protobuf::Map<long unsigned int,proto::MailBin>::const_iterator *p_for_end_0; // rsi
  unsigned int *p_second; // rax
  unsigned int second; // r13d
  google::protobuf::Map<unsigned int,unsigned int>::const_reference v18; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  unsigned int *v20; // rdx
  char v21; // cl
  unsigned int v22; // eax
  __int64 v23; // rdx
  char v24; // al
  int32_t result; // eax
  uint32_t now; // [rsp+1Ch] [rbp-134h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-130h]
  const proto::PlayerMailCompBin *proto_comp; // [rsp+28h] [rbp-128h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-120h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-118h]
  const google::protobuf::Map<long unsigned int,proto::MailBin> *__for_range_0; // [rsp+40h] [rbp-110h]
  const google::protobuf::Map<std::string,proto::MailBin> *__for_range_1; // [rsp+48h] [rbp-108h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_2; // [rsp+50h] [rbp-100h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_reason_type; // [rsp+58h] [rbp-F8h]
  google::protobuf::Map<std::string,proto::MailBin>::const_reference p_transaction; // [rsp+60h] [rbp-F0h]
  google::protobuf::Map<long unsigned int,proto::MailBin>::const_reference p_transaction_id; // [rsp+68h] [rbp-E8h]
  google::protobuf::Map<long unsigned int,proto::MailBin>::const_iterator __for_begin_0; // [rsp+70h] [rbp-E0h] BYREF
  google::protobuf::Map<long unsigned int,proto::MailBin>::const_iterator __for_end_0; // [rsp+90h] [rbp-C0h] BYREF
  common::milog::MiLogStream v39; // [rsp+B0h] [rbp-A0h] BYREF
  std::string val; // [rsp+D0h] [rbp-80h] BYREF
  char v41[96]; // [rsp+F0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 mail_id:161";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::mail_bin(player_data_bin);
  std::set<unsigned int>::clear(&this->has_take_attachment_mail_id_set_);
  __for_range = proto::PlayerMailCompBin::has_take_attachment_mail_id_list(proto_comp);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(
      &this->has_take_attachment_mail_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  now = common::tools::TimeUtils::getNow();
  __for_range_0 = proto::PlayerMailCompBin::wait_add_mail_map(proto_comp);
  google::protobuf::Map<unsigned long,proto::MailBin>::begin(&__for_begin_0, __for_range_0);
  google::protobuf::Map<unsigned long,proto::MailBin>::end(&__for_end_0, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_transaction_id = google::protobuf::Map<unsigned long,proto::MailBin>::const_iterator::operator*(&__for_begin_0);
    if ( now <= proto::MailBin::expire_time(&p_transaction_id->second) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mail/player_mail_comp.cpp",
        "fromBin",
        176);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v39,
             (const char (*)[40])"PlayerMailComp fromBin transaction_id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &p_transaction_id->first);
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", mail_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &p_transaction_id->second);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v9 = std::map<unsigned long,proto::MailBin>::operator[](&this->wait_add_mail_map_, &p_transaction_id->first);
      proto::MailBin::operator=(v9, &p_transaction_id->second);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "fromBin",
        173);
      v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v39,
             (const char (*)[28])"mail is expired, mail_bin: ");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &p_transaction_id->second);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    google::protobuf::Map<unsigned long,proto::MailBin>::const_iterator::operator++(&__for_begin_0);
  }
  __for_range_1 = proto::PlayerMailCompBin::new_wait_add_mail_map[abi:cxx11](proto_comp);
  google::protobuf::Map<std::string,proto::MailBin>::begin(
    (google::protobuf::Map<std::string,proto::MailBin>::const_iterator *)&__for_begin_0,
    __for_range_1);
  google::protobuf::Map<std::string,proto::MailBin>::end(
    (google::protobuf::Map<std::string,proto::MailBin>::const_iterator *)&__for_end_0,
    __for_range_1);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<std::string,proto::MailBin>::const_iterator *)&__for_begin_0,
            (const google::protobuf::Map<std::string,proto::MailBin>::const_iterator *)&__for_end_0) )
  {
    p_transaction = google::protobuf::Map<std::string,proto::MailBin>::const_iterator::operator*((const google::protobuf::Map<std::string,proto::MailBin>::const_iterator *const)&__for_begin_0);
    if ( now <= proto::MailBin::expire_time(&p_transaction->second) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mail/player_mail_comp.cpp",
        "fromBin",
        188);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v39,
              (const char (*)[37])"PlayerMailComp fromBin transaction: ");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &p_transaction->first);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", mail_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &p_transaction->second);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v14 = std::unordered_map<std::string,proto::MailBin>::operator[](
              &this->new_wait_add_mail_map_,
              &p_transaction->first);
      proto::MailBin::operator=(v14, &p_transaction->second);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "fromBin",
        185);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v39,
              (const char (*)[28])"mail is expired, mail_bin: ");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &p_transaction->second);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    google::protobuf::Map<std::string,proto::MailBin>::const_iterator::operator++((google::protobuf::Map<std::string,proto::MailBin>::const_iterator *const)&__for_begin_0);
  }
  __for_range_2 = proto::PlayerMailCompBin::action_seq_map(proto_comp);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin_0,
    __for_range_2);
  google::protobuf::Map<unsigned int,unsigned int>::end(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end_0,
    __for_range_2);
  while ( 1 )
  {
    p_for_end_0 = &__for_end_0;
    if ( !google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin_0,
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end_0) )
      break;
    p_reason_type = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin_0);
    p_second = &p_reason_type->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = p_reason_type->second;
    v18 = p_reason_type;
    v19 = std::map<unsigned int,unsigned int>::operator[](
            &this->action_seq_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)p_reason_type);
    v20 = v19;
    v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
    if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
    {
      LOBYTE(v18) = v21 != 0;
      __asan_report_store4(v19, v18, v19);
    }
    *v20 = second;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++((google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin_0);
  }
  LOBYTE(v22) = proto::PlayerMailCompBin::is_collectible_mail_transfered(proto_comp);
  v23 = v22;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_collectible_mail_transfered_ >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(p_for_end_0) = v24 != 0;
    __asan_report_store1(&this->is_collectible_mail_transfered_, p_for_end_0, v23);
  }
  this->is_collectible_mail_transfered_ = v23;
  result = 0;
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 203: range 000000001757D6A8-000000001757DDAF
int32_t __cdecl PlayerMailComp::toBin(PlayerMailComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  google::protobuf::Map<long unsigned int,proto::MailBin> *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  google::protobuf::Map<std::string,proto::MailBin> *v11; // rbx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v12; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v13; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v14; // rsi
  unsigned int *v15; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v16; // rdx
  char v17; // cl
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-218h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-210h] BYREF
  proto::PlayerMailCompBin *proto_comp; // [rsp+28h] [rbp-208h]
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-200h]
  std::map<long unsigned int,proto::MailBin> *__for_range_0; // [rsp+38h] [rbp-1F8h]
  std::unordered_map<std::string,proto::MailBin> *__for_range_1; // [rsp+40h] [rbp-1F0h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_action_seq_map; // [rsp+48h] [rbp-1E8h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+50h] [rbp-1E0h]
  const std::pair<unsigned int const,unsigned int> *v27; // [rsp+58h] [rbp-1D8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *reason_type; // [rsp+60h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *seq; // [rsp+68h] [rbp-1C8h]
  const std::pair<const std::string,proto::MailBin> *v30; // [rsp+70h] [rbp-1C0h]
  std::tuple_element<0,const std::pair<const std::string,proto::MailBin> >::type *transaction; // [rsp+78h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<const std::string,proto::MailBin> >::type *mail_bin_0; // [rsp+80h] [rbp-1B0h]
  const std::pair<long unsigned int const,proto::MailBin> *v33; // [rsp+88h] [rbp-1A8h]
  std::tuple_element<0,const std::pair<long unsigned int const,proto::MailBin> >::type *transaction_id; // [rsp+90h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<long unsigned int const,proto::MailBin> >::type *mail_bin; // [rsp+98h] [rbp-198h]
  common::milog::MiLogStream v36; // [rsp+A0h] [rbp-190h] BYREF
  std::string val; // [rsp+C0h] [rbp-170h] BYREF
  google::protobuf::MapPair<long unsigned int,proto::MailBin> value; // [rsp+E0h] [rbp-150h] BYREF
  google::protobuf::MapPair<std::string,proto::MailBin> v39; // [rsp+170h] [rbp-C0h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_mail_bin(player_data_bin);
  __for_range = &this->has_take_attachment_mail_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->has_take_attachment_mail_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->has_take_attachment_mail_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerMailCompBin::add_has_take_attachment_mail_id_list(proto_comp, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->wait_add_mail_map_;
  __for_begin._M_node = std::map<unsigned long,proto::MailBin>::begin(&this->wait_add_mail_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,proto::MailBin>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::MailBin> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::MailBin> >::_Self *)&__for_end) )
  {
    v33 = std::_Rb_tree_iterator<std::pair<unsigned long const,proto::MailBin>>::operator*((const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::MailBin> > *const)&__for_begin);
    transaction_id = std::get<0ul,unsigned long const,proto::MailBin>(v33);
    mail_bin = (std::tuple_element<1,const std::pair<long unsigned int const,proto::MailBin> >::type *)std::get<1ul,unsigned long const,proto::MailBin>(v33);
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "toBin",
      216);
    v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v36,
           (const char (*)[38])"PlayerMailComp toBin transaction_id: ");
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, transaction_id);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])", mail_bin:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, mail_bin);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v7 = proto::PlayerMailCompBin::mutable_wait_add_mail_map(proto_comp);
    google::protobuf::MapPair<unsigned long,proto::MailBin>::MapPair(&value, transaction_id, mail_bin);
    google::protobuf::Map<unsigned long,proto::MailBin>::insert(
      (std::pair<google::protobuf::Map<long unsigned int,proto::MailBin>::iterator,bool> *)&val,
      v7,
      &value);
    google::protobuf::MapPair<unsigned long,proto::MailBin>::~MapPair(&value);
    std::_Rb_tree_iterator<std::pair<unsigned long const,proto::MailBin>>::operator++((std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::MailBin> > *const)&__for_begin);
  }
  __for_range_1 = &this->new_wait_add_mail_map_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<std::string,proto::MailBin>::begin(&this->new_wait_add_mail_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<std::string,proto::MailBin>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,proto::MailBin>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,proto::MailBin>,true> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,proto::MailBin>,true> *)&__for_end) )
  {
    v30 = std::__detail::_Node_iterator<std::pair<std::string const,proto::MailBin>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,proto::MailBin>,false,true> *const)&__for_begin);
    transaction = std::get<0ul,std::string const,proto::MailBin>(v30);
    mail_bin_0 = (std::tuple_element<1,const std::pair<const std::string,proto::MailBin> >::type *)std::get<1ul,std::string const,proto::MailBin>(v30);
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "toBin",
      222);
    v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v36,
           (const char (*)[35])"PlayerMailComp toBin transaction: ");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, transaction);
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", mail_bin:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, mail_bin_0);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v11 = proto::PlayerMailCompBin::mutable_new_wait_add_mail_map[abi:cxx11](proto_comp);
    google::protobuf::MapPair<std::string,proto::MailBin>::MapPair(&v39, transaction, mail_bin_0);
    google::protobuf::Map<std::string,proto::MailBin>::insert(
      (std::pair<google::protobuf::Map<std::string,proto::MailBin>::iterator,bool> *)&val,
      v11,
      &v39);
    google::protobuf::MapPair<std::string,proto::MailBin>::~MapPair(&v39);
    std::__detail::_Node_iterator<std::pair<std::string const,proto::MailBin>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,proto::MailBin>,false,true> *const)&__for_begin);
  }
  proto_action_seq_map = proto::PlayerMailCompBin::mutable_action_seq_map(proto_comp);
  __for_range_2 = &this->action_seq_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->action_seq_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    reason_type = std::get<0ul,unsigned int const,unsigned int>(v27);
    v12 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v27);
    seq = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    v13 = *seq;
    v14 = reason_type;
    v15 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_action_seq_map, reason_type);
    v16 = v15;
    v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
    {
      LOBYTE(v14) = v17 != 0;
      __asan_report_store4(v15, v14, v15);
    }
    *v16 = v13;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_collectible_mail_transfered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_collectible_mail_transfered_);
  proto::PlayerMailCompBin::set_is_collectible_mail_transfered(proto_comp, this->is_collectible_mail_transfered_);
  return 0;
};

// Line 239: range 000000001757DDB0-000000001757E178
int32_t __cdecl PlayerMailComp::onLogin(PlayerMailComp *const this, bool is_new_player)
{
  std::string *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::MailBin *v5; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,proto::MailBin>,false,true>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  std::map<long unsigned int,proto::MailBin>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<long unsigned int,proto::MailBin>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<long unsigned int,proto::MailBin> *__for_range; // [rsp+20h] [rbp-F0h]
  std::pair<long unsigned int const,proto::MailBin> *__in; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,std::pair<long unsigned int const,proto::MailBin> >::type *transaction_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<long unsigned int const,proto::MailBin> >::type *mail_bin; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-D0h] BYREF
  std::string val; // [rsp+60h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (std::string *)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"1 32 32 15 transaction:243";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)PlayerMailComp::onLogin;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  __for_range = &this->wait_add_mail_map_;
  __for_begin._M_node = std::map<unsigned long,proto::MailBin>::begin(&this->wait_add_mail_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,proto::MailBin>::end(&this->wait_add_mail_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned long const,proto::MailBin>>::operator*(&__for_begin);
    transaction_id = std::get<0ul,unsigned long const,proto::MailBin>(__in);
    mail_bin = std::get<1ul,unsigned long const,proto::MailBin>(__in);
    if ( *(_BYTE *)(((unsigned __int64)transaction_id >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::tools::StringUtils::numToStr<unsigned long>(v2 + 1, *transaction_id);
    v6 = std::unordered_map<std::string,proto::MailBin>::emplace<std::string&,proto::MailBin&>(
           &this->new_wait_add_mail_map_,
           v2 + 1,
           mail_bin,
           (std::string *)&this->new_wait_add_mail_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mail/player_mail_comp.cpp",
        "onLogin",
        246);
      v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v19,
             (const char (*)[23])"duplicate transaction:");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v2 + 1);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = operator<<(v9, this->player_);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" mail_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, mail_bin);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    std::string::~string(&v2[1]);
    std::_Rb_tree_iterator<std::pair<unsigned long const,proto::MailBin>>::operator++(&__for_begin);
  }
  std::map<unsigned long,proto::MailBin>::clear(&this->wait_add_mail_map_);
  PlayerMailComp::dealWithHasTakeAttachmentMail(this);
  PlayerMailComp::queryMailTransactionStatus(this);
  PlayerMailComp::clearUpRedisMail(this);
  PlayerMailComp::queryUntreatedMailInfo(this);
  result = 0;
  if ( v21 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 268: range 000000001757E17A-000000001757E188
int32_t __cdecl PlayerMailComp::notifyAllData(PlayerMailComp *const this)
{
  return 0;
};

// Line 274: range 000000001757E18A-000000001757E362
int32_t __cdecl PlayerMailComp::clear(PlayerMailComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:276";
  *(_QWORD *)(v1 + 16) = PlayerMailComp::clear;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mail/player_mail_comp.cpp",
    "clear",
    275);
  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v6, (const char (*)[14])"mail clear!!!");
  common::milog::MiLogStream::~MiLogStream(&v6);
  proto::CleanRedisMailNotify::CleanRedisMailNotify((proto::CleanRedisMailNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = PlayerMailComp::sendProtoToMailService<proto::CleanRedisMailNotify>(
         this->player_,
         (proto::CleanRedisMailNotify *)(v1 + 32));
  proto::CleanRedisMailNotify::~CleanRedisMailNotify((proto::CleanRedisMailNotify *const)(v1 + 32));
  result = v4;
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 281: range 000000001757E364-000000001757E4B6
std::string *__cdecl PlayerMailComp::createTransaction[abi:cxx11](std::string *retstr, PlayerMailComp *const this)
{
  uint32_t v2; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-59h] BYREF
  uint64_t transaction; // [rsp+18h] [rbp-58h]
  std::string __lhs; // [rsp+20h] [rbp-50h] BYREF
  std::string __rhs; // [rsp+40h] [rbp-30h] BYREF

  transaction = common::tools::TimeUtils::getNow();
  v2 = PlayerMailComp::createTransaction[abi:cxx11](void)::seq++;
  common::tools::StringUtils::numToStr<unsigned long>(&__rhs, v2 | (transaction << 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__lhs, "GM:", &__a);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &__lhs, &__rhs);
  std::string::~string(&__lhs);
  std::allocator<char>::~allocator(&__a);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 288: range 000000001757E4B8-000000001757E670
std::string *__fastcall PlayerMailComp::createTransaction[abi:cxx11](
        std::string *retstr,
        PlayerMailComp *const this,
        uint32_t reason_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  unsigned __int64 v7; // rsi
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 reason_type:287";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::createTransaction[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = reason_type;
  v6 = std::map<unsigned int,unsigned int>::operator[](
         &this->action_seq_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v7 = ++*v6 | ((unsigned __int64)*(unsigned int *)(v3 + 32) << 32);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v7 = 32LL;
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringUtils::numToStr<unsigned long>(retstr, v7);
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 295: range 000000001757E672-000000001757F023
int32_t __cdecl PlayerMailComp::addNewMail(
        PlayerMailComp *const this,
        const MailData *mail_data,
        std::string *p_transaction)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  TxtConfigMgr *p_txt_config_mgr; // rcx
  bool v8; // r14
  common::milog::MiLogStream *v9; // r14
  int v10; // r14d
  TxtConfigMgr *v11; // r14
  uint32_t Uid; // eax
  unsigned int v13; // eax
  proto::MailBin *v14; // rax
  proto::MailBin *v15; // r14
  proto::MailBin *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-288h] BYREF
  proto::MailCollectState collect_state; // [rsp+2Ch] [rbp-284h]
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-280h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-278h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+40h] [rbp-270h]
  const ItemParam *item_param; // [rsp+48h] [rbp-268h]
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-260h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-250h] BYREF
  char v32[560]; // [rsp+80h] [rbp-230h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 40 18 item_param_bin:299 112 48 7 req:319 192 72 15 check_param:324 304 136 12 mail_bin:322";
  *(_QWORD *)(v4 + 16) = PlayerMailComp::addNewMail;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959360;
  v6[536862723] = 62194;
  v6[536862725] = -218959118;
  v6[536862728] = -218959360;
  v6[536862729] = 62194;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v6[536862735] = -202116109;
  __for_range = &mail_data->item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(&mail_data->item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(&mail_data->item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param);
    }
    proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v4 + 32), item_param->item_id);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->count);
    }
    proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v4 + 32), item_param->count);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->level);
    }
    proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v4 + 32), item_param->level);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->promote_level);
    }
    proto::ItemParamBin::set_promote_level((proto::ItemParamBin *const)(v4 + 32), item_param->promote_level);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mail_data->item_limit_type);
    }
    v8 = TxtConfigMgr::checkItemParamBin(
           p_txt_config_mgr,
           (const proto::ItemParamBin *)(v4 + 32),
           (data::ItemLimitType)mail_data->item_limit_type) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mail/player_mail_comp.cpp",
        "addNewMail",
        307);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v31,
             (const char (*)[30])"checkEquipParam failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v3 = -1;
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v4 + 32));
    if ( v10 != 1 )
      goto LABEL_36;
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( (unsigned __int8)std::string::empty(p_transaction) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&mail_data->reason_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data->reason_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mail_data->reason_type);
    }
    PlayerMailComp::createTransaction[abi:cxx11]((std::string *)&v31, this, mail_data->reason_type);
    std::string::operator=(p_transaction, &v31);
    std::string::~string(&v31);
  }
  proto::AddRedisMailReq::AddRedisMailReq((proto::AddRedisMailReq *const)(v4 + 112));
  proto::AddRedisMailReq::set_op_type((proto::AddRedisMailReq *const)(v4 + 112), MAIL_ADD_OP_GAME);
  proto::AddRedisMailReq::set_transaction((proto::AddRedisMailReq *const)(v4 + 112), p_transaction);
  proto::MailBin::MailBin((proto::MailBin *const)(v4 + 304));
  MailData::toMailBin(mail_data, (proto::MailBin *)(v4 + 304));
  MailCheckCollectStateParam::MailCheckCollectStateParam((MailCheckCollectStateParam *const)(v4 + 192));
  MailData::toCheckCollectStateParam(mail_data, (MailCheckCollectStateParam *)(v4 + 192));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v11 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  collect_state = TxtConfigMgr::calcMailCollectState(v11, (const MailCheckCollectStateParam *)(v4 + 192), Uid);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( collect_state == MAIL_COLLECTIBLE_COLLECTED )
  {
    v13 = std::numeric_limits<unsigned int>::max();
    proto::MailBin::set_expire_time((proto::MailBin *const)(v4 + 304), v13);
  }
  proto::MailBin::set_collect_state((proto::MailBin *const)(v4 + 304), collect_state);
  v14 = proto::AddRedisMailReq::mutable_mail_bin((proto::AddRedisMailReq *const)(v4 + 112));
  proto::MailBin::CopyFrom(v14, (const proto::MailBin *)(v4 + 304));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerMailComp::sendProtoToMailService<proto::AddRedisMailReq>(this->player_, (proto::AddRedisMailReq *)(v4 + 112));
  v15 = std::move<proto::MailBin &>((proto::MailBin *)(v4 + 304));
  v16 = std::unordered_map<std::string,proto::MailBin>::operator[](&this->new_wait_add_mail_map_, p_transaction);
  proto::MailBin::operator=(v16, v15);
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/mail/player_mail_comp.cpp",
    "addNewMail",
    340);
  v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v31,
          (const char (*)[24])"[MAIL] addNewMail uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
  v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" ,transaction:");
  v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, p_transaction);
  v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" ,mail_data: ");
  common::milog::MiLogStream::operator<<<MailData,(MailData*)0>(v21, mail_data);
  common::milog::MiLogStream::~MiLogStream(&v31);
  v3 = 0;
  MailCheckCollectStateParam::~MailCheckCollectStateParam((MailCheckCollectStateParam *const)(v4 + 192));
  proto::MailBin::~MailBin((proto::MailBin *const)(v4 + 304));
  proto::AddRedisMailReq::~AddRedisMailReq((proto::AddRedisMailReq *const)(v4 + 112));
LABEL_36:
  result = v3;
  if ( v32 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 347: range 000000001757F024-000000001757F39D
int32_t __cdecl PlayerMailComp::addExcelMail(
        PlayerMailComp *const this,
        MailData *mail_data,
        const std::string *transaction)
{
  MailExcelConfigMgr *p_mail_config_mgr; // rcx
  __int64 config_id; // rsi
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // ebx
  unsigned int v9; // eax
  uint32_t v10; // ecx
  char v11; // dl
  __int64 v12; // rsi
  __int64 v13; // rdx
  _BOOL8 is_star; // rsi
  uint32_t now; // [rsp+24h] [rbp-4Ch]
  const data::MailExcelConfig *mail_excel_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_mail_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.mail_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&mail_data->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mail_data - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mail_data->config_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&mail_data->config_id);
  }
  config_id = mail_data->config_id;
  mail_excel_config_ptr = data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, config_id);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( mail_excel_config_ptr )
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&mail_data->send_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data->send_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&mail_data->send_time, config_id, &mail_data->send_time);
    }
    mail_data->send_time = now;
    if ( *(_BYTE *)(((unsigned __int64)&mail_excel_config_ptr->expire_days >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mail_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mail_excel_config_ptr->expire_days >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&mail_excel_config_ptr->expire_days);
    }
    v9 = SAFE_MULTIPLY<unsigned int,int>(mail_excel_config_ptr->expire_days, 86400);
    v12 = v9;
    v10 = SAFE_ADD<unsigned int,unsigned int>(now, v9);
    v11 = *(_BYTE *)(((unsigned __int64)&mail_data->expire_time >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v11 != 0;
    v13 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)mail_data - 116) & 7) + 3) >= v11);
    if ( (_BYTE)v13 )
      __asan_report_store4(&mail_data->expire_time, v12, v13);
    mail_data->expire_time = v10;
    if ( *(char *)(((unsigned __int64)&mail_excel_config_ptr->is_star >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&mail_excel_config_ptr->is_star);
    is_star = mail_excel_config_ptr->is_star;
    if ( *(_BYTE *)(((unsigned __int64)&mail_data->importance >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data->importance >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&mail_data->importance, is_star, &mail_data->importance);
    }
    mail_data->importance = is_star;
    std::string::basic_string(&v21, transaction);
    v8 = PlayerMailComp::addNewMail(this, mail_data, (std::string *)&v21);
    std::string::~string(&v21);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "addExcelMail",
      351);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v21,
           (const char (*)[42])"findMailExcelConfig fail, mail_config_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &mail_data->config_id);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    return -1;
  }
  return v8;
};

// Line 364: range 000000001757F39E-000000001757F6BA
int32_t __cdecl PlayerMailComp::addMailById(
        PlayerMailComp *const this,
        uint32_t config_id,
        uint32_t mail_source_type,
        const std::vector<ItemParam> *item_param_vec,
        const std::vector<std::string> *argument_vec,
        const ActionReason *reason)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int32_t v9; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+3Fh] [rbp-1B1h] BYREF
  std::string transaction; // [rsp+40h] [rbp-1B0h] BYREF
  char v17[400]; // [rsp+60h] [rbp-190h] BYREF

  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(352LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 48 232 13 mail_data:365";
  *(_QWORD *)(v6 + 16) = PlayerMailComp::addMailById;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61937;
  v8[536862728] = -218103808;
  v8[536862729] = -202116109;
  v8[536862730] = -202116109;
  MailData::MailData((MailData *const)(v6 + 48));
  std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v6 + 160), item_param_vec);
  *(_DWORD *)(v6 + 228) = mail_source_type;
  *(_DWORD *)(v6 + 196) = config_id;
  std::vector<std::string>::operator=((std::vector<std::string> *const)(v6 + 200), argument_vec);
  if ( *(_BYTE *)(((unsigned __int64)&reason->limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)reason + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reason->limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&reason->limit_type);
  }
  *(_DWORD *)(v6 + 224) = reason->limit_type;
  if ( *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(reason);
  }
  *(_DWORD *)(v6 + 264) = reason->reason_type;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&transaction, byte_260C1F00, &__a);
  v9 = PlayerMailComp::addExcelMail(this, (MailData *)(v6 + 48), &transaction);
  std::string::~string(&transaction);
  std::allocator<char>::~allocator(&__a);
  MailData::~MailData((MailData *const)(v6 + 48));
  result = v9;
  if ( v17 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 378: range 000000001757F6BC-000000001757FE87
int32_t __cdecl PlayerMailComp::addExcelMailAndTryAttachRewardWhenAvailable(
        PlayerMailComp *const this,
        MailData *mail_data,
        const std::string *transaction)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  MailExcelConfigMgr *p_mail_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  char v10; // al
  signed int item_limit_type; // edx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  int v18; // r14d
  PlayerItemComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  int32_t v23; // [rsp+14h] [rbp-12Ch]
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-10Dh] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+34h] [rbp-10Ch] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 17 reward_id_vec:388 96 24 10 reason:389";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::addExcelMailAndTryAttachRewardWhenAvailable;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)((char *)&__l._M_len + 4));
  p_mail_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                         (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len
                       + 4)->design_config.txt_config_mgr.mail_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&mail_data->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mail_data - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mail_data->config_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&mail_data->config_id);
  }
  *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) = (std::initializer_list<unsigned int>::iterator)data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, mail_data->config_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&__l._M_len + 4));
  if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) )
  {
    if ( !std::vector<ItemParam>::empty(&mail_data->item_param_vec) )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 5) >> 3)
                  + 0x7FFF8000) != 0
      && (char)(((BYTE4(__l._M_array) + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4)
                                                                                      + 5) >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 5);
    }
    if ( (*(_DWORD **)((char *)&__l._M_array + 4))[5] )
      v10 = 1;
    else
LABEL_15:
      v10 = 0;
    if ( !v10 )
    {
LABEL_37:
      v23 = PlayerMailComp::addExcelMail(this, mail_data, transaction);
      goto LABEL_38;
    }
    if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 5) >> 3)
                  + 0x7FFF8000) != 0
      && (char)(((BYTE4(__l._M_array) + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4)
                                                                                      + 5) >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 5);
    }
    LODWORD(__l._M_array) = (*(_DWORD **)((char *)&__l._M_array + 4))[5];
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)(v3 + 32),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mail_data->item_limit_type);
    }
    item_limit_type = mail_data->item_limit_type;
    if ( *(_BYTE *)(((unsigned __int64)&mail_data->reason_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data->reason_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mail_data->reason_type);
    }
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 96),
      (proto::ActionReasonType)mail_data->reason_type,
      (data::ItemLimitType)item_limit_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    if ( PlayerItemComp::checkAndRecordBeforeReward(
           ItemComp,
           (std::vector<unsigned int> *)(v3 + 32),
           (const ActionReason *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "addExcelMailAndTryAttachRewardWhenAvailable",
        392);
      v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v27,
              (const char (*)[48])"checkAndRecordBeforeReward fail, reward_id_vec:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::vector<unsigned int> *)(v3 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" reason:");
      v16 = operator<<(v15, (const ActionReason *)(v3 + 96));
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = Player::getItemComp(this->player_);
      if ( !PlayerItemComp::getItemParamVecByRewardIdVec(
              v19,
              (const std::vector<unsigned int> *)(v3 + 32),
              &mail_data->item_param_vec) )
      {
        v18 = 1;
LABEL_36:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
        if ( v18 != 1 )
          goto LABEL_38;
        goto LABEL_37;
      }
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "addExcelMailAndTryAttachRewardWhenAvailable",
        397);
      v20 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v27,
              (const char (*)[50])"getItemParamVecByRewardIdVec fail, reward_id_vec:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int>(v20, (const std::vector<unsigned int> *)(v3 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    operator<<(v17, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v23 = -1;
    v18 = 0;
    goto LABEL_36;
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/mail/player_mail_comp.cpp",
    "addExcelMailAndTryAttachRewardWhenAvailable",
    382);
  v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v27,
         (const char (*)[42])"findMailExcelConfig fail, mail_config_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &mail_data->config_id);
  v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v27);
  v23 = -1;
LABEL_38:
  result = v23;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 406: range 000000001757FE88-00000000175813D9
int32_t __cdecl PlayerMailComp::getAuthkey(
        PlayerMailComp *const this,
        const proto::GetAuthkeyReq *req,
        proto::GetAuthkeyRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  int32_t v9; // r14d
  DbDeployConfigMgr *p_db_deploy_config_mgr; // r14
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const std::string *v20; // rax
  Json::Value_0 *v21; // rax
  Json::Value_0 *v22; // rax
  Json::Value_0 *v23; // rax
  Json::Value_0 *v24; // rax
  unsigned int Uid; // eax
  Json::Value_0 *v26; // rax
  const std::string *v27; // rax
  Json::Value_0 *v28; // rax
  __int64 Now; // rax
  Json::Value_0 *v30; // rax
  int CurTimeZone; // eax
  Json::Value_0 *v32; // rax
  PlayerBasicComp *BasicComp; // rax
  const std::string *v34; // rax
  Json::Value_0 *v35; // rax
  PlayerBasicComp *v36; // rax
  unsigned int Level; // eax
  Json::Value_0 *v38; // rax
  const proto::PlayerLoginReq *SessionLoginReq; // rax
  const std::string *v40; // rax
  Json::Value_0 *v41; // rax
  const proto::PlayerLoginReq *v42; // rax
  const std::string *v43; // rax
  Json::Value_0 *v44; // rax
  Json::Value_0 *v45; // rax
  PlayerRechargeComp *RechargeComp; // rax
  unsigned int VipPoint; // eax
  Json::Value_0 *v48; // rax
  unsigned int AccountType; // eax
  Json::Value_0 *v50; // rax
  PlayerBasicComp *v51; // rax
  unsigned int RegisterTime; // eax
  Json::Value_0 *v53; // rax
  unsigned int PlatformType; // eax
  Json::Value_0 *v55; // rax
  Json::Value *v56; // rax
  const char *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  const std::string *v64; // rdx
  google::protobuf::uint32 v65; // edx
  google::protobuf::uint32 v66; // edx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+23h] [rbp-29Dh] BYREF
  unsigned int val; // [rsp+24h] [rbp-29Ch] BYREF
  const data::DbAuthkeyConfig *authkey_config_ptr; // [rsp+28h] [rbp-298h]
  const std::string *region_name; // [rsp+30h] [rbp-290h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+38h] [rbp-288h]
  const std::string *area_type_str; // [rsp+40h] [rbp-280h]
  const data::DbAreaConfig *area_config_ptr; // [rsp+48h] [rbp-278h]
  std::shared_ptr<Config> v76; // [rsp+50h] [rbp-270h] BYREF
  common::milog::MiLogStream v77; // [rsp+60h] [rbp-260h] BYREF
  Json::Value_0 other; // [rsp+80h] [rbp-240h] BYREF
  char v79[528]; // [rsp+B0h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 7 ret:461 48 32 12 json_str:458 112 32 14 encryp_str:460 176 32 21 encryp_base64_str:468 "
                        "240 40 16 authkey_json:436 320 40 12 ext_json:437 400 48 15 json_writer:457";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::getAuthkey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862731] = -218959360;
  v5[536862732] = 62194;
  v5[536862734] = -202116109;
  if ( proto::GetAuthkeyReq::sign_type(req) == 2 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v76);
    p_db_deploy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76)->design_config.db_config_mgr.db_deploy_config_mgr;
    v11 = proto::GetAuthkeyReq::authkey_ver(req);
    authkey_config_ptr = DbDeployConfigMgr::findDbAuthkeyConfig(p_db_deploy_config_mgr, v11);
    std::shared_ptr<Config>::~shared_ptr(&v76);
    if ( authkey_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v76);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
      region_name = ConfigBase::getRegionName[abi:cxx11](v15);
      std::shared_ptr<Config>::~shared_ptr(&v76);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v76);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
      region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                            &v16->design_config.db_config_mgr.db_deploy_config_mgr,
                            region_name);
      std::shared_ptr<Config>::~shared_ptr(&v76);
      if ( region_config_ptr )
      {
        area_type_str = &region_config_ptr->area_type;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v76);
        v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
        area_config_ptr = DbDeployConfigMgr::findDbAreaConfig(
                            &v18->design_config.db_config_mgr.db_deploy_config_mgr,
                            &region_config_ptr->area_type);
        std::shared_ptr<Config>::~shared_ptr(&v76);
        if ( area_config_ptr )
        {
          Json::Value::Value(v3 + 240, 0LL);
          Json::Value::Value(v3 + 320, 0LL);
          v20 = proto::GetAuthkeyReq::auth_appid[abi:cxx11](req);
          Json::Value::Value(&other, v20);
          v21 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), "auth_appid");
          Json::Value::operator=(v21, &other);
          Json::Value::~Value(&other);
          Json::Value::Value(&other, &area_config_ptr->business);
          v22 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), "game");
          Json::Value::operator=(v22, &other);
          Json::Value::~Value(&other);
          Json::Value::Value(&other, &area_config_ptr->business_cn);
          v23 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), "game_cn");
          Json::Value::operator=(v23, &other);
          Json::Value::~Value(&other);
          Json::Value::Value(&other, region_name);
          v24 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), "region");
          Json::Value::operator=(v24, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          common::tools::StringUtils::numToStr<unsigned int>((std::string *)&v77, Uid);
          Json::Value::Value(&other, &v77);
          v26 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), off_26135040);
          Json::Value::operator=(v26, &other);
          Json::Value::~Value(&other);
          std::string::~string(&v77);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v27 = Player::getAccountUid[abi:cxx11](this->player_);
          Json::Value::Value(&other, v27);
          v28 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), "account_uid");
          Json::Value::operator=(v28, &other);
          Json::Value::~Value(&other);
          Now = common::tools::TimeUtils::getNow();
          Json::Value::Value((Json::Value *)&other, Now);
          v30 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), "timestamp");
          Json::Value::operator=(v30, &other);
          Json::Value::~Value(&other);
          CurTimeZone = common::tools::TimeUtils::getCurTimeZone();
          Json::Value::Value((Json::Value *)&other, CurTimeZone);
          v32 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), "timezone");
          Json::Value::operator=(v32, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          v34 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
          Json::Value::Value(&other, v34);
          v35 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "nickname");
          Json::Value::operator=(v35, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v36 = Player::getBasicComp(this->player_);
          Level = PlayerBasicComp::getLevel(v36);
          Json::Value::Value((Json::Value *)&other, Level);
          v38 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "level");
          Json::Value::operator=(v38, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SessionLoginReq = Player::getSessionLoginReq(this->player_);
          v40 = proto::PlayerLoginReq::system_version[abi:cxx11](SessionLoginReq);
          Json::Value::Value(&other, v40);
          v41 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "system_version");
          Json::Value::operator=(v41, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v42 = Player::getSessionLoginReq(this->player_);
          v43 = proto::PlayerLoginReq::device_info[abi:cxx11](v42);
          Json::Value::Value(&other, v43);
          v44 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "device_info");
          Json::Value::operator=(v44, &other);
          Json::Value::~Value(&other);
          Json::Value::Value((Json::Value *)&other, 0);
          v45 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "vip_level");
          Json::Value::operator=(v45, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          RechargeComp = Player::getRechargeComp(this->player_);
          VipPoint = PlayerRechargeComp::getVipPoint(RechargeComp);
          Json::Value::Value((Json::Value *)&other, VipPoint);
          v48 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "vip_point");
          Json::Value::operator=(v48, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          AccountType = Player::getAccountType(this->player_);
          Json::Value::Value((Json::Value *)&other, AccountType);
          v50 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "account_type");
          Json::Value::operator=(v50, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v51 = Player::getBasicComp(this->player_);
          RegisterTime = PlayerBasicComp::getRegisterTime(v51);
          Json::Value::Value((Json::Value *)&other, RegisterTime);
          v53 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "register_time");
          Json::Value::operator=(v53, &other);
          Json::Value::~Value(&other);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          PlatformType = Player::getPlatformType(this->player_);
          Json::Value::Value((Json::Value *)&other, PlatformType);
          v55 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 320), "platform_type");
          Json::Value::operator=(v55, &other);
          Json::Value::~Value(&other);
          v56 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v3 + 240), off_26135380);
          Json::Value::operator=(v56);
          Json::FastWriter::FastWriter((Json::FastWriter *const)(v3 + 400));
          std::allocator<char>::allocator(&__a);
          Json::FastWriter::write[abi:cxx11](
            (Json::String *)&v77,
            (Json::FastWriter *const)(v3 + 400),
            (const Json::Value *)(v3 + 240));
          v57 = (const char *)std::string::c_str(&v77);
          std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 48), v57, &__a);
          std::string::~string(&v77);
          std::allocator<char>::~allocator(&__a);
          std::string::basic_string(v3 + 112);
          *(_DWORD *)(v3 + 32) = common::tools::RsaUtils::privateEncryp(
                                   &authkey_config_ptr->private_key,
                                   (const std::string *)(v3 + 48),
                                   (std::string *)(v3 + 112));
          if ( *(int *)(v3 + 32) >= 0 )
          {
            common::tools::StringUtils::base64Encode((std::string *)(v3 + 176), (const std::string *)(v3 + 112));
            common::milog::MiLogStream::create(
              &v77,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/mail/player_mail_comp.cpp",
              "getAuthkey",
              469);
            v61 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v77, (const char (*)[10])"json_str:");
            v62 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v61,
                    (const std::string *)(v3 + 48));
            v63 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v62,
                    (const char (*)[20])" encryp_base64_str:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, (const std::string *)(v3 + 176));
            common::milog::MiLogStream::~MiLogStream(&v77);
            proto::GetAuthkeyRsp::set_authkey(rsp_0, (const std::string *)(v3 + 176));
            v64 = proto::GetAuthkeyReq::auth_appid[abi:cxx11](req);
            proto::GetAuthkeyRsp::set_auth_appid(rsp_0, v64);
            v65 = proto::GetAuthkeyReq::sign_type(req);
            proto::GetAuthkeyRsp::set_sign_type(rsp_0, v65);
            v66 = proto::GetAuthkeyReq::authkey_ver(req);
            proto::GetAuthkeyRsp::set_authkey_ver(rsp_0, v66);
            proto::GetAuthkeyRsp::set_game_biz(rsp_0, &area_config_ptr->business);
            v9 = 0;
            std::string::~string((void *)(v3 + 176));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v77,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/mail/player_mail_comp.cpp",
              "getAuthkey",
              464);
            v58 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v77,
                    (const char (*)[25])"privateEncryp fail, ret:");
            v59 = common::milog::MiLogStream::operator<<<int,(int *)0>(v58, (const int *)(v3 + 32));
            v60 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v59, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &val);
            common::milog::MiLogStream::~MiLogStream(&v77);
            v9 = *(_DWORD *)(v3 + 32);
          }
          std::string::~string((void *)(v3 + 112));
          std::string::~string((void *)(v3 + 48));
          Json::FastWriter::~FastWriter((Json::FastWriter *const)(v3 + 400));
          Json::Value::~Value((Json::Value_0 *const)(v3 + 320));
          Json::Value::~Value((Json::Value_0 *const)(v3 + 240));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v77,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mail/player_mail_comp.cpp",
            "getAuthkey",
            432);
          v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v77,
                  (const char (*)[38])"area_config not found. area_type_str:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, area_type_str);
          common::milog::MiLogStream::~MiLogStream(&v77);
          v9 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mail/player_mail_comp.cpp",
          "getAuthkey",
          424);
        v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v77,
                (const char (*)[38])"region_config not found. region_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, region_name);
        common::milog::MiLogStream::~MiLogStream(&v77);
        v9 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v77,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "getAuthkey",
        416);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v77,
              (const char (*)[32])"authkey_ver error. authkey_ver:");
      *(_DWORD *)(v3 + 32) = proto::GetAuthkeyReq::authkey_ver(req);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v77);
      v9 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "getAuthkey",
      409);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v77,
           (const char (*)[28])"sign_type error. sign_type:");
    *(_DWORD *)(v3 + 32) = proto::GetAuthkeyReq::sign_type(req);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v77);
    v9 = -1;
  }
  result = v9;
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 496: range 00000000175813DA-0000000017581727
int32_t __cdecl PlayerMailComp::onGetAllMailReq(PlayerMailComp *const this, const proto::GetAllMailReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t *p_get_collected_mail_start_time; // rax
  std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *player; // r14
  int32_t RedisMailReq; // r14d
  __int64 v9; // rdx
  int v10; // eax
  int32_t result; // eax
  uint32_t now; // [rsp+10h] [rbp-C0h]
  proto::MailGetType get_type; // [rsp+14h] [rbp-BCh]
  uint32_t *start_time; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<proto::GetAllMailRsp> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int> mail_id_set; // [rsp+30h] [rbp-A0h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:502";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::onGetAllMailReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  now = common::tools::TimeUtils::getNow();
  if ( proto::GetAllMailReq::is_collected(proto) )
    p_get_collected_mail_start_time = &this->get_collected_mail_start_time_;
  else
    p_get_collected_mail_start_time = &this->get_mail_start_time_;
  start_time = p_get_collected_mail_start_time;
  if ( *(_BYTE *)(((unsigned __int64)p_get_collected_mail_start_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_get_collected_mail_start_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_get_collected_mail_start_time >> 3)
                                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(p_get_collected_mail_start_time);
  }
  if ( *start_time && now < *start_time + 5 )
  {
    common::tools::perf::make_shared<proto::GetAllMailRsp>();
    v6 = std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::GetAllMailRsp::set_retcode(v6, 3);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetAllMailRsp>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    RedisMailReq = 0;
    std::shared_ptr<proto::GetAllMailRsp>::~shared_ptr((std::shared_ptr<proto::GetAllMailRsp> *const)(v2 + 32));
  }
  else
  {
    v9 = (*(_BYTE *)(((unsigned __int64)start_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)start_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)start_time >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_store4(start_time, ((unsigned __int8)start_time & 7u) + 3, v9);
    *start_time = now;
    if ( proto::GetAllMailReq::is_collected(proto) )
      v10 = 3;
    else
      v10 = 2;
    get_type = v10;
    memset(&mail_id_set, 0, sizeof(mail_id_set));
    std::set<unsigned int>::set(&mail_id_set);
    RedisMailReq = PlayerMailComp::sendGetRedisMailReq(this, MAIL_GET_OP_CLIENT, get_type, &mail_id_set);
    std::set<unsigned int>::~set(&mail_id_set);
  }
  result = RedisMailReq;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 515: range 0000000017581728-0000000017581929
int32_t __cdecl PlayerMailComp::onDelMailReq(PlayerMailComp *const this, const proto::DelMailReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-C0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-B8h]
  char v10[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 11 mail_id:517 48 48 15 mail_id_set:516";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::onDelMailReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
  __for_range = proto::DelMailReq::mail_id_list(proto);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v2 + 48),
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  v5 = PlayerMailComp::sendDelRedisMailReq(this, MAIL_DEL_OP_CLIENT, (const std::set<unsigned int> *)(v2 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 526: range 000000001758192A-0000000017581B2B
int32_t __cdecl PlayerMailComp::onReadMailNotify(PlayerMailComp *const this, const proto::ReadMailNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t updated; // r14d
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-C0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-B8h]
  char v10[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 11 mail_id:528 48 48 15 mail_id_set:527";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::onReadMailNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
  __for_range = proto::ReadMailNotify::mail_id_list(notify);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v2 + 48),
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  updated = PlayerMailComp::sendUpdateRedisMailReq(
              this,
              MAIL_UPDATE_OP_MARK_READ,
              (const std::set<unsigned int> *)(v2 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  result = updated;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 538: range 0000000017581B2C-0000000017581CB4
int32_t __cdecl PlayerMailComp::onChangeMailStarNotify(
        PlayerMailComp *const this,
        const proto::ChangeMailStarNotify *notify)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  proto::MailUpdateOpType v6; // ecx
  int32_t updated; // r14d
  int32_t result; // eax
  char v9[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 15 mail_id_set:539";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerMailComp::onChangeMailStarNotify;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set(v2 + 1);
  v5 = proto::ChangeMailStarNotify::mail_id_list(notify);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(v2 + 1, v5);
  if ( proto::ChangeMailStarNotify::is_star(notify) )
    v6 = MAIL_UPDATE_OP_STAR_MAIL;
  else
    v6 = MAIL_UPDATE_OP_UNSTAR_MAIL;
  updated = PlayerMailComp::sendUpdateRedisMailReq(this, v6, v2 + 1);
  std::set<unsigned int>::~set(v2 + 1);
  result = updated;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 545: range 0000000017581CB6-0000000017582076
int32_t __cdecl PlayerMailComp::onGetMailItemReq(PlayerMailComp *const this, const proto::GetMailItemReq *proto)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Player *player; // r14
  int32_t RedisMailReq; // r14d
  int32_t result; // eax
  uint32_t now; // [rsp+14h] [rbp-FCh]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<proto::GetMailItemRsp> __r; // [rsp+30h] [rbp-E0h] BYREF
  char v14[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 mail_id:560 48 16 11 rsp_ptr:550 80 48 15 mail_id_set:559";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::onGetMailItemReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->take_attachment_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->take_attachment_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->take_attachment_start_time_);
  }
  if ( this->take_attachment_start_time_ && now < this->take_attachment_start_time_ + 5 )
  {
    common::tools::perf::make_shared<proto::GetMailItemRsp>();
    v5 = std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto::GetMailItemRsp::set_retcode(v5, 3);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetMailItemRsp>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    RedisMailReq = 0;
    std::shared_ptr<proto::GetMailItemRsp>::~shared_ptr((std::shared_ptr<proto::GetMailItemRsp> *const)(v2 + 48));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->take_attachment_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->take_attachment_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->take_attachment_start_time_, proto, &this->take_attachment_start_time_);
    }
    this->take_attachment_start_time_ = now;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 80));
    __for_range = proto::GetMailItemReq::mail_id_list(proto);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v2 + 32) = *__for_begin;
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v2 + 80),
        (const std::set<unsigned int>::value_type *)(v2 + 32));
      ++__for_begin;
    }
    RedisMailReq = PlayerMailComp::sendGetRedisMailReq(
                     this,
                     MAIL_GET_OP_TAKE_ATTACHMENT,
                     MAIL_GET_BY_ID,
                     (const std::set<unsigned int> *)(v2 + 80));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  }
  result = RedisMailReq;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 570: range 0000000017582078-00000000175823C5
int32_t __cdecl PlayerMailComp::onGetAllMailNotify(PlayerMailComp *const this, const proto::GetAllMailNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t *p_get_collected_mail_start_time; // rax
  std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *player; // r14
  int32_t RedisMailReq; // r14d
  __int64 v9; // rdx
  int v10; // eax
  int32_t result; // eax
  uint32_t now; // [rsp+10h] [rbp-C0h]
  proto::MailGetType get_type; // [rsp+14h] [rbp-BCh]
  uint32_t *start_time; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<proto::GetAllMailResultNotify> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int> mail_id_set; // [rsp+30h] [rbp-A0h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 result_notify_ptr:576";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::onGetAllMailNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  now = common::tools::TimeUtils::getNow();
  if ( proto::GetAllMailNotify::is_collected(notify) )
    p_get_collected_mail_start_time = &this->get_collected_mail_start_time_;
  else
    p_get_collected_mail_start_time = &this->get_mail_start_time_;
  start_time = p_get_collected_mail_start_time;
  if ( *(_BYTE *)(((unsigned __int64)p_get_collected_mail_start_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_get_collected_mail_start_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_get_collected_mail_start_time >> 3)
                                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(p_get_collected_mail_start_time);
  }
  if ( *start_time && now < *start_time + 5 )
  {
    common::tools::perf::make_shared<proto::GetAllMailResultNotify>();
    v6 = std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::GetAllMailResultNotify::set_retcode(v6, 3);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetAllMailResultNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    RedisMailReq = 3;
    std::shared_ptr<proto::GetAllMailResultNotify>::~shared_ptr((std::shared_ptr<proto::GetAllMailResultNotify> *const)(v2 + 32));
  }
  else
  {
    v9 = (*(_BYTE *)(((unsigned __int64)start_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)start_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)start_time >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_store4(start_time, ((unsigned __int8)start_time & 7u) + 3, v9);
    *start_time = now;
    if ( proto::GetAllMailNotify::is_collected(notify) )
      v10 = 3;
    else
      v10 = 2;
    get_type = v10;
    memset(&mail_id_set, 0, sizeof(mail_id_set));
    std::set<unsigned int>::set(&mail_id_set);
    RedisMailReq = PlayerMailComp::sendGetRedisMailReq(this, MAIL_GET_OP_CLIENT_MULTI_BATCH, get_type, &mail_id_set);
    std::set<unsigned int>::~set(&mail_id_set);
  }
  result = RedisMailReq;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 589: range 00000000175823C6-00000000175825B0
int32_t __cdecl PlayerMailComp::onGetRedisMailRsp(PlayerMailComp *const this, const proto::GetRedisMailRsp *proto)
{
  proto::MailGetOPType v2; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  proto::MailGetOPType v8; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  v2 = proto::GetRedisMailRsp::op_type(proto);
  if ( v2 == MAIL_GET_OP_CLIENT_MULTI_BATCH )
    return PlayerMailComp::sendGetAllMailResultNotifyToClient(this, proto);
  if ( v2 > MAIL_GET_OP_CLIENT_MULTI_BATCH )
    goto LABEL_15;
  if ( v2 != MAIL_GET_OP_UNTREATED )
  {
    if ( v2 == MAIL_GET_OP_CLIENT )
      return PlayerMailComp::sendGetAllMailRspToClient(this, proto);
    if ( v2 == MAIL_GET_OP_TAKE_ATTACHMENT )
      return PlayerMailComp::sendGetItemRspToClient(this, proto);
LABEL_15:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "onGetRedisMailRsp",
      615);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v9,
           (const char (*)[29])"invalid MailGetOPType, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])", op_type: ");
    v8 = proto::GetRedisMailRsp::op_type(proto);
    common::milog::MiLogStream::operator<<<proto::MailGetOPType,(proto::MailGetOPType*)0>(v6, &v8);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  if ( proto::GetRedisMailRsp::is_collectible_mail_transfered(proto) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_collectible_mail_transfered_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_collectible_mail_transfered_, proto, &this->is_collectible_mail_transfered_);
    this->is_collectible_mail_transfered_ = 1;
  }
  return PlayerMailComp::sendClientNewMailNotify(this, proto);
};

// Line 623: range 00000000175825B2-00000000175826EB
int32_t __cdecl PlayerMailComp::onDelRedisMailRsp(PlayerMailComp *const this, const proto::DelRedisMailRsp *proto)
{
  proto::MailDelOpType v2; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  proto::MailDelOpType v8; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  v2 = proto::DelRedisMailRsp::op_type(proto);
  if ( v2 == MAIL_DEL_OP_CLIENT )
    return PlayerMailComp::sendDelMailRspToClient(this, proto);
  if ( v2 == MAIL_DEL_OP_GAME )
    return 0;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/mail/player_mail_comp.cpp",
    "onDelRedisMailRsp",
    638);
  v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v9,
         (const char (*)[29])"invalid MailDelOPType, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])",op_type: ");
  v8 = proto::DelRedisMailRsp::op_type(proto);
  common::milog::MiLogStream::operator<<<proto::MailDelOpType,(proto::MailDelOpType*)0>(v6, &v8);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return -1;
};

// Line 646: range 00000000175826EC-000000001758282F
int32_t __cdecl PlayerMailComp::onUpdateRedisMailRsp(
        PlayerMailComp *const this,
        const proto::UpdateRedisMailRsp *proto)
{
  proto::MailUpdateOpType v2; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  proto::MailUpdateOpType v8; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  v2 = proto::UpdateRedisMailRsp::op_type(proto);
  if ( v2 > MAIL_UPDATE_OP_UNSTAR_MAIL )
    goto LABEL_8;
  if ( v2 >= MAIL_UPDATE_OP_STAR_MAIL || v2 == MAIL_UPDATE_OP_MARK_READ )
    return 0;
  if ( v2 == MAIL_UPDATE_OP_TAKE_ATTACHMENT )
    return PlayerMailComp::updateHasTakeAttachmentMail(this, proto);
LABEL_8:
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/mail/player_mail_comp.cpp",
    "onUpdateRedisMailRsp",
    663);
  v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v9,
         (const char (*)[32])"invalid MailUpdateOPType, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])",op_type: ");
  v8 = proto::UpdateRedisMailRsp::op_type(proto);
  common::milog::MiLogStream::operator<<<proto::MailUpdateOpType,(proto::MailUpdateOpType*)0>(v6, &v8);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return -1;
};

// Line 672: range 0000000017582830-0000000017582A4B
int32_t __cdecl PlayerMailComp::onAddRedisMailRsp(PlayerMailComp *const this, const proto::AddRedisMailRsp *proto)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  const std::string *v10; // rax
  int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/mail/player_mail_comp.cpp",
    "onAddRedisMailRsp",
    674);
  v2 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v13,
         (const char (*)[28])"[MAIL] addNewMail retcode: ");
  val = proto::AddRedisMailRsp::retcode(proto);
  v3 = common::milog::MiLogStream::operator<<<int,(int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v3, (const char (*)[8])" ,uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &Uid);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" ,transaction: ");
  v7 = proto::AddRedisMailRsp::transaction[abi:cxx11](proto);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, v7);
  common::milog::MiLogStream::~MiLogStream(&v13);
  if ( proto::AddRedisMailRsp::retcode(proto) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "onAddRedisMailRsp",
      678);
    v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v13,
           (const char (*)[60])"AddRedisMailRsp's retcode is not equal with RET_SUCC, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    v10 = proto::AddRedisMailRsp::transaction[abi:cxx11](proto);
    std::unordered_map<std::string,proto::MailBin>::erase(&this->new_wait_add_mail_map_, v10);
    return 0;
  }
};

// Line 688: range 0000000017582A4C-0000000017582E50
int32_t __cdecl PlayerMailComp::onRedisMailChangeNotify(
        PlayerMailComp *const this,
        const proto::RedisMailChangeNotify *proto)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<proto::MailChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto::MailChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  Player *player; // r14
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::MailRedisData>::const_iterator __for_begin; // [rsp+10h] [rbp-200h] BYREF
  google::protobuf::RepeatedPtrField<proto::MailRedisData>::const_iterator __for_end; // [rsp+18h] [rbp-1F8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-1F0h]
  const google::protobuf::RepeatedPtrField<proto::MailRedisData> *__for_range; // [rsp+28h] [rbp-1E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+30h] [rbp-1E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-1D8h]
  const proto::MailRedisData *mail; // [rsp+40h] [rbp-1D0h]
  proto::MailData *proto_mail_data; // [rsp+48h] [rbp-1C8h]
  std::shared_ptr<proto::MailChangeNotify> __r; // [rsp+50h] [rbp-1C0h] BYREF
  char v19[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 del_mail_id:704 48 16 14 notify_ptr:691 80 232 13 mail_data:696";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::onRedisMailChangeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  v4[536862731] = -202116109;
  common::tools::perf::make_shared<proto::MailChangeNotify>();
  __for_range = proto::RedisMailChangeNotify::update_mail_list(proto);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MailRedisData>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MailRedisData>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MailRedisData const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    mail = google::protobuf::internal::RepeatedPtrIterator<proto::MailRedisData const>::operator*(&__for_begin);
    MailData::MailData((MailData *const)(v2 + 80));
    MailData::fromRedisMail((MailData *const)(v2 + 80), mail);
    v5 = std::__shared_ptr_access<proto::MailChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MailChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    proto_mail_data = proto::MailChangeNotify::add_mail_list(v5);
    MailData::toClient((const MailData *const)(v2 + 80), proto_mail_data);
    MailData::~MailData((MailData *const)(v2 + 80));
    google::protobuf::internal::RepeatedPtrIterator<proto::MailRedisData const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::RedisMailChangeNotify::del_mail_id_list(proto);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    v6 = std::__shared_ptr_access<proto::MailChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MailChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    v7 = proto::MailChangeNotify::mutable_del_mail_id_list(v6);
    google::protobuf::RepeatedField<unsigned int>::Add(v7, (const unsigned int *)(v2 + 32));
    ++__for_begin_0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::MailChangeNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::MailChangeNotify>::~shared_ptr((std::shared_ptr<proto::MailChangeNotify> *const)(v2 + 48));
  result = 0;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 715: range 0000000017582E52-000000001758366D
int32_t __cdecl PlayerMailComp::onGetRedisMailTransactionStatusRsp(
        PlayerMailComp *const this,
        const proto::GetRedisMailTransactionStatusRsp *proto)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  proto::MailBin *p_second; // r14
  proto::MailBin *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-154h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,proto::MailBin>,true> __y; // [rsp+20h] [rbp-150h] BYREF
  const google::protobuf::Map<std::string,bool> *transaction_status_map; // [rsp+28h] [rbp-148h]
  const google::protobuf::Map<std::string,bool> *__for_range; // [rsp+30h] [rbp-140h]
  const std::string *p_transaction; // [rsp+38h] [rbp-138h]
  google::protobuf::Map<std::string,bool>::const_iterator __for_begin; // [rsp+40h] [rbp-130h] BYREF
  google::protobuf::Map<std::string,bool>::const_iterator __for_end; // [rsp+60h] [rbp-110h] BYREF
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 8 8 iter:743 80 48 23 resend_mail_bin_map:723";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::onGetRedisMailTransactionStatusRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  if ( !proto::GetRedisMailTransactionStatusRsp::retcode(proto) )
  {
    std::map<std::string,proto::MailBin>::map((std::map<std::string,proto::MailBin> *const)(v2 + 80));
    transaction_status_map = proto::GetRedisMailTransactionStatusRsp::transaction_status_map[abi:cxx11](proto);
    __for_range = transaction_status_map;
    google::protobuf::Map<std::string,bool>::begin(&__for_begin, transaction_status_map);
    google::protobuf::Map<std::string,bool>::end(&__for_end, transaction_status_map);
    while ( 1 )
    {
      if ( !google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        if ( !std::map<std::string,proto::MailBin>::empty((const std::map<std::string,proto::MailBin> *const)(v2 + 80)) )
          v6 = PlayerMailComp::sendResendRedisMailReq(this, (const std::map<std::string,proto::MailBin> *)(v2 + 80));
        else
          v6 = 0;
        std::map<std::string,proto::MailBin>::~map((std::map<std::string,proto::MailBin> *const)(v2 + 80));
        goto LABEL_32;
      }
      p_transaction = (const std::string *)google::protobuf::Map<std::string,bool>::const_iterator::operator*(&__for_begin);
      if ( *(char *)(((unsigned __int64)&p_transaction[1] >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&p_transaction[1]);
      if ( LOBYTE(p_transaction[1]._M_dataplus._M_p) )
      {
        *(std::unordered_map<std::string,proto::MailBin>::iterator *)(v2 + 48) = std::unordered_map<std::string,proto::MailBin>::find(
                                                                                   &this->new_wait_add_mail_map_,
                                                                                   p_transaction);
        __y._M_cur = std::unordered_map<std::string,proto::MailBin>::end(&this->new_wait_add_mail_map_)._M_cur;
        if ( !std::__detail::operator!=<std::pair<std::string const,proto::MailBin>,true>(
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,proto::MailBin>,true> *)(v2 + 48),
                &__y) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/mail/player_mail_comp.cpp",
            "onGetRedisMailTransactionStatusRsp",
            738);
          v10 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                  &v26,
                  (const char (*)[68])"transaction is found in multiserver, but maybe erase earlier, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
LABEL_26:
          val = Player::getUid(this->player_);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v16,
                  (const char (*)[16])" ,transaction: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, p_transaction);
          common::milog::MiLogStream::~MiLogStream(&v26);
          goto LABEL_27;
        }
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/mail/player_mail_comp.cpp",
          "onGetRedisMailTransactionStatusRsp",
          732);
        v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v26,
               (const char (*)[43])"transaction is found in multiserver, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" ,transaction: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, p_transaction);
        common::milog::MiLogStream::~MiLogStream(&v26);
        std::unordered_map<std::string,proto::MailBin>::erase(
          &this->new_wait_add_mail_map_,
          *(std::unordered_map<std::string,proto::MailBin>::iterator *)(v2 + 48));
      }
      else
      {
        *(std::unordered_map<std::string,proto::MailBin>::iterator *)(v2 + 48) = std::unordered_map<std::string,proto::MailBin>::find(
                                                                                   &this->new_wait_add_mail_map_,
                                                                                   p_transaction);
        __y._M_cur = std::unordered_map<std::string,proto::MailBin>::end(&this->new_wait_add_mail_map_)._M_cur;
        if ( !std::__detail::operator!=<std::pair<std::string const,proto::MailBin>,true>(
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,proto::MailBin>,true> *)(v2 + 48),
                &__y) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mail/player_mail_comp.cpp",
            "onGetRedisMailTransactionStatusRsp",
            752);
          v10 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                  &v26,
                  (const char (*)[72])"transaction is not found in multiserver, but maybe erase earlier, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          goto LABEL_26;
        }
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mail/player_mail_comp.cpp",
          "onGetRedisMailTransactionStatusRsp",
          746);
        v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v26,
                (const char (*)[47])"transaction is not found in multiserver, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v12,
                (const char (*)[16])" ,transaction: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, p_transaction);
        common::milog::MiLogStream::~MiLogStream(&v26);
        p_second = &std::__detail::_Node_iterator<std::pair<std::string const,proto::MailBin>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,proto::MailBin>,false,true> *const)(v2 + 48))->second;
        v15 = std::map<std::string,proto::MailBin>::operator[](
                (std::map<std::string,proto::MailBin> *const)(v2 + 80),
                p_transaction);
        proto::MailBin::operator=(v15, p_second);
      }
LABEL_27:
      google::protobuf::Map<std::string,bool>::const_iterator::operator++(&__for_begin);
    }
  }
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/mail/player_mail_comp.cpp",
    "onGetRedisMailTransactionStatusRsp",
    719);
  v5 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
         &v26,
         (const char (*)[77])"GetRedisMailTransactionStatusRsp's retcode is not equal with RET_SUCC, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v26);
  v6 = -1;
LABEL_32:
  result = v6;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 767: range 000000001758366E-0000000017583DAF
int32_t __cdecl PlayerMailComp::onResendRedisMailRsp(
        PlayerMailComp *const this,
        const proto::ResendRedisMailRsp *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,proto::MailBin>,true> __y; // [rsp+20h] [rbp-F0h] BYREF
  const google::protobuf::Map<std::string,bool> *resend_status_map; // [rsp+28h] [rbp-E8h]
  const google::protobuf::Map<std::string,bool> *__for_range; // [rsp+30h] [rbp-E0h]
  const std::string *p_transaction; // [rsp+38h] [rbp-D8h]
  google::protobuf::Map<std::string,bool>::const_iterator __for_begin; // [rsp+40h] [rbp-D0h] BYREF
  google::protobuf::Map<std::string,bool>::const_iterator __for_end; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-90h] BYREF
  char v21[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:793";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::onResendRedisMailRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( proto::ResendRedisMailRsp::retcode(proto) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "onResendRedisMailRsp",
      772);
    v5 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v20,
           (const char (*)[63])"ResendRedisMailRsp's retcode is not equal with RET_SUCC, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  resend_status_map = proto::ResendRedisMailRsp::resend_status_map[abi:cxx11](proto);
  __for_range = resend_status_map;
  google::protobuf::Map<std::string,bool>::begin(&__for_begin, resend_status_map);
  google::protobuf::Map<std::string,bool>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_transaction = (const std::string *)google::protobuf::Map<std::string,bool>::const_iterator::operator*(&__for_begin);
    if ( *(char *)(((unsigned __int64)&p_transaction[1] >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&p_transaction[1]);
    if ( !LOBYTE(p_transaction[1]._M_dataplus._M_p) )
    {
      *(std::unordered_map<std::string,proto::MailBin>::iterator *)(v2 + 32) = std::unordered_map<std::string,proto::MailBin>::find(
                                                                                 &this->new_wait_add_mail_map_,
                                                                                 p_transaction);
      __y._M_cur = std::unordered_map<std::string,proto::MailBin>::end(&this->new_wait_add_mail_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<std::string const,proto::MailBin>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,proto::MailBin>,true> *)(v2 + 32),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mail/player_mail_comp.cpp",
          "onResendRedisMailRsp",
          796);
        v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v20,
               (const char (*)[26])"mail resend failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mail/player_mail_comp.cpp",
          "onResendRedisMailRsp",
          800);
        v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v20,
               (const char (*)[52])"mail resend failed,, but maybe erase earlier, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      goto LABEL_26;
    }
    *(std::unordered_map<std::string,proto::MailBin>::iterator *)(v2 + 32) = std::unordered_map<std::string,proto::MailBin>::find(
                                                                               &this->new_wait_add_mail_map_,
                                                                               p_transaction);
    __y._M_cur = std::unordered_map<std::string,proto::MailBin>::end(&this->new_wait_add_mail_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<std::string const,proto::MailBin>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,proto::MailBin>,true> *)(v2 + 32),
            &__y) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "onResendRedisMailRsp",
        788);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v20,
             (const char (*)[49])"mail resend succ, but maybe erase earlier, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_26:
      val = Player::getUid(this->player_);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" ,transaction: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, p_transaction);
      common::milog::MiLogStream::~MiLogStream(&v20);
      goto LABEL_27;
    }
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mail/player_mail_comp.cpp",
      "onResendRedisMailRsp",
      783);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v20,
           (const char (*)[24])"mail resend succ, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" ,transaction: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, p_transaction);
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::unordered_map<std::string,proto::MailBin>::erase(
      &this->new_wait_add_mail_map_,
      *(std::unordered_map<std::string,proto::MailBin>::iterator *)(v2 + 32));
LABEL_27:
    google::protobuf::Map<std::string,bool>::const_iterator::operator++(&__for_begin);
  }
  result = 0;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 809: range 00000000176C306E-00000000176C345C
int32_t __cdecl PlayerMailComp::sendProtoToMailService<proto::AddRedisMailReq>(
        Player *player,
        proto::AddRedisMailReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:811";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendProtoToMailService<proto::AddRedisMailReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::AddRedisMailReq>((const proto::AddRedisMailReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      814);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xAu);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      821);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v18,
            (const char (*)[26])"sending to mail_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v19, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 809: range 00000000176C2C7F-00000000176C306D
int32_t __cdecl PlayerMailComp::sendProtoToMailService<proto::CleanRedisMailNotify>(
        Player *player,
        proto::CleanRedisMailNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:811";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendProtoToMailService<proto::CleanRedisMailNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::CleanRedisMailNotify>((const proto::CleanRedisMailNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      814);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xAu);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      821);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v18,
            (const char (*)[26])"sending to mail_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v19, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 809: range 00000000176C6104-00000000176C64F2
int32_t __cdecl PlayerMailComp::sendProtoToMailService<proto::ClearUpRedisMailNotify>(
        Player *player,
        proto::ClearUpRedisMailNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:811";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendProtoToMailService<proto::ClearUpRedisMailNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ClearUpRedisMailNotify>((const proto::ClearUpRedisMailNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      814);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xAu);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      821);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v18,
            (const char (*)[26])"sending to mail_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v19, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 809: range 00000000176C47DA-00000000176C4BC8
int32_t __cdecl PlayerMailComp::sendProtoToMailService<proto::DelRedisMailReq>(
        Player *player,
        proto::DelRedisMailReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:811";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendProtoToMailService<proto::DelRedisMailReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::DelRedisMailReq>((const proto::DelRedisMailReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      814);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xAu);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      821);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v18,
            (const char (*)[26])"sending to mail_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v19, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 809: range 00000000176C43EA-00000000176C47D8
int32_t __cdecl PlayerMailComp::sendProtoToMailService<proto::GetRedisMailReq>(
        Player *player,
        proto::GetRedisMailReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:811";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendProtoToMailService<proto::GetRedisMailReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::GetRedisMailReq>((const proto::GetRedisMailReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      814);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xAu);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      821);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v18,
            (const char (*)[26])"sending to mail_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v19, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 809: range 00000000176C5D14-00000000176C6102
int32_t __cdecl PlayerMailComp::sendProtoToMailService<proto::GetRedisMailTransactionStatusReq>(
        Player *player,
        proto::GetRedisMailTransactionStatusReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:811";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendProtoToMailService<proto::GetRedisMailTransactionStatusReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::GetRedisMailTransactionStatusReq>((const proto::GetRedisMailTransactionStatusReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      814);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xAu);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      821);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v18,
            (const char (*)[26])"sending to mail_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v19, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 809: range 00000000176C6638-00000000176C6A26
int32_t __cdecl PlayerMailComp::sendProtoToMailService<proto::ResendRedisMailReq>(
        Player *player,
        proto::ResendRedisMailReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:811";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendProtoToMailService<proto::ResendRedisMailReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ResendRedisMailReq>((const proto::ResendRedisMailReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      814);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xAu);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      821);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v18,
            (const char (*)[26])"sending to mail_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v19, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 809: range 00000000176C4CF2-00000000176C50E0
int32_t __cdecl PlayerMailComp::sendProtoToMailService<proto::UpdateRedisMailReq>(
        Player *player,
        proto::UpdateRedisMailReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:811";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendProtoToMailService<proto::UpdateRedisMailReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::UpdateRedisMailReq>((const proto::UpdateRedisMailReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      814);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xAu);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendProtoToMailService",
      821);
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v18,
            (const char (*)[26])"sending to mail_service: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v19, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
    std::string::~string(&v19);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 826: range 0000000017583DB0-0000000017584015
int32_t __cdecl PlayerMailComp::sendGetAllMailRspToClient(
        PlayerMailComp *const this,
        const proto::GetRedisMailRsp *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  Player *player; // r14
  int32_t result; // eax
  std::shared_ptr<proto::GetAllMailRsp> __r; // [rsp+10h] [rbp-80h] BYREF
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:836";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendGetAllMailRspToClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( proto::GetRedisMailRsp::get_type(proto) == MAIL_GET_ALL_COLLECTED )
  {
    v5 = (*(_BYTE *)(((unsigned __int64)&this->get_collected_mail_start_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->get_collected_mail_start_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v5 )
      __asan_report_store4(&this->get_collected_mail_start_time_, (((_BYTE)this + 36) & 7u) + 3, v5);
    this->get_collected_mail_start_time_ = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->get_mail_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->get_mail_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->get_mail_start_time_, proto, &this->get_mail_start_time_);
    }
    this->get_mail_start_time_ = 0;
  }
  common::tools::perf::make_shared<proto::GetAllMailRsp>();
  v6 = std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto::GetAllMailRsp::set_retcode(v6, -1);
  v7 = std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetAllMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  PlayerMailComp::fillGetAllMailRsp(this, proto, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetAllMailRsp>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::GetAllMailRsp>::~shared_ptr((std::shared_ptr<proto::GetAllMailRsp> *const)(v2 + 32));
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 844: range 0000000017584016-000000001758418D
int32_t __cdecl PlayerMailComp::fillGetAllMailRsp(
        PlayerMailComp *const this,
        const proto::GetRedisMailRsp *proto,
        proto::GetAllMailRsp *rsp_0)
{
  common::milog::MiLogStream *v3; // rbx
  google::protobuf::RepeatedPtrField<proto::MailData> *v5; // rbx
  const google::protobuf::RepeatedPtrField<std::string > *v6; // rcx
  bool is_truncated; // dl
  bool v8; // dl
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::GetRedisMailRsp::retcode(proto) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "fillGetAllMailRsp",
      847);
    v3 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v11,
           (const char (*)[60])"GetRedisMailRsp's retcode is not equal with RET_SUCC, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    v5 = proto::GetAllMailRsp::mutable_mail_list(rsp_0);
    v6 = proto::GetRedisMailRsp::mail_str_list[abi:cxx11](proto);
    PlayerMailComp::filterMailList(this, v6, v5);
    is_truncated = proto::GetRedisMailRsp::is_truncated(proto);
    proto::GetAllMailRsp::set_is_truncated(rsp_0, is_truncated);
    proto::GetAllMailRsp::set_retcode(rsp_0, 0);
    v8 = proto::GetRedisMailRsp::get_type(proto) == MAIL_GET_ALL_COLLECTED;
    proto::GetAllMailRsp::set_is_collected(rsp_0, v8);
    return 0;
  }
};

// Line 862: range 000000001758418E-00000000175845B5
int32_t __cdecl PlayerMailComp::sendGetAllMailResultNotifyToClient(
        PlayerMailComp *const this,
        const proto::GetRedisMailRsp *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  google::protobuf::int32 v7; // eax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  google::protobuf::RepeatedPtrField<proto::MailData> *v10; // r14
  const google::protobuf::RepeatedPtrField<std::string > *v11; // rcx
  std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  const std::string *v13; // rax
  std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  proto::MailGetType type; // eax
  std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  google::protobuf::uint32 v17; // eax
  std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  google::protobuf::uint32 v19; // eax
  Player *player; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<proto::GetAllMailResultNotify> __r; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:873";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendGetAllMailResultNotifyToClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( proto::GetRedisMailRsp::get_type(proto) == MAIL_GET_ALL_COLLECTED )
  {
    v5 = (*(_BYTE *)(((unsigned __int64)&this->get_collected_mail_start_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->get_collected_mail_start_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v5 )
      __asan_report_store4(&this->get_collected_mail_start_time_, (((_BYTE)this + 36) & 7u) + 3, v5);
    this->get_collected_mail_start_time_ = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->get_mail_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->get_mail_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->get_mail_start_time_, proto, &this->get_mail_start_time_);
    }
    this->get_mail_start_time_ = 0;
  }
  common::tools::perf::make_shared<proto::GetAllMailResultNotify>();
  v6 = std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v7 = proto::GetRedisMailRsp::retcode(proto);
  proto::GetAllMailResultNotify::set_retcode(v6, v7);
  if ( proto::GetRedisMailRsp::retcode(proto) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendGetAllMailResultNotifyToClient",
      878);
    v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v24,
           (const char (*)[60])"GetRedisMailRsp's retcode is not equal with RET_SUCC, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    v9 = std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v10 = proto::GetAllMailResultNotify::mutable_mail_list(v9);
    v11 = proto::GetRedisMailRsp::mail_str_list[abi:cxx11](proto);
    PlayerMailComp::filterMailList(this, v11, v10);
    v12 = std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v13 = proto::GetRedisMailRsp::transaction[abi:cxx11](proto);
    proto::GetAllMailResultNotify::set_transaction(v12, v13);
    v14 = std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    type = proto::GetRedisMailRsp::get_type(proto);
    proto::GetAllMailResultNotify::set_is_collected(v14, type == MAIL_GET_ALL_COLLECTED);
    v16 = std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v17 = proto::GetRedisMailRsp::page_index(proto);
    proto::GetAllMailResultNotify::set_page_index(v16, v17);
    v18 = std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetAllMailResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v19 = proto::GetRedisMailRsp::total_page_count(proto);
    proto::GetAllMailResultNotify::set_total_page_count(v18, v19);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetAllMailResultNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::GetAllMailResultNotify>::~shared_ptr((std::shared_ptr<proto::GetAllMailResultNotify> *const)(v2 + 32));
  result = 0;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 896: range 00000000175845B6-0000000017584E71
void __cdecl PlayerMailComp::filterMailList(
        PlayerMailComp *const this,
        const google::protobuf::RepeatedPtrField<std::string > *mail_str_list,
        google::protobuf::RepeatedPtrField<proto::MailData> *mail_data_list)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  unsigned int val; // [rsp+2Ch] [rbp-2F4h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+30h] [rbp-2F0h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+38h] [rbp-2E8h] BYREF
  std::vector<ItemParam>::iterator __for_begin_0; // [rsp+40h] [rbp-2E0h] BYREF
  std::vector<ItemParam>::iterator __for_end_0; // [rsp+48h] [rbp-2D8h] BYREF
  const std::set<std::string> *tag_set; // [rsp+50h] [rbp-2D0h]
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+58h] [rbp-2C8h]
  const std::string *mail_str; // [rsp+60h] [rbp-2C0h]
  std::vector<ItemParam> *__for_range_0; // [rsp+68h] [rbp-2B8h]
  const ItemParam *item_param; // [rsp+70h] [rbp-2B0h]
  proto::MailData *proto_mail_data; // [rsp+78h] [rbp-2A8h]
  std::shared_ptr<Config> v25; // [rsp+80h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v26; // [rsp+90h] [rbp-290h] BYREF
  char v27[624]; // [rsp+B0h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 40 8 mail:906 112 40 18 item_param_bin:919 192 48 19 del_mail_id_set:901 272 232 13 mail_data:913";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::filterMailList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  v5[536862737] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  tag_set = data::DbMailBlockTagConfigMgr::getDbMailPBlockedTagConfig[abi:cxx11](&v6->design_config.db_config_mgr.db_local_config_mgr.mail_block_tag_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v25);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 192));
  __for_range = mail_str_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(mail_str_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(mail_str_list).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
  {
    mail_str = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
    proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v3 + 32));
    if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 32, mail_str) != 1 )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "filterMailList",
        909);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v26,
        (const char (*)[28])"Mail ParseFromString failed");
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      MailData::MailData((MailData *const)(v3 + 272));
      MailData::fromRedisMail((MailData *const)(v3 + 272), (const proto::MailRedisData *)(v3 + 32));
      __for_range_0 = (std::vector<ItemParam> *)(v3 + 384);
      __for_begin_0._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 384))._M_current;
      __for_end_0._M_current = std::vector<ItemParam>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin_0, &__for_end_0) )
      {
        item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_0);
        proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v3 + 112), item_param->item_id);
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v3 + 112), item_param->count);
        if ( *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->level >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->level);
        }
        proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v3 + 112), item_param->level);
        if ( *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->promote_level);
        }
        proto::ItemParamBin::set_promote_level((proto::ItemParamBin *const)(v3 + 112), item_param->promote_level);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
        v8 = TxtConfigMgr::checkItemParamBin(
               &v7->design_config.txt_config_mgr,
               (const proto::ItemParamBin *)(v3 + 112),
               *(data::ItemLimitType *)(v3 + 448)) != 0;
        std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( v8 )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/mail/player_mail_comp.cpp",
            "filterMailList",
            927);
          v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 &v26,
                 (const char (*)[30])"checkEquipParam failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", mail id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 280));
          common::milog::MiLogStream::~MiLogStream(&v26);
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v3 + 192),
            (const std::set<unsigned int>::value_type *)(v3 + 280));
          v12 = 0;
        }
        else
        {
          v12 = 1;
        }
        proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v3 + 112));
        if ( v12 != 1 )
          break;
        __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_0);
      }
      if ( std::set<std::string>::count(tag_set, (const std::set<std::string>::key_type *)(v3 + 456)) )
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v3 + 192),
          (const std::set<unsigned int>::value_type *)(v3 + 280));
      if ( !std::set<unsigned int>::count(
              (const std::set<unsigned int> *const)(v3 + 192),
              (const std::set<unsigned int>::key_type *)(v3 + 280)) )
      {
        proto_mail_data = google::protobuf::RepeatedPtrField<proto::MailData>::Add(mail_data_list);
        MailData::toClient((const MailData *const)(v3 + 272), proto_mail_data);
      }
      MailData::~MailData((MailData *const)(v3 + 272));
    }
    proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v3 + 32));
    google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
  }
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 192)) )
    PlayerMailComp::sendDelRedisMailReq(this, MAIL_DEL_OP_GAME, (const std::set<unsigned int> *)(v3 + 192));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 192));
  if ( v27 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 955: range 0000000017584E72-000000001758551E
int32_t __cdecl PlayerMailComp::sendClientNewMailNotify(
        PlayerMailComp *const this,
        const proto::GetRedisMailRsp *proto)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  int32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const std::set<std::string> *v8; // rax
  const proto::MailBin *v9; // rax
  const std::string *v10; // rax
  const proto::MailBin *v11; // rax
  std::__shared_ptr_access<proto::ClientNewMailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto::ClientNewMailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *player; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-1CCh] BYREF
  uint32_t not_read_num; // [rsp+18h] [rbp-1C8h]
  uint32_t not_take_attachment_num; // [rsp+1Ch] [rbp-1C4h]
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+20h] [rbp-1C0h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+28h] [rbp-1B8h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+30h] [rbp-1B0h]
  const std::string *mail_str; // [rsp+38h] [rbp-1A8h]
  std::shared_ptr<const google::protobuf::Message> v24; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-190h] BYREF
  char v26[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 14 notify_ptr:996 80 40 8 mail:969 160 48 11 tag_set:962 240 48 26 mail_collect_state_map:965";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendClientNewMailNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  if ( proto::GetRedisMailRsp::retcode(proto) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "sendClientNewMailNotify",
      958);
    v5 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v25,
           (const char (*)[60])"GetRedisMailRsp's retcode is not equal with RET_SUCC, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v6 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    v8 = data::DbMailBlockTagConfigMgr::getDbMailPBlockedTagConfig[abi:cxx11](&v7->design_config.db_config_mgr.db_local_config_mgr.mail_block_tag_config_mgr);
    std::set<std::string>::set((std::set<std::string> *const)(v2 + 160), v8);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v24);
    not_read_num = 0;
    not_take_attachment_num = 0;
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 240));
    __for_range = proto::GetRedisMailRsp::mail_str_list[abi:cxx11](proto);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
    {
      mail_str = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
      proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v2 + 80));
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 80, mail_str) != 1 )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mail/player_mail_comp.cpp",
          "sendClientNewMailNotify",
          972);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v25,
          (const char (*)[28])"Mail ParseFromString failed");
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        v9 = proto::MailRedisData::mail_bin((const proto::MailRedisData *const)(v2 + 80));
        v10 = proto::MailBin::tag[abi:cxx11](v9);
        if ( !std::set<std::string>::count((const std::set<std::string> *const)(v2 + 160), v10) )
        {
          if ( !proto::MailRedisData::is_read((const proto::MailRedisData *const)(v2 + 80)) )
            ++not_read_num;
          v11 = proto::MailRedisData::mail_bin((const proto::MailRedisData *const)(v2 + 80));
          if ( proto::MailBin::item_param_list_size(v11) > 0
            && !proto::MailRedisData::is_attachment_got((const proto::MailRedisData *const)(v2 + 80)) )
          {
            val = proto::MailRedisData::id((const proto::MailRedisData *const)(v2 + 80));
            if ( !std::set<unsigned int>::count(&this->has_take_attachment_mail_id_set_, &val) )
              ++not_take_attachment_num;
          }
        }
      }
      proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v2 + 80));
      google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
    }
    if ( not_read_num || not_take_attachment_num )
    {
      common::tools::perf::make_shared<proto::ClientNewMailNotify>();
      v13 = std::__shared_ptr_access<proto::ClientNewMailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ClientNewMailNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      proto::ClientNewMailNotify::set_not_read_num(v13, not_read_num);
      v14 = std::__shared_ptr_access<proto::ClientNewMailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ClientNewMailNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      proto::ClientNewMailNotify::set_not_got_attachment_num(v14, not_take_attachment_num);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::ClientNewMailNotify>((const std::shared_ptr<proto::ClientNewMailNotify> *)&v24);
      Player::sendMessage(player, &v24, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v24);
      std::shared_ptr<proto::ClientNewMailNotify>::~shared_ptr((std::shared_ptr<proto::ClientNewMailNotify> *const)(v2 + 48));
    }
    v6 = 0;
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 240));
    std::set<std::string>::~set((std::set<std::string> *const)(v2 + 160));
  }
  result = v6;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1006: range 0000000017585520-00000000175857F1
int32_t __cdecl PlayerMailComp::sendGetRedisMailReq(
        PlayerMailComp *const this,
        proto::MailGetOPType op_type,
        proto::MailGetType get_type,
        const std::set<unsigned int> *mail_id_set)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  int32_t RedisMail; // r14d
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 56 8 req:1007";
  *(_QWORD *)(v4 + 16) = PlayerMailComp::sendGetRedisMailReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  proto::GetRedisMailReq::GetRedisMailReq((proto::GetRedisMailReq *const)(v4 + 32));
  proto::GetRedisMailReq::set_op_type((proto::GetRedisMailReq *const)(v4 + 32), op_type);
  proto::GetRedisMailReq::set_get_type((proto::GetRedisMailReq *const)(v4 + 32), get_type);
  __for_range = mail_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(mail_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(mail_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    proto::GetRedisMailReq::add_mail_id_list((proto::GetRedisMailReq *const)(v4 + 32), *v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_collectible_mail_transfered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_collectible_mail_transfered_);
  proto::GetRedisMailReq::set_is_collectible_mail_transfered(
    (proto::GetRedisMailReq *const)(v4 + 32),
    this->is_collectible_mail_transfered_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  RedisMail = PlayerMailComp::sendProtoToMailService<proto::GetRedisMailReq>(
                this->player_,
                (proto::GetRedisMailReq *)(v4 + 32));
  proto::GetRedisMailReq::~GetRedisMailReq((proto::GetRedisMailReq *const)(v4 + 32));
  result = RedisMail;
  if ( v16 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1020: range 00000000175857F2-0000000017585A69
int32_t __cdecl PlayerMailComp::sendDelRedisMailReq(
        PlayerMailComp *const this,
        proto::MailDelOpType op_type,
        const std::set<unsigned int> *mail_id_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  int32_t v8; // r14d
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  char v14[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 72 8 req:1021";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::sendDelRedisMailReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  proto::DelRedisMailReq::DelRedisMailReq((proto::DelRedisMailReq *const)(v3 + 48));
  proto::DelRedisMailReq::set_op_type((proto::DelRedisMailReq *const)(v3 + 48), op_type);
  __for_range = mail_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(mail_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(mail_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::DelRedisMailReq::add_mail_id_list((proto::DelRedisMailReq *const)(v3 + 48), *v7);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = PlayerMailComp::sendProtoToMailService<proto::DelRedisMailReq>(
         this->player_,
         (proto::DelRedisMailReq *)(v3 + 48));
  proto::DelRedisMailReq::~DelRedisMailReq((proto::DelRedisMailReq *const)(v3 + 48));
  result = v8;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1032: range 0000000017585A6A-0000000017585CFF
int32_t __cdecl PlayerMailComp::sendDelMailRspToClient(PlayerMailComp *const this, const proto::DelRedisMailRsp *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *player; // r14
  int32_t result; // eax
  unsigned int mail_id; // [rsp+14h] [rbp-9Ch]
  unsigned int *__for_begin; // [rsp+18h] [rbp-98h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-88h]
  std::shared_ptr<proto::DelMailRsp> __r; // [rsp+30h] [rbp-80h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 rsp_ptr:1033";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendDelMailRspToClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::DelMailRsp>();
  v5 = std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto::DelMailRsp::set_retcode(v5, -1);
  if ( !proto::DelRedisMailRsp::retcode(proto) )
  {
    __for_range = proto::DelRedisMailRsp::mail_id_list(proto);
    __for_begin = (unsigned int *)google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      mail_id = *__for_begin;
      v6 = std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      proto::DelMailRsp::add_mail_id_list(v6, mail_id);
      ++__for_begin;
    }
    v7 = std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DelMailRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::DelMailRsp::set_retcode(v7, 0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::DelMailRsp>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::DelMailRsp>::~shared_ptr((std::shared_ptr<proto::DelMailRsp> *const)(v2 + 32));
  result = 0;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1052: range 0000000017585D00-0000000017585F5F
int32_t __cdecl PlayerMailComp::sendUpdateRedisMailReq(
        PlayerMailComp *const this,
        proto::MailUpdateOpType op_type,
        const std::set<unsigned int> *mail_id_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  int32_t updated; // r14d
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 8 req:1053";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::sendUpdateRedisMailReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  proto::UpdateRedisMailReq::UpdateRedisMailReq((proto::UpdateRedisMailReq *const)(v3 + 48));
  proto::UpdateRedisMailReq::set_op_type((proto::UpdateRedisMailReq *const)(v3 + 48), op_type);
  __for_range = mail_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(mail_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(mail_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::UpdateRedisMailReq::add_mail_id_list((proto::UpdateRedisMailReq *const)(v3 + 48), *v7);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  updated = PlayerMailComp::sendProtoToMailService<proto::UpdateRedisMailReq>(
              this->player_,
              (proto::UpdateRedisMailReq *)(v3 + 48));
  proto::UpdateRedisMailReq::~UpdateRedisMailReq((proto::UpdateRedisMailReq *const)(v3 + 48));
  result = updated;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1064: range 0000000017585F60-000000001758611A
int32_t __cdecl PlayerMailComp::sendGetItemRspToClient(PlayerMailComp *const this, const proto::GetRedisMailRsp *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  Player *player; // r14
  int32_t result; // eax
  std::shared_ptr<proto::GetMailItemRsp> __r; // [rsp+10h] [rbp-80h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 rsp_ptr:1065";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendGetItemRspToClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::GetMailItemRsp>();
  v5 = std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto::GetMailItemRsp::set_retcode(v5, -1);
  v6 = std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetMailItemRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  PlayerMailComp::takeMailAttachment(this, proto, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetMailItemRsp>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::GetMailItemRsp>::~shared_ptr((std::shared_ptr<proto::GetMailItemRsp> *const)(v2 + 32));
  result = 0;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1074: range 0000000017586174-0000000017587F43
int32_t __cdecl PlayerMailComp::takeMailAttachment(
        PlayerMailComp *const this,
        const proto::GetRedisMailRsp *proto,
        proto::GetMailItemRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  int v8; // r15d
  common::milog::MiLogStream *v9; // r14
  _BOOL4 v10; // r15d
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v13; // r14
  int v14; // r15d
  std::map<unsigned int,unsigned int> *v15; // rax
  PlayerItemComp *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  PlayerItemComp *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  PlayerItemComp *v24; // r14
  uint32_t PCMPlatformType; // eax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  MailData *M_current; // r14
  std::vector<MailData>::iterator v30; // rax
  PlayerMailComp::takeMailAttachment::<lambda(const MailData&)> v31; // dl
  PlayerBasicComp *BasicComp; // rax
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  PlayerBasicComp *v37; // rax
  bool IsRebateMailReceived; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rcx
  PlayerBasicComp *v41; // rax
  const ItemParam *v42; // rax
  int v43; // r14d
  PlayerItemComp *v44; // rax
  PlayerItemComp *v45; // rax
  uint32_t reason_type; // eax
  PlayerItemComp *v47; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rcx
  PlayerItemComp *v52; // rax
  AddItemResult *v53; // r15
  AddItemResult *v54; // r14
  PlayerItemComp *v55; // r14
  uint32_t v56; // eax
  data::ItemType ItemType; // eax
  PlayerItemComp *v58; // rcx
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  uint32_t Level; // eax
  PlayerItemComp *v61; // rcx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  uint32_t v63; // eax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  uint32_t PromoteLevel; // eax
  google::protobuf::int32 ret_0; // [rsp+28h] [rbp-558h]
  int32_t ret_1; // [rsp+2Ch] [rbp-554h]
  proto::ActionReasonType action_reason_type; // [rsp+30h] [rbp-550h]
  google::protobuf::int32 ret; // [rsp+34h] [rbp-54Ch]
  std::vector<MailData>::iterator __for_begin_0; // [rsp+38h] [rbp-548h] BYREF
  std::vector<MailData>::iterator __for_end; // [rsp+40h] [rbp-540h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+48h] [rbp-538h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+50h] [rbp-530h]
  std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>> *__for_range_0; // [rsp+58h] [rbp-528h]
  std::vector<MailData> *__for_range_1; // [rsp+60h] [rbp-520h]
  std::vector<MailData> *__for_range_3; // [rsp+68h] [rbp-518h]
  const ItemExcelConfigMgr *item_config_mgr; // [rsp+70h] [rbp-510h]
  std::vector<AddItemResult> *__for_range_4; // [rsp+78h] [rbp-508h]
  const AddItemResult *add_item_result; // [rsp+80h] [rbp-500h]
  proto::EquipParam *proto_equip_param; // [rsp+88h] [rbp-4F8h]
  const MailData *mail_data_0; // [rsp+90h] [rbp-4F0h]
  const MailData *mail_data; // [rsp+98h] [rbp-4E8h]
  const std::vector<ItemParam> *__for_range_2; // [rsp+A0h] [rbp-4E0h]
  const ItemParam *item_param; // [rsp+A8h] [rbp-4D8h]
  const std::pair<const data::ItemLimitType,std::map<unsigned int,unsigned int> > *v87; // [rsp+B0h] [rbp-4D0h]
  std::tuple_element<0,const std::pair<const data::ItemLimitType,std::map<unsigned int,unsigned int> > >::type *item_limit_type; // [rsp+B8h] [rbp-4C8h]
  std::tuple_element<1,const std::pair<const data::ItemLimitType,std::map<unsigned int,unsigned int> > >::type *item_count_map; // [rsp+C0h] [rbp-4C0h]
  const std::string *mail_str; // [rsp+C8h] [rbp-4B8h]
  std::vector<std::shared_ptr<Item>> __x; // [rsp+D0h] [rbp-4B0h] BYREF
  std::vector<std::shared_ptr<Item>> v92; // [rsp+F0h] [rbp-490h] BYREF
  common::milog::MiLogStream v93; // [rsp+110h] [rbp-470h] BYREF
  char v94[1104]; // [rsp+130h] [rbp-450h] BYREF

  v4 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1056LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 32 4 16 mcoin_count:1086 48 4 22 rebate_mail_count:1162 64 8 18 output_result:1203 96 16 15 w"
                        "eapon_ptr:1248 128 24 18 mail_data_vec:1082 192 24 30 total_add_item_result_vec:1083 256 24 22 m"
                        "ail_item_ptr_vec:1177 320 24 18 action_reason:1199 384 24 24 add_item_result_vec:1210 448 24 18 "
                        "action_reason:1218 512 40 9 mail:1090 592 48 25 limit_item_count_map:1084 672 48 25 total_item_c"
                        "ount_map:1085 752 232 14 mail_data:1097";
  *(_QWORD *)(v4 + 16) = PlayerMailComp::takeMailAttachment;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862734] = -234881024;
  v6[536862735] = -218959118;
  v6[536862737] = -218959360;
  v6[536862738] = 62194;
  v6[536862740] = -218959118;
  v6[536862742] = -219021312;
  v6[536862743] = 62194;
  v6[536862750] = -218103808;
  v6[536862751] = -202116109;
  v6[536862752] = -202116109;
  if ( proto::GetRedisMailRsp::retcode(proto) )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "takeMailAttachment",
      1077);
    v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v93,
           (const char (*)[60])"GetRedisMailRsp's retcode is not equal with RET_SUCC, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v3 = -1;
    goto LABEL_154;
  }
  std::vector<MailData>::vector((std::vector<MailData> *const)(v4 + 128));
  std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v4 + 192));
  std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>>::map((std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>> *const)(v4 + 592));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 672));
  *(_DWORD *)(v4 + 32) = 0;
  __for_range = proto::GetRedisMailRsp::mail_str_list[abi:cxx11](proto);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
  *(google::protobuf::RepeatedPtrField<std::string >::const_iterator *)(v4 + 64) = google::protobuf::RepeatedPtrField<std::string>::end(__for_range);
  while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(
            &__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const std::string >::iterator *)(v4 + 64)) )
  {
    mail_str = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
    proto::MailRedisData::MailRedisData((proto::MailRedisData *const)(v4 + 512));
    if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v4 + 512, mail_str) != 1 )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "takeMailAttachment",
        1093);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v93,
        (const char (*)[28])"Mail ParseFromString failed");
      common::milog::MiLogStream::~MiLogStream(&v93);
      v8 = 0;
    }
    else
    {
      MailData::MailData((MailData *const)(v4 + 752));
      MailData::fromRedisMail((MailData *const)(v4 + 752), (const proto::MailRedisData *)(v4 + 512));
      if ( !PlayerMailComp::checkTakeAttachment(this, (const MailData *)(v4 + 752)) )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/mail/player_mail_comp.cpp",
          "takeMailAttachment",
          1102);
        v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v93,
               (const char (*)[34])"checkTakeAttachment failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v93);
        v3 = -1;
        v10 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        PlayerItemComp::createItemBatch(
          (std::vector<std::shared_ptr<Item>> *)(v4 + 448),
          ItemComp,
          (const std::vector<ItemParam> *)(v4 + 864));
        if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 864))
          && std::vector<std::shared_ptr<Item>>::empty((const std::vector<std::shared_ptr<Item>> *const)(v4 + 448)) )
        {
          common::milog::MiLogStream::create(
            &v93,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mail/player_mail_comp.cpp",
            "takeMailAttachment",
            1109);
          v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v93,
                  (const char (*)[30])"createItemBatch failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v93);
          v3 = -1;
          v14 = 0;
        }
        else
        {
          *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 928);
          v15 = std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>>::operator[](
                  (std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>> *const)(v4 + 592),
                  (std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
          ItemParam::addVecToItemCountMapAndMcoin(
            (const std::vector<ItemParam> *)(v4 + 864),
            v15,
            (uint32_t *)(v4 + 32));
          ItemParam::addVecToItemCountMapAndMcoin(
            (const std::vector<ItemParam> *)(v4 + 864),
            (std::map<unsigned int,unsigned int> *)(v4 + 672),
            0LL);
          std::vector<MailData>::push_back(
            (std::vector<MailData> *const)(v4 + 128),
            (const std::vector<MailData>::value_type *)(v4 + 752));
          v14 = 1;
        }
        std::vector<std::shared_ptr<Item>>::~vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 448));
        v10 = v14 == 1;
      }
      MailData::~MailData((MailData *const)(v4 + 752));
      if ( v10 )
        v8 = 2;
      else
        v8 = 1;
    }
    proto::MailRedisData::~MailRedisData((proto::MailRedisData *const)(v4 + 512));
    if ( v8 && v8 != 2 )
      goto LABEL_153;
    google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
  }
  __for_range_0 = (std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>> *)(v4 + 592);
  __for_begin.it_ = (void *const *)std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>>::begin((std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>> *const)(v4 + 592))._M_node;
  *(std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>>::iterator *)(v4 + 64) = std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const data::ItemLimitType,std::map<unsigned int,unsigned int> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const data::ItemLimitType,std::map<unsigned int,unsigned int> > >::_Self *)(v4 + 64)) )
  {
    v87 = std::_Rb_tree_iterator<std::pair<data::ItemLimitType const,std::map<unsigned int,unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::ItemLimitType,std::map<unsigned int,unsigned int> > > *const)&__for_begin);
    item_limit_type = std::get<0ul,data::ItemLimitType const,std::map<unsigned int,unsigned int>>(v87);
    item_count_map = (std::tuple_element<1,const std::pair<const data::ItemLimitType,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,data::ItemLimitType const,std::map<unsigned int,unsigned int>>(v87);
    if ( !std::map<unsigned int,unsigned int>::empty(item_count_map) )
    {
      if ( *(_BYTE *)(((unsigned __int64)item_limit_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_limit_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(item_limit_type);
      }
      ActionReason::ActionReason((ActionReason *const)(v4 + 384), ACTION_REASON_MAIL_ATTACHMENT, *item_limit_type);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = Player::getItemComp(this->player_);
      ItemParam::vecFromItemCountMap((std::vector<ItemParam> *)(v4 + 448), item_count_map);
      ret = PlayerItemComp::checkAddItemBatch(
              v16,
              (const std::vector<ItemParam> *)(v4 + 448),
              (const ActionReason *)(v4 + 384));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 448));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/mail/player_mail_comp.cpp",
          "takeMailAttachment",
          1127);
        v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v93,
                (const char (*)[42])"checkAddItemBatch failed, item_count_map:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v17, item_count_map);
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v93);
        proto::GetMailItemRsp::set_retcode(rsp_0, ret);
        v3 = -1;
        goto LABEL_153;
      }
    }
    std::_Rb_tree_iterator<std::pair<data::ItemLimitType const,std::map<unsigned int,unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<const data::ItemLimitType,std::map<unsigned int,unsigned int> > > *const)&__for_begin);
  }
  if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v4 + 672)) )
  {
    ActionReason::ActionReason((ActionReason *const)(v4 + 384), ACTION_REASON_MAIL_ATTACHMENT, ITEM_LIMIT_UNLIMITED);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = Player::getItemComp(this->player_);
    ItemParam::vecFromItemCountMap(
      (std::vector<ItemParam> *)(v4 + 448),
      (const std::map<unsigned int,unsigned int> *)(v4 + 672));
    ret_0 = PlayerItemComp::checkAddItemBatch(
              v20,
              (const std::vector<ItemParam> *)(v4 + 448),
              (const ActionReason *)(v4 + 384));
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 448));
    if ( ret_0 )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mail/player_mail_comp.cpp",
        "takeMailAttachment",
        1141);
      v21 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v93,
              (const char (*)[48])"checkAddItemBatch failed, total_item_count_map:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v21,
              (const std::map<unsigned int,unsigned int> *)(v4 + 672));
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v93);
      proto::GetMailItemRsp::set_retcode(rsp_0, ret_0);
      v3 = -1;
      goto LABEL_153;
    }
  }
  if ( *(_DWORD *)(v4 + 32) )
  {
    ActionReason::ActionReason((ActionReason *const)(v4 + 448), ACTION_REASON_REBATE, ITEM_LIMIT_REBATE);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = Player::getItemComp(this->player_);
    PCMPlatformType = TxtConfigMgr::getPCMPlatformType();
    ret_1 = PlayerItemComp::checkAddMcoin(v24, *(_DWORD *)(v4 + 32), (const ActionReason *)(v4 + 448), PCMPlatformType);
    if ( ret_1 )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mail/player_mail_comp.cpp",
        "takeMailAttachment",
        1155);
      v26 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v93,
              (const char (*)[35])"checkAddMcoin failed, mcoin_count:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 32));
      v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v93);
      proto::GetMailItemRsp::set_retcode(rsp_0, ret_1);
      v3 = -1;
      goto LABEL_153;
    }
  }
  M_current = std::vector<MailData>::end((std::vector<MailData> *const)(v4 + 128))._M_current;
  v30._M_current = std::vector<MailData>::begin((std::vector<MailData> *const)(v4 + 128))._M_current;
  *(_DWORD *)(v4 + 48) = std::count_if<__gnu_cxx::__normal_iterator<MailData *,std::vector<MailData>>,PlayerMailComp::takeMailAttachment(proto::GetRedisMailRsp const&,proto::GetMailItemRsp &)::{lambda(MailData const&)#1}>(
                           v30,
                           (__gnu_cxx::__normal_iterator<MailData*,std::vector<MailData> >)M_current,
                           v31);
  if ( *(_DWORD *)(v4 + 48) > 1u )
    goto LABEL_65;
  if ( !*(_DWORD *)(v4 + 48) )
    goto LABEL_66;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::getIsRebateMailReceived(BasicComp) )
LABEL_65:
    v33 = 1;
  else
LABEL_66:
    v33 = 0;
  if ( v33 )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/mail/player_mail_comp.cpp",
      "takeMailAttachment",
      1165);
    v34 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v93,
            (const char (*)[37])"duplicate rebate! rebate_mail_count:");
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v4 + 48));
    v36 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v35,
            (const char (*)[27])" is_rebate_mail_received_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v37 = Player::getBasicComp(this->player_);
    IsRebateMailReceived = PlayerBasicComp::getIsRebateMailReceived(v37);
    v39 = common::milog::MiLogStream::operator<<(v36, IsRebateMailReceived);
    v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v40, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v93);
    proto::GetMailItemRsp::set_retcode(rsp_0, 1);
    v3 = -1;
    goto LABEL_153;
  }
  if ( *(_DWORD *)(v4 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v41 = Player::getBasicComp(this->player_);
    PlayerBasicComp::setIsRebateMailReceived(v41, 1);
  }
  __for_range_1 = (std::vector<MailData> *)(v4 + 128);
  __for_begin_0._M_current = std::vector<MailData>::begin((std::vector<MailData> *const)(v4 + 128))._M_current;
  __for_end._M_current = std::vector<MailData>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<MailData *,std::vector<MailData>>(&__for_begin_0, &__for_end) )
  {
    mail_data = __gnu_cxx::__normal_iterator<MailData *,std::vector<MailData>>::operator*(&__for_begin_0);
    std::vector<std::shared_ptr<Item>>::vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 256));
    if ( *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mail_data->item_limit_type);
    }
    if ( mail_data->item_limit_type != 64 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v45 = Player::getItemComp(this->player_);
      PlayerItemComp::createItemBatch(&v92, v45, &mail_data->item_param_vec);
      std::vector<std::shared_ptr<Item>>::operator=((std::vector<std::shared_ptr<Item>> *const)(v4 + 256), &v92);
      std::vector<std::shared_ptr<Item>>::~vector(&v92);
LABEL_99:
      if ( *(_BYTE *)(((unsigned __int64)&mail_data->reason_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mail_data->reason_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mail_data->reason_type);
      }
      if ( mail_data->reason_type )
        reason_type = mail_data->reason_type;
      else
        reason_type = 12;
      action_reason_type = reason_type;
      if ( *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mail_data->item_limit_type);
      }
      ActionReason::ActionReason(
        (ActionReason *const)(v4 + 320),
        action_reason_type,
        (data::ItemLimitType)mail_data->item_limit_type);
      if ( *(_DWORD *)(v4 + 324) != 41 )
        goto LABEL_113;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v47 = Player::getItemComp(this->player_);
      *(OutputResult *)(v4 + 64) = PlayerItemComp::checkAndRecordItemLimitOutputCount(
                                     v47,
                                     OUTPUT_CONTROL_OTHER,
                                     (const ActionReason *)(v4 + 320));
      if ( *(_DWORD *)(v4 + 64) )
      {
        LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v4 + 64));
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          LogLevel,
          "./src/player/mail/player_mail_comp.cpp",
          "takeMailAttachment",
          1206);
        v49 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v93,
                (const char (*)[57])"checkAndRecordItemLimitOutputCount fail, item_param_vec:");
        v50 = common::milog::MiLogStream::operator<<<ItemParam>(v49, &mail_data->item_param_vec);
        v51 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v50, (const char (*)[10])" ,player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v51, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v93);
      }
      else
      {
LABEL_113:
        std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v4 + 384));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v52 = Player::getItemComp(this->player_);
        PlayerItemComp::addItemBatch(
          v52,
          (const std::vector<std::shared_ptr<Item>> *)(v4 + 256),
          (const ActionReason *)(v4 + 320),
          (std::vector<AddItemResult> *)(v4 + 384));
        ItemUtils::mergeTransformAddItemResults(
          (std::vector<AddItemResult> *)(v4 + 448),
          (const std::vector<AddItemResult> *)(v4 + 384));
        std::vector<AddItemResult>::operator=(
          (std::vector<AddItemResult> *const)(v4 + 384),
          (std::vector<AddItemResult> *)(v4 + 448));
        std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v4 + 448));
        v53 = std::vector<AddItemResult>::end((std::vector<AddItemResult> *const)(v4 + 384))._M_current;
        v54 = std::vector<AddItemResult>::begin((std::vector<AddItemResult> *const)(v4 + 384))._M_current;
        __for_begin.it_ = (void *const *)std::vector<AddItemResult>::end((std::vector<AddItemResult> *const)(v4 + 192))._M_current;
        __gnu_cxx::__normal_iterator<AddItemResult const*,std::vector<AddItemResult>>::__normal_iterator<AddItemResult*>(
          (__gnu_cxx::__normal_iterator<const AddItemResult*,std::vector<AddItemResult> > *const)(v4 + 64),
          (const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *)&__for_begin);
        std::vector<AddItemResult>::insert<__gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult>>,void>(
          (std::vector<AddItemResult> *const)(v4 + 192),
          *(std::vector<AddItemResult>::const_iterator *)(v4 + 64),
          (__gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> >)v54,
          (__gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> >)v53);
        std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v4 + 384));
      }
      goto LABEL_116;
    }
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 448));
    __for_range_2 = &mail_data->item_param_vec;
    __for_begin.it_ = (void *const *)std::vector<ItemParam>::begin(&mail_data->item_param_vec)._M_current;
    *(std::vector<ItemParam>::const_iterator *)(v4 + 64) = std::vector<ItemParam>::end(__for_range_2);
    while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(
              (const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *)(v4 + 64)) )
    {
      v42 = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
      item_param = v42;
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v42);
      }
      if ( item_param->item_id != 203 )
        std::vector<ItemParam>::push_back((std::vector<ItemParam> *const)(v4 + 448), item_param);
      __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
    }
    if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 448)) )
    {
      v43 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v44 = Player::getItemComp(this->player_);
      PlayerItemComp::createItemBatch(&__x, v44, (const std::vector<ItemParam> *)(v4 + 448));
      std::vector<std::shared_ptr<Item>>::operator=((std::vector<std::shared_ptr<Item>> *const)(v4 + 256), &__x);
      std::vector<std::shared_ptr<Item>>::~vector(&__x);
      v43 = 1;
    }
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 448));
    if ( v43 == 1 )
      goto LABEL_99;
LABEL_116:
    std::vector<std::shared_ptr<Item>>::~vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 256));
    __gnu_cxx::__normal_iterator<MailData *,std::vector<MailData>>::operator++(&__for_begin_0);
  }
  if ( *(_DWORD *)(v4 + 32) )
  {
    ActionReason::ActionReason((ActionReason *const)(v4 + 448), ACTION_REASON_REBATE, ITEM_LIMIT_REBATE);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v55 = Player::getItemComp(this->player_);
    v56 = TxtConfigMgr::getPCMPlatformType();
    PlayerItemComp::addMcoin(v55, *(_DWORD *)(v4 + 32), (const ActionReason *)(v4 + 448), 1, v56);
  }
  PlayerMailComp::afterTakeMailAttachment(this, (const std::vector<MailData> *)(v4 + 128));
  __for_range_3 = (std::vector<MailData> *)(v4 + 128);
  __for_begin.it_ = (void *const *)std::vector<MailData>::begin((std::vector<MailData> *const)(v4 + 128))._M_current;
  *(std::vector<MailData>::iterator *)(v4 + 64) = std::vector<MailData>::end(__for_range_3);
  while ( __gnu_cxx::operator!=<MailData *,std::vector<MailData>>(
            (const __gnu_cxx::__normal_iterator<MailData*,std::vector<MailData> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<MailData*,std::vector<MailData> > *)(v4 + 64)) )
  {
    mail_data_0 = __gnu_cxx::__normal_iterator<MailData *,std::vector<MailData>>::operator*((const __gnu_cxx::__normal_iterator<MailData*,std::vector<MailData> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&mail_data_0->mail_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data_0->mail_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mail_data_0->mail_id);
    }
    proto::GetMailItemRsp::add_mail_id_list(rsp_0, mail_data_0->mail_id);
    __gnu_cxx::__normal_iterator<MailData *,std::vector<MailData>>::operator++((__gnu_cxx::__normal_iterator<MailData*,std::vector<MailData> > *const)&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 96));
  item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->design_config.txt_config_mgr.item_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
  __for_range_4 = (std::vector<AddItemResult> *)(v4 + 192);
  __for_begin.it_ = (void *const *)std::vector<AddItemResult>::begin((std::vector<AddItemResult> *const)(v4 + 192))._M_current;
  *(std::vector<AddItemResult>::iterator *)(v4 + 64) = std::vector<AddItemResult>::end(__for_range_4);
  while ( __gnu_cxx::operator!=<AddItemResult *,std::vector<AddItemResult>>(
            (const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *)(v4 + 64)) )
  {
    add_item_result = __gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>::operator*((const __gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *const)&__for_begin);
    proto_equip_param = proto::GetMailItemRsp::add_item_list(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&add_item_result->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&add_item_result->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&add_item_result->item_id);
    }
    proto::EquipParam::set_item_id(proto_equip_param, add_item_result->item_id);
    if ( *(_BYTE *)(((unsigned __int64)&add_item_result->add_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)add_item_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&add_item_result->add_count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&add_item_result->add_count);
    }
    proto::EquipParam::set_item_num(proto_equip_param, add_item_result->add_count);
    if ( *(_BYTE *)(((unsigned __int64)&add_item_result->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&add_item_result->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&add_item_result->item_id);
    }
    ItemType = ItemExcelConfigMgr::getItemType(item_config_mgr, add_item_result->item_id);
    if ( ItemType == ITEM_RELIQUARY )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v58 = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)add_item_result >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerItemComp::findItemInPack<Reliquary>((PlayerItemComp *const)(v4 + 96), (uint64_t)v58, add_item_result->guid);
      if ( std::operator!=<Reliquary>(0LL, (const std::shared_ptr<Reliquary> *)(v4 + 96)) )
      {
        v59 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        Level = Reliquary::getLevel(v59);
        proto::EquipParam::set_item_level(proto_equip_param, Level);
      }
      std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v4 + 96));
    }
    else if ( ItemType == ITEM_WEAPON )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v61 = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)add_item_result >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v4 + 96), (uint64_t)v61, add_item_result->guid);
      if ( std::operator!=<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v4 + 96)) )
      {
        v62 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v63 = Weapon::getLevel(v62);
        proto::EquipParam::set_item_level(proto_equip_param, v63);
        v64 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        PromoteLevel = Weapon::getPromoteLevel(v64);
        proto::EquipParam::set_promote_level(proto_equip_param, PromoteLevel);
      }
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v4 + 96));
    }
    __gnu_cxx::__normal_iterator<AddItemResult *,std::vector<AddItemResult>>::operator++((__gnu_cxx::__normal_iterator<AddItemResult*,std::vector<AddItemResult> > *const)&__for_begin);
  }
  proto::GetMailItemRsp::set_retcode(rsp_0, 0);
  v3 = 0;
LABEL_153:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 672));
  std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>>::~map((std::map<data::ItemLimitType,std::map<unsigned int,unsigned int>> *const)(v4 + 592));
  std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v4 + 192));
  std::vector<MailData>::~vector((std::vector<MailData> *const)(v4 + 128));
LABEL_154:
  if ( v94 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1056LL, v94);
  }
  return v3;
};

// Line 1162: range 000000001758611C-0000000017586172
bool __cdecl PlayerMailComp::takeMailAttachment(proto::GetRedisMailRsp const&,proto::GetMailItemRsp &)::{lambda(MailData const&)#1}::operator()(
        const PlayerMailComp::takeMailAttachment::<lambda(const MailData&)> *const __closure,
        const MailData *mail_data)
{
  if ( *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&mail_data->item_limit_type);
  }
  return mail_data->item_limit_type == 64;
};

// Line 1266: range 0000000017587F44-00000000175887C1
bool __cdecl PlayerMailComp::checkTakeAttachment(PlayerMailComp *const this, const MailData *mail_data)
{
  bool v2; // r15
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  TxtConfigMgr *p_txt_config_mgr; // rcx
  bool v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  bool result; // al
  unsigned int val; // [rsp+2Ch] [rbp-104h] BYREF
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+40h] [rbp-F0h]
  const ItemParam *item_param; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 19 item_param_bin:1290";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::checkTakeAttachment;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&mail_data->is_attachment_got >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)mail_data - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&mail_data->is_attachment_got >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load1(&mail_data->is_attachment_got);
  }
  if ( mail_data->is_attachment_got )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mail/player_mail_comp.cpp",
      "checkTakeAttachment",
      1270);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v22,
           (const char (*)[36])"mail attachment has been got, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_17:
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,mail_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &mail_data->mail_id);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v2 = 0;
    goto LABEL_38;
  }
  if ( std::vector<ItemParam>::empty(&mail_data->item_param_vec) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "checkTakeAttachment",
      1277);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v22,
           (const char (*)[32])"mail attachment is empty, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_17;
  }
  if ( std::set<unsigned int>::count(&this->has_take_attachment_mail_id_set_, &mail_data->mail_id) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "checkTakeAttachment",
      1284);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v22,
           (const char (*)[38])"mail attachment is in progress, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_17;
  }
  __for_range = &mail_data->item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(&mail_data->item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(&mail_data->item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param);
    }
    proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v3 + 48), item_param->item_id);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->count);
    }
    proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v3 + 48), item_param->count);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->level);
    }
    proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v3 + 48), item_param->level);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->promote_level >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->promote_level);
    }
    proto::ItemParamBin::set_promote_level((proto::ItemParamBin *const)(v3 + 48), item_param->promote_level);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mail_data->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mail_data->item_limit_type);
    }
    v10 = TxtConfigMgr::checkItemParamBin(
            p_txt_config_mgr,
            (const proto::ItemParamBin *)(v3 + 48),
            (data::ItemLimitType)mail_data->item_limit_type) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mail/player_mail_comp.cpp",
        "checkTakeAttachment",
        1298);
      v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v22,
              (const char (*)[30])"checkEquipParam failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", mail_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &mail_data->mail_id);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = 0;
      v14 = 0;
    }
    else
    {
      v14 = 1;
    }
    proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v3 + 48));
    if ( v14 != 1 )
      goto LABEL_38;
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  v2 = 1;
LABEL_38:
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1307: range 00000000175887C2-00000000175889BE
void __cdecl PlayerMailComp::afterTakeMailAttachment(
        PlayerMailComp *const this,
        const std::vector<MailData> *mail_data_vec)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<MailData>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<MailData>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const std::vector<MailData> *__for_range; // [rsp+20h] [rbp-B0h]
  const MailData *mail_data; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (std::set<unsigned int> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 16 mail_id_set:1308";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerMailComp::afterTakeMailAttachment;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set(v2 + 1);
  __for_range = mail_data_vec;
  __for_begin._M_current = std::vector<MailData>::begin(mail_data_vec)._M_current;
  __for_end._M_current = std::vector<MailData>::end(mail_data_vec)._M_current;
  while ( __gnu_cxx::operator!=<MailData const*,std::vector<MailData>>(&__for_begin, &__for_end) )
  {
    mail_data = __gnu_cxx::__normal_iterator<MailData const*,std::vector<MailData>>::operator*(&__for_begin);
    std::set<unsigned int>::insert(v2 + 1, &mail_data->mail_id);
    std::set<unsigned int>::insert(&this->has_take_attachment_mail_id_set_, &mail_data->mail_id);
    __gnu_cxx::__normal_iterator<MailData const*,std::vector<MailData>>::operator++(&__for_begin);
  }
  PlayerMailComp::sendUpdateRedisMailReq(this, MAIL_UPDATE_OP_TAKE_ATTACHMENT, v2 + 1);
  std::set<unsigned int>::~set(v2 + 1);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1321: range 00000000175889C0-0000000017588C90
int32_t __cdecl PlayerMailComp::updateHasTakeAttachmentMail(
        PlayerMailComp *const this,
        const proto::UpdateRedisMailRsp *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-90h] BYREF
  char v11[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 mail_id:1328";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::updateHasTakeAttachmentMail;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( proto::UpdateRedisMailRsp::retcode(proto) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mail/player_mail_comp.cpp",
      "updateHasTakeAttachmentMail",
      1324);
    v5 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v10,
           (const char (*)[63])"UpdateRedisMailRsp's retcode is not equal with RET_SUCC, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = -1;
  }
  else
  {
    __for_range = proto::UpdateRedisMailRsp::mail_id_list(proto);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v2 + 32) = *__for_begin;
      proto = (const proto::UpdateRedisMailRsp *)(v2 + 32);
      std::set<unsigned int>::erase(
        &this->has_take_attachment_mail_id_set_,
        (const std::set<unsigned int>::key_type *)(v2 + 32));
      ++__for_begin;
    }
    if ( std::set<unsigned int>::empty(&this->has_take_attachment_mail_id_set_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->take_attachment_start_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->take_attachment_start_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->take_attachment_start_time_, proto, &this->take_attachment_start_time_);
      }
      this->take_attachment_start_time_ = 0;
    }
    result = 0;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1342: range 0000000017588C92-0000000017588CD3
int32_t __cdecl PlayerMailComp::dealWithHasTakeAttachmentMail(PlayerMailComp *const this)
{
  if ( std::set<unsigned int>::empty(&this->has_take_attachment_mail_id_set_) )
    return 0;
  else
    return PlayerMailComp::sendUpdateRedisMailReq(
             this,
             MAIL_UPDATE_OP_TAKE_ATTACHMENT,
             &this->has_take_attachment_mail_id_set_);
};

// Line 1352: range 0000000017588CD4-0000000017588F2F
int32_t __cdecl PlayerMailComp::queryMailTransactionStatus(PlayerMailComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t RedisMailTransactionStatus; // r14d
  int32_t result; // eax
  std::unordered_map<std::string,proto::MailBin>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::unordered_map<std::string,proto::MailBin>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<std::string,proto::MailBin> *__for_range; // [rsp+20h] [rbp-D0h]
  const std::pair<const std::string,proto::MailBin> *v9; // [rsp+28h] [rbp-C8h]
  std::tuple_element<0,const std::pair<const std::string,proto::MailBin> >::type *transaction; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,const std::pair<const std::string,proto::MailBin> >::type *_; // [rsp+38h] [rbp-B8h]
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 8 req:1358";
  *(_QWORD *)(v1 + 16) = PlayerMailComp::queryMailTransactionStatus;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( std::unordered_map<std::string,proto::MailBin>::empty(&this->new_wait_add_mail_map_) )
  {
    RedisMailTransactionStatus = 0;
  }
  else
  {
    proto::GetRedisMailTransactionStatusReq::GetRedisMailTransactionStatusReq((proto::GetRedisMailTransactionStatusReq *const)(v1 + 48));
    __for_range = &this->new_wait_add_mail_map_;
    __for_begin._M_cur = std::unordered_map<std::string,proto::MailBin>::begin(&this->new_wait_add_mail_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<std::string,proto::MailBin>::end(&this->new_wait_add_mail_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,proto::MailBin>,true>(&__for_begin, &__for_end) )
    {
      v9 = std::__detail::_Node_iterator<std::pair<std::string const,proto::MailBin>,false,true>::operator*(&__for_begin);
      transaction = std::get<0ul,std::string const,proto::MailBin>(v9);
      _ = (std::tuple_element<1,const std::pair<const std::string,proto::MailBin> >::type *)std::get<1ul,std::string const,proto::MailBin>(v9);
      proto::GetRedisMailTransactionStatusReq::add_transaction_list(
        (proto::GetRedisMailTransactionStatusReq *const)(v1 + 48),
        transaction);
      std::__detail::_Node_iterator<std::pair<std::string const,proto::MailBin>,false,true>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    RedisMailTransactionStatus = PlayerMailComp::sendProtoToMailService<proto::GetRedisMailTransactionStatusReq>(
                                   this->player_,
                                   (proto::GetRedisMailTransactionStatusReq *)(v1 + 48));
    proto::GetRedisMailTransactionStatusReq::~GetRedisMailTransactionStatusReq((proto::GetRedisMailTransactionStatusReq *const)(v1 + 48));
  }
  result = RedisMailTransactionStatus;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1368: range 0000000017588F30-000000001758908F
int32_t __cdecl PlayerMailComp::clearUpRedisMail(PlayerMailComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 11 notify:1369";
  *(_QWORD *)(v1 + 16) = PlayerMailComp::clearUpRedisMail;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::ClearUpRedisMailNotify::ClearUpRedisMailNotify((proto::ClearUpRedisMailNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = PlayerMailComp::sendProtoToMailService<proto::ClearUpRedisMailNotify>(
         this->player_,
         (proto::ClearUpRedisMailNotify *)(v1 + 32));
  proto::ClearUpRedisMailNotify::~ClearUpRedisMailNotify((proto::ClearUpRedisMailNotify *const)(v1 + 32));
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1374: range 0000000017589090-000000001758912A
int32_t __cdecl PlayerMailComp::queryUntreatedMailInfo(PlayerMailComp *const this)
{
  int32_t RedisMailReq; // ebx
  std::set<unsigned int> mail_id_set; // [rsp+10h] [rbp-40h] BYREF

  memset(&mail_id_set, 0, sizeof(mail_id_set));
  std::set<unsigned int>::set(&mail_id_set);
  RedisMailReq = PlayerMailComp::sendGetRedisMailReq(this, MAIL_GET_OP_UNTREATED, MAIL_GET_ALL, &mail_id_set);
  std::set<unsigned int>::~set(&mail_id_set);
  return RedisMailReq;
};

// Line 1379: range 000000001758912C-00000000175894D4
int32_t __cdecl PlayerMailComp::sendResendRedisMailReq(
        PlayerMailComp *const this,
        const std::map<std::string,proto::MailBin> *mail_bin_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::uint32 v5; // eax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  google::protobuf::Map<std::string,proto::MailBin> *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-1D8h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-1D4h]
  std::map<std::string,proto::MailBin>::const_iterator __for_begin; // [rsp+20h] [rbp-1D0h] BYREF
  std::map<std::string,proto::MailBin>::const_iterator __for_end; // [rsp+28h] [rbp-1C8h] BYREF
  const std::map<std::string,proto::MailBin> *__for_range; // [rsp+30h] [rbp-1C0h]
  const std::pair<const std::string,proto::MailBin> *v17; // [rsp+38h] [rbp-1B8h]
  std::tuple_element<0,const std::pair<const std::string,proto::MailBin> >::type *transaction; // [rsp+40h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<const std::string,proto::MailBin> >::type *mail_bin; // [rsp+48h] [rbp-1A8h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-1A0h] BYREF
  google::protobuf::MapPair<std::string,proto::MailBin> value; // [rsp+70h] [rbp-180h] BYREF
  char v22[208]; // [rsp+120h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 8 req:1381";
  *(_QWORD *)(v2 + 16) = PlayerMailComp::sendResendRedisMailReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  now = common::tools::TimeUtils::getNow();
  proto::ResendRedisMailReq::ResendRedisMailReq((proto::ResendRedisMailReq *const)(v2 + 32));
  __for_range = mail_bin_map;
  __for_begin._M_node = std::map<std::string,proto::MailBin>::begin(mail_bin_map)._M_node;
  __for_end._M_node = std::map<std::string,proto::MailBin>::end(mail_bin_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_const_iterator<std::pair<std::string const,proto::MailBin>>::operator*(&__for_begin);
    transaction = std::get<0ul,std::string const,proto::MailBin>(v17);
    mail_bin = (std::tuple_element<1,const std::pair<const std::string,proto::MailBin> >::type *)std::get<1ul,std::string const,proto::MailBin>(v17);
    v5 = proto::MailBin::expire_time(mail_bin);
    if ( v5 >= now + 300 )
    {
      v9 = proto::ResendRedisMailReq::mutable_mail_bin_map[abi:cxx11]((proto::ResendRedisMailReq *const)(v2 + 32));
      google::protobuf::MapPair<std::string,proto::MailBin>::MapPair(&value, transaction, mail_bin);
      google::protobuf::Map<std::string,proto::MailBin>::insert(
        (std::pair<google::protobuf::Map<std::string,proto::MailBin>::iterator,bool> *)&v20,
        v9,
        &value);
      google::protobuf::MapPair<std::string,proto::MailBin>::~MapPair(&value);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mail/player_mail_comp.cpp",
        "sendResendRedisMailReq",
        1387);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v20,
             (const char (*)[29])"mail will expire soon, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" ,transaction: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, transaction);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    std::_Rb_tree_const_iterator<std::pair<std::string const,proto::MailBin>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = PlayerMailComp::sendProtoToMailService<proto::ResendRedisMailReq>(
          this->player_,
          (proto::ResendRedisMailReq *)(v2 + 32));
  proto::ResendRedisMailReq::~ResendRedisMailReq((proto::ResendRedisMailReq *const)(v2 + 32));
  result = v10;
  if ( v22 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1398: range 00000000175894D6-0000000017589754
int32_t __cdecl PlayerMailComp::addMailByGm(PlayerMailComp *const this, const proto::MailBin *mail_bin, uint32_t count)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  proto::MailBin *v6; // rdx
  proto::MailBin *v7; // rax
  int32_t result; // eax
  uint32_t i; // [rsp+2Ch] [rbp-E4h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 16 transaction:1402 112 48 8 req:1403";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::addMailByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  for ( i = 0; i < count; ++i )
  {
    PlayerMailComp::createTransaction[abi:cxx11]((std::string *)(v3 + 48), this);
    proto::AddRedisMailReq::AddRedisMailReq((proto::AddRedisMailReq *const)(v3 + 112));
    proto::AddRedisMailReq::set_op_type((proto::AddRedisMailReq *const)(v3 + 112), MAIL_ADD_OP_GAME);
    proto::AddRedisMailReq::set_transaction((proto::AddRedisMailReq *const)(v3 + 112), (const std::string *)(v3 + 48));
    v6 = proto::AddRedisMailReq::mutable_mail_bin((proto::AddRedisMailReq *const)(v3 + 112));
    proto::MailBin::CopyFrom(v6, mail_bin);
    v7 = proto::AddRedisMailReq::mutable_mail_bin((proto::AddRedisMailReq *const)(v3 + 112));
    proto::MailBin::set_title(v7, (const std::string *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMailComp::sendProtoToMailService<proto::AddRedisMailReq>(this->player_, (proto::AddRedisMailReq *)(v3 + 112));
    proto::AddRedisMailReq::~AddRedisMailReq((proto::AddRedisMailReq *const)(v3 + 112));
    std::string::~string((void *)(v3 + 48));
  }
  result = 0;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1415: range 0000000017589756-00000000175898FA
int32_t __cdecl PlayerMailComp::addMailByGm(
        PlayerMailComp *const this,
        uint32_t mail_config_id,
        const std::vector<std::string> *argument_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 11 reason:1416 96 24 13 item_vec:1417";
  *(_QWORD *)(v3 + 16) = PlayerMailComp::addMailByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  ActionReason::ActionReason((ActionReason *const)(v3 + 32), ACTION_REASON_GM, ITEM_LIMIT_GM);
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 96));
  v6 = PlayerMailComp::addMailById(
         this,
         mail_config_id,
         0xFu,
         (const std::vector<ItemParam> *)(v3 + 96),
         argument_vec,
         (const ActionReason *)(v3 + 32));
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 96));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1422: range 00000000175898FC-0000000017589996
int32_t __cdecl PlayerMailComp::getAllMailByGm(PlayerMailComp *const this)
{
  int32_t RedisMailReq; // ebx
  std::set<unsigned int> mail_id_set; // [rsp+10h] [rbp-40h] BYREF

  memset(&mail_id_set, 0, sizeof(mail_id_set));
  std::set<unsigned int>::set(&mail_id_set);
  RedisMailReq = PlayerMailComp::sendGetRedisMailReq(this, MAIL_GET_OP_CLIENT, MAIL_GET_ALL, &mail_id_set);
  std::set<unsigned int>::~set(&mail_id_set);
  return RedisMailReq;
};

// Line 1427: range 0000000017589998-0000000017589B0D
int32_t __cdecl PlayerMailComp::updateMailByGm(
        PlayerMailComp *const this,
        const std::vector<unsigned int> *mail_id_vec)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v6; // rax
  int32_t result; // eax
  char v8[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 16 mail_id_set:1428";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerMailComp::updateMailByGm;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  M_current = std::vector<unsigned int>::end(mail_id_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(mail_id_vec)._M_current;
  std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    v2 + 1,
    v6,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
  LODWORD(M_current) = PlayerMailComp::sendUpdateRedisMailReq(this, MAIL_UPDATE_OP_MARK_READ, v2 + 1);
  std::set<unsigned int>::~set(v2 + 1);
  result = (int)M_current;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1434: range 0000000017589B0E-0000000017589C83
int32_t __cdecl PlayerMailComp::delMailByGm(PlayerMailComp *const this, const std::vector<unsigned int> *mail_id_vec)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v6; // rax
  int32_t result; // eax
  char v8[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 16 mail_id_set:1435";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerMailComp::delMailByGm;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  M_current = std::vector<unsigned int>::end(mail_id_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(mail_id_vec)._M_current;
  std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    v2 + 1,
    v6,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
  LODWORD(M_current) = PlayerMailComp::sendDelRedisMailReq(this, MAIL_DEL_OP_GAME, v2 + 1);
  std::set<unsigned int>::~set(v2 + 1);
  result = (int)M_current;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
