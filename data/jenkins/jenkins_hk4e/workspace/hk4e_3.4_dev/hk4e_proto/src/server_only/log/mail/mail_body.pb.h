// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/mail/mail_body.pb.h

// Line 184: range 00000000160E0698-00000000160E06A4
const proto_log::MailItem *__cdecl proto_log::MailItem::internal_default_instance()
{
  return (const proto_log::MailItem *)&proto_log::_MailItem_default_instance_;
};

// Line 198: range 00000000160E06A6-00000000160E06C4
proto_log::MailItem *__cdecl proto_log::MailItem::New(const proto_log::MailItem *const this)
{
  return proto_log::MailItem::New(this, 0LL);
};

// Line 215: range 00000000160E06C6-00000000160E070D
int __cdecl proto_log::MailItem::GetCachedSize(const proto_log::MailItem *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 302: range 00000000160E070E-00000000160E071A
const proto_log::MailLogBodyCommon *__cdecl proto_log::MailLogBodyCommon::internal_default_instance()
{
  return (const proto_log::MailLogBodyCommon *)&proto_log::_MailLogBodyCommon_default_instance_;
};

// Line 316: range 00000000160E071C-00000000160E073A
proto_log::MailLogBodyCommon *__cdecl proto_log::MailLogBodyCommon::New(const proto_log::MailLogBodyCommon *const this)
{
  return proto_log::MailLogBodyCommon::New(this, 0LL);
};

// Line 333: range 00000000160E073C-00000000160E0790
int __cdecl proto_log::MailLogBodyCommon::GetCachedSize(const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 578: range 00000000160E0792-00000000160E07D9
google::protobuf::uint32 __cdecl proto_log::MailItem::item_id(const proto_log::MailItem *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_id_);
  }
  return this->item_id_;
};

// Line 582: range 00000000160E07DA-00000000160E0828
void __cdecl proto_log::MailItem::set_item_id(proto_log::MailItem *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id_);
  }
  this->item_id_ = value;
};

// Line 592: range 00000000160E082A-00000000160E0879
google::protobuf::uint32 __cdecl proto_log::MailItem::item_count(const proto_log::MailItem *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_count_);
  }
  return this->item_count_;
};

// Line 596: range 00000000160E087A-00000000160E08D0
void __cdecl proto_log::MailItem::set_item_count(proto_log::MailItem *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_count_);
  }
  this->item_count_ = value;
};

// Line 606: range 00000000160E08D2-00000000160E0919
google::protobuf::uint32 __cdecl proto_log::MailItem::level(const proto_log::MailItem *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 610: range 00000000160E091A-00000000160E0968
void __cdecl proto_log::MailItem::set_level(proto_log::MailItem *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = value;
};

// Line 620: range 00000000160E096A-00000000160E09B9
google::protobuf::uint32 __cdecl proto_log::MailItem::promote_level(const proto_log::MailItem *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  return this->promote_level_;
};

// Line 624: range 00000000160E09BA-00000000160E0A10
void __cdecl proto_log::MailItem::set_promote_level(proto_log::MailItem *const this, google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->promote_level_);
  }
  this->promote_level_ = value;
};

// Line 638: range 00000000160E0A12-00000000160E0A59
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::op_type(const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->op_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->op_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->op_type_);
  }
  return this->op_type_;
};

// Line 642: range 00000000160E0A5A-00000000160E0AA8
void __cdecl proto_log::MailLogBodyCommon::set_op_type(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->op_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->op_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->op_type_);
  }
  this->op_type_ = value;
};

// Line 652: range 00000000160E0AAA-00000000160E0AF9
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::op_reason(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->op_reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->op_reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->op_reason_);
  }
  return this->op_reason_;
};

// Line 656: range 00000000160E0AFA-00000000160E0B50
void __cdecl proto_log::MailLogBodyCommon::set_op_reason(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->op_reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->op_reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->op_reason_);
  }
  this->op_reason_ = value;
};

// Line 666: range 00000000160E0B52-00000000160E0B99
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::uid(const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 670: range 00000000160E0B9A-00000000160E0BE8
void __cdecl proto_log::MailLogBodyCommon::set_uid(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = value;
};

// Line 680: range 00000000160E0BEA-00000000160E0C39
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::mail_id(const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mail_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mail_id_);
  }
  return this->mail_id_;
};

