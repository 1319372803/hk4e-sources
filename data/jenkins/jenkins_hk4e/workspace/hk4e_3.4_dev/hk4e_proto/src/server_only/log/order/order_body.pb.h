// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/order/order_body.pb.h

// Line 90: range 00000000178BC0B2-00000000178BC0BE
const proto_log::OrderLogBodyAdd *__cdecl proto_log::OrderLogBodyAdd::internal_default_instance()
{
  return (const proto_log::OrderLogBodyAdd *)&proto_log::_OrderLogBodyAdd_default_instance_;
};

// Line 104: range 00000000178BC0C0-00000000178BC0DE
proto_log::OrderLogBodyAdd *__cdecl proto_log::OrderLogBodyAdd::New(const proto_log::OrderLogBodyAdd *const this)
{
  return proto_log::OrderLogBodyAdd::New(this, 0LL);
};

// Line 121: range 00000000178BC0E0-00000000178BC127
int __cdecl proto_log::OrderLogBodyAdd::GetCachedSize(const proto_log::OrderLogBodyAdd *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 357: range 00000000178BC128-00000000178BC134
const proto_log::OrderLogBodyFinish *__cdecl proto_log::OrderLogBodyFinish::internal_default_instance()
{
  return (const proto_log::OrderLogBodyFinish *)&proto_log::_OrderLogBodyFinish_default_instance_;
};

// Line 371: range 00000000178BC136-00000000178BC154
proto_log::OrderLogBodyFinish *__cdecl proto_log::OrderLogBodyFinish::New(
        const proto_log::OrderLogBodyFinish *const this)
{
  return proto_log::OrderLogBodyFinish::New(this, 0LL);
};

// Line 388: range 00000000178BC156-00000000178BC19D
int __cdecl proto_log::OrderLogBodyFinish::GetCachedSize(const proto_log::OrderLogBodyFinish *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 460: range 00000000178BC19E-00000000178BC1E5
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyAdd::order_id(const proto_log::OrderLogBodyAdd *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->order_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->order_id_);
  }
  return this->order_id_;
};

// Line 464: range 00000000178BC1E6-00000000178BC234
void __cdecl proto_log::OrderLogBodyAdd::set_order_id(
        proto_log::OrderLogBodyAdd *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->order_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order_id_);
  }
  this->order_id_ = value;
};

// Line 474: range 00000000178BC236-00000000178BC285
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyAdd::uid(const proto_log::OrderLogBodyAdd *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 478: range 00000000178BC286-00000000178BC2DC
void __cdecl proto_log::OrderLogBodyAdd::set_uid(
        proto_log::OrderLogBodyAdd *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = value;
};

// Line 488: range 00000000178BC2DE-00000000178BC2FB
const std::string *__cdecl proto_log::OrderLogBodyAdd::product_id[abi:cxx11](
        const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->product_id_);
};

// Line 517: range 00000000178BC2FC-00000000178BC327
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_product_id[abi:cxx11](proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->product_id_, v1);
};

// Line 541: range 00000000178BC328-00000000178BC345
const std::string *__cdecl proto_log::OrderLogBodyAdd::product_name[abi:cxx11](
        const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->product_name_);
};

// Line 570: range 00000000178BC346-00000000178BC371
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_product_name[abi:cxx11](
        proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->product_name_, v1);
};

// Line 594: range 00000000178BC372-00000000178BC3B9
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyAdd::product_num(const proto_log::OrderLogBodyAdd *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->product_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->product_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->product_num_);
  }
  return this->product_num_;
};

// Line 598: range 00000000178BC3BA-00000000178BC408
void __cdecl proto_log::OrderLogBodyAdd::set_product_num(
        proto_log::OrderLogBodyAdd *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->product_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->product_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->product_num_);
  }
  this->product_num_ = value;
};

// Line 608: range 00000000178BC40A-00000000178BC459
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyAdd::coin_num(const proto_log::OrderLogBodyAdd *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin_num_);
  }
  return this->coin_num_;
};

// Line 612: range 00000000178BC45A-00000000178BC4B0
void __cdecl proto_log::OrderLogBodyAdd::set_coin_num(
        proto_log::OrderLogBodyAdd *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->coin_num_);
  }
  this->coin_num_ = value;
};

// Line 622: range 00000000178BC4B2-00000000178BC4CF
const std::string *__cdecl proto_log::OrderLogBodyAdd::total_fee[abi:cxx11](
        const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->total_fee_);
};

// Line 651: range 00000000178BC4D0-00000000178BC4FB
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_total_fee[abi:cxx11](proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->total_fee_, v1);
};

// Line 675: range 00000000178BC4FC-00000000178BC519
const std::string *__cdecl proto_log::OrderLogBodyAdd::currency[abi:cxx11](
        const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->currency_);
};

