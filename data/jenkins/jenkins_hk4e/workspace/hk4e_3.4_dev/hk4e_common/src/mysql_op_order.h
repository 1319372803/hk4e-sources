// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/mysql_op_order.h

// Line 18: range 000000000D40D18E-000000000D40D9A6
TableOrderData *__cdecl TableOrderData::operator=(TableOrderData *const this, const TableOrderData *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned product_num; // ecx
  mysqlpp::sql_int_unsigned coin_num; // ecx
  mysqlpp::sql_int_unsigned trade_time; // ecx
  mysqlpp::sql_int_unsigned channel_id; // ecx
  mysqlpp::sql_int_unsigned is_sandbox; // ecx
  mysqlpp::sql_int_unsigned bonus_num; // ecx
  mysqlpp::sql_int_unsigned vip_point_num; // ecx
  mysqlpp::sql_int_unsigned create_time; // ecx
  mysqlpp::sql_int_unsigned finish_time; // ecx
  const char *table_override; // rdx

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
  if ( *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->uid);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = uid;
  std::string::operator=(&this->product_id, &a2->product_id);
  std::string::operator=(&this->product_name, &a2->product_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->product_num);
  }
  product_num = a2->product_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->product_num);
  }
  this->product_num = product_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->coin_num);
  }
  coin_num = a2->coin_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->coin_num);
  }
  this->coin_num = coin_num;
  std::string::operator=(&this->total_fee, &a2->total_fee);
  std::string::operator=(&this->currency, &a2->currency);
  std::string::operator=(&this->price_tier, &a2->price_tier);
  std::string::operator=(&this->trade_no, &a2->trade_no);
  if ( *(_BYTE *)(((unsigned __int64)&a2->trade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trade_time);
  }
  trade_time = a2->trade_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->trade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trade_time);
  }
  this->trade_time = trade_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->channel_id);
  }
  channel_id = a2->channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->channel_id);
  }
  this->channel_id = channel_id;
  std::string::operator=(&this->channel_order_no, &a2->channel_order_no);
  std::string::operator=(&this->pay_plat, &a2->pay_plat);
  std::string::operator=(&this->extend, &a2->extend);
  std::string::operator=(&this->env, &a2->env);
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_sandbox >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->is_sandbox >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->is_sandbox);
  }
  is_sandbox = a2->is_sandbox;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_sandbox >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_sandbox >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_sandbox);
  }
  this->is_sandbox = is_sandbox;
  std::string::operator=(&this->region, &a2->region);
  std::string::operator=(&this->bonus, &a2->bonus);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bonus_num);
  }
  bonus_num = a2->bonus_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_num);
  }
  this->bonus_num = bonus_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vip_point_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->vip_point_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->vip_point_num);
  }
  vip_point_num = a2->vip_point_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vip_point_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vip_point_num);
  }
  this->vip_point_num = vip_point_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->create_time);
  }
  create_time = a2->create_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_time);
  }
  this->create_time = create_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->finish_time);
  }
  finish_time = a2->finish_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_time);
  }
  this->finish_time = finish_time;
  std::string::operator=(&this->pay_type, &a2->pay_type);
  std::string::operator=(&this->pay_vendor, &a2->pay_vendor);
  std::string::operator=(&this->client_type, &a2->client_type);
  std::string::operator=(&this->device, &a2->device);
  std::string::operator=(&this->client_ip, &a2->client_ip);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->client_ip);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
  return this;
};

// Line 18: range 000000000CC8E0E8-000000000CC8E256
void __cdecl TableOrderData::TableOrderData(TableOrderData *const this)
{
  std::string::basic_string(&this->product_id);
  std::string::basic_string(&this->product_name);
  std::string::basic_string(&this->total_fee);
  std::string::basic_string(&this->currency);
  std::string::basic_string(&this->price_tier);
  std::string::basic_string(&this->trade_no);
  std::string::basic_string(&this->channel_order_no);
  std::string::basic_string(&this->pay_plat);
  std::string::basic_string(&this->extend);
  std::string::basic_string(&this->env);
  std::string::basic_string(&this->region);
  std::string::basic_string(&this->bonus);
  std::string::basic_string(&this->pay_type);
  std::string::basic_string(&this->pay_vendor);
  std::string::basic_string(&this->client_type);
  std::string::basic_string(&this->device);
  std::string::basic_string(&this->client_ip);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
};