// Line 684: range 00000000160E0C3A-00000000160E0C90
void __cdecl proto_log::MailLogBodyCommon::set_mail_id(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mail_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mail_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mail_id_);
  }
  this->mail_id_ = value;
};

// Line 694: range 00000000160E0C92-00000000160E0CAF
const std::string *__cdecl proto_log::MailLogBodyCommon::title[abi:cxx11](
        const proto_log::MailLogBodyCommon *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->title_);
};

// Line 723: range 00000000160E0CB0-00000000160E0CDB
std::string *__cdecl proto_log::MailLogBodyCommon::mutable_title[abi:cxx11](proto_log::MailLogBodyCommon *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->title_, v1);
};

// Line 747: range 00000000160E0CDC-00000000160E0CF9
const std::string *__cdecl proto_log::MailLogBodyCommon::content[abi:cxx11](
        const proto_log::MailLogBodyCommon *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->content_);
};

// Line 776: range 00000000160E0CFA-00000000160E0D25
std::string *__cdecl proto_log::MailLogBodyCommon::mutable_content[abi:cxx11](proto_log::MailLogBodyCommon *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->content_, v1);
};

// Line 800: range 00000000160E0D26-00000000160E0D43
const std::string *__cdecl proto_log::MailLogBodyCommon::sender[abi:cxx11](
        const proto_log::MailLogBodyCommon *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->sender_);
};

// Line 829: range 00000000160E0D44-00000000160E0D6F
std::string *__cdecl proto_log::MailLogBodyCommon::mutable_sender[abi:cxx11](proto_log::MailLogBodyCommon *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->sender_, v1);
};

// Line 853: range 00000000160E0D70-00000000160E0DB7
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::send_time(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->send_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->send_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->send_time_);
  }
  return this->send_time_;
};

// Line 857: range 00000000160E0DB8-00000000160E0E06
void __cdecl proto_log::MailLogBodyCommon::set_send_time(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->send_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->send_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->send_time_);
  }
  this->send_time_ = value;
};

// Line 867: range 00000000160E0E08-00000000160E0E57
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::expire_time(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time_);
  }
  return this->expire_time_;
};

// Line 871: range 00000000160E0E58-00000000160E0EAE
void __cdecl proto_log::MailLogBodyCommon::set_expire_time(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->expire_time_);
  }
  this->expire_time_ = value;
};

// Line 878: range 00000000160E0EB0-00000000160E0ECD
int __cdecl proto_log::MailLogBodyCommon::item_list_size(const proto_log::MailLogBodyCommon *const this)
{
  return google::protobuf::RepeatedPtrField<proto_log::MailItem>::size(&this->item_list_);
};

// Line 884: range 00000000160E0ECE-00000000160E0EF3
const proto_log::MailItem *__cdecl proto_log::MailLogBodyCommon::item_list(
        const proto_log::MailLogBodyCommon *const this,
        int index)
{
  return google::protobuf::RepeatedPtrField<proto_log::MailItem>::Get(&this->item_list_, index);
};

// Line 892: range 00000000160E0EF4-00000000160E0F11
proto_log::MailItem *__cdecl proto_log::MailLogBodyCommon::add_item_list(proto_log::MailLogBodyCommon *const this)
{
  return google::protobuf::RepeatedPtrField<proto_log::MailItem>::Add(&this->item_list_);
};

// Line 911: range 00000000160E0F12-00000000160E0F59
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::importance(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->importance_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->importance_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->importance_);
  }
  return this->importance_;
};

// Line 915: range 00000000160E0F5A-00000000160E0FA8
void __cdecl proto_log::MailLogBodyCommon::set_importance(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->importance_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->importance_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->importance_);
  }
  this->importance_ = value;
};

// Line 925: range 00000000160E0FAA-00000000160E0FF9
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::config_id(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  return this->config_id_;
};

// Line 929: range 00000000160E0FFA-00000000160E1050
void __cdecl proto_log::MailLogBodyCommon::set_config_id(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id_);
  }
  this->config_id_ = value;
};

// Line 936: range 00000000160E1052-00000000160E106F
int __cdecl proto_log::MailLogBodyCommon::argument_list_size(const proto_log::MailLogBodyCommon *const this)
{
  return google::protobuf::RepeatedPtrField<std::string>::size(&this->argument_list_);
};