// Line 704: range 00000000178BC51A-00000000178BC545
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_currency[abi:cxx11](proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->currency_, v1);
};

// Line 728: range 00000000178BC546-00000000178BC563
const std::string *__cdecl proto_log::OrderLogBodyAdd::price_tier[abi:cxx11](
        const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->price_tier_);
};

// Line 757: range 00000000178BC564-00000000178BC58F
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_price_tier[abi:cxx11](proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->price_tier_, v1);
};

// Line 781: range 00000000178BC590-00000000178BC5AD
const std::string *__cdecl proto_log::OrderLogBodyAdd::trade_no[abi:cxx11](
        const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->trade_no_);
};

// Line 810: range 00000000178BC5AE-00000000178BC5D9
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_trade_no[abi:cxx11](proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->trade_no_, v1);
};

// Line 834: range 00000000178BC5DA-00000000178BC621
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyAdd::trade_time(const proto_log::OrderLogBodyAdd *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trade_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trade_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trade_time_);
  }
  return this->trade_time_;
};

// Line 838: range 00000000178BC622-00000000178BC670
void __cdecl proto_log::OrderLogBodyAdd::set_trade_time(
        proto_log::OrderLogBodyAdd *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trade_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trade_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trade_time_);
  }
  this->trade_time_ = value;
};

// Line 848: range 00000000178BC672-00000000178BC6C1
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyAdd::channel_id(const proto_log::OrderLogBodyAdd *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->channel_id_);
  }
  return this->channel_id_;
};

// Line 852: range 00000000178BC6C2-00000000178BC718
void __cdecl proto_log::OrderLogBodyAdd::set_channel_id(
        proto_log::OrderLogBodyAdd *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->channel_id_);
  }
  this->channel_id_ = value;
};

// Line 862: range 00000000178BC71A-00000000178BC737
const std::string *__cdecl proto_log::OrderLogBodyAdd::channel_order_no[abi:cxx11](
        const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->channel_order_no_);
};

// Line 891: range 00000000178BC738-00000000178BC763
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_channel_order_no[abi:cxx11](
        proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->channel_order_no_, v1);
};

// Line 915: range 00000000178BC764-00000000178BC781
const std::string *__cdecl proto_log::OrderLogBodyAdd::pay_plat[abi:cxx11](
        const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->pay_plat_);
};

// Line 944: range 00000000178BC782-00000000178BC7AD
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_pay_plat[abi:cxx11](proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->pay_plat_, v1);
};

// Line 968: range 00000000178BC7AE-00000000178BC7CB
const std::string *__cdecl proto_log::OrderLogBodyAdd::extend[abi:cxx11](const proto_log::OrderLogBodyAdd *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->extend_);
};

// Line 997: range 00000000178BC7CC-00000000178BC7F7
std::string *__cdecl proto_log::OrderLogBodyAdd::mutable_extend[abi:cxx11](proto_log::OrderLogBodyAdd *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->extend_, v1);
};

// Line 1025: range 00000000178BC7F8-00000000178BC83F
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyFinish::order_id(
        const proto_log::OrderLogBodyFinish *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->order_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->order_id_);
  }
  return this->order_id_;
};

// Line 1029: range 00000000178BC840-00000000178BC88E
void __cdecl proto_log::OrderLogBodyFinish::set_order_id(
        proto_log::OrderLogBodyFinish *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->order_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order_id_);
  }
  this->order_id_ = value;
};

// Line 1039: range 00000000178BC890-00000000178BC8DF
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyFinish::uid(const proto_log::OrderLogBodyFinish *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 1043: range 00000000178BC8E0-00000000178BC936
void __cdecl proto_log::OrderLogBodyFinish::set_uid(
        proto_log::OrderLogBodyFinish *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = value;
};

// Line 1053: range 00000000178BC938-00000000178BC97F
google::protobuf::uint32 __cdecl proto_log::OrderLogBodyFinish::finish_time(
        const proto_log::OrderLogBodyFinish *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_time_);
  }
  return this->finish_time_;
};

// Line 1057: range 00000000178BC980-00000000178BC9CE
void __cdecl proto_log::OrderLogBodyFinish::set_finish_time(
        proto_log::OrderLogBodyFinish *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_time_);
  }
  this->finish_time_ = value;
};

// Line 1067: range 00000000178BC9D0-00000000178BCA1D
bool __cdecl proto_log::OrderLogBodyFinish::is_retry(const proto_log::OrderLogBodyFinish *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_retry_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_retry_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_retry_);
  }
  return this->is_retry_;
};

// Line 1071: range 00000000178BCA1E-00000000178BCA74
void __cdecl proto_log::OrderLogBodyFinish::set_is_retry(proto_log::OrderLogBodyFinish *const this, bool value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_retry_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_retry_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_retry_);
  }
  this->is_retry_ = value;
};