// Line 18: range 000000000D412DA0-000000000D4135B5
void __cdecl TableOrderData::TableOrderData(TableOrderData *const this, TableOrderData *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned product_num; // ecx
  mysqlpp::sql_int_unsigned coin_num; // ecx
  mysqlpp::sql_int_unsigned trade_time; // ecx
  mysqlpp::sql_int_unsigned channel_id; // ecx
  mysqlpp::sql_int_unsigned is_sandbox; // ecx
  mysqlpp::sql_int_unsigned bonus_num; // ecx
  mysqlpp::sql_int_unsigned vip_point_num; // ecx
  mysqlpp::sql_int_unsigned create_time; // ecx
  mysqlpp::sql_int_unsigned finish_time; // ecx
  const char *table_override; // rdx

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
  if ( *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->uid);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = uid;
  std::string::basic_string(&this->product_id, &a2->product_id);
  std::string::basic_string(&this->product_name, &a2->product_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->product_num);
  }
  product_num = a2->product_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->product_num);
  }
  this->product_num = product_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->coin_num);
  }
  coin_num = a2->coin_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->coin_num);
  }
  this->coin_num = coin_num;
  std::string::basic_string(&this->total_fee, &a2->total_fee);
  std::string::basic_string(&this->currency, &a2->currency);
  std::string::basic_string(&this->price_tier, &a2->price_tier);
  std::string::basic_string(&this->trade_no, &a2->trade_no);
  if ( *(_BYTE *)(((unsigned __int64)&a2->trade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trade_time);
  }
  trade_time = a2->trade_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->trade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trade_time);
  }
  this->trade_time = trade_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->channel_id);
  }
  channel_id = a2->channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->channel_id);
  }
  this->channel_id = channel_id;
  std::string::basic_string(&this->channel_order_no, &a2->channel_order_no);
  std::string::basic_string(&this->pay_plat, &a2->pay_plat);
  std::string::basic_string(&this->extend, &a2->extend);
  std::string::basic_string(&this->env, &a2->env);
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_sandbox >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->is_sandbox >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->is_sandbox);
  }
  is_sandbox = a2->is_sandbox;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_sandbox >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_sandbox >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_sandbox);
  }
  this->is_sandbox = is_sandbox;
  std::string::basic_string(&this->region, &a2->region);
  std::string::basic_string(&this->bonus, &a2->bonus);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bonus_num);
  }
  bonus_num = a2->bonus_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_num);
  }
  this->bonus_num = bonus_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vip_point_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->vip_point_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->vip_point_num);
  }
  vip_point_num = a2->vip_point_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vip_point_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vip_point_num);
  }
  this->vip_point_num = vip_point_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->create_time);
  }
  create_time = a2->create_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_time);
  }
  this->create_time = create_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->finish_time);
  }
  finish_time = a2->finish_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_time);
  }
  this->finish_time = finish_time;
  std::string::basic_string(&this->pay_type, &a2->pay_type);
  std::string::basic_string(&this->pay_vendor, &a2->pay_vendor);
  std::string::basic_string(&this->client_type, &a2->client_type);
  std::string::basic_string(&this->device, &a2->device);
  std::string::basic_string(&this->client_ip, &a2->client_ip);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->client_ip);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 18: range 000000000D40CE88-000000000D40D151
void __cdecl TableOrderData::TableOrderData(TableOrderData *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->product_id);
  std::string::basic_string(&this->product_name);
  std::string::basic_string(&this->total_fee);
  std::string::basic_string(&this->currency);
  std::string::basic_string(&this->price_tier);
  std::string::basic_string(&this->trade_no);
  std::string::basic_string(&this->channel_order_no);
  std::string::basic_string(&this->pay_plat);
  std::string::basic_string(&this->extend);
  std::string::basic_string(&this->env);
  std::string::basic_string(&this->region);
  std::string::basic_string(&this->bonus);
  std::string::basic_string(&this->pay_type);
  std::string::basic_string(&this->pay_vendor);
  std::string::basic_string(&this->client_type);
  std::string::basic_string(&this->device);
  std::string::basic_string(&this->client_ip);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_TableOrderData<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 18: range 000000000CC8EA38-000000000CC8EB70
void __cdecl TableOrderData::~TableOrderData(TableOrderData *const this)
{
  std::string::~string(&this->client_ip);
  std::string::~string(&this->device);
  std::string::~string(&this->client_type);
  std::string::~string(&this->pay_vendor);
  std::string::~string(&this->pay_type);
  std::string::~string(&this->bonus);
  std::string::~string(&this->region);
  std::string::~string(&this->env);
  std::string::~string(&this->extend);
  std::string::~string(&this->pay_plat);
  std::string::~string(&this->channel_order_no);
  std::string::~string(&this->trade_no);
  std::string::~string(&this->price_tier);
  std::string::~string(&this->currency);
  std::string::~string(&this->total_fee);
  std::string::~string(&this->product_name);
  std::string::~string(&this->product_id);
};