// Line 942: range 00000000160E1070-00000000160E1095
const std::string *__cdecl proto_log::MailLogBodyCommon::argument_list[abi:cxx11](
        const proto_log::MailLogBodyCommon *const this,
        int index)
{
  return google::protobuf::RepeatedPtrField<std::string>::Get(&this->argument_list_, index);
};

// Line 970: range 00000000160E1096-00000000160E10B3
std::string *__cdecl proto_log::MailLogBodyCommon::add_argument_list[abi:cxx11](
        proto_log::MailLogBodyCommon *const this)
{
  return google::protobuf::RepeatedPtrField<std::string>::Add(&this->argument_list_);
};

// Line 1008: range 00000000160E10B4-00000000160E10FE
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::reason_type(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason_type_);
  }
  return this->reason_type_;
};

// Line 1012: range 00000000160E1100-00000000160E1151
void __cdecl proto_log::MailLogBodyCommon::set_reason_type(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason_type_);
  }
  this->reason_type_ = value;
};

// Line 1022: range 00000000160E1152-00000000160E11A6
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::item_limit_type(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_limit_type_);
  }
  return this->item_limit_type_;
};

// Line 1026: range 00000000160E11A8-00000000160E1203
void __cdecl proto_log::MailLogBodyCommon::set_item_limit_type(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_limit_type_);
  }
  this->item_limit_type_ = value;
};

// Line 1036: range 00000000160E1204-00000000160E1250
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::source_type(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->source_type_);
  }
  return this->source_type_;
};

// Line 1040: range 00000000160E1252-00000000160E12A5
void __cdecl proto_log::MailLogBodyCommon::set_source_type(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_type_);
  }
  this->source_type_ = value;
};

// Line 1050: range 00000000160E12A6-00000000160E12C3
const std::string *__cdecl proto_log::MailLogBodyCommon::tag[abi:cxx11](const proto_log::MailLogBodyCommon *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->tag_);
};

// Line 1079: range 00000000160E12C4-00000000160E12EF
std::string *__cdecl proto_log::MailLogBodyCommon::mutable_tag[abi:cxx11](proto_log::MailLogBodyCommon *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->tag_, v1);
};

// Line 1103: range 00000000160E12F0-00000000160E1342
bool __cdecl proto_log::MailLogBodyCommon::is_read(const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_read_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_read_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_read_);
  }
  return this->is_read_;
};

// Line 1107: range 00000000160E1344-00000000160E139F
void __cdecl proto_log::MailLogBodyCommon::set_is_read(proto_log::MailLogBodyCommon *const this, bool value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_read_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_read_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_read_);
  }
  this->is_read_ = value;
};

// Line 1117: range 00000000160E13A0-00000000160E13F2
bool __cdecl proto_log::MailLogBodyCommon::is_attachment_got(const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attachment_got_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 115) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attachment_got_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_attachment_got_);
  }
  return this->is_attachment_got_;
};

// Line 1121: range 00000000160E13F4-00000000160E144F
void __cdecl proto_log::MailLogBodyCommon::set_is_attachment_got(proto_log::MailLogBodyCommon *const this, bool value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attachment_got_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 115) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attachment_got_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_attachment_got_);
  }
  this->is_attachment_got_ = value;
};

// Line 1131: range 00000000160E1450-00000000160E14A2
bool __cdecl proto_log::MailLogBodyCommon::is_star(const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_star_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 114) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_star_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_star_);
  }
  return this->is_star_;
};

// Line 1135: range 00000000160E14A4-00000000160E14FF
void __cdecl proto_log::MailLogBodyCommon::set_is_star(proto_log::MailLogBodyCommon *const this, bool value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_star_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 114) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_star_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_star_);
  }
  this->is_star_ = value;
};

// Line 1145: range 00000000160E1500-00000000160E154C
google::protobuf::uint32 __cdecl proto_log::MailLogBodyCommon::collect_state(
        const proto_log::MailLogBodyCommon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->collect_state_);
  }
  return this->collect_state_;
};

// Line 1149: range 00000000160E154E-00000000160E15A1
void __cdecl proto_log::MailLogBodyCommon::set_collect_state(
        proto_log::MailLogBodyCommon *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collect_state_);
  }
  this->collect_state_ = value;
};