// Line 233: range 000000000D40E4EC-000000000D4104EF
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_TableOrderData<(mysqlpp::sql_dummy_type)0>(TableOrderData *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  const mysqlpp::String *v9; // r15
  const mysqlpp::String *v10; // r15
  const mysqlpp::String *v11; // rax
  unsigned int v12; // edx
  const mysqlpp::String *v13; // rax
  unsigned int v14; // ecx
  const mysqlpp::String *v15; // r15
  const mysqlpp::String *v16; // r15
  const mysqlpp::String *v17; // r15
  const mysqlpp::String *v18; // r15
  const mysqlpp::String *v19; // rax
  unsigned int v20; // edx
  const mysqlpp::String *v21; // rax
  unsigned int v22; // ecx
  const mysqlpp::String *v23; // r15
  const mysqlpp::String *v24; // r15
  const mysqlpp::String *v25; // r15
  const mysqlpp::String *v26; // r15
  const mysqlpp::String *v27; // rax
  unsigned int v28; // edx
  const mysqlpp::String *v29; // r15
  const mysqlpp::String *v30; // r15
  const mysqlpp::String *v31; // rax
  unsigned int v32; // edx
  const mysqlpp::String *v33; // rax
  unsigned int v34; // ecx
  const mysqlpp::String *v35; // rax
  unsigned int v36; // edx
  const mysqlpp::String *v37; // rax
  unsigned int v38; // ecx
  const mysqlpp::String *v39; // r15
  const mysqlpp::String *v40; // r15
  const mysqlpp::String *v41; // r15
  const mysqlpp::String *v42; // r15
  const mysqlpp::String *v43; // r15
  std::string rowa; // [rsp+0h] [rbp-900h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2240LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "35 32 16 27 ignore_schema_mismatches:18 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                              "nown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9"
                              " <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832"
                              " 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unkno"
                              "wn> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 3"
                              "2 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unkno"
                              "wn> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 3"
                              "2 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_TableOrderData<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862785] = -218959118;
  v4[536862787] = -218959118;
  v4[536862789] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length);
  }
  *(_DWORD *)rowa._M_string_length = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v8 = mysqlpp::String::conv<unsigned int>(v7, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 4) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 4) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 4);
  }
  *(_DWORD *)(rowa._M_string_length + 4) = v8;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v9, rowa);
  std::string::operator=(rowa._M_string_length + 8, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v10, rowa);
  std::string::operator=(rowa._M_string_length + 40, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  v11 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v12 = mysqlpp::String::conv<unsigned int>(v11, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 72) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 72) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 72);
  }
  *(_DWORD *)(rowa._M_string_length + 72) = v12;
  v13 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v14 = mysqlpp::String::conv<unsigned int>(v13, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 76) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 76) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 76) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 76);
  }
  *(_DWORD *)(rowa._M_string_length + 76) = v14;
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  v15 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 320);
  if ( *(char *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 384, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 384), v15, rowa);
  std::string::operator=(rowa._M_string_length + 80, p_anon_0 + 384);
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = 0;
  v16 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 448);
  if ( *(char *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 512, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 512), v16, rowa);
  std::string::operator=(rowa._M_string_length + 112, p_anon_0 + 512);
  std::string::~string((void *)(p_anon_0 + 512));
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 448));
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = 0;
  v17 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 576);
  if ( *(char *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 640, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 640), v17, rowa);
  std::string::operator=(rowa._M_string_length + 144, p_anon_0 + 640);
  std::string::~string((void *)(p_anon_0 + 640));
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 576));
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = 0;
  v18 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 704);
  if ( *(char *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 768, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 768), v18, rowa);
  std::string::operator=(rowa._M_string_length + 176, p_anon_0 + 768);
  std::string::~string((void *)(p_anon_0 + 768));
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 704));
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = -117901064;
  v19 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v20 = mysqlpp::String::conv<unsigned int>(v19, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 208) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 208) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 208);
  }
  *(_DWORD *)(rowa._M_string_length + 208) = v20;
  v21 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v22 = mysqlpp::String::conv<unsigned int>(v21, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 212) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) - 44) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 212) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 212);
  }
  *(_DWORD *)(rowa._M_string_length + 212) = v22;
  *(_DWORD *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) = 0;
  v23 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 832) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 832);
  if ( *(char *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 927) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 927) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 896, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 896), v23, rowa);
  std::string::operator=(rowa._M_string_length + 216, p_anon_0 + 896);
  std::string::~string((void *)(p_anon_0 + 896));
  *(_DWORD *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 832));
  *(_DWORD *)(((p_anon_0 + 832) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) = 0;
  v24 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 960) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 960);
  if ( *(char *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1055) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1055) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1024, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1024), v24, rowa);
  std::string::operator=(rowa._M_string_length + 248, p_anon_0 + 1024);
  std::string::~string((void *)(p_anon_0 + 1024));
  *(_DWORD *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 960));
  *(_DWORD *)(((p_anon_0 + 960) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) = 0;
  v25 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1088) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1088);
  if ( *(char *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1183) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1152, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1152), v25, rowa);
  std::string::operator=(rowa._M_string_length + 280, p_anon_0 + 1152);
  std::string::~string((void *)(p_anon_0 + 1152));
  *(_DWORD *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1088));
  *(_DWORD *)(((p_anon_0 + 1088) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) = 0;
  v26 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1216) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1216);
  if ( *(char *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1280, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1280), v26, rowa);
  std::string::operator=(rowa._M_string_length + 312, p_anon_0 + 1280);
  std::string::~string((void *)(p_anon_0 + 1280));
  *(_DWORD *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1216));
  *(_DWORD *)(((p_anon_0 + 1216) >> 3) + 0x7FFF8000) = -117901064;
  v27 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v28 = mysqlpp::String::conv<unsigned int>(v27, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 344) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 344) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 344);
  }
  *(_DWORD *)(rowa._M_string_length + 344) = v28;
  *(_DWORD *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) = 0;
  v29 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1344) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1344);
  if ( *(char *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1439) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1439) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1408, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1408), v29, rowa);
  std::string::operator=(rowa._M_string_length + 352, p_anon_0 + 1408);
  std::string::~string((void *)(p_anon_0 + 1408));
  *(_DWORD *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1344));
  *(_DWORD *)(((p_anon_0 + 1344) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) = 0;
  v30 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1472) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1472);
  if ( *(char *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1536, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1536), v30, rowa);
  std::string::operator=(rowa._M_string_length + 384, p_anon_0 + 1536);
  std::string::~string((void *)(p_anon_0 + 1536));
  *(_DWORD *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1472));
  *(_DWORD *)(((p_anon_0 + 1472) >> 3) + 0x7FFF8000) = -117901064;
  v31 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v32 = mysqlpp::String::conv<unsigned int>(v31, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 416) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 416) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 416);
  }
  *(_DWORD *)(rowa._M_string_length + 416) = v32;
  v33 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v34 = mysqlpp::String::conv<unsigned int>(v33, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 420) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) - 92) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 420) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 420);
  }
  *(_DWORD *)(rowa._M_string_length + 420) = v34;
  v35 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v36 = mysqlpp::String::conv<unsigned int>(v35, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 424) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 424) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 424);
  }
  *(_DWORD *)(rowa._M_string_length + 424) = v36;
  v37 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v38 = mysqlpp::String::conv<unsigned int>(v37, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 428) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) - 84) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 428) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 428);
  }
  *(_DWORD *)(rowa._M_string_length + 428) = v38;
  *(_DWORD *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) = 0;
  v39 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1600) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1600);
  if ( *(char *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1695) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1695) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1664, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1664), v39, rowa);
  std::string::operator=(rowa._M_string_length + 432, p_anon_0 + 1664);
  std::string::~string((void *)(p_anon_0 + 1664));
  *(_DWORD *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1600));
  *(_DWORD *)(((p_anon_0 + 1600) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) = 0;
  v40 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1728) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1728);
  if ( *(char *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1823) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1823) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1792, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1792), v40, rowa);
  std::string::operator=(rowa._M_string_length + 464, p_anon_0 + 1792);
  std::string::~string((void *)(p_anon_0 + 1792));
  *(_DWORD *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1728));
  *(_DWORD *)(((p_anon_0 + 1728) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) = 0;
  v41 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1856) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1856);
  if ( *(char *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1951) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1951) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1920, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1920), v41, rowa);
  std::string::operator=(rowa._M_string_length + 496, p_anon_0 + 1920);
  std::string::~string((void *)(p_anon_0 + 1920));
  *(_DWORD *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1856));
  *(_DWORD *)(((p_anon_0 + 1856) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) = 0;
  v42 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1984) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1984);
  if ( *(char *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2079) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 2079) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2048, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2048), v42, rowa);
  std::string::operator=(rowa._M_string_length + 528, p_anon_0 + 2048);
  std::string::~string((void *)(p_anon_0 + 2048));
  *(_DWORD *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1984));
  *(_DWORD *)(((p_anon_0 + 1984) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2176) >> 3) + 0x7FFF8000) = 0;
  v43 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 2112) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 2112);
  if ( *(char *)(((p_anon_0 + 2176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2207) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 2207) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2176, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2176), v43, rowa);
  std::string::operator=(rowa._M_string_length + 560, p_anon_0 + 2176);
  std::string::~string((void *)(p_anon_0 + 2176));
  *(_DWORD *)(((p_anon_0 + 2176) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 2112));
  *(_DWORD *)(((p_anon_0 + 2112) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8110) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 280) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    __asan_stack_free_6(p_anon_0, 2240LL, &rowa._anon_0);
  }
};
